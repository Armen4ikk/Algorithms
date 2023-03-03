#include<iostream>
#include<stack>
#include<string>

bool isOpen(char ch)
{
    return ch == '{' || ch == '(' || ch == '[';
}

bool isPair(char open, char close)
{
    return open == '{' && close == '}' ||
           open == '(' && close == ')' ||
           open == '[' && close == ']';
}

bool isBalanced(std::string s)
{
    std::stack<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isOpen(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && isPair(st.top(), s[i]))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    std::string s1 = "()({[]}())"; // true
    std::string s2 = "{}"; // true
    std::string s3 = "}{"; // false
    std::string s4 = ""; // true
    std::string s5 = "(()"; // false
    std::string s6 = "())"; // false
    std::string s7 = "[(])"; // false
    std::cout << isBalanced(s1) << std::endl; // 1
    std::cout << isBalanced(s2) << std::endl; // 1
    std::cout << isBalanced(s3) << std::endl; // 0
    std::cout << isBalanced(s4) << std::endl; // 1
    std::cout << isBalanced(s5) << std::endl; // 0
    std::cout << isBalanced(s6) << std::endl; // 0
    std::cout << isBalanced(s7) << std::endl; // 0
}
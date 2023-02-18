#include <iostream>
#include <vector>

int main()
{
    int key;
    int a;
    std::vector<int> arr(10);
    std::vector<int> ans(10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % 10;
        std::cout << arr[i] << " ";
        if (i == 9)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n Enter key";
    std::cin >> key;
    for (int i = 0;i < 10; i++)
    {
        if (arr[i] == key)
        {
            ans[a++] = i;
        }
    }
    if (a != 0)
    {
        for (int i = 0; i < a; i++)
        {
            std::cout << "Key " << key << " Located in the cell " << ans[i] << std::endl;
        }
    }
    else
    {
        std::cout << "We didn't find the key " << key << " in the array";
    }
    return 0;
}
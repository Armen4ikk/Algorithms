#include <iostream>
#include <vector>

void dropDup(std::vector<int>& arr)
{
    for (auto i = arr.begin(); i != arr.end() - 1;)
    {
        if (*i == *(i + 1))
        {
            arr.erase(i);
        }
        else
        {
            i++;
        }
    }
}

void bubbleSort(std::vector<int>& arr)
{
    for (int j = 0; j < arr.size() ; j++)
    {
        for (int i = 1; i < arr.size() - j; ++i)
        {
            if (arr[i] < arr[i - 1])
            {
                std::swap(arr[i], arr[i - 1]);
            }
        }
    }
}

void printArray(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> arr{1,1,3,4,5,4,3,6,4};
    printArray(arr);
    bubbleSort(arr);
    dropDup(arr);
    printArray(arr);
    return 0;
}
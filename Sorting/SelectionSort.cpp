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

void selectionSort(std::vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
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
    selectionSort(arr);
    dropDup(arr);
    printArray(arr);
    return 0;
}
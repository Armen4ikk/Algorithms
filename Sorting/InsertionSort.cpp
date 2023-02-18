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

void InsertionSort(std::vector<int> &arr)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::vector<int> bucket(max - min + 1);
    for (int i = 0; i < arr.size(); i++)
    {
        bucket[arr[i] - min]++;
    }
    arr.clear();
    for (int i = 0; i < bucket.size(); i++)
    {
        int count = bucket[i];
        for (int j = 0; j < count; j++)
        {
            arr.push_back(i + min);
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
    InsertionSort(arr);
    dropDup(arr);
    printArray(arr);
    return 0;
}
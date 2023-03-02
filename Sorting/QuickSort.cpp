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

int patr(std::vector<int>& arr, int i, int j)
{
    int piv = i;
    int s1_index = i;
    int s2_index = i;
    for (int  k = i + 1;  k < j; k ++)
    {
        if (arr[k] >= arr[piv])
        {
            ++s2_index;
        }
        else
        {
            ++s1_index;
            std::swap(arr[s1_index], arr[k]);
            ++s2_index;
        }
    }
    std::swap(arr[piv], arr[s1_index]);
    piv = s1_index;
    return piv;
}

void quickSort(std::vector<int>& arr, int i, int j)
{
    if (i == j)
    {
        return;
    }
    int piv = patr(arr, i, j);
    quickSort(arr, i , piv);
    quickSort(arr, piv + 1, j);
}

void quickSort(std::vector<int>& arr)
{
    quickSort(arr, 0, arr.size());
}

void printArray(std::vector<int>& arr)
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
    quickSort(arr);
    dropDup(arr);
    printArray(arr);
    return 0;
}
#include <iostream>
#include <vector>

void sort(std::vector<int> &arr)
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

int main()
{
    std::vector<int> arr(10);
    int key;
    bool flag = false;
    int l = 0;
    int r = 9;
    int mid;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % 10;
        std::cout << arr[i] << " ";
        if (i == 9)
        {
            std::cout << std::endl;
        }
    }
    sort(arr);
    std::cout << "\nEnter key";
    std::cin >> key;
    while ((l <= r) && (flag != true))
    {
        mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            flag = true;
        }
        if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag)
    {
        std::cout << "Key " << key << " Located in the cell " << mid << std::endl;
    }
    else
    {
        std::cout << "We didn't find the key " << key << " in the array";
    }
    return 0;
}
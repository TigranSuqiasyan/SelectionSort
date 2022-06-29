#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
void selection_sort(std::vector<T>& vec)
{
    int size = vec.size();
    T temp{};
    bool is_sorted = false;
    for(int i{}; i < size - 1; ++i)
    {
        is_sorted = true;
        int min_index = i;
        for(int j = i + 1; j < size; j++)
        {
            if(vec[j] < vec[min_index])
            {
                min_index = j;
            }
            if(vec[j - 1] > vec[j])
                is_sorted = false;
        }
        temp = vec[i];
        vec[i] = vec[min_index];
        vec[min_index] = temp;
        if(is_sorted)
            break;
    }
}

#include <vector>

template <typename T>
void selection_sort(std::vector<T>& vec, int index)
{
    if(index == vec.size() - 1)
        return;
    bool is_sorted = true;
    T temp{};
    int size = vec.size();
    int min_index = index;
    for(int i{index}; i < size; ++i)
    {
        if(vec[i] < vec[min_index])
            min_index = i;
        if(vec[i] < vec[i - 1])
            is_sorted = false;
    }
    temp = vec[min_index];
    vec[min_index] = vec[index];
    vec[index] = temp;
    if(is_sorted)
        return;
    selection_sort(vec, index + 1);
}
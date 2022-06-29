#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
void selection_sort(std::vector<T>& vec, int index)
{
    if(index == vec.size() - 1)
        return;
    T temp{};
    int size = vec.size();
    int min_index = index;
    for(int i{index}; i < size; ++i)
    {
        if(vec[i] < vec[min_index])
            min_index = i;
    }
    temp = vec[min_index];
    vec[min_index] = vec[index];
    vec[index] = temp;
    selection_sort(vec, index + 1);
}

int main()
{
    srand(time(0));
    std::vector<int> vec(100);
    for(int i{}; i < 100; ++i)
    {
        vec[i] = rand() % 100;
    }
    selection_sort(vec, 0);
    for(int i{}; i < 100; ++i)
    {
        if(!(i % 10))
            std::cout << "\n";
        std::cout << vec[i] << " ";
    }
}
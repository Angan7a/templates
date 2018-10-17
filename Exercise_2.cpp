#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>

template<typename T1, typename T2>
class VectorMap
{
    std::vector<T1> key_;
    std::vector<T2> value_;
public:
    void insert(T1 key, T2 value)
    {
        key_.push_back(key);
        value_.push_back(value);
    }

    typename std::vector<T1>::iterator findIter(T1 key)
    {
        return std::find(key_.begin(), key_.end(), key);
    }

    T2& operator[](T1 key)
    {
        return value_[std::distance(key_.begin(), findIter(key))];
    }

    T2& at(T1 key)
    {
        if (findIter(key) == key_.end()) throw std::out_of_range("");
        return value_[std::distance(key_.begin(), findIter(key))];
    }
};

int main()
{
    VectorMap<int, char> map;
    map.insert(1, 'c');
    std::cout << map[1] << std::endl;
    map[1] = 'e';
    std::cout << map[1] << std::endl;
    std::cout << map.at(1) << std::endl;
    map.at(2);
    return 0;
}

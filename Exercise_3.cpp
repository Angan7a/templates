#include <iostream>

template<int N> 
class IsSmallPrime
{
    static const bool value = false;
public:
    bool getValue() const { return value; }
};

template<>
class IsSmallPrime<2>
{
    static const bool value = true;
public:
    bool getValue() const { return value; }
};

template<>
class IsSmallPrime<3>
{
    static const bool value = true;
public:
    bool getValue() const { return value; }
};

template<>
class IsSmallPrime<5>
{
    static const bool value = true;
public:
    bool getValue() const { return value; }
};

template<>
class IsSmallPrime<7>
{
    static const bool value = true;
public:
    bool getValue() const { return value; }
};

int main()
{
    IsSmallPrime<9> isSmallPrimeF;
    std::cout << isSmallPrimeF.getValue() << std::endl;
    IsSmallPrime<2> isSmallPrimeT;
    std::cout << isSmallPrimeT.getValue() << std::endl;
    return 0;
}

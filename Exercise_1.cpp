#include <iostream>
#include <complex>

template<typename T, typename P>
std::complex<T> makeComplex(T a, P b)
{
    return std::complex<T>{a, b};
}


int main()
{
    std::complex<int> a = makeComplex(4, 5);
    std::complex<double> b = makeComplex(3.40, 2.30);
    std::complex<int> c = makeComplex(1, 5.90);
    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    return 0;
}

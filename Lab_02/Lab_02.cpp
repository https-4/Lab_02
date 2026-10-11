
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double alpha;
    const double pi = std::acos(-1.0);
    double z1, z2;

    std::cout << "Enter alpha in radians: ";
    std::cin >> alpha;

    z1 = 2.0 * std::pow(std::sin(3.0 * pi - 2.0 * alpha), 2)
        * std::pow(std::cos(5.0 * pi + 2.0 * alpha), 2);

    z2 = 0.25 - 0.25 * std::sin(5.0 * pi / 2.0 - 8.0 * alpha);

    std::cout << std::setprecision(12);
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    std::cout << "Difference = " << std::fabs(z1 - z2) << std::endl;

    return 0;
}
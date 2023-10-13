#include <iostream>
#include <iomanip>

int main()
{
    double R1, R2, R3, R0;

    std::cout << "Enter the values of the three resistances: \n";
    std::cin >> R1 >> R2 >> R3;

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    std::cout << "Answer is " << std::setprecision(3) << R0;
}

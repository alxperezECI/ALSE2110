#include "Polinomio.h"

int main(int argc, char** argv){
    Polinomio a("3W^2+5");
    Polinomio b("6X^2+8X^3-7");
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    b.ordenar();

    std::cout << "ordenado: " << b << std::endl;

    Polinomio c = b / 8.;
    std::cout << c << std::endl;

    Polinomio d = a + b;
    std::cout << d << std::endl;

    Polinomio e = a - b;
    std::cout << e << std::endl;
    return 0;
}

#include <iostream>

int potencia(int base, int exp);



int main() {
    int base, exp;
    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa el exponente: ";
    std::cin >> exp;

    std::cout << "La potencia de " << base << " a la " << exp << " es: " << potencia(base,exp) << std::endl;
    return 0;
}

int potencia(int base, int exp) {
    if (exp== 0) {
        return 1; // Caso base o condición de paro
    }
    if (exp == 1) {
        return base; // Caso base o condición de paro
    } else {
        return base * potencia(base, exp-1) ; // Llamada recursiva
    }
}


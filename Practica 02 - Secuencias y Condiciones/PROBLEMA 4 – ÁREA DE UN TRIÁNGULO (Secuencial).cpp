#include <iostream>
int main () {
    // Declaracion de variables //
    float base;
    float altura;
    float area;
    // Obtención de datos //
    std::cout << "Ingrese la base del triangulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del triangulo: ";
    std::cin >> altura;
    // Operación aritmetica //
    area = (base * altura)/2;
    std::cout << "El area del triangulo es: " << area;
    return 0; }
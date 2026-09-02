#include <iostream>
int main () {
    // Declaracion de variables //
    float nota1;
    float nota2;
    float nota3;
    float promedio;
    // Obtención de datos //
    std::cout << "Ingrese la 1ra nota: ";
    std::cin >> nota1;
    std::cout << "Ingrese la 2da nota: ";
    std::cin >> nota2;
    std::cout << "Ingrese la 3ra nota: ";
    std::cin >> nota3;
    // Operación aritmetica //
    promedio = (nota1 + nota2 + nota3)/3;
    std::cout << "Su promedio es: " << promedio; 
return 0; }
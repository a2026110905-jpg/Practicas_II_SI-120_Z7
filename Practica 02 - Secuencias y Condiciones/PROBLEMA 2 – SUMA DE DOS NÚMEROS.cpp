#include <iostream>
int main () {
    // Declaracion de variables //
    float A;
    float B;
    float suma;
    //Obtencion de datos //
    std::cout << "Ingrese un numero: ";
    std::cin >> A;
    std::cout << "Ingrese otro numero: ";
    std::cin >> B;
    // Operacion aritmetica //
    suma = A + B;
    std::cout << "La suma de ambos numeros es: " << suma;
return 0; }
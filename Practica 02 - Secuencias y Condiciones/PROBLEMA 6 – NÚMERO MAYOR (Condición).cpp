#include <iostream>
int main()
{
    float A,B;
    std::cout << "Ingrese un numero: ";
    std::cin >> A;
    std::cout << "Ingrese otro numero: ";
    std::cin >> B;
    if (A > B)
    {
        std::cout << "El numero " << A << " es mayor que " << B << ".";
    }
    else if (B > A)
    {
     std::cout << "El numero " << B << " es mayor que " << A <<".";
    } 
    else
    {
        std::cout << "Ambos numeros son iguales.";
    }
return 0;
}
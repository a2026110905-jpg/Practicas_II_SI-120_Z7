#include <iostream>
float nota;
int main (){
    std::cout << "Ingrese su nota final: ";
    std::cin >> nota;
    if (nota >= 51)
    {
        std::cout << "APROBADO";
}
    else{
        std::cout << "REPROBADO";
    }
return 0;
}
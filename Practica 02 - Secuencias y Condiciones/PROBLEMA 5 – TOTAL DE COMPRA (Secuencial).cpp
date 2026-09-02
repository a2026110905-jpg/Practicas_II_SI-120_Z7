#include <iostream>
int main() {
    int cuadernos;
    int precio = 12;
    float total;
    std::cout << "Indique cuantos libros comprara: ";
    std::cin >> cuadernos;
    total = cuadernos * precio;
    std::cout << "Por los " << cuadernos << " cuadernos, tendra que pagar: " << total << "Bs."; 
    return 0; }

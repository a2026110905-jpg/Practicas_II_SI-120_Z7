#include <iostream>
float monto;
float descuento = 10;
float total;
int main () {
    std::cout << "Ingrese el monto a pagar: ";
    std::cin >> monto;
    if (monto > 100){
        float reducido = ((monto*descuento)/100);
        total = monto - reducido;
        std::cout << "Su monto a pagar es: " << total << ".";
    }
    else{
     std::cout << "Su monto a pagar es: " << monto << ".";   
    }
return 0;
}
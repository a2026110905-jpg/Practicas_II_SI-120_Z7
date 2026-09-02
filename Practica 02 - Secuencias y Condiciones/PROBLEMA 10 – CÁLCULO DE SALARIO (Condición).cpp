#include <iostream>
float horas;
float pago_por_hora;
int main (){
    if (horas > 40) {
        float pago_total = (40 * pago_por_hora) + ((horas - 40) * (pago_por_hora * 1.5));
        std::cout << "El pago total es: " << pago_total << std::endl;
    } else {
        float pago_total = horas * pago_por_hora;
        std::cout << "El pago total es: " << pago_total << std::endl;
    }
}
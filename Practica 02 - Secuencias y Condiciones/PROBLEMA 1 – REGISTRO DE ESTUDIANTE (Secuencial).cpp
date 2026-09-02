#include <iostream>
using namespace std;
int main () {
    // Declaracion de variable //
    char Nombre[30];
    int Edad;
    char Carrera[30];
    int Semestre;
    // Recolección de datos //
    cout << "Ingrese su nombre: ";
    cin >> Nombre;
    cout << "Ingrese su edad: ";
    cin >> Edad;
    cout << "Ingrese su carrera: ";
    cin >> Carrera;
    cout << "Ingrese en que semestre se encuentra: ";
    cin >> Semestre;
    // Exibición de datos //
    cout << "DATOS INGRESADOS" << endl;
    cout << "Nombre: "  << Nombre << "." << endl;
    cout << "Edad: " << Edad << "." << endl;
    cout << "Carrera: " << Carrera << "." << endl;
    cout << "Semestre: " << Semestre << "." << endl; 
return 0; }
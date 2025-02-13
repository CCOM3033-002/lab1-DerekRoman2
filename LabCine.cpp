#include <iostream>
#include <iomanip>
using namespace std;

/*
Asignación 1: Calculadora de Ganancias de Taquilla
Derek Raul Roman Rodriguez
801-24-1459
*/

int main() {
    // Constantes para precios de boletos y porcentaje que se queda el cine
    const double PRECIO_BOLETO_ADULTO = 10.00;
    const double PRECIO_BOLETO_NINO = 6.00;
    const double PORCENTAJE_CINE = 0.20;
    
    // Variables
    string nombrePelicula;
    int boletosAdultoVendidos, boletosNinoVendidos;
    double gananciaBruta, gananciaNeta, pagoDistribuidor;
    
    // Mostrar propósito del programa
    cout << "Este programa calcula la ganancia Bruta y Neta de taquilla y el pago al Distribuidor de una película en el cine.\n\n";
    
    // datos del usuario
    cout << "Ingrese el nombre de la película: ";
    getline(cin, nombrePelicula);
    
    cout << "Ingrese la cantidad de boletos para adultos vendidos: ";
    cin >> boletosAdultoVendidos;
    
    cout << "Ingrese la cantidad de boletos para niños vendidos: ";
    cin >> boletosNinoVendidos;
    
    // Calcular ganancias
    gananciaBruta = (boletosAdultoVendidos * PRECIO_BOLETO_ADULTO) + (boletosNinoVendidos * PRECIO_BOLETO_NINO);
    gananciaNeta = gananciaBruta * PORCENTAJE_CINE;
    pagoDistribuidor = gananciaBruta - gananciaNeta;
    
    // Mostrar informe 
    cout << "\n"; // Línea en blanco 
    cout << left << setw(30) << "Nombre de la película:" << "\"" << nombrePelicula << "\"" << endl;
    cout << left << setw(30) << "Boletos de adultos vendidos:" << setw(10) << boletosAdultoVendidos << endl;
    cout << left << setw(30) << "Boletos de ninos vendidos:" << setw(10) << boletosNinoVendidos << endl;
    cout << left << setw(30) << "Ganancia Bruta de Taquilla:" << "$" << fixed << setprecision(2) << gananciaBruta << endl;
    cout << left << setw(30) << "Ganancia Neta de Taquilla:" << "$" << fixed << setprecision(2) << gananciaNeta << endl;
    cout << left << setw(30) << "Monto Pagado al Distribuidor:" << "$" << fixed << setprecision(2) << pagoDistribuidor << endl;
    
    return 0;
}
#include <iostream>
using namespace std;
int main() {
   double producto;
   double iva = 0.15;

    //Ejercicio 1
   cout << "Ingrese el precio normal del producto \n";

   cin >>  producto;
    double productoiva = producto + producto*iva;
   cout << "El precio del producto con IVA es: " << productoiva << "\n";

   //Ejercicio 2

   int edad;
   string sexo;
   double altura;


   cout << "Ingrese su edad \n";
   cin >> edad;

    cout << "Ingrese su sexo \n";
    cin >> sexo;

    cout << "Ingrese su altura \n";
    cin >> altura;

    cout << "\n" << "\n";

    cout << "Edad: " << edad << "\n" << "Sexo: " << sexo << "\n" << "Altura: " << altura << "\n";

    //ejercicio 3

    int n1;
    int n2;

    cout << "Ingrese el primer numero\n";
    cin >> n1;
    cout << "Ingrese el segundo numero\n";
    cin >> n2;

    cout << "\nsuma: " << n1+n2 << "\n";
    cout << "resta: " << n1-n2 << "\n";
    cout << "multiplicacion: " << n1*n2 << "\n";
    cout << "division: " << n1/n2 << "\n";

    //ejercicio 4

    int mes;
    cout << "Ingrese el numero de un mes del anio\n";
    cin >> mes;
    switch (mes){
        case 1: cout << "enero\n";
            break;
        case 2: cout << "febrero\n";
            break;
        case 3: cout << "marzo\n";
            break;
        case 4: cout << "abril\n";
            break;
        case 5: cout << "mayo\n";
            break;
        case 6: cout << "junio\n";
            break;
        case 7: cout << "julio\n";
            break;
        case 8: cout << "agosto\n";
            break;
        case 9: cout << "septiembre\n";
            break;
        case 10: cout << "octubre\n";
            break;
        case 11: cout << "noviembre\n";
            break;
        case 12: cout << "diciembre\n";
            break;
        default: cout << "no es un mes valido";
    }
    return 0;
}

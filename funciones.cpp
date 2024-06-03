#include <iostream>

using namespace std;

int suma(int a, int b)
{
    double resultado = 0;
    resultado = (a + b);
    return resultado;
}
int resta(int a, int b)
{
    double resultado = 0;
    resultado = (a - b);
    return resultado;
}
int multiplicacion(int a, int b)
{
    double resultado = 0;
    resultado = (a * b);
    return resultado;
}
int division(int a, int b)
{
    double resultado = 0;
    resultado = (a / b);
    return resultado;
}

int main()
{

    int numero1 = 0;
    int numero2 = 0;
    double resultado = 0;
    int opc = 0;
    cout << "Ingrese el primer numero : \n";
    cin >> numero1;
    cout << "Ingrese el segundo numero : \n";
    cin >> numero2;

    cout << "Ingrese una opcion para realizar una operacion \n  1) suma \n 2) resta \n 3) multiplicacion \n 4) division \n";
    cin >> opc;

    switch (opc)
    {
    case 1:
        resultado = suma(numero1, numero2);
        cout << "La suma es : " << resultado << "\n";
        break;
    case 2:
        resultado = resta(numero1, numero2);
        cout << "La resta es : " << resultado << "\n";
        break;
    case 3:
        resultado = multiplicacion(numero1, numero2);
        cout << "La multiplicacion es : " << resultado << "\n";
        break;
    case 4:
        resultado = division(numero1, numero2);
        cout << "La division es : " << resultado << "\n";
        break;
    default:
        break;
    }
}

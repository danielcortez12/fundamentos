#include <iostream>

using namespace std;
string mayormenor(int a)
{

    string resultado;
    if (a > 0)
    {
        resultado = "su numero es mayor que cero \n";
    }
    else if (a == 0)
    {
        resultado = " es cero\n";
    }
    else
    {
        resultado = " su numero es negativo por lo tanto es menor que cero \n";
    }
    return resultado;
}

string parimpar(int a)
{
    string nose;
    if (a % 2 == 0)
    {
        nose == "su numero es par \n";
    }
    else
    {
        nose = "su numero es impar \n";
    }
    return nose;
}

int main()
{

    int numero = 0;

    cout << "ingrese un numero entero \n";
    cin >> numero;

    cout << " El numero que ingreso es :" << numero << " y es " << parimpar(numero) << mayormenor(numero) << ".\n";
}

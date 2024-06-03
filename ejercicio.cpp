#include <iostream>

using namespace std;

int main()
{
    int tamano;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamano;

    int arreglo[tamano];

    for (int i = 0; i < tamano; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int numpar = 0;

    int arregloPar[tamano];

    for (int i = 0; i < tamano; i++)
    {
        if (arreglo[i] % 2 == 0)
        {
            arregloPar[numpar] = arreglo[i];
            numpar++;
        }
    }

    cout << "Números pares:\n";
    for (int i = 0; i < numpar; i++)
    {
        cout << arregloPar[i] << "\n";
    }

    return 0;
}

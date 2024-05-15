#include <iostream>
using namespace std;

int main()
{
    int lugar_actual = 0;
    int nivel_destino = 0;
    int opcion = 0;

    cout << "En qué nivel te encuentras? 1-25" << "\n";
    cin >> lugar_actual;

    if (lugar_actual < 1 || lugar_actual > 25)
    {
        cout << "Piso no válido. Por favor, elija un piso entre 1 y 25." << "\n";
        return 1;
    }

    cout << "Elija un piso entre 1 y 25: ";
    cin >> nivel_destino;

    if (nivel_destino < 1 || nivel_destino > 25)
    {
        cout << "Piso no válido. Por favor, elija un piso entre 1 y 25." << "\n";
        return 1;
    }

    if (nivel_destino > lugar_actual)
    {
        cout << "Subiendo..." << "\n";
    }
    else if (nivel_destino < lugar_actual)
    {
        cout << "Bajando..." << "\n";
    }
    else
    {
        cout << "Ya está en el piso " << lugar_actual << "." << "\n";
    }

    lugar_actual = nivel_destino;

    cout << "¿Quiere subir (1) o bajar (2)? Ingrese 0 para quedarse en el mismo piso: ";
    cin >> opcion;

    if (opcion == 1)
    {
        if (lugar_actual < 25)
        {
            cout << "Subiendo al piso " << lugar_actual << "\n";
            lugar_actual++;
        }
        else
        {
            cout << "Ya está en el último piso." << "\n";
        }
    }
    else if (opcion == 2)
    {
        if (lugar_actual > 1)
        {
            cout << "Bajando al piso " << lugar_actual << "\n";
            lugar_actual--;
        }
        else
        {
            cout << "Ya está en el primer piso." << "\n";
        }
    }
    else
    {
        cout << "Quedándose en el piso " << lugar_actual << "\n";
    }

    return 0;
}

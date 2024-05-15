#include <iostream>

using namespace std;

int main()
{
    int TipoMotor = 0;

    cout << "Bienvenido al taller de motores" << "\n";
    cout << "Ingrese un numero entre el 0 y 4" << "\n";
    cin >> TipoMotor;

    switch (TipoMotor)
    {
    case 0:
        cout << "No esta establecido un valor definido para el tipo de bomba" << "\n";
        break;
    case 1:
        cout << "La bomba es una bomba de agua" << "\n";
        break;
    case 2:
        cout << "La bomba es una bomba de gasolina" << "\n";
        break;
    case 3:
        cout << "La bomba es una bomba de hormigón" << "\n";
        break;
    case 4:
        cout << "La bomba es una bomba de pasta alimenticia" << "\n";
        break;
    default:
        cout << "No existe un valor válido para tipo de bomba" << "\n";
        break;
    }
}

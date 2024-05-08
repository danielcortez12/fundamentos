#include <iostream>

using namespace std;

int main()
{
    char opcion, variable = 'x';

    do
    {
        cout << "Bienvenido al comedor Encarnación"
             << "\n";
        cout << "Menu"
             << "\n";
        cout << "A Carne Asada"
             << "\n";
        cout << "B Pollo"
             << "\n";
        cout << "C Cerdo"
             << "\n";
        cout << "Seleccione una opcion"
             << "\n";
        cin >> opcion;
        cout << "Opcion seleccionada"
             << "\n";
    } while (opcion != variable);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char letra;
    while (letra)
    {
        cout << "Bienvenido a comedor Encarnacion para ver el menu seleccione una opcion" << endl;
        cout << "Presiona A" << endl;
        cout << "Presiona B" << endl;
        cout << "Presiona C" << endl;
        cout << "Presiona D" << endl;
        cout << "Presiona E" << endl;
        cout << "Presione X si no quiere continuar " << endl;
        cout << "ingrese la opcion" << endl;
        cin >> letra;

        if (letra == 'x' || letra == 'X')
        {
            break;
        };

        switch (letra)
        {
        case 'A' || 'a':
            cout << "el menú es higado encebollado lleva fresco y 2 tortillas" << endl;
            break;
        case 'b':
        case 'B':
            cout << "el menú es higado encebollado lleva fresco y 2 tortillas" << endl;
            break;
        case 'c':
        case 'C':
            cout << "el menú es higado encebollado lleva fresco y 2 tortillas" << endl;
            break;
        case 'd':
        case 'D':
            cout << "el menú es higado encebollado lleva fresco y 2 tortillas" << endl;
            break;
        case 'E':
        case 'e':
            cout << "el menú es higado encebollado lleva fresco y 2 tortillas" << endl;
            break;
        default:
            break;
        }
    }
}
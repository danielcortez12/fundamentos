#include <iostream>

using namespace std;

int main()
{
    char l;

    cout << "ingrese una de las letras del menú\n";
    cout << "R\n";
    cout << "Y\n";
    cout << "B\n";
    cout << "W\n";
    cout << "K\n";
    cout << "C\n";
    cout << "G\n";
    cin >> l;

    switch (l)
    {
    case 'R':
    case 'r':
        cout << "el color es rojo\n";
        break;
    case 'Y':
    case 'y':
        cout << "el color es amarillo\n";
        break;
    case 'B':
    case 'b':
        cout << "el color es azul\n";
        break;
    case 'W':
    case 'w':
        cout << "el color es blanco\n";
        break;
    case 'K':
    case 'k':
        cout << "el color es negro\n";
        break;
    case 'C':
    case 'c':
        cout << "el color es cian\n";
        break;
    case 'G':
    case 'g':
        cout << "el color es verde\n";
        break;

    default:
        break;
    }
}
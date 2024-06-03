#include <iostream>

using namespace std;

int main()
{
    float notas[6];
    float promedio = 0;
    string nombre;

    cout << "ingrese su nombre : " << "\n";
    cin >> nombre;

    for (int i = 0; i < 6; i++)
    {
        cout << "ingrese una nota" << "\n";
        cin >> notas[i];
        promedio += notas[i];
    }

    promedio = promedio / 6;
    cout << nombre << " su promedio es de : " << promedio << "\n";
}
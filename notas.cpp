#include <iostream>

using namespace std;

int main()
{
    double c1 = 0;
    double c2 = 0;
    double p1 = 0;
    double p2 = 0;
    double lab = 0;
    double proyecto = 0;
    string nombre;
    double promedio = 0;

    cout << "ingrese su nombre" << "\n";
    cin >> nombre;
    cout << "ingrese la nota del corto 1" << "\n";
    cin >> c1;
    cout << "ingrese la nota del corto 2" << "\n";
    cin >> c2;
    cout << "ingrese la nota del parcial 1" << "\n";
    cin >> p1;
    cout << "ingrese la nota del parcial 2" << "\n";
    cin >> p2;
    cout << "ingrese la nota del laboratorio" << "\n";
    cin >> lab;
    cout << "ingrese la nota del proyecto" << "\n";
    cin >> proyecto;
    c1 = c1 * 0.1;
    c2 = c2 * 0.1;
    p1 = p1 * 0.15;
    p2 = p2 * 0.20;
    lab = lab * 0.20;
    proyecto = proyecto * 0.25;
    promedio = c1 + c2 + p1 + p2 + lab + proyecto;

    if (promedio >= 6 && promedio <= 10)
    {
        cout << nombre << " Paso la materia y su promedio es : " << promedio << "\n";
    }
    else
    {
        cout << nombre << " No paso la materia, su promedio es :" << promedio << "\n";
    }
}
#include <iostream>

using namespace std;

int main()
{
    int edad = 0;

    cout << "Porfavor ingrese su edad :" << "\n";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "usted es mayor de edad " << "\n";
    }
    else
    {
        cout << "usted es menor de edad" << "\n";
    }
}
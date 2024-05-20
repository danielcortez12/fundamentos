#include <iostream>
#include <cstdlib> // para generar los numeros aleatorios
#include <ctime>   //de tiempo

using namespace std;

int main()
{
    srand(time(0));
    int Jugador;
    char Nuevo = 's';

    while (Nuevo == 's' || Nuevo == 'S')
    {
        int Computadora = rand() % 3 + 1;

        cout << "Elije una opción:\n";
        cout << "1. Piedra\n";
        cout << "2. Papel\n";
        cout << "3. Tijera\n";
        cin >> Jugador;

        // Validar la entrada del jugador
        if (Jugador < 1 || Jugador > 3)
        {
            cout << "Opción inválida. Por favor elije 1, 2 o 3.\n";
            continue;
        }

        cout << "La computadora eligió: ";
        switch (Computadora)
        {
        case 1:
            cout << "Piedra\n";
            break;
        case 2:
            cout << "Papel\n";
            break;
        case 3:
            cout << "Tijera\n";
            break;
        }

        if (Jugador == Computadora)
        {
            cout << "Empate!\n";
        }
        else if ((Jugador == 1 && Computadora == 3) ||
                 (Jugador == 2 && Computadora == 1) ||
                 (Jugador == 3 && Computadora == 2))
        {
            cout << "Ganaste!\n";
        }
        else
        {
            cout << "Perdiste!\n";
        }

        cout << "¿Quieres jugar de nuevo? (s/n): ";
        cin >> Nuevo;
    }

    return 0;
}
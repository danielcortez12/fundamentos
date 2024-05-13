#include <iostream>

using namespace std;

int main()
{
    float salario = 0;
    int hora = 0;
    string empleado;
    float hora_extra = 0;
    float salario_extra = 0;
    float salario_final = 0;
    float impuesto_1 = 0;
    float impuesto_2 = 0;

    cout << "ingrese su nombre" << "\n";
    cin >> empleado;
    cout << "ingrese sus horas trabajadas" << "\n";
    cin >> hora;

    if (hora <= 160)
    {
        salario = hora * 10;
        cout << empleado << " su salario es de " << salario << "\n";
    }
    else if (hora > 160)
    {
        salario = hora * 10;
        hora_extra = hora - 160;
        salario_extra = hora_extra * 15;
        salario_final = salario_extra + salario;
        cout << empleado << " su salario es de : " << salario << "\n";
        cout << empleado << " sus horas extras fueron : " << hora_extra << "\n";
        cout << empleado << " su salario añadido por las horas extras son : " << salario_extra << "\n";
        cout << empleado << " su salario con horas extras es de : " << salario_final << "\n";
    }
    else
    {
        return 0;
    }

    if (salario < 2000)
    {
        cout << "Su salario es libre de impuesto" << "\n";
    }
    else if (salario_final >= 2000 && salario_final <= 2200)
    {
        impuesto_1 = salario_final * 0.8;
        cout << empleado << " Su salario ahora es de : " << impuesto_1 << "\n";
    }
    else if (salario_final >= 2201)
    {
        impuesto_2 = salario_final * 0.7;
        cout << empleado << " Su salario ahora es de : " << impuesto_2 << "\n";
    }
}
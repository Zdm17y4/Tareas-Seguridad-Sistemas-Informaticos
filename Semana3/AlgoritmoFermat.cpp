#include <iostream>
#include <cmath>
using namespace std;

// funcion para verificar si es decimal (servira para entrar a la condicional)
bool esDecimal(float n)
{
    return n != (int)n;
}

int main()
{
    int n;
    cin >> n;
    double y;

    // el integer sirve tomar el entero mayor
    int x = (int)pow(n, 0.5) + 1;

    // se inicia un bucle while
    while (true)
    {
        // se verifica si es un cuadrado perfecto
        y = pow(x * x - n, 0.5);
        if (esDecimal(y))
        {
            // se le aumenta en 1 a x si la raiz no es un cuadrado perfecto
            x++;
            continue;
        }
        else
            // se rompe el bucle en caso "y" sea un cuadrado perfecto
            break;
    }

    // operaciones para "p" y "q"
    int p = x + y;
    int q = x - y;

    cout << "p = x + y\t p = " << p << endl;
    cout << "q = x - y\t q = " << q << endl;
}
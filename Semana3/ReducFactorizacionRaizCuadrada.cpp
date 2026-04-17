#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

// funcion para hallar el gcd
int mcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    srand(time(0));
    // x = A(n, a)
    vector<int> x; 
    int n, p, q;
    cout << "Ingrese n: ";
    cin >> n;
    int y = 17;
    int a = (y * y) % n;

    for (int i = 0; i < n; i++)
    {
        if ((i * i) % n == a)
        {
            x.push_back(i);
        }
    }
    
    // Elegir una raíz que no sea +-y
    int indice = rand() % x.size();
    int x_elegida = x[indice];

    // Calcular factor
    int diferencia = x_elegida - y;
    if (diferencia < 0) diferencia = -diferencia;
    p = mcd(diferencia, n);
    q = n / p;
    
    // Mostrar resultados
    cout << "y = " << y << endl;
    cout << "a = " << a << endl;
    cout << "Raíces encontradas en x : ";
    for (int r : x) cout << r << " ";
    cout << endl;
    cout << "Raíz elegida: " << x_elegida << endl;
    cout << "p = " << p << ", q = " << q << endl;
}
#include <iostream>
using namespace std;

void IB(int v[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int aux = v[i], izq = 0, der = i - 1;
        while (izq <= der)
        {
            int mitad = int ((izq + der) / 2);
            if (aux < v[mitad])
                der = mitad - 1;
            else
                izq = mitad + 1;
        }
        for (int j = i - 1; j >= izq; j--)
        {
            v[j + 1] = v[j];
        }
        v[izq] = aux;
    }
}

int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int v[n];
    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    IB(v, n);
    cout << "Arreglo ordenado (con inserción binaria): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
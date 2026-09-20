#include <iostream>
using namespace std;

void IDC(int v[], int n)
{
    int cen = 1;
    int i = 0;
    while (i < n - 1 && cen == 1)
    {
        cen = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cen = 1;
            }
        }
        i = i + 1;
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
    IDC(v, n);
    cout << "Arreglo ordenado: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
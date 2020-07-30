#include <iostream>

using namespace std;

void ordenar(int a[], int n);

int main ()
{
    int arreglo[5]= {3,2,1,5,4};
    ordenar(arreglo, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arreglo[i];
    }
    return 0;

}

void ordenar(int a[], int n)
{
    int i, j, aux, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;

    }
}

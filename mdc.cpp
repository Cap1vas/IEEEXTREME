#include <iostream>
using namespace std;

int mdc(int a, int b)
{
    int maior;
    int valor;
    if (a > b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    int i = 1;
    while (i < maior)
    {

        if (a % i == 0 && b % i == 0)
        {
            valor = i;
        }
        i++;
    }
    return valor;
}

int main()
{

    cout << "Eh " << mdc(10, 20);
    return 0;
}
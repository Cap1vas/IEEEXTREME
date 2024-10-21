#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int fatorial(int num)
{
    int resultado = 1;
    for (int i = 2; i <= num; i++)
    {
        resultado *= i;
    }
    return resultado;
}

void combinacao(int *p, int *n)
{
    int fatorial_digitos = fatorial(*p);
    cout << "O valor do fatorial dos dígitos eh " << fatorial_digitos << "\n";

    if ((*n % 8) == 0)
    {
        cout << "O numero " << *n << " eh divisivel por 8 \n";
    }
    else
    {
        cout << "O numero " << *n << " nao eh divisivel por 8 \n";
    }
}

void permuta(string str, int l, int r, set<int> &permutacoes)
{
    if (l == r)
    {
        int numero = stoi(str);
        if (str[0] != '0')
        {
            permutacoes.insert(numero);
        }
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);
            permuta(str, l + 1, r, permutacoes);
            swap(str[l], str[i]);
        }
    }
}

void verificaDivisibilidade(set<int> &permutacoes)
{
    int menorDivisivel = -1;
    for (const auto &numero : permutacoes)
    {
        if (numero % 8 == 0)
        {
            if (menorDivisivel == -1 || numero < menorDivisivel)
            {
                menorDivisivel = numero;
            }
        }
    }
    cout << (menorDivisivel != -1 ? menorDivisivel : -1) << "\n";
}

void casas(int n)
{
    int contador = 1;
    int numero_original = n;
    while (n >= 10)
    {
        n /= 10;
        contador++;
    }

    combinacao(&contador, &numero_original);
    cout << "Numero de casas: " << contador << "\n";
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "O valor eh 0\n";
        return 0;
    }

    string str = to_string(n);
    set<int> permutacoes;
    permuta(str, 0, str.length() - 1, permutacoes);
    verificaDivisibilidade(permutacoes);

    return 0;
}

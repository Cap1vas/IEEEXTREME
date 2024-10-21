#include <iostream>
using namespace std;

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int result, a, b;
    cout << "Valor A";
    cin >> a;
    cout << "Valor B";
    cin >> b;
    cout << "O valor eh " << (result = soma(a, b));

    return 0;
}
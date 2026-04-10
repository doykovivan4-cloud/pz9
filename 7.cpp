#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int op;
    int a, b;
    
    cin >> a >> b >> op;
switch(op)
{
case 1: cout << a+b;   
    break;
case 2: cout << a-b;   
    break;
case 3: cout << a*b;   
    break;
case 4:   if (b==0)
    {
        cout << "Деление на ноль";
    }   
    else
    {
    cout << a/b;
    }
    break;
    default: cout << "Ошибка";
}


    return 0;
}

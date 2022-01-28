// Задача - На вход поступает трёхзначное число, нужно разделить его на составляющие (на цифры)
//Пример:

//Вход 345
//Выход 3, 4, 5

#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL,"Russian");
    
    int x,a,b,c;

    cout<<"Введите 3-значное число"<<endl;
    cin>>x;

    a=x/100;
    b=(x%100)/10;
    c=x%10;

    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
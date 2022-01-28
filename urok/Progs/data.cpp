#include <iostream>

using namespace std;

int main()
{
    
setlocale(LC_ALL,"Russian");

int d,m,g,tohc;

char

toch='.';
    
cout<<"Введите дату своего рождения "<<endl;
cout<<"День: ";
cin>>d;
cout<<"Месяц: ";
cin>>m;
cout<<"Год: ";
cin>>g;
    
if (d>30)
    {
    cout<<"Вы ввели не коректное число в строку с днями !!!"<<endl;
    d=30;
    }

if (m>12)
    {
    cout<<"Вы ввели не коректное значения в стороку Месяц"<<endl;

    m=1;
    }

if (g<1950)
    {
    cout<<"Вы ввели некоректный год рождения попробуйте сново"<<endl;
    cin>>g;
    }

if (g>1950)
    {
    cout<<"Молодец это похожена правду "<<endl;
    }
else
    {
    cout<<"Высново ввели не коректное значение в стороку год Значение будет равно 0"<<endl;
    g=0;
    }
   
    cout<<"Дата рождения: "<<d<<"."<<m<<"."<<g<<endl;
        

    return 0;

}
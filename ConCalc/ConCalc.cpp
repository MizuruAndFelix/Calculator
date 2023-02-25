#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;


class Calculator
{
public:
    double num1;
    double num2;

    Calculator(double num1, double num2);

    double Сложение();
    double Вычитание1_2();
    double Вычитание2_1();
    double Умножение();
    double Деление1_2();
    double Деление2_1();
    bool Установить1(double num1);
    bool Установить2(double num2);
};

double Calculator::Сложение()
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    return num1 + num2;
}

double Calculator::Вычитание1_2()
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    return num1 - num2;
}

double Calculator::Вычитание2_1()
{
    cout << num2 << " - " << num1 << " = " << num2 - num1 << endl;
    return num2 - num1;
}

double Calculator::Умножение()
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    return num1 * num2;
}

double Calculator::Деление1_2()
{
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    return num1 / num2;
}

double Calculator::Деление2_1()
{
    cout << num2 << " / " << num1 << " = " << num2 / num1 << endl;
    return num2 / num1;
}
//стандартыне операции все



bool Calculator::Установить1(double num1)
{
    if (num1 != 0)
    {
        this->num1 = num1;
        return true;
    }
    else
    {
        return false;
    }
}

bool Calculator::Установить2(double num2)
{
    if (num1 != 0)
    {
        this->num2 = num2;
        return true;
    }
    else
    {
        return false;
    }
}


Calculator::Calculator(double num1_, double num2_)
{
    num1 = num1_;
    num2 = num2_;
}

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N = 1;

    while (N != 0)
    {
        Calculator S(21, 21);
        cout << "Введите num1: ";
        cin >> S.num1;
        if (S.num1 == 0)
        {
            cout << "Неверный ввод!\n";
            continue;
        }

        cout << "Введите num2: ";
        cin >> S.num2;
        if (S.num2 == 0)
        {
            cout << "Неверный ввод!\n";
            continue;
        }





        S.Сложение();
        S.Вычитание1_2();
        S.Вычитание2_1();
        S.Деление1_2();
        S.Деление2_1();
        S.Умножение();



    }
}



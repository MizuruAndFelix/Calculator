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

    bool SetNum1(double num1);
    bool SetNum2(double num2);

    double Summ();
    double Diff1_2();
    double Diff2_1();
    double Mult();
    double Div1_2();
    double Div2_1();

};
//функции
double Calculator::Summ()
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    return num1 + num2;
}

double Calculator::Diff1_2()
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    return num1 - num2;
}

double Calculator::Diff2_1()
{
    cout << num2 << " - " << num1 << " = " << num2 - num1 << endl;
    return num2 - num1;
}

double Calculator::Mult()
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    return num1 * num2;
}

double Calculator::Div1_2()
{
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    return num1 / num2;
}

double Calculator::Div2_1()
{
    cout << num2 << " / " << num1 << " = " << num2 / num1 << endl;
    return num2 / num1;
}
//стандартыне операции все



bool Calculator::SetNum1(double num1)
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

bool Calculator::SetNum2(double num2)
{
    if (num2 != 0)
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
    int num = 0;
    Calculator S(1, 1);

    while (true)
    {      
        cout << "Введите num1 "; //num1
        cin >> num;

        if (S.SetNum1(num) == false)
        {
            cout << "\nневерный ввод!\n";
            continue;
        }
        else
        {      
            while (true)
            {
                cout << "Введите num2 ";
                cin >> num;

                if (S.SetNum2(num) == false)
                {
                    cout << "\nневерный ввод!\n";
                    continue;
                }
                else
                {
                    S.Summ();
                    S.Diff1_2();
                    S.Diff2_1();
                    S.Div1_2();
                    S.Div2_1();
                    S.Mult();
                    
                    break;
                }
            }
        }
    }
}

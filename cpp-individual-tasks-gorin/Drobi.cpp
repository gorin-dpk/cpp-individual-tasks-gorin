#include "Drobi.h"
#include <iostream>
using namespace std;

void Drobi::SetFirst(long value)
{
    first = value;
}
void Drobi::SetSecond(unsigned short value)
{
    second = value;
}

bool Drobi::Read(const char* txt)
{
    if (txt) cout << txt << endl;
    int x1, x2, x3, y1, y2, y3;

    cout << "X1: " && cin >> x1;
    cout << "Y1: " && cin >> y1;

    SetFirst(x1);
    SetSecond(y1);
    return true;
}

void Drobi::Add(Drobi& b) {
    cout << "\nСложение: " << first + b.first << "/" << second + b.second << endl;
}

void Drobi::Sub(Drobi& b) {
    cout << "Вычитание: " << first - b.first << "/" << second - b.second << endl;
}

void Drobi::Mul(Drobi& b) {
    cout << "Умножение: " << first * b.first << "/" << second * b.second << endl;
}

void Drobi::Comparison(Drobi& b) {
    if (first == b.first && second == b.second)
    {
        cout << "Дроби равны" << endl;
    }
    else {
        if ((first - b.first) > 0) {
            cout << "Первая дробь больше\n\n";
        }
        else {
            cout << "Вторая дробь больше\n\n";
        }
    }
};

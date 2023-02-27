#include <iostream>
#include "test.h"
#include <windows.h>
#include "Date1.h"
#include "Date2.h"
#include "BankAccount.h"
#include "Bankomat.h"
#include "Drobi.h"
#include "Payment.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;
    Date1 dateFirst1;
    Date1 dateSecond1;
    Date2 dateFirst2;
    Date2 dateSecond2;
    BankAccount Ba;
    Bankomat B;
    Drobi D1;
    Drobi D2;
    Payment pm;
    double firstD, secondD, thirdD;
    int firstI, secondI, thirdI;
    cout << "Введите номер задания: ";
    int exercise;
    cin >> exercise;

    switch (exercise) {
        case 1:
            cout << "------1------" << endl;
            cout << "1 значение: " && cin >> firstD;
            cout << "2 значение: " && cin >> firstI;
            cout << a.PowDI(firstD, firstI) << endl;
            break;
        case 2:
            cout << "------2------" << endl;
            cout << "1 значение: " && cin >> firstD;
            cout << "2 значение: " && cin >> secondD;
            cout << a.PowDD(firstD, secondD) << endl;
            break;
        case 3:
            cout << "------3------" << endl;
            cout << "1 значение: " && cin >> firstI;
            cout << "2 значение: " && cin >> secondI;
            a.DoubleInt(firstI, secondI);
            break;
        case 4:
            cout << "------4------" << endl;
            cout << "Номинал: " && cin >> firstI;
            cout << "Количество: " && cin >> secondI;
            a.MoneyCounter(firstI, secondI);
            break;
        case 5:
            cout << "------5------" << endl;
            cout << "Цена товара: " && cin >> firstD;
            cout << "Количество: " && cin >> firstI;
            a.PriceOfGood(firstD, firstI);
            break;
        case 6:
            cout << "------6------" << endl;
            cout << "Общая калорийность: " && cin >> firstI;
            cout << "Общая масса: " && cin >> firstD;
            a.ProductСalories(firstI, firstD);
            break;
        case 7:
            cout << "------7------" << endl;
            cout << "Левая граница: " && cin >> firstD;
            cout << "Правая граница: " && cin >> secondD;
            cout << "Число: " && cin >> thirdD;
            if (a.IsNumberInRange(firstD, secondD, thirdD)) cout << "Число принадлежит диапазону" << endl;
            else cout << "Число не принадлежит диапазону" << endl;
            break;
        case 8:
            cout << "------8------" << endl;
            cout << "Левая граница: " && cin >> firstI;
            cout << "Правая граница: " && cin >> secondI;
            cout << "Число: " && cin >> thirdI;
            if (a.IsNumberInRange2(firstI, secondI, thirdI)) cout << "Число принадлежит диапазону" << endl;
            else cout << "Число не принадлежит диапазону" << endl;
            break;
        case 9:
            cout << "------9------" << endl;
            cout << "Часы: " && cin >> firstI;
            cout << "Минуты: " && cin >> secondI;
            a.HoursToMinutes(firstI, secondI);
            break;
        case 10:
            cout << "------10------" << endl;
            cout << "X: " && cin >> firstD;
            cout << "Y: " && cin >> secondD;
            cout << a.DistXY(firstD, secondD) << endl;
            break;
        case 11:
            cout << "------11------" << endl;
            cout << "Оклад: " && cin >> firstD;
            cout << "Отработано дней: " && cin >> secondI;
            a.Salary(firstD, secondI);
            break;
        case 12:
            cout << "------12------" << endl;
            cout << "Продолжительность в мин: " && cin >> firstI;
            cout << "Стоимость минуты в руб: " && cin >> secondD;
            a.PhoneTalk(firstI, secondD);
            break;
        case 13:
            cout << "------13------" << endl;
            cout << "Целая часть числа: " && cin >> firstD;
            cout << "Дробная часть числа: " && cin >> secondD;
            cout << "Число: " && cin >> thirdD;
            cout << a.Multiply(firstD, secondD, thirdD) << endl;
            break;
        case 14:
            cout << "------14------" << endl;
            cout << "Положение указателя по X: " && cin >> firstI;
            cout << "Положение указателя по Y: " && cin >> secondI;

            if (firstI > 0 && firstI <= GetSystemMetrics(SM_CXSCREEN)
                && secondI > 0 && secondI <= GetSystemMetrics(SM_CYSCREEN))
                cout << "Положение указателя: " << firstI << " , " << secondI << endl;
            else {
                cout << "Неверное значение, превыщающее границы." << endl;
                return 0;
            }
            
            cout << "Изменить положение указателя по X на: " && cin >> firstI;
            a.ChangePointerX(firstI);
            cout << "Изменить положение указателя по Y на: " && cin >> secondI;
            a.ChangePointerY(secondI);
            break;
        case 15:
            cout << "------15------" << endl;
            cout << "Целая часть числа: " && cin >> firstI;
            cout << "Дробная часть числа: " && cin >> secondI;
            cout << "Число: " && cin >> thirdI;
            cout << a.Multiply2(firstI, secondI, thirdI) << endl;
            break;
        case 16:
            cout << "------16------" << endl;
            cout << "Введите первую дату: " << endl;
            dateFirst1.InitializeByString();
            dateFirst1.IsLeapYear();
            cout << "Введите количество дней которые вы хотите добавить к дате: " && cin >> firstI;
            dateFirst1.AddDays(firstI);
            cout << "Введите количество дней которые вы хотите вычесть из даты: " && cin >> secondI;
            dateFirst1.DeleteDays(secondI);

            cout << endl;
            cout << "Введите вторую дату: " << endl;
            dateSecond1.InitializeByString();
            dateFirst1.Comparsion(dateSecond1);
            dateFirst1.GetDaysCountBetweenDate(dateSecond1);
            break;
        case 17:
            cout << "------17------" << endl;
            cout << "Введите первую дату в сек: ";
            dateFirst2.InitializeBySeconds();

            cout << "Введите количество секунд которые вы хотите добавить к дате: " && cin >> firstI;
            dateFirst2.AddSeconds(firstI);
            cout << "Введите количество секунд которые вы хотите вычесть из даты: " && cin >> secondI;
            dateFirst2.DeleteSeconds(secondI);

            cout << "Первая дата в секундах: " << dateFirst2.GetDateInSeconds() << endl;
            cout << "Первая дата в минутах: " << dateFirst2.GetDateInMinutes() << endl;

            cout << "Введите вторую дату в сек: ";
            dateSecond2.InitializeBySeconds();

            dateFirst2.GetSecondsCountBetweenDate(dateSecond2);
            break;
        case 18:
            cout << "------18------" << endl;
            char str[50];
            Ba.Init("Eazy E", 1, 50, 1000.6789);
            Ba.Display();
            Ba.ReplaceName("2Pac");
            Ba.WithDraw(500);
            Ba.Put(1000);
            Ba.Display();
            Ba.Credit();
            cout << Ba.MoveIn(30.56) << endl;
            Ba.Display();
            Ba.FloatToStr(str);
            break;
        case 19:
            cout << "------19------" << endl;
            unsigned int Id, money1, money2, money3, money4, outMoney;
            cout << "Введите номер банкомата " && cin >> Id;
            cout << "Введите кол-во 500 купюр " && cin >> money1;
            cout << "Введите кол-во 1000 купюр " && cin >> money2;
            cout << "Введите кол-во 2000 купюр " && cin >> money3;
            cout << "Введите кол-во 5000 купюр " && cin >> money4;
            B.Init(Id);
            B.NumberOfBanknotes(money1, money2, money3, money4);
            B.Display();
            cout << "Какое количество денег снять? " && cin >> outMoney;
            B.WithdrawMoney(outMoney);
            B.Display();
            break;
        case 20:
            cout << "------20------" << endl;
            D1.Read("Введите значения 1 дроби: ");
            D2.Read("Введите значения 2 дроби: ");

            D1.Add(D2);
            D1.Sub(D2);
            D1.Mul(D2);
            D1.Comparison(D2);
            break;
        case 21:
            cout << "------21------" << endl;
            pm.Init();
            pm.NachSum();
            cout << "Начисленная сумма = " << pm.GetNachSum() << endl;
            pm.UderSum();
            cout << "Удержанная сумма = " << pm.GetUderSum() << endl;
            pm.ZP();
            cout << "Заработная плата = " << pm.GetZP() << endl;
            pm.Stag();
            cout << "Стаж = " << pm.GetStag() << endl;
            break;
        default:
            cout << "Такой задачи нет." << endl;
            return 0;
    }
}

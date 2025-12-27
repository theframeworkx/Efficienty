#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double received;
    double spent;

    cout << "Введите Полезню работу (в Дж.):" << endl;
    cin >> received;

    cout << "Введите Затраченную работу (в Дж.):" << endl;
    cin >> spent;


    // n = Ar / Qs * 100%
    cout << "КПД: " << ((received / spent) * 100) << "%" << endl;
    if (received >= spent) cout << "| + КПД Выше 100% в реальном мире невозможен.";
}

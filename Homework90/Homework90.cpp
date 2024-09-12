#include <iostream>
using namespace std;

int main()
{
    //1
    //int number1;
    //int number2;
    //int sum;
    //int mul;
    //float sred;
    //cout << "Введите 1 число: ";
    //cin >> number1;
    //cout << "Введите 2 число: ";
    //cin >> number2;
    //sum = number1 + number2;
    //mul = number1 * number2;
    //sred = (number1 + number2) / 2;
    //cout << "Сумма: " << sum << "\nДобуток: " << mul << "\nCередне арефмiтичне: " << sred;

    //2
    //int number1;
    //int number2;
    //int number3;
    //int sum;
    //int mul;
    //float sred;
    //cout << "Введите 1 число: ";
    //cin >> number1;
    //cout << "Введите 2 число: ";
    //cin >> number2;
    //cout << "Введите 3 число: ";
    //cin >> number3;
    //sum = number1 + number2 + number3;
    //mul = number1 * number2 * number3;
    //sred = (number1 + number2 + number3) / 3;
    //cout << "Сумма: " << sum << "\nДобуток: " << mul << "\nCередне арефмiтичне: " << sred;

    float price;
    int quantity;
    float discount;
    float sum;
    cout << "Введите цену ноутбука: ";
    cin >> price;
    cout << "Введите количество наутбуков: ";
    cin >> quantity;
    cout << "Введите скидку: ";
    cin >> discount;
    sum = (price * quantity);
    sum = sum - sum * (discount / 100);
    cout << "Сумма: " << sum;
}

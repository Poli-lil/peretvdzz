#include <iostream>
#include <typeinfo>
using namespace std;

//Task1
//template <typename T>
//void showType(T value) {
//    cout << "Тип: " << typeid(value).name() << '\n';
//}
//
//int main() {
//    showType(10);
//    showType(3.14);
//    showType('A');
//    showType("Hello");
//}

//Task2
void showChar(int number) {
    char* symbol = reinterpret_cast<char*>(&number);
    cout << "Символ: " << *symbol << '\n';
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    showChar(number);

}
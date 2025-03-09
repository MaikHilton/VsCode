#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1. Вивести "Hello" на екран
    cout << "Hello" << endl;

    // 2. Оголосити змінну int і вивести її
    int num = 10;
    cout << num << endl;

    // 3. Оголосити змінну float і вивести її з двома знаками після коми
    float pi = 3.14f;
    cout << fixed << setprecision(2) << pi << endl;

    // 4. Додавання двох цілих чисел
    int sum = 5 + 7;
    cout << sum << endl;

    // 5. Вивести символ табуляції між словами
    cout << "Hello\tWorld" << endl;

    // 6. Оголосити float і вивести з шириною 8 символів і 3 знаками після коми
    float value = 12.3456f;
    cout << setw(8) << fixed << setprecision(3) << value << endl;

    // 7. Додавання двох чисел з плаваючою комою
    double result = 3.5 + 2.7;
    cout << result << endl;

    // 8. Конвертація температури з Цельсія в Фаренгейт
    double celsius;
    cout << "Введіть температуру в Цельсіях: ";
    cin >> celsius;
    double fahrenheit = celsius * 9 / 5 + 32;
    cout << "Температура у Фаренгейтах: " << fahrenheit << endl;

    // 9. Перевірка на парність
    int number;
    cout << "Введіть число: ";
    cin >> number;
    cout << (number % 2 == 0 ? "Парне" : "Непарне") << endl;

    // 10. Порівняння двох чисел
    int a, b;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    cout << "Більше число: " << max(a, b) << endl;

    return 0;
}

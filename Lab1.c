#include <stdio.h>
#include <math.h>

int main() {
    // 1. Виведення "Hello" на екран
    printf("Hello\n");

    // 2. Оголошення змінної int і вивід її
    int num = 10;
    printf("%d\n", num);

    // 3. Оголошення змінної float і вивід її з двома знаками після коми
    float pi = 3.14f;
    printf("%.2f\n", pi);

    // 4. Додавання двох цілих чисел
    int sum = 5 + 7;
    printf("%d\n", sum);

    // 5. Виведення символу табуляції між словами
    printf("Hello\tWorld\n");

    // 6. Оголошення float і виведення з шириною 8 символів і 3 знаками після коми
    float value = 15.5781f;
    printf("%8.3f\n", value);

    // 7. Додавання двох чисел з плаваючою комою
    double result = 3.5 + 2.7;
    printf("%.2lf\n", result);

    // 8. Конвертація температури з Цельсія в Фаренгейт
    double celsius;
    printf("Введіть температуру в Цельсіях: ");
    scanf("%lf", &celsius);
    double fahrenheit = celsius * 9 / 5 + 32;
    printf("Температура у Фаренгейтах: %.2lf\n", fahrenheit);

    // 9. Перевірка на парність
    int number;
    printf("Введіть число: ");
    scanf("%d", &number);
    printf("%s\n", (number % 2 == 0) ? "Парне" : "Непарне");

    // 10. Порівняння двох чисел
    int a, b;
    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);
    printf("Більше число: %d\n", (a > b) ? a : b);

    return 0;
}

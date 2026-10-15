#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    double x, y;

    printf("Проверка принадлежности точки (x, y) заштрихованной области\n\n");

    printf("Введите координаты точки (x и y через пробел): ");
    if (scanf("%lf %lf", &x, &y) != 2)
    {
        printf("Ошибка ввода!\n");
        return 1;
    }

    if (
        ((x >= -4.0 && x <= -1.0) && (y >= -2.0 && y <= 5.0)) ||
        ((x >= -1.0 && x <= 1.0) && (y >= 3.0 && y <= 5.0))
        )
    {
        printf("Результат: Точка (%.2f, %.2f) ПРИНАДЛЕЖИТ области.\n", x, y);
    }
    else
    {
        printf("Результат: Точка (%.2f, %.2f) НЕ принадлежит области.\n", x, y);
    }

    while (getchar() != '\n');
    getchar();

    return 0;
}
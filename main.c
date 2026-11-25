#include <stdio.h>
#include "matrixfunc.h"

int main(void)
{
    int arr[50] = {0};
    char b;
    int j, i;
    double sum[50] = {0};
    size_t o1, o2;
    do
    {
        printf("a Задать размер матрицы (строки, столбцы)\n");
        printf("b Заполнить матрицу\n");
        printf("c Представление матрицы (значения, адреса элементов)\n");
        printf("d Вычисление среднего арифметического элементов каждого столбца матрицы\n");
        printf("e Определение количества положительных элементов матрицы\n");
        printf("f Поиск индексов последнего отрицательного элемента матрицы при обходе по строкам\n");
        printf("g Выход\n");
        printf("Выберите пункт: ");
        if (scanf(" %c", &b) != 1)
        {
            break;
        }
        switch (b)
        {
        case 'a':
            printf("Задайте размер матрицы\n");
            size(&j, &i);
            break;
        case 'b':
            full(arr, j, i);
            break;
        case 'c':
            show(arr, j, i);
            break;
        case 'd':
            avg(arr, j, i, sum);
            for (int k = 0; k < i; k++)
            {
                printf("%f\n", sum[k]);
            }
            break;
        case 'e':
            printf("%d\n", kolvo(arr, j, i));
            break;
        case 'f':
        int qrr = last(arr, j, i, &o1, &o2);
        if(qrr == 1) {
            printf("Строка %zu; Столбец %zu\n", o1, o2);
        } else {
            printf("Элементов нет\n");
        }
            break;
        default:
            break;
        }
    } while (b != 'g');
    return 0;
}
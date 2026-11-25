#include <stdio.h>
#include "matrixfunc.h"

void size(int *pnt, int *pnt1) {
    int i, i1;
    if(scanf("%d %d", &i, &i1)==2) {
        *pnt = i;
        *pnt1 = i1;
    }
}
void full(int arr[], int rows, int cows) {
    int i1;
    printf("Введите число: ");
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cows; c++){
            if(scanf("%d", &i1)==1) {
                *(arr + r*rows + c) = i1;
            }
        }
    }
}
void show(int arr[], int rows, int cols) {
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            printf("%d | %d | %d | %p\n", r, c, *(arr + r*cols + c), (arr + r*cols + c));
        }
    }
}
int kolvo(int *matptr, size_t rows, size_t cols) {
    int s = 0;
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            if(*(matptr + r*cols + c) > 0) {
                s++;
            }
        }
    }
    return s;
}
void avg(int *matptr, size_t rows, size_t cols, double sum[]) {
    int sum1 = 0;
    for(int c = 0; c < cols; c++) {
        for(int r = 0; r < rows; r++) {
            sum1 += *(matptr + r*cols + c); 
        }
        *(sum + c) = (double)sum1 / rows;
        sum1 = 0;
    }
}
int last(int *matptr, size_t rows, size_t cols, size_t *pnt, size_t *pnt1) {
    int find = 0;
    if((rows == 0) || (cols == 0)) {
        return 0;
    } 
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            if(*(matptr + r*cols + c) < 0) {
                *pnt = r; 
                *pnt1 = c;
                find = 1;
            }
        }
    }
    return find;
} 
#include<stdio.h>

int fun() {
    int a[3][3];
    int sum = 0;
    int i, j;

    // 给矩阵赋值
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 打印矩阵
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t\t", a[i][j]);
        }
        printf("\n");
    }

    // 求和1
    sum = a[0][0] + a[1][1] + a[2][2];
    printf("sum1 = %d\n", sum);

    // 求和2
    sum = 0;
    for (i = 0; i < 3; i++) {
        sum += a[i][i];
    }
    printf("sum2 = %d\n", sum);

    return 0;
}

int main() {
    fun();
}
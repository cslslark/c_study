#include <stdio.h>

int fun() {
    int a[3][3], sum;
    int i, j;
    sum = 0;

    // 赋值
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    // 求和
    for (i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    printf("sum=%d\n", sum);
}

int main() {
    fun();
}
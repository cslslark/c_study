#include<stdio.h>

void getMin(int a, int b, int c) {
    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    printf("min = %d",min);

}


void getBigger(int a, int b, int c) {
//    if (a > b) {
//        if (a > c) {
//            // 说明a最大
//            printf("getBigger = %d\n", a);
//        } else {
//            // a<c
//            // 说明c最大
//            printf("getBigger = %d\n", c);
//        }
//    } else {
//        if (b > c) {
//            printf("getbigger = %d\n", b);
//        } else {
//            printf("getbigger = %d\n", c);
//        }
//    }
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    printf("max = %d\n", max);


}

int main() {
    int a = 12;
    int b = 12;
    int c = 46;
    // 比较哪个大
    getBigger(a, b, c);

    // 比较哪个小
    getMin(a, b, c);

}
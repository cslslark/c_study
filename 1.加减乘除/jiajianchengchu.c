#include<stdio.h>

void shang(int i, int j) {
    if (j == 0) {
        printf("被除数不能等于零\n");
    } else {

        int shang = i / j;
        printf("shang = %d\n", shang);
    }
}

void chengji(int i, int j) {
    int chengji = i * j;
    printf("chengji = %d\n", chengji);

}

void cha(int i, int j) {
    int cha = i - j;
    printf("cha = %d \n", cha);

}

void sum2(int i, int j) {
    int he = i + j;
    printf("he = %d \n", he);

}


void chadejueduizhi(int i, int j) {
    int chadejueduizhi;
//    if (i > j) {
//        chadejueduizhi = i - j;
//    } else {
//        chadejueduizhi = j - i;
//    }
    int cha = i - j;
    if (cha > 0) {
        chadejueduizhi = cha;
    } else {
        chadejueduizhi = -cha;
    }
    printf("chadejueduizhi= %d\n", chadejueduizhi);
}

int main() {
    int i = 14;
    int j = 0;
    sum2(i, j);
    cha(i, j);
    chengji(i, j);
    shang(i, j);
    chadejueduizhi(i, j);
}



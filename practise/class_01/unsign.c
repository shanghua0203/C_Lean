#include <stdio.h>
/*
signed（有號數，預設）： 電腦會留一個位置來記「這個數字是正的還是負的」。
unsigned（無號數）：    它不管正負號，把所有空間通通拿來存「數字有多大」。
                      因為省下了記正負號的空間，它能存的最大正數字就會變兩倍大。
*/
int main(){
    unsigned int num = -100;
    printf("%u\n", num);

    signed int num2 = -100;
    printf("%d\n", num2);

    float weight = 55.5f;   //float
    float weight = 55.5;    //bouble

    return 0;

}
#include<stdio.h>

int main(){
    // 找基數
    while(1){
        int num;
        printf("請輸入一個數字：");
        scanf(" %d", &num);
        if(num%2 == 1) 
            printf("%d 是奇數\n", num);
        else
            printf("%d 不是奇數\n", num);
    }
    return 0;
}
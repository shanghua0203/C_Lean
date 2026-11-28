#include<stdio.h>

int main(){
    int num = 0;
    scanf("%d", &num);

    switch (num%3)
    {
    case 0:
        printf("餘數是 0 \n");
        break;
    case 1:
        printf("餘數是 1 \n");
        break;
    case 2:
        printf("餘數是 2 \n");
        break;
    
    default:
        break;
    }

    
    return 0;
}
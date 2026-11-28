#include <stdio.h>

const char* week(int num){
    switch (num % 7)
    {
        case 1:
            return "星期一";
            break;
        case 2:
            return "星期二";
            break;
        case 3:
            return "星期三";
            break;
        case 4:
            return "星期四";
            break;
        case 5:
            return "星期五";
            break;
        case 6:
            return "星期六";
            break;
        case 0:
            return "星期日";
            break;
        default:
            return "輸入不合法";
            break;
    }
    return 0;
}

int main(){
    int num = 0;
    scanf("%d", &num);
    const char *day = week(num);
    printf("%s\n", day);

    return 0;
}
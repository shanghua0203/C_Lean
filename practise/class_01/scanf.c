#include <stdio.h>

/*
int main(){
    int score = 0;

    scanf("%d", &score);
    printf("score is: %d\n", score);

    return 0;
}
    */

int main()
{
    // 反覆
    //  int a = 0, b = 0;
    //  while(scanf("%d %d", &a, &b) == 2){
    //      int c = a + b;
    //      printf("a + b = %d\n", c);
    //  }

    // char str1[100];
    // scanf("%[a-zA-Z]", str1);
    // printf("%s\n", str1);

    // char str2[100];
    // scanf("%[0-9]", str2);
    // printf("%s\n", str2);

    char c = 0;
    while(scanf("%c", &c) == 1){
        if (c == '\n') break;
        printf("----%c----\n", c);
    }

    return 0;
}
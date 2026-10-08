#include <stdio.h>

int main()
{
    int a =5;
    int b =10;
    int c =15;
    printf("My name is priti choudhary.\n");
    if (a >= b && a >= c) {
        printf("%d", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d", b);
    }
    else{
        printf("%d is the largest number.\n", c);
    }

    return 0;
}

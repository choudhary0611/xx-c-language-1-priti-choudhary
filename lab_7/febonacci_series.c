 #include <stdio.h>
int main()
{
    int n,a=-1, b=1, c,i;
     printf("My name is Priti choudhary.\n");
    printf("enter the number of febonacci series print");
    scanf("%d",&n);
    printf("Febonacci series");
    for( i=0; i<=n; i++) 
    {
        printf(" %d",c);
        c= a+b;
        a=b;
        b=c;
    }
    return 0;
}
 

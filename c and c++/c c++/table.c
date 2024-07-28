#include <stdio.h>
int main()
{

    int i,n;
    printf("enter a number");
    scanf("%d",&n);


    int num;
    for(i=1;i<=10;i++)
    {
        num=n*i;
        printf("%d*%d =%d \n", n,i ,num);
    }
    return 0;
}
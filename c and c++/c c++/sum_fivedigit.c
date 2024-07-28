#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int b=0;
    printf("enter a five digit no only ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
    int a=n%10;

    b=b+a;
    printf("%d", b);
    }
    
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
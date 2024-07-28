#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a , b,c,d;
	printf("enter two no\n");
    scanf("%d", &a);
    scanf("%d", &b);
     scanf("%.1f", &c);
      scanf("%.1f", &d);

      float s = c+d;
      float di = c-d;
    
    int sum = a+b;
    int diff= a-b;
    
    
   
    
    printf("%d ", sum  );
    printf("%d\n",  diff );
    printf("%.1f",  s );
    printf("%.1f",  di );
    
    return 0;
}
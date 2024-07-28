#include <stdio.h>

    int main(){

        int i=3;
        int *a= &i;
        printf("addtion of no before addtion  %u \n", a);
        a++;
        
        printf("addtion of no after addtion  %u \n", a);

return 0;
}
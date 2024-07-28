#include <stdio.h>

    int main(){
        FILE *ptr;
        int num;
        ptr = fopen("prateek.txt", "r");
        fscanf(ptr,"%d", &num);
        printf("the value of num %d", num);
        

return 0;
}
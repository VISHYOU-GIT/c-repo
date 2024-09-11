// Online C compiler to run C program online
#include <stdio.h>

void callByValue(int a){
    a = a + 10;
    printf("cbv Value of a: %d\n", a);
}
void callByreference(int *b){
    *b = *b + 10;
     printf("cbr Value of b: %d\n", *b);
}
int main() {
int x=5,y=10;

printf(" Value of x %d\n",x );
callByValue(x);
printf("CBV Value of x %d\n",x );
printf(" Value of y %d",y);
callByreference(&y);
printf("CBR Value of y %d\n",y);
    return 0;
}

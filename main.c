#include <stdio.h>

int main(void){
    int a[] = {3,6,9,12,15,18};
    int n = 42;
    int* f;
    f = &n;

   
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    
    printf("\nn = %p\n", f);
    printf("n = %d\n", *f);
    return 0;
}
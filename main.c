#include <stdio.h>

int main(void){
    int a[] = {3,6,9,12,15,18};
    
    int* ptr;
     ptr = &a[3];
   
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    
    printf("\na = %p\n", ptr);
    printf("a = %d\n", *ptr);
    return 0;
}
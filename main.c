#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[] = {3,6,9,12,15,18};
    
    int* ptr;
    ptr = &a[0];
   
   
    for (int i = 0; i < 6; i++)
    {
         
          printf("arreglo[%d] = %d ", i, a[i]);
        printf("%d\n", *(ptr+i));
     
    }
    

    return 0;
}
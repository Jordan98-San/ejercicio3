#include <stdio.h>

int main(){
    char vocales[6] = { 'a',  'e',  'i',  'o',  'u'};
    char *ptr;
    ptr = vocales;


    for (int i = 0; i < 6; i++)
    {
         
        if (*(ptr + i) == 'o') {
            *(ptr + i) = 'x'; 
        }
         
      
        printf("%c\t", *(ptr + i));
        
    }

    return 0;
    
}
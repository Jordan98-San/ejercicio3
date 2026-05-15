#include <stdio.h>

int main(){
    char vocales[6] = { 'a',  'e',  'i',  'o',  'u'};
    //char *ptr;
    //ptr = vocales;

    for (int i = 0; i < 6; i++)
    {
         printf("%c\t", vocales[i]);
       // printf("%c\t", *(ptr+i));
    }
    
}
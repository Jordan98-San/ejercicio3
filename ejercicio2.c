#include <stdio.h>

int main() {
     int a[] = {3,6,9,12,15,18};
    
    int i = sizeof(int);
    printf("%d bytes(s)\n",  i);

    int j = sizeof a;
    printf("%d bytes(s) ",  j);

    return 0;
}
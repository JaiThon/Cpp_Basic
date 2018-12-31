#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int *p;
    int size = 5;
    p = (int *)malloc(sizeof(int) * 5);
 
    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }
 
    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }
 
    free(p);
 
    return 0;
}

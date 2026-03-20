#include <stdio.h>
void swap(int *x, int *y){
    x ^ y;
}
int main() {
    int x = 100, y = 200;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}

#include <stdio.h>
#include <stdarg.h>

int average(int count, ...){
    va_list ap;
    va_start(ap, count);
    int mean = 0;
    for(int i = 0; i < count; i++)
        mean += va_arg(ap, int);
    va_end(ap);
    return mean/count;
}
int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    return 0;
}

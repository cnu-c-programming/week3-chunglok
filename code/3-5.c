#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...){
    va_list(ap);
    va_start(ap, type);
    va_start(ap, count);
    swhitch(va_arg(ap, char){
        case 'S':
            for(int i = 0; i < count; i++){
                printf("%s", va_arg(ap, int*));
                printf(" ");
            }
                printf("\n");
            break;
        case 'C':
            for(int i = 0; i < count; i++){
                printf("%c", va_arg(ap, int));
            }
            printf("\n");
            break;
        case 'D':
            int sum = 0;
            for(int i = 0; i < count; i++){
                sum += va_arg(ap, int);
            }
            printf("%d", sum);
            break;
         default:
             break;
    }
    va_end(ap);
    return 0;
}
int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);
    return 0;
}

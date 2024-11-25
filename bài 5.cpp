#include <stdio.h>

int main() {
    for (int x = 1; x <= 9; x++) {
        printf("Bang cuu chuong %d:\n",x);
        for (int y = 1; y <= 10; y++) {
            printf("%d x %d = %d\n", x, y, x*y);
        }
    }
    return 0;
}

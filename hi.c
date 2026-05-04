#include <limits.h>
#include <stdio.h>

int safe_add(int a, int b) {
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        printf("Overflow occurred!\n");
        return 0;
    }
    return a + b;
}

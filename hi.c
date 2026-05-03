#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void print_result(int result) {
    printf("Result: %d\n", result);
}

int main() {
    int x = 5;
    int y = 10;

    int sum = add(x, y);
    print_result(sum);

    return 0;
}

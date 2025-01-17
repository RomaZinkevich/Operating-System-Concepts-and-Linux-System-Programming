#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int sum = 0;

    printf("Hello, World!\n");

    if (x < y) {
        printf("x is less than y.\n");
    }

    for (int i = 0; i < 5; i++) {
        sum += i;
        printf("Adding %d, sum is now: %d\n", i, sum);
    }

    return 0;
}

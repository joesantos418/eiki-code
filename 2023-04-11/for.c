#include <stdio.h>

int main() {
    /*
        a lot of times we use the same formula to iterate over a loop:

        index = 0

        while (index < array_size) {
            ...
            index ++
        }

        the for loop alows us to bundle that in a single statement:

        for (initialization; condition; increment) {
            ...
        }
    */

    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /* we have to declare the variable, but we don't need to initialize it */
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
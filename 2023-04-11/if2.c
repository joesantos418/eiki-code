#include <stdio.h>

int main() {
    /*
        if will execute the block when the condition is true, with else we can
        add a block that will run if the condition is false
    */
    if (1 > 10) {
        printf("1 is greater than 10\n");
    } else {
        printf("1 is not greater than 10\n");
    }

    /*
        we can also add other conditions when the first one fails with else if,
        for example if we want all numbers that are multiple of 2 or 3, we can
        have as many else if we want, but only one else, also note that 6 will
        print as a multiple of 2, once one condition is met, the other ones are
        ignored
    */
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            printf("%d is a multiple of 2\n", a[i]);
        } else if (a[i] % 3 == 0) {
            printf("%d is a multiple of 3\n", a[i]);
        } else {
            printf("%d is not a multiple of 2 nor 3\n", a[i]);
        }
    }

    return 0;
}
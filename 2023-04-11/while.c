#include <stdio.h>

int main() {
    /*
        while executes a block as long as the condition is true
    */
    while (1 > 2) {
        printf("never prints\n");
    }

    /*
        be careful with infinite loops

        while (1 < 2) {
            printf("will print forever\n");
        }
    */

    /*
        while will evaluate the condition before executing the block
    */
    int a = 0;
    while (a > 100) {
        /* this will never run */
        a++;
        printf("a: %d\n", a);
    }

    int b = 0;
    while (b < 100) {
        /* this run 100 times */
        printf("b: %d\n", b);
        b++;
    }

    /*
        array indexes can be variables, we can iterate over them with
        while
    */
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 0;
    while (i < 10) {
        printf("x: %d\n", x[i]);
        i++;
    }

    /*
        we can break out of loops with the break keyword
    */
    int y[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int j = 0;
    while (j < 10) {
        if (j > 5) {
            break;
        }
        printf("y: %d\n", y[j]);
        j++;
    }

    /*
        we can skip over loop iterations with the continue keyword
    */
    int z[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 0;
    while (k < 10) {
        /* will skip all even iterations */
        if (k % 2 == 0) {
            /* we have to increment k here otherwise we'd be stuck in an infinite loop */
            k++;
            continue;
        }
        printf("z: %d\n", z[k]);
        k++;
    }
    /*
        note that break exits the loop while continue forces the next
        iteration
    */

    /*
        the do-while is a variation that executes first and evaluates
        second
    */

    do {
        /* this would never run in a normal while */
        printf("at least once\n");
    } while (1 > 10);

    return 0;
}
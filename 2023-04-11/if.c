#include <stdio.h>

int main() {
    /*
        if will execute a block if the condition is "true"
    */
    if (4 > 3) {
        printf("4 is greater than 3\n");
    }

    /*
        there are no boolean types in c, anything with non zero value
        is considered true
    */
    if (1) {
        printf("1 is true-ish in C\n");
    }

    if (0) {
        printf("0 is not true-ish in C, this won't print\n");
    }

    if (-1) {
        printf("-1 is true-ish in C\n");
    }

    if (-3.14) {
        printf("-3.14 is true-ish in C\n");
    }

    if ('a') {
        printf("a is true-ish in C\n");
    }

    return 0;
}
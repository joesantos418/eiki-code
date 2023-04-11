#include <stdio.h>

int main() {
    /*
        mostly, we use comparison operators for conditions:
        equals ==
        different !=
        greater than >
        greater than or equal to >=
        lower than <
        lower than or equal to <=
    */

    int a = 4;
    if (a == 4) {
        /*
            be careful to no mistake the equality comparison operator
            (==) for the assignment operator (=)
        */
        printf("a == 4\n");
    }

    if (a != 5) {
        printf("a != 5\n");
    }

    if (a > 3) {
        printf("a > 3\n");
    }

    if (a < 100) {
        printf("a < 100\n");
    }

    /*
        there are logical operator for more complex conditions:
        and &&
        or ||
        not !

        they can be used with parenthesis for clarity
    */
    if (
        (a > 3) &&
        (a < 100)
    ) {
        printf("a > 3 && a < 100\n");
    }

    return 0;
}
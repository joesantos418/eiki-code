#include <stdio.h>

int main() {
    /*
        arrays are contiguous memory adresses
    */
    int months[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    /*
        they are indexed from 0
        you access them with []
    */
    printf("%d\n", months[0]); /* prints 1 */

    /* illegal, will result in error */
    /* printf("%d\n", months[12]); */

    return 0;
}
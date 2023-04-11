#include <stdio.h>

int main() {
    /*
        shorthand operations:
        increment: i++ is the same as i = i + 1
        decrement: i-- is analogous
        a += b is the same as a = a + b
        there are analogou operator for:
        a -= b
        a *= b
        a /= b

        we should also mention the modulus operator
        a % b returns the remainder of the division a / b
    */

    int i = 0;
    printf("%d\n", i);

    i++;
    /* will print 1 */
    printf("%d\n", i);

    int a = 2;
    int b = 3;

    a += b;
    /* will print 5 */
    printf("%d\n", a);

    /* will print 2 */
    printf("%d\n", a % b);

    return 0;
}
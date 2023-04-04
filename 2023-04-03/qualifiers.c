#include <stdio.h>
#include <stdlib.h>

int main() {
    printf(
        "--------------- SIZES ------------\nint: %zu bytes,\nfloat: %zu bytes,\nchar %zu bytes,\nunsigned int %zu bytes,\nlong int %zu bytes,\nlong double %zu,\n----------------------------------\n",
        sizeof(int),
        sizeof(float),
        sizeof(char),
        sizeof(unsigned int),
        sizeof(long int),
        sizeof(long double)
    );

    return 0;
}
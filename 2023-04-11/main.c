


int main() {
    int a = 1;

    int v[5] = {0, 1, 2, 3, 4, 5};

    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;

    if (a > v[3]) {
        printf("oi\n");
    }

    /*
        >
        <
        ==
        >=
        <=
        && -- AND
        ||
        !
        !=
        (x % 2) == 0
    */

    if (
        (a == 1) &&
        (v[1] == 2)
    ) {
        printf("oi\n");
    }

    int t = 1;
    int f = 0;

    int i = 0;
    while (v[i] < 3) {
        printf("oi\n");
        i++; /* i = i + 1 */
    }

    int j;
    for (j = 0; v[j] < 3; j++) {
        printf("oi\n");
    }

    int m[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            m[i][j] = 0;

        }
    }

    int x[5] = {1, 2, 3, 4, 5};
    int g = 0;
    int sum = 0;

    for (g = 0; g < 5; g++) {
        if (x[g] % 2 == 1) {
            continue;
        }
        sum += x[g];

        /*
            sum = sum + x[g]
        */
    }

    i = 0;
    do {
        printf("oi");
        i++;
    } while(v[i] < 3)

    if (i > 3) {
        /*sagdfsgdfgs*/
    } else {
        /*trtwert*/
    }

    if (i > 3) {
        /*sagdfsgdfgs*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else if (i < 2) {
        /*trtwert*/
    } else {
        /* */
    }

    char p = 'a';

    switch (p) {
        case 'a':
        /**/
        break;
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        case 'b':
        /**/
        default:
        /**/
    }
}

int sum(int a, int b) {
    goto a;

    a: {
        int c = 0;
        return a + b;
    }

    b: {
        return c + a - b;
    }
}
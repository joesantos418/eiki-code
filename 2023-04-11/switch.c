#include <stdio.h>

int main() {
    /*
        writing if else chains can get tricky to read:
        if (option == 'a') {
            ...
        } else if (option == 'b') {
            ...
        } else if (option == 'c') {
            ...
        } else if (option == 'd') {
            ...
        } else if (option == 'e') {
            ...
        } else if (option == 'f') {
            ...
        } else if (option == 'g') {
            ...
        } else if (option == 'h') {
            ...
        }

        the swith helps with that
    */
    char a = 'a';
    switch (a) {
        case 'a':
        printf("it's an a\n");
        break;

        case 'b':
        printf("it's a b\n");
        break;
    }

    /*
        notice how we need the break after each case, otherwise the code
        would run as if it matched all cases below the first match
    */
    char w = 'a';
    switch (w) {
        case 'a':
        printf("take my sword\n");

        case 'b':
        printf("and my axe\n");

        case 'c':
        printf("and my helmet\n");
        break;

        case 'd':
        printf("but not my lightsaber\n");
        break;
    }
    /*
        the case d didn't print because the break exited the switch after
        printing
    */

    /*
        you can also add a special case that will run if no other case matches
        you do that with the default keyword
    */
    char x = 'x';
    switch (x) {
        case 'a':
        printf("it's an a\n");
        break;

        case 'b':
        printf("it's a b\n");
        break;

        default:
        printf("it's nothing we were expecting\n");
        break;
    }

    return 0;
}
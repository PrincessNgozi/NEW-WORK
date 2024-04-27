#include <stdio.h> //for loop using the pointer i, with the step value at n

int main() {
    int n = 10;
    int *i;

    i = &n;

       for (; *i > 0; *i -= n) {
        printf("%d\n", *i);
    }

    return 0;
}

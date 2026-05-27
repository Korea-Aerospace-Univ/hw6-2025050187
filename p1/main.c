#include <stdio.h>

int main(void) {
    char x[10];
    char *p, *q;

    for (p = x; p < x + 10; p++) {
        scanf(" %c", p);
    }

    char max_ch = *x;
    int max_count = 0;

    for (p = x; p < x + 10; p++) {
        int count = 0;
        for (q = x; q < x + 10; q++) {
            if (*q == *p) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_ch = *p;
        }
    }

    printf("%c %d\n", max_ch, max_count);

    return 0;
}

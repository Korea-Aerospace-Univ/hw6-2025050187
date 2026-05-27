#include <stdio.h>

int main(void) {
    int n;
    int a[20], b[20];
    int *p, *q;

    scanf("%d", &n);

    for (p = a; p < a + n; p++) {
        scanf("%d", p);
    }
    for (p = b; p < b + n; p++) {
        scanf("%d", p);
    }

    for (p = a, q = b + n - 1; p < a + n; p++, q--) {
        printf(" %d", *p + *q);
    }
    printf("\n");

    return 0;
}

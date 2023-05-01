#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, z, w, k, m, n;
    float f;

    x = -2 * 3;
    z = 4 % 2;
    w = 8 / 4;
    k = 7 / 2;
    f = 7.0 / 2.0;
    m = w + x;
    n = m - k;

    printf("x: %d\n", x);
    printf("z: %d\n", z);
    printf("w: %d\n", w);
    printf("k: %d\n", k);
    printf("f: %.2f\n", f);
    printf("m: %d\n", m);
    printf("n: %d\n", n);

    return 0;
}

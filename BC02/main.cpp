#include <cstdio>

int main() {
    Vector2 a (1,2);
    Vector2 *pA = &a;
    printf("%f\n", pA->x);
    Vector2 &Ra = a;
    printf("%f\n", Ra.x);

    a.x = 12;
    printf("%f\n", pA->x);
    printf("%f\n", a.x);

    rA.x =13;
    printf("%f\n", pA->x);
    printf("%f\n", a.x);

    Vector2 b (2,2);

    return 0;
}

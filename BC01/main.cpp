#include <cstdio>

typedef unsigned short int saxion_integer;

int main() {
    printf("Hello World!\n");

    int a = 1;
    float b = 1.0f;
    double c = 1.0;
    char d = '1';
    bool e = false;

    printf("variables %d %f %f %c %d \n", a, b, c, d, e);

    saxion_integer f = 10;
    printf("Saxion Integer %d\n", f);

    return 0;
}

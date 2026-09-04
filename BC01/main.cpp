#include <cstdio>

int calculateEven(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
        return 1;
    }
    printf("%d is odd\n", num);
    return 0;
}

int multiplyByTwo(int num) {
    return num * 2;
}

void multiplyByReference(int& num) {
    num *= 2;
}

int main() {
    int a = 0;
    int& b = a;
    int* c = &b;

    printf("number: %d\n", a);
    printf("reference: %d\n", b);
    printf("reference address: %p\n", &b);
    printf("pointer address: %p\n", c);
    
    return 0;
}
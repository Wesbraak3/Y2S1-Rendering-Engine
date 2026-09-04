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
    int num = 2;

    num = multiplyByTwo(num);
    printf("%d\n", num);

    multiplyByReference(num);
    printf("%d\n", num);
    return 0;
}
#include <cstdio>

int calculateEven(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
        return 1;
    }
    printf("%d is odd\n", num);
    return 0;
}

int main() {
    int num = 2;

    int isEven = calculateEven(num);

    return 0;
}
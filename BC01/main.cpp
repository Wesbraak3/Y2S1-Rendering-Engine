#include <cstdio>
#include <bits/ctype_base.h>

/*
Exercise 1:
    1. Write a C++ program that declares ONE integer number and print if the number read is even or odd.
    2. Write a C++ program that declares TWO integer numbers and prints the highest number.
    3. Write a C++ program that declares THREE integer numbers and prints the average of the three numbers.
    4. Write a C++ program that declares FOUR integer numbers and prints the sum of the four numbers
*/

void printIsEven(int number) {
    if (number % 2 ==0 ) printf("is even \n");
    else printf("number: %d is odd\n", number);
}

void printHighest(int a, int b) {
    printf("Input print highest: %d, %d\n", a, b);
    if (a > b) printf("The highest number is %d\n", a);
    else printf("The highest number is %d\n", b);
}

void printAvarage(int a, int b, int c) {
    printf("Input print avarage: %d, %d, %d\n", a, b, c);
    int avarage = (a + b + c) / 3;
    printf("The average number is %d\n", avarage);
}

void printSum(int a, int b, int c, int d) {
    printf("Input: %d, %d, %d, %d\n", a, b, c, d);
    printf("The sum is %d\n", a + b + c + d);
}

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    printIsEven(a);
    printHighest(a, b);
    printAvarage(a, b, c);
    printSum(a,b,c,d);

    return 0;
}
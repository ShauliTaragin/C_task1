//
// Created by Gal on 30/10/2021.
//
#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2;
    printf("Please enter two numbers :\n");
    scanf("%d %d", &num1, &num2);
/*    if (scanf("%d%*[ ]%d", &num1, &num2) != 2)
        ;*/
    printf("The Prime numbers are: ");
    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\nThe Armstrong numbers are: ");
    for (int i = num1; i <= num2; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\nThe Palindromes are: ");
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\nThe Strong numbers are: ");
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

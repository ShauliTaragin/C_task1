#include <stdio.h>
#include <math.h>

int Size(int k) {
    int counter = 0;
    while (k > 0) {
        k = (k - (k % 10)) / 10;
        counter++;
    }
    return counter;
}

int Pos(int k, int p) {
    return ((int) (k / pow(10, p)) % 10);
}

int isPalindrome(int k) {
    for (int i = 0, j = Size(k) - 1; i < j; ++i, j--) {
        if (Pos(k, i) != Pos(k, j)) return 0;
    }
    return 1;
}

int isArmstrong(int k) {
    int temp = k;
    int sum = 0;
    for (int i = 0; i< Size(k); i++)
        sum += (int)pow(Pos(k,i),(Size(k)));
    return (sum == temp);
}




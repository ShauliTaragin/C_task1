#include <stdio.h>
#include <math.h>

int Rec(int k, int t) {
    if (k == 0)return t;
    t = (t * 10) + (k % 10);
    return Rec(k / 10, t);
}

int isPalindrome(int k) {
    int temp = Rec(k, 0);
    return (temp == k);
}

int Rec2(int k){
    if (k > 0)return (int) (pow(k % 10, 3) + Rec2(k / 10));
    return 0;
}
int isArmstrong(int k) {
    int temp = k;
    if(temp == Rec2(k)){
        return 1;
    }
    return 0;
}

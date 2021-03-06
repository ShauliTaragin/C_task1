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
int Size(int k) {
    if(k == 0) return 0;

    return (Size(k/10)+1);
}

int Rec2(int k , int s){
    if (k > 0)return (int) (pow(k % 10, s) + Rec2((k / 10),s));
    return 0;
}
int isArmstrong(int k) {
    if(k<10 && k>0)return 1;
    int temp = k;
    if(temp == Rec2(k,Size(k))){
        return 1;
    }
    return 0;
}

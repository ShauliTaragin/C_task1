#include <stdio.h>
#include <math.h>
int isPrime(int k){
    if(k==1) return 1;
    if(k < 1)return 0;
    else{
        for (int i = 2; i <= sqrt(k); i++){
            if(k%i==0)return 0;
        }
    }
    return 1;
}

int Factorial(int k){
    int sum = 1;
    for (int i = k; 0<i; i--)
    {
        sum = sum * i;
    }
    return sum;
}

int isStrong(int k){
    if (k==0)return 0;
    int temp = k;
    int sum = 0;
    while (k>0){
        sum += Factorial(k%10);
        k = (k -(k%10))/10;
    }
    if(sum == temp)return 1;
    return 0;
}


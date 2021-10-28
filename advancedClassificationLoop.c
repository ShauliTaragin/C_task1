#include "NumClass.h"
#include <math.h>
#include <stdio.h>
int isArmstrong(int a){
    int num;int b=a;int length=0; int digit;
    while(b!=0){
        length++;
        b/=10;
    }
    b=a;
    while(b!=0){
        digit=b%10;
        num+=(int)pow(digit,length);
        b/=10;
    }
    if(a==num){
        return 1;
        }
    else{ return 0;}
}
int isPalindrome(int a){
    int divider=0;
    int b=a;
    while(b!=0){
        divider++;
        b/=10;
    }
    if(divider==1)return 1;
    b=a;
    divider-=1;//we need one less zero in order to get the largest digit
    while(divider>1){
        if(b%10!=b/(int)pow(10,divider))return 0;
        b=b%(int)pow(10,divider);
        b=b/10;
        divider-=2;
    }
    return 1;
}  
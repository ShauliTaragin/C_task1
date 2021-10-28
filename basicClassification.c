#include "NumClass.h"
long factorial(int);//declaring the helping function
int isPrime(int a){
    if(a<2) {return 0;}
    for(int i=2 ;i<a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
int isStrong(int a){
    int num;
    int b=a;
    while(a!=0){
        num+=factorial(a%10);
        a/=10;
    }
    if(b==num){
        return 1;
        }
    else{ return 0;}
}
long factorial(int a){
    if(a==0) return 1;
    return (a*factorial(a-1));
}
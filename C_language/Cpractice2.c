#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prime(int n){

    printf("정수 n을 입력 : ");
    scanf("%d", &n);

    int x = 0;
    int i;
    for(i=1; i<=n; i++){
        if (n%i==0){
            x++;
        }else{

        }

    }

    if(x==2){
        printf("정수 n은 소수 입니다.");
    }else{
        printf("정수 n은 소수가 아닙니다.");
    }

    return 0;
}

int main(){

    int a ;
    prime(a);

    return 0;
}
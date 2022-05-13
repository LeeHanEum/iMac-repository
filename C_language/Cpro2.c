#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main (){
    int n, m;
    int sum = 0;

    printf("정수 n을 입력 : ");
    scanf("%d", &n);

    printf("정수 m을 입력 : ");
    scanf("%d", &m);
   
    for (; n<=m ; n++)
    {
        sum += n;            
    }

    printf("n부터 m까지의 합은  : %d", sum);
    

    return 0;
}
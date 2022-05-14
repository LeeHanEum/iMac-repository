#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {

    int i;
    
    for ( i = 0; i<=50; i++)
    {
        scanf("%d",&nums[i]);
    }

    for ( i = 0; i<=50; i++)
    {
        printf("%d",nums[i]);
    }
    
    
    int answer = -1;
    return answer;
}
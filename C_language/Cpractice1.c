#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
void solution() {
    int i,k,sum;
    int nums[5] = {1,2,3,4,5};
    for (i = 0; i < sizeof(nums)/sizeof(int); i++)
    {
        for ( k = 0; k < sizeof(nums)/sizeof(int); k++)
        {
            sum = nums[i]+nums[k];
            printf("%d\n", sum);
        }
        
    }
    
// 2 3 4 5 6 3 4 5 6 7 4 5 6 7 8

    /*
    int i;
    for (i = 0; i<5; i++)
    {
        printf("%d\n", nums[i]);
    }
    printf("%lu", sizeof(nums)/sizeof(int));
    */
}

int main (){
    solution();
    return 0;
}
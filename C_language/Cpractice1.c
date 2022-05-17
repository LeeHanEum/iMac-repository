#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    //printf("%d %zu", nums[0], nums_len);
    int answer = -1;

    int i,j,k;
    int a = 0;
    int size_sum = nums_len * (nums_len-1) * (nums_len-2);
    int sum[size_sum];

    // sum 배열에 있는 모든 값을 0으로
    for ( i = 0; i < size_sum; i++)
    {
        sum[i]=0;
    }
    

    
// 배열 원소 중에서 3개를 골라 더한 값을 배열에 담는 로직
    for (i = 0; i < nums_len; i++)
    {
        for ( j = 0; j < nums_len; j++)
        {
            for ( k = 0; k < nums_len; k++)
            {
                if (i==j|j==k|i==k)
                {
                    
                }else{
                    //printf("%d %d %d\n", i,j,k);
                    
                    sum[a] = nums[i]+nums[j]+nums[k];
                    a++;
                    
                }
            }
            
        }
        
    }
    

// 배열 원소 중에서 중복되는 것이 있으면 그 원소를 제거하는 로직
    
    

    for ( i = 0; i < size_sum; i++)
    {
        printf("%d\n", sum[i]);
    }
    
    

    return answer;
}


int main(){
    //int nums[3]={1,2,4};
    int nums[4]={1,2,3,4};
    //int nums[50]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    solution(nums, sizeof(nums)/sizeof(int));
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    //printf("%d %zu", nums[0], nums_len);
    int answer = -1;

    int i,j,k;
    int a = 0;
    int n = 0;
    int prime = 0;
    int size_sum = nums_len * (nums_len-1) * (nums_len-2);
    int sum[size_sum];
    int sum_len = sizeof(sum)/sizeof(int);

    // sum 배열에 있는 모든 값을 0으로
    for ( i = 0; i < sum_len; i++)
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
    for ( i = 0; i < sum_len; i++)
    {
        for ( j = 1; j <= sum_len; j++)
        {
            if (sum[i]==sum[j])
            {
                for ( k = j; k < sum_len; k++)
                {
                    sum[k] = sum[k+1];
                }
                sum_len--;
            }
            
        }
        
    } sum_len--;

// 배열에서 소수가 되는 원소가 몇개인지 체크하는 로직
    for ( i = 0; i < sum_len; i++)
    {
        int x=0;
        for(n=1; n<=sum[i]; n++){
            if (sum[i]%n==0){
                x++;
            }else{

            }

        }

        if(x==2){
            // printf("%d는 소수\n", sum[i]);
            prime++;
        }else{
            // printf("%d는 소수가 아님\n", sum[i]);
        }   

        //printf("%d", sum[i]);
    }
    
    printf("소수의 개수는 %d\n", prime);
    
    

    
    

    for ( i = 0; i < sum_len; i++)
    {
        printf("%d\n", sum[i]);
    }
    
    int answer = prime;

    return answer;
}


int main(){
    // int nums[3]={1,2,4};
    int nums[5]={1,2,7,6,4};
    //int nums[50]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    solution(nums, sizeof(nums)/sizeof(int));
    return 0;
}

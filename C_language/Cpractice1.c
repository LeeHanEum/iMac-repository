#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution() {
    int i,k,j,l,prime;
    int nums[3] = {1,2,4};
    int nums_len = sizeof(nums)/sizeof(int);
    int sum;
    //int sum[nums_len*nums_len];
    

    for (i = 0; i < nums_len; i++)
    {
        for ( k = 1; k < nums_len; k++)
        {
            for ( j = 2; j < nums_len; j++)
            {
                if(i==k || i==j || j==k){
                    break;
                } else{
                    sum = nums[i]+nums[k]+nums[j];
                    printf("소수는 %d\n", sum);
                }
                
            }
            
            
        }
        
    }
    printf("소수의 개수는 %d", prime);
/*
    for (j = 0; j < nums_len*nums_len; j++)
    {
        for ( l = j+1; l < nums_len*nums_len; l++)
        {
            if (sum[j]==sum[l])
            {
                sum[l]=0;
            }
            
        } 
        
    }


    for ( j = 0; j < sizeof(sum)/sizeof(int); j++)
    {
        printf("%d\n", sum[j]);
        int x=0;
        for(i=1; i<=sum[j]; i++){
            if (sum[j]%i==0){
                x++;
            }else{

            }

        }

        if(x==2){
            prime++;
        }else{
            
        }
    }

    printf("소수의 개수는 %d", prime);

    
    
// [124] 2 3 5 3 4 6 5 6 8 -> 2 3 5 0 4 6 0 0 8   
// 1+0+4 = 5 1+1+4=6 2+0+8 
// 2 3 4 5 6 3 4 5 6 7 4 5 6 7 8
*/

    return sum;

}

int prime(sum){
    int i, sum;
    int x=0;
        for(i=1; i<=sum; i++){
            if (sum%i==0){
                x++;
            }else{

            }

        }

        if(x==2){
            return 1;
        }else{
            return 0;
        }
}

int main (){
    solution();
    return 0;
}
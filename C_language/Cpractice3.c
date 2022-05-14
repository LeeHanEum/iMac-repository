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
                    return sum;
                }
                
            }
            
            
        }
        
    }
    return 0;

}

int prime(sum){
    int i;
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
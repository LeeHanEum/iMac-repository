#include <stdio.h>
int main() {
	int a[5][3] = { {11, 12, 13}, {21, 22, 23}, {31, 32, 33}, {41, 42, 43}, {51, 52, 53} };
    int i,k;

	for ( i = 0; i < 5; i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d\t",a[i][k]);
        }
        printf("\n");
        
    }
    
	
	
	return 0;
}
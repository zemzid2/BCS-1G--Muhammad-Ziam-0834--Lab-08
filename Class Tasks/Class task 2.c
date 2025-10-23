#include<stdio.h>
int main()
{
	int matrix[3][3] = 
	{
		{12,34,56},
		{72,4,6},
		{90,67,12}
	};
	
	int max=0;
	
	for (int i = 0; i<3; i++){
		for (int j=0; j<3; j++){
			if(i==0&&j==0){
				max = matrix[i][j];
			}
			else 
			{
				if(matrix[i][j] > max){
					max = matrix[i][j];
				}
			}
			
			
		}
	}
	
	printf("MAX value is : %d", max);
}
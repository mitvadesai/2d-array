#include<stdio.h>
main()
{
	int r,c;
	printf("Enter row size:");
	scanf("%d",&r);
	
	printf("Enter column size:");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum[r][c];
	int i,j;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the value of B element: ");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
		printf("Enter b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
			}
	
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		sum[i][j]=a[i][j]+b[i][j];
		printf("The sum of A and B is : %d\n",sum[i][j]);	
		}

	}
}
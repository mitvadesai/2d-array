#include<stdio.h>
main()
{
	int i,j,c,r;
	printf("Enter row size: ");
	scanf("%d",&r);
	printf("Enter column size: ");
	scanf("%d",&c);
	int a[r][c],sum=0;
	
	
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
					sum=sum+a[i][j];
			}
		
		}
		
	}
		printf("The sum of diagonal elements of an Array =%d\n",sum);
}
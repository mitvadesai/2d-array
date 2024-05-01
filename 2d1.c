#include<stdio.h>
main()
{
	int i,j,c,r;
	float a[10][10],sum=0.0,avg;
	printf("Enter row size: ");
	scanf("%d",&r);
	
	printf("Enter column size: ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("Enter a[%d][%d]:",i,j);
		scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=sum+a[i][j];
		}
		
	}
	avg=sum/(r*c);
		printf("sum : %.2f\n",sum);
		printf("average : %.2f",avg);
}
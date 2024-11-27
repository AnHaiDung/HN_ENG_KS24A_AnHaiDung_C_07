#include <stdio.h>

int main(){
	int a,b;
	printf("nhap so hang ");
	scanf("%d",&a);
	printf("nhap so cot ");
	scanf("%d",&b );
	int arr[a][b];
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	} 

	return 0;
}

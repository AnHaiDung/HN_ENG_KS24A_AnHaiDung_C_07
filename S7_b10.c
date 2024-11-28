#include <stdio.h>

int main (){
	int i,number;
	int snt=0;
	printf("nhap so phan tu : ");
	scanf("%d",&number);
	int arr[number];
	for (i=0;i<number;i++){
		printf("phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<number;i++){
		if (arr[i]==1){
			continue;
		}
		for (int j=2;j<arr[i];j++){
			if (arr[i]%j==0){
				snt++;
			}
		}
		if(snt==0){
			printf("so nguyen to %d\n",arr[i]);
		}
		snt=0;
	}
	return 0;
}

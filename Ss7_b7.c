#include <stdio.h>

int main(){
	int i,spt,a[i];
	printf("nhap so phan tu cua mang : ");
	scanf("%d",&spt);
	for(int i=0;i<spt;i++){
		printf("nhap phan tu thu %d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			i--;
		}
	}
	return 0;
}

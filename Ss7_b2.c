#include <stdio.h>
 int main(){
 	int number[5];
 	for(int i=0; i<5; i++){
 			printf("nhap so nguyen %d\n",i+1);
 			scanf("%d",&number[i]);
		 }
	for(int i=0; i<5; i++){
		printf("phan tu thu %d : %d\n",i,number[i]);
	}	 
 	 return 0;
 }

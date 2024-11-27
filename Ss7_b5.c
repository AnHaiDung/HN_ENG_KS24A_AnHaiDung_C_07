#include <stdio.h>
 int main(){
 	int number[5]={2,1,5,9,8},max,min;
 	max=number[0];
 	min=number[0];
 	for(int i=0; i<5; i++){
 		if(number[i]>max){
 			max=number[i];
		 }
		 if(number[i]<min){
		 	min=number[i];
		 }
	 }
	 printf("so lon nhat la : %d\n ", max);
	 printf("so nho nhat la : %d\n ", min);
 	 return 0;
 }

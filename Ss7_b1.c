#include <stdio.h>
 int main(){
 	int number[5]={1,2,3,4,5};
 	for(int i=0; i<5; i++){
 			printf("phan thu thu %d : %d\n",i,number[i]);
		 }
		printf("do dai mang : %d\n",sizeof(number)/sizeof(int));
 	 return 0;
 }

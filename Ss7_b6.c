#include <stdio.h>
 int main(){
 	int number[5]={3,9,5,8,1};
 	for(int i=0; i<5; i++){
 		if(number[i]%2==0){
 			number[i]+=3;
		 }else{
		 	number[i]+=2;
		 }
	 }
	 printf("mang moi la : [%d,%d,%d,%d,%d] ",number[0],number[1],number[2],number[3],number[4]);
 	 return 0;
 }

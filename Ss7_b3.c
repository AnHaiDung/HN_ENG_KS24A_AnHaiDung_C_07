#include <stdio.h>
 int main(){
 	int number[5]={3,9,5,7,1};
 	int sc=1;
 	for(int i=0; i<5; i++){
 		if(number[i]%2==0){
 			sc++;
 			printf("so chan %d\n",number[i]);
		 }
	 }
	 if(sc==1){
	 	printf("khong co so chan");
	 }
 	 return 0;
 }

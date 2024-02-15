#include<stdio.h>
main(){
	
	int i,lenth=0,a=0;
	char choice[100];
	
	printf("Enter any string : ");
	gets(choice);
	
	for(i=0;choice[i]!=NULL;i++){
		lenth++;
	}
	printf("lenth of string : %d \n",lenth);
	
	for(i=0;choice[i]>lenth;i++){
		if(choice[i]==choice[lenth-i-1]){
			a=1;
		}else{
			a=0;
		}
	}
	
	if(a==1){
		printf("Given string is a Palindrome.");
	}else{
		printf("Given string is not a Palindrome.");
	}
	
}

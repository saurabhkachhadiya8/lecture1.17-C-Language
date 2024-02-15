#include<stdio.h>
main(){
	
	int i,lenth=0,count[256]={0};
	char choice[100];
	
	printf("Enter any string : ");
	gets(choice);
	
	for(i=0;choice[i]!=NULL;i++){
		lenth++;
	}
	printf("lenth of string : %d \n\n",lenth);
	
	printf("Frequency of each letter:\n");
    for (i=0;choice[i]!='\0';i++) {
        if (choice[i]>='A'&&choice[i]<='Z'){
        	choice[i]+=32;
		}
        if (choice[i]>='a'&&choice[i]<='z') {
            count[choice[i]]++;
        }
    }

    for (i=0;choice[i]!='\0';i++) {
        if (count[choice[i]]>0) {
            printf("%c => %d\n",choice[i],count[choice[i]]);
            count[choice[i]]=0;
        }
    }
	
}

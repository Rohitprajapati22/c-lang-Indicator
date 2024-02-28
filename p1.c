#include<stdio.h>


main(){
	
	int len=0;
	char *p;
	char choice[100];

	printf("Enter any string : ");
	gets(choice);
		
	len = strlen(choice);
	p = &len;

	printf("The length of a string is: %d\n",*p);


}

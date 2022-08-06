#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50], string2[50];
    int cmp;
    printf("Enter first string:");
    fflush(stdin);
    gets(string1);
    printf("Enter second string:");
    fflush(stdin);
    gets(string2);
    cmp=strcmp(string1,string2);
    if(cmp==0){
    	printf("Both of the strings are same.");
    }
    else{
    	printf("They are different.");
	}
	return 0;
}

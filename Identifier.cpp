#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char keyword_list[32][10]={"auto", "double", " int","struct", "break","else", "long", "switch", "case","enum", "register","typedef", "char", "extern", " return","union", "const", "float", " short", "unsigned", "continue","for", "signed","void", "default", "goto", "sizeof" , "volatile","do", "if","static","while"};
	int i=0, flag=0;
	char input [20];
	printf("\nEnter any string: "); 
	gets (input); 
	for(i=0; i<32; i++)
	{
		if(strcmp(keyword_list[i],input)==0){
			printf("\n'%s' is a keyword.",input);
			exit(0);
		}
	}
	if((input[0]=='_')||(isalpha(input[0])!=0))
	{
		for(i=1;input[i]!='\0';i++)
		{
			if(isalnum(input[i]==0)&&(input[i]!='_'))
			{
				flag=1;
			}
		}
	}
	else
	{
		flag=1;
	}
	if(flag==0)
	{
		printf("\n'%s' is an identifier.",input);
	}
	else
	{
		printf("\n'%s' is an invalid identifier.",input);
	}	
	return 0;
}

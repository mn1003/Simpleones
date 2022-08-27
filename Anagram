#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]; 
	scanf("%s",s1);
	char s2[100]; 
	scanf("%s",s2);
	int a=strlen(s1);
	int b=strlen(s2);
	int i,j,c=0,s=0;
	
	for(i=0;i<a;i++)
	 for(j=0;j<b;j++)
	 if(s1[i]==s2[j])
	 {
	 	c++;
	 	s2[j]='\0';
	 	j=b;
	 }
	 s=a+b-c-c;
	printf("%d",s);
}

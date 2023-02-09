#include<stdio.h>
struct data{
	int d,m,y;
};
int main()
{
	struct data D;int i;
    printf("Enter the date\n");
    scanf("%d %d %d",&D.d,&D.m,&D.y);
    if((D.d>=1&&D.d<=31)&&(D.m==1||D.m==3||D.m==5||D.m==7||D.m==8||D.m==10||D.m==12))
      printf("Input is valid");
    else if((D.d>=1&&D.d<=30)&&(D.m==4||D.m==6||D.m==9||D.m==11))
       printf("Input is valid");
    else if(D.m==2)
    {
    	if(D.d<=28&&D.d>=1)
    	  printf("Input is valid");
    	else if(D.d==29)
    	{
    		if((D.y%400==0)||(D.y%4==0&&D.y%100!=0))
    		 printf("Input is valid");
    		else
    		printf("Input is invalid");
		}
		else
		 printf("Input is invalid");
   	}
   	else
		 printf("Input is invalid");
    return 0;
}

 

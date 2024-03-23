#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int n,num;
	 printf("Enter a number:  ");
	 scanf("%d",&num);
	 n=num;
	 
	 int r,result=0;
	 
	 while(n!=0)
	 {
	 	r=n%10;
	 	result+=(r*r*r);
	 	n=n/10;
	 }
	 if(result==num)
	 {
	 	printf("The number %d is Armstrong\n",num);
	 }
	 else
	 {
	 	printf("The number %d is not Armstrong\n",num);
	 }
	 return 0;
}
	 	

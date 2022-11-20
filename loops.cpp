#include<stdio.h>
int main()
{
	int n,count=0,c=2,l=1,i,j;
	
	printf("Enter Any Number:");
	scanf("%d",&n);
	
/*	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			
			if(i%j==0)
	     	{
		    	count++;
		
	        }
		}
		
	
	
	if(count==0)
	{
		printf("%d",i);
	}
}*/

while(c<n){
	
	if(n%c==0)
	{
		l = 0;
		break;
	}
	c++;
}

  if(l)
  printf("%d",n);
	return 0;
}

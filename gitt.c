#include<stdio.h>
int main()
{
	float n,k,p;
	int c=1;
	
	scanf("%f %f",&n,&p);
	while(n>=1.0f)
	{
		k=(n*p/100);
		n=n-k;
		c++;
		
	}
	printf("%d\n",c);
	return 0;
}
	

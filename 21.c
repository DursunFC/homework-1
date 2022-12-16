/*Draw a flow chart to find first and last digit of a number.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int b;
	float a,n,c=0;
	scanf("%f",&n);
	a=n;
	while(a>=1)
	{	a/=10;
		c++;
	}
	printf("Ilk basamagi: %.0f \n",a*10);
	c--;
	b=a*pow(10,c);
	n-=b*10;
	printf("Son basamagi: %.0f",n);
}

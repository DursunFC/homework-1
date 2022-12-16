 /*Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = ½ + ¼ + … +1/n.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int n,e,c;
	float a;
	printf("2'nin kati bir sayi girin.");
	scanf("%f",&n);
	c=0,e=n,a=0;
	if(n%2!=0)
		printf("Lutfen 2'nin kati bir sayi giriniz");	
	else
	{	
		while(n>0)
		{
			a+=(1/pow(2,n));
			n-=2;
		}
		printf("%f \n",a);
	}
}

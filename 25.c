/**/

#include<stdio.h>
void main()
{
	int a,b,e,d=1,c=0,hfc=0;
	scanf("%d",a);
	scanf("%d",b);
	if(a<b)
		c=a, a=b;
	else
		c=b;
	do
	{
		for(d;c;d++)
		{	e=c%b;
			if(e==0)
			{
				e=a%b;
				if(e==0)	hfc=b;
			}
			else break;	
		}
		if(e!=0)	break;
	}
	while(d!=c);
	printf("%d",hfc);
}

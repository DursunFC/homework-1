/*Draw a flowchart for computing factorial N (N!).*/

#include<stdio.h>
void main()
{
	int N,a,e;
	scanf("%d",&N);
	e=1;
	for(a=1;a<=N;a++)
		e*=a;
	printf("%d",e);	
}

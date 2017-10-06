#include <stdio,h>

int main()
{
int amount;
scanf("%d",&amount);
int arr[amount] = {};
int i;
for(i=0;i<amount;i++)
{
scanf("%d",&arr[i]);
}
int rep[9]={};
int k;
for(i=0;i<amount;i++)
{
	k = arr[i];
	rep[k] += 1;
}
int max=0;
for(i=0;i<9;i++)
{
	if(rep[i]>max)
	{
	max = rep[i];
	k = i;
	}
}
printf("%d\n",rep[k]);
return 0;
}

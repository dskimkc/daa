#include <stdio.h>
	
int s[10], x[10], d, flag=0;


void sumofsub(int,int,int);

int main()
{
	int i,n,sum=0;

	printf("Enter maximum no\n");
	scanf("%d",&n);

	printf("Enter the set in increasing order\n");
	for(i=1;i<=n;i++)
	scanf("%d",&s[i]);

	printf("Enter the maximum subset value:");
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	sum+=s[i];

	if(sum<d || s[1]>d)
	{
	printf("No subset possible\n");
	flag=1;
	}

	sumofsub(0,1,sum);

	if(flag==0)
	printf("no subset possible\n");
	return 0;
}

void sumofsub(int m,int k,int r)
{
int i;
x[k]=1;
	if((m+s[k])==d)
	{
	printf("{");
	for(i=1;i<=k;i++)
	if(x[i]==1)
	{
	printf(" %d ",s[i]);
	flag=1;
	}
	printf("}");
	printf("\n");
	}

else
	{
	if(m+s[k]+s[k+1]<=d)
	sumofsub(m+s[k],k+1,r-s[k]);
	if((m+r-s[k]>=d) && (m+s[k+1]<=d))
	{
	x[k]=0;
	sumofsub(m,k+1,r-s[k]);}}}
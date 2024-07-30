#include<stdio.h>
void Dijkstra(int n, int a[10][10], int source)
	{
	int d[100],s[10],i,j,u,v,minval,sum=0;

	for(i=1;i<=n;i++)
	{
	s[i]=0;
	d[i]=a[source][i];
	}

	s[source]=1;

	for(i=1;i<=n-1;i++)
	{
	minval = 999;

			for(j=1;j<=n;j++)
			if(s[j]==0) if(d[j] < minval)
			{
			minval = d[j];
			u=j;
			}
			s[u]=1;
			sum=sum+d[u];

			for(v=1;v<=n;v++)
			if(s[v]==0 && d[v]>a[u][v])
			d[v]=d[u]+a[u][v];
	   }
for (i=1;i<=n;i++){
    printf("The shortest distance from %d to %d is %d\n",source,i,d[i]);
}

	   }

void main()
{
int n,a[10][10],i,j,source,mstcost;

printf(" Enter the Number of Nodes \n");
scanf("%d",&n);

printf(" Enter the Adjacency Matrix \n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

printf(" Enter the Source Node \n");
scanf("%d",&source);

Dijkstra(n,a,source);

}
	



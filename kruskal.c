#include<stdio.h>
#include<stdlib.h>

int parent[20]={0},min,mincost=0,ne=1,n,cost[20][20];
int a,b,i,j,u,v;
void kruskal(void);

void main()
{


 printf("Enter the number of  nodes:");
 scanf("%d",&n);

 printf("Enter the cost matrix:");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=999;
 }
 kruskal();
}
 void kruskal()
{
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
  for(j=1;j<=n;j++)
  if(cost[i][j]<min)
  {
    min=cost[i][j];
    a=u=i;
    b=v=j;
  }
  while(parent[u])
  u=parent[u];
  while(parent[v])
  v=parent[v];
  if(u!=v)
  {
   printf("%d\tedge\t(%d,%d)=%d\n",ne++,a,b,min);
   mincost+=min;
   parent[v]=u;
  }
  cost[a][b]=cost[b][a]=999;
 }
 printf("The minimum cost=%d\n",mincost);
}

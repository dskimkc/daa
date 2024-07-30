#include<stdio.h>

#include<stdlib.h>
#include<time.h>
int partition(int a[],int low,int high) {
int i,j,temp,key;
key=a[low];
i=low+1;
j=high;
while(1) {
while(i<high && key>=a[i])
i++;
while(key<a[j]) j--;
if(i<j) {
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else {
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}

}

}
void quicksort(int a[ ],int low,int high)
{
int j;
if(low<high)
{
j=partition (a, low, high);
quicksort (a,low,j-1);
quicksort(a,j+1,high);
}
}
int main()
{
int i ,n,a[100];
time_t start,end;
printf("enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
a[i]=rand()%100;
printf("%d\t",a[i]) ;
}
 start=clock();
 quicksort(a,0,n-1);
end=clock();
 printf("\nthe sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
double tc=(difftime(end,start)/CLOCKS_PER_SEC);
 printf("\ntime taken is %f",tc);
return 0;

}


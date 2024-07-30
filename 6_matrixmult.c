#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int matrixmult(int p[],int i,int j){
    if(i==j)
    return 0;
    int count;
    int min=INT_MAX;
    for (int k=i;k<j;k++){
        count=matrixmult(p,i,k)+matrixmult(p,k+1,j)+p[i-1]*p[j]*p[k];
        if (count<min)
        min=count;
    }
    return min;
}
int main(){
    int arr[]={1,2,3,4,3};
    int N=5;
    printf("%d",matrixmult(arr,1,N-1));
}
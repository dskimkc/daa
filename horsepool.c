#include<stdio.h>
#include<string.h>

		void main()
		{
		char T[100],P[100];
		int flag;
	
		printf("Enter the Text String \n");
		gets(T);
		printf("Enter the Pattren String \n");
		gets(P);

		flag = horspool(T,P,strlen(T),strlen(P));

		if(flag == -1)
		printf("String not Found \n");
		else
		printf("String found at posiion %d \n", flag);
		}
       //------------------------------------------------------------------
		horspool(char T[100], char P[100], int n, int m)
		{
		char table[200];
		int i,j;

		for(i=0;i<n;i++)
		table[T[i]] = m;

		for(i=0;i<m-1;i++)
		table[P[i]] = m-1-i;

		i = m-1;

		while( i < n )
		{
		j = 0;

		while(j < m && T[i-j] == P[m-1-j])
		j = j + 1;


		if(j == m) return i-m+1;
		else
		i = i + table[T[i]];
		}
		return -1;
		}


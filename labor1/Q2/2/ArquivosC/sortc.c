/* Ordenamento de vetor */
/* Versão com vetor Global */

#include <stdio.h>

#define N 10
static int v[N]={9,2,5,1,8,2,4,3,6,7};

void show(int v[], int n)
{
   int i;
   for(i=0;i<n;i++)
         printf("%d\t",v[i]);
   printf("\n");
}

void swap(int v[], int k)
{
   int temp;
   temp=v[k];
   v[k]=v[k+1];
   v[k+1]=temp;
}

void sort(int v[], int n)
{
   int i,j;
    for(i=0;i<n;i++)
        for(j=i-1;j>=0 && v[j]>v[j+1];j--)
            swap(v,j);
}


int main()
{
   show(v,N);
   sort(v,N);
   show(v,N);
}	



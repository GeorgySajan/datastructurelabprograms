#include<stdio.h>
#include<conio.h>
int smallest(int arr[],int k,int n);
int selection_sort(int arr[],int n);
void main()
{
int arr[10],i,n;
clrscr();
printf("\n enter the number of elements in the array:");
scanf("%d",&n);
printf("\n enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
selection_sort(arr,n);
printf("\n the sorted array is :\n");
for(i=1;i<=n;i++)
printf("%d\t",arr[i]);
}
int smallest(int arr[],int k,int n)
{
int small,j,pos;
small=arr[k];
pos=k;
for(j=k+1;j<=n-1;j++)
{
if(small>arr[j])
{
small=arr[j];
pos=j;
}
getch();
}
int selection_sort(int arr[],int n);
{
int k,pos,temp;
for(k=1;k<=n-1;k++)
{
pos=smallest(arr,k,n);
temp=arr[k];
arr[k]=arr[pos];
arr[pos]=temp;
}
getch();
}
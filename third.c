#include<stdio.h>
int main()
{
  int arr[10];
  int n;
  printf("\n Enter a size of array ");
  scanf("%d",&n);
  printf("\nEnetr the elements of array ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int a=arr[n-2];
  int b=arr[n-1];
  int l=arr[0]*arr[1];
  int k=arr[0];
  for(int j=1;j<n-1;j++)
  {

  int m=k*arr[j+1];
    k=arr[j];
    arr[j]=m;
  }
  arr[0]=l;
  arr[n-1]=b*a;
  printf("\n The final array is ");
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}

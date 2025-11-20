#include <stdio.h>
int main ()
{int arr[5]={10,20,30,40,50};
int low=0,high=4;
int mid,n=40;
while(low<=high)
{mid=(low+high)/2;if (arr[mid]==n)
{printf("element found at index %d",mid);return 0;}else if (arr[mid]<n)
low=mid+1; else high+mid-1;}printf("element not found");
return 0;
    
}
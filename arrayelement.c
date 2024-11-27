#include<stdio.h>
int main() {
int n, sum=0;
printf("Enter the number of element:");
scanf("%d",&n);
int arr[n];
printf("Enter the element:");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  sum+=arr[i];
  }
printf("sum=%d\n",sum);
return 0;
}

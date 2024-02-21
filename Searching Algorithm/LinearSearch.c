// To find the element in an array using linear search 
#include<stdio.h>
int main(){
  int a[20],i,n,num;
  printf("Enter the size of an array:");
  scanf("%d",&n);
  printf("Enter the elements :");
  for(i=0;i<n;i++){
     scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched:");
  scanf("%d",&num);
  for(i=0;i<n;i++){
     if(a[i]==num){
       printf("The element %d is found",num);
       return 0;
     }  
  }  
  printf("The element %d is not found",num);
  return 0;

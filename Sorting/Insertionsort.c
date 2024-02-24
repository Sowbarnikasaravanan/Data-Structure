//To sort an array using insertion sort
#include<stdio.h>
void main(){
    int a[20],i,j,n,temp;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("After sorting :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
/*
Sample Output:
Enter the size of an array: 5
Enter the elements:
7
4
6
2
9
After sorting :2 4 6 7 9 
*/

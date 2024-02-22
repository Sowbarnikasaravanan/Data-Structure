// To search the element using binary search
#include <stdio.h>
//void binarysearch(int arr[],int n,int search);
void main(){
    int a[20],i,search,n;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the elements in ascending order:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    int left=0,right=n-1,mid,found=0;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==search){
            printf("%d is found at the location %d",search,mid+1);
            found=1;
            break;
        }
        else if(a[mid]>search){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    if(found==0){
        printf("%d is not found in an array");
    }
}
/*
Sample Output:
Enter the size of an array :5
Enter the elements in ascending order:12
34
56
78
90
Enter the element to be searched:34
34 is found at the location 2
*/

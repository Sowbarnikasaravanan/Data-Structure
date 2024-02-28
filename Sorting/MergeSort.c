// Sort an array using merge sort
#include <stdio.h>
void merge(int a[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[30];
    while(i<=mid && j<=ub){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }   
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k++]=a[j];
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k++]=a[i];
            i++;
        }
    }
    for(k=lb;k<=ub;k++){
        a[k]=b[k];
    }
}
mergesort(int a[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main() {
   int a[30],i,n,lb,ub,k;
   printf("Enter the size of an array:");
   scanf("%d",&n);
   printf("Enter the elements :");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   lb=0,ub=n-1;
   mergesort(a,lb,ub);
   printf("After sorting:");
    for(k=lb;k<=ub;k++){
        printf("%d ",a[k]);
    }
    return 0;
}

/*
Sample Output:
Enter the size of an array:8
Enter the elements :34
87
54
23
69
92
17
48
After sorting:17 23 34 48 54 69 87 92 
*/

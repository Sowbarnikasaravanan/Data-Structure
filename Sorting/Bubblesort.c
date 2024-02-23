// To sort an array using bubble sort
#include <stdio.h>
int main() {
    int n,a[20],i,j,temp;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("After sorting, the elements are ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

/*Sample Output:
Enter the size of an array :5
Enter the elements :6
4
7
5
8
After sorting, the elements are 4 5 6 7 8 
*/

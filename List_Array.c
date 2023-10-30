// To implement the list using array implementation
#include<stdio.h>
#define SIZE 10
void create();
void display();
void insert(int element,int pos);
void delete(int pos);
int a[SIZE],i,element,pos,n;
void main(){
  int choice,ch;
  do{
     printf("Enter your choice : \n 1.Create \n 2.Display \n 3.Insert \n 4.Delete  \n");
     scanf("%d",&choice);
     switch(choice){
         case 1:printf("Enter the size of an array:");
                scanf("%d",&n);
                create();
                break;
        case 2:display();
                break;
        case 3:printf("Enter the element to be inserted:");
               scanf("%d",&element);
               printf("Enter the position where the element to be inserted:");
               scanf("%d",&pos);
               insert(element,pos);
               break;
        case 4:printf("Enter the position of  the element to be deleted:");
               scanf("%d",&pos);
               delete(pos);
               break;
        default:printf("Invalid Selection ");
     }
    printf(" \nDo you want to continue ,Press 1:");
    scanf("%d",&ch);
  }while(ch==1);
}
void create(){
  printf("Enter the elements of an array:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
void display(){
  if(n<=0){
      printf(("No elements in an array"));
  }
  else{
    printf("The elements in an array are:");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
 }
}
void insert(int element,int pos){
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos]=element;
    printf("After insertion, the elements in an array :");
    for(i=0;i<n+1;i++){
        printf("%d \n",a[i]);
    }
}
void delete(int pos){
     if(n<=0){
         printf("Deletion cannot be done");
     }
     else{
        element=a[pos]; 
        for(i=pos;i<n;i++){
            a[i-1]=a[i];
        }
        printf("After deleted, the elements in an array :");
        for(i=0;i<n-1;i++){
            printf("%d \n",a[i]);
        }
    }
}

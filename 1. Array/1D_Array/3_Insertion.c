#include <stdio.h>

int main(){
    int arr[50],size,ele,pos;
    // Insert all elements 
    printf("Enter size of an Array:");
    scanf("%d",&size);
    if(size<50){
        printf("Enter %d Elements in array: ",size);
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("Array Elements after inserting all at once:");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }


    // Insert element at beginning
    printf("\nEnter Element to insert at beginning:");
    scanf("%d",&ele);
    for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    }

    arr[0]=ele;
    size++;

    printf("Array after adding new Element at beginning:");
    for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    

    // Insert at specific position
    printf("\nEnter position and element to insert:");
    scanf("%d%d",&pos,&ele);
    if(pos>=0 && pos<size+1){

        for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }


    arr[pos-1]=ele;
    size++;

    printf("Array after adding new Element at position %d:",pos);
    for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
    }
}


// Insert element at End
    printf("\nEnter Element to insert at end:");
    scanf("%d",&ele);
    arr[size++]=ele;

    printf("Array after adding new Element at End:");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }

    
}
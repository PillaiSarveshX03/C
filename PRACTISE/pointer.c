#include <stdio.h>
#include <stdlib.h>

void main(){

    /* POINTER CALLING
    
    int n;

    printf("Enter The number of the Students : ");
    scanf("%d",&n);

    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n ; i++){

        printf("Enter The %d Marks : ",(i+1));
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<n ; i++){

        printf("%d ",ptr[i]);
    }

    free(ptr); */





    /* POINTER

    int a = 5;
    int *ptr = &a;
    printf("Adress of the ptr is %p ",ptr);
    printf("Value of the ptr is %d ",*ptr);
    */

    /* ARRAY POINTER

    int arr[5] ={1,2,3,4,5};
    int *ptr= &arr[0];
    int i;

    for(i =1 ; i<=(sizeof(arr)/4) ; i++)
    {

        printf("Value : %d \n",*(ptr));
        printf("Adress : %p \n", ptr);
        ptr++;

    }
    */
    
    
}
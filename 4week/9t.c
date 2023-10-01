#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n){

  int smallest=arr[0];
  int largest=arr[0];
  for(int i=0; i<n; i++){
    if(smallest<arr[i]){
      smallest=arr[i];
    }
    for(int i=0; i<n; i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
    return largest*smallest;
  }

}

int main()
{
    //declared a variable and an array
    int n,*arr;
    printf("Enter number:");
    scanf("%d",&n);

    //memory allocation for array
    arr=(int*) malloc(sizeof(int)*n);
    if (arr==NULL){
        exit(1);
    }
    //giving values in array depending on num value
    printf("Enter the values:");
    for (int i=0; i<n; i++){
            scanf("%d",&arr[i]);
    }
    //printing the product called in function
    printf("the product is %d",prodminmax(arr,n));

    //freeing array in the end
    free (arr);
    return 0;
}
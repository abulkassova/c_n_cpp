#include <stdio.h>
#include <stdlib.h>

void greatest2(int arr[], int n) {
    int greatest = arr[0];
    int greatest_ = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    for (int j = 1; j < n; j++) {
        if (arr[j] > greatest_ && arr[j] != greatest) {
            greatest_ = arr[j];
        }
    }

    printf("The greatest 2 values are %d and %d\n", greatest, greatest_);
}

int main(){

  int n, *array, i;
  printf("give the dimension of the array\n");
    scanf("%d", &n);

  array=(int*)malloc(sizeof(int)*n);

  if(array==NULL){
    exit(1);
  }

  for(i=0; i<n;i++){

    printf("Enter the value #%d\n", i+1);
    scanf("%d", &array[i]);
    getchar();
  }
  greatest2(array,n);
  free(array);

  return 0;

}


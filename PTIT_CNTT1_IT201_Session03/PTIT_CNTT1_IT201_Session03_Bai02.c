#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int findMax(int arr[], int size) {
   int max = arr[0];
   for (int i=0; i<size; i++) {
      if (max< arr[i]) {
         max = arr[i];
      }
   }
   return max;
}
int *insertArray(int *arr, int *size) {
   while (1) {
      printf("moi nhap so phan tu:");
      scanf("%d", size);
      if (*size== 0) {
         printf("\nso luong phan tu phai lon hon 0\n");
      }else if (*size< 0) {
         printf("\nso luong phan tu khong duoc am\n");
      }else {
         break;
      }
   }
   arr = (int*)realloc(arr, *size*sizeof(int));
   for (int i = 0; i<*size; i++) {
      printf("\nmoi nhap phan tu thu %d:", i+1);
      scanf("%d", &arr[i]);
   }
   return arr;
}
int main(){
   int size;
   int num;
   int *arr = NULL;
   arr = insertArray(arr, &size);
   printf("\nmax = %d", findMax(arr, size));
   free(arr);
   return 0;
}

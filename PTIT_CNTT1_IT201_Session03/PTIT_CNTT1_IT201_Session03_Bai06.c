#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
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
   int currentIndex = *size;
   int newSize;
   arr = (int*)realloc(arr, *size*sizeof(int));
   for (int i = 0; i<*size; i++) {
      printf("\nmoi nhap phan tu thu %d:", i+1);
      scanf("%d", &arr[i]);
   }
   //them phan tu
   while (1) {
      printf("moi nhap so phan tu muon them:");
      scanf("%d", &newSize);
      if (newSize< 0) {
         printf("\nso luong phan tu muon them khong duoc am\n");
      }else {
         break;
      }
   }
   *size += newSize;
   arr = (int*)realloc(arr, *size*sizeof(int));
   for (int i = currentIndex; i<*size; i++) {
      printf("\nmoi nhap phan tu thu %d:", i+1);
      scanf("%d", &arr[i]);
   }
   //in ptu
   printf("\n");
   for (int i = 0; i<*size; i++) {
      printf("%d\t", arr[i]);
   }
   return arr;
}

int *deleteFromArray(int *arr, int *size) {}
int main(){
   int *arr = NULL;
   int size;
   arr = insertArray(arr, &size);
   free(arr);
   return 0;
}

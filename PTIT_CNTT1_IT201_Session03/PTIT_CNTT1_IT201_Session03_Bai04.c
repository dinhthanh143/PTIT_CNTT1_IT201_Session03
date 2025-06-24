#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int *insertArray(int **arr, int *rows, int *cols) {
   while (1) {
      printf("moi nhap so hang:");
      scanf("%d", rows);
      if (*rows== 0) {
         printf("\nso luong hang phai lon hon 0\n");
      }else if (*rows< 0) {
         printf("\nso luong hang khong duoc am\n");
      }else {
         break;
      }
   }
   while (1) {
      printf("moi nhap so cot:");
      scanf("%d", cols);
      if (*cols== 0) {
         printf("\nso luong cot phai lon hon 0\n");
      }else if (*cols< 0) {
         printf("\nso luong cot khong duoc am\n");
      }else {
         break;
      }
   }
   arr = (int**)realloc(arr, *rows * sizeof(int*));
   for (int i = 0; i < *rows; i++) {
      arr[i] = (int*)malloc(*cols * sizeof(int));
   }
   for (int i = 0; i<*rows; i++) {
      for (int j = 0; j<*cols; j++) {
         printf("\nmoi nhap phan tu arr[%d][%d]=:", i, j );
         scanf("%d", &arr[i][j]);
      }
   }


   return arr;
}
void findMinMax(int **arr, int rows, int cols) {
   int min = arr[0][0];
   int max = min;
   for (int i = 0; i<rows; i++) {
      for (int j = 0; j<cols; j++) {
         if (arr[i][j]>max) {
            max = arr[i][j];
         }
         if (arr[i][j]<min) {
            min = arr[i][j];
         }
      }
   }
   printf("\nmax = %d\nmin = %d", max, min);
}
int main(){
   int rows;
   int cols;
   int **arr= NULL;
   arr = insertArray(arr, &rows, &cols);
   findMinMax(arr, rows, cols);
   for (int i = 0; i < rows; i++) {
      free(arr[i]); 
   }
   free(arr); 
   return 0;
}

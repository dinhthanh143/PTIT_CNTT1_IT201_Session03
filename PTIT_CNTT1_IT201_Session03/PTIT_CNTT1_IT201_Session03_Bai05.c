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
void calMainAndSubDiagonal(int **arr, int rows, int cols) {
   int subCheck = 0;
   if (rows!=cols) {
       subCheck = 1;
   }
   if (subCheck) {
      printf("\n Khong ton tai duong cheo chinh");
      printf("\n Khong ton tai duong cheo phu");
   }else {
      int main = 0;
      int sub = 0;
      for (int i = 0; i<rows; i++) {
         main += arr[i][i];
      }
      printf("\n Tong duong cheo chinh = %d", main);
      for (int i = 0; i<rows; i++) {
         sub += arr[i][cols-1];
         cols--;
      }
      printf("\n Tong duong cheo phu = %d", sub);
   }
}
int main(){
   int **arr = NULL;
   int rows;
   int cols;
   arr = insertArray(arr, &rows, &cols);
   calMainAndSubDiagonal(arr, rows, cols);
   free(arr);
   return 0;
}

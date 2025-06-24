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
void calSumSingularRow(int **arr, int rows, int cols) {
   int row;
   int sum = 0;
   while (1) {
     printf("\nMoi nhap hang muon tinh tong:");
   scanf("%d", &row);
      if (row<=0 || row>rows) {
      printf("\n hang can tinh khong ton tai");
      }else {
         break;
      }
   }
   row--;
   for (int i = 0; i < cols; i++) {
      sum += arr[row][i];
   }
   printf("\n sum = %d", sum);
}
void printArray(int **arr, int rows, int cols) {
for (int i = 0; i < rows; i++) {
   printf("\n");
   for (int j = 0; j < cols; j++) {
      printf("%d\t", arr[i][j]);
   }
}
}
int main(){
   int **arr = NULL;
   int rows;
   int cols;
   arr = insertArray(arr, &rows, &cols);
   printArray(arr, rows,cols);
   calSumSingularRow(arr, rows, cols);
      for (int i = 0; i < rows; i++) {
      free(arr[i]); 
   }
   free(arr);
   return 0;
}

#include <stdio.h>

enum{
    ROWS = 3,
    COLS = 4
};
int matrix[ROWS][COLS];

void processMatrix(){
      for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLS; j++){
        matrix[i][j] = i + j;
    }
   }

   for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLS; j++){
        printf("%d",matrix[i][j]);
    }
    printf("\n");
   }
}

int main(){
   processMatrix();
   return 0;
}
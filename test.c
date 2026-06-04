#include <stdio.h>

enum Grade {A,B,C,D,F};

void aHandler(){
  printf("A");
}
void bHandler(){
  printf("B");
}
void cHandler(){
  printf("C");
}
void dHandler(){
  printf("D");
}
void fHandler(){
  printf("F");
}


void getGrade(int score){
   switch (score)
   {
   case score > 80:
    aHandler();
    break;

    case score > 70:
    bHandler();
    break;

    case score > 60:
    cHandler();
    break;

    case score > 50:
    dHandler();
    break;

   default:
   fHandler();
    break;
   }
 }

int main(){
  
    int score;
    printf("Enter marks: ");
    scanf("%d",&score);

   getGrade(score);
    return 0;
}
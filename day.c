#include <stdio.h>

enum Week{
  MONDAY ,TUESDAY,WEDNESAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
};
char *dayName[] = {
  "MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"
}

for(int i = MONDAY; i < SUNDAY; i++){
  printf("%d: %s", i, dayName[i]);
}

int main(){

}
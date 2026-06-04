#include <stdio.h>

enum Week{
  MONDAY = 1 ,TUESDAY,WEDNESAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
};

void WeekDay(enum Week Day){
   if(Day <= FRIDAY ){
        printf("Week day\n");
    }
    else{
        printf("Week end\n");
    }
}

enum fileAccessDefine { Read =1, Write = 2,
     Execute = 4 };

enum fileAccessDefine access = Read|Write;

enum logLevel{
    Debug,Info,Warning,Error,Invalid
};

char *logLevelToString(enum logLevel level)







int main(){ 

    for(int i = MONDAY; i <= SUNDAY; i++){
        WeekDay(i);
    }

    if((Write && access) != 0){
    printf("Exists");
}
else{
    printf("Do not exist");
}

}
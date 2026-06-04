#include <stdio.h>

enum Day{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int Days(enum Day day){
    if(day <= Friday){
        return 1;
    }
    else{
        return 0;
    }
}

enum ErrorCode{
    OK = 0,
    FileNotFound = 1,
    AccessDenied = 2
};

void printError(enum ErrorCode code){ 
    
   switch (code)
   {
   case OK:
    printf("OK\n");
    break;

    case FileNotFound:
    printf("File not found\n");
    break;

    case AccessDenied:
    printf("Access denied\n");
    break;
   
   default:
   printf("Invalid value\n");
    break;
   }
}

int main(){

enum DayOfWeek{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
printf("Monday = %d\n",Monday);
printf("Tuesday = %d\n",Tuesday);
printf("Wednesday = %d\n",Wednesday);
printf("Thursday = %d\n",Thursday);
printf("Friday = %d\n",Friday);
printf("Saturday = %d\n",Saturday);
printf("Sunday = %d\n",Sunday);

for(int i = Monday; i <= Sunday; i++){
    printf("%d\n",i);
}

const char *days[] = {
    "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday", "Sunday"
};

for(int i = Monday; i <= Sunday; i++){
    printf("%s = %d\n",days[i],i);
}

//Question 2

enum Gender {
    Male,
    Female,
    Other
};

int choice;
enum Gender g;

printf("Enter choice (0 = male, 1 = female, 2 = other): ");
scanf("%d",&choice);

g = choice;

switch(g){
    case Male:
    printf("Male\n");
    break;

    case Female:
    printf("Female\n");
    break;

    case Other:
    printf("Other\n");
    break;

    default:
    printf("Invalid choice\n");
}


//Question 3  Traffic lights


enum TrafficLight{
    Red,Yellow,Green
};

enum TrafficLight status = Green;

switch (status)
{
    case Red:
    printf("Stop\n");
    break;

    case Yellow:
    printf("Ready\n");
    break;

    case Green:
    printf("Go\n");
    break;

    default:
    printf("Invalid value\n");
    break;
}


//Question 4

enum Priority{
    Low = 10,
    Medium = 20,
    High = 30,
    VeryHigh
};

enum Priority state = Low;

switch (state)
{
case Low:
    printf("%d\n",Low);
    break;

    case Medium:
    printf("%d\n",Medium);
    break;

    case High:
    printf("%d\n",High);
    break;

    case VeryHigh:
    printf("%d\n",VeryHigh);
    break;

default:
    break;
}

//Question 6

enum Day day = Sunday;


    if (Day(day)) {
        printf("Weekday\n");
    } else {
        printf("Weekend\n");
    }

    return 0;
}
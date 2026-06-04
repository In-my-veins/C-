#include <stdio.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

int main(){

    struct Student S1 = {5,"Asifiwe",90};    
   
    struct Student *ptr = &S1;
    printf("%d",ptr -> rollno);

    return 0;
}

//COMPILE TIME INITIALISATION VS RUN TIME INITIALISATION
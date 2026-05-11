#include <stdio.h>
<<<<<<< HEAD

struct Student{
    int age;
    float marks;
};

struct Student student1,student2,student3;

struct Student *ptr = NULL;

//Two functions

void readInputs();
void outputData();

int main(){

    readInputs();
    outputData();
}

void readInputs(){
    printf("Student1 ____________\n");

    //Student2

    ptr = &student1;
    printf("\nEnter age: ");
    scanf("%d",&ptr -> age);

    printf("\nEnter marks: ");
    scanf("%f",&ptr -> marks);

    //Student3

    printf("Student2__________\n");
    ptr = &student2;
    printf("\nEnter age: ");
    scanf("%d",&ptr -> age);

    printf("\nEnter marks: ");
    scanf("%f",&ptr -> marks);
}

void outputData(){
    printf("Student1: \n");

    printf("Student1 age: %d\n",student1.age);
    printf("Student1 marks: %.2f\n",student1.marks);

    printf("Student2: \n");

    printf("Student2 age: %d\n",student2.age);
    printf("Student2 marks: %.2f\n",student2.marks);
}
=======
#include <string.h>

enum StatusCode

void printStatusCode(enum StatusCode ){

}

int main(){

    enum FileAccess{
    Read = 1, Write = 2, Execute = 4
};

enum FileAccess permission = Read | Write;

if(permission & Write){
    printf("Write included in the permission\n");
}
else{
    printf("Write not included\n");
}


enum Colors{
    Red,
    Green,
    Blue
};

char input;
const char *colorNames[] = {
    "Red",
    "Green",
    "Blue"
};

printf("Enter color (Red, Green, Blue): ");
gets(input);

enum Colors color;

if(strcmp(input,"Red") == 0){
    color = "Red";
}

if(strcmp(input,"Green") == 0){
    color = "Green";
}

if(strcmp(input,"Blue") == 0){
    color = "Blue";
}

if(strcmp(input,"Red")){
    color = "Red";
}

else{
    printf("Invalid color");
}

printf("Corresponding color: %s",color);

}
>>>>>>> 95018b5 (Commit on enumerations)

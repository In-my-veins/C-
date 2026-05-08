#include <stdio.h>

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
#include <stdio.h>
<<<<<<< HEAD
#include <string.h>

struct Student{
    int id;
    int age;
    char fName[20];
    char lName[20];
    char gender[20];
};

struct Student student1,student2;
struct Student *ptrstu = NULL;

void readInputs(){
   printf("Student 1:\n\n");

   ptrstu = &student1;
   printf("Id: ");
   scanf("%d", &ptrstu -> id);
   printf("Age: ");
   scanf("%d",&ptrstu -> age);
   printf("First name: ");
   scanf("%s",&ptrstu -> fName);
   printf("Last name: ");
   scanf("%s",&ptrstu -> lName);
   printf("Gender: ");
   scanf("%s",&ptrstu -> gender);

   printf("Student 2:\n\n");

   ptrstu = &student2;
   printf("Id: ");
   scanf("%d", &ptrstu -> id);
   printf("Age: ");
   scanf("%d",&ptrstu -> age);
   printf("First name: ");
   scanf("%s",&ptrstu -> fName);
   printf("Last name: ");
   scanf("%s",&ptrstu -> lName);
   printf("Gender: ");
   scanf("%s",&ptrstu -> gender);
}


void outputData(){
    printf("\n\n");
  printf("Student 1: \n\n");

  printf("Id: ");
  printf("%d\n",student1.id);
  printf("Age: ");
  printf("%d\n",student1.age);
  printf("First name: ");
  printf("%s\n",student1.fName);
  printf("Last name: ");
  printf("%s\n",student1.lName);
  printf("Gender: ");
  printf("%s\n",student1.gender);


  printf("\n\n");

  printf("Student 1: \n\n");

  printf("Id: ");
  printf("%d\n",student2.id);
  printf("Age: ");
  printf("%d\n",student2.age);
  printf("First name: ");
  printf("%s\n",student2.fName);
  printf("Last name: ");
  printf("%s\n",student2.lName);
  printf("Gender: ");
  printf("%s\n",student2.gender);
}

int main(){
    readInputs();
    outputData();
=======

enum OrderStatus{
    PENDING,
    PAID,
    SHIPPED,
    DELIVERED,
    CANCELLED
};

int main(){
    enum OrderStatus status;
    status = SHIPPED;

    switch(status){
      case PENDING:
      printf("PENDING\n");
      break;
      case PAID:
      printf("PAID\n");
      break;
      case SHIPPED:
      printf("SHIPPED\n");
      break;
      case DELIVERED:
      printf("DELIVERED\n");
      break;
      case CANCELLED:
      printf("CANCELLED\n");
      break;
    }
    

>>>>>>> 95018b5 (Commit on enumerations)
    return 0;
}
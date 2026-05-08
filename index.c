#include <stdio.h>
#include <string.h>

struct Person{
  char name[50];
  int age;
  char gender[10];
  float salary;
} person1,person2,person3;

int main(){

strcpy(person1.name,"Asifiwe");
strcpy(person2.name,"Nshuti");
strcpy(person3.name,"Ben");

person1.age = 16;
person2.age = 16;
person3.age = 16;

strcpy(person1.gender,"male");
strcpy(person2.gender,"male");
strcpy(person3.gender,"female");

person1.salary = 2334000.320;
person2.salary = 2348392.500;
person3.salary = 3234343.345;

printf("Name of first person: %s\n",person1.name);
printf("Age of second person: %d\n",person2.age);
printf("Salary of third person: %f\n",person3.salary);

  return 0;
}





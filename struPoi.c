#include <stdio.h>
#include <string.h>

struct Person{
    int age;
    float height;
    float weight;
    char nationality[20];
};

int main(){
    
struct Person person1;

struct Person *personPtr = &person1;

personPtr -> age = 16;
personPtr-> height = 1.75;
personPtr -> weight = 55.45;
strcpy(personPtr -> nationality,"Kenyan");

printf("Age: %d\n",personPtr -> age);
printf("Height: %.2f\n",personPtr -> height);
printf("Weight: %.2f\n",personPtr -> weight);
printf("Nationality: %s\n",personPtr -> nationality);



    return 0;
}
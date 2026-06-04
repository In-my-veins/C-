#include <stdio.h>

struct Car {
int nbrOfTyres;

int nbrOfDoors;

int nbrOfSits;

char color[20];

float price;
};

struct Car Toyota,Benz,Fuso;
struct Car *ptrCar = NULL;

void readInputs();
void outputData();

int main(){
  readInputs();
  outputData();
  return 0;
}

void readInputs(){
    
    printf("Toyota:______________\n");
    ptrCar = &Toyota;
    printf("Number of tyres: \n");
    scanf("%d",&ptrCar -> nbrOfTyres);
    printf("Number of doors: ");
    scanf("%d",&ptrCar -> nbrOfDoors);
    printf("Number of sits: ");
    scanf("%d",&ptrCar -> nbrOfSits);
    printf("Color: ");
    scanf("%s",ptrCar -> color);
    printf("Price: ");
    scanf("%f",&ptrCar -> price);

    printf("Fuso:______________\n");
    ptrCar = &Fuso;
    printf("Number of tyres: \n");
    scanf("%d",&ptrCar -> nbrOfTyres);
    printf("Number of doors: ");
    scanf("%d",&ptrCar -> nbrOfDoors);
    printf("Number of sits: ");
    scanf("%d",&ptrCar -> nbrOfSits);
    printf("Color: ");
    scanf("%s",ptrCar -> color);
    printf("Price: ");
    scanf("%f",&ptrCar -> price);

    printf("Benz:______________\n");
    ptrCar = &Benz;
    printf("Number of tyres: \n");
    scanf("%d",&ptrCar -> nbrOfTyres);
    printf("Number of doors: ");
    scanf("%d",&ptrCar -> nbrOfDoors);
    printf("Number of sits: ");
    scanf("%d",&ptrCar -> nbrOfSits);
    printf("Color: ");
    scanf("%s",ptrCar -> color);
    printf("Price: ");
    scanf("%f",&ptrCar -> price);
}

void outputData(){

   printf("Toyota:\n");
   printf("Number of tyres = %d\n",Toyota.nbrOfTyres);
   printf("Number of doors = %d\n",Toyota.nbrOfDoors);
   printf("Number of sits: %d\n",Toyota.nbrOfSits);
   printf("Color is %s\n",Toyota.color);
   printf("Price = %.3f\n",Toyota.color);

   printf("Fuso:\n");
   printf("Number of tyres = %d\n",Fuso.nbrOfTyres);
   printf("Number of doors = %d\n",Fuso.nbrOfDoors);
   printf("Number of sits: %d\n",Fuso.nbrOfSits);
   printf("Color is %s\n",Fuso.color);
   printf("Price = %.3f\n",Fuso.color);

   printf("Benz:\n");

   printf("Number of tyres = %d\n",Benz.nbrOfTyres);
   printf("Number of doors = %d\n",Benz.nbrOfDoors);
   printf("Number of sits: %d\n",Benz.nbrOfSits);
   printf("Color is %s\n",Benz.color);
   printf("Price = %.3f\n",Benz.price);

}
#include<stdio.h>
void readInputs();
void outputData();
struct Car{
int nbrOfTyres, nbrOfDoors, nbrOfSits;
char color[20];
float price;
//struct Car *ptrCar=NULL;
};
struct  Car Toyota, Benz, Fuso;
struct Car *ptrCar=NULL;
int main(){
    readInputs();
    outputData();
return 0;
}
void readInputs(){
    ptrCar=&Toyota;
printf("input properties values\n");
    printf("1. TOYOTA \n_______________\n");
    printf("Nbr of Tyres:\n");
    scanf("%d",ptrCar->nbrOfTyres);
    printf("Nbr of Doors:\n");
    scanf("%d",ptrCar->nbrOfDoors);
    printf("Nbr of Sits:\n");
    scanf("%d",ptrCar->nbrOfSits);
    printf("Price:\n");
    scanf("%f",ptrCar->price);
    printf("Color:\n");
    scanf("%s",ptrCar->color);
    ptrCar=&Benz;
    printf("2. BENZ \n_______________\n");
    printf("Nbr of Tyres:\n");
    scanf("%d",ptrCar->nbrOfTyres);
    printf("Nbr of Doors:\n");
    scanf("%d",ptrCar->nbrOfDoors);
    printf("Nbr of Sits:\n");
    scanf("%d",ptrCar->nbrOfSits);
    printf("Price:\n");
    scanf("%f",ptrCar->price);
    printf("Color:\n");
    scanf("%s",ptrCar->color);

    ptrCar=&Fuso;
    printf("3. FUSO \n_______________\n");
    printf("Nbr of Tyres:\n");
    scanf("%d",ptrCar->nbrOfTyres);
    printf("Nbr of Doors:\n");
    scanf("%d",ptrCar->nbrOfDoors);
    printf("Nbr of Sits:\n");
    scanf("%d",ptrCar->nbrOfSits);
    printf("Price:\n");
    scanf("%f",ptrCar->price);
    printf("Color:\n");
    scanf("%s",ptrCar->color);
}

void outputData(){
printf("Output properties values\n");
    printf("1. TOYOTA \n_______________\n");
    printf("Nbr of Tyres: %d\n", Toyota.nbrOfTyres);
    printf("Nbr of Doors: %d\n", Toyota.nbrOfDoors);
    printf("Nbr of Sits: %d\n",Toyota.nbrOfSits);
    printf("Price: %f\n", Toyota.price);
    printf("Color: %s\n", Toyota.color);



    printf("2. BENZ \n_______________\n");
    printf("Nbr of Tyres: %d\n", Benz.nbrOfTyres);
    printf("Nbr of Doors: %d\n", Benz.nbrOfDoors);
    printf("Nbr of Sits: %d\n",Benz.nbrOfSits);
    printf("Price: %f\n", Benz.price);
    printf("Color: %s\n", Benz.color);
    printf("3. FUSO \n_______________\n");
    printf("Nbr of Tyres: %d\n", Fuso.nbrOfTyres);
    printf("Nbr of Doors: %d\n", Fuso.nbrOfDoors);
    printf("Nbr of Sits: %d\n",Fuso.nbrOfSits);
    printf("Price: %f\n", Fuso.price);
    printf("Color: %s\n", Fuso.color);

}
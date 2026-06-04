#include <stdio.h>
enum Size {
    small,
    medium,
    large,
    Extralarge

};

int main(){

enum Size shoeSize;
shoeSize = large;
printf("%d\n",shoeSize);
}
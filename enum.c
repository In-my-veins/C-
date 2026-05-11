#include <stdio.h>

    enum level{
        LOW = 10,
        MEDIUM = 20,
        HIGH = 30
    };

    int main(){
        enum level l = HIGH;

        printf("%d",l);
          return 0;
    }

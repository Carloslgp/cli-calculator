#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double n1 = atof(argv[1]);
    double n2 = atof(argv[2]);

    printf("Success, %d arguments out of 3 were given \n", argc);
    printf("The subtraction is: %.4lf", n1 - n2);
    


    return 0;
}

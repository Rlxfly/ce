#include <stdio.h>

int main(){

    FILE * fpointer = fopen("nggih.txt", "w");

    fprintf(fpointer, "Awokawok banhet");
    fclose(fpointer);

    return 0;
}

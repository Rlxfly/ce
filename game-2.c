#include <stdio.h>

int main(){

    int pass = 7;
    int tebak;
    int tebakan = 0;
    int limit = 5;
    int ded = 0;

    while(tebak != pass && ded == 0){
            if(tebakan < limit){
        printf("Enter a number: ");
        scanf("%d", &tebak);
        tebakan++;
        } else {
            ded = 1;
        }
    }
        if(ded == 1){
            printf("Limit habis :(");
        } else {
        printf("Correct!");
        }

        /*
        Unli limit(keep looping)

        while(tebak != pass) {
            printf("Enter a number: ");
            scanf("%d", &tebak);
        }

        printf("Correct!");
        */


    return 0;
}

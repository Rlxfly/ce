#include <stdio.h>

int main(){

    int index = 1;
    while(index <= 10){
        printf("%d\n", index);
        index++; // looping nya, akan terus menambah 1 hingga sampai 10
        //hasilnya 1,2,3,4,5,6,7,8,9,10
    }

    // do while loop

    int iyh = 15;
    do {
        printf("%d\n", iyh);
        iyh++;
    } while(iyh <= 10);
// akan melakukan printf baru ngecek kondisi(tetep print walau ga nge loop)
/*
    // infinite loop
    // awkokawowk
    int nmr = 8;
    while(nmr <= 9){
        printf("%d\n", nmr);
    }

*/

    return 0;
}

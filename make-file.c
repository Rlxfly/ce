#include <stdio.h>

int main(){

    FILE * fpointer = fopen("nggih.txt", "w"); // buat file kosong
    // "w" = new file, "a" = tambah isi
    fprintf(fpointer, "Awokawok banhet");// buat ngisi
    fclose(fpointer);

    return 0;
}

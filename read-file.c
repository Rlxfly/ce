#include <stdio.h>

int main(){

    char line[257];
    FILE * fpointer = fopen("nggih.txt", "r"); // buat file kosong
    // "w" = new file, "a" = tambah isi, "r" = read
    fgets(line, 257, fpointer);
    printf("%s", line);

    fclose(fpointer);

    return 0;
}


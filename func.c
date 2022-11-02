#include <stdio.h>

int main()
{

    hi("Neg-"); // jika tidak di panggil functionnya maka tdk akan muncul apa"
    hi("Jakarta ini");
    hi("Hitam");

   return 0;
}

void hi(char name[])
//          ^ parameter/bisa di custom(?)
{
    printf("Ada ada saja %s \n", name);
}

// void = tidak akan mengeluarkan informasi apapapun

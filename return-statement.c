// return statement

#include <stdio.h>


double cube(double num);
// alternatif

/*
double cube(double num) {
    double ress = num * num * num;
    return ress;
    // atau
    // return num * num * num
    // juga bisa
}

// harus berada di atas int main
// jika mw di bawah pakai void(?)

*/

// ytta
int main()
{
    printf("Result is: %f", cube(10));
   return 0;
}

double cube(double num) {

    return num * num * num;

}

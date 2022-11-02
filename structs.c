#include <stdio.h>

struct Murid {
    char name[20];
    char major[20];
    int age;
    double gpa;
// membuat tipe data Murid
// mirip array, tapi bisa di pilih?
// menyimpan beberapa elemen di dalam kelas?
// bingung gmn jelasinnya
};
// wajib kapital

int main(){

    struct Murid murid1;
    murid1.age = 16;
    murid1.gpa = 3.3;
    // murid1.nama = "Sigit", ga bisa
    // pake string copy
    strcpy( murid1.name, "iyhd");
    strcpy( murid1.major, "Intel");

    struct Murid murid2;
    murid2.age = 20;
    murid2.gpa = 3.7;
    strcpy( murid2.name, "afh iyh");
    strcpy( murid2.major, "Art");

    printf("%s", murid2.name);

    return 0;
}

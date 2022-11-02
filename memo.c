#include <stdio.h>

int main(){

    int age = 16;
    double gpa = 3.3;
    char grade = 'B';

    printf("- Age: %p\n- GPA: %p\n- Grade: %p\n", &age, &gpa, &grade);

    return 0;
}

// buat ngecek lokasi variabel" tsb di simpan di memori

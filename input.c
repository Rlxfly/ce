#include <stdio.h>

int main(void) {

  // int age;
// double gpa; // double = 2 angka atw apa lah (2.2, 3.4, 567.5)

 // printf("Enter your gpa: ");
 // scanf("%lf", &gpa); // %lf = double (7.7 dst)
 // printf("Your gpa is %f", gpa);
  /*
  printf("Enter your age: ");
  scanf("%d", &age); //input
  //          ^ pointer
  printf("You are %d y.o", age);

  */


  char name[20];
  printf("Enter your name: ");
  fgets(name, 20, stdin);
  printf("Hello %s!", name);
  
  return 0;
}

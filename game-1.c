#include <stdio.h>

int main()
{
    char color[15];
    char objek[20];
    char name[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a object: ");
    scanf("%s", objek);
    printf("Enter a name: ");
    scanf("%s", name);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", objek);
  printf("Ada ada saja %s\n", name);

   return 0;
}

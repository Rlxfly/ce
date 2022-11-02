#include <stdio.h>

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 90, 99};
    //       ^ kapasitas array
    num[1] = 404;
    // array bisa di ubah jika bukan dalam variabel 'const'
    printf("%d", num[10]);


   return 0;
}

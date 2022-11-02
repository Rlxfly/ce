#include <stdio.h>

int max(int num1, int num2, int num3) {

    int res;

    if(num1 >= num2 && num1 >= num3){
        res = num1;
    } else if(num2 >= num1 && num2 >= num3){
        res = num2;
    } else {
        res = num3;
    }

    return res;
}
int main()
{

    printf("%d", max(22, 323, 44));

    return 0;
}

// agak bingung tapi tw intinya

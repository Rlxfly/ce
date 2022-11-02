#include <stdio.h>

int main(){

    int num[3][2] = {{1, 2}, {3, 4}, {5,6}};
    // 3 array 2 elemen
    int i, x;
    for(i = 0; i < 3; i++){
        for(x = 0; x < 2; x++){
            printf("%d, ", num[i][x]);
        }
        printf("\n");
    }


    return 0;
}
// ha?

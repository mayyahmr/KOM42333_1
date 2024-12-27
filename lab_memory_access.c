#include <stdio.h>

int main() {

    int sumayyah[7] = {2, 4, 6, 8, 10, 12, 14};


printf("Memory Access\n");
printf("------------\n\n");

    
    printf("*Sequential\n"); 
for( int i = 0; i < 7; i++ ) {
    printf("Position %d: %d\n", i, sumayyah[i]);
}

printf("\n*Non-Sequential\n");

printf("Position 6: %d\n", sumayyah[6]);
printf("Position 0: %d\n", sumayyah[0]);
printf("Position 3: %d\n", sumayyah[3]);
printf("Position 1: %d\n", sumayyah[1]);
printf("Position 5: %d\n", sumayyah[5]);

return 0;
} 

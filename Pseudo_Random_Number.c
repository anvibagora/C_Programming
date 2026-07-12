#include <stdio.h>
#include <stdlib.h>  //for rand() and srand()
#include <math.h>    //for time()

int main(){
    srand(time(NULL));
    printf("Generating 5 random numbers:\n");

    for(int i=0;i<5;i++){
        //Generate random number
        int rand_num = rand();
        printf("%d\n",rand_num);
    }
    //Limiting range of random number
    int min=1;
    int max=100;
    int ranged_num=(rand()%max)+min;
    printf("\nA random number between 1 and 100: %d\n",ranged_num);
    return 0;
}
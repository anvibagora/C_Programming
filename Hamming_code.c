#include <stdio.h>

int main(){
    int num[7],data[11];
    int i,j;
    printf("Enter binary data: ");
    for(i=0;i<7;i++){
        scanf("%d",&num[i]);
    }
    j=0;
    for(i=0;i<11;i++){
        if(i==3 || i==7 || i==9 || i==10){
            continue;
        }
        data[i]=num[j];
        j++;
    }
    // '^' is used for XOR gate
    data[10]= data[0]^data[2]^data[4]^data[6]^data[8];
    data[9]= data[0]^data[1]^data[4]^data[5]^data[8];
    data[7]= data[4]^data[5]^data[6];
    data[3]= data[0]^data[1]^data[2];

    printf("The binary number now is: \n");
    for(i=0;i<11;i++){
        printf("%d\t",data[i]);
    }

    return 0;
}
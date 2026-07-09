#include <stdio.h>
int main(){
    float bs,hra,ta,gs,pt,ns;
    printf("Basic Salary: ");
    scanf("%f",&bs);
    hra=bs*0.1;
    ta=bs*0.05;
    gs=bs+hra+ta;
    pt=gs*0.02;
    ns=gs-pt;
    printf("Net Salary is %f",ns);
    return 0;
}
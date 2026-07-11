#include <stdio.h>
#include <string.h>

int main(){
    int num,ans,add,count,x,len;
    char buffer[100];

    printf("Binary number: ");
    scanf("%d",&num);

    sprintf(buffer,"%d",num);
    len=strlen(buffer);

    ans=0;
    add=1;
    count=len-1;

    while(count>=0){
        x=num%10;
        num/=10;
        ans+=x*add;
        count-=1;
        add*=2;
    }
    printf("Decimal Number: %d",ans);
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int addition(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}

int subtarction(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("%d",c);
}

int multiplication(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
}

int division(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%d",c);
}

int squareroot(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("%lf",sqrt(a));
}

int square(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("%d",a*a);
}

int cube(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("%d",a*a*a);
}

int prime(){
    int a,i, isprime = 1;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a==0 || a==1){
        isprime=0;
    }
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime=1){
        printf("%d is a prime number",a);
    }else{
       printf("%d is not a prime number",a);
    }
}

int factorial(){
    int a,ans=1;
    printf("Enter number: ");
    scanf("%d",&a);
    while(a!=0){
        ans*=a;
        a-=1;
    }
    printf("%d!= %d",a,ans);
}

int prime_factors(){
    int a,i,j,isprime = 1;
    printf("Enter number: ");
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        if(a%i==0){
            isprime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1){
                printf("%d",i);
            }
        }
    }
}

int power(){
    int a,b;
    printf("Enter base and exponent: ");
    scanf("%d%d",&a,&b);
    printf("%lf",pow(a,b));
}

int multiplication_table(){
    int a,i;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Multipliation table for %d is: ",a);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d",a,i,a*i);
    }
}

int armstrong_num(){
    int x,num,ans,og;
    printf("Enter number: ");
    scanf("%d",&num);
    ans=0;
    og=num;
    while(num!=0){
        x=num%10;
        num/=10;
        ans+=x*x*x;
    }
    if(ans==og){
        printf("%d is an armstrong number",num);
    }else{
        printf("%d is an armstrong number",num);
    }
}

int scd_gcd(){
    int i=0,a,b,d,size,divisors[100],min;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if(a>=b){
        min=b;
    }else{
        min=a;
    }
    while(min!=0){
        if(a%min==0 && b%min==0){
            d=min;
            divisors[i]=d;
            i++;
        }else{
            continue;
        }
        min--;
    }
    size = sizeof(divisors)/4;
    if(size==1){
        printf("The SCD and GCD are: %d",divisors[0]);
    }if(size==2){
        printf("SCD = %d and GCD = %d",divisors[0],divisors[1]);
    }else{
        printf("SCD = %d and GCD = %d",divisors[1],divisors[-1]);
    }
}

int fibonacci(){
    int c,i,j,k;
    printf("Enter number: ");
    scanf("%d",&c);
    i=0;
    j=1;
    printf("%d",j);
    if(c!=1){
        while(c!=0){
            k=i+j;
            printf("%d",k);
            i=j;
            j=k;
            c-=1;
        }
    }
}

int fact(int a){
    int ans = a*fact(a-1);
}
int sine_series(){
    int x,y=1,n,i;
    float sin_x=0;
    printf("Enter number and number of terms: ");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            sin_x += (pow(x,y))/fact(y);
        }else{
            sin_x -= (pow(x,y))/fact(y);
        }
        y+=2;
    }
    printf("Answer: %f",sin_x);
}

int main(){
    int ch,a=1;
    printf("Welcome to Calculator. \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Power \n6.Factorial \n7.Square \n8.Cube \n9.Square Root \n10.Multiplication table \n11.Armstrong Number \n12.SCD and GCD \n13.Check for Prime \n14.Prime Factors \n15.Fibonacci Series \n16.Sine Series \n17.Exit");
    printf("Enter choice of operation: ");
    scanf("%d",&ch);
    while(a==1){
        switch(ch){
            case 1: addition();
                break;
            case 2: subtarction();
                break;
            case 3: multiplication();
                break;
            case 4: division();
                break;
            case 5: power();
                break;
            case 6: factorial();
                break;
            case 7: square();
                break;
            case 8: cube();
                break;
            case 9: squareroot();
                break;
            case 10: multiplication_table();
                break;
            case 11: armstrong_num();
                break;
            case 12: scd_gcd();
                break;
            case 13: prime();
                break;
            case 14: prime_factors();
                break;
            case 15: fibonacci();
                break;
            case 16: sine_series();
                break;
            case 17: a=0;
                break;
            default:
                printf("ERROR! No such operation is available");
                break;
        }
    }
    printf("THANK YOU !!");
}
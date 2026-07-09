#include <stdio.h>

void accept(int a[10][10],int m,int n){
	int i,j;
	printf("\nEnter values of 2x2 matrix: ");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void display(int a[10][10], int m,int n){
	int i,j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}



int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n,ch;
    
	accept(a,m,n);
	display(a,m,n);
	accept(b,m,n);
	display(b,m,n);

    //addition of matrix
    printf("\nAddition gives: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j] = a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

    //saddle point
    int min1,min2,max1,max2;
    int a=a[0][0],b=a[0][1],c=a[1][0],d=a[1][1];
    min1=(a<b)?a:b;
    min2=(c<d)?c:d;
    max1=(a<c)?a:c;
    max2=(b<d)?b:d;
    if(min1==max1 || min1==max2){
        printf("\n%d is the saddle point of matrix A",min1);
    }else if(min2==max1 || min2==max2){
        printf("\n%d is the saddle point of matrix A",min2);
    }else{
        printf("\nNo saddle point in matrix A");
    }

    //inverse of matrix
    int det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    if(det==0){
        printf("\nNo inverse as determinate = 0");
    }else{
        printf("\nThe inverse of matrix A is 1/%d*[%d %d %d %d]",det,a[1][1],-a[0][1],-a[1][0],a[0][0]);
    }

    //magic matrix
    int r1 = a[0][0]+a[0][1];
    int r2 = a[1][0]+a[1][1];
    int c1 = a[0][0]+a[1][0];
    int c2 = a[0][1]+a[1][1];
    int d1 = a[0][0]+a[1][1];
    int d2 = a[0][1]+a[1][0];
    if(r1==r2 && r2==c1 && c1==c2 && c2==d1 && d1==d2){
        printf("\nMatrix A is a magic matrix");
    }else{
        printf("\nMatrix A is not a magic matrix");
    }

    return 0;
}
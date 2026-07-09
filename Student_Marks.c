# include <stdio.h>

int main(){
    int i,subjects,total=0,marks[100];
    float percent;
    char name[50];

    printf("Name of student: ");
    scanf("%s",name);
    printf("Number of subjects: ");
    scanf("%d",&subjects);

    for(i=0;i<subjects;i++){
        printf("Enter marks subject %d out of 100: ",i+1);
        scanf("%d",&marks[i]);
    }

    for(i=0;i<subjects;i++){
        total += marks[i];
    }

    printf("Total marks: %d",total);
    percent = (total/subjects);
    printf("\nPercentage: %.2f%%",percent);

    for(i=0;i<subjects;i++){
        if(marks[i]<=40){
            printf("\nResult: Fail in %dth subject",i);
        }
    }

    if(percent>=75){
        printf("\nGrade: Distinction");
    }else if(percent>=60){
        printf("\nGrade: First DIvision");
    }else if(percent>=60){
        printf("\nGrade: Second DIvision");
    }else if(percent>=60){
        printf("\nGrade: Third DIvision");
    }else{
        printf("\nGrade: Fail");
    }
    return 0;
}
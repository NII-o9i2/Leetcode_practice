#include <stdio.h>

int main(){
    int num;
    char name[20];
    int year;
    char id[20];
    printf("Enter the student name:");
    scanf("%s",name);
    printf("Enter the id for cheryl:");
    scanf("%s",id);  
    printf("Enter the year of study for cheryl:");
    scanf("%d",&year); 
    printf("\nStudent info for year %d \n",year);
    printf("name: %s\n",name);
    printf("id: %s\n",id);
    return 0;
}
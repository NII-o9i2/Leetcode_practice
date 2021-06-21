#include <stdio.h>
#include<string.h>

int main(){
    int num;
    char course[10];
    int year;
    char id[20];
    printf("How many courses do you want to enroll in?");
    scanf("%d",&num);
    bool flag = false;
    for(int i=0;i<num;i++){
        printf("Course %d: ",i);
         int j =0;
         while (scanf("%c",&course[j])){
            if (course[i] ==10)
            {
                break;
            
         }
         j++;
         }
        printf("%s",course);
        if ((course=="ENG 1002") || (course=="ENG 1003")){
            flag = true;
        }

    }

    if (flag){
        printf("Awesome! You are enrolled in programming.");
    }else{
        printf("Awwww! no programming for you.");
    }    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60


int read_line(char str[], int n){
    int i=0;
    char character=0;

    while(character!='\n'|| i+1>n){
        character=getchar();
        if(character!='\n'){
            str[i]=character;
        }else{
            break;
        }
        i++;
    }
    str[i+1]='\0';
}

void reminder(){
    char array[MAX_REMIND][MSG_LEN]={0};
    char day_str[3]={0};
    char temp_reminder[MSG_LEN]={0};
    int day;
    int counter=0;

    while(1){
        int i,j;
        printf("Enter day and reminder: ");
        scanf("%2d",&day);
        if(day==0){
            break;
        }
        sprintf(day_str,"%2d",day);
        read_line(temp_reminder,MSG_LEN);
        strcat(day_str,temp_reminder);

        for(i=0;i<counter;i++){
            if(strcmp(day_str,array[i])<0){
                break;
            }
        }
        for(j=counter;j>i;j--){
            strcpy(array[j],array[j-1]);
        }
        strcpy(array[i],day_str);

        counter++;     
    }

    printf("\nDay Reminder");
    for(int i=0;i<counter;i++){
        printf("\n%s",array[i]);
    }
}


void proj1(){

}


int main(){
    reminder();
    //proj2();
}
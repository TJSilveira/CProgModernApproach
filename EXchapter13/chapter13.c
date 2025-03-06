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
    char day_str[3]={0},month_str[3]={0},hour_str[3]={0},minutes_str[3]={0};
    char temp_reminder[30]={0};
    char temp_full_reminder[MSG_LEN]={0};
    int day;
    int month;
    int hour;
    int minutes;
    int counter=0;

    while(1){
        int i,j;
        printf("Enter day and reminder: ");
        scanf("%2d/%2d %2d:%2d",&month,&day,&hour,&minutes);
        if(month==0){
            break;
        }else if(day>31||day<1){
            read_line(temp_reminder,MSG_LEN);
            continue;
        }else if(month>12 || month<1){
            read_line(temp_reminder,MSG_LEN);
            continue;
        }else if(hour>24 || hour<0){
            read_line(temp_reminder,MSG_LEN);
            continue;
        }else if(minutes>59 || minutes<0){
            read_line(temp_reminder,MSG_LEN);
            continue;
        }

        read_line(temp_reminder,MSG_LEN);
        sprintf(temp_full_reminder,"%2d/%2d %2d:%2d %s",month,day,hour,minutes,temp_reminder);
    
        for(i=0;i<counter;i++){
            if(strcmp(temp_full_reminder,array[i])<0){
                break;
            }
        }
        for(j=counter;j>i;j--){
            strcpy(array[j],array[j-1]);
        }
        strcpy(array[i],temp_full_reminder);

        counter++;     
    }

    printf("\nDay Reminder");
    for(int i=0;i<counter;i++){
        printf("\n%s",array[i]);
    }
}

size_t strlen_ts(const char *s){
    int i=0;

    while(*s){
        s++;
        i++;
    }

    return i;
}

char *strcat_ts(char *s1,const char *s2){
    char *temp_s=s1;

    // Notice that *temp_s!='\0' is the same as *temp_s!=0, which can be simplified to *temp_s. 
    while(*temp_s){
        temp_s++;
    }

    // while(*s2!='\0'){
    //     *temp_s=*s2;
    //     temp_s++;
    //     s2++;
    // }
    // *temp_s='\0';


    // The previous loop can be further simplified.
    // This is because, when you do an assignment inside a while, C checks the value that is being assigned as the value to use in the condition.
    // This means that all values will be True ie !=0 other than 0, the last element of the array

    while(*temp_s++=*s2++);

    return s1;
}

void proj1(){
    char small_word[60]="ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    char largest_word[60]={0};
    char temp_word[60];

    while(1){
        printf("Please insert word: ");
        fgets(temp_word,60,stdin);
        printf("%ld\n",strlen(temp_word));
        if(strlen(small_word)>strlen(temp_word)){
            strcpy(small_word,temp_word);
        }

        if(strlen(largest_word)<strlen(temp_word)){
            strcpy(largest_word,temp_word);
        }

        if(strlen(temp_word)==5){
            break;
        }
    }

    printf("THE LARGEST WORD IS: %s",largest_word);
    printf("the smallest word is: %s",small_word);
}


int main(int argc, char *argv[]){
    reminder();
    
    // char array[] = "";
    // printf("Resultado funcao strlen_ts: %li\n",strlen_ts(array));

    // char array1[500]="abcdef";
    // char array2[500]="ghijkl";

    // printf("Result function strcat_ts: %s\n",strcat_ts(array1,array2));

    // int i;

    // for (i=0;i<argc;i++){
    //     printf("%s\n",argv[i]);
    // }

    // proj1();

}
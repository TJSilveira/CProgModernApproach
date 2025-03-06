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

void exerc6(char *string,const char *censor){
    int i=0;
    char *p = string;

    while(*(string+2)){
        if(*(string)=='f' && *(string+1)=='o' && *(string+2)=='o'){
            *(string)='x';
            *(string+1)='x';
            *(string+2)='x';
        }
        string++;
    }

    printf("\nString censored: %s\n",p);
}

void exerc13(const char *domain, char *index_url){
    char prefix[200] = "https://www.";
    char temp_domain[500];
    strcpy(temp_domain,domain);
    char suffix[]="/index.html";

    strcat(prefix,strcat(temp_domain,suffix));
    strcpy(index_url,prefix);
}

void exerc18(char *url){
    // go to the end of the string
    while(*url){
        url++;
    }

    // go the the last element of the string
    url--;

    // iterate backwards until you find the last forward slash
    while(*url){
        if(*url=='/'){
            *url='\0';
            break;
        }
        url--;
    }
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

void proj4(int argc, char *argv[]){
    int i = argc-1;

    for(;i>0;i--){
        printf("%s ",argv[i]);
    }
}

void proj5(int argc, char *argv[]){
    int i = argc-1;
    int sum=0;

    for(;i>0;i--){
        sum += atoi(argv[i]);
    }

    printf("Total: %i",sum);
}

void proj7(int number){
    char *first_number[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *second_number[]={"zero","one","two","three","four","five","six","seven","eigh","nine"};
    char *teens[]={"ten","eleven","twelve","thirteen","14","15","16","17","18","19"};

    int first_digit = number/10;
    int second_digit = number%10;

    char final_number[40];

    if(first_digit==0){
        strcpy(final_number,second_number[second_digit]);
    }else if(first_digit==1){
        strcpy(final_number,teens[second_digit]);
    }else if(first_digit>1 && first_digit<10 && second_digit==0){   
        strcpy(final_number,first_number[first_digit]);
    }else if(first_digit>1 && first_digit<10 && second_digit!=0){
        sprintf(final_number,"%s-%s",first_number[first_digit],second_number[second_digit]);
    }

    printf("The number is: %s",final_number);
}

void proj18(){
    int day=0;
    int month=0;
    int year=0;
    char *month_ext[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Out","Nov","Dec"};

    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%i/%i/%i",&day,&month,&year);

    printf("The Date is %s %i, %i",month_ext[month-1],day,year);
}

int main(int argc, char *argv[]){
    // reminder();
    
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

    // proj4(argc,argv);

    // char array[]="food fool";
    // exerc6(array,"foo");

    // char domain[]="knking.com";
    // char index_url[300];
    // exerc13(domain,index_url);

    // printf("\nThis is the website address: %s\n",index_url);
    // exerc18(index_url);
    // printf("\nNew address: %s\n",index_url);

    // proj5(argc,argv);

    // proj7(23);
    // proj7(5);
    // proj7(12);
    // proj7(19);
    // proj7(85);
    proj18();
}
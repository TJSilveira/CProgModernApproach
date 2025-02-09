#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exerc0(){
    int i =65;

    while(i<91){
        printf("%c\n",i);
        i++;
    }
}

void toupper_ts(char i){
    printf("%c becomes ",i);
    if(i>='a' && i<='z'){
        i=i-'a'+'A';
        printf("%c.",i);
    }
}

void length_string(){
    int i=0;
    while(getchar()!='\n'){
        i++;
    }

    printf("%i",i);
}

void exerc11(){
    char ch;
    char first_letter=0;

    printf("Enter a first and last name: ");

    while(1){
        ch = getchar();
        // printf("Charater in the first loop: %c\n",ch);
        if (first_letter==0&&ch!=' ')
        {
            first_letter = ch;
        }
        if (first_letter!=0 && ch==' ')
        {
            break;
        }
    }

    while (ch!='\n')
    {
        ch = getchar();
        if(ch!=' '){
            printf("%c",ch);
        }
    }

    printf(", %c",first_letter);
    
}

void exerc11_b(){
    char first_name[50];
    char second_name[50];
    
    scanf("%s %s",first_name,second_name);

    printf("%s, %c",second_name, first_name[0]);
}

void exerc13(){
    int count_char =0;
    int count_spaces =0;
    char ch;

    printf("Enter a sentence: ");

    while (ch!='\n')
    {
        ch=getchar();
        if(ch==' '){
            count_spaces++;
        }else{
            count_char++;
        }
    }

    double average = ((double) count_char-1)/((double) count_spaces+1);
    printf("Average wprd length %.1lf\n",average);
}

void exerc14(){
    int x=0;
    double y=1;
    double diff=1;
    double max_diff=0.00001;
    int counter =1;
    double sum = 0;
    double average =0;

    printf("Enter a positive number: ");
    scanf("%i",&x);

    while(diff>max_diff){
        average = (((double) x/y)+y)/2;
        // average = ((double) x/y);
        diff = fabs(y-average);

        if(diff<max_diff){
            printf("The estimate is %lf",average);
            break;
        }
        y=average;
        counter++;
    }

}

void exerc15(){
    int num=0;
    int factorial=1;
    int i=1;

    printf("Enter a positive integer: ");
    scanf("%i",&num);

    while (i<=num)
    {
        factorial*=i;
        i++;
    }
    
    printf("%i",factorial);
}


int main(){
    // exerc0();

    // char i = 'a';
    // toupper_ts(i);

    // length_string();

    // exerc11();
    exerc11_b();
    // exerc13();
    // exerc14();
    // exerc15();

    return 0;
}

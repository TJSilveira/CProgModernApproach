#include <stdio.h>
#include <stdlib.h>

void proj1(){
    printf("Enter a message: ");
    char array[500]={0};
    char *pointer=array;
    char character;

    while (character!='\n')
    {
        character=getchar();
        *pointer=character;
        pointer++;
    }

    pointer--;
    pointer--;
    printf("Reversal is: ");
    while(array<=pointer){
        printf("%c",*pointer--);
    }
}

void proj2(){
    char array[500];
    char *pointer=array;
    char *start_array=array;
    char character;
    int flag=0;

    printf("Enter a message: ");
    while(character!='\n'){
        character=getchar();
        if(character>='a'&& character<='z'){
            character='A'+character-'a';
        }else if(character>'Z' || character<'A'){
            continue;
        }
        *pointer=character;
        pointer++;
    }

    pointer--;
    while(start_array<=pointer){
        if(*start_array!=*pointer){
            flag=1;
            break;
        }

        start_array++;
        pointer--;
    }

    if(flag==1){
        printf("It is not a palidrome\n");
    }else if(flag==0){
        printf("It is palidrome\n");
    }
}

int main(){
    proj1();
    //proj2();
}
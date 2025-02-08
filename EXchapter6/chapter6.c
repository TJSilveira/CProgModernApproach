#include <stdio.h>
#include <stdlib.h>

void exerc1(){
    int number=0;
    int max=0;

    do{
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number>max){
            max=number;
        }
    }while(number!=0);

    printf("The largest number was: %i\n",max);
}

int main(){
    exerc1();
    return 0;
}

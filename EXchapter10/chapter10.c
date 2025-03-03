// Online C compiler to run C program online
#include <stdio.h>

int exerc5(int n){
    int counter=0;
    
    while (n>0){
        n=n/10;
        counter++;
    }
    return counter;
}

int exerc6(int number,int k){
    for(int i=0;i<k-1;i++){
        number=number/10;
    }
    return number%10;
}

void print_numbers_1row(int number){
    if(number==0){
        printf(" _ ");
    }
    if(number==1){
        printf("   ");
    }
    if(number==2){
        printf(" _ ");
    }
    if(number==3){
        printf(" _ ");
    }
    if(number==4){
        printf("   ");
    }
    if(number==5){
        printf(" _ ");
    }
    if(number==6){
        printf(" _ ");
    }
    if(number==7){
        printf(" _ ");
    }
    if(number==8){
        printf(" _ ");
    }
    if(number==9){
        printf(" _ ");
    }
}

void print_numbers_2row(int number){
    if(number==0){
        printf("| |");
    }
    if(number==1){
        printf("  |");
    }
    if(number==2){
        printf(" _|");
    }
    if(number==3){
        printf(" _|");
    }
    if(number==4){
        printf("|_|");
    }
    if(number==5){
        printf("|_ ");
    }
    if(number==6){
        printf("|_ ");
    }
    if(number==7){
        printf("  |");
    }
    if(number==8){
        printf("|_|");
    }
    if(number==9){
        printf("|_|");
    }
}

void print_numbers_3row(int number){
    if(number==0){
        printf("|_|");
    }
    if(number==1){
        printf("  |");
    }
    if(number==2){
        printf("|_ ");
    }
    if(number==3){
        printf(" _|");
    }
    if(number==4){
        printf("  |");
    }
    if(number==5){
        printf(" _|");
    }
    if(number==6){
        printf("|_|");
    }
    if(number==7){
        printf("  |");
    }
    if(number==8){
        printf("|_|");
    }
    if(number==9){
        printf(" _|");
    }
}

void proj7(int number){
    int num_digits = exerc5(number);
    int array[num_digits];
    
    // Creating an array with all the digits separated
    for(int i=num_digits; i>0;i--){
        array[i]=exerc6(number,i);
    }
    
    // printing the digits
    for(int i=num_digits; i>0;i--){
        print_numbers_1row(array[i]);
        printf("\t");
    }
    printf("\n");
    for(int i=num_digits; i>0;i--){
        print_numbers_2row(array[i]);
        printf("\t");
    }
    printf("\n");
    for(int i=num_digits; i>0;i--){
        print_numbers_3row(array[i]);
        printf("\t");
    }
}

int main() {
    // Write C code here

    proj7(17121998);
    return 0;
}

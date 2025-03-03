// Online C compiler to run C program online
#include <stdio.h>

void proj1(int dollars, int *hundreds, int *twenties, int *tens, int *fives, int *ones){
    int rest=0;
    
    *hundreds = dollars/100;
    rest = dollars%100;
    *twenties = rest/20;
    rest = rest%20;
    *tens = rest/10;
    rest = rest%10;
    *fives = rest/5;
    rest = rest%5;
    *ones = rest/1;
    rest = rest%1;
}

int main() {
    // Write C code here
    int hundreds, twenties, tens, fives, ones;

    proj1(1287,&hundreds, &twenties, &tens, &fives, &ones);
    
    printf("Hundreds: %i\n",hundreds);
    printf("Twenties: %i\n",twenties);
    printf("Tens: %i\n",tens);
    printf("Fives: %i\n",fives);
    printf("Ones: %i\n",ones);
    
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANK 13

void reverse(){
    printf("Enter 10 numbers: ");
    int i=0;
    int array[10];
    
    for (i=0; i<10;i++){
        scanf("%d",&array[i]);
    }
    
    printf("In reverse order: ");
    for (i=9; i>-1;i--){
        printf("%d ",array[i]);
    }
}

void poker_hand() {
    bool in_hand[NUM_SUITS][NUM_RANK] = {false};
    int num_cards,rank,suit;
    const char rank_code[]={'2','3','4','5','6','7','8','9','10','j','q','k','a'};
    const char suit_code[]={'d','s','c','h'};
    
    printf("Enter number of cards in hand: ");
    scanf("%d",&num_cards);
    
    srand((unsigned)time(NULL));
    
    printf("Your hand: ");
    while (num_cards>0){
        suit = rand()%NUM_SUITS;
        rank = rand()%NUM_RANK;
        if(!in_hand[suit][rank]){
            in_hand[suit][rank]=true;
            num_cards--;
            printf("%c%c ",rank_code[rank],suit_code[suit]);
        }
    }
}

void exerc1(){
  bool digit_seen[10]={false};
  int digit;
  int number;
  
  printf("Enter a number: ");
  scanf("%d",&number);

  while(number>0){
    digit = number % 10;
    if(digit_seen[digit]){
      break;
    }
    digit_seen[digit]=true;
    
    if(number<10){
      break;
    }
    number/=10;
  }
 
  printf("Repeated digits: ");
  for(int i=0; i<10;i++){
    if(digit_seen[i]){
      printf("%i",i);}
  }
}

void exerc2(){
  int digit_seen[10]={0};
  int digit;
  int number;
  
  printf("Enter a number: ");
  scanf("%d",&number);

  while(number>0){
    digit = number % 10;
    digit_seen[digit]++;
    if(number<10){
      break;
    }
    number/=10;
  }
 
  printf("Digits:    \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
  printf("Occurences:");
  for(int i=0; i<10;i++){
    printf("\t%i",digit_seen[i]);
  }
}

int main() {
    // Write C code here
    reverse();

    return 0;
}

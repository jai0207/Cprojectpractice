// rock paper scissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char choice = '\0';
  srand(time(NULL));
  int min = 1;
  int max = 3;
  int randomnum = (rand() % (max - min + 1)) + min ;

  printf("This is a rock paper scissor game :) ");

  printf("choose on of the options \n r for rock \n p for paper \n s for scissors ");
  scanf("%c", &choice);
 
    if( randomnum == 1){
     
      printf("Computer chose ROCK \n");


        if (choice == 'r'){
          printf("Its a tie\n");
        }
        else if (choice == 'p' ){
          printf("You Win\n");
        }
        else if (choice == 's'){
          printf("You Lose\n");
         
        }
        }
   
     if( randomnum == 2){
      printf("Computer chose paper \n");
        if (choice == 'p'){
          printf("Its a tie\n");
        }
        else if (choice == 's' ){
          printf("You Win\n");
        }
        else if (choice == 'r'){
          printf("You Lose\n");
        }
        }

      if( randomnum == 3){
      printf("Computer chose scissors\n");
        if (choice == 's'){
          printf("Its a tie\n");
        }
        else if (choice == 'r' ){
          printf("You Win\n");
        }
        else if (choice == 'p'){
          printf("You Lose\n");
        }
       
       
    }
return 0;
}
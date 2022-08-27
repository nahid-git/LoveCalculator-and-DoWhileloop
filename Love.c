#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){

char name1[20] , name2[20];
int total, randomNum1, randomNum2;
int up=30 , name1len, name2len;
char choice;

printf("\n\n\t************************************************\n");
printf("\t*    LOVE CALCULATOR    *   Created by Nahid   *\n");
printf("\t************************************************\n");

do {
printf("\n\tEnter your name[max 20]: ");
gets (name1);
printf("\tEnter your GF / BF name[max 20]: ");
gets (name2);

name1len = strlen(name1);
name2len = strlen(name2);

if(name1len == 0 && name2len == 0){
    printf("\n\tYou are not enter both name. Please enter both name and try again.\n");
}else if(name1len == 0 ){
    printf("\n\tYou are not enter your name. Please enter your name and try again.\n");
 }else if (name2len == 0 ){
    printf("\n\tYou are not enter your GF / BF name. Please enter your GF / BF name and try again.\n");
}else{
srand(time(NULL));
randomNum1 = ( rand () % (up+1)) ;
srand(time(NULL));
randomNum2 = ( rand () % (up+1)) ;

total = randomNum1 + randomNum2 + 45 ;

if(total > 100)
    total = 100;

printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\t~     Congratulations     ~\n");
printf("\t~                         ~\n");
printf("\t~   Love precent is %3d   ~\n",total);
printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
 printf("\n\tDo you want to continue? (y/n) : ");
 scanf("%c", &choice);
 fflush(stdin);
  }  while (choice == 'y' || choice == 'Y' );
return 0;
}

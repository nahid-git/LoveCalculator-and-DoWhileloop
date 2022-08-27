#include<bits/stdc++.h>
using namespace std;

int main(){

char name1[20] , name2[20];
int total, randomNum1, randomNum2;
int up=30 , name1len, name2len;
char choice;

cout<< "\n\n\t************************************************\n";
cout<< "\t*    LOVE CALCULATOR    *   Created by Nahid   *\n";
cout<< "\t************************************************\n";

do {
cout<< "\n\tEnter your name[max 20 word]: ";
gets (name1);
cout<< "\tEnter your GF / BF name[max 20 word]: ";
gets (name2);

name1len = strlen(name1);
name2len = strlen(name2);

if(name1len == 0 && name2len == 0){
    cout<< "\n\tYou are not enter both name. Please enter both name and try again.\n";
}else if(name1len == 0 ){
    cout<< "\n\tYou are not enter your name. Please enter your name and try again.\n";
 }else if (name2len == 0 ){
    cout<< "\n\tYou are not enter your GF / BF name. Please enter your GF / BF name and try again.\n";
}else{
srand(time(NULL));
randomNum1 = ( rand () % (up+1)) ;
srand(time(NULL));
randomNum2 = ( rand () % (up+1)) ;

total = randomNum1 + randomNum2 + 45 ;

if(total > 100)
    total = 100;

cout<< "\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<< "\t~     Congratulations     ~\n";
cout<< "\t~                         ~\n";
cout<< "\t~   Love precent is " <<setw(3)<< total <<"   ~\n";
cout<< "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
 cout<< "\n\tDo you want to continue? (y/n) : ";
 cin >> choice;
 fflush(stdin);
  }  while (choice == 'y' || choice == 'Y' );
return 0;
}


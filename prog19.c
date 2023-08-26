#include<stdio.h>
int main(){
   printf("this program will shut down computer.Are you sure you want?");
   char choice;
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
    system("shutdown /s /f /t 0");
}
}
    

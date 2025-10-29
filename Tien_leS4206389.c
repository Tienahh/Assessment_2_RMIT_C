#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
  char username[30];
  char greeting[]= "Welcome ";
  int i=0;

  printf("who are stranger?!"); // injecting it with some *sparkles* personality *sparkles*
  printf("what is your name? mortal.");

  fgets(username, sizeof(username),stdin); //obtains name, stores it.
  strcat(greeting, username); // joins the variables together to make a greeting.

  //Display MENU
  int menuchoice;
  
  printf("THE Menu");
  printf("1.Adding student grades");
  printf("2.View all student");
  printf("3.exit");
  printf("Who's grade are we changing? or peaking at?");
  scanf("%d",menuchoice);
  fflush(stdin); //flush scanf 

  //using a switch instead of a do while loop (you did this in class (week 15))
  switch (menuchoice)
  {
  case 1:

    break;

  default:
    break;
  }

    return 0;
  }

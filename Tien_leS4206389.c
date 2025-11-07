#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 4 // number of students

int main()
{
  char username[30];
  char greeting[] = "Welcome ";
  int i = 0;

  printf("who are stranger?!"); // injecting it with some *sparkles* personality *sparkles*
  printf("what is your name? mortal.");

  fgets(username, sizeof(username), stdin); // obtains name, stores it.
  username[strcspn(username, "\n")] = '\0'; // remove newline from fgets
  strcat(greeting, username);               // joins the variables together to make a greeting.

  int menuchoice;
  // our arrays
  char studentNames[MAX_STUDENTS][30] = {"Alice", "Bob", "Charlie", "Diana"};
  int studentIDs[MAX_STUDENTS] = {101, 102, 103, 104};
  int studentGrades[MAX_STUDENTS] = {0, 0, 0, 0};

  // Display Menu

  do
  {
    printf("THE Menu");
    printf("1.Adding student grades");
    printf("2.View all student");
    printf("3.exit");
    printf("Who's grade are we changing? or peaking at?");
    scanf("%d", &menuchoice);
    fflush(stdin); // flush scanf

    // using a switch instead of a do while loop (you did this in class (week 15))
    switch (menuchoice)
    {
    case 1:
    {
      int searchID, found = 0;

      printf("\nList of Students:\n");
      printf("ID\tName\n");
      printf("----------------\n");
      for (int i = 0; i < MAX_STUDENTS; i++)
      {
        printf("%d\t%s\n", studentIDs[i], studentNames[i]);
      }

      printf("\nEnter the Student ID to assign a grade: ");
      scanf("%d", &searchID);
      fflush(stdin);

      // Search for ID using for loop
      for (int i = 0; i < MAX_STUDENTS; i++)
      {
        if (studentIDs[i] == searchID)
        {
          found = 1;
          printf("Enter grade for %s: ", studentNames[i]);
          scanf("%d", &studentGrades[i]);
          fflush(stdin);

          // Input validation
          if (studentGrades[i] < 0 || studentGrades[i] > 100)
          {
            printf("Invalid grade! Must be between 0 and 100.\n");
            studentGrades[i] = 0;
          }
          else
          {
            printf("Grade updated successfully!\n");
            printf("Student: %s (ID: %d) — New Grade: %d\n", studentNames[i], studentIDs[i], studentGrades[i]);
          }
        }
      }
    }
    }

// ANAGRAM FINDER
// In this program, I will write a program to determine whether two strings are anagrams or not.
/* The constraints of this project are: Each string will contain only characters that are from the first 4 letters of the 
English alphabet ('a', 'b', 'c', 'd') and spaces. All letters are in lowercase. */

#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 100

int main(void)
{
  int counter1[4] = {0, 0, 0, 0};   //counter of each corresponding letter on s1
  int counter2[4] = {0, 0, 0, 0};   //same for s2
  char s1[MAX_LIMIT];
  char s2[MAX_LIMIT];

  printf("Please enter a string containing only spaces and [a, b, c, d]: ");
  fgets(s1, MAX_LIMIT, stdin);
  printf("Please enter another string with the same constraints: ");
  fgets(s2, MAX_LIMIT, stdin);
  
  for(int i = 0; i < strlen(s1); i++)   
  {
    if(s1[i] == 'a')
      counter1[0]++;
    if(s1[i] == 'b')
      counter1[1]++;
    if(s1[i] == 'c')
      counter1[2]++;
    if(s1[i] == 'd')
      counter1[3]++;
   }
   for(int j = 0; j < strlen(s2); j++)
   {
     if(s2[j] == 'a')
       counter2[0]++;
     if(s2[j] == 'b')
       counter2[1]++;
     if(s2[j] == 'c')
       counter2[2]++;
     if(s2[j] == 'd')
       counter2[3]++;
   }

  int flag = 0;  //flag to indicate if there are differences between the counters

  for(int k = 0; k < (sizeof(counter1)/sizeof(int)); k++)
  {
    if(counter1[k] != counter2[k])
      flag = 1;
  }
  if(flag)
    printf("Not Anagrams!\n");
  else
    printf("Anagrams!\n");

  return 0;
}

#include<stdio.h>
int main(void)
{
  printf("Hello World!");
  
  char name[50]; // Assuming the name won't exceed 50 characters

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Hello, %s! Nice to meet you.\n", name);

}
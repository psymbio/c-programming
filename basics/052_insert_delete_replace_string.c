#include<stdio.h>
#include<math.h>
#include<string.h>

char *substring(char *string, int start, int end);
int index_(char *text, char *string);
char *insert(char *string, char *insert_string, int insert_position);
char *delete(char *string, int start, int end);
char *replace(char *string, char *to_replace, char *with_this);
char newstring[3000];

int main(int argc, char *argv){
  int size;
  printf("Enter the size of a string: ");
  scanf("%d", &size);
  char string[size];
  printf("Enter a string: ");
  scanf("%s", &string);
  int insert_size;
  printf("Enter the size of a string to insert: ");
  scanf("%d", &insert_size);
  char insert_string[insert_size];
  printf("Enter the string to insert: ");
  scanf("%s", &insert_string);
  int insert_position;
  printf("Enter the position to insert it in: ");
  scanf("%d", &insert_postion);
  printf("New string is: %s", insert(string,insert_string,insert_position));
  int start, end;
  printf("Enter the position to start delete in: ");
  scanf("%d", &start);
  printf("Enter the position to end delete in: ");
  scanf("%d", &end);
  printf("New string is: %s", delete(string,start,end));
  
  return 0;
}

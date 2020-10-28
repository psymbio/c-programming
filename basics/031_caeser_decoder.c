#include<stdio.h>
#include<string.h>

void main(){
  char string[90];
  printf("Enter a message to decode");
  scanf("%s", string);
  int key;
  printf("enter key");
  scanf("%d", &key);
  char alphabet [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                  'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                  'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


  for(int i = 0; i<26; i++)
    printf("%d , ", alphabet[i]);

  for (int i = 0; i < 26 - key; i++){
    alphabet[i]= alphabet[i] + key;
  }
  /*for (int j=26-key, i=key; j < 26, i < 0; j++){
    alphabet[j]= alphabet[j]-25+i;
    --i;
  }*/
/*  for (int j=26-key, i=key; j < 26; ++j){
    if(i>0)
    alphabet[j]= alphabet[j]-25+i;
    --i;
  }
*/
int j = 26 - key;
  alphabet[26-key]=alphabet[j]-25+4;
 alphabet[26-key+1]=alphabet[j]-25+3;
  alphabet[26-key+2]=alphabet[j]-25+2;
  alphabet[26-key+3]=alphabet[j]-25+1;
q  alphabet[26-key+4]=alphabet[j]-25;
  for(int k = 0; k<26; k++)
  printf("%c", alphabet[k]);
}

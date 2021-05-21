#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

bool IsIsogram(char *str) 
{
  char list[26] = "abcdefghijklmnopqrstuvwxyz";
  char tmp[1000];
  int length = strlen(str);
//  printf("Length %d\n\r",length);
  int k = 0;
  for( ;k<length;k++){
	  tmp[k]=tolower(str[k]);
  }
  tmp[k] = '\0';

  //  printf("%s\n\r",tmp);
  //char *ptr = tmp;
  bool isogram = true;
  int count = 0;
  for(int i = 0; i < 26; i++){
    for(int j = 0; j < length; j++){
      if(list[i]==tolower(str[j])){
        count++;
//        printf("list[%d] = %c and str[%d] = %c count %d\n\r",i,list[i],j,str[j],count);
      }
    }
    if(count>1){isogram = false; break;}
    count = 0;
  }  
//  printf("%s\n\r",list);
    return isogram;
}

//BEST PRACTICE
bool IsIsogram(char *str) {
    char cache[26] = {0};
    for (int i = 0; str[i] != 0; ++i) {
      char c = tolower(str[i]) - 'a';
      if (cache[c]) return false;
      cache[c] = 1;
    }
    return str[0] == 0 || true;
}

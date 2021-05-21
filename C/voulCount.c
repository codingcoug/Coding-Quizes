#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t get_count(const char *s)
{
  unsigned int count = 0;
  int size = strlen(s);
  for(int i = 0; i < size;i++ ){
    if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){count++;}
  
  }
  //printf("the size is %d\n\r",count);
    return count;
}


int main(){

}
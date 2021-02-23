//gcc 7.4.0

#include  <stdio.h>
#include <string.h>
#define EMPTY_CHARACTER 0x4 //0x4 is the empty character


//Reverse the order of words.
int main(int argc, char* argv[]){

int i,j = 0;
char str[1000] = "", str1[1000] = "";
char* ptr=str,* ptr1=str1;

for(i=1;i<argc;i++){
    strcat(str,argv[i]);
    strcat(str," ");
}

int len   = strlen(ptr);

ptr[len-1] = EMPTY_CHARACTER; //0x4 is the "" empty character

int index = 0;
int startW = len - 1;
int endW   = len - 1;

while(startW > 0)
{
    if(ptr[startW] == ' ')
    {
        i = startW + 1;
        while(i <= endW)
        {
            ptr1[index] = ptr[i];
            i++;
            index++;
        }
        ptr1[index++] = ' ';
        endW = startW - 1;
    }
    startW--;
}

for(i=0; i<=endW; i++)
{
    ptr1[index] = ptr[i];
    index++;
}

ptr1[index] = '\0'; 
printf("%s\n\r",ptr1);
return 0;

}
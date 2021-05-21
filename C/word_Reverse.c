//gcc 7.4.0

#include <stdio.h>
#include <string.h>
#define EMPTY_CHARACTER 0x4 //0x4 is the empty character


//Reverse the order of words.
int main(int argc, char* argv[]){

//create variables
int i,j = 0;
char str[1000] = "", str1[1000] = "";
char* ptr=str,* ptr1=str1;

//concatinate any passed argument from commandline into a single string
for(i=1;i<argc;i++){
    strcat(str,argv[i]);
    strcat(str," ");
}
//get the string length
int len   = strlen(ptr);
//remove the last space character
ptr[len-1] = EMPTY_CHARACTER; //0x4 is the "" empty character
//set indices
int index = 0;
int startW = len - 1;
int endW   = len - 1;
//continue until the string has been parsed from end to the beginning of the word
while(startW > 0)
{   
    //if there is a space found enter if statement
    if(ptr[startW] == ' ')
    {
        //the word starts 1 index after the space which is at startW
        i = startW + 1;
        //endW is the last character parsed before startW was set to the ' ' characters indices
        while(i <= endW)
        {
            //copies the word forward until the end of the word is reached
            ptr1[index] = ptr[i];
            i++;
            index++;
        }
        //we need to insert a space after the word since it would have appeared before
        ptr1[index++] = ' ';
        //set the end of the word to the new location
        endW = startW - 1;
    }
    //move down the string array until a ' ' character is encountered
    startW--;
}

//once the last ' ' character is processed we will still need to grab the last word and copy it 
for(i=0; i<=endW; i++)
{
    ptr1[index] = ptr[i];
    index++;
}

//we need to terminate the string when all the copying has been done
ptr1[index] = '\0'; 
//finally we print it
printf("%s\n\r",ptr1);
return 0;

}
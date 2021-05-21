//gcc 7.4.0

#include  <stdio.h>
#include <stdbool.h>

//create a function to check for prime number
bool is_prime(const unsigned long num){
    //create Vars
    unsigned long temp,i = 0;
    temp = num;
    bool prime = true;
    //0 and 1 are non prime numbers I decided to manually check for them
    for(i=2;i<temp;i++){
        //if the value is anything besides 1 and itself it's not prime
        //so we modulo everything from 2-(number-1). if we get a 0 then it's not prime
        if((temp%i==0)){
            prime = false;
            break;
        }
    }
    //if any of these values are received the it's prime
    if((temp<0)||temp==0||temp==1){prime = false;}
    //if the prime flag isn't set to false by this point then it is prime
    if(prime)
        printf("%lu is prime\r\n",temp);
    else{
        printf("%lu is not prime\r\n",temp);
    }
    return prime;
}

int main(void)
{
    //create a file pointer
    FILE* fp;
    //open filestream
    fp = fopen("INPUT.TXT","r");
    //check to make sure the file opened correctly
    if(fp == NULL){
        printf("the file could not open correctly.\n\r");
    }
    //read number in then check to see if it's prime 
    long unsigned int num = 0;
    fscanf(fp,"%lu", &num);
    //check for EOF and then read in a value if -1 is intered we will exit since EOF = -1 
    while(!feof(fp)){
        is_prime(num);
        fscanf(fp,"%lu", &num);
    }//close file stream
    fclose(fp);
return 0;
}
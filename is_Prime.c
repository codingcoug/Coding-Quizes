//gcc 7.4.0

#include  <stdio.h>
#include <stdbool.h>

bool is_prime(const unsigned long num){
    unsigned long temp,i = 0;
    temp = num;
    bool prime = true;
    for(i=2;i<temp;i++){
        
        if((temp%i==0)){
            prime = false;
            break;
        }
    }
    if((temp<0)||temp==0||temp==1){prime = false;}
    if(prime)
        printf("%d is prime\r\n",temp);
    else{
        printf("%d is not prime\r\n",temp);
    }
    return prime;
}

int main(void)
{
    FILE* fp;
    fp = fopen("INPUT.TXT","r");
    if(fp == NULL){
        printf("the file could not open correctly.\n\r");
    }

    int num = 0;
    fscanf(fp,"%d", &num);
    while(!feof(fp)){
        is_prime(num);
        fscanf(fp,"%d", &num);
    }
    fclose(fp);
return 0;
}
#include <inttypes.h>
#include <stdio.h>
//uint64_t addRecursively(uint32_t n, uint32_t number){
//  uint64_t numbertmp;
//  if(n==0){return 1;}
//  numbertmp = number+addRecursively(n-1,)*n;
//  return numbertmp;
//  }

//n                                                       0       1           2           3           4           5           6           
//0                     1               1+2*0 = 1 = a     a                                                                               
//1                   3   5             a+2*1 = 3 = b     b + (b + 2*1)                               == b*sum(1 + 2n/b)
//2                 7   9   11          b+2*2 = 7 = c     c + (c + 2*1) + (c + 2*2)                   == c*sum(1 + 2n/c)
//3               13  15  17  19        c+2*3 = 13 = d    d + (d + 2*1) + (d + 2*2) + (d + 2*3)       == d*sum(1 + 2n/d)
//4             21  23  25  27  29      d+2*4 = 21 = e    
//5           31  33  35  37  39  41    e+2*5 = 31 = f    
//6         43  45  47  49  51  53  55  f+2*6 = 43 = g    

//n                                                       total
//0                     1               1+2*0 = 1 = a     1^3=1
//1                   3   5             a+2*1 = 3 = b     2^3=8
//2                 7   9   11          b+2*2 = 7 = c     3^3=27
//3               13  15  17  19        c+2*3 = 13 = d    4^3=64
//4             21  23  25  27  29      d+2*4 = 21 = e    5^3=125
//5           31  33  35  37  39  41    e+2*5 = 31 = f    6^3=216
//6         43  45  47  49  51  53  55  f+2*6 = 43 = g	  7^3=343

uint64_t rowSumOddNumbers(uint32_t n)
{
//  uint64_t sum = 0;
//  uint32_t i = 0;
//  uint32_t a = 1;
//  uint64_t total = 0;
//  for(;i<=n;i++){
//    a += i*2;
//    //printf("This is i:%d\n\r",i);
//    //printf("This is a:%d\n\r",a);
//  }
//  
//  for(uint32_t j = 1;j<=n;j++){
//     a += 2;
//	 sum += a;
//  }
//
//  return sum;
return (uint64_t) n*n*n;
}
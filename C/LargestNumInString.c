#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int largest_five_digits(const char *digits)
{
  int a = strlen(digits);
  char num[6]= "";
//  printf("%lu\n\r",strlen(num));
  for(int i = 0; i<5;i++){
  num[i] = 0;
  }
    
  //char *ptr = num;
  int largest = 0;
  int test = 0;
  for(int i = 4; i < a; i++){
//    printf("test A %d\n\r",i);
    for(int j = i-4, k = 0; j <= i; j++, k++){
//      printf("test B J:%d K:%d\n\r",j,k);
      num[k] = digits[j];
      int tmp = 0;
        if(k == 4){tmp = atoi(num); if(tmp > largest){largest = tmp;}}
      }
    }

  return largest; // you code here
}

//this is test code that I would need to implement to make sure it works

void do_test(const char *digits, int expected){
int tmp = largest_five_digits(const char *digits);
if(exptected == tmp){printf("test passed\n\r");}
else{printf("test failed");}
}




// TODO: Replace examples and use TDD by writing your own tests

//void Test(LargestFiveDigitNumberTest, ExampleTests)
//{
//    do_test("283910", 83910);
//    do_test("1234567890", 67890);
//    do_test("555764702842429111376031432700388974567841285106455270313816046855511216336968723550704185991799240363126814606271254884375545689616150931313933388766305971439512347332664079307394136625988031275228696013264995328182692696935457428249665286738858017506190867701658514334928803636686218414286541322057442244737697410281820576618113050204997876620860052229800913441481172060944142149381292585821192229727913528754783034402206327569732625070875464769339559403160353518217216862451514469529967992466487231819376427886958046855223862805918047601689496491178820209681",99787);
//}

int main(){
    do_test("283910", 83910);
    do_test("1234567890", 67890);
    do_test("555764702842429111376031432700388974567841285106455270313816046855511216336968723550704185991799240363126814606271254884375545689616150931313933388766305971439512347332664079307394136625988031275228696013264995328182692696935457428249665286738858017506190867701658514334928803636686218414286541322057442244737697410281820576618113050204997876620860052229800913441481172060944142149381292585821192229727913528754783034402206327569732625070875464769339559403160353518217216862451514469529967992466487231819376427886958046855223862805918047601689496491178820209681",99787);

}
void do_test(const char *digits, int expected);
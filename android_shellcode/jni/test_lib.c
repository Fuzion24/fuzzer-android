#include <math.h>
#include <stdio.h>
#include <string.h>


int winning(int a, char c) {
  printf("[*] Winning, received %d - %c\n", a, c);
  return a+1;
}

char* ya_strcpy(char* dst, char* src) {
  char *result = "copy me hard";
  
  printf("[*]\tsrc before call: %s\n", src);
  printf("[*]\tdst before call: %s\n", dst);

  result = strcpy(dst, result);

  test(9, "yes", 43);

  printf("[*]\tya_strcpy: %s\n", result);

  return result;
}

int blow(int a) {
  int c;
  
  //printf("[*] Blow: Calling sqrt with parameter %d\n", a);
  c = sqrt( a *  2 );
  //printf("[*] Blow: Return from sqrt %d\n", c);
  return (int) c;
}



int test(int b, char*s , int c) {
  int blow_result;

  char *first = (char *) malloc(10);
  first = "asdf";
  char dst[10];
  
  printf("[*] Test params: %d - %d\n", b, c);
  
  printf("[*] Got %s\n", s);
  //printf("[*] Test: Calling blow: %d\n", b);
  blow_result = blow(b);
  //printf("[*] Test: Returned from blow: %d\n", blow_result);

  blow_result +=b;


  strcpy(dst, first);
  printf("[*] Copied: %s\n", dst); 

  printf("[*] Test returning %d\n", blow_result);
  return blow_result;
}


int retfour() {
  return 4;
}

    

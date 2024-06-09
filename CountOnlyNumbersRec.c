#include <stdio.h>
#include <string.h>
int count(char *s) {
  
  int size = 0;

  if (*s == '\0') {
    return 0;
  }
  if ((*s >= '0' && *s <= '9') && (*(s+1) < '0' || *(s +1) > '9')) 
  {
    size = 1;
  }
  return size + count(s + 1);
}

int main(void) {
  char *str = "5+61--7+-38-9";
  int result =count(str);
  printf("%d",result);
  return 0;
}
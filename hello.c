#include <stdio.h>
int main() {
  char buf[100], str[100];
	printf("Enter name: ");
  while (fgets(buf, sizeof buf, stdin) != NULL) {
    if (sscanf(buf, "%s", &str) != 1) {
      printf("Hello, nameless!\n");
    }else{
      printf("Hello, %s!\n", str);
    }
  }
	
	return 0;
}
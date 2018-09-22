#include <stdio.h>
int main() {
  char str[100];
	//printf("Enter name: ");
	//scanf("%s", str);
    if (scanf("%s", str) != 0) {
        printf("Hello, %s!\n", str);
      
    }else{
        printf("Hello, nameless!\n");
    }
	
	return 0;
}

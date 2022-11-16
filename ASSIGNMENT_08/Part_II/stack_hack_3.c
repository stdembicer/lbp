#include <stdio.h>;

int initialized_data = 5;

main() {
	printf("I grew the stack by initializng a global function and calling it.The stack grew to %p\n.", &initialized_data);
       	return 0;
}

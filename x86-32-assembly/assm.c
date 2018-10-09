#include <stdio.h>

int pid;

int main() {
		__asm__(
						"movl $20, %eax    \n"
						"call *%gs:0x10    \n"   
						"movl %eax, 0x1    \n"
						"int 0x80          \n"
			   );
		printf("pid is %d\n", pid);
		return 0;
}


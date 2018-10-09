
#include    <uma.h>
#include    <signal.h>

void _hand ( int signo ) {

		printf("EXECUTED\n");

}


void write2(char *str, int len) {

		signal (SIGTRAP , _hand );
		
		__asm__ volatile (
						"movl $4, %%eax;"
						"movl $1, %%ebx;"
						"int $0x80"
						:: "c" (str), /* c  tells the compiler to put str in ecx */
						"d" (len)  /* d  tells the compiler to put len in edx */
						: "eax", "ebx");
}

int main (void) {
		write2("uma", 3);
}


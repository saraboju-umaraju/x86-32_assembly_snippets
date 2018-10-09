#include <stdio.h> 
#include <signal.h>

volatile sig_atomic_t being_debugged = 1;

void int3_handler(int signo) { 

	being_debugged = 0; 

}

int main()
{
		signal(SIGTRAP, int3_handler);

		asm volatile("int3");

		if (being_debugged) {

				puts("No, I don't want to serve you.");

				while (1) {

						/* endless loop */ ;
				}
		}

		puts("Yes, real routines go here.");

		return 0;
}

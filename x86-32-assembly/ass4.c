#include	<uma.h>

int main(void)
{
		int foo = 10, bar = 15;

		__asm__ volatile ("addl  %%ebx,%%eax":"=a"(foo):"a"(foo), "b"(bar));
		
		printf("foo+bar=%d\n", foo);
		
		//asm volatile ("movl $0x199,%eax");
		
		//asm volatile ("movl $1,%%edx":"=d"(foo));
		
		//asm volatile ("movb $65,%al");
	
		//asm volatile ("lock : mov %ebx,%eax");  well this is atomic operation 
		
		//asm volatile ("mov %ebx,%eax"); */ 

		//asm ("movl %%eax, %0\n" :"=r"(bar));

		//asm volatile ("movl 1(%ebx),%eax"); /* dereferencing ebx and moving the value into  eax */
	
		//printf ( "%x\n" ,foo ) ;

//		return 0;
}


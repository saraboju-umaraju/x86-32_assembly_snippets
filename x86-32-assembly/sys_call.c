#include <uma.h>

int lsproc () {

	int ret ;
	
	char *ptr = "hello world";

	asm volatile ( "movl $4 , %eax" ) ;
	
	asm volatile ( "movl $1 , %ebx" ) ;
	
	asm volatile ("movl %0 , %%ecx" : :"r"(&ptr));
	
	asm volatile ( "int $128" ) ;

	asm volatile ( "movl %eax , -4(%ebp)" ) ;

	return ret ;

}

int main ( void ) {

	int p ;

	puts("invoking a system call");

	p = lsproc() ;

	puts("returning from system call");

}

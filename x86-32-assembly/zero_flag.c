#include	<uma.h>

int main ( void ) {

	int a =  12 ;


	if ( a == 12 )  {

	asm volatile ( "jmp 0x08048446" ) ;
	
//	asm volatile ( "cmpl %eax , %eax" ) ;
		
		puts("equal to 12");

	}

	else {

		puts ( "not equal to 12" );

	}

}

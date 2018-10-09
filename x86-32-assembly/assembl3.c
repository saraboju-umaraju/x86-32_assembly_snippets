
#include	<uma.h>

int main ( void ) {

		int data = 0;   
		__asm__
		(
				 "mov ebx, 30" 
				
				 "mov (data), ebx"
		);

		printf ( "%d\n",data ) ;
}

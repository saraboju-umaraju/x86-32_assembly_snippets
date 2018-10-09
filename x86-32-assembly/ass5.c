#include	<stdio.h>

int main  ( void ) {

		int _int = 12 ;

		int _var= 0 ;

		int extra = 0 ;

	//	asm volatile("lock;\n""addl %1,%0 ;\n":"=m"( _var ):"ir"( _int ),"m" ( _var ): /* no list ??? */ );
		
		asm volatile("lock;\n""subl %1,%0 ;\n":"=m"( _var ):"ir"( _int ),"m" ( _var ): /* no list ??? */ );

		printf ("value is %d\n" , _var) ;

}

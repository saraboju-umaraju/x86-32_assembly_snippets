#include	<stdio.h>

int main ( void ) {

		int *a = 0 ;
		
		int *b = 0 ;

			asm volatile ("mov %%cr8 , %0 ":"=r"(a) );
			asm volatile ("mov %%gs , %0 ":"=r"(a) );
			asm volatile ("mov %%es , %0 ":"=r"(a) );
			asm volatile ("mov %%ss , %0 ":"=r"(a) );
			asm volatile ("mov %%ds , %0 ":"=r"(a) );
			
			asm volatile ("mov %%ebp , %0 ":"=r"(b) );
			asm volatile ("lahs" );

			asm volatile ( "movb %%ah , %0":"=r"(a));

				printf ("esp is %p   ebp is %p\n",a , b );

//				printf("return value is %p\n",__builtin_return_address(0));
				
	//			fun(1,2,b);

		return 0 ;

}

/*int fun  ( ) {

	int *a ;

	 asm volatile ("mov %%esp , %0 ":"=r"(a) );

	 printf ("esp is %p   ebp is %p\n",a , *(a-1) );
				
	printf("return value is %p\n",__builtin_return_address(0));

	return 1; 

	}*/



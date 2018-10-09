#include	<uma.h>

int main ( void )  {

	char *str = "killed";

	char two[12] = "";

	int usable = 0 ;

	while ( /**( str + usable )*/ *str ) {

	//	*( two + usable )  = *( str + usable ) ;

		*( two + usable )  =  *str  ;

		asm volatile ("cld") ;

			str++;

			usable ++ ;

	}

		puts(two);
}

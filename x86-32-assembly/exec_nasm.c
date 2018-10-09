#include	<stdio.h>
#include	<unistd.h>

int main ( void ) 
{
	execl ( "./modes" , "./modes" , NULL ) ;
	
	puts("bad world");

	return 0;

}

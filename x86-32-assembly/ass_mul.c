
int main ( void ) {

		int x = 10 ;

		int five_times_x ; 


		asm ("leal (%%eax,%%eax,2), %%eax"
						: "=r" (x)
						: "r" (x) 
			);

		printf ( "%d",x ) ;

}


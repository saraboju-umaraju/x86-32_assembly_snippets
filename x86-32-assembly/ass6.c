int main ( void ) {

		int my_var = 0 ;

		int cond = 0 ;

__asm__ volatile(  "decl %0; sete %1"
				: "=m" (my_var), "=q" (cond)
				: "m" (my_var) 
				: "memory"
				);

}

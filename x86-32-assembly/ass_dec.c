
int main ( void ) {

		int my_var ;

		int cond ;

__asm__ volatile (  "decl %%ebx; sete %%eax"
				: "=a" (my_var), "=b" (cond)
				: "a" (my_var) 
				: "memory"
				);

}

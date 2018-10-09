int main ( void ) {

		int a=10, b;
		asm (			"=r"(b)        /* output */
						:"r"(a)         /* input */
						:"%eax"         /* clobbered register */
			);  

}

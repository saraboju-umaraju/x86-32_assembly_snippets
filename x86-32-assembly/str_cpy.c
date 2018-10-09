

char * str_cpy(char * dest, char *src)
{
		int d0, d1, d2;

		__asm__ volatile (  "1:\tlodsb\n\t"
						
						"stosb\n\t"
						
						"testb %%al,%%al\n\t"
						
						"jne 1b"
						
						: "=&S" (d0), "=&D" (d1), "=&a" (d2)
						
						: "0" (src),"1" (dest) 
						
						: "memory");
		return dest;
}

int main ( void ) {

	char *ptr = malloc ( 120 );

	char arr[11] ={1,2,3};
	
	char arr1[12] = {66,67,66};
	
	 ptr = str_cpy ( arr ,arr1 ) ;

	printf ( "%s\n",ptr );

}

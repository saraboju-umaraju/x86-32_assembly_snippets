
int main ( void ) {
int src = 1;
int dst;

__asm__ ("mov %1, %0\n\t"
				"add $1, %0"
				: "=r" (dst)
				: "r" (src));

printf("%d\n", dst);

}

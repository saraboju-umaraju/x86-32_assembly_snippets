
int main ( void ) {

		int label ;

__asm__ volatile ("movl %eax, %ebx":
				"movl $56, %esi":
				"movl %ecx, $label(%edx,%ebx,$4)":
				"movb %ah, (%ebx)");

}

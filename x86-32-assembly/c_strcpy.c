# include	<uma.h>

int main(void)
{
	char str[] = "umaaa";
	
	char str1[7];
	
	asm volatile("movl (str) ,%esi\n\nmovl (str1),%edi\n\nmovl $7,%ecx\n\nrep movsb"); 
	printf("%s\n",str1);
}
	



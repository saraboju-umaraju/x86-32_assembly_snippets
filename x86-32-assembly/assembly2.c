int main()
{
		    int i;
			    asm("\t movl %%eax,%0" : "=r"(i));
				    printf ( "%d\n", i+1 );
					return 99;
}

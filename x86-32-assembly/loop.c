int main()
{
        int i=0;
/*        int a[] = { 5, 1, 7, 3, 9 };
        printf("ente:wq");
        for (i = 1; i < 5; i++) {
                if (a[i] < a[i - 1]) {
                        a[i] = a[i] + a[i - 1];
                        a[i - 1] = a[i] - a[i - 1];
                        a[i] = a[i] - a[i - 1];
                        i = 0;
                }
        }
        printf("result\n : ");
        for (i = 0; i < 5; i++) {
                printf("%d\n",a[i]);
        }*/

		__asm ( 
						"movl $29,%eax"
						"movl $eax,i"
						
			  );

}

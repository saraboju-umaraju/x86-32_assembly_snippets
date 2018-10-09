#invoking write system call 

.data

byte:
	.byte 12

pointer_to_string:

		.ascii "hello\n"

.text

.globl _start

_start:

		movl $4 , %eax    					#write syscall number ssize_t write ( int fd , void *buffer , sizeof(buffer) ) 

		movl $1 , %ebx         				#argument

		movl $pointer_to_string , %ecx   	#argument

		movl $6 , %edx     				# string length

		int $0x80         					#exception handler vector number

		lahf 
	
		movb %ah , byte

		movl $1 , %eax     					#exit sytem call

		movl $0 , %ebx						#status value

		int $0x80							#vector number

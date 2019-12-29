section .text						; code section
	global _ft_strcpy				; make label available to linker

_ft_strcpy:							; standard  gcc  entry point
	mov		rax, rdi				; init rax to original pointer of rdi (dst)
loop:								; start loop
	mov		rcx, [rsi]				; dereference rsi (src) into rcx
	mov 	[rdi], rcx				; move first byte of rcx into rdi (dst)
	cmp		[rsi], byte 0			; dereference rsi (src) and compare to ASCII caracter NULL  
	jne		redo					; goto redo if not equal
	ret								; return rax
redo:
	inc		rsi						; increment rax
	inc		rdi						; increment rdi
	jmp		loop					; go back to loop
section .text
	global ft_strcmp

ft_strcmp:
	mov		dl, [rdi]
	mov		cl, [rsi]
	cmp		dl, byte 0
	je		end
	cmp		cl, byte 0
	je		end
	cmp		dl, cl
	jne		end
	inc		rdi
	inc		rsi
	jmp		ft_strcmp
end:
	movzx	rax, dl
	movzx	rdx, cl
	sub		rax, rdx
	ret

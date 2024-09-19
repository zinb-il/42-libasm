;int     ft_strcmp(const char *s1, const char *s2)


    global ft_strcmp
    extern __errno_location
    
    section .text
ft_strcmp:
            push    rbp
            mov     rbp, rsp
            mov     rcx, 0
            mov     rax, 0

            test rdi, rdi
            jz  .error
            test rsi, rsi
            jz  .error

            .loop:
                movzx     eax, byte[rdi + rcx]
                movzx     edx, byte[rsi + rcx]

                cmp     eax, edx
                jne     .end

                test    eax, eax
                jz      .end
                test    edx, edx
                je      .end

                inc     rcx
                jmp     .loop
            .end:
                sub     eax, edx
                pop     rbp
                ret
            .error:
                call __errno_location
                mov dword[rax], 22
                mov rax, -1
                pop rbp
                ret



;char *  ft_strcpy(char *dest, const char *src);

    global ft_strcpy
    extern __errno_location

    section .text
ft_strcpy:
            push rbp
            mov rbp, rsp
            mov rcx, 0

            ;Check if src of des are null
            test    rdi, rdi
            jz      .error
            test    rsi, rsi
            jz      .error

            .loop:
                mov al, byte [rsi + rcx]
                mov byte [rdi + rcx], al
                inc rcx
                cmp al, 0
                je  .end
                jmp .loop
            .end:
                mov byte [rdi + rcx], 0
                mov rax, rdi
                pop rbp
                ret
            .error:
                call __errno_location
                mov dword[rax], 22
                mov rax, 0
                pop rbp
                ret


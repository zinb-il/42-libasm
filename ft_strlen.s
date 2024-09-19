;size_t  ft_strlen(const char *str);

    global ft_strlen
    extern __errno_location

    section .text
ft_strlen:
            push    rbp
            mov     rbp, rsp
            mov     rax, 0

            test    rdi, rdi
            jz      .error
            .loop:
                cmp byte [rdi + rax], 0
                je  .end
                inc rax
                jmp .loop
            .end:
                pop rbp
                ret
            .error:
                call __errno_location
                mov dword [rax], 22
                mov rax, -1
                pop rbp 
                ret
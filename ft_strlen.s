;size_t  ft_strlen(const char *str);

    global ft_strlen

    section .text
ft_strlen:
            mov rcx, 0
            cmp rdi, 0
                je end
            loop:
                cmp byte [rdi + rcx], 0
                je end
                inc rcx
                jmp loop
            end:
                mov rax, rcx
                ret
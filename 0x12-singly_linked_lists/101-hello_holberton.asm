section .data
    hello db 'Hello, Holberton', 0xa  ; string to be printed

section .text
    global main
    extern printf

main:
    ; setup for printf
    mov rdi, hello  ; argument for printf
    xor rax, rax    ; zero out rax
    call printf     ; call printf
    ret


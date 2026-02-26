[bits 16]
[extern kmain]

section .boot
global _start

_start:
    cli                         ; Disable interrupts
    lgdt [gdt_descriptor]       ; Load GDT
    mov eax, cr0
    or eax, 0x1
    mov cr0, eax                ; Switch to Protected Mode
    jmp 0x08:init_pm            ; Far jump to 32-bit segment

[bits 32]
init_pm:
    mov ax, 0x10                ; Update segment registers
    mov ds, ax
    mov ss, ax
    mov es, ax
    mov esp, 0x90000            ; Set up stack
    call kmain                  ; Call C entry point
    hlt                         ; Halt if C returns

gdt_start:
    dq 0x0                      ; Null descriptor
gdt_code:
    dw 0xffff, 0x0, 0x9a00, 0x00cf
gdt_data:
    dw 0xffff, 0x0, 0x9200, 0x00cf
gdt_end:
gdt_descriptor:
    dw gdt_end - gdt_start - 1
    dd gdt_start
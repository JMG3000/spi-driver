void kmain() {
    volatile char* vga_buffer = (volatile char*)0xB8000;
    const char* message = "Successfully Booted into C Protected Mode";
    int i = 0;

    while (message[i] != '\0') {
        vga_buffer[i * 2] = message[i];     // Character
        vga_buffer[i * 2 + 1] = 0x0F;       // Attribute (White on Black)
        i++;
    }

    while(1); // Infinite loop to prevent exit
}
all: boot.bin

boot.bin: boot.o kernel.o
	ld -m elf_i386 -T linker.ld -o boot.bin boot.o kernel.o

boot.o: boot.asm
	nasm -f elf32 boot.asm -o boot.o

kernel.o: kernel.c
	gcc -m32 -ffreestanding -c kernel.c -o kernel.o -fno-pie

clean:
	rm -f *.o *.bin
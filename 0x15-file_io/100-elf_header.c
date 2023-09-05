#include "main.h"

/*
 * File: 100-elf_header.c
 * Author: Addisu Hailemariam
 */

/*
 * check_elf - Checks if a file is ELF
 * Description: if the file is not ELF - exit code 98 
 */

void check_elf(unsigned char *e_ident){
	int i;
	for (i =0; i< 4; i++){
		if(e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F'){
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

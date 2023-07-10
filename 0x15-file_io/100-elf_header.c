nclude <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

#define ELF_MAGIC_SIZE 4
#define ELF_CLASS_SIZE 1
#define ELF_DATA_SIZE 1
#define ELF_VERSION_SIZE 1
#define ELF_OSABI_SIZE 1
#define ELF_ABIVERSION_SIZE 1
#define ELF_TYPE_SIZE 2
#define ELF_ENTRY_POINT_SIZE 8

#define ELF_MAGIC_OFFSET 0
#define ELF_CLASS_OFFSET 4
#define ELF_DATA_OFFSET 5
#define ELF_VERSION_OFFSET 6
#define ELF_OSABI_OFFSET 7
#define ELF_ABIVERSION_OFFSET 8
#define ELF_TYPE_OFFSET 16
#define ELF_ENTRY_POINT_OFFSET 24

#define ERROR_EXIT_CODE 98

void print_error(const char* error_message) {
	    fprintf(stderr, "Error: %s\n", error_message);
	        exit(ERROR_EXIT_CODE);
}

void print_elf_header_info(const char* filename) {
	    int fd = open(filename, O_RDONLY);
	        if (fd == -1)
			        print_error("Failed to open file");

		    Read ELF magic
		        char magic[ELF_MAGIC_SIZE];
		            if (read(fd, magic, ELF_MAGIC_SIZE) != ELF_MAGIC_SIZE)
		                    print_error("Failed to read ELF magic");
		   
		                        // Verify ELF magic
		                            if (magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
		                                    print_error("Not an ELF file");
		   
		                                        // Seek to the start of the ELF header
		                                            if (lseek(fd, 0, SEEK_SET) == -1)
		                                                    print_error("Failed to seek to ELF header");
		   
		                                                        // Read and print ELF header information
		                                                            char buf[ELF_ENTRY_POINT_OFFSET + ELF_ENTRY_POINT_SIZE];
		                                                                if (read(fd, buf, sizeof(buf)) != sizeof(buf))
		                                                                        print_error("Failed to read ELF header");
		   
		                                                                            printf("ELF Header:\n");
		                                                                                printf("  Magic:   ");
		                                                                                    for (int i = 0; i < ELF_MAGIC_SIZE; i++) {
		                                                                                            printf("%02x ", (unsigned char)magic[i]);
		                                                                                                }
		                                                                                                   printf("\n");
		                                                                                                        printf("  Class:   ");
		                                                                                                            switch (buf[ELF_CLASS_OFFSET]) {
		   /                                                                                                                 case 1: printf("ELF32\n"); break;
		                                                                                                                            case 2: printf("ELF64\n"); break;
		                                                                                                                                    default: printf("<unknown>\n"); break;
		                                                                                                                                        }
		                                                                                                                                            printf("  Data:    ");
		                                                                                                                                                 switch (buf[ELF_DATA_OFFSET]) {
		                                                                                                                                                         case 1: printf("2's complement, little endian\n"); break;
		                                                                                                                                                                 case 2: printf("2's complement, big endian\n"); break;
		                                                                                                                                                                         default: printf("<unknown>\n"); break;
		                                                                                                                                                                             }
		                                                                                                                                                                                 printf("  Version: %u (current)\n", buf[ELF_VERSION_OFFSET]);
		                                                                                                                                                                                     printf("  OS/ABI:  ");
		                                                                                                                                                                                         switch (buf[ELF_OSABI_OFFSET]) {
		                                                                                                                                                                                                 case 0: printf("UNIX - System V\n"); break;
		                                                                                                                                                                                                        case 1: printf("HP-UX\n"); break;
		                                                                                                                                                                                                                 case 2: printf("NetBSD\n"); break;
		                                                                                                                                                                                                                         case 3: printf("Linux\n"); break;
		                                                                                                                                                                                                                                 case 6: printf("Sun Solaris\n"); break;
		                                                                                                                                                                                                                                         case 7: printf("IBM AIX\n"); break;
		                                                                                                                                                                                                                                                 case 8: printf("SGI Irix\n"); break;
		                                                                                                                                                                                                                                                         case 9: printf("FreeBSD\n"); break;
		                                                                                                                                                                                                                                                                 case 10: printf("Compaq TRU64\n"); break;
		                                                                                                                                                                                                                                                                         case 11: printf("Novell Modesto\n"); break;
		                                                                                                                                                                                                                                                                                 case 12: printf("OpenBSD\n"); break;
		                                                                                                                                                                                                                                                                                         case 13: printf("OpenVMS\n"); break;
		                                                                                                                                                                                                                                                                                                 case 14: printf("Hewlett-Packard Non-Stop Kernel\n"); break;
		                                                                                                                                                                                                                                                                                                         case 15: printf("Amiga Research OS\n"); break;
		                                                                                                                                                                                                                                                                                                                 case 16: printf("The FenixOS highly scalable multi-core OS\n"); break;
		                                                                                                                                                                                                                                                                                                                         case 17: printf("ARM EABI\n"); break;
		                                                                                                                                                                                                                                                                                                                                 case 18: printf("ARM\n"); break;
		                                                                                                                                                                                                                                                                                                                                         case 19: printf("Stand-alone (embedded) application\n"); break;
		                                                                                                                                                                                                                                                                                                                                                 default: printf("<unknown>\n"); break;
		                                                                                                                                                                                                                                                                                                                                                     }
		                                                                                                                                                                                                                                                                                                                                                         printf("  ABI Version: %u\n", buf[ELF_ABIVERSION_OFFSET]);
		                                                                                                                                                                                                                                                                                                                                                             printf("  Type:    0x%02x%02x ", buf[ELF_TYPE_OFFSET + 1], buf[ELF_TYPE_OFFSET]);
		                                                                                                                                                                                                                                                                                                                                                                 switch (*(uint16_t *)(buf + ELF_TYPE_OFFSET)) {
		                                                                                                                                                                                                                                                                                                                                                                         case 1: printf("(REL)\n"); break;
		                                                                                                                                                                                                                                                                                                                                                                                 case 2: printf("(EXEC)\n"); break;
		                                                                                                                                                                                                                                                                                                                                                                                         case 3: printf("(DYN)\n"); break;
		                                                                                                                                                                                                                                                                                                                                                                                                 case 4: printf("(CORE)\n"); break;
		                                                                                                                                                                                                                                                                                                                                                                                                         default: printf("<unknown>\n"); break;
		                                                                                                                                                                                                                                                                                                                                                                                                             }
		                                                                                                                                                                                                                                                                                                                                                                                                                 printf("  Entry point address:               0x");
		                                                                                                                                                                                                                                                                                                                                                                                                                     for (int i = 0; i < ELF_ENTRY_POINT_SIZE; i++) {
		                                                                                                                                                                                                                                                                                                                                                                                                                             printf("%02x", (unsigned char)buf[ELF_ENTRY_POINT_OFFSET + i]);
		                                                                                                                                                                                                                                                                                                                                                                                                                                 }
		                                                                                                                                                                                                                                                                                                                                                                                                                                     printf("\n");
		    
		                                                                                                                                                                                                                                                                                                                                                                                                                                         close(fd);
		                                                                                                                                                                                                                                                                                                                                                                                                                                         }
		    
		                                                                                                                                                                                                                                                                                                                                                                                                                                         int main(int argc, char* argv[]) {
		                                                                                                                                                                                                                                                                                                                                                                                                                                            if (argc != 2) {
		                                                                                                                                                                                                                                                                                                                                                                                                                                                     print_error("Usage: elf_header elf_filename");
		                                                                                                                                                                                                                                                                                                                                                                                                                                                         }
		    		    //                                                                                                                                                                                                                                                                                                                                                                                                                                                         print_elf_header_info(argv[1]);
		    
		                                                                                                                                                                                                                                                                                                                                                                                                                                                               return 0;
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                 }
		    

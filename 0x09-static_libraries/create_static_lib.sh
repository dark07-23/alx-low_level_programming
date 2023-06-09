#!/bin/bash
#compile each .c file into a corresponding .o file
for file in *.c; do
	    gcc -c "$file" -o "${file%.c}.o"
    done

    # Create the static library liball.a from all the .o files
    ar rcs liball.a *.o

    # Clean up the .o files
    rm -f *.o
   

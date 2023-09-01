#!/bin/bash

# Step 1: Compile all .c files to .o files
for cfile in *.c; do
    gcc -c "$cfile" -o "${cfile%.c}.o"
done

# Step 2: Archive all .o files into liball.a
ar rcs liball.a *.o

# Optional: Cleanup all .o files after creating the library
rm *.o


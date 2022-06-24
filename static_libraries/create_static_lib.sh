#!/bin/bash
# This script creates static library from all the .c files that are in the
# current directory.
gcc -c *.c
ar rc liball.a *.o

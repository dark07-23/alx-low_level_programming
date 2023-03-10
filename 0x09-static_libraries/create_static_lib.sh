#!/bin/bash
FILES=$(ls *.c) || gcc -c $f || ar -rcs liball.a *.o || rm *.o

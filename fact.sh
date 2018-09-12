#!/bin/bash
#reading variable
echo "enter the variable"
read variable
./a.out $variable > file.txt
cat file.txt


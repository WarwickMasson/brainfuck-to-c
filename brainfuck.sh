cat $1 | ./brainfuck >out.c
gcc -o $2 out.c
rm out.c

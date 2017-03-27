Brainfuck is a simple turing-machine based language.
It's also  a turing tarpit - a language that is turing complete but just about impossible to write useful programs in.
It's operation is incredibly simple - imagine you have an infinite length of tape where each square contains a number. You have a "head" that sits on one of the squares.
The commands are as follows:

	< : move the head left one square
	> : move the head right one square
	+ : increment the head square
	- : decrement the head square
	. : print the head square
	\ : get a character from standard input
	[ : while the head square is not zero do
	] : end [ block

and that's all. The awesome part about this simplicity is that each command can be mapped exactly to a piece of c code.
This is a simple implementation of this which converts each symbol to a piece of c code.

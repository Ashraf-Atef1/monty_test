#include "monty.h"

int (*monty_op(char *order)(stack_t **stack, unsigned int line_number))
{
	instruction_t op_stack[] = {
		{"push", push_to_stack},
		{"pall", print_stack_all},
		{"pint", print_stack_top},
		{"pop", remove_last_instack},
		{"swap", swapper_bettwen_last},
		{"add", adding_last_two},
		{"nop", lazy_man},
		{"sub", sub_last_two},
		{"div", divide_last_two},
		{"mul", multi_last_two},
		{"mod", modder},
		{"#", comment_handeler},
		{"pchar", int_to_char_print},
		{"pstr", int_to_str_prtint},
		{"rot1", rotetor},
		{"rotr", rot_last}};
	int mover = 0;
	while (op_stack[mover].opcode)
	{
		if (order == op_stack[mover].opcode[0])
			return (op_stack[mover].f);
		mover++;
	}
	return (NULL);
}


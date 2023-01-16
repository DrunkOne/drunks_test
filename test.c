#include <stdio.h>

int selection (char input) {
    printf("How to create a program? \n");

    do {
        printf("Choose one of the two options: A or B: ");
        scanf("%c", selection);
        if( selection == 'A' || selection == 'B') {
            printf("Lmao sonnnn I don't have an idea at all on how to program anything... \n");
            break;
        } else if ( selection == 'B' || selection == 'b') {
            printf("What you still doing here? \n");
            break; 
        } else {
            printf("Invalid command. \n");
        }
    } while (1);
    return input;
}

int main () {
    char input = selection(input);

    return 0;
}
void init_game_state(game_state *gp)
{
	int x, y;  // row and column indices

	trace("init_game_state: init_game_state starts");

	*gp = (game_state)malloc(sizeof(struct game_state_int));
	(*gp)->row = -1;
	(*gp)->column = -1;
	for (x = 1; x <= DIMENSION; x++)
	{
		for (y = 1; y <= DIMENSION; y++)
		{
			init_square_state(&((*gp)->board[x - 1][y - 1]), x, y);
		}
	}
	(*gp)->moves = 0;

	trace("init_game_state: init_game_state ends");
}
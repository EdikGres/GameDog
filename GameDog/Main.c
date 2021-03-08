#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	char location[10][21]; // [y][x]
	int x = 10, y = 5;
	int counter = 0;
	char dog = '@';
	char apple = '*';
	char klick;
	srand(time(NULL));
	int ax = rand() % 18  + 1, ay = rand() % 8 + 1;
	do {
		//make location
		sprintf(location[0], "--------------------");
		for (int i = 1; i < 9; i++)
		{
			sprintf(location[i], "|                  |");
		}
		sprintf(location[9], "--------------------");
		location[ay][ax] = apple;
		location[y][x] = dog;
		for (int i = 0; i < 10; i++)
		{
			printf("%s\n", location[i]);
		}
		printf("counter = %d\n", counter);
		
		//move dog
		klick = _getch();
		if (klick == 'w') {
			if (y > 1) y--;
		}
		if (klick == 's') {
			if (y < 8) y++;
		};
		if (klick == 'd') {
			if (x < 18) x++;
		};
		if (klick == 'a') {
			if (x > 1) x--;
		}
		if (ay == y && ax == x)
		{
			counter++;
			ax = rand() % 18 + 1; 
			ay = rand() % 8 + 1;
		}
		system("cls");
	} while (klick != 'e');





	return 0;
}
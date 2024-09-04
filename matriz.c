#include <stdio.h>
#include <stdlib.h>

void	matriz(int x, int y) //x = larg, y = alt
{
	int	larg;
	int	alt;

	larg = 1;
	alt = 1;
	if (x < 1 || y < 1)
		return;
	while (alt <= y)
	{
		while (larg <= x)
		{
			if ((larg == 1 || larg == x) && (alt == 1 || alt == y))
				printf("o");
			else if ((larg > 1 && larg < x) && (alt == 1 || alt == y))
				printf(" x ");
			else if ((larg == 1 || larg == x) && (alt > 1 & alt < y))
				printf("x");
			else if ((larg > 1 && larg < x) && (alt > 1 && alt <  y))
				printf("   ");
			larg++;
		}
		larg = 1;
		printf("\n");
		alt++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		matriz(atoi(argv[1]), atoi(argv[2]));
	}
	return (0);
}
/*int	main()
{
	matriz(15, 10);
	return (0);
}*/

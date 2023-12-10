#include "main.h"
/**
 * free_grid - check the code
 * @grid: int
 * @height: height
 * Return: 0 or null
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = height - 1; x >= 0; --x)
		free(grid[x]);
	free(grid);
}

#include "fillit.h"

void		ft_remap(char **map, char **tetra, int *xy, int k)
{
	int		x;
	int		y;

	x = xy[0];
	y = xy[1];
	map[(tetra[k][0] - '0') + y][(tetra[k][1] - '0') + x] = '.';
	map[(tetra[k][2] - '0') + y][(tetra[k][3] - '0') + x] = '.';
	map[(tetra[k][4] - '0') + y][(tetra[k][5] - '0') + x] = '.';
	map[(tetra[k][6] - '0') + y][(tetra[k][7] - '0') + x] = '.';
}

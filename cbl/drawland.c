#include "game.h"

void	drawguy(t_pr *g)
{
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_guy, g->xguy, g->w_height - 80);
}

void	drawback(t_pr *g)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	g->img_back = mlx_xpm_file_to_image(g->mlx_ptr, "textures/wood-dribble.xpm", &g->w, &g->w);
	while (i < 10)
	{
		while (j < 8)
		{
			mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_back, x, y);
			x += 64;
			j++;
		}
		x = 0;
		j = 0;
		y += 64;
		i++;
	}
}

void	drawland(t_pr *g)
{
	int 	i = 0;
	if (g->lev == 1)
		g->img_land = mlx_xpm_file_to_image(g->mlx_ptr, "textures/wood.xpm", &g->w, &g->w);
	else if (g->lev == 2)
		g->img_land = mlx_xpm_file_to_image(g->mlx_ptr, "textures/redbrick.xpm", &g->w, &g->w);
	else if (g->lev == 3)
		g->img_land = mlx_xpm_file_to_image(g->mlx_ptr, "textures/stone.xpm", &g->w, &g->w);
	else
		g->img_land = mlx_xpm_file_to_image(g->mlx_ptr, "textures/mossy.xpm", &g->w, &g->w);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 0, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 64, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 128, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 192, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 256, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 320, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 384, g->w_height - 40);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_land, 448, g->w_height - 40);
}
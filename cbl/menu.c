#include "game.h"

void	menumove(int i, t_pr *g)
{
	if (i == 125 && g->menubar < 3)
			g->menubar++;
		else if (i == 126 && g->menubar > 1)
			g->menubar--;
		else if (i == 36 && (g->menubar == 1 || g->menubar == 2))
		{
			g->menuswitch = 0;
			drawback(g);
			drawland(g);
			drawui(g);
			drawguy(g);
			bullet_fire(g);
			mlx_loop(g->mlx_ptr);
		}
		else if (i == 36 && g->menubar == 3)
			exit(0);
		menu(g);
}

void	menu(t_pr *g)
{
	g->img_back = mlx_xpm_file_to_image(g->mlx_ptr, "textures/back1.xpm", &g->w, &g->w);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_back, 0, 0);
	g->img_buttonplay = mlx_xpm_file_to_image(g->mlx_ptr, "textures/buttonplay.xpm", &g->w, &g->w);
	g->img_buttonmulti = mlx_xpm_file_to_image(g->mlx_ptr, "textures/buttonmulti.xpm", &g->w, &g->w);
	g->img_buttonexit = mlx_xpm_file_to_image(g->mlx_ptr, "textures/buttonexit.xpm", &g->w, &g->w);
	g->img_buttonframe = mlx_xpm_file_to_image(g->mlx_ptr, "textures/buttonframe.xpm", &g->w, &g->w);
	if (g->menubar == 1)
		mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonframe, 140, 180);
	else if (g->menubar == 2)
		mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonframe, 140, 280);
	else if (g->menubar == 3)
		mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonframe, 140, 380);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonplay, 140, 180);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonmulti, 140, 280);
	mlx_put_image_to_window(g->mlx_ptr, g->win_ptr, g->img_buttonexit, 140, 380);
	mlx_loop(g->mlx_ptr);
}
#include "euler.h"

using namespace std;

int euler11()
{
	const int x = 20;
	const int y = 20;
	const int sum_ind = 3;

	long total_max = 1;

	long diag_right_product_down = 1;
	long diag_right_product_up = 1;

	long diag_left_product_down = 1;
	long diag_left_product_up = 1;

	long horizontal_product_right = 1;
	long horizontal_product_left = 1;

	long vertical_product_down = 1;
	long vertical_product_up = 1;

	int mat[y][x] = {{8,2,22,97,38,15,0,40,0,75,04,05,07,78,52,12,50,77,91,8},{49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},{81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},{52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},{22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},{24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},{32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},{67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},{24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},{21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},{78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92},{16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},{86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},{19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},{04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},{88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},{04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},{20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},{20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},{01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48}};

	for( int i_y = 0; i_y<y; i_y++)
		{
		for( int i_x = 0; i_x<x; i_x++)
			{
				if(i_x<sum_ind) //we can only go right
				{
					horizontal_product_right = mat[i_y][i_x]*mat[i_y][i_x+1]*mat[i_y][i_x+2]*mat[i_y][i_x+3];
				}
				if(i_x>=sum_ind && i_x<x-sum_ind) //we can go right and left
				{
					horizontal_product_right = mat[i_y][i_x]*mat[i_y][i_x+1]*mat[i_y][i_x+2]*mat[i_y][i_x+3];
					horizontal_product_left = mat[i_y][i_x]*mat[i_y][i_x-1]*mat[i_y][i_x-2]*mat[i_y][i_x-3];
				}
				if(i_x>=x-sum_ind) //we can only go left
				{
					horizontal_product_left = mat[i_y][i_x]*mat[i_y][i_x-1]*mat[i_y][i_x-2]*mat[i_y][i_x-3];
				}


				if(i_y<sum_ind) //we can only go down
				{
					vertical_product_down = mat[i_y][i_x]*mat[i_y+1][i_x]*mat[i_y+2][i_x]*mat[i_y+3][i_x];
				}
				if(i_y>=sum_ind && i_y<y-sum_ind) //we can go up and down
				{
					vertical_product_down = mat[i_y][i_x]*mat[i_y+1][i_x]*mat[i_y+2][i_x]*mat[i_y+3][i_x];
					vertical_product_up = mat[i_y][i_x]*mat[i_y-1][i_x]*mat[i_y-2][i_x]*mat[i_y-3][i_x];
				}
				if(i_y>=y-sum_ind) //we can only go up
				{
					vertical_product_up = mat[i_y][i_x]*mat[i_y-1][i_x]*mat[i_y-2][i_x]*mat[i_y-3][i_x];
				}


				if(i_y<sum_ind && i_x<sum_ind) //we can only go down, right
				{
					diag_right_product_down = mat[i_y][i_x]*mat[i_y+1][i_x+1]*mat[i_y+2][i_x+2]*mat[i_y+3][i_x+3];

				}
				if(i_y>=sum_ind && i_x>=sum_ind && i_y<y-sum_ind && i_x<x-sum_ind) //down, up right left
				{
					diag_right_product_down = mat[i_y][i_x]*mat[i_y+1][i_x+1]*mat[i_y+2][i_x+2]*mat[i_y+3][i_x+3];
					diag_right_product_up = mat[i_y][i_x]*mat[i_y-1][i_x+1]*mat[i_y-2][i_x+2]*mat[i_y-3][i_x+3];
					diag_left_product_down = mat[i_y][i_x]*mat[i_y+1][i_x-1]*mat[i_y+2][i_x-2]*mat[i_y+3][i_x-3];
					diag_left_product_up = mat[i_y][i_x]*mat[i_y-1][i_x-1]*mat[i_y-2][i_x-2]*mat[i_y-3][i_x-3];
				}
				if(i_y>=y-sum_ind)//up right
				{
					diag_right_product_up = mat[i_y][i_x]*mat[i_y-1][i_x+1]*mat[i_y-2][i_x+2]*mat[i_y-3][i_x+3];
				}
				if(i_x>=x-sum_ind)//down left
				{
					diag_left_product_down = mat[i_y][i_x]*mat[i_y+1][i_x-1]*mat[i_y+2][i_x-2]*mat[i_y+3][i_x-3];
				}


				if(diag_right_product_down>diag_right_product_up)
					total_max = diag_right_product_down;
				else
					total_max = diag_right_product_up;

				if(diag_left_product_down>total_max)
					total_max = diag_left_product_down;

				if(diag_left_product_up>total_max)
					total_max = diag_left_product_up;

				if(horizontal_product_right>total_max)
					total_max = horizontal_product_right;

				if(horizontal_product_left>total_max)
					total_max = horizontal_product_left;

				if(vertical_product_down>total_max)
					total_max = vertical_product_down;

				if(vertical_product_up>total_max)
					total_max = vertical_product_up;

				 diag_right_product_down = 1;
				 diag_right_product_up = 1;
				 diag_left_product_down = 1;
				 diag_left_product_up = 1;
				 horizontal_product_right = 1;
				 horizontal_product_left = 1;
				 vertical_product_down = 1;
				 vertical_product_up = 1;
			}
		}
	std::cout << total_max << std::endl;
	return 0;
}

//7 x 9

//first one is down
//second one is across

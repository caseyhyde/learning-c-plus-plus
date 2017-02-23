#include <iostream>



int main()
{
	int height = 30;
	int width = 30;	
	int grid[width][height];

	for(int i = 0; i < height; i ++)
	{	
		for(int j = 0; j < width; j ++)
		{
			grid[i][j] = 0;
			std::cout << grid[i][j] << " ";		
		}
		std::cout << "\n"; 
	}

return 0;	
}

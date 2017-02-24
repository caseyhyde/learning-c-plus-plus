#include <iostream>

int height = 30;
int width = 30;	
int anotherFunction()
{
	//code goes here
	for(int i = 0; i < 100; i ++)
	{
			  std::cout << i << "\n";
	}
	return 0;
}

int main()
{
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
anotherFunction();
return 0;	
}

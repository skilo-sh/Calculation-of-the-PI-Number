#include <iostream>
#include <random>

int random_number (int min, int max);
int is_on_circle (int x, int y);

int main() {

	int inside_counter = 0;
	int total_counter = 0;

	for(int i = 0; i < 150'000'000; i++)
	{
		int coordonne_x = random_number(1, 100) - 50;
		int coordonne_y = random_number(1, 100) - 50;

		if(is_on_circle(coordonne_x, coordonne_y))
			inside_counter++;
		total_counter++;
	}

	float PI = float(inside_counter) / float(total_counter) * 4;
	std::cout << "Voici la valeure trouvée : " << PI << std::endl;

	return 0;
}

int random_number (int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(min, max);
  
	return dis(gen);
}

int is_on_circle (int x, int y)
{
	float distance_au_centre = std::sqrt((x)*(x) + (y)*(y));
	return (distance_au_centre <= 50) ? true : false;
}

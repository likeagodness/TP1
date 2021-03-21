#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class map  //класс карты
{
private:
	const int HEIGHT_MAP = 15; //высота карты
	const int WIDTH_MAP = 19; //ширина карты


	sf::Texture mTexture; //текстура - tileset дл€ карты, из которой она будет строитьс€
	sf::Sprite mSprite; //спрайт карты, а именно еЄ тайла

public:

	map(); //объ€вление конструктора карты без параметров

	
	const char get_tile(const int i, const int j) //функци€, возвращающа€ символ тайла карты по координатам (i, j)
	{ 
		return TileMap[i][j]; 
	}

	void draw(sf::RenderWindow& window);  //объ€вление функции вывода на экран сообщени€, в качестве аргумента использует адрес объекта 'window' дл€ использовани€ его метода 'draw'

	~map();
};
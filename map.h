#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class map  //����� �����
{
private:
	const int HEIGHT_MAP = 15; //������ �����
	const int WIDTH_MAP = 19; //������ �����


	sf::Texture mTexture; //�������� - tileset ��� �����, �� ������� ��� ����� ���������
	sf::Sprite mSprite; //������ �����, � ������ � �����

public:

	map(); //���������� ������������ ����� ��� ����������

	
	const char get_tile(const int i, const int j) //�������, ������������ ������ ����� ����� �� ����������� (i, j)
	{ 
		return TileMap[i][j]; 
	}

	void draw(sf::RenderWindow& window);  //���������� ������� ������ �� ����� ���������, � �������� ��������� ���������� ����� ������� 'window' ��� ������������� ��� ������ 'draw'

	~map();
};
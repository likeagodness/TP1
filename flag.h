#pragma once
#include <SFML/Graphics.hpp>

class flag  //класс флага, который захватывает игрок
{
private:
	sf::Texture mTexture; //его текстура

public:
	sf::Sprite mSprite; //его спрайт
	char captureStatus; //символьна€ переменна€, отвечающа€ за то, захвачен он, или нет

	flag(); //объ€вление еЄ конструктора без параметров
	~flag(); //объ€вление деструктора
};
#include <iostream>
#include <flag.h>

flag::flag():captureStatus('0')  //определение конструктора, устанавливаем life
{
	mTexture.loadFromFile("Textures/flag.png"); //загружаем текстуру башни из папки Textures, файла flag.png
	mSprite.setTexture(mTexture); //устанавливаем спрайт из текстуры
	mSprite.setPosition(576, 448); //устанавливаем в позицию на карте
}

flag::~flag() //определение деструктора 
{
	std::cout << "Flag destroyed\n"; //проверка удаления объекта класса - печать в консоль
}
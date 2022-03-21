#pragma once
#include <iostream>
#include <cstdlib>
#include<Windows.h>

class Game {

private:
	int height_;
	int width_;
	int speed_;

	char** matrix_;

	void checkCell(int heightIndex, int wigthIndex);

	void clearMatrix();

	void changeMatrix();

	void print();

	void play();

public:
	
	void start(int heighSize, int widthSize);

	~Game();

};
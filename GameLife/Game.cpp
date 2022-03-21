#include "Game.h"

void Game::checkCell(int heightIndex, int widthIndex)
{
	int lifeNeibor = 0;

	//Central

	if (heightIndex != 0 && heightIndex != height_ && widthIndex != 0 && widthIndex != width_) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex - 1] == '*' || matrix_[heightIndex - 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex + 1] == '*' || matrix_[heightIndex + 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex - 1] == '*' || matrix_[heightIndex + 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex + 1] == '*' || matrix_[heightIndex - 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
	}
	//Left-up
	else if (heightIndex == 0 && widthIndex == 0) {
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex + 1] == '*' || matrix_[heightIndex + 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][width_] == '*' || matrix_[heightIndex][width_] == '#');
		lifeNeibor += (matrix_[height_][widthIndex] == '*' || matrix_[height_][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][width_] == '*' || matrix_[heightIndex + 1][width_] == '#');
		lifeNeibor += (matrix_[height_][widthIndex + 1] == '*' || matrix_[height_][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[height_][width_] == '*' || matrix_[height_][width_] == '#');
	}
	//Right-up
	else if (heightIndex == 0 && widthIndex == width_) {
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex - 1] == '*' || matrix_[heightIndex + 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[height_][widthIndex] == '*' || matrix_[height_][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][0] == '*' || matrix_[heightIndex][0] == '#');
		lifeNeibor += (matrix_[height_][0] == '*' || matrix_[height_][0] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][0] == '*' || matrix_[heightIndex + 1][0] == '#');
		lifeNeibor += (matrix_[height_][widthIndex - 1] == '*' || matrix_[height_][widthIndex - 1] == '#');
	}
	//Left-down
	else if (widthIndex == 0 && heightIndex == height_) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex + 1] == '*' || matrix_[heightIndex - 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][width_] == '*' || matrix_[heightIndex][width_] == '#');
		lifeNeibor += (matrix_[0][widthIndex] == '*' || matrix_[0][widthIndex] == '#');
		lifeNeibor += (matrix_[0][width_] == '*' || matrix_[0][width_] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][width_] == '*' || matrix_[heightIndex - 1][width_] == '#');
		lifeNeibor += (matrix_[0][widthIndex + 1] == '*' || matrix_[0][widthIndex + 1] == '#');
	}
	//Right-down
	else if (heightIndex == height_ && widthIndex == width_) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex - 1] == '*' || matrix_[heightIndex - 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[0][0] == '*' || matrix_[0][0] == '#');
		lifeNeibor += (matrix_[heightIndex][0] == '*' || matrix_[heightIndex][0] == '#');
		lifeNeibor += (matrix_[0][widthIndex] == '*' || matrix_[0][widthIndex] == '#');
		lifeNeibor += (matrix_[0][widthIndex - 1] == '*' || matrix_[0][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][0] == '*' || matrix_[heightIndex - 1][0] == '#');
	}
	//Left
	else if (widthIndex == 0) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex + 1] == '*' || matrix_[heightIndex - 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex + 1] == '*' || matrix_[heightIndex + 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex][width_] == '*' || matrix_[heightIndex][width_] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][width_] == '*' || matrix_[heightIndex - 1][width_] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][width_] == '*' || matrix_[heightIndex + 1][width_] == '#');
	}
	//Right
	else if (widthIndex == width_) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex - 1] == '*' || matrix_[heightIndex - 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex - 1] == '*' || matrix_[heightIndex + 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][0] == '*' || matrix_[heightIndex][0] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][0] == '*' || matrix_[heightIndex - 1][0] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][0] == '*' || matrix_[heightIndex + 1][0] == '#');
	}
	//Up
	else if (heightIndex == 0) {
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex + 1] == '*' || matrix_[heightIndex + 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex - 1] == '*' || matrix_[heightIndex + 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex + 1][widthIndex] == '*' || matrix_[heightIndex + 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[height_][widthIndex] == '*' || matrix_[height_][widthIndex] == '#');
		lifeNeibor += (matrix_[height_][widthIndex - 1] == '*' || matrix_[height_][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[height_][widthIndex + 1] == '*' || matrix_[height_][widthIndex + 1] == '#');
	}
	//Down
	else if (heightIndex == height_) {
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex - 1] == '*' || matrix_[heightIndex - 1][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex] == '*' || matrix_[heightIndex - 1][widthIndex] == '#');
		lifeNeibor += (matrix_[heightIndex - 1][widthIndex + 1] == '*' || matrix_[heightIndex - 1][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex - 1] == '*' || matrix_[heightIndex][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[heightIndex][widthIndex + 1] == '*' || matrix_[heightIndex][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[0][widthIndex - 1] == '*' || matrix_[0][widthIndex - 1] == '#');
		lifeNeibor += (matrix_[0][widthIndex + 1] == '*' || matrix_[0][widthIndex + 1] == '#');
		lifeNeibor += (matrix_[0][widthIndex] == '*' || matrix_[0][widthIndex] == '#');

	}

	if (matrix_[heightIndex][widthIndex] == '.') {
		if (lifeNeibor == 3)
			matrix_[heightIndex][widthIndex] = ',';
	}
	else {
		if (lifeNeibor != 2 && lifeNeibor != 3)
			matrix_[heightIndex][widthIndex] = '#';
	}
}

void Game::clearMatrix()
{
	for (int heighIndex = 0; heighIndex <= height_; heighIndex++) {
		for (int widthIndex = 0; widthIndex <= width_; widthIndex++) {
			if (matrix_[heighIndex][widthIndex] == '#')
				matrix_[heighIndex][widthIndex] = '.';
			if (matrix_[heighIndex][widthIndex] == ',')
				matrix_[heighIndex][widthIndex] = '*';
		}
	}
}

void Game::changeMatrix()
{
	for (int heighIndex = 0; heighIndex <= height_; heighIndex++) {
		for (int widthIndex = 0; widthIndex <= width_; widthIndex++) {
			checkCell(heighIndex, widthIndex);
		}
	}
	clearMatrix();
}

void Game::print()
{

	for (int i = 0; i <= height_; i++) {
		for (int j = 0; j <= width_; j++) {
			std::cout << matrix_[i][j];
		}std::cout << '\n';
	}

}

void Game::play()
{

	system("cls");

	while (true) {
		print();

		Sleep(speed_);

		changeMatrix();

		system("cls");
	}

}

void Game::start(int heightSize, int widthSize)
{


	std::cout << "Enter a game speed in milliseconds:\n";

	std::cin >> speed_;

	std::cout << "Enter a game matrix:\n";

	height_ = heightSize-1;
	width_ = widthSize-1;

	matrix_ = new char*[heightSize];
	for (int index = 0; index < heightSize; index++) {
		matrix_[index] = new char[widthSize];
	}
	for (int heightIndex = 0; heightIndex < heightSize; heightIndex++)
		for (int widthIndex = 0; widthIndex < widthSize; widthIndex++)
			std::cin >> matrix_[heightIndex][widthIndex];

	play();

}

Game::~Game()
{
	for (int index = 0; index <= width_; index++)
		delete[] matrix_[index];
	delete[] matrix_;
}

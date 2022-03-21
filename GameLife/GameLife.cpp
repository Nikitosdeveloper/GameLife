#include <iostream>
#include "Game.h"
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	
	Game game;

	game.start(n,m);

	return 0;
}
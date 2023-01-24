#include "Enemy.h"
#include <stdio.h>

int Enemy::aliveFlag;

int main() {
	Enemy* enemy1 = new Enemy();
	Enemy* enemy2 = new Enemy();
	Enemy* enemy3 = new Enemy();

	int input;

	while (true) {
		enemy1->Draw();
		enemy2->Draw();
		enemy3->Draw();
		//“ü—Íˆ—
		printf("0 : exit  1 : continue ==> ");
		scanf_s("%d", &input);
		//1‚ª‰Ÿ‚³‚ê‚½‚ç“G1‚ª“|‚ê‚é(“G2A3‚à“|‚ê‚é)
		if (input == 1) {
			enemy1->Update();
		}
		//0‚ª‰Ÿ‚³‚ê‚½‚çƒ‹[ƒv‚©‚ç”²‚¯‚é(I—¹)
		if (input == 0) {
			break;
		}
	}
	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}
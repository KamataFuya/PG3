#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	aliveFlag = 1;
}

Enemy::~Enemy() {}


void Enemy::Update(){
	aliveFlag = 0;
}

void Enemy::Draw(){
	if (aliveFlag == 1) {
		printf("(enemy draw)\n");
	}
}
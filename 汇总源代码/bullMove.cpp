#include"bullMove.h"
void bullMove() {
	if (!Timer(20, 4)) {
		return;
	}
	Bullet* frontBull = my_bull->bullet_next;
	while (frontBull != nullptr) {
		frontBull->bullet_pos.y -= 5;
		frontBull = frontBull->bullet_next;
	}
}
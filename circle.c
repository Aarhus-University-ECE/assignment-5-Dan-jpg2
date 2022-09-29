#include <stdbool.h>
#include "circle.h"
#include <stdlib.h>
#include <stdio.h>

circle[5];	

void fiveCircles(circle c[]) {
for(int i; i<5; i++){
	c[i].p.x = i; 
	c[i].p.y = i; 
	c[i].r = i; 
	}
}

int circleIsValid(const circle * c) {
if((c->r) > 0){
	return true;
} else {
	return false;
	}
}

void translate(circle* c, const point* p) {
c->p.x = (c->p.x) + (p->x);
c->p.y = (c->p.y) + (p->y); 
}




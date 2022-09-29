#include <stdbool.h>
#include "circle.h"
#include <stdlib.h>
#include <stdio.h>

circle c[5];	
//returns an array with five circles - solution to 6.b
void fiveCircles(circle c[]) {
for(int i; i<5; i++){
	c[i].p.x = i; //value of x at the point of i
	c[i].p.y = i; // value of y at the poit of i
	c[i].r = i;  //value of radius at the point of i
	}
}
//answer to exercise 6.c
// cheking if the value of circle is valid. when the radius is bigger than 0
bool circleIsValid(const circle * c) {
if((c->r) > 0){
	return true;
} else {
	return false;
	}
}
// Answer to 6.d
// take value of c pointer and p pointer value and makes the c->p.x value that
void translate(circle* c, const point* p) {
c->p.x = (c->p.x) + (p->x);
c->p.y = (c->p.y) + (p->y); 

}




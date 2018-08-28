/*
 * Box.h
 *
 *  Created on: 2018. 8. 28.
 *      Author: daum
 */

#ifndef BOX_H_
#define BOX_H_

class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h) { setSize(w,h); fill = '*'; }
	void setFill(char f) { fill = f; }
	void setSize(int w, int h) { width = w; height = h; }
	void draw();
};

#endif /* BOX_H_ */

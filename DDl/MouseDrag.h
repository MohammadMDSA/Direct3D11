#ifndef _MOUSE_DRAG_H_
#define _MOUSE_DRAG_H_

struct Point
{
	float x;
	float y;
};

class MouesDrag
{
public:
	MouesDrag();
	~MouesDrag();

	Point GetStartPoint();

private:
	Point startPoint;

};

#endif // !_MOUSE_DRAG_H_

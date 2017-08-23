#ifndef _MOUSE_INPUT_H_
#define _MOUSE_INPUT_H_

#include <Windows.h>

class MouseInput
{
public:
	MouseInput();
	~MouseInput();

	Point GetCurrentLocation();
	void SetCurrentLocation(int, int);
	void Press(int, int);
	void Release();

private:
	Point currentLocation;
	Point dragLocation;
	bool pressed;

};

typedef struct Point {
	int X;
	int Y;
};

#endif // !_MOUSE_INPUT_H_
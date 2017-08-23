#include "MouseInput.h"

MouseInput::MouseInput() : pressed(false)
{
	currentLocation.X = 0;
	currentLocation.Y = 0;
	dragLocation.X = -1;
	dragLocation.Y = -1;
}


MouseInput::~MouseInput()
{
}

Point MouseInput::GetCurrentLocation()
{
	return currentLocation;
}

void MouseInput::SetCurrentLocation(int x, int y)
{
	currentLocation.X = x;
	currentLocation.Y = y;
}

void MouseInput::Press(int x, int y)
{
	pressed = true;
	dragLocation.X = currentLocation.X;
	dragLocation.Y = currentLocation.Y;
}

void MouseInput::Release()
{
	pressed = false;
	dragLocation.X = -1;
	dragLocation.Y = -1;
}

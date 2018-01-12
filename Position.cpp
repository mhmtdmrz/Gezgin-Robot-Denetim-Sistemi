#include "Position.h"
Position::Position(float x, float y, float th) 
{	
	this->x = x;
	this->y = y;
	this->th = th;
}
float Position::getX()
{
	return x;
}
void Position::setX(float X)
{
	x = X;
}
void Position::setY(float Y)
{
	y= Y;
}
float Position::getY()
{
	return y;
}
void Position::setTh(float Th)
{
	th = Th;
}
float Position::getTh()
{
	return th;
}
bool Position::operator==(const Position &pos)
{	
	if (x == pos.x && y == pos.y && th == pos.th)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

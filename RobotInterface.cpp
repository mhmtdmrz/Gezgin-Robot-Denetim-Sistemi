#include "RobotInterface.h"

void RobotInterface::setSensor(RangeSensor * sensor)
{
	rangeSensor = sensor;
}
void RobotInterface::setPosition(Position * position)
{
	this->position = position;
}

#include "PioneerRobotInterface.h"
void PioneerRobotInterface::update()
{
	updateRobot();
}
bool PioneerRobotInterface::open()
{	
	return connect();
}
bool PioneerRobotInterface::close()
{
	return disconnect();
}
void PioneerRobotInterface::move(float speed)
{
	moveRobot(speed);
}
void PioneerRobotInterface::turn(RobotInterface::DIRECTION dir)
{
	if (dir == RobotInterface::DIRECTION::left)
	{
		turnRobot(PioneerRobotAPI::left);
	}
	if (dir == RobotInterface::DIRECTION::right)
	{
		turnRobot(PioneerRobotAPI::right);
	}
	if (dir == RobotInterface::DIRECTION::forward)
	{
		turnRobot(PioneerRobotAPI::forward);
	}
}
void PioneerRobotInterface::stop()
{
	stopRobot();
}
void PioneerRobotInterface::updateRobot()
{
	float myx, myy, myth;
	float a[16];
	myx = getX();
	myy = getY();
	myth = getTh();
	position->setX(myx);
	position->setY(myy);
	position->setTh(myth);
	getSonarRange(a);
	rangeSensor->updateSensor(a);
}

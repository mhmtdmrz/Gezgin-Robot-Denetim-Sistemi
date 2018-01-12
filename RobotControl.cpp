#include "RobotControl.h"
#include <iostream>
#include<Windows.h>
using namespace std;
RobotControl::RobotControl(Position *pos, RobotInterface *robot, RangeSensor *sens)
{	
	position = pos;
	sensor.push_back(sens);
	robotinterface = robot;
	robotinterface->setPosition(position);
	robotinterface->setSensor(sensor[0]);
	robotinterface->update();
}
bool RobotControl::connect()
{
	if (robotinterface->open())
	{
		robotinterface->update();
		return true;
	}
	else
	{
		return false;
	}
}
bool RobotControl::disconnect()
{
	if (robotinterface->close())
	{		
		return true;
	}
	else
	{
		return false;
	}
}
void RobotControl::safeMove(int speed)
{
	robotinterface->move(speed);		
}
void RobotControl::turnLeft()
{
	robotinterface->turn(RobotInterface::left);
}
void RobotControl::turnRight()
{
	robotinterface->turn(RobotInterface::right);
}
void RobotControl::forward()
{
	robotinterface->turn(RobotInterface::forward);
}
void RobotControl::print()
{
	cout << "MyPose is (" << position->getX() << "," << position->getY() << "," << position->getTh() << ")" << endl;
	cout << "Sonar ranges are [ ";
	for (int i = 0; i < 16; i++) 
	{
		cout << sensor[0]->getRange(i) << " ";
	}
	cout << "]" << endl;	
	cout << "Min: " << sensor[0]->getMin() << ", Max: " << sensor[0]->getMax() << endl;
}
void RobotControl::moveDistance(float distance)
{
	float t;
	t = ((distance) / 200) * 100000;
	robotinterface->move(200);
	Sleep(t);
	robotinterface->stop();
}
void RobotControl::closeWall()
{
	while (sensor[0]->getRange(3) > 750 && sensor[0]->getRange(4) > 750)
	{
		robotinterface->move(200);
	}
	print();
	robotinterface->stop();
}
void RobotControl::stop()
{
	robotinterface->stop();
}

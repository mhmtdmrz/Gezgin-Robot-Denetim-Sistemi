#pragma once
#include "Position.h"
#include "RangeSensor.h"
/*!
*  \brief     RobotInterface S�n�f�
*  \details   Mesafe �l�en farkl� tip sens�rler i�in aray�z olu�turur.
*  \author    Seda Nur �ZG�R
*  \version   1.0
*  \date      27.12.2017
*/
using namespace std;
class RobotInterface
{
public:
	/**
	\enum <DIRECTION>
	*\brief Robotun Y�nlerini belirtmede kullan�ld�.
	*/
	enum DIRECTION
	{
		left = -1,
		forward = 0,
		right = 1
	};
	/**
	*\brief Sens�r Belirleme Fonksiyonu
	*
	*\brief Sens�r bilgisini al�r.
	*\param sensor: Robota ait sens�r bilgisidir.
	*/
	void setSensor(RangeSensor*);
	/**
	*\brief Pozisyon Belirleme Fonksiyonu
	*
	*\brief Robotun pozisyonuna atama yapmak i�in kullan�l�r.
	*\param position: Robotun posisyonudur.
	*/
	void setPosition(Position*);
	virtual void update() = 0;
	/**
	*\pure
	*/
	virtual bool open() = 0;
	/**
	*\pure
	*/
	virtual bool close() = 0;
	/**
	*\pure
	* \param speed:Robotun h�z�d�r.Float de�er olmal�d�r.
	*/
	virtual void move(float) = 0;
	/**
	*\pure
	* \param dir:Robotun d�nme y�n�d�r.Direction tipinde olmal�d�r.
	*/
	virtual void turn(DIRECTION) = 0;
	/**
	*\pure
	*/
	virtual void stop() = 0;
protected:
	Position* position;
	RangeSensor* rangeSensor;
};
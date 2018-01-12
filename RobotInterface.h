#pragma once
#include "Position.h"
#include "RangeSensor.h"
/*!
*  \brief     RobotInterface Sýnýfý
*  \details   Mesafe ölçen farklý tip sensörler için arayüz oluþturur.
*  \author    Seda Nur ÖZGÜR
*  \version   1.0
*  \date      27.12.2017
*/
using namespace std;
class RobotInterface
{
public:
	/**
	\enum <DIRECTION>
	*\brief Robotun Yönlerini belirtmede kullanýldý.
	*/
	enum DIRECTION
	{
		left = -1,
		forward = 0,
		right = 1
	};
	/**
	*\brief Sensör Belirleme Fonksiyonu
	*
	*\brief Sensör bilgisini alýr.
	*\param sensor: Robota ait sensör bilgisidir.
	*/
	void setSensor(RangeSensor*);
	/**
	*\brief Pozisyon Belirleme Fonksiyonu
	*
	*\brief Robotun pozisyonuna atama yapmak için kullanýlýr.
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
	* \param speed:Robotun hýzýdýr.Float deðer olmalýdýr.
	*/
	virtual void move(float) = 0;
	/**
	*\pure
	* \param dir:Robotun dönme yönüdür.Direction tipinde olmalýdýr.
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
#pragma once
#include<iostream>
#include<string>
using namespace std;
/*!
*  \brief     RangeSensor Sýnýfý
*  \details   Mesafe ölçen farklý tip sensörler için arayüz oluþturur.
*  \author    Buse ÖZGÜÇLÜ
*  \version   1.1
*  \date      26.12.2017
*/
class RangeSensor
{
public:
	/**
	*\pure 
	*/
	virtual void updateSensor(float [])=0;
	/**
	*\pure
	*/
	virtual float getMin()=0;
	/**
	*\pure
	*/
	virtual float getMax()=0;
	/**
	*\pure
	*/
	virtual float getRange(int)=0;
	/**
	*\pure
	*/
	virtual float operator[](int)=0;
};

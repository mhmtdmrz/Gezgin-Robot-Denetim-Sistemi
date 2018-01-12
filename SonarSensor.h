#pragma once
#include<iostream>
#include "RangeSensor.h"
/*!
*  \brief     SonarSensor S�n�f�
*  \details   Mesafe �l�en farkl� tip sens�rler i�in aray�z olu�turur.
*  \author    Buse �ZG��L�
*  \version   1.0
*  \date      26.12.2017
*/
class SonarSensor:public RangeSensor
{
private:
	float ranges[16];
	float min;
	float max;
public:
	/**
	*\brief Sens�r�n Mesafe Bilgisini Veren Fonksiyon
	*@param index: Bilgi al�nmak istenen de�er
	*\return ranges[index]: �stenen indeksteki sens�r de�erini d�nd�r�r.

	*/
	float getRange(int);
	/**
	*\brief Range Sens�r Atama Fonksiyonu
	*\param range[]: Atanmas�n� istedi�imiz sens�r bilgileri
	*/
	void setRange(float[]);
	/**
	*\brief Maksimum De�er D�nd�rme Fonksiyonu
	*\return max: Maksimum de�eri hesaplayarak d�nd�r�r.
	*/
	float getMax();
	/**
	*\brief Minimum De�er D�nd�rme Fonksiyonu
	*\return min: Minimum de�eri hesaplayarak d�nd�r�r.
	*/
	float getMin();
	/**
	*\brief Sens�r G�ncelleme Fonksiyonu
	*@param range[]: g�ncellenmek istenen sens�r bilgileri
	*Sens�r mesafe de�erlerini, parametre ranges ile verilen de�erle ile
	*g�nceller.
	*/
	void updateSensor(float[]);
	/**
	*brief De�er D�nd�rme Fonksiyonu
	@param i: Bilgi al�nmak istenen de�er
	*�ndeksi verilen sens�r de�erini d�nd�r�r. getRange(i) ile benzer fonksiyonu ger�ekler.
	*/
	float operator[](int);

};
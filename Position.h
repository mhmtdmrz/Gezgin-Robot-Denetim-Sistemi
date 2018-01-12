#pragma once
#include<iostream>
/*!
*  \brief     Position Sýnýfý
*  \details   Robotun konum bilgilerini tutma ve yönetme görevine sahiptir. 
*  \author    Kübra ÖZTÜRK
*  \version   1.0
*  \date      27.12.2017
*/
class Position
{
private:
	float x;
	float y;
	float th;
public:
	/**
	*\brief Position Sýnýfý Yapýcý Fonksiyonu
	*\param x: Varsayýlan x deðeri
	*\param y: Varsayýlan y deðeri
	*\param th: Varsayýlan th deðeri
	*/
	Position(float=0, float=0, float=0);
	/**
	*\brief X Deðerini Döndüren Fonksiyon
	*\return x
	*/
	float getX();
	/**
	*\brief X Parametresine Deðer Atayan Fonksiyon
	*\param x: x koordinatýndaki konumu
	*/
	void setX(float);
	/**
	*\brief Y Parametresine Deðer Atayan Fonksiyon
	*\param y: y koordinatýndaki konumu
	*/
	void setY(float);
	/**
	*\brief Y Deðerini Döndüren Fonksiyon
	*\return y
	*/
	float getY();
	/**
	*\brief TH Parametresine Deðer Atayan Fonksiyon
	*\param th: Orijine olan açýsýný belirtir.
	*/
	void setTh(float);
	/**
	*\brief TH Deðerini Döndüren Fonksiyon
	*\return th
	*/
	float getTh();
	/**
	*\brief Eþitlik Fonksiyonu
	*\param pos: karþýlaþtýracak olduðumuz pozisyon
	*Koordinatlar ve açý durumuna göre eþitliði kontrol eder.
	*\return true: eþit ise
	*\return false: eþitlik saðlanmadý ise
	*/
	bool operator==(const Position&);
};
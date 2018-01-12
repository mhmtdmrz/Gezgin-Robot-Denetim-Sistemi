#pragma once
#include<iostream>
/*!
*  \brief     Position S�n�f�
*  \details   Robotun konum bilgilerini tutma ve y�netme g�revine sahiptir. 
*  \author    K�bra �ZT�RK
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
	*\brief Position S�n�f� Yap�c� Fonksiyonu
	*\param x: Varsay�lan x de�eri
	*\param y: Varsay�lan y de�eri
	*\param th: Varsay�lan th de�eri
	*/
	Position(float=0, float=0, float=0);
	/**
	*\brief X De�erini D�nd�ren Fonksiyon
	*\return x
	*/
	float getX();
	/**
	*\brief X Parametresine De�er Atayan Fonksiyon
	*\param x: x koordinat�ndaki konumu
	*/
	void setX(float);
	/**
	*\brief Y Parametresine De�er Atayan Fonksiyon
	*\param y: y koordinat�ndaki konumu
	*/
	void setY(float);
	/**
	*\brief Y De�erini D�nd�ren Fonksiyon
	*\return y
	*/
	float getY();
	/**
	*\brief TH Parametresine De�er Atayan Fonksiyon
	*\param th: Orijine olan a��s�n� belirtir.
	*/
	void setTh(float);
	/**
	*\brief TH De�erini D�nd�ren Fonksiyon
	*\return th
	*/
	float getTh();
	/**
	*\brief E�itlik Fonksiyonu
	*\param pos: kar��la�t�racak oldu�umuz pozisyon
	*Koordinatlar ve a�� durumuna g�re e�itli�i kontrol eder.
	*\return true: e�it ise
	*\return false: e�itlik sa�lanmad� ise
	*/
	bool operator==(const Position&);
};
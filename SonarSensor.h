#pragma once
#include<iostream>
#include "RangeSensor.h"
/*!
*  \brief     SonarSensor Sýnýfý
*  \details   Mesafe ölçen farklý tip sensörler için arayüz oluþturur.
*  \author    Buse ÖZGÜÇLÜ
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
	*\brief Sensörün Mesafe Bilgisini Veren Fonksiyon
	*@param index: Bilgi alýnmak istenen deðer
	*\return ranges[index]: Ýstenen indeksteki sensör deðerini döndürür.

	*/
	float getRange(int);
	/**
	*\brief Range Sensör Atama Fonksiyonu
	*\param range[]: Atanmasýný istediðimiz sensör bilgileri
	*/
	void setRange(float[]);
	/**
	*\brief Maksimum Deðer Döndürme Fonksiyonu
	*\return max: Maksimum deðeri hesaplayarak döndürür.
	*/
	float getMax();
	/**
	*\brief Minimum Deðer Döndürme Fonksiyonu
	*\return min: Minimum deðeri hesaplayarak döndürür.
	*/
	float getMin();
	/**
	*\brief Sensör Güncelleme Fonksiyonu
	*@param range[]: güncellenmek istenen sensör bilgileri
	*Sensör mesafe deðerlerini, parametre ranges ile verilen deðerle ile
	*günceller.
	*/
	void updateSensor(float[]);
	/**
	*brief Deðer Döndürme Fonksiyonu
	@param i: Bilgi alýnmak istenen deðer
	*Ýndeksi verilen sensör deðerini döndürür. getRange(i) ile benzer fonksiyonu gerçekler.
	*/
	float operator[](int);

};
#pragma once
#include "RobotInterface.h"
#include "Position.h"
#include "RangeSensor.h"
#include <vector>
#include<math.h>
/*!
*  \brief     RobotControl Sýnýfý
*  \details   Robot denetiminde kullanýlan bir sýnýftýr.
*  \author    Mehmet DEMÝRÖZ
*  \version   1.2
*  \date      29.12.2017
*/
class RobotControl
{
	vector <RangeSensor*> sensor;
	Position *position;
	RobotInterface *robotinterface;
public:
	/**
	*\brief Robot Control Sýnýfý Yapýcý Fonksiyonu
	*@param pos: Varsayýlan pozisyon bilgilerini atar.
	*@param rob: Oluþtuduðumuz robot nesnesi
	*@param sens: Oluþturduðumuz Sensör nesnesi
	*/
	RobotControl(Position * pos, RobotInterface *rob,RangeSensor *sens);
	/**
	*\brief Robot Baðlanma Fonksiyonu
	*
	*Robot ile simülatör arasýndaki baðlantýyý kurar.
	*/
	bool connect();
	/**
	*\brief Robot Baðlantý Koparma Fonksiyonu
	*
	*Robot ile simülatör arasýndaki baðlantýyý yýkar.
	*/
	bool disconnect();
	/**
	*\brief Güvenli Hareket Fonksiyonu
	*\param speed: Hareket etme hýzý ( Float deðer olmalý )
	*Bu fonksiyon, istenen hýzda robotun ilerlemesini saðlar. Ancak, robotun önünde
	*engel varsa ilerlemesini durdurur.
	*/
	void safeMove(int speed);
	/**
	*\brief Sola Dönme Fonksiyonu
	*/
	void turnLeft();
	/**
	*\brief Saða Dönme Fonksiyonu
	*/
	void turnRight();
	/** 
	*\brief Düz Gitme Fonksiyonu
	*/
	void forward();
	/**
	*\brief Robot Bilgilerini Yazdýrma Fonksiyonu
	*
	*Robotun konumunu ve sensor deðerlerini ekrana belli bir formatta yazdýrýr.
	*/
	void print();
	/**
	*\brief Ýstenen Mesafe Kadar Hareket Etme Fonksiyonu
	*\param distance: Hareket etme mesafesi
	*Robotun verilen mesafe kadar gitmesini, mesafeyi katettikten sonra
	*durmasýný saðlar.
	*/
	void moveDistance(float distance);
	/**
	*\brief Duvara Belirli Mesafe Kala Durma Fonksiyonu
	*
	*Robot düz gider ve bir duvara belli bir uzaklýða geldiðinde durur.
	*/
	void closeWall();
	/**
	*\brief Robot Durdurma Fonksiyonu
	*/
	void stop();
};


#pragma once
#include "RobotInterface.h"
#include "PioneerRobotAPI.h"
/*!
*  \brief     PioneerRobotInterface Sýnýfý
*  \details   Tasarýmýmýza arayüz saðlamaktadýr
*  \author    Ayþegül YILMAZER
*  \version   1.1
*  \date      27.12.2017
*/
class PioneerRobotInterface :public RobotInterface, public PioneerRobotAPI
{
public:
	/*
	*\brief Robot Güncelleme Fonksiyonu
	*
	*Konum ve sensör bilgilerinin güncellenmesinde kullanýlmaktadýr.
	*/
	 void update();
	 /**
	 *\brief Robot Baðlanma Fonksiyonu
	 *
	 *Robot ile simülatör arasýndaki baðlantýyý kurar.
	 */
	 bool open();
	 /**
	 *\brief Robot Baðlantý Koparma Fonksiyonu
	 *
	 *Robot ile simülatör arasýndaki baðlantýyý yýkar.
	 */
	 bool close();
	 /**
	 *\brief Hareket Ettirme Fonksiyonu
	 *@param speed: Hareket etme hýzý ( Float deðer olmalý )
	 *Girilen hýzda robotun hareketini saðlar.
	 */
	 void move(float);
	 /**
	 *\brief Robot Döndürme Fonksiyonu
	 *@param dir: Robotun döndürülmesi istenen yön (RobotInterface::DIRECTION)
	 *Parametre olarak verilen yönde robotu döndürür.	
	 */
	 void turn(RobotInterface::DIRECTION);
	 /**
	 *\brief Robot Durdurma Fonksiyonu
	 */
	 void stop();
	 /*
	 *\brief Robot Güncelleme Fonksiyonu
	 *
	 *Konum ve sensör bilgilerinin güncellenmesinde kullanýlmaktadýr.
	 */
	 void updateRobot();
};


#pragma once
#include "RobotInterface.h"
#include "PioneerRobotAPI.h"
/*!
*  \brief     PioneerRobotInterface S�n�f�
*  \details   Tasar�m�m�za aray�z sa�lamaktad�r
*  \author    Ay�eg�l YILMAZER
*  \version   1.1
*  \date      27.12.2017
*/
class PioneerRobotInterface :public RobotInterface, public PioneerRobotAPI
{
public:
	/*
	*\brief Robot G�ncelleme Fonksiyonu
	*
	*Konum ve sens�r bilgilerinin g�ncellenmesinde kullan�lmaktad�r.
	*/
	 void update();
	 /**
	 *\brief Robot Ba�lanma Fonksiyonu
	 *
	 *Robot ile sim�lat�r aras�ndaki ba�lant�y� kurar.
	 */
	 bool open();
	 /**
	 *\brief Robot Ba�lant� Koparma Fonksiyonu
	 *
	 *Robot ile sim�lat�r aras�ndaki ba�lant�y� y�kar.
	 */
	 bool close();
	 /**
	 *\brief Hareket Ettirme Fonksiyonu
	 *@param speed: Hareket etme h�z� ( Float de�er olmal� )
	 *Girilen h�zda robotun hareketini sa�lar.
	 */
	 void move(float);
	 /**
	 *\brief Robot D�nd�rme Fonksiyonu
	 *@param dir: Robotun d�nd�r�lmesi istenen y�n (RobotInterface::DIRECTION)
	 *Parametre olarak verilen y�nde robotu d�nd�r�r.	
	 */
	 void turn(RobotInterface::DIRECTION);
	 /**
	 *\brief Robot Durdurma Fonksiyonu
	 */
	 void stop();
	 /*
	 *\brief Robot G�ncelleme Fonksiyonu
	 *
	 *Konum ve sens�r bilgilerinin g�ncellenmesinde kullan�lmaktad�r.
	 */
	 void updateRobot();
};


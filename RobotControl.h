#pragma once
#include "RobotInterface.h"
#include "Position.h"
#include "RangeSensor.h"
#include <vector>
#include<math.h>
/*!
*  \brief     RobotControl S�n�f�
*  \details   Robot denetiminde kullan�lan bir s�n�ft�r.
*  \author    Mehmet DEM�R�Z
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
	*\brief Robot Control S�n�f� Yap�c� Fonksiyonu
	*@param pos: Varsay�lan pozisyon bilgilerini atar.
	*@param rob: Olu�tudu�umuz robot nesnesi
	*@param sens: Olu�turdu�umuz Sens�r nesnesi
	*/
	RobotControl(Position * pos, RobotInterface *rob,RangeSensor *sens);
	/**
	*\brief Robot Ba�lanma Fonksiyonu
	*
	*Robot ile sim�lat�r aras�ndaki ba�lant�y� kurar.
	*/
	bool connect();
	/**
	*\brief Robot Ba�lant� Koparma Fonksiyonu
	*
	*Robot ile sim�lat�r aras�ndaki ba�lant�y� y�kar.
	*/
	bool disconnect();
	/**
	*\brief G�venli Hareket Fonksiyonu
	*\param speed: Hareket etme h�z� ( Float de�er olmal� )
	*Bu fonksiyon, istenen h�zda robotun ilerlemesini sa�lar. Ancak, robotun �n�nde
	*engel varsa ilerlemesini durdurur.
	*/
	void safeMove(int speed);
	/**
	*\brief Sola D�nme Fonksiyonu
	*/
	void turnLeft();
	/**
	*\brief Sa�a D�nme Fonksiyonu
	*/
	void turnRight();
	/** 
	*\brief D�z Gitme Fonksiyonu
	*/
	void forward();
	/**
	*\brief Robot Bilgilerini Yazd�rma Fonksiyonu
	*
	*Robotun konumunu ve sensor de�erlerini ekrana belli bir formatta yazd�r�r.
	*/
	void print();
	/**
	*\brief �stenen Mesafe Kadar Hareket Etme Fonksiyonu
	*\param distance: Hareket etme mesafesi
	*Robotun verilen mesafe kadar gitmesini, mesafeyi katettikten sonra
	*durmas�n� sa�lar.
	*/
	void moveDistance(float distance);
	/**
	*\brief Duvara Belirli Mesafe Kala Durma Fonksiyonu
	*
	*Robot d�z gider ve bir duvara belli bir uzakl��a geldi�inde durur.
	*/
	void closeWall();
	/**
	*\brief Robot Durdurma Fonksiyonu
	*/
	void stop();
};


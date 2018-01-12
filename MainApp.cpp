#include<iostream>
#include"RobotControl.h"
#include "RobotInterface.h"
#include "Position.h"
#include "PioneerRobotInterface.h"
#include "RangeSensor.h"
#include "SonarSensor.h"
#include<iomanip>
using namespace std;
int mainmenu() {
	int choose;
	cout << "+--------------------+" << endl
		<< "|     Main Menu" << setw(7) << "|" << endl
		<< "+--------------------+" << endl
		<< "|1. Connection" << setw(8) << "|" << endl
		<< "+--------------------+" << endl
		<< "|2. Motion"<< setw(12) << "|" << endl
		<< "+--------------------+" << endl
		<< "|3. Sensor" << setw(12)<< "|" << endl
		<< "+--------------------+" << endl
		<< "|4. Quit" << setw(14) << "|"  << endl
		<< "+--------------------+" << endl;
	cout << "Choose one : ";
	cin >> choose;
	return choose;
}
int Connection() {
	int choose;
	cout <<"+--------------------+" << endl
		<< "|   Connection Menu  |" << endl
		<< "+--------------------+" << endl
		<< "|1. Connect Robot" << setw(5) << "|" << endl
		<< "+--------------------+" << endl
		<< "|2. Disconnect Robot" << setw(2) << "|" << endl
		<< "+--------------------+" << endl
		<< "|3. Back" << setw(14) << "|" << endl
		<< "+--------------------+" << endl;
	cout << "Choose one : ";
	cin >> choose;
	return choose;
}
int Motion() {
	int choose;
	cout <<"+--------------------+" << endl
		<< "|     Motion Menu    |" << endl
		<< "+--------------------+" << endl
		<< "|1. Move robot" << setw(8) << "|" << endl
		<< "+--------------------+" << endl
		<< "|2. Safe Move Robot" << setw(3) << "|" << endl
		<< "+--------------------+" << endl
		<< "|3. Turn Left" << setw(9) << "|" << endl
		<< "+--------------------+" << endl
		<< "|4. Turn Right" << setw(8) << "|" << endl
		<< "+--------------------+" << endl
		<< "|5. Forward" << setw(11) << "|" << endl
		<< "+--------------------+" << endl
		<< "|6. Move distance" << setw(5) << "|" << endl
		<< "+--------------------+" << endl
		<< "|7. Close Wall" << setw(8) << "|" << endl
		<< "+--------------------+" << endl
		<< "|8. Stop" << setw(14) << "|" << endl
		<< "+--------------------+" << endl
		<< "|9. Quit" << setw(14) << "|" << endl
		<< "+--------------------+" << endl;
	cout << "Choose one : ";
	cin >> choose;
	return choose;
}
int main()
{
	SonarSensor sens;
	Position pos;
	RobotInterface* piooner = new PioneerRobotInterface;
	RobotControl robot(&pos, piooner, &sens);	
	while(1){
		switch (mainmenu()) {
		case 1:
			system("cls");
			switch (Connection()) {
			case 1:
				if (robot.connect())
				{
					system("cls");
					cout << "<Connected>" << endl << "Robot is connected..." << endl;			
					system("pause");
					system("cls");
				}
				else
				{
					system("cls");
					cout << "<No Connected>" << endl;
					system("pause");
					system("cls");
				}
				break;
			case 2:
				if (robot.disconnect())
				{
					system("cls");
					cout << "<Disconnected>" <<endl << "Robot is disconnected..." <<endl;
					system("pause");
					system("cls");
				}
				else
				{
					system("cls");
					cout << "No Disconnected" << endl;	
					system("pause");
					system("cls");
				}
				break;
			case 3:
				system("cls");
				break;
			}
			break;
		case 2:
			system("cls");
			while (1) {
				switch (Motion()) {
				case 1:
					cout << "Enter Speed: ";
					int spd;
					cin >> spd;
					piooner->move(spd);
					system("cls");
					break;
				case 2:
					cout << "Enter Speed: ";
					int spd2;
					cin >> spd2;
					robot.safeMove(spd2);
					system("cls");
					break;
				case 3:
					robot.turnLeft();
					system("cls");
					break;
				case 4:
					robot.turnRight();
					system("cls");
					break;
				case 5:
					robot.forward();
					system("cls");
					break;
				case 6:
					float dst;
					cout << "Enter Distance: ";
					cin >> dst;
					robot.moveDistance(dst);
					system("cls");
					break;
				case 7:
					robot.closeWall();
					Sleep(5000);
					system("cls");
					break;
				case 8:
					robot.stop();
					system("cls");
					break;
				case 9:
					exit(0);
					break;
				}
			}
		case 3:
			system("cls");
			robot.print();
			system("pause");
			system("cls");
			break;
		case 4:
			exit(0);
			}	
	}
	system("pause");
}
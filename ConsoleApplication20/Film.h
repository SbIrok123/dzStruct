#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Film
{
	char name[50];
	char rejeser[60];
	char janre[26];
	float rate;
	float price;

	void showFilm(int i = 0)
	{
		if(i!=0){
		cout<<"#"<<i << " �������� - " << name << endl;
		}
		else {
			cout<< "�������� - " << name << endl;
		}
		cout << "\t�������: " << rejeser << endl;
		cout << "\t����: " << janre << endl;
		cout << "\t�������: " << rate << endl;
		cout << "\t���� �� �����: " << price << endl;
		cout << "---------------------------------------" << endl;
	}
	
	void addFilm() 
	{
		cout << "������� �������� ������ - ";
		cin >> name;
		cout << "������� ��������� ����� ������ - ";
		cin >> rejeser;
		cout << "������� ���� - ";
		cin >> janre;
		cout << "������� ������ ����� ������ - ";
		cin >> rate;
		cout << "������� ���� �� ����� - ";
		cin >> price;
	}

};
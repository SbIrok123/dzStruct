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
		cout<<"#"<<i << " Название - " << name << endl;
		}
		else {
			cout<< "Название - " << name << endl;
		}
		cout << "\tРежиссёр: " << rejeser << endl;
		cout << "\tЖанр: " << janre << endl;
		cout << "\tРейтинг: " << rate << endl;
		cout << "\tЦена за билет: " << price << endl;
		cout << "---------------------------------------" << endl;
	}
	
	void addFilm() 
	{
		cout << "Введите название фильма - ";
		cin >> name;
		cout << "Введите режиссера этого фильма - ";
		cin >> rejeser;
		cout << "Введите жанр - ";
		cin >> janre;
		cout << "Введите оценку этого фильма - ";
		cin >> rate;
		cout << "Введите цену за билет - ";
		cin >> price;
	}

};
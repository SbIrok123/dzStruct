#pragma once
#include"Film.h"
void deleteByName(Film*& films, int& sizeFilms)
{
	cout << endl;
	char deleteName[50];
	cin.ignore();
	cout << "¬ведите название фильма - ";
	cin.getline(deleteName, 50);
	cout << endl;
	Film* tmp = new Film[sizeFilms - 1];
	int newsize = 0;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (strcmp(deleteName, films[i].name) != 0)
		{
			tmp[newsize] = films[i];
			newsize++;
		}
	}

	delete[] films;

	films = tmp;
	sizeFilms = newsize;
}

void showAllFilms(Film* films, int sizeFilms)
{
	for (int i = 0; i < sizeFilms; i++)
	{
		films[i].showFilm(i + 1);
	}
}

void CreateNewFilm(Film*& films, int& sizeFilms)
{
	cout << endl;
	Film* tmp = new Film[sizeFilms + 1];
	for (int i = 0; i < sizeFilms; i++)
	{
		tmp[i] = films[i];

	}
	sizeFilms++;
	delete[] films;
	tmp[sizeFilms - 1].addFilm();
	films = tmp;
	cout << "”спех!" << endl;
}

void findByName(Film* films, int sizeFilms)
{
	char findName[50];
	cin.ignore();
	cout << "\n¬ведите название фильма - ";
	cin.getline(findName, 50);
	cout << endl;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (strcmp(findName, films[i].name) == 0)
		{
			films[i].showFilm();
			break;
		}
	}
}

void findByJanre(Film* films, int sizeFilms)
{
	char findJanre[50];
	cin.ignore();
	cout << "\n¬ведите жанр фильма - ";
	cin.getline(findJanre, 50);
	cout << endl;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (strcmp(findJanre, films[i].janre) == 0)
		{
			films[i].showFilm();
		}
	}
}

void findByRejeser(Film* films, int sizeFilms)
{
	char findRejeser[50];
	cin.ignore();
	cout << "\n¬ведите »м€ и ‘амилию режиссера фильма - ";
	cin.getline(findRejeser, 50);
	cout << endl;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (strcmp(findRejeser, films[i].rejeser) == 0)
		{
			films[i].showFilm();
		}
	}
}

void findBestInJanre(Film* films, int sizeFilms)
{
	char findJanre[50];
	cin.ignore();
	cout << "\n¬ведите жанр фильма - ";
	cin.getline(findJanre, 50);
	cout << endl;
	float maxRate = films[0].rate;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (maxRate < films[i].rate && strcmp(findJanre, films[i].janre) == 0)
		{
			maxRate = films[i].rate;
		}
	}
	cout << "Ћучший фильм в жанре - " << findJanre << " : " << endl;
	for (int i = 0; i < sizeFilms; i++)
	{
		if (maxRate == films[i].rate && strcmp(findJanre, films[i].janre) == 0)
		{
			films[i].showFilm();
			return;
		}
	}
}

void getTotalPrice(Film* films)
{
	int tikets = 0, num = 0, total = 0;
	cin.ignore();
	cout << "\n¬ведите сколько билетов вы хотите купить - ";
	cin >> tikets;
	for (int i = 0; i < tikets; i++)
	{
		cout << "¬ведите номер фильма дл€ покупки билета - ";
		cin >> num;
		total += films[num - 1].price;
	}
	cout << "»того выходит - " << total << endl;
}

void showSortedRate(Film* films, int sizeFilms)
{
	Film* sortedFilm = new Film[sizeFilms];
	for (int i = 0; i < sizeFilms; i++)
	{
		sortedFilm[i] = films[i];
	}

	for (int i = 0; i < sizeFilms - 1; i++)
	{
		for (int j = i + 1; j < sizeFilms; j++)
		{
			if (sortedFilm[i].rate < sortedFilm[j].rate)
			{
				Film temp = sortedFilm[i];
				sortedFilm[i] = sortedFilm[j];
				sortedFilm[j] = temp;
			}
		}
	}

	for (int i = 0; i < sizeFilms; i++)
	{
		sortedFilm[i].showFilm(i + 1);
	}
}

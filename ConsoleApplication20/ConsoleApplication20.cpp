#include "Film.h"
#include "funcTempl.h"
int main()
{
	setlocale(LC_ALL, "");
	int sizeFilms = 5,task=0;
	Film *films = new Film[sizeFilms]{
		{"1+1","Olivie Nakash","Drama",9,549.99},
		{"Forest gamp","Robert Zemekis","Drama",9.2,230},
		{"The Shawshank Redemption","Frank Darabont","Drama",8.8,300},
		{"Fight club","Davin Fincher","Triller",10.2,812.50},
		{"Shrek","Andrew Adamson","Cartoon",8.9,399.99}
	};

	while (true) {
		task = 0;
		cout << "\t-----------------------------------------"<<endl;
		cout << "\t|\t\tMENU\t\t\t|"<<endl;
		cout << "\t-----------------------------------------"<<endl;
		cout << "\t| 1. Показать все фильмы\t\t|"<<endl;
		cout << "\t| 2. Добавить фильм в список\t\t|"<<endl;
		cout << "\t| 3. Удалить фильм\t\t\t|"<<endl;
		cout << "\t| 4. Искать за названием\t\t|"<<endl;
		cout << "\t| 5. Искать за жанром\t\t\t|"<<endl;
		cout << "\t| 6. Искать за режиссёром\t\t|"<<endl;
		cout << "\t| 7. Самый популярный фильм жанра\t|"<<endl;
		cout << "\t| 8. Узнать цену выбранных билетов\t|"<<endl;
		cout << "\t| 9. Вывести список фильмов за оценками\t|"<<endl;
		cout << "\t-----------------------------------------" << endl;
		cout << "\t| 0. Выход\t\t\t\t|"<<endl;
		cout << "\t-----------------------------------------" << endl;
		cout << "\nВведите номер задачи - ";
		cin >> task;
		cout << endl;
		switch (task)
		{
		case 1:
			showAllFilms(films, sizeFilms);
			cout << endl;
			break;
		case 2:
			CreateNewFilm(films, sizeFilms);
			cout << endl;
			break;
		case 3:
			deleteByName(films, sizeFilms);
			cout << endl;
			break;
		case 4:
			findByName(films, sizeFilms);
			cout << endl;
			break;
		case 5:
			findByJanre(films, sizeFilms);
			cout << endl;
			break;
		case 6:
			findByRejeser(films, sizeFilms);
			cout << endl;
			break;
		case 7:
			findBestInJanre(films, sizeFilms);
			cout << endl;
			break;
		case 8:
			getTotalPrice(films);
			cout << endl;
			break;
		case 9:
			showSortedRate(films, sizeFilms);
			cout << endl;
			break;
		case 0:
			return 0;
		default:
			cout << "Неверная задача!" << endl;
			break;
		}
	}
}

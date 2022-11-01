
#include <iostream>
using namespace std;



#if 3 < 10
#define PI 3.14
#define MSG "Hello World!"
#endif
#define forever while (true)
#define begin {
#define end }

#define sum(a, b) (a + b)
#define crtarr(t, n, s) t * n = new t[s]

#define ctrmx(t, n, s1, s2) t ** n = new t * [s1];\
for(int i = 0; i < s1; i++)\
n[i] = new t[s2]
#if 1 == 2
void hi() {
	cout << "Hello\n";
}
#elif 2 == 2
void hi() {
	cout << "WOW!\n";
}
#else
void hi() {
	cout << "Bue!\n";
}
#endif


#ifdef sum
const int  K = 10;
#else
const int K = 11;
#error "Ошибка! sum должно существовать."
#endif

#define print(v) cout << #v << " = "<< v << '\n'
#define show(a, b) a ## b



int main() {
	setlocale(LC_ALL, "Russian");
	int n = 2, m = 4;
	int xy = 10;

	cout << show(x, y) << '\n';

	print(n);
	print(m);

	hi();

	cout << __LINE__ << endl;//60 строка
	cout << __LINE__ << endl;// 61 строка

	cout << __FILE__ << endl;//покажет файл в многофайловом проекте, где ошибка

	cout << __DATE__ << endl;//дата сборки проекта
	string date = __DATE__;
	cout << date << endl;

	//Константы препроцессора
	/*cout << "PI = " << PI << '\n';
	cout << MSG << '\n';
#undef PI
	//cout << PI << '\n';// ошибка, т.к. PI освобождено
	const int wk = 7;
	cout << "wk" << wk << '\n';*/
	//Программные конструкции
	/*n = 0;
	forever begin 
		cout << '.';
		n++;
		if (n >= 5)
			break;
		end
			cout << '\n';*/
	//Макросы
	/*cout << sum(1, 5.7) << '\n';//6.7

	crtarr(int, px, 5);
	px[0] = 1;
	delete[]px;

	int** mx = new int* [10];
	for (int i = 0; i < 10; i++)
		mx[i] = new int[7];

	ctrmx(int, mat, 5, 4);
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			mat[y][x] = y * x + 1;
			cout << mat[y][x] << '\t';
		}
		cout << '\n';
	}
	for (int i = 0; i < 4; i++)
		delete[]mat[i];
	delete[]mat;*/



	return 0;
}

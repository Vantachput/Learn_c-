#include <iostream>
using namespace std;
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmreg.h>
#pragma hdrstop

#define MAX(x,y,c) {

}
 int main() {
	int a = 10;
	int b = 20;
	int c = 0;
	MAX(a, b, c); // теперь c равно 20
	MAX(a += b, b, c); // теперь a = с = 30
	 setlocale(LC_ALL, "rus");
	double a, y, l;
	int z = 0;
	bool lol = true;
	bool none_lol = false;
	ifstream fout;

	 for (int i = 0; i < 3;++i) {
		int m;
		cout << "Введите любое число: ";
		cin >> m;
		while (lol) {
			if (m == z) {
				cout << "Введенноё вами число это --- " << z << endl;
				z = 0;
				break;
			}
			else {
				cout << z << endl;
				z += 1;
			}
		}
	}
	 while (true) {
		int m, lsp;
		char n = '0';
		char k = '0';
		string lol;
		int h;
		cout << "Вас приветсвует компания орифлейм"<< endl;
		cout << "Введите какоё-то число: ";
		cin >> m;
		cout << "Если хотите продолжить введите +, если нет то введите - ";
		cin >> n;
		if (n == '-') {
			break;
		}
		if (n == '+') {
			cout << "Я спрошу в последний раз, вы точно хотите продолжить?";
			cin >> k;
			if (k == '-')break;
			if (k == '+') {
				cout << "Что ж, тогда пожалуй продолжим" << endl;
				cout << "Что вы хотите сделать с числом которе вы ввели?" << endl;
				cout << "Для того что бы вычислить квадрат нажмите 0, что бы корень 1, что бы просто дать по лицу матемОтичке нажмите 2" << endl;
				cin >> h;
				switch (h) {
				case 0:
					cout << "Квадрат вашего числа: " << m * m << endl;
					break;
				case 1:
					cout << "Квадратный корень кашего числа = " << sqrt(m) << endl;
					break;
				case 2:
					cout << " К сожалению вашей матеМотичКи нету рядом что бы дать ей по лицу, попроуйте ещё-раз, мб получится?" << endl;
					break;
				default:
					cout << "К сожалению вы ввели больше 2-ух, так что по лицу следует дать именно вам..." << endl;
					fout.open("C:/Users/Client/Downloads/ЛСП - One More City (Альбом).mp3");
				}
				cout << "Спасибо что пользуетесь нашими услугами" << endl;
				cout << "Если вы администрация, что бы открыть скрытые настройки введите пароль: ";
				cin >> lol;
				if (lol == "ILOVEYOU") {
					cout << "К вашему вниманию я представляю Альбом лсп One more city";
					cout << "Что бы включить песню, введите цифру от 1-8 в порядке альбома: ";
					cin >> lsp;
					switch (lsp) {
					case 1:
						cout << "К сожалению я не смог сделать тут лейлист, но зато сделал на пайтоне";
						cout << "Так что пишите в командной строке : python D:\Programm\Python\lsp\lsp.py";
					}
				}
				else {
					break;
				}
			}
			else {
				continue;
			}
		}
	}
}
 bool found = 0;
x = 290;
for (double i = 1; i * i < x; ++i)
{
	for (double j = i; j * j < x; ++j)
	{
		if (i * i + j * j == x)
		{
			found = true;
			cout << i << j<<'/n';
			break; // выходим из вложенного цикла
		}
	}
	if (found) // выходим из внешнего цикла
		break;
		 int x, p, answer = 0;
		cin >> x;
		cin >> p;
		int i = 0;
		int z = x;
		for (int i = 1; i < p;i++) {
			x *= z;
		}
		answer = x;
		if (p == 0) answer = 1;

		return answer;


	}





int max1(int x, int y)
	{
	return x > y ? x : y;
}

 #include <iostream>
using namespace std;
#include <math.h>

	int main() {
		setlocale(LC_ALL, "rus");
		double a = 1, x, y, b ;
		cout << "Вычесление функции" << endl;
		cout << "Введите х: ";
		cin >> x;
		cout << fixed << showpoint;
		if (x > 0) {
			cout << "Введите число а: ";
			cin >> a;
			y = a * log(x * x);
			cout << "Функция y = a * log(x * x)= " << y << endl;
		}
		if (x < 0 && x >=-1.5) {
			cout << "Введите а: ";
			cin >> a;
			y = x + a*x*x;
			cout << "Функция y = x + a*x*x = " << y << endl;
		}
		if (x , 1) {
			cout << "Введите а: ";
			cin >> a;
			cout << "Введите b: ";
			cin >> b;
			y = (a * x + b) / (x * x - 1);
			cout << "Функция y = (a * x + b)(x * x - 1) = " << y << endl;
		}
		system("pause");
		return 0;
	}
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int x;
	cout << "Вычесление фуункции в зависимости от вашего выбора"<<endl;
	cout << "Введите 1 что бы вычислить функцию у = a*sin x" << endl;
	cout << "Введите 2 что бы вычислить функцию z = e^7x+3" << endl;
	cout << "Введите 3 что бы вычислить функцию t = lgx – cos x/(x + 2)" << endl;
	cin >> x;
	switch (x) {
	case 1 : {
		double a, x;
		cout << "Чтобы вычислить функцию у = a*sin x, введите:" << endl;
		cout << "a: " ;
		cin >> a;
		cout << "x: " ;
		cin >> x;
		cout << "Функция у = a*sin x = " << a * sin(x) << endl;
		break;
	}
	case 2: {
		double x;
		cout << "Чтобы вычислить функцию у = a*sin x, введите:" << endl;
		cout << "x: " ;
		cin >> x;
		cout << "Функция z = e^7x+3 = " << exp(7 * x + 3) << endl;
		break;
	case 3: {
		double a, x;
		cout << "Чтобы вычислить функцию t = lgx – cos x/(x + 2), введите:" << endl;
		cout << "x: " ;
		cin >> x;
		cout << "Функция t = lgx – cos x/(x + 2) = " << log10(x)-cos(x)/(x+2) << endl;
		break;
	}
	default: {
		cout << "Nothing";
		break;
	}
	}
	}
}
#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main() {
	setlocale(LC_ALL, "rus");
	double a = 1, x, y, b;
	cout << "Вычесление функции" << endl;
	cout << "Введите х: ";
	cin >> x;
	cout << fixed << showpoint;
	if (x > 0) {
		y = a * log(x * x);
		cout << "Функция y = a * log(x * x)= " << setprecision(2) << y << endl;
	}
	if ((x < 0) && (x >= -1.5)) {
		y = x + a * x * x;
		cout << "Функция y = x + a*x*x = " << setprecision(2) << y << endl;
	}
	if (x < -1.5) {
		y = x * x * x;
		cout << "Функция y = x*x*x = " << setprecision(2) << y << endl;
	}
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#define MAX(x, y, r) r = x > y ? x:y

int main(){
	int a,x,y;
	cin >> x >> y;
	a = x > y ? x : y;
}
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a;
	for (int i = 0;i < a;++i) {
		int c = 2, p = 2, i1 = 0;
		cin >> b;
		for (;c < b;++i1) {
			c *= p;
		}
		cout << i1 << endl;
	}
}

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	return 0;
}

unsigned gcd(unsigned a, unsigned b) {
	a > b ? gcd(a % b, b) : gcd(a, b % a);
}
#include <iostream>
#include <stdio.h>
using namespace std;

void sdvig(int a[], int size, int shift) {
	int chet = 0;
	while (chet < shift){
		int temp = a[0];
		for (int i = 0;i < size;++i) {
			a[i] = a[i + 1];
		}
		a[size - 1] = temp;
		for (int b = 0; b < size; ++b) {
			cout << a[b] << " ";
		}
		chet += 1;
	}
}

bool find_value(int*  p, int * q, int value){
	for (;p != q; ++p) {
		if (*p == value) {
				return true;
		}
	}
	return false;
}

int max_element(int* p, int* q) {
	int max = *p;
	for (; p != q; ++ p) {
		if (*p > max) {
			max = *p;
		}
	}
	return max;

}

int* max_element_2(int* p, int* q) {
	int *pmax = p;
	for (;p != q;++p) {
		if (*p > * pmax) {
			pmax = p;
		}
	}
	return pmax;
}


unsigned strlen(const char* str)
{
	int i = 0;
	const char* p = str;
	for (; *str != '\0';++str) {
		i += 1;
	}
	return i-1;
}


int len(const char* str){
	int i = 0;
	const char* p = str;
	for (; *str != '\0';++str) {
		i += 1;
	}
return i;
}

int len_2(char* str) {
	int i = 0;
	const char* p = str;
	for (; *str != '\0';++str) {
		i += 1;
	}
	return i;
}


void m_strcat(char* dst, const char* from) {
	char* dst_ptr = dst + len_2(dst);
	cout << *dst_ptr << endl;
	while (*from != '\0')
		*dst_ptr++ = *from++;
	*dst_ptr = '\0';
	for (int i = 0;i < 50;++i) {
		cout << *dst_ptr <<" ";
	}
}





int main() {
	setlocale(LC_ALL, "eng");
	int a[5] = {1,20,3,4,5};
	int b = 5;
	int c = 20;
	int* p = a;
	int* q = &a[b - 1];
	char i[100] = "Hello,";
	const char* lol = "Okey0";
	m_strcat(i, lol);
}

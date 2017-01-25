#include <iostream>
using namespace std;

void build_ziggurat(int** Ziggurat, int counter, int lenght) {
	int pos = 0;
	int number = lenght;
	//создаем массив для одной маленькой пирамидки
	int** ZigguratTemp = new int*[lenght];
	for (int i = 0; i < lenght; i++) {
		ZigguratTemp[i] = new int[lenght];
	}
//строим одну маленькую пирамидку
	for (int i = 0; i < counter; i++) {
		for (int j = pos; j < number; j++) {				//fill upper and down stage
			ZigguratTemp[pos][j] = i;
			ZigguratTemp[lenght - pos - 1][j] = i;
		}
		for (int j = pos; j < number; j++) {				//fill side stages
			ZigguratTemp[j][pos] = i;
			ZigguratTemp[j][lenght - pos - 1] = i;
		}
		pos++;
		number--;
	}
	//вставляем маленькую пирамидку в 4 угла
	for (int i = 0; i < lenght; i++)
		for (int j = 0; j < lenght; j++) {
			Ziggurat[j][i] = ZigguratTemp[j][i];
			Ziggurat[j][lenght+i] = ZigguratTemp[j][i];
			Ziggurat[lenght+j][i] = ZigguratTemp[j][i];
			Ziggurat[lenght+j][lenght+i] = ZigguratTemp[j][i];
		}
//удаляем массив с маленькой пирамидкой
	for (int i = 0; i < lenght*2; i++)
        delete []ZigguratTemp[i];
    delete ZigguratTemp;

    //выводим большой массив
	for (int i = 0; i < lenght*2; i++) {
		for (int j = 0; j < lenght*2; j++) {
			cout << Ziggurat[j][i] << " ";
		}
		cout << endl;
	}
}

int main() {
	int lenght;
	int counter;
	cin >> lenght;

	int** Ziggurat = new int*[lenght*2];
	for (int i = 0; i < lenght*2; i++) {
		Ziggurat[i] = new int[lenght*2];
	}
	counter = (lenght / 2) + (lenght % 2);		//number of stages
	build_ziggurat(Ziggurat, counter, lenght);

	//удаляем большой массив
	for (int i = 0; i < lenght*2; i++)
        delete []Ziggurat[i];
    delete Ziggurat;

	return 0;
}

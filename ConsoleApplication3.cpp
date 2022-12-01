

#include <iostream>
using namespace std;



struct gnom{
char sex;
int age;
int height;
};
int main() {
	setlocale(LC_ALL, "ru");
	gnom a, b, c;
	cin >> a.age >> a.height >> a.sex;
	cin >> b.age >> b.height >> b.sex;
	cin >> c.age >> c.height >> c.sex;
	int female=0;
	if (a.sex == 'f') female++;
	if (b.sex == 'f') female++;
	if (c.sex == 'f') female++;
	if (female >= 2) cout << "матриархат";
	else cout << "патриархат";

	

}
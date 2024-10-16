#pragma once
#include <iostream>
#include <string.h>
using namespace std;

//Teza 1  

// Sub 2 

int sub2ex1a(int x) {


	while (x > 9) {

		int	y = 0;

		while (x > 0) {

			y =y + x % 10;
			x = x / 10;

		}
		x = y;
	}
	return x;
}

int cifraControl(int x) {

	while (x > 9) {

		int	y = 0;

		while (x > 0) {

			y = y + x % 10;
			x = x / 10;

		}
		x = y;
	}
	return x;

}


//rad(x


double distance(int xA, int yA, int xB, int yB)

{
	
	double distanta = 0;

	distanta = sqrt(pow( (xA - xB),2) + pow((yA - yB),2));

	cout << distanta << endl;

	return distanta;
}

void perimetru(int x[101], int y[101], int nr) {

double per = 0;

	for (int i = 0; i < nr - 1; i++) {

		per += distance(x[i], y[i], x[i + 1], y[i + 1]);

	}

	per += sqrt(pow((x[0] - x[nr - 1]), 2) + pow((y[0] - y[nr - 1]),2));

	cout << per << endl;
}





int prim(int n) {

	if (n < 2) {
		return false;
	}
	else{

		for (int i = 2; i * i <= n; i++) {

			if (n % i == 0) {

				return false;
			}
		}
	}
	return true;
}

void subiectul3ex1(int n) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		
		if (prim(i)) {

			if (n % i == 0) {

				suma += i;

			}
		}
	}
	if (suma == 0) {
		cout << n;
	}
	else {
		cout << suma << endl;
	}
}


// TEMA

// VARIANTA 2

void subiectul3ex1V2(int a,int b) {

	int ct = 0;


	for (int i = a; i <= b; i++) {

		int nrDivizori = 0;

		for (int d = 1; d <= i; d++) {

			if (i % d == 0) {
				nrDivizori++;
			}
		}

		if (nrDivizori == 3) {
			ct++;
		}

	}
	cout << ct << endl;
}

void numarAparitii(int v[], int dim,int f[]) {


	for (int i = 0; i < dim; i++) {

		f[v[i]]++;
	}
}

void subiectul3ex2V2(int v[],int dim) {

	int f[1000]{};

	numarAparitii(v, dim, f);

	for (int i = 0; i < 100; i++) {

		if (f[i] != 0) {
			cout << i <<" " << f[i] << endl;
		}

	}

}

void subiectul3ex3V2(int v1[], int dim1, int v2[], int dim2) {

	int ct = 0;

	int f1[100]{};
	int f2[100]{};

	numarAparitii(v1, dim1, f1);
	numarAparitii(v2, dim2, f2);

	for (int i = 0; i < dim1; i++) {
		for (int j = 0; j < dim2; j++) {

			if (f1[v1[i]] == f2[v2[j]]) {
				ct++;
			}

		}
	}
	
	cout << ct << endl;
		
}

 // VARIANTA 3

void subiectul2ex3V3(int a[100][100],int n,int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == j) {
				a[i][j] = 2;
			}
			else {
				a[i][j] = 1;
			}
		}
	}

}

int cifreNr(int n) {

	int ct = 0;

	while (n != 0) {
		int cifra = n % 10;
		ct++;
		n = n / 10;
	}
	return ct;
}

void subiectul3ex1V3(int a, int b) {



	int sumaCifre = 0;

	for (int i = a; i <= b; i++) {

		sumaCifre += cifreNr(i);

	}
	cout << sumaCifre << endl;
}

void aparitiinrVector(int v[], int dim, int f[]) {

	for (int i = 0; i < dim; i++) {

		f[v[i]]++;

	}

}

void subiectul3ex2V3(int v[], int dim) {

	int f[100]{};

	aparitiinrVector(v, dim, f);

	for (int i = 0; i < dim; i++) {

		if (f[v[i]] >= 1) {
			cout << v[i] << " ";
			f[v[i]] = 0;
		}

	}
}

void subiectul3ex3V3(int v[], int dim) {

	int f[100]{};

	aparitiinrVector(v, dim, f);

	int nrAparitiiMax = 0;

	for (int i = 0; i < dim; i++) {

		if (f[v[i]] > nrAparitiiMax) {
			nrAparitiiMax = f[v[i]];
		}
		
		if (f[v[i]] == nrAparitiiMax) {
			cout << v[i] << " ";
		}

	}
}


// VARIANTA 4

void subiectul2ex3V4(int a[100][100], int n, int m) {

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {

			if (j == 0 || j == m || (i + j == 6  && i<=3)|| ( i == j && i<=3)) {
				cout << "*" << " ";
			}
			else {
				cout << "-" << " ";
			}
		
		}
		cout << endl;
	}

}

int cmmdc(int a,int b) {

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void subiectul3Ex2V4(int n) {

	int ct = 0;
	int p[100];

	for (int i = 1; i < n; i++) {

		if (cmmdc(i,n)==1) {
			p[ct] = i;
			ct++;
		}
	}

	for (int k = 0; k < ct; k++) {

		cout << p[k] << " ";
	}

}

void bubbleSortDesc(int v[], int dim) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < dim-1; i++) {

			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}
	} while (sortat == false);
}

int subiectul3Ex3V4(int v[], int dim)       {

	bubbleSortDesc(v, dim);

	for (int i = dim-1; i >=0; i--) {

		if (i==6) {
			return v[i];
		}

	}
	return -1;
}


// VARIANTA 5

void subiectul2ex3V5(int a[100][100], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			if (i == 1 || i == n || j == 1 || j == n) {
				a[i][j] = 1;
			}
			else if (i == 2 || i == n - 1 || j == 2 || j == n -1) {
				a[i][j] = 2;
			}
			else {
				a[i][j] = 3;

			}
		}

	}
}

void subiectul3Ex2V5(int v[], int dim) {

	int f[100]{};

	int ct = 0;

	aparitiinrVector(v, dim, f);

	for (int i = 0; i < dim; i++) {

		if (f[v[i]] >= 1) {
			cout << v[i] << " ";
			ct++;
			f[v[i]] = 0;
		}
	}
	cout << endl;
	cout << ct;
}

void subiectul3Ex3V5(int v[], int dim) {

	int dmax = 0;
	int smax = 0;

	for (int i = 0; i < dim-1; i++) {

		int j = i;

		while (j + 1 < dim && v[j+1] == v[j]+1) {

			j++;

		}

		if (j-i > smax - dmax) {
			dmax = i;
			smax = j;
		}
		i = j;
	}
	cout << v[dmax] << " " << v[smax];
}

//VARIANTA 6	

void subiectul2ex3V6(int a[100][100], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			if (i % 3 + j % 3 == 4) {
				a[i][j] = 6;
			}
			else {
				a[i][j] = i % 3 + j % 3;
			}
		}
	}
}

void inserareElementVector(int v[], int& dim, int p, int elem) {

	for (int i = dim - 1; i >= p; i--) {
		v[i + 1] = v[i];
	}
	v[p] = elem;
	dim++;
}

void subiectul3ex2V6(int v[], int dim, int n) {
	int divPrimMinim = 0;

	for (int i = 2; i <= n; i++) {

		if (prim(i)) {
			if (n % i == 0) {
				divPrimMinim = i;
				break;
			}
		}

	}
	
	for (int i = 1; i <= dim; i++) {

		if (v[i] == divPrimMinim) {
			cout << i << endl;
		}

	}
}

int subiectul3ex3V6(int v[], int dim) {

	int f[100]{};

	aparitiinrVector(v, dim, f);

	for (int i = 0; i < dim; i++) {
		if (f[v[i]] %2 !=0) {
			return false;
		}
	}
	return true;
}

// VARIANTA 7

void subiectul3ex1V7(int v[], int dim,int n) {

	for (int i = 1; i <= dim; i++) {

		if (i == n) {
			cout << v[i] << endl;
			break;
		}

	}

}

void subiectul3ex2V7(int v[], int dim) {

	int produsMax = v[0] * v[1];



	for (int i = 0; i < dim-1; i++) {


		for (int j =i+1; j < dim; j++) {

			int produs =v[i]*v[j];

			if (produs > produsMax) {
				produsMax = produs;
			}
		}
		
		
	}
	cout << produsMax << endl;

}

int ultimaCifra(int n) {

	int cifra =n % 10;

	return cifra;
}

int primaCifra(int n) {

	while(n>9){

		n = n / 10;
	}
	return n;
}

int rasturnatNumar(int n) {

	int rasturnat = 0;

	while (n != 0) {
		int cifra = n % 10;
		rasturnat = rasturnat * 10 + cifra;
		n = n / 10;
	}
	return rasturnat;
}


void subiectul3ex3V7(int v[], int dim) {

	int p = 1;

	for (int i = 0; i < dim; i++) {

		if (primaCifra(v[i]) == ultimaCifra(v[i])) {

			v[i]=rasturnatNumar(v[i]);
			
			v[i] = v[i] / 10;

			v[i]=rasturnatNumar(v[i]);

			v[i] = v[i] / 10;
			

			cout << v[i] << " ";
		}

	}


}

// VARIANTA 8

void subiectul2ex3V8(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			a[i][j] = i + j + 6;


		}
	}



}


void subiectul3ex1V8(int v[], int dim) {

	for (int i = 0; i < dim-1; i++) {

		int j = i+1;

		while (j < dim ){

			if (v[i] == rasturnatNumar(v[j])) {

				cout << "(" << v[i] << ", " << v[j] << ")" << endl;

			}
			j++;
		}
	}
}

void subiectul3ex2V8(int v[], int dim) {

	int fp = -1;

	for (int factor = 2; factor <= v[0]; factor++) {

		if (prim(factor)) {
			bool esteFactorComun = true;


			for (int i = 0; i < dim; i++) {

				if (v[i] % factor != 0) {

					esteFactorComun = false;
					break;

				}
			}

			if (esteFactorComun) {
				fp = factor;
				break;
			}

		}
	}

	cout << "fp= " << fp << endl;
}

//VARIANTA 9

void subiectull2xe3V9(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i % 2 == 0) {
				a[i][j] = j;
			}
			else {
				a[i][j] = 2 * i + j;
			}


		}
	}

}

void subiectul3ex1V9(int n) {

	int a = 0;
	int b = 1;

	int m = -1;
	int t = -1;

	while (b <= n) {
		m = b;
		int urmator = a + b;
		a = b;
		b = urmator;
	}
	t = b;

	cout << "m= " << m << " si " << "t= " << t;
}

void subiectul3ex2V9(int v[], int dim) {

	for (int i = 0; i < dim - 1; i++) {

		int j = i + 1;

		while (j < dim) {

			if (v[i]!=v[j] && cmmdc(v[i],v[j])==1) {

				cout << "(" << v[i] << ", " << v[j] << ")" << endl;

			}
			j++;
		}
	}

}

// VARIANTA 10

void subiectul3ex2V10(int v[], int dim) {

	int f[100]{};

	bool palindrom = true;

	aparitiinrVector(v, dim, f);

	for (int i = 0; i < dim; i++) {

		if (f[v[i]] != 2) {
			palindrom = false;
		}

	}

	if (palindrom) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}
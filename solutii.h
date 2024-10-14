#include "algoritmi.h"

void sol1() {

	int x = 2016;

	cout << sub2ex1a(x) << endl;

}


void sol3() {


	int nr = 5;

	int x[101] = {1,2,3,4,5 };
	int y[101] = {1,2,3,4,5};

	//A(1,1),B(2,2) c(3,3) , d(4,4),E(5,5)
	
	//distanta A-B =1+1=rad2 , B-C=rad2 C-d=rad2 D-e=rad2 A-D=rad(16+16)=rad 32=4rad2 

	perimetru(x, y, nr);


}

void sol4() {

	int n = 11;

	subiectul3ex1(n);

}

//TEMA

//VARIANTA 2

void sol5() {

	int a = 3;

	int b = 20;

	subiectul3ex1V2(a, b);

}

void sol6() {

	int v[] = { 2,4,7,4,7 };

	int dim = 5;

	subiectul3ex2V2(v, dim);

}

//VARIANTA 3

void sol8() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	subiectul2ex3V3(a, n, m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
}

void sol9() {

	int a = 7;

	int b = 56;

	subiectul3ex1V3(a, b);

}

void sol10() {

	int v[] = { 2,4,4,4,7,7,1 };

	int dim = 7;

	subiectul3ex2V3(v, dim);

}

void sol11() {

	int v[] = { 17,-8,13,17,-8,9,10,13 };

	int dim = 8;

	subiectul3ex2V3(v, dim);

}

// VARIANTA 4

void sol12() {

	int a[100][100] = {};

	int n = 6;

	int m = 6;

	subiectul2ex3V4(a, n, m);


}

void sol13() {

	int n = 20;

	subiectul3Ex2V4(n);

}

void sol14() {

	int v[] = { 21,9,16,2,16,2,9,4,9,21,9,2,8 };

	int dim = 13;

	cout << subiectul3Ex3V4(v, dim);

}

// VARIANTA 5


void sol15() {

	int a[100][100] = {};

	int n = 6;

	int m = 6;

	subiectul2ex3V5(a, n, m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void sol16() {

	int v[] = { 1,2,2,2,3,3,5,8,9 };

	int dim = 9;

	subiectul3Ex2V5(v, dim);
}


void sol17() {

	int v[] = { 3,4,5,4,5,6,8 };

	int dim = 7;

	subiectul3Ex3V5(v, dim);
}

// VARIANTA 6

void sol18() {

	int a[100][100] = {};

	int n = 6;

	int m = 6;

	subiectul2ex3V6(a, n, m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void sol19() {

	int v[] = { 2,5,11,17 };

	int dim = 4;

	int n = 121;

	subiectul3ex2V6(v, dim, n);

}

void sol20() {

	int v[] = { 2,3,3,8,9,2,3,9,8,3 };

	int dim = 10;

	if (subiectul3ex3V6(v,dim) == 1) {
		cout << "este palindrom" << endl;
	}
	else {
		cout << "nu " << endl;
	}

}

void sol21() {

	int v[] = { 1,2,3,2,1,2,3,4,5,6,5,4,3,2,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1 };

	int dim = 32;

	int n = 10;

	subiectul3ex1V7(v, dim, n);

}

void sol22() {

	int v[] = { -60,36,-8,-2,10,5 };

	int dim = 6;

	subiectul3ex2V7(v, dim);

}

void sol23() {

	int v[] = { 1151,234,2322,212,514,23122 };

	int dim = 6;

	bubbleSortDesc(v, dim);

	subiectul3ex3V7(v, dim);
}

//VARIANTA 8

void sol24() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	subiectul2ex3V8(a, n, m);

	for (int i =0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void sol25() {

	int v[] = { 41,14,324,423,6,82,28 };

	int dim = 7;

	subiectul3ex1V8(v, dim);

}

void sol26() {

	int v[] = { 60,36,18,24 };

	int dim = 4;

	subiectul3ex2V8(v, dim);
}

void sol27() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	subiectull2xe3V9(a, n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

void sol28() {

	int n = 30;

	subiectul3ex1V9(n);

}

void sol29() {

	int v[] = { 42,3,14,43,8,6 };

	int dim = 6;

	subiectul3ex2V9(v,dim);

}

void sol30() {

	int v[] = {2,2,4,5,4};

	int dim = 5;

	subiectul3ex2V10(v, dim);

}
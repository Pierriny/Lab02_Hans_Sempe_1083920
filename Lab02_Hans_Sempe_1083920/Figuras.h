#pragma once
#include <cmath>

using namespace std;

struct Figura
{
	double lado1;
	double lado2;
	double lado3;
	double lado4;
	double lado5;
	double lado6;
	double lado7;
	double lado8;
	double lado9;
	double lado10;
	double altura;
	double ap;
	double h1;
	double h2;
	double h3;
	double h4;
	double h5;
	double h6;
	double h7;
	double h8;
	double h9;
	double h10;


	// CONSTRUCTOR
	Figura()
	{
		lado1 = 0;
		lado2 = 0;
		lado3 = 0;
		lado4 = 0;
		lado5 = 0;
		lado6 = 0;
		lado7 = 0;
		lado8 = 0;
		lado9 = 0;
		lado10 = 0;
		altura = 0;
		ap = 0;
	}

	// AREA

	double areatriangulo() {

		if (lado1 == lado2 && lado1 == lado3) {
			return ( ( sqrt(3) / 4 ) * (lado1 * lado1) );
		}
		else {
			return ((lado1 * altura) / 2);
		}

	}
	double areacuadrado() {
		return (lado1 * lado1);
	}
	double areapentagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5) {
			return ((lado1 * 5 * ap)/2);
		}
		else {
			return ( ((lado1*h1)/2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2));
		}
	}
	double areahexagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6) {
			return ((lado1 * 3 * ap));
		}
		else {
			return (((lado1 * h1) / 2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2) + ((lado6 * h6) / 2));
		}
	}
	double areaheptagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7) {
			return ((lado1 * 7 * ap)/2);
		}
		else {
			return (((lado1 * h1) / 2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2) + ((lado6 * h6) / 2) + ((lado7 * h7) / 2));
		}
	}
	double areaoctagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8) {
			return ((lado1 * 4 * ap));
		}
		else {
			return (((lado1 * h1) / 2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2) + ((lado6 * h6) / 2) + ((lado7 * h7) / 2) + ((lado8 * h8) / 2));
		}
	}
	double areaeneagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8 && lado1 == lado9) {
			return ((lado1 * 9 * ap) / 2);
		}
		else {
			return (((lado1 * h1) / 2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2) + ((lado6 * h6) / 2) + ((lado7 * h7) / 2) + ((lado8 * h8) / 2) + ((lado9 * h9) / 2));
		}
	}
	double areadecagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8 && lado1 == lado9 && lado1 == lado10) {
			return ((lado1 * 5 * ap));
		}
		else {
			return (((lado1 * h1) / 2) + ((lado2 * h2) / 2) + ((lado3 * h3) / 2) + ((lado4 * h4) / 2) + ((lado5 * h5) / 2) + ((lado6 * h6) / 2) + ((lado7 * h7) / 2) + ((lado8 * h8) / 2) + ((lado9 * h9) / 2) + ((lado10 * h10) / 2));
		}
	}

	// PERIMETRO

	double perimetroTriangulo() {
		if (lado1 == lado2 && lado1 == lado3) {
			return (3 * lado1);
		}
		else if (lado2 == lado3){
			return (lado1 + (2*lado2));
		}
		else {
			return (lado1 + lado2 + lado3);
		}
	}
	double perimetroCuadrilatero() {
		return (lado1 + lado1 + lado1 + lado1);
	}
	double perimetroPentagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5) {
			return (lado1 * 5);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5);
		}
	}
	double perimetroHexagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6) {
			return (lado1 * 6);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6);
		}
	}
	double perimetroHeptagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7) {
			return (lado1 * 7);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7);
		}
	}
	double perimetroOctagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8) {
			return (lado1 * 8);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8);
		}
	}
	double perimetroEneagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8 && lado1 == lado9) {
			return (lado1 * 9);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8 + lado9);
		}
	}
	double perimetroDecagono() {
		if (lado1 == lado2 && lado1 == lado3 && lado1 == lado4 && lado1 == lado5 && lado1 == lado6 && lado1 == lado7 && lado1 == lado8 && lado1 == lado9 && lado1 == lado10) {
			return (lado1 * 10);
		}
		else {
			return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8 + lado9 + lado10);
		}
	}

};
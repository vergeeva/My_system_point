#pragma once
using namespace System;
#define size 100
// Класс не имеет методов ввода и вывода. 
// Визуализация - на элементах управления формы:
// 1. Описаны свойства property.
// 2. Перегружен метод ToString.
// 3. Есть метод Set, он закомментирован.

public ref class My_Point {
	double x, y;		// Координаты точки.
public:
	My_Point(void);
	My_Point(double, double);
	void Set(double, double);
	double  Distance();
	property double  X {
		double  get() {
			return x;
		}
		void set(double  X) {
			x = X;
		}
	}
	property double  Y {
		double  get() {
			return y;
		}
		void set(double  Y) {
			y = Y;
		}
	}
	virtual String^ ToString() override;

};



public ref class my_material_point : public  My_Point
{
	double  m;
	bool check()
	{
		return this->m > 0;
	}
public:
	my_material_point(void) : My_Point()
	{
		this->m = 1;
	}
	my_material_point(double  mm, double  a, double  b) : My_Point(a, b)
	{
		this->m = mm;
		if (!this->check()) this->m = 1;
	}
	//virtual String^ ToString() override;

	property double M {
		double  get() {
			return m;
		}
		void set(double M) {
			m = M;
		}
	}
	bool operator < (my_material_point^);
	bool operator > (my_material_point^);
	bool operator ==(my_material_point^);
	my_material_point^ operator =(my_material_point^);
};
//Опишите контейнерный класс «Система материальных точек» на основе шаблона
//array.Для управления использовать длину массива.
//В конструкторе системы задайте длину, равную 0.
//Напишите методы :
// проверки на пустоту;
// проверки на переполнение;
// добавления и удаления материальной точки;
// вычисления общей массы системы;
// вычисления центра тяжести системы.
//Напишите методы визуализации в гриде.
//Найдите точку наибольшей массы.
public ref class my_system_point
{
	array <my_material_point^>^ sys_point = gcnew array <my_material_point^>(size);
	int len;
	bool Check()
	{
		return len >= 0;
	}
public:
	my_system_point()
	{
		this->len = 0;
	}
	my_system_point(int len)
	{
		this->len = len;
		if (Check())
		{
			for (int i = 0; i < this->len; i++)
			{
				this->sys_point[i] = gcnew my_material_point();
			}
		}
		this->len = 0;
		
	}
	void View(System::Windows::Forms::DataGridView^ DGV);
	bool empty();
	bool full();
	bool del(double, double, double);
	bool add(my_material_point^);
	double m_sum();
	my_material_point^ find_max();
	my_material_point^ center_of_heavy();
	property int Len {
		int  get() {
			return len;
		}
		void set(int l) {
			len = l;
		}
	}

	//property array <my_material_point^>^ Sys_point {
	//	array <my_material_point^>^ get() {
	//		return sys_point;
	//	}
	//	void set(array <my_material_point^>^ s) {
	//		sys_point = s;
	//	}
	//}

};
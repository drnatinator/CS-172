#include <iostream>
using namespace std;

template<typename T>
class Vector
{
public:
	Vector<T>(); //empty vector with given element type
	Vector<T>(int size); // vector with given size
	Vector<T>(int size, T defaultValue); // vector with given size, filled with default values
	void push_back(T element);//appents a new value to the end of the vector
	void pop_back();//removes the last value from the vector
	unsigned const size();//returns the size of the vector
	T const at(int index);//returns the value at a vertain spot in the vector
	bool const empty();//checks if the vector is empty
	void clear();//clears the vector
	void swap(Vector v2); //swaps the vector with another
	int Size;//size of the vector
	T array[100];//information is stored here
};

template <typename T>
Vector<T>::Vector() {
	Size = 0;
}

template <typename T>
T const Vector<T>::at(int index) {
	return array[index];
}

template <typename T>
Vector<T>::Vector(int size) {
	Size = size;
}

template<typename T>
Vector<T>::Vector(int size, T defaultValue){
	Size = size;
	for (int i = 0; i < Size; i++)
		array[i]= defaultValue;
}

template<typename T>
void Vector<T>::push_back(T element) {
	array[Size] = element;
	Size++;
}

template<typename T>
void Vector<T>::pop_back() {
	Size--;
}

template <typename T>
unsigned const Vector<T>::size() {
	return Size;
}

template<typename T>
bool const Vector<T>::empty() {
	if Size == 0
		return true;
	else
		return false;
}

template <typename T>
void Vector<T>::clear() {
	Size = 0;
}

template <typename T>
void Vector<T>::swap(Vector v2) {
	for (int i = 0; i < Size; i++)
		Vector<i> = v2[i];
}



#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
#define N 10
template <class T>
class Test
{
private:
	T* mas;
	T mas_elem;
	int i;
public:
	Test();
	void fill(const T mas_elem);
	void print()const;
	T* GetMas()const;
};


class Class
{
public:
	void sortCorrect();
	void sortWrong();
	template<class T>
	void sortArray(T* data, const char c);

	template <class T>
	T mini(const T a, const T b);

	template <class T>
	T miniWrong(const T a, const T b);

	template <class T>
	T sum(const T* mas, const T Test_res);

	template <class T>
	T sumWrong(const T* mas, const T Test_res);
};

template<class T>
inline void Class::sortArray(T* data, const char c)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			if (c == '>') {      // по убыванию
				T temp;
				if (*(data + i) > *(data + j)) {
					temp = *(data + i);
					*(data + i) = *(data + j);
					*(data + j) = temp;
				}
			}
			if (c == '<') {  // по возрастанию
				T temp;
				if (*(data + i) > data[j]) {
					temp = *(data + i);
					*(data + i) = *(data + j);
					*(data + j) = temp;
				}
			}
		}
}

template<class T>
inline T Class::mini(const T a, const T b)
{
	if (a < b) {
		assert(a < b);
		return a;
	}
	else {
		assert(b < a);
		return b;
	}
}

template<class T>
inline T Class::miniWrong(const T a, const T b)
{
	if (a > b)
	{
		assert(a > b);
		return b;
	}
	else {
		assert(a < b); //assert(b < a);
		return a;
	}
}

template<class T>
inline T Class::sum(const T* mas, const T Test_res)
{
	T sum = 0;
	for (int i = 0; i < 10; i++) {

		if (*(mas + i) > 0) {
			sum += *(mas + i);
		}
	}
	assert(Test_res == sum);
	return sum;
}

template<class T>
inline T Class::sumWrong(const T* mas, const T Test_res)
{
	T sum = 0;
	for (int i = 0; i < 10; i++) {

		sum += *(mas + i);

	}
	assert(Test_res != sum);
	return sum;
}
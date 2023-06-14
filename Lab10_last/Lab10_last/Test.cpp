#include "Test.h"

template Test <int>;
template Test <double>;
template Test <string>;

template<class T>
inline Test<T>::Test()
{
	i = 0;
	mas = new T[N];
}

template<class T>
void Test<T>::fill(const T mas_elem)
{
	*(mas + i) = mas_elem;
	i++;
}

template<class T>
void Test<T>::print() const
{
	for (int i = 0; i < N; i++) {
		cout << *(mas + i) << " ";
	}
}

template<class T>
T* Test<T>::GetMas()const
{
	return mas;
}



void Class::sortCorrect()
{
	Test<int>arr1;

	int num;
	for (int i = 0; i < N; i++) {
		num = i + 1;
		arr1.fill(num);
	}
	int expected[] = { 10,9,8,7,6,5,4,3,2,1 };


	cout << "Массив: \n";
	arr1.print();
	cout << "\nОжидаемый результат:\n";
	for (int i = 0; i < N; i++)
	{
		cout << *(expected + i) << " ";
	}
	sortArray(arr1.GetMas(), '>');     // по убыванию
	for (int i = 0; i < N; i++) {
		assert(*(arr1.GetMas() + i) == *(expected + i));
	}
	cout << "\nПроверка прошла успешно";
	cout << endl;

}

void Class::sortWrong()
{
	int expected[] = { 1,2,3,4,5,6,7,8,9,10 };
	Test<int>arr1;
	int num;
	for (int i = 0; i < N; i++) {
		num = i + 1;
		arr1.fill(num);
	}

	cout << "Массив: \n";
	arr1.print();
	cout << "\nНеверный результат теста\n";
	for (int i = 0; i < N; i++)
	{
		cout << *(expected + i) << " ";
	}
	sortArray(arr1.GetMas(), '<');     // по возрастанию
	for (int i = 0; i < N; i++) {
		assert(*(arr1.GetMas() + i) == *(expected + i)); // assert(*(arr1.GetMas() + i) == *(expected + i));
	}

}


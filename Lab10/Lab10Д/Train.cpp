#include "Train.h"

const int count_city = 4;
string name_city[count_city] = { "Kyiv","Kharkiv","Melitopol","Mukachevo" };
const int max_num = 20;
const int min_num = 1;
const int min_hours = 1;
const int max_hours = 23;
const int m_minutes = 60;
Train trains[N];
Train tr;

void Train::PrintTime() {
    if (hours <= 9) {
        if (minutes <= 9)
            cout << 0 << hours << ":" << 0 << minutes;
        else
            cout << 0 << hours << ":" << minutes;
    }
    else if (minutes <= 9)
        cout << hours << ":" << 0 << minutes;
    else
        cout << hours << ":" << minutes;
}
bool Train::CheckingMinutes() {
    if (minutes < 0 || minutes > 59) {
        cout << "Некорректный ввод!";
        return false;
    }
}
bool Train::CheckingHours() {
    if (hours < 0 || hours > 23) {
        cout << "Некорректный ввод!";
        return false;
    }
}
void Train::print()
{
    cout << destination << setw(5) << "\t";
    cout << TrainNumber << setw(18) << "\t";
    cout << hours << setw(10) << "\t";
    cout << minutes << endl;
}
void Train::sort_time()
{

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (trains[j].hours > trains[j + 1].hours)
            {
                swap(trains[j], trains[j + 1]);
            }
            else if (trains[j].hours == trains[j + 1].hours)
            {
                if (trains[j].minutes > trains[j + 1].minutes)
                    swap(trains[j], trains[j + 1]);
            }
        }

    }
}
void Train::sort_num()
{
    Train temp;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (trains[i].TrainNumber > trains[j].TrainNumber)
            {
                temp = trains[i]; trains[i] = trains[j]; trains[j] = temp;
            }
        }
    }
}
void Train::sort()
{
    Train temp;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (trains[i].destination > trains[j].destination)
            {
                temp = trains[i]; trains[i] = trains[j]; trains[j] = temp;
            }

        }
    }
}
void Train::random_input()
{
    for (int i = 0; i < N; i++)
    {
        trains[i].destination = name_city[(int)(rand() % count_city)];
        trains[i].TrainNumber = rand() % (max_num - min_hours + 1) + min_hours;
        trains[i].hours = rand() % (max_hours - min_num + 1) + min_num;;
        trains[i].minutes = rand() % m_minutes;
    }
}
void Train::inform()
{
    int info;
    cout << "\nВведите номер поезда: ";
    cin >> info;
    for (int i = 0; i < 5; i++) {
        if (trains[i].TrainNumber == info) {
            cout << "\n\nПоезд №" << trains[i].TrainNumber;
            cout << "\nПункт назначения: " << trains[i].destination;
            cout << "\nВремя отправления поезда: ";
            trains[i].PrintTime();
        }
    }
}
void Train::title_pr()
{
    cout << "Destination" << setw(15) << "TrainNumber" << setw(18) << "Hours" << setw(18) << "Minutes" << endl;
    for (int i = 0; i < N; i++)
    {
        trains[i].print();
    }
}

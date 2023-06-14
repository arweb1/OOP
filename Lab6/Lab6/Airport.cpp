#include "Airport.h"
Airport obj[7];
void Airport::Change(Airport& obj, string& _city_point, int _speed, int _size)
{
    obj.city_point = _city_point;
    obj.speed = _speed;
    obj.size = _size;
    //obj.dimensions = _dimensions;

}
//јэропорт (населенный пункт, пропускна€ способность, вместительность)
void Airport::Sort()
{
    Airport temp;
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (obj[i].speed > obj[j].speed) {
                temp = obj[i];
                obj[i] = obj[j];
                obj[j] = temp;
            }
        }
    }
}
void Airport::Show()
{
    
    cout << "                  јэропорт:                        \n";
    cout << "------------------------------------------------------------\n";
    cout << "населенный пункт | пропускна€ способность | вместительность\n";
    cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 7; i++) {
        cout << obj[i].city_point << setw(10) << obj[i].speed << setw(10) << obj[i].size << endl;
    }
    cout << "----------------------------------------------------------------\n";
}

void Airport::autocomplete() {
    string city_point1 = "City1";
    string city_point2 = "City2";
    string city_point3 = "City3";
    string city_point4 = "City4";
    string city_point5 = "City5";
    string city_point6 = "City6";
    string city_point7 = "City7";
    Change(obj[2], city_point1, 1, 1);
    Change(obj[1], city_point2, 2, 2);
    Change(obj[0], city_point3, 3, 3);
    Change(obj[3], city_point4, 4, 4);
    Change(obj[4], city_point5, 5, 5);
    Change(obj[6], city_point6, 6, 6);
    Change(obj[5], city_point7, 7, 7);
}
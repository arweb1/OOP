#include "DataBase.h"

void shapka(void)
{
    cout << "_______________________________________________________________\n";
    cout << "|              Сельскохозяйственные предприятия               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|   Название       Вид        Площадь        Кол. работников  |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void linebuild(void) {
    cout << "\n|-------------------------------------------------------------|\n";
}
void DataBase::AddRecord(string* _name, char* _dangerZone, int _moveEl, int _moveDir) {
    if (col >= 12) return;
    else col++;
    rows[col - 1] = new Provodnik(_name, _dangerZone, _moveEl, _moveDir);
    sorted = 0;
}

void DataBase::DeleteRecord() {
    if (col <= 0) return;
    delete  rows[col - 1];
    col--;
}

void DataBase::Sort() {
    string s1;
    string s2;
    if (col < 2) return;
    Provodnik* temp;

    for (int i = 0; i < col; i++)
        for (int j = i + 1; j < col; j++) {
            s1 = rows[i]->ReturnName();
            s2 = rows[j]->ReturnName();
            if (s1 > s2) {
                temp = rows[i];
                rows[i] = rows[j];
                rows[j] = temp;
            }
        }
    sorted = 1;
}

ostream& operator<<(ostream& stream, DataBase& o1) {
    stream << o1.title << endl;
    if (o1.sorted == 0) stream << "Таблица не отсортирована.\n";
    else stream << "Таблица отсортирована.\n";
    shapka();
    if (!o1.col) stream << "Таблица пуста.";
    else {
        for (int i = 0; i < o1.col; i++) {
            stream << *o1.rows[i];
        }
    }
    return stream;
}

ostream& operator<<(ostream& stream, Provodnik& o1) {
    stream << "|" << setw(10) << o1.name << "  |  ";
    stream << setw(5) << o1.type << "|";
    stream << setw(18) << o1.square << "  |";
    stream << setw(17) << o1.count << "  |"; //endl;
    linebuild();
    return stream;
}
Provodnik::Provodnik(string* _name, char* _dangerZone, int _movementEl, int _movementDir) {
    name = *_name;
    type = *_dangerZone;
    square = _movementEl;
    count = _movementDir;
}

void Provodnik::SetFields(string _name, char _dangerZone, int _movementEl, int _movementDir) {
    name = _name;
    type = _dangerZone;
    square = _movementEl;
    count = _movementDir;
}
void Provodnik::GetFields(string& _name, char& _dangerZone, int& _movementEl, int& _movementDir)
{
    _name = name;
    _dangerZone = type;
    _movementEl = square + 100;
    _movementDir = count + 100;
}
void Provodnik::Print() {
    cout << name << " ";
    cout << type << " ";
    cout << square << " ";
    cout << count << " ";
}

#include "Name.h"
string Name::GetName()const
{
    return name;
}

void Name::Fill_Map(const string a, const string b)
{

    m1.insert({ Name(a), Number(b) });

}

map<Name, Number>::iterator Name::Find_Name(const string findKey)
{

    if (m1.find(Name(findKey)) == m1.end()) {
        throw exception("Ёлемент не найден");
    }
    else {

        return  m1.find(Name(findKey));
    }
}

Name::Name()
{
    name = "";
}

Name::Name(const string a)
{
    name = a;
}

void Name::ShowAll()const
{
    for (auto p = begin(m1); p != end(m1); p++) {
        cout << p->first << " " << p->second << endl;
    }
}

void Name::PrinfSome(const string let)
{
    map <Name, Number>::iterator p;
    string _name;
    string s;
    for (p = begin(m1); p != end(m1); p++) {
        _name = const_cast<Name&>(p->first).GetName();
        s = _name[0];
        if (s == let) {
            cout << p->first << " " << p->second << endl;
        }
    }
}

void Name::Delete(const string let)
{
    map <Name, Number>::iterator p;
    string _name;
    string s;
    for (p = begin(m1); p != end(m1);) {
        _name = const_cast<Name&>(p->first).GetName();
        s = _name[0];
        if (s == let) {
            p = m1.erase(p);
        }
        else {
            p++;
        }
    }
    cout << "\n";
}

ostream& operator<<(ostream& s, const Name& ob)
{
    return s << ob.name << "\t";
}

bool operator<(const Name& d1, const Name& d2)
{
    return d1.name < d2.name;
}

/////////////////////////////



Number::Number()
{
    number = "";
}

Number::Number(const string b)
{
    number = b;
}

string Number::GetNumber()const
{
    return number;
}

ostream& operator<<(ostream& s, const Number& ob)
{
    return s << ob.number << "\t";
}
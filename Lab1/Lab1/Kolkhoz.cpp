#include "Kolkhoz.h"
void Kolkhoz::Set(string _name, char _dangerZone, int _movementEl, int _movementDir) {
    name = _name;
    type = _dangerZone;
    square = _movementEl;
    count = _movementDir;
}
void Kolkhoz::Get(string& _name, char& _dangerZone, int& _movementEl, int& _movementDir)
{
    _name = name;
    _dangerZone = type;
    _movementEl = square + 100;
    _movementDir = count + 100;
}
void Kolkhoz::Print() {
    cout << setw(10) << name << " ";
    cout << setw(10) << type << " ";
    cout << setw(18) << square << " ";
    cout << setw(17) << count << " ";
}

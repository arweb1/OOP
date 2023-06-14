#pragma once
class Sum
{
private:
    int x;
    int y;
    int s;
public:
    Sum();
    Sum(int a, int b);
    void set(int a, int b);
    void show();
    int get_sum();
};
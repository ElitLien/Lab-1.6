///////////////
// Time.cpp
///////////////

#include "Time.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void Time::Init(Triad dValue)
{
	setTriad(dValue);
}

void Time::Display() const
{
	t.Display();
}

void Time::Read()
{
	Triad tValue;

	tValue.Read();

	Init(tValue);
}

bool Time::h1(Time d) const
{
	return t.h1(d.getTriad());
}

bool Time::h2(Time d) const
{
	return t.h2(d.getTriad());
}

bool Time::m1(Time d) const
{
	return t.m1(d.getTriad());
}

bool Time::m2(Time d) const
{
	return t.m2(d.getTriad());
}

bool Time::s1(Time d) const
{
	return t.s1(d.getTriad());
}

bool Time::s2(Time d) const
{
	return t.s2(d.getTriad());
}

const string Time::toString()
{
	stringstream sout;

	sout << t.toString();

	return sout.str();
}

bool Time::Triad::setFirst(int value)
{
    if (value > -1 && value < 24)
    {
        first = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Time::Triad::setSecond(int value)
{
    if (value > -1 && value < 60)
    {
        second = value;
        return true;
    }
    else
    {
        return false;
    }
}

bool Time::Triad::setThird(int value)
{
    if (value > -1 && value < 60)
    {
        third = value;
        return true;
    }
    else
    {
        return false;
    }
}

void Time::Triad::Init(int firstValue, int secondValue, int thirdValue)
{
    setFirst(firstValue);
    setSecond(secondValue);
    setThird(thirdValue);
}

void Time::Triad::Display() const
{
    cout << first << "." << second << "." << third << endl;
}

void Time::Triad::Read()
{
    int firstValue;
    int secondValue;
    int thirdValue;

    cout << "Enter triad " << endl << endl;
    cout << "first =  "; cin >> firstValue;
    cout << "second =  "; cin >> secondValue;
    cout << "third =  "; cin >> thirdValue;

    Init(firstValue, secondValue, thirdValue);
}

bool Time::Triad::h1(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return false;
}
bool Time::Triad::h2(Triad t) const
{
    if (first < t.first)
    {
        return true;
    }
    if (first > t.first)
    {
        return false;
    }

    if (second < t.second)
    {
        return true;
    }
    if (second > t.second)
    {
        return false;
    }

    if (third < t.third)
    {
        return true;
    }
    if (third > t.third)
    {
        return false;
    }

    return true;
}
bool Time::Triad::m1(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return true;
    }

    return false;
}
bool Time::Triad::m2(Triad t) const
{
    if ((first == t.first) && (second == t.second) && (third == t.third))
    {
        return false;
    }

    return true;
}
bool Time::Triad::s1(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return false;
}
bool Time::Triad::s2(Triad t) const
{
    if (first < t.first)
    {
        return false;
    }
    if (first > t.first)
    {
        return true;
    }

    if (second < t.second)
    {
        return false;
    }
    if (second > t.second)
    {
        return true;
    }

    if (third < t.third)
    {
        return false;
    }
    if (third > t.third)
    {
        return true;
    }

    return true;
}
const string Time::Triad::toString()
{
    stringstream sout;

    sout << first << "." << second << "." << third;

    return sout.str();
}
double Time::Triad::check()
{
    return first > second;
}

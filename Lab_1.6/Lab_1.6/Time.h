///////////////
// Time.h
///////////////

#pragma once
#include <string>

using namespace std;

class Time
{
public:
	class Triad
	{
	private:
		int first;
		int second;
		int third;
	public:
		int getFirst() const { return first; }
		int getSecond() const { return second; }
		int getThird() const { return third; }

		bool setFirst(int);
		bool setSecond(int);
		bool setThird(int);

		void Init(int firstValue, int secondValue, int thirdValue);
		void Display() const;
		void Read();
		const string toString();

		bool h1(Triad t) const;
		bool h2(Triad t) const;
		bool m1(Triad t) const;
		bool m2(Triad t) const;
		bool s1(Triad t) const;
		bool s2(Triad t) const;

		double check();
	};
	Triad getTriad() const { return t; }

	void setTriad(Triad tValue) { t = tValue; }

	void Init(Triad t);
	void Display() const;
	void Read();
	const string toString();

	bool h1(Time d) const;
	bool h2(Time d) const;
	bool m1(Time d) const;
	bool m2(Time d) const;
	bool s1(Time d) const;
	bool s2(Time d) const;
private:
	Time::Triad t;
};


#include <Windows.h>
#include "Music.h"

void Music::c(int duration)
{
	Beep(261.63, duration);
}

void Music::d(int duration)
{
	Beep(293.66, duration);
}

void Music::e(int duration)
{
	Beep(329.63, duration);
}

void Music::f(int duration)
{
	Beep(349.23, duration);
}

void Music::g(int duration)
{
	Beep(392, duration);
}

void Music::a(int duration)
{
	Beep(440, duration);
}

void Music::h(int duration)
{
	Beep(493.88, duration);
}

void Music::error()
{
	d(100);
	c(100);
}

void Music::win()
{
	c(100);
	c(100);
	e(100);
	g(100);
	e(100);
	g(300);
}

void Music::lose()
{
	a(500);
	e(500);
	c(500);
	a(800);
}

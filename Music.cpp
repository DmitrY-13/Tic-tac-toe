#include "Music.h"

void Music::C(int duration) {
	Beep(261.63, duration);
}

void Music::D(int duration) {
	Beep(293.66, duration);
}

void Music::E(int duration) {
	Beep(329.63, duration);
}

void Music::F(int duration) {
	Beep(349.23, duration);
}

void Music::G(int duration) {
	Beep(392, duration);
}

void Music::A(int duration) {
	Beep(440, duration);
}

void Music::H(int duration) {
	Beep(493.88, duration);
}

void Music::Error() {
	D(100);
	C(100);
}

void Music::Win() {
	C(100);
	C(100);
	E(100);
	G(100);
	E(100);
	G(300);
}

void Music::Lose() {
	A(500);
	E(500);
	C(500);
	A(800);
}

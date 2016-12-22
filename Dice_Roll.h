#pragma once

class Dice {

private:
	int size;
	int *dicelist;
	int stored_value;
	int count;

public:
	Dice(int s);
	~Dice();
	int roll();
	int total();
	void print();
	void reset();
};
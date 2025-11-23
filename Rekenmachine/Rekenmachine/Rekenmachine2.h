#pragma once
class Rekenmachine2
{
public:
	Rekenmachine2();
	~Rekenmachine2();
private:
	int AskNumberInt();
	float AskNumberFloat();
	void Add(float a, float b);
	void Minus(float a, float b);
	void Times(float a, float b);
	void Devided(float a, float b);
	void Modulo(int a, int b);

};
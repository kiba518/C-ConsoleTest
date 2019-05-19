#include "pch.h"
#include "classtest.h" 
classtest::classtest()
{
} 
classtest::~classtest()
{
}
int classtest::excute(int id)
{
	this->id = id;
	return this->id;
}
int classtest::dosomething()
{
	this->number = 520;
	return this->number;
}
#include "CSClassList.h"

CSClassList::AddClass(const string N_STRING)
{
	if(!isFull)
	{
		nameAr[index] = N_STRING;
	}
}

CSClassList::IsFull() const
{
	if(index == AR_SIZE)
	{
		isFull = true;
	}
	else
	{
		isFull = false;
	}

	return isFull;
}

	

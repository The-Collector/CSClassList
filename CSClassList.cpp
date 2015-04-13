#include "CSClassList.h"

CSClassList::CSClassList()
{
	currIndex = 0;
	isFull    = false;
}

CSClassList::~CSClassList() { }

CSClassList::AddClass(const string N_STRING)
{
	if(!isFull)
	{
		nameAr[index] = N_STRING;
		size++;
	}
}

CSClassList::IsFull() const
{
	if(index == AR_SIZE)
		isFull = true;
	else
		isFull = false;

	return isFull;
}

CSClassList::GetLongestName() const
{
	string longestName;

	longestName.clear();

	for(int i = 0; i < AR_SIZE; i++)
		if(nameAr[i] > longestName)
			longestName = nameAr[i];

	return longestName;
}

CSCLassList::DisplayName(int index) const
{
	return nameAr[index];
}

CSCLassList::GetNumClass()
{
	return size;
}

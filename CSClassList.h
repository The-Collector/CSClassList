#ifndef CSCLASSLIST_H_
#define CSCLASSLIST_H_

class CSClassList
{
	public:
		CSClassList();
		virtual ~CSClassList();

		void AddClass(const string N_STRING);
		string GetLongestName() const;
		int GetNumClass() const;
		string DisplayName(int index) const;
		bool IsFull() const;

	private:
		static const int AR_SIZE = 10;
		int currIndex;
		string nameAr[AR_SIZE];

};

#endif

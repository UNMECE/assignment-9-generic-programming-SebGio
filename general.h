#ifndef GENERAL_H
#define GENERAL_H

template <typename T>
class General
{
	private:
		T* data;
		int size();
	public:
		~General();

		void addElement(T);
		T at(int n);
		T sum();
		T max();
		T min();
		*T slice(int begin, int end);
}

#endif

#ifndef STACK1_H_
#pragma once
#include <iostream>

using namespace std;

template <typename T>
class stack
{
private:
	T * array_;
	size_t array_size_;
	size_t count_;
public:
	stack();
	stack(const stack&);
	~stack();
	auto count() const noexcept->size_t;
	auto push(T const &)->void;
	auto pop()->T;
	auto top() const->T&;
	auto operator=(const stack&tmp)->stack&;
//	auto print()->void;
};
#endif 

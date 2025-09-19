#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept> //std::runtime_error
#include <algorithm> // sort
#include <climits> // LONG_MAX

class Span {
	private:
		unsigned int		_capacity;
		std::vector<int>	_v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int nb);

		int shortestSpan() const;
		int longestSpan() const;
};

#endif
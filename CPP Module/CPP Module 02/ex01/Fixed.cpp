#include "Fixed.hpp"

const int Fixed::frac_ = 8;

Fixed::Fixed() : fixedPointNumber_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x) {
	std::cout << "Int constructor called" << std::endl;
	fixedPointNumber_ = x << Fixed::frac_;
}

Fixed::Fixed(const float x) {
	std::cout << "Float constructor called" << std::endl;
	fixedPointNumber_ = roundf(x * (1 << Fixed::frac_));
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	(*this) = f;
}

Fixed &Fixed::operator=(const Fixed &f) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointNumber_ = f.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return fixedPointNumber_;
}

void Fixed::setRawBits(int const raw) {
	fixedPointNumber_ = raw;
}

float Fixed::toFloat(void) const {
	return (float)fixedPointNumber_ / (1 << Fixed::frac_);
}

int Fixed::toInt(void) const {
	return fixedPointNumber_ >> 8;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	std::cout << f.toFloat();
	return out;
}
/**
 * @file type_traits.hpp
 * @author Minjune (minjune8506@gmail.com)
 * @brief reimplement type_trais header
 * @date 2022-07-23
 */
#ifndef IS_INTEGRAL_HPP
# define IS_INTEGRAL_HPP

namespace ft
{
template <bool, typename T = void>
struct enable_if { };

template <typename T>
struct enable_if<true, T> { typedef T type; };

struct false_type {
	typedef bool value_type;
	typedef false_type type;
	static const value_type value = false;
};

struct true_type {
	typedef bool value_type;
	typedef true_type type;
	static const value_type value = true;
};

template <typename T>
struct is_integral {
	typedef false_type Integral;
};

template <>
struct is_integral<bool> {
	typedef true_type Integral;
};

template <>
struct is_integral<char> {
	typedef true_type Integral;
};

template <>
struct is_integral<char16_t> {
	typedef true_type Integral;
};

template <>
struct is_integral<char32_t> {
	typedef true_type Integral;
};

template <>
struct is_integral<wchar_t> {
	typedef true_type Integral;
};

template <>
struct is_integral<signed char> {
	typedef true_type Integral;
};

template <>
struct is_integral<short int> {
	typedef true_type Integral;
};

template <>
struct is_integral<int> {
	typedef true_type Integral;
};

template <>
struct is_integral<long int> {
	typedef true_type Integral;
};

template <>
struct is_integral<long long int> {
	typedef true_type Integral;
};

template <>
struct is_integral<unsigned char> {
	typedef true_type Integral;
};

template <>
struct is_integral<unsigned short int> {
	typedef true_type Integral;
};

template <>
struct is_integral<unsigned int> {
	typedef true_type Integral;
};

template <>
struct is_integral<unsigned long int> {
	typedef true_type Integral;
};

template <>
struct is_integral<unsigned long long int> {
	typedef true_type Integral;
};
} // namespace ft

#endif

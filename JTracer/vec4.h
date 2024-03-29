#pragma once

#include <cmath>
#include <iostream>

using std::sqrt;

class vec4
{
public:
	vec4() : e{ 0,0,0,0 } {};
	vec4(double e0, double e1, double e2, double e3) : e{ e0,e1,e2,e3 } {};

	double r() const { return e[0]; }
	double g() const { return e[1]; }
	double b() const { return e[2]; }
	double a() const { return e[3]; }

	vec4 operator-() const { return vec4{ -e[0], -e[1], -e[2], -e[3]}; }
	double operator[](int i) const { return e[i]; }
	double& operator[](int i) { return e[i]; }

	vec4 operator+=(const vec4& v)
	{
		e[0] += v.e[0];
		e[1] += v.e[1];
		e[2] += v.e[2];
		e[3] += v.e[3];

		return *this;
	}

	vec4 operator*=(const double t)
	{
		e[0] *= t;
		e[1] *= t;
		e[2] *= t;
		e[3] *= t;

		return *this;
	}

	vec4 operator/=(const double t)
	{
		return *this *= 1 / t;
	}

	double length() const
	{
		return sqrt(length_squared());
	}

	double length_squared() const
	{
		return e[0] * e[0] + e[1] * e[1] + e[2] * e[2] + e[3] * e[3];
	}

public:
	double e[4];
};

using point4 = vec4;
using color4 = vec4;


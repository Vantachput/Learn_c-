struct Rational
{
	Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator) {}
	void add(Rational rational) {
		numerator_ = numerator_ * rational.denominator_ + rational.numerator_ * denominator_;
		denominator_ *= rational.denominator_;
	};
	void sub(Rational rational) {
		numerator_ = numerator_ * rational.denominator_ - rational.numerator_ * denominator_;
		denominator_ *= rational.denominator_;
	};
	void mul(Rational rational)  {
		numerator_ *= rational.numerator_;
		denominator_ *= rational.denominator_;
	};
	void div(Rational rational) {
		numerator_ *= rational.denominator_;
		denominator_ *= rational.numerator_;
	};

	void neg() {
		numerator_ = -numerator_;
	};
	void inv();
	Rational& operator+=(Rational  b) {
		this->add(b);
		return *this;
	}
	Rational& operator-=(Rational b) {
		this->sub(b);
		return *this;
	}
	Rational& operator*=(Rational b) {
		this->mul(b);
		return *this;
	}
	Rational& operator/=(Rational b) {
		this->div(b);
		return *this;
	}
	Rational operator+() const {
		return *this;
	}
	Rational operator-() const {
		return Rational(-numerator_, denominator_);
	}
	double to_double()const {
		return (double)numerator_ / (double)denominator_;
	}
	bool NSK(Rational const& b) {
		int NSK = 1;
		for (int i = 2; i != 900000;++i) {
			if (i % denominator_ == 0 && i % b.denominator_ == 0) NSK = i;
		}
		if ((numerator_ * (NSK / denominator_) - b.numerator_ * (NSK / b.denominator_)) < 0)return true;
		else return false;
	}
	operator double() {
		return this->to_double();
	}
private:
	int numerator_;
	int denominator_;
};

Rational operator+(Rational x, Rational const& y) {
	return x += y;
}

Rational operator-(Rational x, Rational const& y) {
	return x -= y;
}

Rational operator*(Rational x, Rational const& y) {
	return x *= y;
}

Rational operator/(Rational x, Rational const& y) {
	return x /= y;
}

bool operator<(Rational a, Rational const& b) {
	return a.NSK(b);
}

bool operator==(Rational const& a, Rational const& b) {
	return !(a < b) && !(b < a);
}

bool operator!=(Rational const& a, Rational const& b) {
	return !(a == b);
}


bool operator>(Rational const& a, Rational const& b) {
	return b < a;
}

bool operator>=(Rational const& a, Rational const& b) {
	return !(a < b);
}

bool operator<=(Rational const& a, Rational const& b) {
	return !(b < a);
}

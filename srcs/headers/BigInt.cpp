#include "BigInt.h"

NTL::ZZ BigInt::GCD(NTL::ZZ a, NTL::ZZ b) {
	if (a < 0) a = -a;
	if (b < 0) b = -b;

	NTL::ZZ remainder;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}

	return a;
}

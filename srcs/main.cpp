#include <NTL/ZZ.h>
#include <iostream>
#include <string>
#include "headers/BigInt.h"

using namespace NTL;
using namespace std;

int main() {
	ZZ gcd_result = BigInt::GCD(ZZ(48), ZZ(18));

	cout << "GCD of 48 and 18 is: " << gcd_result << endl;

    return 0;
}

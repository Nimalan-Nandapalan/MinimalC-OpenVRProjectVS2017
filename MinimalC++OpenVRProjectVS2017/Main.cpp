#include <iostream>
#include "include\openvr.h"

using namespace std;
using namespace vr;

int main(int argc, char *argv[])
{
	if (VR_IsHmdPresent())
		cout << "HMD detected" << endl;

	return 0;
}
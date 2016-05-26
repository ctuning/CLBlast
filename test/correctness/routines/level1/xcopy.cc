
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. This
// project loosely follows the Google C++ styleguide and uses a tab-size of two spaces and a max-
// width of 100 characters per line.
//
// Author(s):
//   Cedric Nugteren <www.cedricnugteren.nl>
//
// =================================================================================================

#include "correctness/testblas.h"
#include "routines/level1/xcopy.h"

// Shortcuts to the clblast namespace
using float2 = clblast::float2;
using double2 = clblast::double2;

// Main function (not within the clblast namespace)
int main(int argc, char *argv[]) {
  clblast::RunTests<clblast::TestXcopy<float>, float, float>(argc, argv, false, "SCOPY");
  clblast::RunTests<clblast::TestXcopy<double>, double, double>(argc, argv, true, "DCOPY");
  clblast::RunTests<clblast::TestXcopy<float2>, float2, float2>(argc, argv, true, "CCOPY");
  clblast::RunTests<clblast::TestXcopy<double2>, double2, double2>(argc, argv, true, "ZCOPY");
  clblast::RunTests<clblast::TestXcopy<half>, half, half>(argc, argv, true, "HCOPY");
  return 0;
}

// =================================================================================================

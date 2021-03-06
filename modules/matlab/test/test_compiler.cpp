/*
 * file:   rand.cpp
 * author: A trusty code generator
 * date:   Wed, 19 Jun 2013 11:15:15
 *
 * This file was autogenerated, do not modify.
 * See LICENCE for full modification and redistribution details.
 * Copyright 2013 The OpenCV Foundation
 */
#include "mex.h"
#include <vector>

/*
 * rand
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  try {
    rand();
  } catch(...) {
    mexErrMsgTxt("Uncaught exception occurred in rand");
  }
}

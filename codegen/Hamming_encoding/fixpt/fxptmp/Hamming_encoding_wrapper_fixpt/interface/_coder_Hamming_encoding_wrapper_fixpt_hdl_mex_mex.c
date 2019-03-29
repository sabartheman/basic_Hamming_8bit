/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Hamming_encoding_wrapper_fixpt_hdl_mex_mex.c
 *
 * Code generation for function '_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_mex'
 *
 */

/* Include files */
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_mex.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_initialize.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[2] = { "Hamming_encoding_wrapper_fixpt",
  "Hamming_encoding_fixpt_logger" };

/* Function Declarations */
static void d_Hamming_encoding_fixpt_logger(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs);
static void d_Hamming_encoding_wrapper_fixp(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void d_Hamming_encoding_fixpt_logger(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        29, "Hamming_encoding_fixpt_logger");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 29,
                        "Hamming_encoding_fixpt_logger");
  }

  /* Call the function. */
  Hamming_encoding_fixpt_logger_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

static void d_Hamming_encoding_wrapper_fixp(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        30, "Hamming_encoding_wrapper_fixpt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 30,
                        "Hamming_encoding_wrapper_fixpt");
  }

  /* Call the function. */
  Hamming_encoding_wrapper_fixpt_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(Hamming_encoding_wrapper_fixpt_hdl_mex_atexit);

  /* Module initialization. */
  Hamming_encoding_wrapper_fixpt_hdl_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 2)) {
   case 0:
    d_Hamming_encoding_wrapper_fixp(nlhs, plhs, nrhs - 1, *(const mxArray *(*)[1])
      &prhs[1]);
    break;

   case 1:
    d_Hamming_encoding_fixpt_logger(nlhs, plhs, nrhs - 1);
    break;
  }

  /* Module termination. */
  Hamming_encoding_wrapper_fixpt_hdl_mex_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_mex.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_encoding_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'Hamming_encoding_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_mex.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void Hamming_encoding_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  out_encoded_TB_logger_free();
  data_TB_logger_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
}

void Hamming_encoding_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Hamming_encoding_wrapper_fixpt_hdl_mex_terminate.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_decoding_wrapper_fixpt.c
 *
 * Code generation for function 'Hamming_decoding_wrapper_fixpt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Hamming_decoding_fixpt_logger.h"
#include "Hamming_decoding_wrapper_fixpt.h"
#include "Hamming_decoding_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  1,                                   /* colNo */
  "Hamming_decoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/Hamming_decoding_fixpt.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 53,/* lineNo */
  1,                                   /* colNo */
  "Hamming_decoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/Hamming_decoding_fixpt.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 9,     /* lineNo */
  "Hamming_decoding_wrapper_fixpt",    /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/Hamming_decoding_wrapper_fixpt.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "Hamming_decoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/Hamming_decoding_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  12,                                  /* iLast */
  49,                                  /* lineNo */
  31,                                  /* colNo */
  "hammingCode",                       /* aName */
  "Hamming_decoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/Hamming_decoding_fixpt.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Hamming_decoding_wrapper_fixpt(const emlrtStack *sp, const real_T
  input_encoded[12], real_T output[12], real_T *errorPosition)
{
  int32_T hammingCode_tmp;
  real_T d0;
  uint8_T input_encoded_in[12];
  uint8_T hammingCode[12];
  uint8_T parityErrors[4];
  uint8_T errorBit;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 12 };

  uint8_T *pData;
  int32_T i;
  const mxArray *m1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  for (hammingCode_tmp = 0; hammingCode_tmp < 12; hammingCode_tmp++) {
    d0 = muDoubleScalarFloor(input_encoded[hammingCode_tmp]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 2.0);
    }

    input_encoded_in[hammingCode_tmp] = (uint8_T)((uint8_T)(int8_T)d0 & 1);
  }

  st.site = &emlrtRSI;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  for (hammingCode_tmp = 0; hammingCode_tmp < 12; hammingCode_tmp++) {
    hammingCode[hammingCode_tmp] = input_encoded_in[hammingCode_tmp];
  }

  /* intializing vector for possible error positions */
  parityErrors[0] = 0U;
  parityErrors[1] = 0U;
  parityErrors[2] = 0U;
  parityErrors[3] = 0U;

  /* sets the first parity bit, if the sum of the checked values is even then */
  /* the result is 0, odd = 1 */
  if (input_encoded_in[0] != (((((((((input_encoded_in[2] != 0) ^
              (input_encoded_in[4] != 0)) != 0) ^ (input_encoded_in[6] != 0)) !=
           0) ^ (input_encoded_in[8] != 0)) != 0) ^ (input_encoded_in[10] != 0))
       != 0)) {
    parityErrors[0] = 1U;
  }

  /* sets the second parity bit */
  if (input_encoded_in[1] != (((((((((input_encoded_in[2] != 0) ^
              (input_encoded_in[5] != 0)) != 0) ^ (input_encoded_in[6] != 0)) !=
           0) ^ (input_encoded_in[9] != 0)) != 0) ^ (input_encoded_in[10] != 0))
       != 0)) {
    parityErrors[1] = 2U;
  }

  /* sets the third parity bit */
  if (input_encoded_in[3] != (((((((input_encoded_in[4] != 0) ^
            (input_encoded_in[5] != 0)) != 0) ^ (input_encoded_in[6] != 0)) != 0)
        ^ (input_encoded_in[11] != 0)) != 0)) {
    parityErrors[2] = 4U;
  }

  /* sets the fourth paritybit */
  if (input_encoded_in[7] != (((((((input_encoded_in[8] != 0) ^
            (input_encoded_in[9] != 0)) != 0) ^ (input_encoded_in[10] != 0)) !=
         0) ^ (input_encoded_in[11] != 0)) != 0)) {
    parityErrors[3] = 8U;
  }

  /* finding how paritybits are wrong + 1 */
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }

  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }

  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }

  errorBit = (uint8_T)((int32_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
    ((uint32_T)parityErrors[0] + parityErrors[1]) + parityErrors[2]) +
    parityErrors[3]) & 15);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }

  /* corrects the 1 bit flip in the hamming code */
  if (errorBit > 0) {
    if (errorBit > 12) {
      emlrtDynamicBoundsCheckR2012b(errorBit, 1, 12, &emlrtBCI, &st);
    }

    hammingCode_tmp = errorBit - 1;
    hammingCode[hammingCode_tmp] = (uint8_T)(input_encoded_in[hammingCode_tmp] ==
      0);
  }

  y = NULL;
  b_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxUINT8_CLASS, mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m0);
  hammingCode_tmp = 0;
  for (i = 0; i < 12; i++) {
    pData[hammingCode_tmp] = hammingCode[i];
    hammingCode_tmp++;
  }

  emlrtAssign(&b_y, m0);
  emlrtAssign(&y, emlrtCreateFIR2013b(&st, eml_mx, b_eml_mx, "simulinkarray",
    b_y, true, false));
  emlrtDisplayR2012b(y, "output", &emlrtRTEI, &st);
  y = NULL;
  b_y = NULL;
  m1 = emlrtCreateNumericMatrix(1, 1, mxUINT8_CLASS, mxREAL);
  *(uint8_T *)emlrtMxGetData(m1) = errorBit;
  emlrtAssign(&b_y, m1);
  emlrtAssign(&y, emlrtCreateFIR2013b(&st, eml_mx, c_eml_mx, "simulinkarray",
    b_y, true, false));
  emlrtDisplayR2012b(y, "errorPosition", &b_emlrtRTEI, &st);
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_Hamming_decoding_fixpt_logger(&c_st, input_encoded_in, hammingCode, errorBit);
  for (hammingCode_tmp = 0; hammingCode_tmp < 12; hammingCode_tmp++) {
    output[hammingCode_tmp] = hammingCode[hammingCode_tmp];
  }

  *errorPosition = errorBit;
}

/* End of code generation (Hamming_decoding_wrapper_fixpt.c) */

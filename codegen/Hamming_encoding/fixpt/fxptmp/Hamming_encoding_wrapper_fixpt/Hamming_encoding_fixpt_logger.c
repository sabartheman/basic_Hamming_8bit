/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_encoding_fixpt_logger.c
 *
 * Code generation for function 'Hamming_encoding_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_uint8_T *p;
static boolean_T p_not_empty;
static emxArray_uint8_T *b_p;
static boolean_T b_p_not_empty;
static emlrtRSInfo d_emlrtRSI = { 13,  /* lineNo */
  "Hamming_encoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 14,  /* lineNo */
  "Hamming_encoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 25,  /* lineNo */
  "Hamming_encoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 26,  /* lineNo */
  "Hamming_encoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 18,  /* lineNo */
  20,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 18,  /* lineNo */
  13,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 30,/* lineNo */
  16,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 49,/* lineNo */
  16,                                  /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 45,/* lineNo */
  9,                                   /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 64,/* lineNo */
  9,                                   /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 24,/* lineNo */
  9,                                   /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 44,/* lineNo */
  9,                                   /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 63,/* lineNo */
  9,                                   /* colNo */
  "Hamming_encoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pName */
};

static emlrtRSInfo q_emlrtRSI = { 18,  /* lineNo */
  "Hamming_encoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_data_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_out_encoded_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void data_TB_logger(const emlrtStack *sp, const uint8_T v[8]);
static void out_encoded_TB_logger(const emlrtStack *sp, const uint8_T v[12]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 2, pArrays, "MException", true,
    location);
}

static void b_data_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i5;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &r_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i5 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i5, &n_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    out->data[i5] = p->data[i5];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void b_out_encoded_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i6;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &s_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i6 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i6, &o_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    out->data[i6] = b_p->data[i6];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void data_TB_logger(const emlrtStack *sp, const uint8_T v[8])
{
  int32_T i1;
  int32_T i2;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i1 = p->size[1];
  i2 = p->size[0] * p->size[1];
  p->size[1] = i1 + 8;
  emxEnsureCapacity_uint8_T(sp, p, i2, &l_emlrtRTEI);
  for (i2 = 0; i2 < 8; i2++) {
    p->data[i1 + i2] = v[i2];
  }

  p_not_empty = true;
}

static void out_encoded_TB_logger(const emlrtStack *sp, const uint8_T v[12])
{
  int32_T i3;
  int32_T i4;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i3 = b_p->size[1];
  i4 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i3 + 12;
  emxEnsureCapacity_uint8_T(sp, b_p, i4, &m_emlrtRTEI);
  for (i4 = 0; i4 < 12; i4++) {
    b_p->data[i3 + i4] = v[i4];
  }

  b_p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void Hamming_encoding_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &q_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &f_emlrtRSI;
  b_data_TB_logger(&st, loggedData->inputs.data);
  st.site = &g_emlrtRSI;
  b_out_encoded_TB_logger(&st, loggedData->outputs.out_encoded);
  loggedData->iterCount = iterCount;
}

void b_Hamming_encoding_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[8], const uint8_T varargin_2[12])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  data_TB_logger(&st, varargin_1);
  st.site = &e_emlrtRSI;
  out_encoded_TB_logger(&st, varargin_2);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 30, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 34, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    st.site = &q_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void c_Hamming_encoding_fixpt_logger(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void data_TB_logger_free(void)
{
  emxFree_uint8_T(&p);
}

void data_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &p, 2, &j_emlrtRTEI, false);
  p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void out_encoded_TB_logger_free(void)
{
  emxFree_uint8_T(&b_p);
}

void out_encoded_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &b_p, 2, &k_emlrtRTEI, false);
  b_p_not_empty = false;
}

/* End of code generation (Hamming_encoding_fixpt_logger.c) */

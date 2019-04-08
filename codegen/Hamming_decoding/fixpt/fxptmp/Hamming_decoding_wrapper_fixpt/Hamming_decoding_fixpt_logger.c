/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_decoding_fixpt_logger.c
 *
 * Code generation for function 'Hamming_decoding_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_decoding_fixpt_logger.h"
#include "Hamming_decoding_wrapper_fixpt.h"
#include "Hamming_decoding_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_uint8_T *p;
static boolean_T p_not_empty;
static emxArray_uint8_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_uint8_T *c_p;
static boolean_T c_p_not_empty;
static emlrtRSInfo d_emlrtRSI = { 13,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 14,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 15,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 26,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 27,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 28,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  20,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 19,  /* lineNo */
  13,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 34,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 53,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 72,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 70,/* lineNo */
  16,                                  /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 47,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 66,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 85,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 46,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 84,/* lineNo */
  9,                                   /* colNo */
  "Hamming_decoding_fixpt_logger",     /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pName */
};

static emlrtRSInfo j_emlrtRSI = { 19,  /* lineNo */
  "Hamming_decoding_fixpt_logger",     /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/fixpt/fxptmp/Hamming_decoding_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_errorPosition_TB_logger(const emlrtStack *sp, emxArray_uint8_T
  *out);
static void b_input_encoded_TB_logger(const emlrtStack *sp, emxArray_uint8_T
  *out);
static void b_output_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void errorPosition_TB_logger(const emlrtStack *sp, uint8_T v);
static void input_encoded_TB_logger(const emlrtStack *sp, const uint8_T v[12]);
static void output_TB_logger(const emlrtStack *sp, const uint8_T v[12]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 2, pArrays, "MException", true,
    location);
}

static void b_errorPosition_TB_logger(const emlrtStack *sp, emxArray_uint8_T
  *out)
{
  int32_T i8;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &p_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i8 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = c_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i8, &k_emlrtRTEI);
  loop_ub = c_p->size[0] * c_p->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    out->data[i8] = c_p->data[i8];
  }

  c_p->size[0] = 1;
  c_p->size[1] = 0;
  c_p_not_empty = false;
}

static void b_input_encoded_TB_logger(const emlrtStack *sp, emxArray_uint8_T
  *out)
{
  int32_T i6;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i6 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i6, &i_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    out->data[i6] = p->data[i6];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void b_output_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i7;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &o_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i7 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i7, &j_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    out->data[i7] = b_p->data[i7];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void errorPosition_TB_logger(const emlrtStack *sp, uint8_T v)
{
  int32_T i4;
  int32_T i5;
  if (!c_p_not_empty) {
    c_p->size[0] = 1;
    c_p->size[1] = 0;
    c_p_not_empty = false;
  }

  i4 = c_p->size[1];
  i5 = c_p->size[0] * c_p->size[1];
  c_p->size[1] = i4 + 1;
  emxEnsureCapacity_uint8_T(sp, c_p, i5, &h_emlrtRTEI);
  c_p->data[i4] = v;
  c_p_not_empty = true;
}

static void input_encoded_TB_logger(const emlrtStack *sp, const uint8_T v[12])
{
  int32_T i0;
  int32_T i1;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i0 = p->size[1];
  i1 = p->size[0] * p->size[1];
  p->size[1] = i0 + 12;
  emxEnsureCapacity_uint8_T(sp, p, i1, &f_emlrtRTEI);
  for (i1 = 0; i1 < 12; i1++) {
    p->data[i0 + i1] = v[i1];
  }

  p_not_empty = true;
}

static void output_TB_logger(const emlrtStack *sp, const uint8_T v[12])
{
  int32_T i2;
  int32_T i3;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i2 = b_p->size[1];
  i3 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i2 + 12;
  emxEnsureCapacity_uint8_T(sp, b_p, i3, &g_emlrtRTEI);
  for (i3 = 0; i3 < 12; i3++) {
    b_p->data[i2 + i3] = v[i3];
  }

  b_p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void Hamming_decoding_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &g_emlrtRSI;
  b_input_encoded_TB_logger(&st, loggedData->inputs.input_encoded);
  st.site = &h_emlrtRSI;
  b_output_TB_logger(&st, loggedData->outputs.output);
  st.site = &i_emlrtRSI;
  b_errorPosition_TB_logger(&st, loggedData->outputs.errorPosition);
  loggedData->iterCount = iterCount;
}

void b_Hamming_decoding_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[12], const uint8_T varargin_2[12], uint8_T varargin_3)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv1[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m3;
  static const int32_T iv2[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  input_encoded_TB_logger(&st, varargin_1);
  st.site = &e_emlrtRSI;
  output_TB_logger(&st, varargin_2);
  st.site = &f_emlrtRSI;
  errorPosition_TB_logger(&st, varargin_3);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 30, m2, &u[0]);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 34, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    st.site = &j_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void c_Hamming_decoding_fixpt_logger(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void errorPosition_TB_logger_free(void)
{
  emxFree_uint8_T(&c_p);
}

void errorPosition_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &c_p, 2, &e_emlrtRTEI, false);
  c_p_not_empty = false;
}

void input_encoded_TB_logger_free(void)
{
  emxFree_uint8_T(&p);
}

void input_encoded_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &p, 2, &c_emlrtRTEI, false);
  p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void output_TB_logger_free(void)
{
  emxFree_uint8_T(&b_p);
}

void output_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &b_p, 2, &d_emlrtRTEI, false);
  b_p_not_empty = false;
}

/* End of code generation (Hamming_decoding_fixpt_logger.c) */

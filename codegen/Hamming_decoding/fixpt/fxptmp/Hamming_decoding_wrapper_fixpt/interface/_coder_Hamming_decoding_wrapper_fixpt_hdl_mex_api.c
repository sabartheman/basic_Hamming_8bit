/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Hamming_decoding_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_Hamming_decoding_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_decoding_fixpt_logger.h"
#include "Hamming_decoding_wrapper_fixpt.h"
#include "_coder_Hamming_decoding_wrapper_fixpt_hdl_mex_api.h"
#include "Hamming_decoding_wrapper_fixpt_hdl_mex_emxutil.h"
#include "Hamming_decoding_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo l_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_Hamming_decoding_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12];
static const mxArray *b_emlrt_marshallOut(const real_T u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12];
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static const mxArray *d_emlrt_marshallOut(const emxArray_uint8_T *u);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *input_encoded, const char_T *identifier))[12];
static const mxArray *emlrt_marshallOut(const real_T u[12]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12]
{
  real_T (*y)[12];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m5);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12]
{
  real_T (*ret)[12];
  static const int32_T dims[2] = { 1, 12 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[12])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[1] = { "input_encoded" };

  const mxArray *c_y;
  static const char * sv2[2] = { "output", "errorPosition" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv1));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    d_emlrt_marshallOut(u.inputs.input_encoded), true, false));
  emlrtSetFieldR2017b(b_y, 0, "input_encoded", c_y, 0);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv2));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    d_emlrt_marshallOut(u.outputs.output), true, false));
  emlrtSetFieldR2017b(b_y, 0, "output", c_y, 0);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray",
    d_emlrt_marshallOut(u.outputs.errorPosition), true, false));
  emlrtSetFieldR2017b(b_y, 0, "errorPosition", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_emlrt_marshallOut(u.iterCount), 2);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m6;
  uint8_T *pData;
  int32_T i9;
  int32_T i;
  y = NULL;
  m6 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m6);
  i9 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i9] = u->data[i];
    i9++;
  }

  emlrtAssign(&y, m6);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *input_encoded, const char_T *identifier))[12]
{
  real_T (*y)[12];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(input_encoded), &thisId);
  emlrtDestroyArray(&input_encoded);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[12])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv3[2] = { 0, 0 };

  static const int32_T iv4[2] = { 1, 12 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, iv4, 2);
  emlrtAssign(&y, m4);
  return y;
}

void Hamming_decoding_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &l_emlrtRTEI, true);

  /* Invoke the target function */
  Hamming_decoding_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Hamming_decoding_wrapper_fixpt_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[2])
{
  real_T (*output)[12];
  real_T (*input_encoded)[12];
  real_T errorPosition;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  output = (real_T (*)[12])mxMalloc(sizeof(real_T [12]));

  /* Marshall function inputs */
  input_encoded = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "input_encoded");

  /* Invoke the target function */
  Hamming_decoding_wrapper_fixpt(&st, *input_encoded, *output, &errorPosition);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*output);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(errorPosition);
  }
}

/* End of code generation (_coder_Hamming_decoding_wrapper_fixpt_hdl_mex_api.c) */

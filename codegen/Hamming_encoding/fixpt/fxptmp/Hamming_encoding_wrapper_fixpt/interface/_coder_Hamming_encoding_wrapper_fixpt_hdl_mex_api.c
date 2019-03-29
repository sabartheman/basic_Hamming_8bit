/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_emxutil.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static const mxArray *b_emlrt_marshallOut(const real_T u[12]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
  const char_T *identifier))[8];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[12])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 0, 0 };

  static const int32_T iv4[2] = { 1, 12 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, iv4, 2);
  emlrtAssign(&y, m3);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[2] = { 1, 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[1] = { "data" };

  static const char * sv2[1] = { "out_encoded" };

  const mxArray *m4;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv1));
  emlrtSetFieldR2017b(b_y, 0, "data", d_emlrt_marshallOut(sp, u.inputs.data), 0);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  emlrtSetFieldR2017b(b_y, 0, "out_encoded", d_emlrt_marshallOut(sp,
    u.outputs.out_encoded), 0);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m4 = emlrtCreateDoubleScalar(u.iterCount);
  emlrtAssign(&b_y, m4);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u)
{
  const mxArray *y;
  emxArray_uint8_T *b_u;
  int32_T i8;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m5;
  uint8_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_uint8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  i8 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u->size[1];
  emxEnsureCapacity_uint8_T(sp, b_u, i8, (emlrtRTEInfo *)NULL);
  loop_ub = u->size[0] * u->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_u->data[i8] = u->data[i8];
  }

  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m5);
  i8 = 0;
  loop_ub = 0;
  emxFree_uint8_T(&b_u);
  while (loop_ub < u->size[1]) {
    pData[i8] = u->data[loop_ub];
    i8++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m5);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *data,
  const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(data), &thisId);
  emlrtDestroyArray(&data);
  return y;
}
  void Hamming_encoding_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &p_emlrtRTEI, true);

  /* Invoke the target function */
  Hamming_encoding_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Hamming_encoding_wrapper_fixpt_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[1])
{
  real_T (*out_encoded)[12];
  real_T (*data)[8];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  out_encoded = (real_T (*)[12])mxMalloc(sizeof(real_T [12]));

  /* Marshall function inputs */
  data = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "data");

  /* Invoke the target function */
  Hamming_encoding_wrapper_fixpt(&st, *data, *out_encoded);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*out_encoded);
}

/* End of code generation (_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_api.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_encoding_wrapper_fixpt.c
 *
 * Code generation for function 'Hamming_encoding_wrapper_fixpt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 21,  /* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 24,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "Hamming_encoding_fixpt",            /* fName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 9,     /* lineNo */
  "Hamming_encoding_wrapper_fixpt",    /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_wrapper_fixpt.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 47,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 28,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 27,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 26,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 25,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 24,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 23,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 22,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 21,  /* lineNo */
  "Hamming_encoding_fixpt",            /* fcnName */
  "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_fixpt.m"/* pathName */
};

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint8_T u[12]);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const uint8_T u[12])
{
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 12 };

  uint8_T *pData;
  int32_T i7;
  int32_T i;
  y = NULL;
  b_y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxUINT8_CLASS, mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m2);
  i7 = 0;
  for (i = 0; i < 12; i++) {
    pData[i7] = u[i];
    i7++;
  }

  emlrtAssign(&b_y, m2);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray", b_y,
    true, false));
  return y;
}

void Hamming_encoding_wrapper_fixpt(const emlrtStack *sp, const real_T data[8],
  real_T out_encoded[12])
{
  int32_T i0;
  real_T d0;
  uint8_T data_in[8];
  uint8_T hammingCode[12];
  uint8_T x;
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
  for (i0 = 0; i0 < 8; i0++) {
    d0 = muDoubleScalarFloor(data[i0]);
    if (muDoubleScalarIsNaN(d0) || muDoubleScalarIsInf(d0)) {
      d0 = 0.0;
    } else {
      d0 = muDoubleScalarRem(d0, 2.0);
    }

    data_in[i0] = (uint8_T)((uint8_T)(int8_T)d0 & 1);
  }

  st.site = &emlrtRSI;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  this data is setup as Little endian (MSB on right side)  This method */
  /*  encodes the input data bit stream (8 bits) into a 12 bit stream.  This */
  /*  method can be turned into combinational logic pretty easily which makes */
  /*  this method fast and simple. */
  /*   */
  /*  The output data has the hamming codes embedded in the datastream. Which */
  /*  means the Hamming bits are at bit position (base1, because matlab) 1 2 4 8 */
  for (i0 = 0; i0 < 12; i0++) {
    hammingCode[i0] = 0U;
  }

  hammingCode[2] = data_in[0];
  b_st.site = &p_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &emlrtRTEI, &st);
  hammingCode[4] = data_in[1];
  b_st.site = &o_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &b_emlrtRTEI, &st);
  hammingCode[5] = data_in[2];
  b_st.site = &n_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &c_emlrtRTEI, &st);
  hammingCode[6] = data_in[3];
  b_st.site = &m_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &d_emlrtRTEI, &st);
  hammingCode[8] = data_in[4];
  b_st.site = &l_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &e_emlrtRTEI, &st);
  hammingCode[9] = data_in[5];
  b_st.site = &k_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &f_emlrtRTEI, &st);
  hammingCode[10] = data_in[6];
  b_st.site = &j_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &g_emlrtRTEI, &st);
  hammingCode[11] = data_in[7];
  b_st.site = &i_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "hammingCode",
                     &h_emlrtRTEI, &st);

  /* first hamming code Parity bit */
  x = (uint8_T)(((((uint32_T)data_in[0] + data_in[1]) + data_in[3]) + data_in[4])
                + data_in[6]);
  x = (uint8_T)((uint32_T)x - ((int32_T)((uint32_T)x >> 1) << 1));
  if (x > 31) {
    x = 31U;
  }

  hammingCode[0] = (uint8_T)(x & 1);

  /* second hamming code Parity bit  */
  x = (uint8_T)(((((uint32_T)data_in[0] + data_in[2]) + data_in[3]) + data_in[5])
                + data_in[6]);
  x = (uint8_T)((uint32_T)x - ((int32_T)((uint32_T)x >> 1) << 1));
  if (x > 31) {
    x = 31U;
  }

  hammingCode[1] = (uint8_T)(x & 1);

  /* third hamming code Parity bit */
  x = (uint8_T)((((uint32_T)data_in[1] + data_in[2]) + data_in[3]) + data_in[7]);
  x = (uint8_T)((uint32_T)x - ((int32_T)((uint32_T)x >> 1) << 1));
  if (x > 15) {
    x = 15U;
  }

  hammingCode[3] = (uint8_T)(x & 1);

  /* fourth hamming code Parity bit */
  x = (uint8_T)((((uint32_T)data_in[4] + data_in[5]) + data_in[6]) + data_in[7]);
  x = (uint8_T)((uint32_T)x - ((int32_T)((uint32_T)x >> 1) << 1));
  if (x > 15) {
    x = 15U;
  }

  hammingCode[7] = (uint8_T)(x & 1);
  b_st.site = &h_emlrtRSI;
  emlrtDisplayR2012b(emlrt_marshallOut(&b_st, hammingCode), "out_encoded",
                     &i_emlrtRTEI, &st);
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_Hamming_encoding_fixpt_logger(&c_st, data_in, hammingCode);
  for (i0 = 0; i0 < 12; i0++) {
    out_encoded[i0] = hammingCode[i0];
  }
}

/* End of code generation (Hamming_encoding_wrapper_fixpt.c) */

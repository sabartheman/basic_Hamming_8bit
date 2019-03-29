/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_encoding_fixpt_logger.h
 *
 * Code generation for function 'Hamming_encoding_fixpt_logger'
 *
 */

#ifndef HAMMING_ENCODING_FIXPT_LOGGER_H
#define HAMMING_ENCODING_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Hamming_encoding_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void Hamming_encoding_fixpt_logger(const emlrtStack *sp, struct0_T
  *loggedData);
extern void b_Hamming_encoding_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[8], const uint8_T varargin_2[12]);
extern void c_Hamming_encoding_fixpt_logger(void);
extern void data_TB_logger_free(void);
extern void data_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void out_encoded_TB_logger_free(void);
extern void out_encoded_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (Hamming_encoding_fixpt_logger.h) */

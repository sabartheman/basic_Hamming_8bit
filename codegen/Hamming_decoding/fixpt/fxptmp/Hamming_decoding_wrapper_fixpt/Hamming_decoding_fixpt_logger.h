/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Hamming_decoding_fixpt_logger.h
 *
 * Code generation for function 'Hamming_decoding_fixpt_logger'
 *
 */

#ifndef HAMMING_DECODING_FIXPT_LOGGER_H
#define HAMMING_DECODING_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "Hamming_decoding_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void Hamming_decoding_fixpt_logger(const emlrtStack *sp, struct0_T
  *loggedData);
extern void b_Hamming_decoding_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[12], const uint8_T varargin_2[12], uint8_T varargin_3);
extern void c_Hamming_decoding_fixpt_logger(void);
extern void errorPosition_TB_logger_free(void);
extern void errorPosition_TB_logger_init(const emlrtStack *sp);
extern void input_encoded_TB_logger_free(void);
extern void input_encoded_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void output_TB_logger_free(void);
extern void output_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (Hamming_decoding_fixpt_logger.h) */

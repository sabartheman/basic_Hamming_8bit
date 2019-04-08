/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function hdlcoder_to_stdlogic ended without a return statement";
static const char *ng1 = "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/hdlsrc/Hamming_decoding_fixpt.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532825644_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_800139796931568664_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


unsigned char xlib_a_2382523238_1516540902_sub_15700723919707112284_2134189630(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    if (t2 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)3;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void xlib_a_2382523238_1516540902_p_0(char *t0)
{
    char t3[16];
    char t56[16];
    char t57[16];
    char t58[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t59;

LAB0:    xsi_set_current_line(73, ng1);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 0, 4);
    t5 = (4U != 0);
    if (t5 == 1)
        goto LAB2;

LAB3:    t7 = (t0 + 1808U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t1, 16U);
    xsi_set_current_line(76, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (0 - 0);
    t6 = (t9 * 1);
    t10 = (1U * t6);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t7 + t15);
    t16 = *((unsigned char *)t4);
    t8 = (t0 + 1032U);
    t17 = *((char **)t8);
    t18 = (4 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t17 + t21);
    t22 = *((unsigned char *)t8);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t16, t22);
    t24 = (t0 + 1032U);
    t25 = *((char **)t24);
    t26 = (6 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 1032U);
    t33 = *((char **)t32);
    t34 = (8 - 0);
    t35 = (t34 * 1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t31, t38);
    t40 = (t0 + 1032U);
    t41 = *((char **)t40);
    t42 = (10 - 0);
    t43 = (t42 * 1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t40 = (t41 + t45);
    t46 = *((unsigned char *)t40);
    t47 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t39, t46);
    t48 = (t5 != t47);
    if (t48 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(80, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (1 - 0);
    t6 = (t9 * 1);
    t10 = (1U * t6);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t7 + t15);
    t16 = *((unsigned char *)t4);
    t8 = (t0 + 1032U);
    t17 = *((char **)t8);
    t18 = (5 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t17 + t21);
    t22 = *((unsigned char *)t8);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t16, t22);
    t24 = (t0 + 1032U);
    t25 = *((char **)t24);
    t26 = (6 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 1032U);
    t33 = *((char **)t32);
    t34 = (9 - 0);
    t35 = (t34 * 1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t31, t38);
    t40 = (t0 + 1032U);
    t41 = *((char **)t40);
    t42 = (10 - 0);
    t43 = (t42 * 1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t40 = (t41 + t45);
    t46 = *((unsigned char *)t40);
    t47 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t39, t46);
    t48 = (t5 != t47);
    if (t48 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(84, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (3 - 0);
    t6 = (t9 * 1);
    t10 = (1U * t6);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t12 = (4 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t7 + t15);
    t16 = *((unsigned char *)t4);
    t8 = (t0 + 1032U);
    t17 = *((char **)t8);
    t18 = (5 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t17 + t21);
    t22 = *((unsigned char *)t8);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t16, t22);
    t24 = (t0 + 1032U);
    t25 = *((char **)t24);
    t26 = (6 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 1032U);
    t33 = *((char **)t32);
    t34 = (11 - 0);
    t35 = (t34 * 1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t31, t38);
    t46 = (t5 != t39);
    if (t46 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(88, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (7 - 0);
    t6 = (t9 * 1);
    t10 = (1U * t6);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t12 = (8 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t7 + t15);
    t16 = *((unsigned char *)t4);
    t8 = (t0 + 1032U);
    t17 = *((char **)t8);
    t18 = (9 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t8 = (t17 + t21);
    t22 = *((unsigned char *)t8);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t16, t22);
    t24 = (t0 + 1032U);
    t25 = *((char **)t24);
    t26 = (10 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 1032U);
    t33 = *((char **)t32);
    t34 = (11 - 0);
    t35 = (t34 * 1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t39 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t31, t38);
    t46 = (t5 != t39);
    if (t46 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(92, ng1);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 0, 4);
    t2 = (t0 + 1928U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t1, 4U);
    xsi_set_current_line(94, ng1);
    t1 = (t0 + 7993);
    *((int *)t1) = 0;
    t2 = (t0 + 7997);
    *((int *)t2) = 3;
    t9 = 0;
    t12 = 3;

LAB16:    if (t9 <= t12)
        goto LAB17;

LAB19:    xsi_set_current_line(102, ng1);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7520U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 0, 4);
    t5 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(109, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4288);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);

LAB22:    xsi_set_current_line(111, ng1);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 4352);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t6 = (16U / 4U);
    xsi_mem_set_data(t2, t4, 4U, t6);
    goto LAB3;

LAB4:    xsi_set_current_line(77, ng1);
    t49 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 1, 4);
    t50 = (t0 + 1808U);
    t51 = *((char **)t50);
    t52 = (0 - 0);
    t53 = (t52 * 1);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    memcpy(t50, t49, 4U);
    goto LAB5;

LAB7:    xsi_set_current_line(81, ng1);
    t49 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 2, 4);
    t50 = (t0 + 1808U);
    t51 = *((char **)t50);
    t52 = (1 - 0);
    t53 = (t52 * 1);
    t54 = (4U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    memcpy(t50, t49, 4U);
    goto LAB8;

LAB10:    xsi_set_current_line(85, ng1);
    t40 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 4, 4);
    t41 = (t0 + 1808U);
    t49 = *((char **)t41);
    t42 = (2 - 0);
    t43 = (t42 * 1);
    t44 = (4U * t43);
    t45 = (0 + t44);
    t41 = (t49 + t45);
    memcpy(t41, t40, 4U);
    goto LAB11;

LAB13:    xsi_set_current_line(89, ng1);
    t40 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 8, 4);
    t41 = (t0 + 1808U);
    t49 = *((char **)t41);
    t42 = (3 - 0);
    t43 = (t42 * 1);
    t44 = (4U * t43);
    t45 = (0 + t44);
    t41 = (t49 + t45);
    memcpy(t41, t40, 4U);
    goto LAB14;

LAB17:    xsi_set_current_line(95, ng1);
    t4 = (t0 + 7993);
    t18 = *((int *)t4);
    t26 = (t18 + 1);
    t7 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t3, t26, 32);
    t8 = (t0 + 2048U);
    t17 = *((char **)t8);
    t8 = (t0 + 7993);
    t34 = *((int *)t8);
    t42 = (t34 - 0);
    t6 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t8));
    t10 = (32U * t6);
    t11 = (0 + t10);
    t24 = (t17 + t11);
    t25 = (t3 + 12U);
    t13 = *((unsigned int *)t25);
    t13 = (t13 * 1U);
    memcpy(t24, t7, t13);
    xsi_set_current_line(96, ng1);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t6 = (31 - 2);
    t10 = (t6 * 1U);
    t1 = (t0 + 7993);
    t18 = *((int *)t1);
    t26 = (t18 - 0);
    t11 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t13 = (32U * t11);
    t14 = (0 + t13);
    t15 = (t14 + t10);
    t4 = (t2 + t15);
    t7 = (t0 + 2168U);
    t8 = *((char **)t7);
    t7 = (t0 + 7993);
    t34 = *((int *)t7);
    t42 = (t34 - 0);
    t19 = (t42 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t7));
    t20 = (3U * t19);
    t21 = (0 + t20);
    t17 = (t8 + t21);
    memcpy(t17, t4, 3U);
    xsi_set_current_line(97, ng1);
    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    t1 = (t0 + 7993);
    t18 = *((int *)t1);
    t26 = (t18 - 0);
    t6 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t10 = (3U * t6);
    t11 = (0 + t10);
    t4 = (t2 + t11);
    t7 = (t56 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t34 = (0 - 2);
    t13 = (t34 * -1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t3, t4, t56, 32);
    t17 = (t0 + 2288U);
    t24 = *((char **)t17);
    t17 = (t0 + 7993);
    t42 = *((int *)t17);
    t52 = (t42 - 0);
    t13 = (t52 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t17));
    t14 = (32U * t13);
    t15 = (0 + t14);
    t25 = (t24 + t15);
    t32 = (t3 + 12U);
    t19 = *((unsigned int *)t32);
    t19 = (t19 * 1U);
    memcpy(t25, t8, t19);
    xsi_set_current_line(98, ng1);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7520U);
    t4 = (t0 + 1808U);
    t7 = *((char **)t4);
    t4 = (t0 + 2288U);
    t8 = *((char **)t4);
    t4 = (t0 + 7993);
    t18 = *((int *)t4);
    t26 = (t18 - 0);
    t6 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t4));
    t10 = (32U * t6);
    t11 = (0 + t10);
    t17 = (t8 + t11);
    t24 = (t57 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 31;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t34 = (0 - 31);
    t13 = (t34 * -1);
    t13 = (t13 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t13;
    t25 = ieee_p_1242562249_sub_800139796931568664_1035706684(IEEE_P_1242562249, t56, t17, t57, 1);
    t42 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t25, t56);
    t52 = (t42 - 0);
    t13 = (t52 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t42);
    t14 = (4U * t13);
    t15 = (0 + t14);
    t32 = (t7 + t15);
    t33 = (t58 + 0U);
    t40 = (t33 + 0U);
    *((int *)t40) = 3;
    t40 = (t33 + 4U);
    *((int *)t40) = 0;
    t40 = (t33 + 8U);
    *((int *)t40) = -1;
    t59 = (0 - 3);
    t19 = (t59 * -1);
    t19 = (t19 + 1);
    t40 = (t33 + 12U);
    *((unsigned int *)t40) = t19;
    t40 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t3, t2, t1, t32, t58);
    t41 = (t0 + 1928U);
    t49 = *((char **)t41);
    t41 = (t49 + 0);
    t50 = (t3 + 12U);
    t19 = *((unsigned int *)t50);
    t20 = (1U * t19);
    memcpy(t41, t40, t20);

LAB18:    t1 = (t0 + 7993);
    t9 = *((int *)t1);
    t2 = (t0 + 7997);
    t12 = *((int *)t2);
    if (t9 == t12)
        goto LAB19;

LAB20:    t18 = (t9 + 1);
    t9 = t18;
    t4 = (t0 + 7993);
    *((int *)t4) = t9;
    goto LAB16;

LAB21:    xsi_set_current_line(103, ng1);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t7 = (t0 + 4288);
    t17 = (t7 + 56U);
    t24 = *((char **)t17);
    t25 = (t24 + 56U);
    t32 = *((char **)t25);
    memcpy(t32, t8, 12U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(104, ng1);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7520U);
    t4 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t3, t2, t1, 32);
    t7 = (t0 + 2408U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t17 = (t3 + 12U);
    t6 = *((unsigned int *)t17);
    t6 = (t6 * 1U);
    memcpy(t7, t4, t6);
    xsi_set_current_line(105, ng1);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7520U);
    t4 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t3, t2, t1, 32);
    t7 = (t0 + 2528U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t17 = (t3 + 12U);
    t6 = *((unsigned int *)t17);
    t6 = (t6 * 1U);
    memcpy(t7, t4, t6);
    xsi_set_current_line(106, ng1);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2528U);
    t4 = *((char **)t1);
    t1 = (t0 + 7600U);
    t7 = ieee_p_1242562249_sub_800139796931568664_1035706684(IEEE_P_1242562249, t3, t4, t1, 1);
    t9 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t7, t3);
    t12 = (t9 - 0);
    t6 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 11, 1, t9);
    t10 = (1U * t6);
    t11 = (0 + t10);
    t8 = (t2 + t11);
    t5 = *((unsigned char *)t8);
    t16 = (t5 != (unsigned char)2);
    t22 = (!(t16));
    t17 = (t0 + 2648U);
    t24 = *((char **)t17);
    t17 = (t24 + 0);
    *((unsigned char *)t17) = t22;
    xsi_set_current_line(107, ng1);
    t1 = (t0 + 2648U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t16 = xlib_a_2382523238_1516540902_sub_15700723919707112284_2134189630(t0, t5);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t1 = (t0 + 7584U);
    t7 = ieee_p_1242562249_sub_800139796931568664_1035706684(IEEE_P_1242562249, t3, t4, t1, 1);
    t9 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t7, t3);
    t12 = (t9 - 0);
    t6 = (t12 * 1);
    t10 = (1 * t6);
    t11 = (0U + t10);
    t8 = (t0 + 4288);
    t17 = (t8 + 56U);
    t24 = *((char **)t17);
    t25 = (t24 + 56U);
    t32 = *((char **)t25);
    *((unsigned char *)t32) = t16;
    xsi_driver_first_trans_delta(t8, t11, 1, 0LL);
    goto LAB22;

}

static void xlib_a_2382523238_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(115, ng1);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4416);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4208);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xlib_a_2382523238_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_2382523238_1516540902_p_0,(void *)xlib_a_2382523238_1516540902_p_1};
	static char *se[] = {(void *)xlib_a_2382523238_1516540902_sub_15700723919707112284_2134189630};
	xsi_register_didat("xlib_a_2382523238_1516540902", "isim/Hamming_decoding_fixpt_isim_design.exe.sim/xlib/a_2382523238_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

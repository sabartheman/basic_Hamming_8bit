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
static const char *ng0 = "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/hdlsrc/Hamming_encoding_fixpt_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *XLIB_P_3599149779;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *xlib_p_3599149779_sub_2063504136543877411_4034665861(char *, char *, char *, char *);


static void xlib_a_2719387135_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 20312);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 20376);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 19880);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 20440);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19896);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20504);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 19912);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_4(char *t0)
{
    char t5[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 19928);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(103, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 1, 3);
    t6 = (3U != 3U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 20568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2472U);
    t8 = *((char **)t2);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB9:    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t6 = *((unsigned char *)t7);
    t12 = (t6 == (unsigned char)3);
    t3 = t12;
    goto LAB11;

LAB12:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2632U);
    t9 = *((char **)t2);
    t2 = (t0 + 34264U);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 5, 3);
    t15 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t9, t2, t10, t5);
    if (t15 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 34264U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 1, 3);
    t8 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t2, t1, t7, t16);
    t9 = (t5 + 12U);
    t23 = *((unsigned int *)t9);
    t24 = (1U * t23);
    t3 = (3U != t24);
    if (t3 == 1)
        goto LAB20;

LAB21:    t10 = (t0 + 20568);
    t11 = (t10 + 56U);
    t18 = *((char **)t11);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 3U);
    xsi_driver_first_trans_fast(t10);

LAB16:    goto LAB13;

LAB15:    xsi_set_current_line(107, ng0);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 0, 3);
    t17 = (3U != 3U);
    if (t17 == 1)
        goto LAB18;

LAB19:    t18 = (t0 + 20568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 3U);
    xsi_driver_first_trans_fast(t18);
    goto LAB16;

LAB18:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(3U, t24, 0);
    goto LAB21;

}

static void xlib_a_2719387135_1516540902_p_5(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 34264U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 1, 3);
    t5 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 20632);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 19944);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 20632);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(120, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 20696);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19960);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(122, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 20760);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19976);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;

LAB0:    t1 = (t0 + 8648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 20824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8456);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 20824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8456);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 20824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8456);
    xsi_process_wait(t2, t7);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 20824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8456);
    xsi_process_wait(t2, t7);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(135, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    goto LAB13;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void xlib_a_2719387135_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;

LAB0:    t1 = (t0 + 8896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 20888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(142, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB10:    t2 = (t0 + 19992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 19992);
    *((int *)t4) = 0;
    xsi_set_current_line(144, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t7);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    t3 = (t0 + 992U);
    t9 = xsi_signal_has_event(t3);
    if (t9 == 1)
        goto LAB12;

LAB13:    t8 = (unsigned char)0;

LAB14:    if (t8 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB14;

LAB15:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 20888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}

static void xlib_a_2719387135_1516540902_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(149, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 20952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 20008);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(151, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 21016);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 20024);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 20040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 21080);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3112U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t2 = (t0 + 21080);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void xlib_a_2719387135_1516540902_p_13(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 34264U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 0, 3);
    t5 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 21144);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 20056);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 21144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(169, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 21208);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 20072);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(171, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 21272);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 20088);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_16(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(173, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 21336);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 21336);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 20104);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(175, ng0);

LAB3:    t1 = (t0 + 21400);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(176, ng0);

LAB3:    t1 = (t0 + 21464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(177, ng0);

LAB3:    t1 = (t0 + 21528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(178, ng0);

LAB3:    t1 = (t0 + 21592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(179, ng0);

LAB3:    t1 = (t0 + 21656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(180, ng0);

LAB3:    t1 = (t0 + 21720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(181, ng0);

LAB3:    t1 = (t0 + 21784);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(182, ng0);

LAB3:    t1 = (t0 + 21848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(185, ng0);

LAB3:    t1 = (t0 + 21912);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(186, ng0);

LAB3:    t1 = (t0 + 21976);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(187, ng0);

LAB3:    t1 = (t0 + 22040);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(188, ng0);

LAB3:    t1 = (t0 + 22104);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(189, ng0);

LAB3:    t1 = (t0 + 22168);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t1 = (t0 + 22232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(191, ng0);

LAB3:    t1 = (t0 + 22296);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 22360);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_33(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4072U);
    t11 = *((char **)t10);
    t10 = (t0 + 22424);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 20120);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t1 = (t0 + 22424);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_34(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 20136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(202, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 22488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 4232U);
    t6 = *((char **)t2);
    t2 = (t0 + 22488);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

}

static void xlib_a_2719387135_1516540902_p_35(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(208, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 2312U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t5, t7);
    t9 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 22552);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 20152);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_36(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 22616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 20168);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(213, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 22616);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t1 = (t0 + 22616);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void xlib_a_2719387135_1516540902_p_37(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(221, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 4712U);
    t3 = *((char **)t2);
    t2 = (t0 + 22680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8U);
    xsi_driver_first_trans_delta(t2, 0U, 8U, t1);
    t8 = (t0 + 22680);
    xsi_driver_intertial_reject(t8, t1, t1);

LAB2:    t9 = (t0 + 20184);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(224, ng0);

LAB3:    t1 = (t0 + 22744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_39(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(225, ng0);

LAB3:    t1 = (t0 + 22808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(226, ng0);

LAB3:    t1 = (t0 + 22872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(227, ng0);

LAB3:    t1 = (t0 + 22936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(228, ng0);

LAB3:    t1 = (t0 + 23000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(229, ng0);

LAB3:    t1 = (t0 + 23064);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_44(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(230, ng0);

LAB3:    t1 = (t0 + 23128);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_45(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (t0 + 23192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_46(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 23256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_47(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t1 = (t0 + 23320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 9U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_48(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(234, ng0);

LAB3:    t1 = (t0 + 23384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 10U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(235, ng0);

LAB3:    t1 = (t0 + 23448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_50(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(237, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 23512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 12U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 20200);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2719387135_1516540902_p_51(char *t0)
{
    char t22[16];
    char t23[16];
    char t24[16];
    char t26[16];
    char t29[16];
    char t31[16];
    char t35[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t25;
    char *t27;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    char *t36;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 20216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 23576);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4552U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(245, ng0);
    t17 = (t0 + 23576);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(246, ng0);
    if ((unsigned char)0 == 0)
        goto LAB22;

LAB23:    goto LAB11;

LAB13:    t2 = (t0 + 5032U);
    t7 = *((char **)t2);
    t2 = (t0 + 5352U);
    t8 = *((char **)t2);
    t14 = 1;
    if (12U == 12U)
        goto LAB16;

LAB17:    t14 = 0;

LAB18:    t11 = (!(t14));
    goto LAB15;

LAB16:    t15 = 0;

LAB19:    if (t15 < 12U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t2 = (t7 + t15);
    t16 = (t8 + t15);
    if (*((unsigned char *)t2) != *((unsigned char *)t16))
        goto LAB17;

LAB21:    t15 = (t15 + 1);
    goto LAB19;

LAB22:    t1 = (t0 + 34538);
    t5 = (t0 + 5352U);
    t6 = *((char **)t5);
    t5 = (t0 + 34408U);
    t7 = xlib_p_3599149779_sub_2063504136543877411_4034665861(XLIB_P_3599149779, t22, t6, t5);
    t16 = ((STD_STANDARD) + 984);
    t17 = (t24 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 31;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t25 = (31 - 1);
    t15 = (t25 * 1);
    t15 = (t15 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t15;
    t8 = xsi_base_array_concat(t8, t23, t16, (char)97, t1, t24, (char)97, t7, t22, (char)101);
    t18 = (t0 + 34569);
    t20 = (t0 + 5032U);
    t21 = *((char **)t20);
    t20 = (t0 + 34376U);
    t27 = xlib_p_3599149779_sub_2063504136543877411_4034665861(XLIB_P_3599149779, t26, t21, t20);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 8;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (8 - 1);
    t15 = (t34 * 1);
    t15 = (t15 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t15;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t18, t31, (char)97, t27, t26, (char)101);
    t36 = ((STD_STANDARD) + 984);
    t33 = xsi_base_array_concat(t33, t35, t36, (char)97, t8, t23, (char)97, t28, t29, (char)101);
    t37 = (t22 + 12U);
    t15 = *((unsigned int *)t37);
    t15 = (t15 * 1U);
    t38 = (31U + t15);
    t39 = (t26 + 12U);
    t40 = *((unsigned int *)t39);
    t40 = (t40 * 1U);
    t41 = (8U + t40);
    t42 = (t38 + t41);
    xsi_report(t33, t42, (unsigned char)2);
    goto LAB23;

}

static void xlib_a_2719387135_1516540902_p_52(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20232);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(256, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(257, ng0);
    t4 = (t0 + 5512U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(262, ng0);
    if ((unsigned char)0 == 0)
        goto LAB16;

LAB17:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(258, ng0);
    if ((unsigned char)0 == 0)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t4 = (t0 + 34577);
    xsi_report(t4, 51U, (unsigned char)0);
    goto LAB15;

LAB16:    t2 = (t0 + 34628);
    xsi_report(t2, 51U, (unsigned char)0);
    goto LAB17;

}


extern void xlib_a_2719387135_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_2719387135_1516540902_p_0,(void *)xlib_a_2719387135_1516540902_p_1,(void *)xlib_a_2719387135_1516540902_p_2,(void *)xlib_a_2719387135_1516540902_p_3,(void *)xlib_a_2719387135_1516540902_p_4,(void *)xlib_a_2719387135_1516540902_p_5,(void *)xlib_a_2719387135_1516540902_p_6,(void *)xlib_a_2719387135_1516540902_p_7,(void *)xlib_a_2719387135_1516540902_p_8,(void *)xlib_a_2719387135_1516540902_p_9,(void *)xlib_a_2719387135_1516540902_p_10,(void *)xlib_a_2719387135_1516540902_p_11,(void *)xlib_a_2719387135_1516540902_p_12,(void *)xlib_a_2719387135_1516540902_p_13,(void *)xlib_a_2719387135_1516540902_p_14,(void *)xlib_a_2719387135_1516540902_p_15,(void *)xlib_a_2719387135_1516540902_p_16,(void *)xlib_a_2719387135_1516540902_p_17,(void *)xlib_a_2719387135_1516540902_p_18,(void *)xlib_a_2719387135_1516540902_p_19,(void *)xlib_a_2719387135_1516540902_p_20,(void *)xlib_a_2719387135_1516540902_p_21,(void *)xlib_a_2719387135_1516540902_p_22,(void *)xlib_a_2719387135_1516540902_p_23,(void *)xlib_a_2719387135_1516540902_p_24,(void *)xlib_a_2719387135_1516540902_p_25,(void *)xlib_a_2719387135_1516540902_p_26,(void *)xlib_a_2719387135_1516540902_p_27,(void *)xlib_a_2719387135_1516540902_p_28,(void *)xlib_a_2719387135_1516540902_p_29,(void *)xlib_a_2719387135_1516540902_p_30,(void *)xlib_a_2719387135_1516540902_p_31,(void *)xlib_a_2719387135_1516540902_p_32,(void *)xlib_a_2719387135_1516540902_p_33,(void *)xlib_a_2719387135_1516540902_p_34,(void *)xlib_a_2719387135_1516540902_p_35,(void *)xlib_a_2719387135_1516540902_p_36,(void *)xlib_a_2719387135_1516540902_p_37,(void *)xlib_a_2719387135_1516540902_p_38,(void *)xlib_a_2719387135_1516540902_p_39,(void *)xlib_a_2719387135_1516540902_p_40,(void *)xlib_a_2719387135_1516540902_p_41,(void *)xlib_a_2719387135_1516540902_p_42,(void *)xlib_a_2719387135_1516540902_p_43,(void *)xlib_a_2719387135_1516540902_p_44,(void *)xlib_a_2719387135_1516540902_p_45,(void *)xlib_a_2719387135_1516540902_p_46,(void *)xlib_a_2719387135_1516540902_p_47,(void *)xlib_a_2719387135_1516540902_p_48,(void *)xlib_a_2719387135_1516540902_p_49,(void *)xlib_a_2719387135_1516540902_p_50,(void *)xlib_a_2719387135_1516540902_p_51,(void *)xlib_a_2719387135_1516540902_p_52};
	xsi_register_didat("xlib_a_2719387135_1516540902", "isim/Hamming_encoding_fixpt_isim_design.exe.sim/xlib/a_2719387135_1516540902.didat");
	xsi_register_executes(pe);
}

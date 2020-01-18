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
static const char *ng0 = "/home/csmajs/wbi002/CS161L_Lab1/alu.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {2, 0};
static const char *ng11 = "Opcode Error";



static void Always_35_0(char *t0)
{
    char t6[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t58[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    int t90;
    int t91;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(153, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);

LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3024);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    xsi_set_current_line(44, ng0);

LAB35:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t5, 8, t7, 8);
    t4 = (t0 + 2384);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 9, t4, 8, t5, 8);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 9);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t21 = (t0 + 2704);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(54, ng0);

LAB44:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB42:    goto LAB34;

LAB18:    xsi_set_current_line(58, ng0);

LAB45:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t5, 8, t7, 8);
    t4 = (t0 + 2384);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 9, t4, 8, t5, 8);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 9);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t7 = (t0 + 1664U);
    t8 = *((char **)t7);
    memset(t33, 0, 8);
    t7 = (t33 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t33) = t17;
    t18 = *((unsigned int *)t21);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 ^ t24);
    *((unsigned int *)t34) = t25;
    t22 = (t32 + 4);
    t28 = (t33 + 4);
    t29 = (t34 + 4);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t35 = (t26 | t27);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB46;

LAB47:
LAB48:    memset(t6, 0, 8);
    t31 = (t34 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t31) == 0)
        goto LAB49;

LAB51:    t45 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t45) = 1;

LAB52:    t46 = (t0 + 2864);
    xsi_vlogvar_assign_value(t46, t6, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t21 = (t0 + 2704);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;

LAB56:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(66, ng0);

LAB61:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB59:    goto LAB34;

LAB20:    xsi_set_current_line(71, ng0);

LAB62:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t5, 8, t7, 8);
    t4 = (t0 + 2384);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB66;

LAB63:    if (t18 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;

LAB66:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(78, ng0);

LAB71:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB69:    goto LAB34;

LAB22:    xsi_set_current_line(83, ng0);

LAB72:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB73:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 8, t7, 32);
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 2544);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t7, 8);
    t8 = (t0 + 2384);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t7 = (t0 + 1664U);
    t8 = *((char **)t7);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t32) = t17;
    t18 = *((unsigned int *)t21);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t32);
    t25 = (t23 ^ t24);
    *((unsigned int *)t33) = t25;
    t22 = (t6 + 4);
    t28 = (t32 + 4);
    t29 = (t33 + 4);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t35 = (t26 | t27);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB75;

LAB76:
LAB77:    t31 = (t33 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t33);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(96, ng0);

LAB91:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB80:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(102, ng0);

LAB100:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB98:    goto LAB34;

LAB24:    xsi_set_current_line(107, ng0);

LAB101:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB102;

LAB103:
LAB104:    t29 = (t0 + 2384);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t6) = 1;

LAB108:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(114, ng0);

LAB113:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB111:    goto LAB34;

LAB26:    xsi_set_current_line(119, ng0);

LAB114:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB115;

LAB116:
LAB117:    t29 = (t0 + 2384);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB121;

LAB118:    if (t18 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t6) = 1;

LAB121:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(126, ng0);

LAB126:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB124:    goto LAB34;

LAB28:    xsi_set_current_line(131, ng0);

LAB127:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB128;

LAB129:
LAB130:    t22 = (t0 + 2384);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB134;

LAB131:    if (t18 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t6) = 1;

LAB134:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(138, ng0);

LAB139:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB137:    goto LAB34;

LAB30:    xsi_set_current_line(142, ng0);

LAB140:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t5, 8, t4, 32);
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB144;

LAB141:    if (t18 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t6) = 1;

LAB144:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(149, ng0);

LAB149:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB147:    goto LAB34;

LAB38:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(51, ng0);

LAB43:    xsi_set_current_line(52, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB42;

LAB46:    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t34) = (t38 | t39);
    goto LAB48;

LAB49:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB55:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(63, ng0);

LAB60:    xsi_set_current_line(64, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB59;

LAB65:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(75, ng0);

LAB70:    xsi_set_current_line(76, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB69;

LAB74:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t4) = (t13 | t14);
    goto LAB73;

LAB75:    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t33) = (t38 | t39);
    goto LAB77;

LAB78:    xsi_set_current_line(88, ng0);

LAB81:    xsi_set_current_line(89, ng0);
    t45 = (t0 + 2384);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t34, 0, 8);
    t48 = (t34 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 7);
    t52 = (t51 & 1);
    *((unsigned int *)t34) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 7);
    t55 = (t54 & 1);
    *((unsigned int *)t48) = t55;
    t56 = (t0 + 1664U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t56 = (t58 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 7);
    t62 = (t61 & 1);
    *((unsigned int *)t58) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 7);
    t65 = (t64 & 1);
    *((unsigned int *)t56) = t65;
    memset(t66, 0, 8);
    t67 = (t34 + 4);
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t34);
    t70 = *((unsigned int *)t58);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB85;

LAB82:    if (t78 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t66) = 1;

LAB85:    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(92, ng0);

LAB90:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB88:    goto LAB80;

LAB84:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(89, ng0);

LAB89:    xsi_set_current_line(90, ng0);
    t88 = ((char*)((ng3)));
    t89 = (t0 + 2864);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 1);
    goto LAB88;

LAB94:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(99, ng0);

LAB99:    xsi_set_current_line(100, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB98;

LAB102:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t28);
    t35 = (~(t27));
    t90 = (t20 & t24);
    t91 = (t26 & t35);
    t36 = (~(t90));
    t37 = (~(t91));
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & t36);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & t37);
    t40 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t40 & t36);
    t41 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t41 & t37);
    goto LAB104;

LAB107:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(111, ng0);

LAB112:    xsi_set_current_line(112, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB111;

LAB115:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    t23 = *((unsigned int *)t5);
    t90 = (t23 & t20);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t91 = (t26 & t25);
    t27 = (~(t90));
    t35 = (~(t91));
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t27);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & t35);
    goto LAB117;

LAB120:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(123, ng0);

LAB125:    xsi_set_current_line(124, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB124;

LAB128:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB130;

LAB133:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(135, ng0);

LAB138:    xsi_set_current_line(136, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB137;

LAB143:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(146, ng0);

LAB148:    xsi_set_current_line(147, ng0);
    t29 = ((char*)((ng3)));
    t31 = (t0 + 3024);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 1);
    goto LAB147;

}


extern void work_m_12625888816397697211_2725559894_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_12625888816397697211_2725559894", "isim/lab1_tb_isim_beh.exe.sim/work/m_12625888816397697211_2725559894.didat");
	xsi_register_executes(pe);
}

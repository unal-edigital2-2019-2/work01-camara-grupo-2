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
static const char *ng0 = "/home/juandcarrillo/Documents/GitHub/work01-camara-grupo-2/hw/src/captura_datos_downsampler.v";
static int ng1[] = {1, 0};
static int ng2[] = {15, 0};
static int ng3[] = {8, 0};
static int ng4[] = {0, 0};
static int ng5[] = {2, 0};
static int ng6[] = {7, 0};



static void Always_21_0(char *t0)
{
    char t8[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 2, t7, 32);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB19;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t8) = 1;

LAB19:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t8) = 1;

LAB29:    t7 = (t8 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t28 = (t0 + 1800U);
    t29 = *((char **)t28);
    t28 = (t0 + 3000);
    t33 = (t0 + 3000);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    t37 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t30, t31, t32, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t31 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    t45 = (t32 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    t49 = *((unsigned int *)t32);
    t50 = (t49 + 0);
    t51 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t31);
    t53 = (t51 - t52);
    t54 = (t53 + 1);
    xsi_vlogvar_assign_value(t28, t29, t50, *((unsigned int *)t31), t54);
    goto LAB15;

LAB18:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(28, ng0);

LAB23:    xsi_set_current_line(29, ng0);
    t28 = (t0 + 2360);
    t29 = (t28 + 56U);
    t33 = *((char **)t29);
    t34 = ((char*)((ng1)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t33, 15, t34, 32);
    t35 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 15, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    t9 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t8, t30, t31, ((int*)(t6)), 2, t7, 32, 1, t9, 32, 1);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t22);
    t40 = (!(t10));
    t28 = (t30 + 4);
    t11 = *((unsigned int *)t28);
    t43 = (!(t11));
    t44 = (t40 && t43);
    t29 = (t31 + 4);
    t12 = *((unsigned int *)t29);
    t47 = (!(t12));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 3);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 3U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t7 = (t0 + 3000);
    t9 = (t7 + 56U);
    t22 = *((char **)t9);
    memset(t31, 0, 8);
    t28 = (t31 + 4);
    t29 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 8);
    *((unsigned int *)t31) = t17;
    t18 = *((unsigned int *)t29);
    t19 = (t18 >> 8);
    *((unsigned int *)t28) = t19;
    t20 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t20 & 7U);
    t21 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t21 & 7U);
    t33 = (t0 + 3000);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 13);
    *((unsigned int *)t32) = t24;
    t25 = *((unsigned int *)t37);
    t26 = (t25 >> 13);
    *((unsigned int *)t36) = t26;
    t27 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t27 & 7U);
    t39 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t39 & 7U);
    xsi_vlogtype_concat(t8, 8, 8, 3U, t32, 3, t31, 3, t30, 2);
    t38 = (t0 + 2200);
    xsi_vlogvar_assign_value(t38, t8, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB22;

LAB24:    t13 = *((unsigned int *)t31);
    t50 = (t13 + 0);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t30);
    t53 = (t14 - t15);
    t54 = (t53 + 1);
    xsi_vlogvar_assign_value(t2, t3, t50, *((unsigned int *)t30), t54);
    goto LAB25;

LAB28:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(37, ng0);

LAB33:    xsi_set_current_line(38, ng0);
    t9 = ((char*)((ng4)));
    t22 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t22, t9, 0, 0, 15, 0LL);
    goto LAB32;

}


extern void work_m_12341853098954384588_2476129397_init()
{
	static char *pe[] = {(void *)Always_21_0};
	xsi_register_didat("work_m_12341853098954384588_2476129397", "isim/captura_datos_downsampler_isim_beh.exe.sim/work/m_12341853098954384588_2476129397.didat");
	xsi_register_executes(pe);
}

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
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {15, 0};
static int ng4[] = {8, 0};
static int ng5[] = {7, 0};



static void Always_26_0(char *t0)
{
    char t10[8];
    char t11[8];
    char t12[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    char *t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 3224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1152);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB16:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 2344U);
    t13 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t13 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t7) == 0)
        goto LAB17;

LAB19:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;

LAB20:    memset(t11, 0, 8);
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t20) != 0)
        goto LAB23;

LAB24:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB25;

LAB26:    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t27) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t11) > 0)
        goto LAB31;

LAB32:    memcpy(t10, t37, 8);

LAB33:    t31 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t31, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(36, ng0);

LAB34:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2024U);
    t4 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t2) == 0)
        goto LAB35;

LAB37:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;

LAB38:    memset(t11, 0, 8);
    t7 = (t12 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t7) != 0)
        goto LAB41;

LAB42:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB43;

LAB44:    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t13) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t11) > 0)
        goto LAB49;

LAB50:    memcpy(t10, t26, 8);

LAB51:    t19 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);

LAB52:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2344U);
    t4 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB56;

LAB54:    if (*((unsigned int *)t2) == 0)
        goto LAB53;

LAB55:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;

LAB56:    memset(t11, 0, 8);
    t7 = (t12 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t7) != 0)
        goto LAB59;

LAB60:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t13);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB61;

LAB62:    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t13) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t11) > 0)
        goto LAB67;

LAB68:    memcpy(t10, t26, 8);

LAB69:    t19 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(47, ng0);

LAB70:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2344U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t2) != 0)
        goto LAB73;

LAB74:    t7 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t7);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB75;

LAB76:    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t28 = *((unsigned int *)t7);
    t29 = (t25 || t28);
    if (t29 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t7) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t11) > 0)
        goto LAB81;

LAB82:    memcpy(t10, t19, 8);

LAB83:    t8 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB87;

LAB84:    if (t25 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t10) = 1;

LAB87:    t8 = (t10 + 4);
    t30 = *((unsigned int *)t8);
    t33 = (~(t30));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB15;

LAB17:    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB23:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    t31 = (t0 + 1152);
    t32 = *((char **)t31);
    goto LAB26;

LAB27:    t31 = (t0 + 744);
    t37 = *((char **)t31);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t10, 32, t32, 32, t37, 32);
    goto LAB33;

LAB31:    memcpy(t10, t32, 8);
    goto LAB33;

LAB35:    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB41:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB42;

LAB43:    t19 = (t0 + 1016);
    t20 = *((char **)t19);
    goto LAB44;

LAB45:    t19 = (t0 + 744);
    t26 = *((char **)t19);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t10, 32, t20, 32, t26, 32);
    goto LAB51;

LAB49:    memcpy(t10, t20, 8);
    goto LAB51;

LAB53:    *((unsigned int *)t12) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t11) = 1;
    goto LAB60;

LAB59:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB60;

LAB61:    t19 = (t0 + 880);
    t20 = *((char **)t19);
    goto LAB62;

LAB63:    t19 = (t0 + 744);
    t26 = *((char **)t19);
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t10, 32, t20, 32, t26, 32);
    goto LAB69;

LAB67:    memcpy(t10, t20, 8);
    goto LAB69;

LAB71:    *((unsigned int *)t11) = 1;
    goto LAB74;

LAB73:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB74;

LAB75:    t8 = (t0 + 744);
    t13 = *((char **)t8);
    goto LAB76;

LAB77:    t8 = (t0 + 880);
    t19 = *((char **)t8);
    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t10, 32, t13, 32, t19, 32);
    goto LAB83;

LAB81:    memcpy(t10, t13, 8);
    goto LAB83;

LAB86:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(49, ng0);

LAB91:    xsi_set_current_line(50, ng0);
    t13 = (t0 + 3384);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t11, 0, 8);
    t26 = (t20 + 4);
    t38 = *((unsigned int *)t26);
    t39 = (~(t38));
    t40 = *((unsigned int *)t20);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t26) == 0)
        goto LAB92;

LAB94:    t27 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t27) = 1;

LAB95:    t31 = (t11 + 4);
    t32 = (t20 + 4);
    t43 = *((unsigned int *)t20);
    t44 = (~(t43));
    *((unsigned int *)t11) = t44;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB97;

LAB96:    t49 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t49 & 1U);
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & 1U);
    t37 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB101;

LAB98:    if (t25 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t10) = 1;

LAB101:    t19 = (t10 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (~(t30));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(55, ng0);

LAB108:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 15, t5, 32);
    t7 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 15, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3544);
    t4 = (t0 + 3544);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t13 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t10, t11, t12, ((int*)(t7)), 2, t8, 32, 1, t13, 32, 1);
    t19 = (t10 + 4);
    t14 = *((unsigned int *)t19);
    t9 = (!(t14));
    t20 = (t11 + 4);
    t15 = *((unsigned int *)t20);
    t55 = (!(t15));
    t56 = (t9 && t55);
    t26 = (t12 + 4);
    t16 = *((unsigned int *)t26);
    t58 = (!(t16));
    t59 = (t56 && t58);
    if (t59 == 1)
        goto LAB109;

LAB110:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 3);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 3);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 3U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 3U);
    t8 = (t0 + 3544);
    t13 = (t8 + 56U);
    t19 = *((char **)t13);
    memset(t12, 0, 8);
    t20 = (t12 + 4);
    t26 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 8);
    *((unsigned int *)t12) = t23;
    t24 = *((unsigned int *)t26);
    t25 = (t24 >> 8);
    *((unsigned int *)t20) = t25;
    t28 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t28 & 7U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 7U);
    t27 = (t0 + 3544);
    t31 = (t27 + 56U);
    t32 = *((char **)t31);
    memset(t51, 0, 8);
    t37 = (t51 + 4);
    t52 = (t32 + 4);
    t30 = *((unsigned int *)t32);
    t33 = (t30 >> 13);
    *((unsigned int *)t51) = t33;
    t34 = *((unsigned int *)t52);
    t35 = (t34 >> 13);
    *((unsigned int *)t37) = t35;
    t36 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t36 & 7U);
    t38 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t38 & 7U);
    xsi_vlogtype_concat(t10, 8, 8, 3U, t51, 3, t12, 3, t11, 2);
    t53 = (t0 + 2904);
    xsi_vlogvar_assign_value(t53, t10, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 11, t5, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB114;

LAB111:    if (t25 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t10) = 1;

LAB114:    t19 = (t10 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (~(t30));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB119;

LAB120:
LAB121:
LAB104:    goto LAB90;

LAB92:    *((unsigned int *)t11) = 1;
    goto LAB95;

LAB97:    t45 = *((unsigned int *)t11);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t11) = (t45 | t46);
    t47 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t47 | t48);
    goto LAB96;

LAB100:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(52, ng0);

LAB105:    xsi_set_current_line(53, ng0);
    t20 = (t0 + 1864U);
    t26 = *((char **)t20);
    t20 = (t0 + 3544);
    t27 = (t0 + 3544);
    t31 = (t27 + 72U);
    t32 = *((char **)t31);
    t37 = ((char*)((ng3)));
    t52 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t11, t12, t51, ((int*)(t32)), 2, t37, 32, 1, t52, 32, 1);
    t53 = (t11 + 4);
    t38 = *((unsigned int *)t53);
    t9 = (!(t38));
    t54 = (t12 + 4);
    t39 = *((unsigned int *)t54);
    t55 = (!(t39));
    t56 = (t9 && t55);
    t57 = (t51 + 4);
    t40 = *((unsigned int *)t57);
    t58 = (!(t40));
    t59 = (t56 && t58);
    if (t59 == 1)
        goto LAB106;

LAB107:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB104;

LAB106:    t41 = *((unsigned int *)t51);
    t60 = (t41 + 0);
    t42 = *((unsigned int *)t11);
    t43 = *((unsigned int *)t12);
    t61 = (t42 - t43);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t20, t26, t60, *((unsigned int *)t12), t62);
    goto LAB107;

LAB109:    t17 = *((unsigned int *)t12);
    t60 = (t17 + 0);
    t18 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t61 = (t18 - t21);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t2, t3, t60, *((unsigned int *)t11), t62);
    goto LAB110;

LAB113:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(61, ng0);

LAB118:    xsi_set_current_line(62, ng0);
    t20 = (t0 + 1016);
    t26 = *((char **)t20);
    t20 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t20, t26, 0, 0, 2, 0LL);
    goto LAB117;

LAB119:    xsi_set_current_line(64, ng0);

LAB122:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3864);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t7, 11, t8, 32);
    t13 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t13, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB126;

LAB123:    if (t25 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t10) = 1;

LAB126:    t19 = (t10 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (~(t30));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB127;

LAB128:
LAB129:    goto LAB121;

LAB125:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB126;

LAB127:    xsi_set_current_line(66, ng0);

LAB130:    xsi_set_current_line(67, ng0);
    t20 = (t0 + 1152);
    t26 = *((char **)t20);
    t20 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t20, t26, 0, 0, 2, 0LL);
    goto LAB129;

}


extern void work_m_01793390010622580120_2476129397_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_01793390010622580120_2476129397", "isim/captura_datos_downsampler_isim_beh.exe.sim/work/m_01793390010622580120_2476129397.didat");
	xsi_register_executes(pe);
}

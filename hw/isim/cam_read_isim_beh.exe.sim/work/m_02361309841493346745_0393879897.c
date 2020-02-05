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
static const char *ng0 = "/home/juandcarrillo/Documents/GitHub/work01-camara-grupo-2/hw/src/cam_read.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {15, 0};
static int ng4[] = {8, 0};
static int ng5[] = {7, 0};



static void Initial_46_0(char *t0)
{
    char t1[8];
    char *t2;
    char *t3;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    memset(t1, 0, 8);
    xsi_vlog_signed_unary_minus(t1, 32, t2, 32);
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t1, 0, 0, 16, 0LL);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t10[8];
    char t11[8];
    char t13[8];
    char t47[8];
    char t48[8];
    char t58[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;

LAB0:    t1 = (t0 + 5320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5640);
    *((int *)t2) = 1;
    t3 = (t0 + 5352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);

LAB16:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 2320U);
    t12 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB20;

LAB17:    if (t25 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t13) = 1;

LAB20:    memset(t11, 0, 8);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t29) != 0)
        goto LAB23;

LAB24:    t36 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB25;

LAB26:    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t36) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t11) > 0)
        goto LAB31;

LAB32:    memcpy(t10, t46, 8);

LAB33:    t40 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t40, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(60, ng0);

LAB34:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2480U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB38;

LAB35:    if (t25 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    memset(t11, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t12) != 0)
        goto LAB41;

LAB42:    t15 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB43;

LAB44:    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t15) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t11) > 0)
        goto LAB49;

LAB50:    memcpy(t10, t35, 8);

LAB51:    t28 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t28, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(67, ng0);

LAB52:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2480U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB56;

LAB53:    if (t25 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    memset(t47, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t12) != 0)
        goto LAB59;

LAB60:    t15 = (t47 + 4);
    t37 = *((unsigned int *)t47);
    t38 = (!(t37));
    t39 = *((unsigned int *)t15);
    t42 = (t38 || t39);
    if (t42 > 0)
        goto LAB61;

LAB62:    memcpy(t64, t47, 8);

LAB63:    memset(t11, 0, 8);
    t92 = (t64 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t92) != 0)
        goto LAB77;

LAB78:    t99 = (t11 + 4);
    t100 = *((unsigned int *)t11);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB79;

LAB80:    t105 = *((unsigned int *)t11);
    t106 = (~(t105));
    t107 = *((unsigned int *)t99);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t99) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t11) > 0)
        goto LAB85;

LAB86:    memcpy(t10, t109, 8);

LAB87:    t103 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t103, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(75, ng0);

LAB88:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2320U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB92;

LAB89:    if (t25 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t13) = 1;

LAB92:    memset(t47, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t12) != 0)
        goto LAB95;

LAB96:    t15 = (t47 + 4);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB97;

LAB98:    memcpy(t64, t47, 8);

LAB99:    memset(t11, 0, 8);
    t92 = (t64 + 4);
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t97);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t92) != 0)
        goto LAB113;

LAB114:    t99 = (t11 + 4);
    t105 = *((unsigned int *)t11);
    t106 = *((unsigned int *)t99);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB115;

LAB116:    t108 = *((unsigned int *)t11);
    t110 = (~(t108));
    t111 = *((unsigned int *)t99);
    t112 = (t110 || t111);
    if (t112 > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t99) > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t11) > 0)
        goto LAB121;

LAB122:    memcpy(t10, t109, 8);

LAB123:    t103 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t103, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2000U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB127;

LAB124:    if (t25 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t10) = 1;

LAB127:    t8 = (t10 + 4);
    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB128;

LAB129:
LAB130:    goto LAB15;

LAB19:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB23:    t35 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB25:    t40 = (t0 + 1288);
    t41 = *((char **)t40);
    goto LAB26;

LAB27:    t40 = (t0 + 1016);
    t46 = *((char **)t40);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t46, 32);
    goto LAB33;

LAB31:    memcpy(t10, t41, 8);
    goto LAB33;

LAB37:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB41:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB42;

LAB43:    t28 = (t0 + 1152);
    t29 = *((char **)t28);
    goto LAB44;

LAB45:    t28 = (t0 + 880);
    t35 = *((char **)t28);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t10, 32, t29, 32, t35, 32);
    goto LAB51;

LAB49:    memcpy(t10, t29, 8);
    goto LAB51;

LAB55:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t47) = 1;
    goto LAB60;

LAB59:    t14 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    t28 = (t0 + 2320U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t28);
    t45 = (t43 ^ t44);
    t49 = *((unsigned int *)t35);
    t50 = *((unsigned int *)t36);
    t51 = (t49 ^ t50);
    t52 = (t45 | t51);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t36);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB67;

LAB64:    if (t55 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t48) = 1;

LAB67:    memset(t58, 0, 8);
    t41 = (t48 + 4);
    t59 = *((unsigned int *)t41);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t41) != 0)
        goto LAB70;

LAB71:    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t58);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = (t47 + 4);
    t69 = (t58 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB66:    t40 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t58) = 1;
    goto LAB71;

LAB70:    t46 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB71;

LAB72:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t47 + 4);
    t79 = (t58 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t86 = *((unsigned int *)t58);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    goto LAB74;

LAB75:    *((unsigned int *)t11) = 1;
    goto LAB78;

LAB77:    t98 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB78;

LAB79:    t103 = (t0 + 880);
    t104 = *((char **)t103);
    goto LAB80;

LAB81:    t103 = (t0 + 1016);
    t109 = *((char **)t103);
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t10, 32, t104, 32, t109, 32);
    goto LAB87;

LAB85:    memcpy(t10, t104, 8);
    goto LAB87;

LAB91:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t47) = 1;
    goto LAB96;

LAB95:    t14 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    t28 = (t0 + 2480U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t42 = *((unsigned int *)t29);
    t43 = *((unsigned int *)t28);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t35);
    t49 = *((unsigned int *)t36);
    t50 = (t45 ^ t49);
    t51 = (t44 | t50);
    t52 = *((unsigned int *)t35);
    t53 = *((unsigned int *)t36);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB103;

LAB100:    if (t54 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t48) = 1;

LAB103:    memset(t58, 0, 8);
    t41 = (t48 + 4);
    t57 = *((unsigned int *)t41);
    t59 = (~(t57));
    t60 = *((unsigned int *)t48);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t41) != 0)
        goto LAB106;

LAB107:    t63 = *((unsigned int *)t47);
    t65 = *((unsigned int *)t58);
    t66 = (t63 & t65);
    *((unsigned int *)t64) = t66;
    t68 = (t47 + 4);
    t69 = (t58 + 4);
    t70 = (t64 + 4);
    t67 = *((unsigned int *)t68);
    t71 = *((unsigned int *)t69);
    t72 = (t67 | t71);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB99;

LAB102:    t40 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t58) = 1;
    goto LAB107;

LAB106:    t46 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB107;

LAB108:    t75 = *((unsigned int *)t64);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t75 | t76);
    t78 = (t47 + 4);
    t79 = (t58 + 4);
    t77 = *((unsigned int *)t47);
    t80 = (~(t77));
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t84 = *((unsigned int *)t58);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t88 = (~(t86));
    t83 = (t80 & t82);
    t87 = (t85 & t88);
    t89 = (~(t83));
    t90 = (~(t87));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t90);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t89);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t90);
    goto LAB110;

LAB111:    *((unsigned int *)t11) = 1;
    goto LAB114;

LAB113:    t98 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB114;

LAB115:    t103 = (t0 + 1016);
    t104 = *((char **)t103);
    goto LAB116;

LAB117:    t103 = (t0 + 880);
    t109 = *((char **)t103);
    goto LAB118;

LAB119:    xsi_vlog_unsigned_bit_combine(t10, 32, t104, 32, t109, 32);
    goto LAB123;

LAB121:    memcpy(t10, t104, 8);
    goto LAB123;

LAB126:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(77, ng0);

LAB131:    xsi_set_current_line(78, ng0);
    t12 = (t0 + 3680);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memset(t11, 0, 8);
    t28 = (t15 + 4);
    t37 = *((unsigned int *)t28);
    t38 = (~(t37));
    t39 = *((unsigned int *)t15);
    t42 = (t39 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB135;

LAB133:    if (*((unsigned int *)t28) == 0)
        goto LAB132;

LAB134:    t29 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t29) = 1;

LAB135:    t35 = (t11 + 4);
    t36 = (t15 + 4);
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    *((unsigned int *)t11) = t45;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t36) != 0)
        goto LAB137;

LAB136:    t53 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t53 & 1U);
    t54 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t54 & 1U);
    t40 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t40, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB141;

LAB138:    if (t25 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t10) = 1;

LAB141:    t14 = (t10 + 4);
    t30 = *((unsigned int *)t14);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(82, ng0);

LAB148:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 16, t5, 32);
    t7 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 16, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t0 + 3840);
    t4 = (t0 + 3840);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t12 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t10, t11, t13, ((int*)(t7)), 2, t8, 32, 1, t12, 32, 1);
    t14 = (t10 + 4);
    t16 = *((unsigned int *)t14);
    t9 = (!(t16));
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t15);
    t83 = (!(t17));
    t87 = (t9 && t83);
    t28 = (t13 + 4);
    t18 = *((unsigned int *)t28);
    t113 = (!(t18));
    t114 = (t87 && t113);
    if (t114 == 1)
        goto LAB149;

LAB150:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 3);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 3U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 3U);
    t8 = (t0 + 3840);
    t12 = (t8 + 56U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t15 = (t13 + 4);
    t28 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (t22 >> 8);
    *((unsigned int *)t13) = t23;
    t24 = *((unsigned int *)t28);
    t25 = (t24 >> 8);
    *((unsigned int *)t15) = t25;
    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 7U);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t27 & 7U);
    t29 = (t0 + 3840);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    memset(t47, 0, 8);
    t40 = (t47 + 4);
    t41 = (t36 + 4);
    t30 = *((unsigned int *)t36);
    t31 = (t30 >> 13);
    *((unsigned int *)t47) = t31;
    t32 = *((unsigned int *)t41);
    t33 = (t32 >> 13);
    *((unsigned int *)t40) = t33;
    t34 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t34 & 7U);
    t37 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t37 & 7U);
    xsi_vlogtype_concat(t10, 8, 8, 3U, t47, 3, t13, 3, t11, 2);
    t46 = (t0 + 3200);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 11, t5, 32);
    t7 = (t0 + 4000);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t7, 32, t5, 32);
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB154;

LAB151:    if (t25 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t11) = 1;

LAB154:    t15 = (t11 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB155;

LAB156:
LAB157:
LAB144:    goto LAB130;

LAB132:    *((unsigned int *)t11) = 1;
    goto LAB135;

LAB137:    t49 = *((unsigned int *)t11);
    t50 = *((unsigned int *)t36);
    *((unsigned int *)t11) = (t49 | t50);
    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t36);
    *((unsigned int *)t35) = (t51 | t52);
    goto LAB136;

LAB140:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(79, ng0);

LAB145:    xsi_set_current_line(80, ng0);
    t15 = (t0 + 2640U);
    t28 = *((char **)t15);
    t15 = (t0 + 3840);
    t29 = (t0 + 3840);
    t35 = (t29 + 72U);
    t36 = *((char **)t35);
    t40 = ((char*)((ng3)));
    t41 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t11, t13, t47, ((int*)(t36)), 2, t40, 32, 1, t41, 32, 1);
    t46 = (t11 + 4);
    t37 = *((unsigned int *)t46);
    t9 = (!(t37));
    t68 = (t13 + 4);
    t38 = *((unsigned int *)t68);
    t83 = (!(t38));
    t87 = (t9 && t83);
    t69 = (t47 + 4);
    t39 = *((unsigned int *)t69);
    t113 = (!(t39));
    t114 = (t87 && t113);
    if (t114 == 1)
        goto LAB146;

LAB147:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB144;

LAB146:    t42 = *((unsigned int *)t47);
    t115 = (t42 + 0);
    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t13);
    t116 = (t43 - t44);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t15, t28, t115, *((unsigned int *)t13), t117);
    goto LAB147;

LAB149:    t19 = *((unsigned int *)t13);
    t115 = (t19 + 0);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t116 = (t20 - t21);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t2, t3, t115, *((unsigned int *)t11), t117);
    goto LAB150;

LAB153:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(90, ng0);

LAB158:    xsi_set_current_line(91, ng0);
    t28 = (t0 + 1152);
    t29 = *((char **)t28);
    t28 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 11, t5, 32);
    t7 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t7, 32, t5, 32);
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB162;

LAB159:    if (t25 != 0)
        goto LAB161;

LAB160:    *((unsigned int *)t11) = 1;

LAB162:    t15 = (t11 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB163;

LAB164:
LAB165:    goto LAB157;

LAB161:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB162;

LAB163:    xsi_set_current_line(93, ng0);

LAB166:    xsi_set_current_line(94, ng0);
    t28 = (t0 + 1288);
    t29 = *((char **)t28);
    t28 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 2, 0LL);
    goto LAB165;

}


extern void work_m_02361309841493346745_0393879897_init()
{
	static char *pe[] = {(void *)Initial_46_0,(void *)Always_50_1};
	xsi_register_didat("work_m_02361309841493346745_0393879897", "isim/cam_read_isim_beh.exe.sim/work/m_02361309841493346745_0393879897.didat");
	xsi_register_executes(pe);
}

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
    char t13[8];
    char t47[8];
    char t48[8];
    char t57[8];
    char t63[8];
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
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;

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

LAB5:    xsi_set_current_line(28, ng0);
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

LAB7:    xsi_set_current_line(30, ng0);

LAB16:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 2344U);
    t12 = *((char **)t7);
    t7 = ((char*)((ng1)));
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

LAB33:    t40 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t40, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
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

LAB51:    t28 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t28, t10, 0, 0, 2, 0LL);
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
    t2 = (t0 + 2024U);
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
        goto LAB56;

LAB53:    if (t25 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    memset(t11, 0, 8);
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

LAB60:    t15 = (t11 + 4);
    t37 = *((unsigned int *)t11);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB61;

LAB62:    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t15) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t11) > 0)
        goto LAB67;

LAB68:    memcpy(t10, t35, 8);

LAB69:    t28 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t28, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(53, ng0);

LAB70:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2344U);
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
        goto LAB74;

LAB71:    if (t25 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    memset(t47, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t12) != 0)
        goto LAB77;

LAB78:    t15 = (t47 + 4);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB79;

LAB80:    memcpy(t63, t47, 8);

LAB81:    memset(t11, 0, 8);
    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t95) != 0)
        goto LAB95;

LAB96:    t102 = (t11 + 4);
    t103 = *((unsigned int *)t11);
    t104 = *((unsigned int *)t102);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB97;

LAB98:    t108 = *((unsigned int *)t11);
    t109 = (~(t108));
    t110 = *((unsigned int *)t102);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t102) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t11) > 0)
        goto LAB103;

LAB104:    memcpy(t10, t112, 8);

LAB105:    t106 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t106, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB109;

LAB106:    if (t25 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t10) = 1;

LAB109:    t8 = (t10 + 4);
    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB110;

LAB111:
LAB112:    goto LAB15;

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

LAB25:    t40 = (t0 + 1152);
    t41 = *((char **)t40);
    goto LAB26;

LAB27:    t40 = (t0 + 880);
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

LAB43:    t28 = (t0 + 1016);
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

LAB57:    *((unsigned int *)t11) = 1;
    goto LAB60;

LAB59:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    t28 = (t0 + 744);
    t29 = *((char **)t28);
    goto LAB62;

LAB63:    t28 = (t0 + 880);
    t35 = *((char **)t28);
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t10, 32, t29, 32, t35, 32);
    goto LAB69;

LAB67:    memcpy(t10, t29, 8);
    goto LAB69;

LAB73:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t47) = 1;
    goto LAB78;

LAB77:    t14 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB78;

LAB79:    t28 = (t0 + 2024U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
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
        goto LAB85;

LAB82:    if (t54 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t48) = 1;

LAB85:    memset(t57, 0, 8);
    t41 = (t48 + 4);
    t58 = *((unsigned int *)t41);
    t59 = (~(t58));
    t60 = *((unsigned int *)t48);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t41) != 0)
        goto LAB88;

LAB89:    t64 = *((unsigned int *)t47);
    t65 = *((unsigned int *)t57);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t47 + 4);
    t68 = (t57 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB84:    t40 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t57) = 1;
    goto LAB89;

LAB88:    t46 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB89;

LAB90:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t47 + 4);
    t78 = (t57 + 4);
    t79 = *((unsigned int *)t47);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t57);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB92;

LAB93:    *((unsigned int *)t11) = 1;
    goto LAB96;

LAB95:    t101 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB96;

LAB97:    t106 = (t0 + 880);
    t107 = *((char **)t106);
    goto LAB98;

LAB99:    t106 = (t0 + 744);
    t112 = *((char **)t106);
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t10, 32, t107, 32, t112, 32);
    goto LAB105;

LAB103:    memcpy(t10, t107, 8);
    goto LAB105;

LAB108:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(55, ng0);

LAB113:    xsi_set_current_line(56, ng0);
    t12 = (t0 + 3384);
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
        goto LAB117;

LAB115:    if (*((unsigned int *)t28) == 0)
        goto LAB114;

LAB116:    t29 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t29) = 1;

LAB117:    t35 = (t11 + 4);
    t36 = (t15 + 4);
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    *((unsigned int *)t11) = t45;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t36) != 0)
        goto LAB119;

LAB118:    t53 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t53 & 1U);
    t54 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t54 & 1U);
    t40 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t40, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
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
        goto LAB123;

LAB120:    if (t25 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t10) = 1;

LAB123:    t14 = (t10 + 4);
    t30 = *((unsigned int *)t14);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(61, ng0);

LAB130:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 15, t5, 32);
    t7 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 15, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3544);
    t4 = (t0 + 3544);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t12 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t10, t11, t13, ((int*)(t7)), 2, t8, 32, 1, t12, 32, 1);
    t14 = (t10 + 4);
    t16 = *((unsigned int *)t14);
    t9 = (!(t16));
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t15);
    t87 = (!(t17));
    t88 = (t9 && t87);
    t28 = (t13 + 4);
    t18 = *((unsigned int *)t28);
    t113 = (!(t18));
    t114 = (t88 && t113);
    if (t114 == 1)
        goto LAB131;

LAB132:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3544);
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
    t8 = (t0 + 3544);
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
    t29 = (t0 + 3544);
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
    t46 = (t0 + 2904);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 11, t5, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
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
        goto LAB136;

LAB133:    if (t25 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t11) = 1;

LAB136:    t15 = (t11 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB137;

LAB138:
LAB139:
LAB126:    goto LAB112;

LAB114:    *((unsigned int *)t11) = 1;
    goto LAB117;

LAB119:    t49 = *((unsigned int *)t11);
    t50 = *((unsigned int *)t36);
    *((unsigned int *)t11) = (t49 | t50);
    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t36);
    *((unsigned int *)t35) = (t51 | t52);
    goto LAB118;

LAB122:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(58, ng0);

LAB127:    xsi_set_current_line(59, ng0);
    t15 = (t0 + 1864U);
    t28 = *((char **)t15);
    t15 = (t0 + 3544);
    t29 = (t0 + 3544);
    t35 = (t29 + 72U);
    t36 = *((char **)t35);
    t40 = ((char*)((ng3)));
    t41 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t11, t13, t47, ((int*)(t36)), 2, t40, 32, 1, t41, 32, 1);
    t46 = (t11 + 4);
    t37 = *((unsigned int *)t46);
    t9 = (!(t37));
    t67 = (t13 + 4);
    t38 = *((unsigned int *)t67);
    t87 = (!(t38));
    t88 = (t9 && t87);
    t68 = (t47 + 4);
    t39 = *((unsigned int *)t68);
    t113 = (!(t39));
    t114 = (t88 && t113);
    if (t114 == 1)
        goto LAB128;

LAB129:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB126;

LAB128:    t42 = *((unsigned int *)t47);
    t115 = (t42 + 0);
    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t13);
    t116 = (t43 - t44);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t15, t28, t115, *((unsigned int *)t13), t117);
    goto LAB129;

LAB131:    t19 = *((unsigned int *)t13);
    t115 = (t19 + 0);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t116 = (t20 - t21);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t2, t3, t115, *((unsigned int *)t11), t117);
    goto LAB132;

LAB135:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(67, ng0);

LAB140:    xsi_set_current_line(68, ng0);
    t28 = (t0 + 1016);
    t29 = *((char **)t28);
    t28 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 11, t5, 32);
    t7 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 11, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
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
        goto LAB144;

LAB141:    if (t25 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t11) = 1;

LAB144:    t15 = (t11 + 4);
    t30 = *((unsigned int *)t15);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB145;

LAB146:
LAB147:    goto LAB139;

LAB143:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(70, ng0);

LAB148:    xsi_set_current_line(71, ng0);
    t28 = (t0 + 1152);
    t29 = *((char **)t28);
    t28 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 2, 0LL);
    goto LAB147;

}


extern void work_m_01793390010622580120_2476129397_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_01793390010622580120_2476129397", "isim/captura_datos_downsampler_isim_beh.exe.sim/work/m_01793390010622580120_2476129397.didat");
	xsi_register_executes(pe);
}

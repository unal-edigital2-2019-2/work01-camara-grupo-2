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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_02760857255181855774_2593380106_init();
    unisims_ver_m_10756824001551653569_4058743676_init();
    unisims_ver_m_03306128100829070844_1387874442_init();
    work_m_02366545546053942018_2683070608_init();
    work_m_01111100697046049681_0418314598_init();
    work_m_02389268584253233851_1742765518_init();
    work_m_13148232704337725678_2476129397_init();
    work_m_15003448274457094784_0898626419_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15003448274457094784_0898626419");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}

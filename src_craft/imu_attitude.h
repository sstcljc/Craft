/*
 * imu_attitude.h
 * 姿态解算算法
 * 创建者：死猫
 * 创建时间：2015.01.15
 * 修改者：（每次修改后，请将最后修改者置于末尾，其他人顺序保持不变）
 *     死猫
 * 最终修改时间：2015.03.22
 */
 
#ifndef IMU_ATTITUDE_H_
#define IMU_ATTITUDE_H_

#include "system_define.h"

#ifdef __cplusplus
extern "C"{
#endif

extern void imu_attitude_init(void);
extern void imu_attitude(void);
extern void set_field(const CALCU_TYPE* data_A_G_M);

#ifdef __cplusplus
};
#endif

#endif

/*
 * Common.h
 *
 * Created: 4/4/2020 6:24:05 PM
 *  Author: Abdallah Issa
 */ 


#ifndef COMMON_H_
#define COMMON_H_

typedef unsigned char uint8;
typedef char int8;


#define ACCESS_REG_8BIT(REG)       (*(volatile uint8*)REG)
#define WRITE_REG_8BIT(REG,VAL)    (ACCESS_REG_8BIT(REG)=VAL)
#define SET_BIT(REG,BIT_NUM)       (ACCESS_REG_8BIT(REG) |=(1<<BIT_NUM))
#define CLEAR_BIT(REG,BIT_NUM)     (ACCESS_REG_8BIT(REG) &=(~(1<<BIT_NUM)))
#define BIT_IS_SET(REG,BIT_NUM)    (ACCESS_REG_8BIT(REG) & (1<<BIT_NUM)) //Check
#define BIT_IS_CLEAR(REG,BIT_NUM)  (!BIT_IS_SET(REG,BIT_NUM)) //Check
#define TOGGLE_BIT(REG,BIT_NUM)    (ACCESS_REG_8BIT(REG) ^=(1<<BIT_NUM))


#endif /* COMMON_H_ */
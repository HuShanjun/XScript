﻿//=============================================================
// GammaCppArg.h 
// 生成参数类型字符串
// 柯达昭
// 2012-08-09
//=====================================================================
#pragma once

namespace Gamma
{
#define MAKE_CLASS_PARAM_0
#define MAKE_CLASS_PARAM_1 							,cla##ss Param0
#define MAKE_CLASS_PARAM_2  	MAKE_CLASS_PARAM_1	,cla##ss Param1
#define MAKE_CLASS_PARAM_3  	MAKE_CLASS_PARAM_2	,cla##ss Param2
#define MAKE_CLASS_PARAM_4  	MAKE_CLASS_PARAM_3	,cla##ss Param3
#define MAKE_CLASS_PARAM_5  	MAKE_CLASS_PARAM_4	,cla##ss Param4
#define MAKE_CLASS_PARAM_6  	MAKE_CLASS_PARAM_5	,cla##ss Param5
#define MAKE_CLASS_PARAM_7  	MAKE_CLASS_PARAM_6	,cla##ss Param6
#define MAKE_CLASS_PARAM_8  	MAKE_CLASS_PARAM_7	,cla##ss Param7
#define MAKE_CLASS_PARAM_9  	MAKE_CLASS_PARAM_8	,cla##ss Param8
#define MAKE_CLASS_PARAM_10 	MAKE_CLASS_PARAM_9	,cla##ss Param9
#define MAKE_CLASS_PARAM_11 	MAKE_CLASS_PARAM_10	,cla##ss Param10
#define MAKE_CLASS_PARAM_12 	MAKE_CLASS_PARAM_11	,cla##ss Param11
#define MAKE_CLASS_PARAM_13 	MAKE_CLASS_PARAM_12	,cla##ss Param12
#define MAKE_CLASS_PARAM_14 	MAKE_CLASS_PARAM_13	,cla##ss Param13
#define MAKE_CLASS_PARAM_15 	MAKE_CLASS_PARAM_14	,cla##ss Param14
#define MAKE_CLASS_PARAM_16 	MAKE_CLASS_PARAM_15	,cla##ss Param15
#define MAKE_CLASS_PARAM_17 	MAKE_CLASS_PARAM_16	,cla##ss Param16
#define MAKE_CLASS_PARAM_18 	MAKE_CLASS_PARAM_17	,cla##ss Param17
#define MAKE_CLASS_PARAM_19 	MAKE_CLASS_PARAM_18	,cla##ss Param18
#define MAKE_CLASS_PARAM_20 	MAKE_CLASS_PARAM_19	,cla##ss Param19
#define CLASS_PARAM( n )		MAKE_CLASS_PARAM_##n

#define MAKE_PARAM_0
#define MAKE_PARAM_1 					Param0
#define MAKE_PARAM_2  	MAKE_PARAM_1, 	Param1
#define MAKE_PARAM_3  	MAKE_PARAM_2, 	Param2
#define MAKE_PARAM_4  	MAKE_PARAM_3, 	Param3
#define MAKE_PARAM_5  	MAKE_PARAM_4, 	Param4
#define MAKE_PARAM_6  	MAKE_PARAM_5, 	Param5
#define MAKE_PARAM_7  	MAKE_PARAM_6, 	Param6
#define MAKE_PARAM_8  	MAKE_PARAM_7, 	Param7
#define MAKE_PARAM_9  	MAKE_PARAM_8, 	Param8
#define MAKE_PARAM_10 	MAKE_PARAM_9, 	Param9
#define MAKE_PARAM_11 	MAKE_PARAM_10,	Param10
#define MAKE_PARAM_12 	MAKE_PARAM_11,	Param11
#define MAKE_PARAM_13 	MAKE_PARAM_12,	Param12
#define MAKE_PARAM_14 	MAKE_PARAM_13,	Param13
#define MAKE_PARAM_15 	MAKE_PARAM_14,	Param14
#define MAKE_PARAM_16 	MAKE_PARAM_15,	Param15
#define MAKE_PARAM_17 	MAKE_PARAM_16,	Param16
#define MAKE_PARAM_18 	MAKE_PARAM_17,	Param17
#define MAKE_PARAM_19 	MAKE_PARAM_18,	Param18
#define MAKE_PARAM_20 	MAKE_PARAM_19,	Param19
#define PARAM( n )		MAKE_PARAM_##n

#define MAKE_COMMA_PARAM_0
#define MAKE_COMMA_PARAM_1 							,Param0
#define MAKE_COMMA_PARAM_2  	MAKE_COMMA_PARAM_1 	,Param1
#define MAKE_COMMA_PARAM_3  	MAKE_COMMA_PARAM_2 	,Param2
#define MAKE_COMMA_PARAM_4  	MAKE_COMMA_PARAM_3 	,Param3
#define MAKE_COMMA_PARAM_5  	MAKE_COMMA_PARAM_4 	,Param4
#define MAKE_COMMA_PARAM_6  	MAKE_COMMA_PARAM_5 	,Param5
#define MAKE_COMMA_PARAM_7  	MAKE_COMMA_PARAM_6 	,Param6
#define MAKE_COMMA_PARAM_8  	MAKE_COMMA_PARAM_7 	,Param7
#define MAKE_COMMA_PARAM_9  	MAKE_COMMA_PARAM_8 	,Param8
#define MAKE_COMMA_PARAM_10 	MAKE_COMMA_PARAM_9 	,Param9
#define MAKE_COMMA_PARAM_11 	MAKE_COMMA_PARAM_10	,Param10
#define MAKE_COMMA_PARAM_12 	MAKE_COMMA_PARAM_11	,Param11
#define MAKE_COMMA_PARAM_13 	MAKE_COMMA_PARAM_12	,Param12
#define MAKE_COMMA_PARAM_14 	MAKE_COMMA_PARAM_13	,Param13
#define MAKE_COMMA_PARAM_15 	MAKE_COMMA_PARAM_14	,Param14
#define MAKE_COMMA_PARAM_16 	MAKE_COMMA_PARAM_15	,Param15
#define MAKE_COMMA_PARAM_17 	MAKE_COMMA_PARAM_16	,Param16
#define MAKE_COMMA_PARAM_18 	MAKE_COMMA_PARAM_17	,Param17
#define MAKE_COMMA_PARAM_19 	MAKE_COMMA_PARAM_18	,Param18
#define MAKE_COMMA_PARAM_20 	MAKE_COMMA_PARAM_19	,Param19
#define COMMA_PARAM( n )		MAKE_COMMA_PARAM_##n

#define MAKE_PARAM_VALUE_0
#define MAKE_PARAM_VALUE_1 								Param0   p0 
#define MAKE_PARAM_VALUE_2  	MAKE_PARAM_VALUE_1 , 	Param1   p1
#define MAKE_PARAM_VALUE_3  	MAKE_PARAM_VALUE_2 , 	Param2   p2
#define MAKE_PARAM_VALUE_4  	MAKE_PARAM_VALUE_3 , 	Param3   p3
#define MAKE_PARAM_VALUE_5  	MAKE_PARAM_VALUE_4 , 	Param4   p4
#define MAKE_PARAM_VALUE_6  	MAKE_PARAM_VALUE_5 , 	Param5   p5
#define MAKE_PARAM_VALUE_7  	MAKE_PARAM_VALUE_6 , 	Param6   p6
#define MAKE_PARAM_VALUE_8  	MAKE_PARAM_VALUE_7 , 	Param7   p7
#define MAKE_PARAM_VALUE_9  	MAKE_PARAM_VALUE_8 , 	Param8   p8
#define MAKE_PARAM_VALUE_10 	MAKE_PARAM_VALUE_9 , 	Param9   p9
#define MAKE_PARAM_VALUE_11 	MAKE_PARAM_VALUE_10,	Param10  p10
#define MAKE_PARAM_VALUE_12 	MAKE_PARAM_VALUE_11,	Param11  p11
#define MAKE_PARAM_VALUE_13 	MAKE_PARAM_VALUE_12,	Param12  p12
#define MAKE_PARAM_VALUE_14 	MAKE_PARAM_VALUE_13,	Param13  p13
#define MAKE_PARAM_VALUE_15 	MAKE_PARAM_VALUE_14,	Param14  p14
#define MAKE_PARAM_VALUE_16 	MAKE_PARAM_VALUE_15,	Param15  p15
#define MAKE_PARAM_VALUE_17 	MAKE_PARAM_VALUE_16,	Param16  p16
#define MAKE_PARAM_VALUE_18 	MAKE_PARAM_VALUE_17,	Param17  p17
#define MAKE_PARAM_VALUE_19 	MAKE_PARAM_VALUE_18,	Param18  p18
#define MAKE_PARAM_VALUE_20 	MAKE_PARAM_VALUE_19,	Param19  p19
#define PARAM_VALUE( n )		MAKE_PARAM_VALUE_##n

#define MAKE_VALUE_0
#define MAKE_VALUE_1 					p0 
#define MAKE_VALUE_2  	MAKE_VALUE_1 , 	p1
#define MAKE_VALUE_3  	MAKE_VALUE_2 , 	p2
#define MAKE_VALUE_4  	MAKE_VALUE_3 , 	p3
#define MAKE_VALUE_5  	MAKE_VALUE_4 , 	p4
#define MAKE_VALUE_6  	MAKE_VALUE_5 , 	p5
#define MAKE_VALUE_7  	MAKE_VALUE_6 , 	p6
#define MAKE_VALUE_8  	MAKE_VALUE_7 , 	p7
#define MAKE_VALUE_9  	MAKE_VALUE_8 , 	p8
#define MAKE_VALUE_10 	MAKE_VALUE_9 , 	p9
#define MAKE_VALUE_11 	MAKE_VALUE_10,	p10
#define MAKE_VALUE_12 	MAKE_VALUE_11,	p11
#define MAKE_VALUE_13 	MAKE_VALUE_12,	p12
#define MAKE_VALUE_14 	MAKE_VALUE_13,	p13
#define MAKE_VALUE_15 	MAKE_VALUE_14,	p14
#define MAKE_VALUE_16 	MAKE_VALUE_15,	p15
#define MAKE_VALUE_17 	MAKE_VALUE_16,	p16
#define MAKE_VALUE_18 	MAKE_VALUE_17,	p17
#define MAKE_VALUE_19 	MAKE_VALUE_18,	p18
#define MAKE_VALUE_20 	MAKE_VALUE_19,	p19
#define VALUE( n )		MAKE_VALUE_##n

#define MAKE_VALUE_ADDR_0
#define MAKE_VALUE_ADDR_1 						(void*)&p0, 
#define MAKE_VALUE_ADDR_2  	MAKE_VALUE_ADDR_1	(void*)&p1,
#define MAKE_VALUE_ADDR_3  	MAKE_VALUE_ADDR_2	(void*)&p2,
#define MAKE_VALUE_ADDR_4  	MAKE_VALUE_ADDR_3	(void*)&p3,
#define MAKE_VALUE_ADDR_5  	MAKE_VALUE_ADDR_4	(void*)&p4,
#define MAKE_VALUE_ADDR_6  	MAKE_VALUE_ADDR_5	(void*)&p5,
#define MAKE_VALUE_ADDR_7  	MAKE_VALUE_ADDR_6	(void*)&p6,
#define MAKE_VALUE_ADDR_8  	MAKE_VALUE_ADDR_7	(void*)&p7,
#define MAKE_VALUE_ADDR_9  	MAKE_VALUE_ADDR_8	(void*)&p8,
#define MAKE_VALUE_ADDR_10 	MAKE_VALUE_ADDR_9	(void*)&p9,
#define MAKE_VALUE_ADDR_11 	MAKE_VALUE_ADDR_10	(void*)&p10,
#define MAKE_VALUE_ADDR_12 	MAKE_VALUE_ADDR_11	(void*)&p11,
#define MAKE_VALUE_ADDR_13 	MAKE_VALUE_ADDR_12	(void*)&p12,
#define MAKE_VALUE_ADDR_14 	MAKE_VALUE_ADDR_13	(void*)&p13,
#define MAKE_VALUE_ADDR_15 	MAKE_VALUE_ADDR_14	(void*)&p14,
#define MAKE_VALUE_ADDR_16 	MAKE_VALUE_ADDR_15	(void*)&p15,
#define MAKE_VALUE_ADDR_17 	MAKE_VALUE_ADDR_16	(void*)&p16,
#define MAKE_VALUE_ADDR_18 	MAKE_VALUE_ADDR_17	(void*)&p17,
#define MAKE_VALUE_ADDR_19 	MAKE_VALUE_ADDR_18	(void*)&p18,
#define MAKE_VALUE_ADDR_20 	MAKE_VALUE_ADDR_19	(void*)&p19,
#define VALUE_ADDR( n )		MAKE_VALUE_ADDR_##n

}

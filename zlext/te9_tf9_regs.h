
#ifndef __TE9_TF9_REG_H__
#define __TE9_TF9_REG_H__

struct __kx__9_regs
{
	char                            *regname;
	unsigned char reg_addr;
	unsigned char rstval;
};

struct __kx__9_regs kxtf9_regs[] =
{
	{
		"XOUT_HPF_L",                         0x00,           0x00
	},
	{
		"XOUT_HPF_H",                         0x01,           0x00
	},
	{
		"YOUT_HPF_L",                         0x02,           0x00
	},
	{
		"YOUT_HPF_H",                         0x03,           0x00
	},
	{
		"ZOUT_HPF_L",                         0x04,           0x00
	},
	{
		"ZOUT_HPF_H",                         0x05,           0x00
	},
	{
		"XOUT_L",                                     0x06,           0x00
	},
	{
		"XOUT_H",                                     0x07,           0x00
	},
	{
		"YOUT_L",                                     0x08,           0x00
	},
	{
		"YOUT_H",                                     0x09,           0x00
	},
	{
		"ZOUT_L",                                     0x0A,           0x00
	},
	{
		"ZOUT_H",                                     0x0B,           0x00
	},
	{
		"ST_RESP",                                    0x0C,           0x55
	},
	{
		"WHO_AM_I",                           0x0F,           0x4E
	},
	{
		"TILT_POS_CUR",                       0x10,           0x01
	},
	{
		"TILT_POS_PRE",                               0x11,           0x01
	},
	{
		"INT_SRC_REG1",                       0x15,           0x00
	},
	{
		"INT_SRC_REG2",                       0x16,           0x00
	},
	{
		"STATUS_REG",                         0x18,           0x00
	},
	{
		"INT_REL",                                    0x1A,           0x00
	},
	{
		"CTRL_REG1",                          0x1B,           0x00
	},
	{
		"CTRL_REG2",                          0x1C,           0x3F
	},
	{
		"CTRL_REG3",                          0x1D,           0x4D
	},
	{
		"INT_CTRL_REG1",                      0x1E,           0x80
	},
	{
		"INT_CTRL_REG2",                      0x1F,           0xE0
	},
	{
		"INT_CTRL_REG3",                      0x20,           0x3F
	},
	{
		"DATA_CTRL_REG",                      0x21,           0x02
	},
	{
		"TILT_TIMER",                         0x28,           0x00
	},
	{
		"WUF_TIMER",                          0x29,           0x00
	},
	{
		"TDT_TIMER",                          0x2B,           0x78
	},
	{
		"TDT_H_THRESH",                       0x2C,           0xB6
	},
	{
		"TDT_L_THRESH",                       0x2D,           0x1A
	},
	{
		"TDT_FIRST_TIMER",                    0x2E,           0xA2
	},
	{
		"TDT_SEC_TIMER",                      0x2F,           0x24
	},
	{
		"TDT_LATENCY_TIMER",          0x30,           0x28
	},
	{
		"TDT_WINDOW_TIMER",           0x31,           0xA0
	},
	{
		"WUF_THRESH",                         0x5A,           0x20
	},
};

struct __kx__9_regs kxte9_regs[] =
{
	{
		"ST_RESP",                                    0x0C,           0x55
	},
	{
		"B2S_THRESH",                         0x0D,           0x00
	},
	{
		"WUF_THRESH",                         0x0E,           0x00
	},
	{
		"WHO_AM_I",                           0x0F,           0x00
	},
	{
		"TILT_POS_CUR",                       0x10,           0x01
	},
	{
		"TILT_POS_PRE",                               0x11,           0x01
	},
	{
		"XOUT",                                       0x12,           0x00
	},
	{
		"YOUT",                                       0x13,           0x00
	},
	{
		"ZOUT",                                       0x14,           0x00
	},
	{
		"INT_SRC_REG1",                       0x16,           0x00
	},
	{
		"INT_SRC_REG2",                       0x17,           0x00
	},
	{
		"STATUS_REG",                         0x18,           0x00
	},
	{
		"INT_REL",                                    0x1A,           0x00
	},
	{
		"CTRL_REG1",                          0x1B,           0x00
	},
	{
		"CTRL_REG2",                          0x1C,           0x3F
	},
	{
		"CTRL_REG3",                          0x1D,           0x06
	},
	{
		"INT_CTRL_REG1",                      0x1E,           0x08
	},
	{
		"INT_CTRL_REG2",                      0x1F,           0xE0
	},
	{
		"TILT_TIMER",                         0x28,           0x00
	},
	{
		"WUF_TIMER",                          0x29,           0x00
	},
	{
		"B2S_TIMER",                          0x2A,           0x00
	},
	{
		"WUF_THRESH",                         0x5A,           0x20
	},                                                              // 0.5g
	{
		"B2S_THRESH",                         0x5B,           0x60
	},                                                              // 1.5g
	{
		"TILT_ANGLE",                         0x5C,           0x1C
	},
	{
		"HYST_SET",                           0x5F,           0x08
	},
};

#endif // __TE9_TF9_REG_H__

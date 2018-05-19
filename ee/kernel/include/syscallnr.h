/**
 * @file
 * This file contains the system call numbers, similar to asm/unistd.h on Linux.
 */

#ifndef __SYSCALLNR_H__
#define __SYSCALLNR_H__

/** @name Kernel Syscall Numbers
 *  @{
 */
#define __NR_ResetEE			1
#define __NR_SetGsCrt			2
#define __NR__Exit			4
#define __NR_ResumeIntrDispatch		5	//Arbitrarily named
#define __NR__LoadExecPS2		6
#define __NR__ExecPS2			7
#define __NR_ResumeT3IntrDispatch	8	//Arbitrarily named (used by alarm update)
#define __NR_RFU009			9
#define __NR_AddSbusIntcHandler		0xa
#define __NR_RemoveSbusIntcHandler	0xb
#define __NR_Interrupt2Iop		0xc
#define __NR_SetVTLBRefillHandler	0xd
#define __NR_SetVCommonHandler		0xe
#define __NR_SetVInterruptHandler	0xf
#define __NR_AddIntcHandler		0x10
#define __NR_AddIntcHandler2		__NR_AddIntcHandler
#define __NR_RemoveIntcHandler		0x11
#define __NR_AddDmacHandler		0x12
#define __NR_AddDmacHandler2		__NR_AddDmacHandler
#define __NR_RemoveDmacHandler		0x13
#define __NR__EnableIntc		0x14
#define __NR__DisableIntc		0x15
#define __NR__EnableDmac		0x16
#define __NR__DisableDmac		0x17
#define __NR__SetAlarm			0x18
#define __NR__ReleaseAlarm		0x19
#define __NR_SetAlarm			0xfc
#define __NR_ReleaseAlarm		0xfe
#define __NR__iEnableIntc		(-0x1a)
#define __NR__iDisableIntc		(-0x1b)
#define __NR__iEnableDmac		(-0x1c)
#define __NR__iDisableDmac		(-0x1d)
#define __NR__iSetAlarm			(-0x1e)
#define __NR__iReleaseAlarm		(-0x1f)
#define __NR_iSetAlarm			(-0xfd)
#define __NR_iReleaseAlarm		(-0xff)
#define __NR_CreateThread		0x20
#define __NR_DeleteThread		0x21
#define __NR_StartThread		0x22
#define __NR_ExitThread			0x23
#define __NR_ExitDeleteThread		0x24
#define __NR_TerminateThread		0x25
#define __NR_iTerminateThread		(-0x26)
#define __NR_DisableDispatchThread	0x27
#define __NR_EnableDispatchThread	0x28
#define __NR_ChangeThreadPriority	0x29
#define __NR_iChangeThreadPriority	(-0x2a)
#define __NR_RotateThreadReadyQueue	0x2b
#define __NR__iRotateThreadReadyQueue	(-0x2c)
#define __NR_ReleaseWaitThread		0x2d
#define __NR_iReleaseWaitThread		(-0x2e)
#define __NR_GetThreadId		0x2f
#define __NR__iGetThreadId		(-0x2f)	//Used for a hack by SCE to workaround iWakeupThread
#define __NR_ReferThreadStatus		0x30
#define __NR_iReferThreadStatus		(-0x31)
#define __NR_SleepThread		0x32
#define __NR_WakeupThread		0x33
#define __NR__iWakeupThread		(-0x34)
#define __NR_CancelWakeupThread		0x35
#define __NR_iCancelWakeupThread	(-0x36)
#define __NR_SuspendThread		0x37
#define __NR__iSuspendThread		(-0x38)
#define __NR_ResumeThread		0x39
#define __NR_iResumeThread		(-0x3a)
#define __NR_RFU059			0x3b
#define __NR_RFU060			0x3c
#define __NR_SetupThread		__NR_RFU060
#define __NR_RFU061			0x3d
#define __NR_SetupHeap			__NR_RFU061
#define __NR_EndOfHeap			0x3e
#define __NR_CreateSema			0x40
#define __NR_DeleteSema			0x41
#define __NR_SignalSema			0x42
#define __NR_iSignalSema		(-0x43)
#define __NR_WaitSema			0x44
#define __NR_PollSema			0x45
#define __NR_iPollSema			(-0x46)
#define __NR_ReferSemaStatus		0x47
#define __NR_iReferSemaStatus		(-0x48)
#define __NR_iDeleteSema		(-0x49)
#define __NR_SetOsdConfigParam		0x4a
#define __NR_GetOsdConfigParam		0x4b
#define __NR_GetGsHParam		0x4c
#define __NR_GetGsVParam		0x4d
#define __NR_SetGsHParam		0x4e
#define __NR_SetGsVParam		0x4f
#define __NR_CreateEventFlag		0x50
#define __NR_DeleteEventFlag		0x51
#define __NR_SetEventFlag		0x52
#define __NR_iSetEventFlag		0x53
#define __NR_PutTLBEntry		0x55
#define __NR_iPutTLBEntry		(-0x55)
#define __NR__SetTLBEntry		0x56
#define __NR_iSetTLBEntry		(-0x56)
#define __NR_GetTLBEntry		0x57
#define __NR_iGetTLBEntry		(-0x57)
#define __NR_ProbeTLBEntry		0x58
#define __NR_iProbeTLBEntry		(-0x58)
#define __NR_ExpandScratchPad		0x59
#define __NR_EnableIntcHandler		0x5C
#define __NR_iEnableIntcHandler		(-0x5C)
#define __NR_DisableIntcHandler		0x5D
#define __NR_iDisableIntcHandler	(-0x5D)
#define __NR_EnableDmacHandler		0x5E
#define __NR_iEnableDmacHandler		(-0x5E)
#define __NR_DisableDmacHandler		0x5F
#define __NR_iDisableDmacHandler	(-0x5F)
#define __NR_KSeg0			0x60
#define __NR_EnableCache		0x61
#define __NR_DisableCache		0x62
#define __NR_GetCop0			0x63
#define __NR_FlushCache			0x64
#define __NR_CpuConfig			0x66
#define __NR_iGetCop0			(-0x67)
#define __NR_iFlushCache		(-0x68)
#define __NR_RFU105			0x69
#define __NR_iCpuConfig			(-0x6a)
#define __NR_SifStopDma			0x6b
#define __NR_SetCPUTimerHandler		0x6c
#define __NR_SetCPUTimer		0x6d
#define __NR_SetOsdConfigParam2		0x6e
#define __NR_GetOsdConfigParam2		0x6f
#define __NR_GsGetIMR			0x70
#define __NR_iGsGetIMR			(-0x70)
#define __NR_GsPutIMR			0x71
#define __NR_iGsPutIMR			(-0x71)
#define __NR_SetPgifHandler		0x72
#define __NR_SetVSyncFlag		0x73
#define __NR_SetSyscall			0x74
#define __NR__print			0x75
#define __NR_SifDmaStat			0x76
#define __NR_iSifDmaStat		(-0x76)
#define __NR_SifSetDma			0x77
#define __NR_iSifSetDma			(-0x77)
#define __NR_SifSetDChain		0x78
#define __NR_iSifSetDChain		(-0x78)
#define __NR_SifSetReg			0x79
#define __NR_SifGetReg			0x7a
#define __NR__ExecOSD			0x7b
#define __NR_Deci2Call			0x7c
#define __NR_PSMode			0x7d
#define __NR_MachineType		0x7e
#define __NR_GetMemorySize		0x7f
#define __NR__GetGsDxDyOffset		0x80
#define __NR__InitTLB			0x82
/** @} */

#endif /* __SYSCALLNR_H__ */

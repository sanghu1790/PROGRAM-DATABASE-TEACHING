/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
int s  ;
int UNLOADED  ;
int NP  ;
int DC  ;
int SKIP1  ;
int SKIP2  ;
int MPR1  ;
int MPR3  ;
int IPC  ;
int pended  ;
int compFptr  ;
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
int myStatus  ;
int routine  ;
int SYMB  ;
int Executive  ;
int KernelMode  ;
int safety  ;
int kappa  =    0;

void _BLAST_init(void) 
{ 

  {
  klee_make_symbolic(& UNLOADED, sizeof(int ), "UNLOADED");
  klee_make_symbolic(& NP, sizeof(int ), "NP");
  klee_make_symbolic(& DC, sizeof(int ), "DC");
  klee_make_symbolic(& SKIP1, sizeof(int ), "SKIP1");
  klee_make_symbolic(& SKIP2, sizeof(int ), "SKIP2");
  klee_make_symbolic(& MPR1, sizeof(int ), "MPR1");
  klee_make_symbolic(& MPR3, sizeof(int ), "MPR3");
  klee_make_symbolic(& IPC, sizeof(int ), "IPC");
  s = UNLOADED;
  klee_make_symbolic(& pended, sizeof(int ), "pended");
  klee_make_symbolic(& compRegistered, sizeof(int ), "compRegistered");
  klee_make_symbolic(& lowerDriverReturn, sizeof(int ), "lowerDriverReturn");
  klee_make_symbolic(& setEventCalled, sizeof(int ), "setEventCalled");
  klee_make_symbolic(& customIrp, sizeof(int ), "customIrp");
  return;
}
}
void DiskPerfSyncFilterWithTarget(int DiskPerfSyncFilterWithTarget_FilterDevice , int DiskPerfSyncFilterWithTarget_TargetDevice ) 
{ 

  {
  return;
}
}
int DiskPerfStartDevice(int DiskPerfStartDevice_DeviceObject , int DiskPerfStartDevice_Irp ) ;
int DiskPerfRemoveDevice(int DiskPerfRemoveDevice_DeviceObject , int DiskPerfRemoveDevice_Irp ) ;
int DiskPerfSendToNextDriver(int DiskPerfSendToNextDriver_DeviceObject , int DiskPerfSendToNextDriver_Irp ) ;
int DiskPerfDispatchPnp(int DiskPerfDispatchPnp_DeviceObject , int DiskPerfDispatchPnp_Irp ) 
{ int DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfDispatchPnp_irpSp__MinorFunction ;
  int DiskPerfDispatchPnp_irpSp ;
  int DiskPerfDispatchPnp_status ;
  int DiskPerfDispatchPnp_tmp ;
  int retres8 ;
  int TRACER_returning ;

  {
  TRACER_returning = 0;
  DiskPerfDispatchPnp_irpSp = DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation;
  if (DiskPerfDispatchPnp_irpSp__MinorFunction >= 0) {
    if (DiskPerfDispatchPnp_irpSp__MinorFunction <= 0) {
      DiskPerfDispatchPnp_status = DiskPerfStartDevice(DiskPerfDispatchPnp_DeviceObject, DiskPerfDispatchPnp_Irp);
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    if (DiskPerfDispatchPnp_irpSp__MinorFunction >= 2) {
      if (DiskPerfDispatchPnp_irpSp__MinorFunction <= 2) {
        DiskPerfDispatchPnp_status = DiskPerfRemoveDevice(DiskPerfDispatchPnp_DeviceObject, DiskPerfDispatchPnp_Irp);
      } else {
        DiskPerfDispatchPnp_tmp = DiskPerfSendToNextDriver(DiskPerfDispatchPnp_DeviceObject, DiskPerfDispatchPnp_Irp);
        retres8 = DiskPerfDispatchPnp_tmp;
        TRACER_returning = 1;
      }
    } else {
      DiskPerfDispatchPnp_tmp = DiskPerfSendToNextDriver(DiskPerfDispatchPnp_DeviceObject, DiskPerfDispatchPnp_Irp);
      retres8 = DiskPerfDispatchPnp_tmp;
      TRACER_returning = 1;
    }
  }
  if (TRACER_returning <= 0) {
    retres8 = DiskPerfDispatchPnp_status;
  }
  return (retres8);
}
}
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) ;
int DiskPerfIrpCompletion(int DiskPerfIrpCompletion_DeviceObject , int DiskPerfIrpCompletion_Irp , int DiskPerfIrpCompletion_Context ) 
{ int DiskPerfIrpCompletion_Event ;
  int retres5 ;

  {
  DiskPerfIrpCompletion_Event = DiskPerfIrpCompletion_Context;
  KeSetEvent(DiskPerfIrpCompletion_Event, 0, 0);
  retres5 = -1073741802;
  return (retres5);
}
}
int DiskPerfForwardIrpSynchronous(int DiskPerfForwardIrpSynchronous_DeviceObject , int DiskPerfForwardIrpSynchronous_Irp ) ;
int DiskPerfRegisterDevice(int DiskPerfRegisterDevice_DeviceObject ) ;
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int DiskPerfStartDevice(int DiskPerfStartDevice_DeviceObject , int DiskPerfStartDevice_Irp ) 
{ int DiskPerfStartDevice_DeviceObject__DeviceExtension ;
  int DiskPerfStartDevice_deviceExtension__TargetDeviceObject ;
  int DiskPerfStartDevice_Irp__IoStatus__Status ;
  int DiskPerfStartDevice_deviceExtension ;
  int DiskPerfStartDevice_status ;

  {
  DiskPerfStartDevice_deviceExtension = DiskPerfStartDevice_DeviceObject__DeviceExtension;
  DiskPerfStartDevice_status = DiskPerfForwardIrpSynchronous(DiskPerfStartDevice_DeviceObject, DiskPerfStartDevice_Irp);
  DiskPerfSyncFilterWithTarget(DiskPerfStartDevice_DeviceObject, DiskPerfStartDevice_deviceExtension__TargetDeviceObject);
  DiskPerfRegisterDevice(DiskPerfStartDevice_DeviceObject);
  DiskPerfStartDevice_Irp__IoStatus__Status = DiskPerfStartDevice_status;
  myStatus = DiskPerfStartDevice_status;
  IofCompleteRequest(DiskPerfStartDevice_Irp, 0);
  return (DiskPerfStartDevice_status);
}
}
int DiskPerfRemoveDevice(int DiskPerfRemoveDevice_DeviceObject , int DiskPerfRemoveDevice_Irp ) 
{ int DiskPerfRemoveDevice_DeviceObject__DeviceExtension ;
  int DiskPerfRemoveDevice_deviceExtension__WmilibContext ;
  int DiskPerfRemoveDevice_Irp__IoStatus__Status ;
  int DiskPerfRemoveDevice_status ;
  int DiskPerfRemoveDevice_deviceExtension ;
  int DiskPerfRemoveDevice_wmilibContext ;

  {
  DiskPerfRemoveDevice_deviceExtension = DiskPerfRemoveDevice_DeviceObject__DeviceExtension;
  DiskPerfRemoveDevice_wmilibContext = DiskPerfRemoveDevice_deviceExtension__WmilibContext;
  DiskPerfRemoveDevice_status = DiskPerfForwardIrpSynchronous(DiskPerfRemoveDevice_DeviceObject, DiskPerfRemoveDevice_Irp);
  DiskPerfRemoveDevice_Irp__IoStatus__Status = DiskPerfRemoveDevice_status;
  myStatus = DiskPerfRemoveDevice_status;
  IofCompleteRequest(DiskPerfRemoveDevice_Irp, 0);
  return (DiskPerfRemoveDevice_status);
}
}
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int DiskPerfSendToNextDriver(int DiskPerfSendToNextDriver_DeviceObject , int DiskPerfSendToNextDriver_Irp ) 
{ int DiskPerfSendToNextDriver_Irp__CurrentLocation ;
  int DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfSendToNextDriver_DeviceObject__DeviceExtension ;
  int DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject ;
  int DiskPerfSendToNextDriver_deviceExtension ;
  int DiskPerfSendToNextDriver_tmp ;

  {
  safety = safety + (s - NP);
  s = SKIP1;
  DiskPerfSendToNextDriver_Irp__CurrentLocation = DiskPerfSendToNextDriver_Irp__CurrentLocation + 1;
  DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
  DiskPerfSendToNextDriver_deviceExtension = DiskPerfSendToNextDriver_DeviceObject__DeviceExtension;
  DiskPerfSendToNextDriver_tmp = IofCallDriver(DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject, DiskPerfSendToNextDriver_Irp);
  return (DiskPerfSendToNextDriver_tmp);
}
}
int PoCallDriver(int PoCallDriver_DeviceObject , int PoCallDriver_Irp ) ;
int DiskPerfDispatchPower(int DiskPerfDispatchPower_DeviceObject , int DiskPerfDispatchPower_Irp ) 
{ int DiskPerfDispatchPower_Irp__CurrentLocation ;
  int DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfDispatchPower_DeviceObject__DeviceExtension ;
  int DiskPerfDispatchPower_deviceExtension__TargetDeviceObject ;
  int DiskPerfDispatchPower_deviceExtension ;
  int DiskPerfDispatchPower_tmp ;

  {
  safety = safety + (s - NP);
  s = SKIP1;
  DiskPerfDispatchPower_Irp__CurrentLocation = DiskPerfDispatchPower_Irp__CurrentLocation + 1;
  DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation + 1;
  DiskPerfDispatchPower_deviceExtension = DiskPerfDispatchPower_DeviceObject__DeviceExtension;
  DiskPerfDispatchPower_tmp = PoCallDriver(DiskPerfDispatchPower_deviceExtension__TargetDeviceObject, DiskPerfDispatchPower_Irp);
  return (DiskPerfDispatchPower_tmp);
}
}
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
int DiskPerfForwardIrpSynchronous(int DiskPerfForwardIrpSynchronous_DeviceObject , int DiskPerfForwardIrpSynchronous_Irp ) 
{ int DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension ;
  int DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
  int DiskPerfForwardIrpSynchronous_deviceExtension ;
  int DiskPerfForwardIrpSynchronous_event ;
  int DiskPerfForwardIrpSynchronous_status ;
  int DiskPerfForwardIrpSynchronous_nextIrpSp__Control ;
  int DiskPerfForwardIrpSynchronous_irpSp ;
  int DiskPerfForwardIrpSynchronous_nextIrpSp ;
  int DiskPerfForwardIrpSynchronous_irpSp__Context ;
  int DiskPerfForwardIrpSynchronous_irpSp__Control ;
  int DiskPerfForwardIrpSynchronous_irpSp___0 ;
  int DiskPerfForwardIrpSynchronous_CIL___Tmp15 ;

  {
  DiskPerfForwardIrpSynchronous_deviceExtension = DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension;
  DiskPerfForwardIrpSynchronous_irpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation;
  DiskPerfForwardIrpSynchronous_nextIrpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
  DiskPerfForwardIrpSynchronous_nextIrpSp__Control = 0;
  safety = safety + (s - NP);
  safety = safety + (compRegistered - 0);
  compRegistered = 1;
  routine = 0;
  DiskPerfForwardIrpSynchronous_irpSp___0 = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
  DiskPerfForwardIrpSynchronous_irpSp__Context = DiskPerfForwardIrpSynchronous_event;
  DiskPerfForwardIrpSynchronous_irpSp__Control = 224;
  DiskPerfForwardIrpSynchronous_status = IofCallDriver(DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject, DiskPerfForwardIrpSynchronous_Irp);
  DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
  if (DiskPerfForwardIrpSynchronous_CIL___Tmp15 >= 259) {
    if (DiskPerfForwardIrpSynchronous_CIL___Tmp15 <= 259) {
      KeWaitForSingleObject(DiskPerfForwardIrpSynchronous_event, Executive, KernelMode, 0, 0);
      DiskPerfForwardIrpSynchronous_status = myStatus;
    }
  }
  return (DiskPerfForwardIrpSynchronous_status);
}
}
int DiskPerfCreate(int DiskPerfCreate_DeviceObject , int DiskPerfCreate_Irp ) 
{ int retres3 ;

  {
  myStatus = 0;
  IofCompleteRequest(DiskPerfCreate_Irp, 0);
  retres3 = 0;
  return (retres3);
}
}
int DiskPerfDeviceControl(int DiskPerfDeviceControl_DeviceObject , int DiskPerfDeviceControl_Irp ) 
{ int DiskPerfDeviceControl_Irp__CurrentLocation ;
  int DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfDeviceControl_DeviceObject__DeviceExtension ;
  int DiskPerfDeviceControl_deviceExtension__TargetDeviceObject ;
  int DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
  int DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
  int DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE ;
  int DiskPerfDeviceControl_Irp__IoStatus__Information ;
  int DiskPerfDeviceControl_deviceExtension__DiskCounters ;
  int DiskPerfDeviceControl_Irp__AssociatedIrp__SystemBuffer ;
  int DiskPerfDeviceControl_totalCounters__QueueDepth ;
  int DiskPerfDeviceControl_deviceExtension__QueueDepth ;
  int DiskPerfDeviceControl_Irp__IoStatus__Status ;
  int DiskPerfDeviceControl_deviceExtension ;
  int DiskPerfDeviceControl_currentIrpStack ;
  int DiskPerfDeviceControl_status ;
  int DiskPerfDeviceControl_i ;
  int DiskPerfDeviceControl_totalCounters ;
  int DiskPerfDeviceControl_diskCounters ;
  int DiskPerfDeviceControl_tmp ;
  int DiskPerfDeviceControl_CIL___Tmp24 ;
  int DiskPerfDeviceControl_CIL___Tmp25 ;
  int DiskPerfDeviceControl_CIL___Tmp26 ;
  int retres27 ;
  int TRACER_returning ;

  {
  TRACER_returning = 0;
  DiskPerfDeviceControl_deviceExtension = DiskPerfDeviceControl_DeviceObject__DeviceExtension;
  DiskPerfDeviceControl_currentIrpStack = DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation;
  DiskPerfDeviceControl_CIL___Tmp24 = 32;
  DiskPerfDeviceControl_CIL___Tmp25 = 458752;
  DiskPerfDeviceControl_CIL___Tmp26 = 458784;
  if (DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= DiskPerfDeviceControl_CIL___Tmp26) {
    if (DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= DiskPerfDeviceControl_CIL___Tmp26) {
      if (DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE) {
        DiskPerfDeviceControl_status = -1073741789;
        DiskPerfDeviceControl_Irp__IoStatus__Information = 0;
      } else {
        DiskPerfDeviceControl_diskCounters = DiskPerfDeviceControl_deviceExtension__DiskCounters;
        if (DiskPerfDeviceControl_diskCounters >= 0) {
          if (DiskPerfDeviceControl_diskCounters <= 0) {
            DiskPerfDeviceControl_Irp__IoStatus__Status = -1073741823;
            myStatus = -1073741823;
            IofCompleteRequest(DiskPerfDeviceControl_Irp, 0);
            retres27 = -1073741823;
            TRACER_returning = 1;
          } else {
            DiskPerfDeviceControl_totalCounters = DiskPerfDeviceControl_Irp__AssociatedIrp__SystemBuffer;
            DiskPerfDeviceControl_i = 0;
            DiskPerfDeviceControl_totalCounters__QueueDepth = DiskPerfDeviceControl_deviceExtension__QueueDepth;
            DiskPerfDeviceControl_status = 0;
            DiskPerfDeviceControl_Irp__IoStatus__Information = DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE;
          }
        } else {
          DiskPerfDeviceControl_totalCounters = DiskPerfDeviceControl_Irp__AssociatedIrp__SystemBuffer;
          DiskPerfDeviceControl_i = 0;
          DiskPerfDeviceControl_totalCounters__QueueDepth = DiskPerfDeviceControl_deviceExtension__QueueDepth;
          DiskPerfDeviceControl_status = 0;
          DiskPerfDeviceControl_Irp__IoStatus__Information = DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE;
        }
      }
      if (TRACER_returning <= 0) {
        DiskPerfDeviceControl_Irp__IoStatus__Status = DiskPerfDeviceControl_status;
        myStatus = DiskPerfDeviceControl_status;
        IofCompleteRequest(DiskPerfDeviceControl_Irp, 0);
        retres27 = DiskPerfDeviceControl_status;
      }
    } else {
      DiskPerfDeviceControl_Irp__CurrentLocation = DiskPerfDeviceControl_Irp__CurrentLocation + 1;
      DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
      DiskPerfDeviceControl_tmp = IofCallDriver(DiskPerfDeviceControl_deviceExtension__TargetDeviceObject, DiskPerfDeviceControl_Irp);
      retres27 = DiskPerfDeviceControl_tmp;
    }
  } else {
    DiskPerfDeviceControl_Irp__CurrentLocation = DiskPerfDeviceControl_Irp__CurrentLocation + 1;
    DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
    DiskPerfDeviceControl_tmp = IofCallDriver(DiskPerfDeviceControl_deviceExtension__TargetDeviceObject, DiskPerfDeviceControl_Irp);
    retres27 = DiskPerfDeviceControl_tmp;
  }
  return (retres27);
}
}
int DiskPerfShutdownFlush(int DiskPerfShutdownFlush_DeviceObject , int DiskPerfShutdownFlush_Irp ) 
{ int DiskPerfShutdownFlush_DeviceObject__DeviceExtension ;
  int DiskPerfShutdownFlush_Irp__CurrentLocation ;
  int DiskPerfShutdownFlush_Irp__Tail__Overlay__CurrentStackLocation ;
  int DiskPerfShutdownFlush_deviceExtension__TargetDeviceObject ;
  int DiskPerfShutdownFlush_deviceExtension ;
  int DiskPerfShutdownFlush_tmp ;

  {
  DiskPerfShutdownFlush_deviceExtension = DiskPerfShutdownFlush_DeviceObject__DeviceExtension;
  DiskPerfShutdownFlush_Irp__CurrentLocation = DiskPerfShutdownFlush_Irp__CurrentLocation + 1;
  DiskPerfShutdownFlush_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfShutdownFlush_Irp__Tail__Overlay__CurrentStackLocation + 1;
  DiskPerfShutdownFlush_tmp = IofCallDriver(DiskPerfShutdownFlush_deviceExtension__TargetDeviceObject, DiskPerfShutdownFlush_Irp);
  return (DiskPerfShutdownFlush_tmp);
}
}
int IoBuildDeviceIoControlRequest(int IoBuildDeviceIoControlRequest_IoControlCode , int IoBuildDeviceIoControlRequest_DeviceObject , int IoBuildDeviceIoControlRequest_InputBuffer , int IoBuildDeviceIoControlRequest_InputBufferLength , int IoBuildDeviceIoControlRequest_OutputBuffer , int IoBuildDeviceIoControlRequest_OutputBufferLength , int IoBuildDeviceIoControlRequest_InternalDeviceIoControl , int IoBuildDeviceIoControlRequest_Event , int IoBuildDeviceIoControlRequest_IoStatusBlock ) ;
int DiskPerfRegisterDevice(int DiskPerfRegisterDevice_DeviceObject ) 
{ int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
  int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
  int DiskPerfRegisterDevice_sizeof__number ;
  int DiskPerfRegisterDevice_ioStatus__Status ;
  int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
  int DiskPerfRegisterDevice_status ;
  int DiskPerfRegisterDevice_ioStatus ;
  int DiskPerfRegisterDevice_event ;
  int DiskPerfRegisterDevice_deviceExtension ;
  int DiskPerfRegisterDevice_irp ;
  int DiskPerfRegisterDevice_number ;
  int DiskPerfRegisterDevice_registrationFlag ;
  int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
  int DiskPerfRegisterDevice_output__NameLength ;
  int DiskPerfRegisterDevice_outputSize ;
  int DiskPerfRegisterDevice_output ;
  int DiskPerfRegisterDevice_volumeNumber ;
  int DiskPerfRegisterDevice_CIL___Tmp20 ;
  int DiskPerfRegisterDevice_CIL___Tmp21 ;
  int DiskPerfRegisterDevice_CIL___Tmp22 ;
  int DiskPerfRegisterDevice_CIL___Tmp23 ;
  int DiskPerfRegisterDevice_CIL___Tmp24 ;
  int DiskPerfRegisterDevice_CIL___Tmp25 ;
  int DiskPerfRegisterDevice_CIL___Tmp26 ;
  int DiskPerfRegisterDevice_CIL___Tmp27 ;
  int DiskPerfRegisterDevice_CIL___Tmp28 ;
  int DiskPerfRegisterDevice_CIL___Tmp29 ;
  int DiskPerfRegisterDevice_CIL___Tmp30 ;
  int DiskPerfRegisterDevice_CIL___Tmp31 ;
  int DiskPerfRegisterDevice_CIL___Tmp32 ;
  int DiskPerfRegisterDevice_CIL___Tmp34 ;
  int DiskPerfRegisterDevice_CIL___Tmp35 ;
  int DiskPerfRegisterDevice_CIL___Tmp36 ;
  int DiskPerfRegisterDevice_CIL___Tmp37 ;
  int retres37 ;
  int TRACER_returning ;

  {
  TRACER_returning = 0;
  DiskPerfRegisterDevice_registrationFlag = 0;
  DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
  DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
  DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
  DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
  DiskPerfRegisterDevice_irp = IoBuildDeviceIoControlRequest(DiskPerfRegisterDevice_CIL___Tmp22, DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, 0, 0, DiskPerfRegisterDevice_number, DiskPerfRegisterDevice_sizeof__number, 0, DiskPerfRegisterDevice_event, DiskPerfRegisterDevice_ioStatus);
  if (DiskPerfRegisterDevice_irp >= 0) {
    if (DiskPerfRegisterDevice_irp <= 0) {
      retres37 = -1073741670;
    } else {
      goto _L___4;
    }
  } else {
    _L___4: /* CIL Label */ 
    DiskPerfRegisterDevice_status = IofCallDriver(DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, DiskPerfRegisterDevice_irp);
    DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
    if (DiskPerfRegisterDevice_CIL___Tmp23 >= 259) {
      if (DiskPerfRegisterDevice_CIL___Tmp23 <= 259) {
        KeWaitForSingleObject(DiskPerfRegisterDevice_event, Executive, KernelMode, 0, 0);
        DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
      }
    }
    if (DiskPerfRegisterDevice_status < 0) {
      DiskPerfRegisterDevice_outputSize = DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME;
      if (DiskPerfRegisterDevice_output >= 0) {
        if (DiskPerfRegisterDevice_output <= 0) {
          retres37 = -1073741670;
          TRACER_returning = 1;
        } else {
          goto _L___3;
        }
      } else {
        _L___3: /* CIL Label */ 
        DiskPerfRegisterDevice_CIL___Tmp24 = 8;
        DiskPerfRegisterDevice_CIL___Tmp25 = 5046272;
        DiskPerfRegisterDevice_CIL___Tmp26 = 5046280;
        DiskPerfRegisterDevice_irp = IoBuildDeviceIoControlRequest(DiskPerfRegisterDevice_CIL___Tmp26, DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, 0, 0, DiskPerfRegisterDevice_output, DiskPerfRegisterDevice_outputSize, 0, DiskPerfRegisterDevice_event, DiskPerfRegisterDevice_ioStatus);
        if (DiskPerfRegisterDevice_irp >= 0) {
          if (DiskPerfRegisterDevice_irp <= 0) {
            retres37 = -1073741670;
            TRACER_returning = 1;
          } else {
            goto _L___2;
          }
        } else {
          _L___2: /* CIL Label */ 
          DiskPerfRegisterDevice_status = IofCallDriver(DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, DiskPerfRegisterDevice_irp);
          DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
          if (DiskPerfRegisterDevice_CIL___Tmp27 >= 259) {
            if (DiskPerfRegisterDevice_CIL___Tmp27 <= 259) {
              KeWaitForSingleObject(DiskPerfRegisterDevice_event, Executive, KernelMode, 0, 0);
              DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
            }
          }
          DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
          if (DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643) {
            if (DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
              DiskPerfRegisterDevice_outputSize = DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME + DiskPerfRegisterDevice_output__NameLength;
              if (DiskPerfRegisterDevice_output >= 0) {
                if (DiskPerfRegisterDevice_output <= 0) {
                  retres37 = -1073741670;
                  TRACER_returning = 1;
                } else {
                  goto _L___0;
                }
              } else {
                _L___0: /* CIL Label */ 
                DiskPerfRegisterDevice_CIL___Tmp29 = 8;
                DiskPerfRegisterDevice_CIL___Tmp30 = 5046272;
                DiskPerfRegisterDevice_CIL___Tmp31 = 5046280;
                DiskPerfRegisterDevice_irp = IoBuildDeviceIoControlRequest(DiskPerfRegisterDevice_CIL___Tmp31, DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, 0, 0, DiskPerfRegisterDevice_output, DiskPerfRegisterDevice_outputSize, 0, DiskPerfRegisterDevice_event, DiskPerfRegisterDevice_ioStatus);
                if (DiskPerfRegisterDevice_irp >= 0) {
                  if (DiskPerfRegisterDevice_irp <= 0) {
                    retres37 = -1073741670;
                    TRACER_returning = 1;
                  } else {
                    goto _L;
                  }
                } else {
                  _L: /* CIL Label */ 
                  DiskPerfRegisterDevice_status = IofCallDriver(DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, DiskPerfRegisterDevice_irp);
                  DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
                  if (DiskPerfRegisterDevice_CIL___Tmp32 >= 259) {
                    if (DiskPerfRegisterDevice_CIL___Tmp32 <= 259) {
                      KeWaitForSingleObject(DiskPerfRegisterDevice_event, Executive, KernelMode, 0, 0);
                      DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
                    }
                  }
                }
              }
            }
          }
          if (TRACER_returning <= 0) {
            if (DiskPerfRegisterDevice_status < 0) {
              retres37 = DiskPerfRegisterDevice_status;
              TRACER_returning = 1;
            } else {
              DiskPerfRegisterDevice_CIL___Tmp34 = 28;
              DiskPerfRegisterDevice_CIL___Tmp35 = 5636096;
              DiskPerfRegisterDevice_CIL___Tmp36 = 5636124;
              DiskPerfRegisterDevice_irp = IoBuildDeviceIoControlRequest(DiskPerfRegisterDevice_CIL___Tmp36, DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, 0, 0, DiskPerfRegisterDevice_volumeNumber, DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER, 0, DiskPerfRegisterDevice_event, DiskPerfRegisterDevice_ioStatus);
              if (DiskPerfRegisterDevice_irp >= 0) {
                if (DiskPerfRegisterDevice_irp <= 0) {
                  retres37 = -1073741670;
                  TRACER_returning = 1;
                } else {
                  goto _L___1;
                }
              } else {
                _L___1: /* CIL Label */ 
                DiskPerfRegisterDevice_status = IofCallDriver(DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject, DiskPerfRegisterDevice_irp);
                DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
                if (DiskPerfRegisterDevice_CIL___Tmp37 >= 259) {
                  if (DiskPerfRegisterDevice_CIL___Tmp37 <= 259) {
                    KeWaitForSingleObject(DiskPerfRegisterDevice_event, Executive, KernelMode, 0, 0);
                    DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (TRACER_returning <= 0) {
      retres37 = DiskPerfRegisterDevice_status;
    }
  }
  return (retres37);
}
}
void stub_driver_init(void) 
{ 

  {
  s = NP;
  customIrp = 0;
  setEventCalled = customIrp;
  lowerDriverReturn = setEventCalled;
  compRegistered = lowerDriverReturn;
  compFptr = compRegistered;
  pended = compFptr;
  return;
}
}
extern int _SLICE() ;
void main(void) 
{ int main_status ;
  int main_irp ;
  int main_irp_choice ;
  int main_devobj ;
  int main_tmp_ndt_1 ;
  int main_tmp_ndt_2 ;
  int main_tmp_ndt_3 ;
  int main_tmp_ndt_4 ;
  int main_tmp_ndt_5 ;
  int TRACER_returning ;

  {
  TRACER_returning = 0;
  safety = 0;
  routine = 0;
  SYMB = main_irp;
  _BLAST_init();
  if (main_status >= 0) {
    myStatus = 0;
    if (main_irp_choice >= 0) {
      if (main_irp_choice <= 0) {
        myStatus = -1073741637;
      }
    }
    stub_driver_init();
    klee_make_symbolic(& main_tmp_ndt_1, sizeof(int ), "main_tmp_ndt_1");
    if (main_tmp_ndt_1 >= 0) {
      if (main_tmp_ndt_1 <= 0) {
        main_status = DiskPerfCreate(main_devobj, SYMB);
      } else {
        goto _L___2;
      }
    } else {
      _L___2: /* CIL Label */ 
      klee_make_symbolic(& main_tmp_ndt_2, sizeof(int ), "main_tmp_ndt_2");
      if (main_tmp_ndt_2 >= 2) {
        if (main_tmp_ndt_2 <= 2) {
          main_status = DiskPerfDeviceControl(main_devobj, SYMB);
        } else {
          goto _L___1;
        }
      } else {
        _L___1: /* CIL Label */ 
        klee_make_symbolic(& main_tmp_ndt_3, sizeof(int ), "main_tmp_ndt_3");
        if (main_tmp_ndt_3 >= 3) {
          if (main_tmp_ndt_3 <= 3) {
            main_status = DiskPerfDispatchPnp(main_devobj, SYMB);
          } else {
            goto _L___0;
          }
        } else {
          _L___0: /* CIL Label */ 
          klee_make_symbolic(& main_tmp_ndt_4, sizeof(int ), "main_tmp_ndt_4");
          if (main_tmp_ndt_4 >= 4) {
            if (main_tmp_ndt_4 <= 4) {
              main_status = DiskPerfDispatchPower(main_devobj, SYMB);
            } else {
              goto _L;
            }
          } else {
            _L: /* CIL Label */ 
            klee_make_symbolic(& main_tmp_ndt_5, sizeof(int ), "main_tmp_ndt_5");
            if (main_tmp_ndt_5 >= 12) {
              if (main_tmp_ndt_5 <= 12) {
                main_status = DiskPerfShutdownFlush(main_devobj, SYMB);
              } else {
                TRACER_returning = 1;
              }
            } else {
              TRACER_returning = 1;
            }
          }
        }
      }
    }
  }
  if (TRACER_returning <= 0) {
    if (s > UNLOADED) {
      goto _L___5;
    } else {
      if (s < UNLOADED) {
        _L___5: /* CIL Label */ 
        if (main_status > -1) {
          goto _L___4;
        } else {
          if (main_status < -1) {
            _L___4: /* CIL Label */ 
            if (s > SKIP2) {
              goto _L___3;
            } else {
              if (s < SKIP2) {
                _L___3: /* CIL Label */ 
                if (s > IPC) {
                  safety = safety + (s - DC);
                } else {
                  if (s < IPC) {
                    safety = safety + (s - DC);
                  }
                }
                if (s > DC) {
                  safety = safety + (main_status - lowerDriverReturn);
                } else {
                  if (s < DC) {
                    safety = safety + (main_status - lowerDriverReturn);
                  }
                }
              } else {
                safety = safety + (main_status - lowerDriverReturn);
              }
            }
          }
        }
      }
    }
  }
  if (safety != 0) {
    goto ERROR;
  }
  return;
  ERROR: 
  //_SLICE(kappa);
  return;
}
}
int IoBuildDeviceIoControlRequest(int IoBuildDeviceIoControlRequest_IoControlCode , int IoBuildDeviceIoControlRequest_DeviceObject , int IoBuildDeviceIoControlRequest_InputBuffer , int IoBuildDeviceIoControlRequest_InputBufferLength , int IoBuildDeviceIoControlRequest_OutputBuffer , int IoBuildDeviceIoControlRequest_OutputBufferLength , int IoBuildDeviceIoControlRequest_InternalDeviceIoControl , int IoBuildDeviceIoControlRequest_Event , int IoBuildDeviceIoControlRequest_IoStatusBlock ) 
{ int IoBuildDeviceIoControlRequest_malloc_ret ;
  int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
  int retres12 ;

  {
  customIrp = 1;
  klee_make_symbolic(& IoBuildDeviceIoControlRequest_tmp_ndt_7, sizeof(int ), "IoBuildDeviceIoControlRequest_tmp_ndt_7");
  if (IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0) {
    if (IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
      retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
    } else {
      retres12 = 0;
    }
  } else {
    retres12 = 0;
  }
  return (retres12);
}
}
void stubMoreProcessingRequired(void) 
{ 

  {
  safety = safety + (s - NP);
  s = MPR1;
  return;
}
}
extern int DiskPerfIoCompletion() ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) 
{ int IofCallDriver_returnVal2 ;
  int IofCallDriver_compRetStatus ;
  int IofCallDriver_lcontext ;
  int IofCallDriver_CIL___Tmp7 ;
  int IofCallDriver_tmp_ndt_8 ;
  int IofCallDriver_tmp_ndt_9 ;

  {
  if (compRegistered > 0) {
    goto _L;
  } else {
    if (compRegistered < 0) {
      _L: /* CIL Label */ 
      if (routine >= 0) {
        if (routine <= 0) {
          IofCallDriver_compRetStatus = DiskPerfIrpCompletion(IofCallDriver_DeviceObject, IofCallDriver_Irp, IofCallDriver_lcontext);
        } else {
          IofCallDriver_compRetStatus = DiskPerfIoCompletion(IofCallDriver_DeviceObject, IofCallDriver_Irp, IofCallDriver_lcontext);
        }
      } else {
        IofCallDriver_compRetStatus = DiskPerfIoCompletion(IofCallDriver_DeviceObject, IofCallDriver_Irp, IofCallDriver_lcontext);
      }
      IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
      if (IofCallDriver_CIL___Tmp7 >= -1073741802) {
        if (IofCallDriver_CIL___Tmp7 <= -1073741802) {
          stubMoreProcessingRequired();
        }
      }
    }
  }
  klee_make_symbolic(& IofCallDriver_tmp_ndt_8, sizeof(int ), "IofCallDriver_tmp_ndt_8");
  if (IofCallDriver_tmp_ndt_8 >= 0) {
    if (IofCallDriver_tmp_ndt_8 <= 0) {
      IofCallDriver_returnVal2 = 0;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    klee_make_symbolic(& IofCallDriver_tmp_ndt_9, sizeof(int ), "IofCallDriver_tmp_ndt_9");
    if (IofCallDriver_tmp_ndt_9 >= 1) {
      if (IofCallDriver_tmp_ndt_9 <= 1) {
        IofCallDriver_returnVal2 = -1073741823;
      } else {
        IofCallDriver_returnVal2 = 259;
      }
    } else {
      IofCallDriver_returnVal2 = 259;
    }
  }
  if (s >= NP) {
    if (s <= NP) {
      s = IPC;
      lowerDriverReturn = IofCallDriver_returnVal2;
    } else {
      goto _L___1;
    }
  } else {
    _L___1: /* CIL Label */ 
    if (s >= MPR1) {
      if (s <= MPR1) {
        if (IofCallDriver_returnVal2 >= 259) {
          if (IofCallDriver_returnVal2 <= 259) {
            s = MPR3;
            lowerDriverReturn = IofCallDriver_returnVal2;
          } else {
            s = NP;
            lowerDriverReturn = IofCallDriver_returnVal2;
          }
        } else {
          s = NP;
          lowerDriverReturn = IofCallDriver_returnVal2;
        }
      } else {
        safety = safety + (s - SKIP1);
        s = SKIP2;
        lowerDriverReturn = IofCallDriver_returnVal2;
      }
    } else {
      safety = safety + (s - SKIP1);
      s = SKIP2;
      lowerDriverReturn = IofCallDriver_returnVal2;
    }
  }
  return (IofCallDriver_returnVal2);
}
}
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) 
{ 

  {
  safety = safety + (s - NP);
  s = DC;
  return;
}
}
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) 
{ int KeSetEvent_l ;

  {
  setEventCalled = 1;
  return (KeSetEvent_l);
}
}
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) 
{ int KeWaitForSingleObject_tmp_ndt_10 ;
  int retres7 ;

  {
  if (s >= MPR3) {
    if (s <= MPR3) {
      if (setEventCalled >= 1) {
        if (setEventCalled <= 1) {
          s = NP;
          setEventCalled = 0;
        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        if (customIrp >= 1) {
          if (customIrp <= 1) {
            s = NP;
            customIrp = 0;
          }
        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: /* CIL Label */ 
    if (customIrp >= 1) {
      if (customIrp <= 1) {
        s = NP;
        customIrp = 0;
      }
    }
  }
  klee_make_symbolic(& KeWaitForSingleObject_tmp_ndt_10, sizeof(int ), "KeWaitForSingleObject_tmp_ndt_10");
  if (KeWaitForSingleObject_tmp_ndt_10 >= 0) {
    if (KeWaitForSingleObject_tmp_ndt_10 <= 0) {
      retres7 = 0;
    } else {
      retres7 = -1073741823;
    }
  } else {
    retres7 = -1073741823;
  }
  return (retres7);
}
}
int PoCallDriver(int PoCallDriver_DeviceObject , int PoCallDriver_Irp ) 
{ int PoCallDriver_compRetStatus ;
  int PoCallDriver_returnVal ;
  int PoCallDriver_lcontext ;
  int PoCallDriver_CIL___Tmp7 ;
  int PoCallDriver_CIL___Tmp8 ;
  int PoCallDriver_tmp_ndt_11 ;
  int PoCallDriver_tmp_ndt_12 ;

  {
  if (compRegistered > 0) {
    goto _L___0;
  } else {
    if (compRegistered < 0) {
      _L___0: /* CIL Label */ 
      if (routine >= 0) {
        if (routine <= 0) {
          PoCallDriver_compRetStatus = DiskPerfIrpCompletion(PoCallDriver_DeviceObject, PoCallDriver_Irp, PoCallDriver_lcontext);
        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        if (routine >= 1) {
          if (routine <= 1) {
            PoCallDriver_compRetStatus = DiskPerfIoCompletion(PoCallDriver_DeviceObject, PoCallDriver_Irp, PoCallDriver_lcontext);
          }
        }
      }
      PoCallDriver_CIL___Tmp7 = PoCallDriver_compRetStatus;
      if (PoCallDriver_CIL___Tmp7 >= -1073741802) {
        if (PoCallDriver_CIL___Tmp7 <= -1073741802) {
          stubMoreProcessingRequired();
        }
      }
    }
  }
  klee_make_symbolic(& PoCallDriver_tmp_ndt_11, sizeof(int ), "PoCallDriver_tmp_ndt_11");
  if (PoCallDriver_tmp_ndt_11 >= 0) {
    if (PoCallDriver_tmp_ndt_11 <= 0) {
      PoCallDriver_returnVal = 0;
    } else {
      goto _L___1;
    }
  } else {
    _L___1: /* CIL Label */ 
    klee_make_symbolic(& PoCallDriver_tmp_ndt_12, sizeof(int ), "PoCallDriver_tmp_ndt_12");
    if (PoCallDriver_tmp_ndt_12 >= 1) {
      if (PoCallDriver_tmp_ndt_12 <= 1) {
        PoCallDriver_returnVal = -1073741823;
      } else {
        PoCallDriver_returnVal = 259;
      }
    } else {
      PoCallDriver_returnVal = 259;
    }
  }
  if (s >= NP) {
    if (s <= NP) {
      s = IPC;
      lowerDriverReturn = PoCallDriver_returnVal;
    } else {
      goto _L___2;
    }
  } else {
    _L___2: /* CIL Label */ 
    if (s >= MPR1) {
      if (s <= MPR1) {
        PoCallDriver_CIL___Tmp8 = PoCallDriver_returnVal;
        if (PoCallDriver_CIL___Tmp8 >= 259) {
          if (PoCallDriver_CIL___Tmp8 <= 259) {
            s = MPR3;
            lowerDriverReturn = PoCallDriver_returnVal;
          } else {
            s = NP;
            lowerDriverReturn = PoCallDriver_returnVal;
          }
        } else {
          s = NP;
          lowerDriverReturn = PoCallDriver_returnVal;
        }
      } else {
        safety = safety + (s - SKIP1);
        s = SKIP2;
        lowerDriverReturn = PoCallDriver_returnVal;
      }
    } else {
      safety = safety + (s - SKIP1);
      s = SKIP2;
      lowerDriverReturn = PoCallDriver_returnVal;
    }
  }
  return (PoCallDriver_returnVal);
}
}

#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[5] = 
{
	{ 11882, 0,  0 } /*tableIndex: 0 */,
	{ 11885, 1,  2 } /*tableIndex: 1 */,
	{ 11889, 2,  3 } /*tableIndex: 2 */,
	{ 11882, 3,  6 } /*tableIndex: 3 */,
	{ 11887, 4,  8 } /*tableIndex: 4 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[5] = 
{
	"eventAttribute",
	"expressionValue",
	"spawnerState",
	"vfxEventAttribute",
	"evt",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[31] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.VFX.VFXEventAttribute::.ctor(System.IntPtr,System.Boolean,UnityEngine.VFX.VisualEffectAsset) */,
	{ 0, 0 } /* 0x06000002 System.IntPtr UnityEngine.VFX.VFXEventAttribute::Internal_Create() */,
	{ 0, 1 } /* 0x06000003 UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VFXEventAttribute::Internal_InstanciateVFXEventAttribute(UnityEngine.VFX.VisualEffectAsset) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.VFX.VFXEventAttribute::Internal_InitFromAsset(UnityEngine.VFX.VisualEffectAsset) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.VFX.VFXEventAttribute::Release() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.VFX.VFXEventAttribute::Finalize() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.VFX.VFXEventAttribute::Dispose() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.VFX.VFXEventAttribute::Internal_Destroy(System.IntPtr) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.VFX.VFXExpressionValues::.ctor() */,
	{ 1, 1 } /* 0x0600000A UnityEngine.VFX.VFXExpressionValues UnityEngine.VFX.VFXExpressionValues::CreateExpressionValuesWrapper(System.IntPtr) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.VFX.VFXManager::PrepareCamera(UnityEngine.Camera) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.VFX.VFXManager::ProcessCameraCommand(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer) */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnPlay(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnUpdate(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnStop(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.VFX.VFXSpawnerCallbacks::.ctor() */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.VFX.VFXSpawnerState::.ctor(System.IntPtr,System.Boolean) */,
	{ 2, 1 } /* 0x06000012 UnityEngine.VFX.VFXSpawnerState UnityEngine.VFX.VFXSpawnerState::CreateSpawnerStateWrapper() */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.VFX.VFXSpawnerState::SetWrapValue(System.IntPtr) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.VFX.VFXSpawnerState::Release() */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.VFX.VFXSpawnerState::Finalize() */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.VFX.VFXSpawnerState::Dispose() */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.VFX.VFXSpawnerState::Internal_Destroy(System.IntPtr) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.VFX.VisualEffectObject::.ctor() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.VFX.VisualEffectAsset::.ctor() */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.VFX.VisualEffectAsset::.cctor() */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.VFX.VFXOutputEventArgs::.ctor(System.Int32,UnityEngine.VFX.VFXEventAttribute) */,
	{ 0, 0 } /* 0x0600001C UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VisualEffect::get_visualEffectAsset() */,
	{ 3, 1 } /* 0x0600001D UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VisualEffect::CreateVFXEventAttribute() */,
	{ 0, 0 } /* 0x0600001E UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal(UnityEngine.VFX.VisualEffect) */,
	{ 4, 1 } /* 0x0600001F System.Void UnityEngine.VFX.VisualEffect::InvokeOutputEventReceived_Internal(UnityEngine.VFX.VisualEffect,System.Int32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_VFXModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_VFXModule[162] = 
{
	{ 22398, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 22398, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 22398, 1, 16, 16, 9, 86, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 22398, 1, 17, 17, 9, 10, 7, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 22398, 1, 18, 18, 13, 25, 8, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 22398, 1, 19, 19, 13, 29, 15, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 22398, 1, 20, 20, 13, 35, 22, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 22398, 1, 21, 21, 9, 10, 29, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 22398, 1, 16, 16, 9, 86, 1, kSequencePointKind_StepOut, 0, 8 } /* seqPointIndex: 8 */,
	{ 22400, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 22400, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 22400, 1, 39, 39, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 22400, 1, 40, 40, 13, 91, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 22400, 1, 41, 41, 13, 61, 14, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 22400, 1, 42, 42, 13, 35, 22, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 22400, 1, 43, 43, 9, 10, 26, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 22400, 1, 40, 40, 13, 91, 1, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 22400, 1, 40, 40, 13, 91, 8, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 22400, 1, 41, 41, 13, 61, 16, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 22402, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 22402, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 22402, 1, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 22402, 1, 52, 52, 13, 49, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 22402, 1, 52, 52, 0, 0, 29, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 22402, 1, 53, 53, 13, 14, 32, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 22402, 1, 54, 54, 17, 41, 33, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 22402, 1, 55, 55, 13, 14, 45, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 22402, 1, 56, 56, 13, 33, 46, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 22402, 1, 57, 57, 13, 31, 57, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 22402, 1, 58, 58, 9, 10, 64, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 22402, 1, 52, 52, 13, 49, 20, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 22402, 1, 54, 54, 17, 41, 39, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 22403, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 22403, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 22403, 1, 61, 61, 9, 10, 0, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 22403, 1, 61, 61, 9, 10, 1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 22403, 1, 62, 62, 13, 23, 2, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 22403, 1, 63, 63, 9, 10, 11, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 22403, 1, 63, 63, 9, 10, 19, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 22403, 1, 62, 62, 13, 23, 3, kSequencePointKind_StepOut, 0, 39 } /* seqPointIndex: 39 */,
	{ 22403, 1, 63, 63, 9, 10, 12, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 22404, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 22404, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 22404, 1, 66, 66, 9, 10, 0, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 22404, 1, 67, 67, 13, 23, 1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 22404, 1, 68, 68, 13, 39, 8, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 22404, 1, 69, 69, 9, 10, 15, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 22404, 1, 67, 67, 13, 23, 2, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 22404, 1, 68, 68, 13, 39, 9, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 22406, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 22406, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 22406, 2, 14, 14, 9, 38, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 22406, 2, 15, 15, 9, 10, 7, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 22406, 2, 16, 16, 9, 10, 8, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 22406, 2, 14, 14, 9, 38, 1, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 22407, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 22407, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 22407, 2, 20, 20, 9, 10, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 22407, 2, 21, 21, 13, 61, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 22407, 2, 22, 22, 13, 41, 7, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 22407, 2, 23, 23, 13, 36, 14, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 22407, 2, 24, 24, 9, 10, 18, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 22407, 2, 21, 21, 13, 61, 1, kSequencePointKind_StepOut, 0, 62 } /* seqPointIndex: 62 */,
	{ 22414, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 22414, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 22414, 3, 28, 28, 9, 57, 0, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 22414, 3, 29, 29, 9, 10, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 22414, 3, 30, 30, 13, 25, 8, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 22414, 3, 31, 31, 13, 29, 15, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 22414, 3, 32, 32, 9, 10, 22, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 22414, 3, 28, 28, 9, 57, 1, kSequencePointKind_StepOut, 0, 70 } /* seqPointIndex: 70 */,
	{ 22415, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 22415, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 22415, 3, 38, 38, 9, 10, 0, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 22415, 3, 39, 39, 13, 72, 1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 22415, 3, 40, 40, 13, 33, 13, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 22415, 3, 41, 41, 9, 10, 17, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 22415, 3, 39, 39, 13, 72, 7, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 22416, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 22416, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 22416, 3, 45, 45, 9, 10, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 22416, 3, 46, 46, 13, 25, 1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 22416, 3, 46, 46, 0, 0, 8, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 22416, 3, 47, 47, 13, 14, 11, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 22416, 3, 48, 48, 17, 107, 12, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 22416, 3, 50, 50, 13, 25, 23, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 22416, 3, 51, 51, 9, 10, 30, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 22416, 3, 48, 48, 17, 107, 17, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 22417, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 22417, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 22417, 3, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 22417, 3, 60, 60, 13, 49, 1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 22417, 3, 60, 60, 0, 0, 29, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 22417, 3, 61, 61, 13, 14, 32, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 22417, 3, 62, 62, 17, 41, 33, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 22417, 3, 63, 63, 13, 14, 45, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 22417, 3, 64, 64, 13, 33, 46, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 22417, 3, 65, 65, 9, 10, 57, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 22417, 3, 60, 60, 13, 49, 12, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 22417, 3, 62, 62, 17, 41, 39, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 22418, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 22418, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 22418, 3, 68, 68, 9, 10, 0, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 22418, 3, 68, 68, 9, 10, 1, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 22418, 3, 69, 69, 13, 23, 2, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 22418, 3, 70, 70, 9, 10, 11, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 22418, 3, 70, 70, 9, 10, 19, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 22418, 3, 69, 69, 13, 23, 3, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 22418, 3, 70, 70, 9, 10, 12, kSequencePointKind_StepOut, 0, 108 } /* seqPointIndex: 108 */,
	{ 22419, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 22419, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 22419, 3, 73, 73, 9, 10, 0, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 22419, 3, 74, 74, 13, 23, 1, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 22419, 3, 75, 75, 13, 39, 8, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 22419, 3, 76, 76, 9, 10, 15, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 22419, 3, 74, 74, 13, 23, 2, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 22419, 3, 75, 75, 13, 39, 9, kSequencePointKind_StepOut, 0, 116 } /* seqPointIndex: 116 */,
	{ 22423, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 22423, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 22423, 4, 36, 36, 9, 85, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 22423, 4, 37, 37, 9, 85, 15, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 22423, 4, 36, 36, 9, 85, 5, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 22423, 4, 37, 37, 9, 85, 20, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 22424, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 22424, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 22424, 4, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 22424, 4, 60, 60, 13, 34, 1, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 22424, 4, 61, 61, 13, 50, 8, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 22424, 4, 62, 62, 9, 10, 15, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 22426, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 22426, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 22426, 4, 95, 95, 9, 10, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 22426, 4, 96, 96, 13, 43, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 22426, 4, 96, 96, 0, 0, 14, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 22426, 4, 97, 97, 17, 29, 17, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 22426, 4, 98, 98, 13, 112, 21, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 22426, 4, 99, 99, 13, 38, 33, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 22426, 4, 100, 100, 9, 10, 37, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 22426, 4, 96, 96, 13, 43, 2, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 22426, 4, 96, 96, 13, 43, 8, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 22426, 4, 98, 98, 13, 112, 22, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 22426, 4, 98, 98, 13, 112, 27, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 22427, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 22427, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 22427, 4, 461, 461, 9, 10, 0, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 22427, 4, 463, 463, 13, 52, 1, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 22427, 4, 463, 463, 0, 0, 11, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 22427, 4, 464, 464, 17, 29, 14, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 22427, 4, 466, 466, 13, 55, 18, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 22427, 4, 466, 466, 0, 0, 28, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 22427, 4, 467, 467, 17, 82, 31, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 22427, 4, 468, 468, 13, 50, 43, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 22427, 4, 469, 469, 9, 10, 52, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 22427, 4, 467, 467, 17, 82, 33, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 22428, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 22428, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 22428, 4, 474, 474, 9, 10, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 22428, 4, 475, 475, 13, 90, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 22428, 4, 476, 476, 13, 52, 15, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 22428, 4, 477, 477, 9, 10, 28, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 22428, 4, 475, 475, 13, 90, 10, kSequencePointKind_StepOut, 0, 160 } /* seqPointIndex: 160 */,
	{ 22428, 4, 476, 476, 13, 52, 22, kSequencePointKind_StepOut, 0, 161 } /* seqPointIndex: 161 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_VFXModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_VFXModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/VFX/Public/ScriptBindings/VFXEventAttribute.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/VFX/Public/ScriptBindings/VFXExpressionValues.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //2 
{ "/Users/bokken/buildslave/unity/build/Modules/VFX/Public/ScriptBindings/VFXSpawnerState.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //3 
{ "/Users/bokken/buildslave/unity/build/Modules/VFX/Public/ScriptBindings/VisualEffect.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 3451, 1 },
	{ 3452, 2 },
	{ 3455, 3 },
	{ 3457, 4 },
	{ 3458, 4 },
	{ 3459, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 28 },
	{ 0, 65 },
	{ 0, 20 },
	{ 0, 19 },
	{ 0, 31 },
	{ 0, 58 },
	{ 0, 39 },
	{ 0, 54 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[31] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXEventAttribute::.ctor(System.IntPtr,System.Boolean,UnityEngine.VFX.VisualEffectAsset) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.VFX.VFXEventAttribute::Internal_Create() */,
	{ 28, 0, 1 } /* UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VFXEventAttribute::Internal_InstanciateVFXEventAttribute(UnityEngine.VFX.VisualEffectAsset) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXEventAttribute::Internal_InitFromAsset(UnityEngine.VFX.VisualEffectAsset) */,
	{ 65, 1, 1 } /* System.Void UnityEngine.VFX.VFXEventAttribute::Release() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXEventAttribute::Finalize() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXEventAttribute::Dispose() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXEventAttribute::Internal_Destroy(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXExpressionValues::.ctor() */,
	{ 20, 2, 1 } /* UnityEngine.VFX.VFXExpressionValues UnityEngine.VFX.VFXExpressionValues::CreateExpressionValuesWrapper(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXManager::PrepareCamera(UnityEngine.Camera) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXManager::ProcessCameraCommand(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnPlay(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnUpdate(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerCallbacks::OnStop(UnityEngine.VFX.VFXSpawnerState,UnityEngine.VFX.VFXExpressionValues,UnityEngine.VFX.VisualEffect) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerCallbacks::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerState::.ctor(System.IntPtr,System.Boolean) */,
	{ 19, 3, 1 } /* UnityEngine.VFX.VFXSpawnerState UnityEngine.VFX.VFXSpawnerState::CreateSpawnerStateWrapper() */,
	{ 31, 4, 1 } /* System.Void UnityEngine.VFX.VFXSpawnerState::SetWrapValue(System.IntPtr) */,
	{ 58, 5, 1 } /* System.Void UnityEngine.VFX.VFXSpawnerState::Release() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerState::Finalize() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerState::Dispose() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXSpawnerState::Internal_Destroy(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VisualEffectObject::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VisualEffectAsset::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VisualEffectAsset::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.VFX.VFXOutputEventArgs::.ctor(System.Int32,UnityEngine.VFX.VFXEventAttribute) */,
	{ 0, 0, 0 } /* UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VisualEffect::get_visualEffectAsset() */,
	{ 39, 6, 1 } /* UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VisualEffect::CreateVFXEventAttribute() */,
	{ 54, 7, 1 } /* UnityEngine.VFX.VFXEventAttribute UnityEngine.VFX.VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal(UnityEngine.VFX.VisualEffect) */,
	{ 29, 8, 1 } /* System.Void UnityEngine.VFX.VisualEffect::InvokeOutputEventReceived_Internal(UnityEngine.VFX.VisualEffect,System.Int32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_VFXModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_VFXModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	162,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_VFXModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};

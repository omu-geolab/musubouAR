#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableAlloc`1<UnityEngine.AnimationCurve>
struct BindableVariableAlloc_1_t858C8E05DEFE1DDD8EC1CDB1460DECA99177750E;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.AnimationCurve,Unity.XR.CoreUtils.Datums.AnimationCurveDatum>
struct DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001;
// Unity.XR.CoreUtils.Datums.DatumProperty`2<System.Object,System.Object>
struct DatumProperty_2_t98BD8A4C9880149A1D45E454E7BDDA35AA869209;
// Unity.XR.CoreUtils.Datums.Datum`1<UnityEngine.AnimationCurve>
struct Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45;
// Unity.XR.CoreUtils.Datums.Datum`1<System.Object>
struct Datum_1_tA9CCE29F5AAD4AAF4580064728BE2B9DCE3F8222;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_tF66C076E6E583E99BAB18F6263089E397479B065;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.XR.CoreUtils.Bindings.IEventBinding[]
struct IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// Unity.XR.CoreUtils.Datums.AnimationCurveDatum
struct AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37;
// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty
struct AnimationCurveDatumProperty_t80458B42C1566DE6E9B1A52DE4037F58B6BC0DE5;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Unity.XR.CoreUtils.ColorUnityEvent
struct ColorUnityEvent_tF9E677B12BF05E249CB4C6C5368C9FF59B9EC273;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tC3A257AB62FB4E8E8618AF6D9FF7DC90E0FFA911;
// Unity.XR.CoreUtils.FloatUnityEvent
struct FloatUnityEvent_tA5B77982F4A650F80637A883B2A3F3832771AC83;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_t0FC1B80E0BB54741B1CB6C375B1E098260E14731;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t2B23AFA12631201DD97F7796C9327314CD6C03B6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Unity.XR.CoreUtils.QuaternionUnityEvent
struct QuaternionUnityEvent_t591E11277DBEBCF6012F7219C0035C054EE23CF2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.InputSystem.XR.TrackedPoseDriver
struct TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// Unity.XR.CoreUtils.Vector2UnityEvent
struct Vector2UnityEvent_t89FA1BAAF74A8CF7F56376B7FF5B2E1A9C7682CB;
// Unity.XR.CoreUtils.Vector3UnityEvent
struct Vector3UnityEvent_t9E7FAFED120B812CE67C0A697B9D62CB1B67084E;
// Unity.XR.CoreUtils.Vector4UnityEvent
struct Vector4UnityEvent_t1D7935F871BBCA365BABADA9A6F1C5F0E6B70F71;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48
struct U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4;

IL2CPP_EXTERN_C RuntimeClass* ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventBinding_t0FC1B80E0BB54741B1CB6C375B1E098260E14731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF66C076E6E583E99BAB18F6263089E397479B065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral21BABB7D4D81546003053B7D1D3E1523E82A424A;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE3C7D24C88332AA6E7641A205E050D0A2D470;
IL2CPP_EXTERN_C String_t* _stringLiteral558296ACB55EF55350E59F922EE5DD3735E5F58F;
IL2CPP_EXTERN_C String_t* _stringLiteral71D2453D8443A6065C34CE028B3CEFAABB0B25CF;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6ACAF59A3A9C3CADB8052713C86DBB5C529FF7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0963CC21FBA9B63973BFBAC23D8DE1C3294DCF5;
IL2CPP_EXTERN_C String_t* _stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB91D3E4E9BA972BB951EE86D7F8FF9C99BD9CEE;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121_m54305E82B8992F7E6CCB558776E91B9CD4409E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DatumProperty_2__ctor_mA9A3534F85EB34DEBD070270A52FD98F2BAF9FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Datum_1__ctor_m14A73BA236171D18AE6ACCB30FAECAB62CF0C950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE350715E469C57A3B5073DF9E0C93A21F23F6C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5BCA625C0E631F7880733D7B16745DAE8CC91BD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m49BA305403016D680534BAE2248EA67F19CCAC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAF1963EF830B837AF3E3F9DF8185B2160FBCB789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE9CB41676FD0B1F633BC63FBEDC499DF9B93C6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRepeatInitializeCameraU3Ed__48_System_Collections_IEnumerator_Reset_m034DF1C46AABE33936127AE4406DAB4F078F88D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF90FCEFEE911EC59A335232EA77A32080FE43C7F 
{
public:

public:
};


// System.Object


// Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.AnimationCurve,Unity.XR.CoreUtils.Datums.AnimationCurveDatum>
struct DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001  : public RuntimeObject
{
public:
	// System.Boolean Unity.XR.CoreUtils.Datums.DatumProperty`2::m_UseConstant
	bool ___m_UseConstant_0;
	// TValue Unity.XR.CoreUtils.Datums.DatumProperty`2::m_ConstantValue
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_ConstantValue_1;
	// TDatum Unity.XR.CoreUtils.Datums.DatumProperty`2::m_Variable
	AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37 * ___m_Variable_2;

public:
	inline static int32_t get_offset_of_m_UseConstant_0() { return static_cast<int32_t>(offsetof(DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001, ___m_UseConstant_0)); }
	inline bool get_m_UseConstant_0() const { return ___m_UseConstant_0; }
	inline bool* get_address_of_m_UseConstant_0() { return &___m_UseConstant_0; }
	inline void set_m_UseConstant_0(bool value)
	{
		___m_UseConstant_0 = value;
	}

	inline static int32_t get_offset_of_m_ConstantValue_1() { return static_cast<int32_t>(offsetof(DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001, ___m_ConstantValue_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_ConstantValue_1() const { return ___m_ConstantValue_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_ConstantValue_1() { return &___m_ConstantValue_1; }
	inline void set_m_ConstantValue_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_ConstantValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConstantValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variable_2() { return static_cast<int32_t>(offsetof(DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001, ___m_Variable_2)); }
	inline AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37 * get_m_Variable_2() const { return ___m_Variable_2; }
	inline AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37 ** get_address_of_m_Variable_2() { return &___m_Variable_2; }
	inline void set_m_Variable_2(AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37 * value)
	{
		___m_Variable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Variable_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_tF66C076E6E583E99BAB18F6263089E397479B065  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF66C076E6E583E99BAB18F6263089E397479B065, ____items_1)); }
	inline IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* get__items_1() const { return ____items_1; }
	inline IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF66C076E6E583E99BAB18F6263089E397479B065, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF66C076E6E583E99BAB18F6263089E397479B065, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF66C076E6E583E99BAB18F6263089E397479B065, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF66C076E6E583E99BAB18F6263089E397479B065_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF66C076E6E583E99BAB18F6263089E397479B065_StaticFields, ____emptyArray_5)); }
	inline IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEventBindingU5BU5D_t167C784161BC6CE4F2DDA0C5CFD941861A76AB5E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * ___m_Bindings_0;

public:
	inline static int32_t get_offset_of_m_Bindings_0() { return static_cast<int32_t>(offsetof(BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE, ___m_Bindings_0)); }
	inline List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * get_m_Bindings_0() const { return ___m_Bindings_0; }
	inline List_1_tF66C076E6E583E99BAB18F6263089E397479B065 ** get_address_of_m_Bindings_0() { return &___m_Bindings_0; }
	inline void set_m_Bindings_0(List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * value)
	{
		___m_Bindings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_0), (void*)value);
	}
};


// Unity.XR.CoreUtils.HashCodeUtil
struct HashCodeUtil_t0E549EDC7137ED001E233C805B83DA0FCA63239E  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Unity.XR.CoreUtils.TransformExtensions
struct TransformExtensions_t65BD9885408541AA99351B2B543C37995F741355  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.XR.CoreUtils.Vector3Extensions
struct Vector3Extensions_t2A1680EBB925AC9F394DE6E9331042D4557B8557  : public RuntimeObject
{
public:

public:
};


// Unity.XR.CoreUtils.XRLoggingUtils
struct XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E  : public RuntimeObject
{
public:

public:
};

struct XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_StaticFields
{
public:
	// System.Boolean Unity.XR.CoreUtils.XRLoggingUtils::k_DontLogAnything
	bool ___k_DontLogAnything_0;

public:
	inline static int32_t get_offset_of_k_DontLogAnything_0() { return static_cast<int32_t>(offsetof(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_StaticFields, ___k_DontLogAnything_0)); }
	inline bool get_k_DontLogAnything_0() const { return ___k_DontLogAnything_0; }
	inline bool* get_address_of_k_DontLogAnything_0() { return &___k_DontLogAnything_0; }
	inline void set_k_DontLogAnything_0(bool value)
	{
		___k_DontLogAnything_0 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48
struct U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4  : public RuntimeObject
{
public:
	// System.Int32 Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.XR.CoreUtils.XROrigin Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::<>4__this
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4, ___U3CU3E4__this_2)); }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>
struct Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___list_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_list_0() const { return ___list_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4, ___current_3)); }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * get_current_3() const { return ___current_3; }
	inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C 
{
public:
	// Unity.XR.CoreUtils.XROrigin Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::<Origin>k__BackingField
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___U3COriginU3Ek__BackingField_0;
	// UnityEngine.Transform Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::<TrackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTrackablesParentU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C, ___U3COriginU3Ek__BackingField_0)); }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * get_U3COriginU3Ek__BackingField_0() const { return ___U3COriginU3Ek__BackingField_0; }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D ** get_address_of_U3COriginU3Ek__BackingField_0() { return &___U3COriginU3Ek__BackingField_0; }
	inline void set_U3COriginU3Ek__BackingField_0(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * value)
	{
		___U3COriginU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrackablesParentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C, ___U3CTrackablesParentU3Ek__BackingField_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTrackablesParentU3Ek__BackingField_1() const { return ___U3CTrackablesParentU3Ek__BackingField_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTrackablesParentU3Ek__BackingField_1() { return &___U3CTrackablesParentU3Ek__BackingField_1; }
	inline void set_U3CTrackablesParentU3Ek__BackingField_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTrackablesParentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrackablesParentU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_pinvoke
{
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___U3COriginU3Ek__BackingField_0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTrackablesParentU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_com
{
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___U3COriginU3Ek__BackingField_0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTrackablesParentU3Ek__BackingField_1;
};

// Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty
struct AnimationCurveDatumProperty_t80458B42C1566DE6E9B1A52DE4037F58B6BC0DE5  : public DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tC3A257AB62FB4E8E8618AF6D9FF7DC90E0FFA911  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Unity.XR.CoreUtils.Bindings.EventBinding
struct EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 
{
public:
	// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::<BindAction>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CBindActionU3Ek__BackingField_0;
	// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::<UnbindAction>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CUnbindActionU3Ek__BackingField_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.EventBinding::m_IsBound
	bool ___m_IsBound_2;

public:
	inline static int32_t get_offset_of_U3CBindActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0, ___U3CBindActionU3Ek__BackingField_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CBindActionU3Ek__BackingField_0() const { return ___U3CBindActionU3Ek__BackingField_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CBindActionU3Ek__BackingField_0() { return &___U3CBindActionU3Ek__BackingField_0; }
	inline void set_U3CBindActionU3Ek__BackingField_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CBindActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBindActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnbindActionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0, ___U3CUnbindActionU3Ek__BackingField_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CUnbindActionU3Ek__BackingField_1() const { return ___U3CUnbindActionU3Ek__BackingField_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CUnbindActionU3Ek__BackingField_1() { return &___U3CUnbindActionU3Ek__BackingField_1; }
	inline void set_U3CUnbindActionU3Ek__BackingField_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CUnbindActionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnbindActionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsBound_2() { return static_cast<int32_t>(offsetof(EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0, ___m_IsBound_2)); }
	inline bool get_m_IsBound_2() const { return ___m_IsBound_2; }
	inline bool* get_address_of_m_IsBound_2() { return &___m_IsBound_2; }
	inline void set_m_IsBound_2(bool value)
	{
		___m_IsBound_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.XR.CoreUtils.Bindings.EventBinding
struct EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3CBindActionU3Ek__BackingField_0;
	Il2CppMethodPointer ___U3CUnbindActionU3Ek__BackingField_1;
	int32_t ___m_IsBound_2;
};
// Native definition for COM marshalling of Unity.XR.CoreUtils.Bindings.EventBinding
struct EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_com
{
	Il2CppMethodPointer ___U3CBindActionU3Ek__BackingField_0;
	Il2CppMethodPointer ___U3CUnbindActionU3Ek__BackingField_1;
	int32_t ___m_IsBound_2;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;

public:
	inline static int32_t get_offset_of_m_UseReference_0() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_UseReference_0)); }
	inline bool get_m_UseReference_0() const { return ___m_UseReference_0; }
	inline bool* get_address_of_m_UseReference_0() { return &___m_UseReference_0; }
	inline void set_m_UseReference_0(bool value)
	{
		___m_UseReference_0 = value;
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_Action_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reference_2() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_Reference_2)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Reference_2() const { return ___m_Reference_2; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Reference_2() { return &___m_Reference_2; }
	inline void set_m_Reference_2(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Reference_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reference_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t2B23AFA12631201DD97F7796C9327314CD6C03B6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.XR.CoreUtils.ColorUnityEvent
struct ColorUnityEvent_tF9E677B12BF05E249CB4C6C5368C9FF59B9EC273  : public UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350
{
public:

public:
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.XR.CoreUtils.FloatUnityEvent
struct FloatUnityEvent_tA5B77982F4A650F80637A883B2A3F3832771AC83  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.XR.CoreUtils.QuaternionUnityEvent
struct QuaternionUnityEvent_t591E11277DBEBCF6012F7219C0035C054EE23CF2  : public UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78
{
public:

public:
};


// UnityEngine.XR.TrackingOriginModeFlags
struct TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.CoreUtils.Vector2UnityEvent
struct Vector2UnityEvent_t89FA1BAAF74A8CF7F56376B7FF5B2E1A9C7682CB  : public UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C
{
public:

public:
};


// Unity.XR.CoreUtils.Vector3UnityEvent
struct Vector3UnityEvent_t9E7FAFED120B812CE67C0A697B9D62CB1B67084E  : public UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829
{
public:

public:
};


// Unity.XR.CoreUtils.Vector4UnityEvent
struct Vector4UnityEvent_t1D7935F871BBCA365BABADA9A6F1C5F0E6B70F71  : public UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89
{
public:

public:
};


// UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingType
struct TrackingType_t1DAFCA851B529D6D7362534A81D5D0266D5C801E 
{
public:
	// System.Int32 UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t1DAFCA851B529D6D7362534A81D5D0266D5C801E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.TrackedPoseDriver/UpdateType
struct UpdateType_t9DC4006AB5A479EEBBC778F248688846A57B92AB 
{
public:
	// System.Int32 UnityEngine.InputSystem.XR.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9DC4006AB5A479EEBBC778F248688846A57B92AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tAE2B3246436F9B924A6284C9C0603322DD6D09E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_t1326EFD84D48C3339F652B2A072743C3189B581B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t6524BC8345E54C620E3557D2BD223CEAF7CA5EA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t4CA0C1D1034EEB2D3CB9C008009B2F4967CD658E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode
struct TrackingOriginMode_t530277AD3A09FB8A64A2C9B5B8A77CF54199A7DD 
{
public:
	// System.Int32 Unity.XR.CoreUtils.XROrigin/TrackingOriginMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginMode_t530277AD3A09FB8A64A2C9B5B8A77CF54199A7DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1  : public MulticastDelegate_t
{
public:

public:
};


// Unity.XR.CoreUtils.Datums.Datum`1<UnityEngine.AnimationCurve>
struct Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Unity.XR.CoreUtils.Datums.Datum`1::m_Comments
	String_t* ___m_Comments_4;
	// System.Boolean Unity.XR.CoreUtils.Datums.Datum`1::m_ReadOnly
	bool ___m_ReadOnly_5;
	// T Unity.XR.CoreUtils.Datums.Datum`1::m_Value
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_Value_6;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableAlloc`1<T> Unity.XR.CoreUtils.Datums.Datum`1::m_BindableVariableReference
	BindableVariableAlloc_1_t858C8E05DEFE1DDD8EC1CDB1460DECA99177750E * ___m_BindableVariableReference_7;

public:
	inline static int32_t get_offset_of_m_Comments_4() { return static_cast<int32_t>(offsetof(Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45, ___m_Comments_4)); }
	inline String_t* get_m_Comments_4() const { return ___m_Comments_4; }
	inline String_t** get_address_of_m_Comments_4() { return &___m_Comments_4; }
	inline void set_m_Comments_4(String_t* value)
	{
		___m_Comments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Comments_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReadOnly_5() { return static_cast<int32_t>(offsetof(Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45, ___m_ReadOnly_5)); }
	inline bool get_m_ReadOnly_5() const { return ___m_ReadOnly_5; }
	inline bool* get_address_of_m_ReadOnly_5() { return &___m_ReadOnly_5; }
	inline void set_m_ReadOnly_5(bool value)
	{
		___m_ReadOnly_5 = value;
	}

	inline static int32_t get_offset_of_m_Value_6() { return static_cast<int32_t>(offsetof(Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45, ___m_Value_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_Value_6() const { return ___m_Value_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_Value_6() { return &___m_Value_6; }
	inline void set_m_Value_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_Value_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindableVariableReference_7() { return static_cast<int32_t>(offsetof(Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45, ___m_BindableVariableReference_7)); }
	inline BindableVariableAlloc_1_t858C8E05DEFE1DDD8EC1CDB1460DECA99177750E * get_m_BindableVariableReference_7() const { return ___m_BindableVariableReference_7; }
	inline BindableVariableAlloc_1_t858C8E05DEFE1DDD8EC1CDB1460DECA99177750E ** get_address_of_m_BindableVariableReference_7() { return &___m_BindableVariableReference_7; }
	inline void set_m_BindableVariableReference_7(BindableVariableAlloc_1_t858C8E05DEFE1DDD8EC1CDB1460DECA99177750E * value)
	{
		___m_BindableVariableReference_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindableVariableReference_7), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// Unity.XR.CoreUtils.Datums.AnimationCurveDatum
struct AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37  : public Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.XR.TrackedPoseDriver
struct TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.XR.TrackedPoseDriver/TrackingType UnityEngine.InputSystem.XR.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_4;
	// UnityEngine.InputSystem.XR.TrackedPoseDriver/UpdateType UnityEngine.InputSystem.XR.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_5;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.InputSystem.XR.TrackedPoseDriver::m_PositionInput
	InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ___m_PositionInput_6;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.InputSystem.XR.TrackedPoseDriver::m_RotationInput
	InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ___m_RotationInput_7;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.TrackedPoseDriver::m_CurrentPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CurrentPosition_8;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.TrackedPoseDriver::m_CurrentRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_CurrentRotation_9;
	// System.Boolean UnityEngine.InputSystem.XR.TrackedPoseDriver::m_RotationBound
	bool ___m_RotationBound_10;
	// System.Boolean UnityEngine.InputSystem.XR.TrackedPoseDriver::m_PositionBound
	bool ___m_PositionBound_11;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.XR.TrackedPoseDriver::m_PositionAction
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_PositionAction_12;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.XR.TrackedPoseDriver::m_RotationAction
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_RotationAction_13;
	// System.Boolean UnityEngine.InputSystem.XR.TrackedPoseDriver::m_HasMigratedActions
	bool ___m_HasMigratedActions_14;

public:
	inline static int32_t get_offset_of_m_TrackingType_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_TrackingType_4)); }
	inline int32_t get_m_TrackingType_4() const { return ___m_TrackingType_4; }
	inline int32_t* get_address_of_m_TrackingType_4() { return &___m_TrackingType_4; }
	inline void set_m_TrackingType_4(int32_t value)
	{
		___m_TrackingType_4 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_UpdateType_5)); }
	inline int32_t get_m_UpdateType_5() const { return ___m_UpdateType_5; }
	inline int32_t* get_address_of_m_UpdateType_5() { return &___m_UpdateType_5; }
	inline void set_m_UpdateType_5(int32_t value)
	{
		___m_UpdateType_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionInput_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_PositionInput_6)); }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  get_m_PositionInput_6() const { return ___m_PositionInput_6; }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 * get_address_of_m_PositionInput_6() { return &___m_PositionInput_6; }
	inline void set_m_PositionInput_6(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  value)
	{
		___m_PositionInput_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_PositionInput_6))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_PositionInput_6))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_RotationInput_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_RotationInput_7)); }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  get_m_RotationInput_7() const { return ___m_RotationInput_7; }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 * get_address_of_m_RotationInput_7() { return &___m_RotationInput_7; }
	inline void set_m_RotationInput_7(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  value)
	{
		___m_RotationInput_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RotationInput_7))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RotationInput_7))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CurrentPosition_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_CurrentPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CurrentPosition_8() const { return ___m_CurrentPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CurrentPosition_8() { return &___m_CurrentPosition_8; }
	inline void set_m_CurrentPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CurrentPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentRotation_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_CurrentRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_CurrentRotation_9() const { return ___m_CurrentRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_CurrentRotation_9() { return &___m_CurrentRotation_9; }
	inline void set_m_CurrentRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_CurrentRotation_9 = value;
	}

	inline static int32_t get_offset_of_m_RotationBound_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_RotationBound_10)); }
	inline bool get_m_RotationBound_10() const { return ___m_RotationBound_10; }
	inline bool* get_address_of_m_RotationBound_10() { return &___m_RotationBound_10; }
	inline void set_m_RotationBound_10(bool value)
	{
		___m_RotationBound_10 = value;
	}

	inline static int32_t get_offset_of_m_PositionBound_11() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_PositionBound_11)); }
	inline bool get_m_PositionBound_11() const { return ___m_PositionBound_11; }
	inline bool* get_address_of_m_PositionBound_11() { return &___m_PositionBound_11; }
	inline void set_m_PositionBound_11(bool value)
	{
		___m_PositionBound_11 = value;
	}

	inline static int32_t get_offset_of_m_PositionAction_12() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_PositionAction_12)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_PositionAction_12() const { return ___m_PositionAction_12; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_PositionAction_12() { return &___m_PositionAction_12; }
	inline void set_m_PositionAction_12(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_PositionAction_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionAction_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_RotationAction_13() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_RotationAction_13)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_RotationAction_13() const { return ___m_RotationAction_13; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_RotationAction_13() { return &___m_RotationAction_13; }
	inline void set_m_RotationAction_13(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_RotationAction_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RotationAction_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasMigratedActions_14() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121, ___m_HasMigratedActions_14)); }
	inline bool get_m_HasMigratedActions_14() const { return ___m_HasMigratedActions_14; }
	inline bool* get_address_of_m_HasMigratedActions_14() { return &___m_HasMigratedActions_14; }
	inline void set_m_HasMigratedActions_14(bool value)
	{
		___m_HasMigratedActions_14 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8, ___m_OriginPose_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_OriginPose_10 = value;
	}
};


// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___U3CTrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTrackablesParentU3Ek__BackingField_5() const { return ___U3CTrackablesParentU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTrackablesParentU3Ek__BackingField_5() { return &___U3CTrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CTrackablesParentU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_TrackablesParentTransformChanged_6() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___TrackablesParentTransformChanged_6)); }
	inline Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * get_TrackablesParentTransformChanged_6() const { return ___TrackablesParentTransformChanged_6; }
	inline Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E ** get_address_of_TrackablesParentTransformChanged_6() { return &___TrackablesParentTransformChanged_6; }
	inline void set_TrackablesParentTransformChanged_6(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * value)
	{
		___TrackablesParentTransformChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackablesParentTransformChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginBaseGameObject_8() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_OriginBaseGameObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_OriginBaseGameObject_8() const { return ___m_OriginBaseGameObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_OriginBaseGameObject_8() { return &___m_OriginBaseGameObject_8; }
	inline void set_m_OriginBaseGameObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_OriginBaseGameObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginBaseGameObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraFloorOffsetObject_9() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraFloorOffsetObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CameraFloorOffsetObject_9() const { return ___m_CameraFloorOffsetObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CameraFloorOffsetObject_9() { return &___m_CameraFloorOffsetObject_9; }
	inline void set_m_CameraFloorOffsetObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CameraFloorOffsetObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraFloorOffsetObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestedTrackingOriginMode_10() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_RequestedTrackingOriginMode_10)); }
	inline int32_t get_m_RequestedTrackingOriginMode_10() const { return ___m_RequestedTrackingOriginMode_10; }
	inline int32_t* get_address_of_m_RequestedTrackingOriginMode_10() { return &___m_RequestedTrackingOriginMode_10; }
	inline void set_m_RequestedTrackingOriginMode_10(int32_t value)
	{
		___m_RequestedTrackingOriginMode_10 = value;
	}

	inline static int32_t get_offset_of_m_CameraYOffset_11() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraYOffset_11)); }
	inline float get_m_CameraYOffset_11() const { return ___m_CameraYOffset_11; }
	inline float* get_address_of_m_CameraYOffset_11() { return &___m_CameraYOffset_11; }
	inline void set_m_CameraYOffset_11(float value)
	{
		___m_CameraYOffset_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() const { return ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() { return &___U3CCurrentTrackingOriginModeU3Ek__BackingField_12; }
	inline void set_U3CCurrentTrackingOriginModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CCurrentTrackingOriginModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitialized_14() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraInitialized_14)); }
	inline bool get_m_CameraInitialized_14() const { return ___m_CameraInitialized_14; }
	inline bool* get_address_of_m_CameraInitialized_14() { return &___m_CameraInitialized_14; }
	inline void set_m_CameraInitialized_14(bool value)
	{
		___m_CameraInitialized_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitializing_15() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraInitializing_15)); }
	inline bool get_m_CameraInitializing_15() const { return ___m_CameraInitializing_15; }
	inline bool* get_address_of_m_CameraInitializing_15() { return &___m_CameraInitializing_15; }
	inline void set_m_CameraInitializing_15(bool value)
	{
		___m_CameraInitializing_15 = value;
	}
};

struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystems_13;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_13() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields, ___s_InputSubsystems_13)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystems_13() const { return ___s_InputSubsystems_13; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystems_13() { return &___s_InputSubsystems_13; }
	inline void set_s_InputSubsystems_13(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystems_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.XR.CoreUtils.Datums.Datum`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Datum_1__ctor_m8E5644613D913B5B568C4E910509B5B08DC254C8_gshared (Datum_1_tA9CCE29F5AAD4AAF4580064728BE2B9DCE3F8222 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Datums.DatumProperty`2<System.Object,System.Object>::.ctor(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatumProperty_2__ctor_mEB02AF85ED48DD0B09FEF5B757A4448F3D77986C_gshared (DatumProperty_2_t98BD8A4C9880149A1D45E454E7BDDA35AA869209 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078_gshared (UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7_gshared (UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194_gshared (Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * __this, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  ___obj0, const RuntimeMethod* method);

// Unity.XR.CoreUtils.XROrigin Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method);
// UnityEngine.Transform Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::get_TrackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::.ctor(Unity.XR.CoreUtils.XROrigin,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___origin0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trackablesParent1, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::Equals(Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mDEA555E578C8B4ED1C2EB86EC70E289D6A542DEE (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mD1E41855005B1E2CF7834216ECA32621B6229D53 (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.XR.CoreUtils.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m55B8BCB31F847BA215571F96A8FC190A53CE9D26 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.XR.CoreUtils.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m5EC3008FE1451272AED445DA4B1E7A65BAAF197E (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method);
// System.Int32 Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_mDBE0D34111420DBF1A446062AD324FCDE522B51A (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Datums.Datum`1<UnityEngine.AnimationCurve>::.ctor()
inline void Datum_1__ctor_m14A73BA236171D18AE6ACCB30FAECAB62CF0C950 (Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45 * __this, const RuntimeMethod* method)
{
	((  void (*) (Datum_1_t9C1632CA45D6338DF664BD371FA8E943282E8A45 *, const RuntimeMethod*))Datum_1__ctor_m8E5644613D913B5B568C4E910509B5B08DC254C8_gshared)(__this, method);
}
// System.Void Unity.XR.CoreUtils.Datums.DatumProperty`2<UnityEngine.AnimationCurve,Unity.XR.CoreUtils.Datums.AnimationCurveDatum>::.ctor(TValue)
inline void DatumProperty_2__ctor_mA9A3534F85EB34DEBD070270A52FD98F2BAF9FE2 (DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (DatumProperty_2_tEB1BE1FC16FEB82188DFB58A14ABA86E29039001 *, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, const RuntimeMethod*))DatumProperty_2__ctor_mEB02AF85ED48DD0B09FEF5B757A4448F3D77986C_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>::Add(!0)
inline void List_1_Add_mE350715E469C57A3B5073DF9E0C93A21F23F6C81 (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mE9CB41676FD0B1F633BC63FBEDC499DF9B93C6EB_inline (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>::get_Count()
inline int32_t List_1_get_Count_mAF1963EF830B837AF3E3F9DF8185B2160FBCB789_inline (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>::Clear()
inline void List_1_Clear_m5BCA625C0E631F7880733D7B16745DAE8CC91BD0 (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>::.ctor()
inline void List_1__ctor_m49BA305403016D680534BAE2248EA67F19CCAC1D (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089 (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 *, const RuntimeMethod*))UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::get_BindAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::set_BindAction(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::get_UnbindAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::set_UnbindAction(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::Bind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_Bind_m2114894CB4EC2EC35EF0A4068F0CFAE4955C9385 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::Unbind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_Unbind_mA28A0372DAF5CF6757FF016EB2D9CA0E405A0A33 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::ClearBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_ClearBinding_m464FF9805BA626E2447B53C6FC273D9F79FE5BF1 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, const RuntimeMethod*))UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>::.ctor()
inline void UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078 (UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tAF3474AA60193981224383CDC6CC7B34138FCC78 *, const RuntimeMethod*))UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_GetTransformedBy_m4CA999ABD2B7AFE2AEC9B4B058C4AC39A88B303A (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lhs0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7 (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, const RuntimeMethod*))UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
inline void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8 (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 *, const RuntimeMethod*))UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>::.ctor()
inline void UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7 (UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1FA70F33C1DE2A537984253019FD8F6DE9C02E89 *, const RuntimeMethod*))UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7_gshared)(__this, method);
}
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329 (const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin::MoveOffsetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_TryInitializeCamera_m8A470425D8369F6555D3C36C3335F9D8F82B40A4 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.XR.CoreUtils.XROrigin::get_CameraInOriginSpacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  XROrigin_get_CameraInOriginSpacePos_mA25C4AECE774DCE217DF1AB838E9D82BB87BEE56 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::get_CurrentTrackingOriginMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin::MoveOffsetHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_MoveOffsetHeight_m89E6241C5D67CCD0AC4A166AA4599AADF39E895F (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, float ___y0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.XROrigin::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_SetupCamera_m63ECB705B6D6398F5B8B7C2EF7B33CB37C796BC4 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.XR.CoreUtils.XROrigin::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XROrigin_RepeatInitializeCamera_mE77E233DAE27A9547E0BE478CC06ED6E51E8917A (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Count()
inline int32_t List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::GetEnumerator()
inline Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::get_Current()
inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_SetupCamera_mEB39C60D1AE12C2A25647E578B353E127C406726 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___inputSubsystem0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRInputSubsystem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9 (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRInputSubsystem::remove_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_remove_trackingOriginUpdated_m330F23CA8B04C50C56B120AF7387A2EA6B00E641 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRInputSubsystem::add_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3 (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystem>::Dispose()
inline void Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103 (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin::set_CurrentTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryRecenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__48__ctor_m38D16CB74A912FFAC7BDB663DAC73CCC66F353DB (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.XROrigin::RotateAroundCameraPosition(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_RotateAroundCameraPosition_mDFFA1FCA35ABE47B99085527C2DBF97141289EC3 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___angleDegrees1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUp_mF2000A84EAFDFA87164B64B19BC93324AB030C26 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationUp0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ProjectOnPlane_m066BDEFD60B2828C4B531CD96C4DBFADF6B0EF3B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___planeNormal1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.XR.CoreUtils.XROrigin::get_OriginInCameraSpacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  XROrigin_get_OriginInCameraSpacePos_mC934EF4E3E14C7DC72A88E058C39F7A40104174C (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.XROrigin::set_TrackablesParent(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROrigin_set_TrackablesParent_mE069D24282C732C5164D03FEEDBA8C9FD8AF323E_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::get_TrackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.InputSystem.XR.TrackedPoseDriver>()
inline TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121 * Component_GetComponent_TisTrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121_m54305E82B8992F7E6CCB558776E91B9CD4409E97 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TransformExtensions_TransformPose_mEB3D81D8D439A0CB8C08B791A180B78542978AAA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// UnityEngine.Pose Unity.XR.CoreUtils.XROrigin::GetCameraOriginPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XROrigin_GetCameraOriginPose_m65F340AB82A12B79C1CE8A2239C49A4FCA34C3F5 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m59490E3CAC42DF8CB2BCDFC0ED75DB6F89432F06 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194 (Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * __this, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C , const RuntimeMethod*))Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mD1CDCAE366DB514FBECD9DAAED0F7834029E1304 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean Unity.XR.CoreUtils.XROrigin::<OnValidate>g__IsModeStale|60_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_U3COnValidateU3Eg__IsModeStaleU7C60_0_mFD6964C954EA4827D65DB27D63D003A16594CFB8 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_pinvoke(const ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C& unmarshaled, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3COriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Origin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COriginU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_pinvoke_back(const ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_pinvoke& marshaled, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C& unmarshaled)
{
	Exception_t* ___U3COriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Origin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COriginU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_pinvoke_cleanup(ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_com(const ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C& unmarshaled, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_com& marshaled)
{
	Exception_t* ___U3COriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Origin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COriginU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_com_back(const ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_com& marshaled, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C& unmarshaled)
{
	Exception_t* ___U3COriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Origin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COriginU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshal_com_cleanup(ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_marshaled_com& marshaled)
{
}
// Unity.XR.CoreUtils.XROrigin Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::get_Origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5 (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method)
{
	{
		// public XROrigin Origin { get; }
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0 = __this->get_U3COriginU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Transform Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::get_TrackablesParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43 (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTrackablesParentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::.ctor(Unity.XR.CoreUtils.XROrigin,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___origin0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trackablesParent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (origin == null)
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(origin));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (trackablesParent == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___trackablesParent1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException(nameof(trackablesParent));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB6ACAF59A3A9C3CADB8052713C86DBB5C529FF7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D_RuntimeMethod_var)));
	}

IL_0028:
	{
		// this.Origin = origin;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_6 = ___origin0;
		__this->set_U3COriginU3Ek__BackingField_0(L_6);
		// this.TrackablesParent = trackablesParent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___trackablesParent1;
		__this->set_U3CTrackablesParentU3Ek__BackingField_1(L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D_AdjustorThunk (RuntimeObject * __this, XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___origin0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trackablesParent1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D(_thisAdjusted, ___origin0, ___trackablesParent1, method);
}
// System.Boolean Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::Equals(Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mDEA555E578C8B4ED1C2EB86EC70E289D6A542DEE (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Origin == other.Origin &&
		// TrackablesParent == other.TrackablesParent;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0;
		L_0 = ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)__this, /*hidden argument*/NULL);
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_1;
		L_1 = ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTrackablesParentTransformChangedEventArgs_Equals_mDEA555E578C8B4ED1C2EB86EC70E289D6A542DEE_AdjustorThunk (RuntimeObject * __this, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_Equals_mDEA555E578C8B4ED1C2EB86EC70E289D6A542DEE(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mD1E41855005B1E2CF7834216ECA32621B6229D53 (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// obj is ARTrackablesParentTransformChangedEventArgs other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)UnBox(L_1, ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C_il2cpp_TypeInfo_var))));
		ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  L_2 = V_0;
		bool L_3;
		L_3 = ARTrackablesParentTransformChangedEventArgs_Equals_mDEA555E578C8B4ED1C2EB86EC70E289D6A542DEE((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTrackablesParentTransformChangedEventArgs_Equals_mD1E41855005B1E2CF7834216ECA32621B6229D53_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_Equals_mD1E41855005B1E2CF7834216ECA32621B6229D53(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_mDBE0D34111420DBF1A446062AD324FCDE522B51A (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(Origin),
		//     HashCodeUtil.ReferenceHash(TrackablesParent));
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0;
		L_0 = ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m55B8BCB31F847BA215571F96A8FC190A53CE9D26(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline((ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m55B8BCB31F847BA215571F96A8FC190A53CE9D26(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m5EC3008FE1451272AED445DA4B1E7A65BAAF197E(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_mDBE0D34111420DBF1A446062AD324FCDE522B51A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * _thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_GetHashCode_mDBE0D34111420DBF1A446062AD324FCDE522B51A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Datums.AnimationCurveDatum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveDatum__ctor_mAC74C57A2E1FA217073BC2FA9F929B60B06C0A96 (AnimationCurveDatum_t08339FE455ABD2312BF0C8CF149DF95D55399D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Datum_1__ctor_m14A73BA236171D18AE6ACCB30FAECAB62CF0C950_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Datum_1__ctor_m14A73BA236171D18AE6ACCB30FAECAB62CF0C950(__this, /*hidden argument*/Datum_1__ctor_m14A73BA236171D18AE6ACCB30FAECAB62CF0C950_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveDatumProperty__ctor_mC666A8B6268F99B4884A55E746C61B23B4D66A78 (AnimationCurveDatumProperty_t80458B42C1566DE6E9B1A52DE4037F58B6BC0DE5 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatumProperty_2__ctor_mA9A3534F85EB34DEBD070270A52FD98F2BAF9FE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurveDatumProperty(AnimationCurve value) : base(value)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___value0;
		DatumProperty_2__ctor_mA9A3534F85EB34DEBD070270A52FD98F2BAF9FE2(__this, L_0, /*hidden argument*/DatumProperty_2__ctor_mA9A3534F85EB34DEBD070270A52FD98F2BAF9FE2_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_mB862CA624836F2F41878A83077484E5D4F51BBDC (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, RuntimeObject* ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE350715E469C57A3B5073DF9E0C93A21F23F6C81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Bindings.Add(binding);
		List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * L_0 = __this->get_m_Bindings_0();
		RuntimeObject* L_1 = ___binding0;
		NullCheck(L_0);
		List_1_Add_mE350715E469C57A3B5073DF9E0C93A21F23F6C81(L_0, L_1, /*hidden argument*/List_1_Add_mE350715E469C57A3B5073DF9E0C93A21F23F6C81_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_mB28C44D8FC5CBEDCBE41D99AC52A06AD3D3C0024 (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventBinding_t0FC1B80E0BB54741B1CB6C375B1E098260E14731_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5BCA625C0E631F7880733D7B16745DAE8CC91BD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1963EF830B837AF3E3F9DF8185B2160FBCB789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE9CB41676FD0B1F633BC63FBEDC499DF9B93C6EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// for (int i = 0; i < m_Bindings.Count; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// m_Bindings[i]?.ClearBinding();
		List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * L_0 = __this->get_m_Bindings_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_mE9CB41676FD0B1F633BC63FBEDC499DF9B93C6EB_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE9CB41676FD0B1F633BC63FBEDC499DF9B93C6EB_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_001b;
	}

IL_0016:
	{
		NullCheck(G_B3_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.XR.CoreUtils.Bindings.IEventBinding::ClearBinding() */, IEventBinding_t0FC1B80E0BB54741B1CB6C375B1E098260E14731_il2cpp_TypeInfo_var, G_B3_0);
	}

IL_001b:
	{
		// for (int i = 0; i < m_Bindings.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < m_Bindings.Count; i++)
		int32_t L_5 = V_0;
		List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * L_6 = __this->get_m_Bindings_0();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mAF1963EF830B837AF3E3F9DF8185B2160FBCB789_inline(L_6, /*hidden argument*/List_1_get_Count_mAF1963EF830B837AF3E3F9DF8185B2160FBCB789_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// m_Bindings.Clear();
		List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * L_8 = __this->get_m_Bindings_0();
		NullCheck(L_8);
		List_1_Clear_m5BCA625C0E631F7880733D7B16745DAE8CC91BD0(L_8, /*hidden argument*/List_1_Clear_m5BCA625C0E631F7880733D7B16745DAE8CC91BD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m134F76F56E968839A28997A80A0B8F7272F0B745 (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m49BA305403016D680534BAE2248EA67F19CCAC1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF66C076E6E583E99BAB18F6263089E397479B065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<IEventBinding> m_Bindings = new List<IEventBinding>();
		List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * L_0 = (List_1_tF66C076E6E583E99BAB18F6263089E397479B065 *)il2cpp_codegen_object_new(List_1_tF66C076E6E583E99BAB18F6263089E397479B065_il2cpp_TypeInfo_var);
		List_1__ctor_m49BA305403016D680534BAE2248EA67F19CCAC1D(L_0, /*hidden argument*/List_1__ctor_m49BA305403016D680534BAE2248EA67F19CCAC1D_RuntimeMethod_var);
		__this->set_m_Bindings_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.ColorUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorUnityEvent__ctor_m718169C7152A67F2CCC6954EDDE9599A722AC92A (ColorUnityEvent_tF9E677B12BF05E249CB4C6C5368C9FF59B9EC273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089(__this, /*hidden argument*/UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m397CF6D74070B39A844CEF4BC9846AF5DC8423B9 (EmbeddedAttribute_tC3A257AB62FB4E8E8618AF6D9FF7DC90E0FFA911 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.XR.CoreUtils.Bindings.EventBinding
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_pinvoke(const EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0& unmarshaled, EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CBindActionU3Ek__BackingField_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_U3CBindActionU3Ek__BackingField_0()));
	marshaled.___U3CUnbindActionU3Ek__BackingField_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_U3CUnbindActionU3Ek__BackingField_1()));
	marshaled.___m_IsBound_2 = static_cast<int32_t>(unmarshaled.get_m_IsBound_2());
}
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_pinvoke_back(const EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_pinvoke& marshaled, EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CBindActionU3Ek__BackingField_0(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6>(marshaled.___U3CBindActionU3Ek__BackingField_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
	unmarshaled.set_U3CUnbindActionU3Ek__BackingField_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6>(marshaled.___U3CUnbindActionU3Ek__BackingField_1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
	bool unmarshaled_m_IsBound_temp_2 = false;
	unmarshaled_m_IsBound_temp_2 = static_cast<bool>(marshaled.___m_IsBound_2);
	unmarshaled.set_m_IsBound_2(unmarshaled_m_IsBound_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.XR.CoreUtils.Bindings.EventBinding
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_pinvoke_cleanup(EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.XR.CoreUtils.Bindings.EventBinding
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_com(const EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0& unmarshaled, EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_com& marshaled)
{
	marshaled.___U3CBindActionU3Ek__BackingField_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_U3CBindActionU3Ek__BackingField_0()));
	marshaled.___U3CUnbindActionU3Ek__BackingField_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_U3CUnbindActionU3Ek__BackingField_1()));
	marshaled.___m_IsBound_2 = static_cast<int32_t>(unmarshaled.get_m_IsBound_2());
}
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_com_back(const EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_com& marshaled, EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CBindActionU3Ek__BackingField_0(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6>(marshaled.___U3CBindActionU3Ek__BackingField_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
	unmarshaled.set_U3CUnbindActionU3Ek__BackingField_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6>(marshaled.___U3CUnbindActionU3Ek__BackingField_1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
	bool unmarshaled_m_IsBound_temp_2 = false;
	unmarshaled_m_IsBound_temp_2 = static_cast<bool>(marshaled.___m_IsBound_2);
	unmarshaled.set_m_IsBound_2(unmarshaled_m_IsBound_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.XR.CoreUtils.Bindings.EventBinding
IL2CPP_EXTERN_C void EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshal_com_cleanup(EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0_marshaled_com& marshaled)
{
}
// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::get_BindAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	{
		// public Action BindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CBindActionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * _returnValue;
	_returnValue = EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::set_BindAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action BindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3CBindActionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78_inline(_thisAdjusted, ___value0, method);
}
// System.Action Unity.XR.CoreUtils.Bindings.EventBinding::get_UnbindAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	{
		// public Action UnbindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CUnbindActionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * _returnValue;
	_returnValue = EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::set_UnbindAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action UnbindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3CUnbindActionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::Bind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_Bind_m2114894CB4EC2EC35EF0A4068F0CFAE4955C9385 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	{
		// if (!m_IsBound)
		bool L_0 = __this->get_m_IsBound_2();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// BindAction?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1;
		L_1 = EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9_inline((EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *)__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B3_0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// m_IsBound = true;
		__this->set_m_IsBound_2((bool)1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventBinding_Bind_m2114894CB4EC2EC35EF0A4068F0CFAE4955C9385_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	EventBinding_Bind_m2114894CB4EC2EC35EF0A4068F0CFAE4955C9385(_thisAdjusted, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::Unbind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_Unbind_mA28A0372DAF5CF6757FF016EB2D9CA0E405A0A33 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	{
		// if (m_IsBound)
		bool L_0 = __this->get_m_IsBound_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// UnbindAction?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1;
		L_1 = EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9_inline((EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *)__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B3_0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// m_IsBound = false;
		__this->set_m_IsBound_2((bool)0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventBinding_Unbind_mA28A0372DAF5CF6757FF016EB2D9CA0E405A0A33_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	EventBinding_Unbind_mA28A0372DAF5CF6757FF016EB2D9CA0E405A0A33(_thisAdjusted, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.EventBinding::ClearBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBinding_ClearBinding_m464FF9805BA626E2447B53C6FC273D9F79FE5BF1 (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	{
		// Unbind();
		EventBinding_Unbind_mA28A0372DAF5CF6757FF016EB2D9CA0E405A0A33((EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *)__this, /*hidden argument*/NULL);
		// BindAction = null;
		EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78_inline((EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *)__this, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// UnbindAction = null;
		EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9_inline((EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *)__this, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EventBinding_ClearBinding_m464FF9805BA626E2447B53C6FC273D9F79FE5BF1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * _thisAdjusted = reinterpret_cast<EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 *>(__this + _offset);
	EventBinding_ClearBinding_m464FF9805BA626E2447B53C6FC273D9F79FE5BF1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.FloatUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatUnityEvent__ctor_m3C80AE317A469CC5F7C0920889BBB1F9D86195F5 (FloatUnityEvent_tA5B77982F4A650F80637A883B2A3F3832771AC83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED(__this, /*hidden argument*/UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.XR.CoreUtils.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m5EC3008FE1451272AED445DA4B1E7A65BAAF197E (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method)
{
	{
		// return hash1 * 486187739 + hash2;
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739))), (int32_t)L_1));
	}
}
// System.Int32 Unity.XR.CoreUtils.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m55B8BCB31F847BA215571F96A8FC190A53CE9D26 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public static int ReferenceHash(object obj) => obj != null ? obj.GetHashCode() : 0;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m40764A40A4145B9996BC9AECBAD2C3BCE27FA65D (IsReadOnlyAttribute_t2B23AFA12631201DD97F7796C9327314CD6C03B6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.QuaternionUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionUnityEvent__ctor_m7B6198DF5266C35E7980BE275344236913C5D789 (QuaternionUnityEvent_t591E11277DBEBCF6012F7219C0035C054EE23CF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078(__this, /*hidden argument*/UnityEvent_1__ctor_mD0B06116E12A9D2206760627033BEAEF1C010078_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TransformExtensions_GetWorldPose_m33A1A882B998C9949D1C6424846E60D55B5AEF45 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	{
		// return new Pose(transform.position, transform.rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform0;
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TransformExtensions_TransformPose_mEB3D81D8D439A0CB8C08B791A180B78542978AAA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method)
{
	{
		// return pose.GetTransformedBy(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_GetTransformedBy_m4CA999ABD2B7AFE2AEC9B4B058C4AC39A88B303A((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&___pose1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Vector2UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2UnityEvent__ctor_m5030F8916B653DFD26113971AC99AFC58C5D5C94 (Vector2UnityEvent_t89FA1BAAF74A8CF7F56376B7FF5B2E1A9C7682CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7(__this, /*hidden argument*/UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.XR.CoreUtils.Vector3Extensions::MaxComponent(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Extensions_MaxComponent_m19DF9C78F0799BD2D1F3E5E87565C600D40CFD4D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	{
		// return Mathf.Max(Mathf.Max(vector.x, vector.y), vector.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_y_3();
		float L_4;
		L_4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___vector0;
		float L_6 = L_5.get_z_4();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 Unity.XR.CoreUtils.Vector3Extensions::Multiply(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_Multiply_m7B8B8D6D08861C9401D99F12DA04FE1CB8438141 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	{
		// return new Vector3(value.x * scale.x, value.y * scale.y, value.z * scale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___scale1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___scale1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___value0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___scale1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Unity.XR.CoreUtils.Vector3Extensions::Divide(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Extensions_Divide_m6BEABD7E540B8C17B3738253D908EC1C09D81DED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale1, const RuntimeMethod* method)
{
	{
		// return new Vector3(value.x / scale.x, value.y / scale.y, value.z / scale.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___scale1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___scale1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___value0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___scale1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)((float)L_1/(float)L_3)), ((float)((float)L_5/(float)L_7)), ((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Vector3UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3UnityEvent__ctor_m4C6C0F78526D7E9651F1BC2DE40F9A6B7795B3BB (Vector3UnityEvent_t9E7FAFED120B812CE67C0A697B9D62CB1B67084E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8(__this, /*hidden argument*/UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.Vector4UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4UnityEvent__ctor_m2C9E326EE573F0E05D04A57312872BD2C89CDF27 (Vector4UnityEvent_t1D7935F871BBCA365BABADA9A6F1C5F0E6B70F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7(__this, /*hidden argument*/UnityEvent_1__ctor_m6B47D1CB81BDA27203E91E980D5CF844654A15C7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.XRLoggingUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoggingUtils__cctor_m34C67D615FF5E41B0C2930A2B03E09F63E8F0EB1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECE3C7D24C88332AA6E7641A205E050D0A2D470);
		s_Il2CppMethodInitialized = true;
	}
	{
		// k_DontLogAnything = Environment.GetCommandLineArgs().Contains("-runTests");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329(/*hidden argument*/NULL);
		bool L_1;
		L_1 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_0, _stringLiteral3ECE3C7D24C88332AA6E7641A205E050D0A2D470, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		((XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_StaticFields*)il2cpp_codegen_static_fields_for(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var))->set_k_DontLogAnything_0(L_1);
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XRLoggingUtils::LogWarning(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoggingUtils_LogWarning_m16C829B8740982FA4B0EBED606A2D518E492A5CC (String_t* ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!k_DontLogAnything)
		IL2CPP_RUNTIME_CLASS_INIT(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var);
		bool L_0 = ((XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_StaticFields*)il2cpp_codegen_static_fields_for(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var))->get_k_DontLogAnything_0();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogWarning(message, context);
		String_t* L_1 = ___message0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___context1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(L_1, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XRLoggingUtils::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoggingUtils_LogError_m65734BA6FECDC0C2A35DE1E6401886DFD6515402 (String_t* ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!k_DontLogAnything)
		IL2CPP_RUNTIME_CLASS_INIT(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var);
		bool L_0 = ((XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_StaticFields*)il2cpp_codegen_static_fields_for(XRLoggingUtils_tC6F08995686A9522ED0AED6A6910E29944BA786E_il2cpp_TypeInfo_var))->get_k_DontLogAnything_0();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError(message, context);
		String_t* L_1 = ___message0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___context1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_1, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * XROrigin_get_Camera_mDEC1EA5E15968845DA812397BBA4506A88B0F9FF (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_Camera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_Camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_Camera_m33ECB239BCDB92806AFD47EA8A4685E81EBDFE24 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Camera = value;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___value0;
		__this->set_m_Camera_4(L_0);
		return;
	}
}
// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::get_TrackablesParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_TrackablesParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_TrackablesParent_mE069D24282C732C5164D03FEEDBA8C9FD8AF323E (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CTrackablesParentU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::add_TrackablesParentTransformChanged(System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_add_TrackablesParentTransformChanged_mA320D83FF126A31F8139C86BC68BE280EE4BC280 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_0 = NULL;
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_1 = NULL;
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_2 = NULL;
	{
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_0 = __this->get_TrackablesParentTransformChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_2 = V_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)CastclassSealed((RuntimeObject*)L_4, Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E_il2cpp_TypeInfo_var));
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E ** L_5 = __this->get_address_of_TrackablesParentTransformChanged_6();
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_6 = V_2;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_7 = V_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *>((Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_9 = V_0;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)L_9) == ((RuntimeObject*)(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::remove_TrackablesParentTransformChanged(System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_remove_TrackablesParentTransformChanged_m4D7C48C781798E32FE484B40997BF6BFB5A8BBB0 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_0 = NULL;
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_1 = NULL;
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * V_2 = NULL;
	{
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_0 = __this->get_TrackablesParentTransformChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_2 = V_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)CastclassSealed((RuntimeObject*)L_4, Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E_il2cpp_TypeInfo_var));
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E ** L_5 = __this->get_address_of_TrackablesParentTransformChanged_6();
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_6 = V_2;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_7 = V_1;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *>((Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_9 = V_0;
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)L_9) == ((RuntimeObject*)(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::get_Origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * XROrigin_get_Origin_m791424808DC2F95B332CFCE34A260E5F53DEC2AD (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_OriginBaseGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_Origin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_Origin_mA3665C3245F0B16C7C2AA41381FC8D57A80FD6D3 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_OriginBaseGameObject = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_OriginBaseGameObject_8(L_0);
		return;
	}
}
// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::get_CameraFloorOffsetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * XROrigin_get_CameraFloorOffsetObject_mB06A006D2F1211B477E5AADF9DF6EBCB5EFCCF45 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_CameraFloorOffsetObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CameraFloorOffsetObject_9();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_CameraFloorOffsetObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_CameraFloorOffsetObject_mE20DF102DDC9F456EE93F97D69A5EEF7306C1F5E (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// m_CameraFloorOffsetObject = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_CameraFloorOffsetObject_9(L_0);
		// MoveOffsetHeight();
		XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::get_RequestedTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XROrigin_get_RequestedTrackingOriginMode_m4FF9E54CD679A9B3CC05B36314D66F3B1AD1688B (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_RequestedTrackingOriginMode;
		int32_t L_0 = __this->get_m_RequestedTrackingOriginMode_10();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_RequestedTrackingOriginMode(Unity.XR.CoreUtils.XROrigin/TrackingOriginMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_RequestedTrackingOriginMode_m2D7D0AF1006FF55D8EC6D8BF6679F9867E5D496E (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_RequestedTrackingOriginMode = value;
		int32_t L_0 = ___value0;
		__this->set_m_RequestedTrackingOriginMode_10(L_0);
		// TryInitializeCamera();
		XROrigin_TryInitializeCamera_m8A470425D8369F6555D3C36C3335F9D8F82B40A4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Unity.XR.CoreUtils.XROrigin::get_CameraYOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XROrigin_get_CameraYOffset_mA396D70F0E27E80EA5177915433C5038BACDDF4E (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_CameraYOffset;
		float L_0 = __this->get_m_CameraYOffset_11();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_CameraYOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_CameraYOffset_mBA7E721A282BA9E414B1BCA15E82AE3D48C1CAA4 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_CameraYOffset = value;
		float L_0 = ___value0;
		__this->set_m_CameraYOffset_11(L_0);
		// MoveOffsetHeight();
		XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::get_CurrentTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags CurrentTrackingOriginMode { get; private set; }
		int32_t L_0 = __this->get_U3CCurrentTrackingOriginModeU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::set_CurrentTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags CurrentTrackingOriginMode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCurrentTrackingOriginModeU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityEngine.Vector3 Unity.XR.CoreUtils.XROrigin::get_OriginInCameraSpacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  XROrigin_get_OriginInCameraSpacePos_mC934EF4E3E14C7DC72A88E058C39F7A40104174C (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 OriginInCameraSpacePos => m_Camera.transform.InverseTransformPoint(m_OriginBaseGameObject.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Unity.XR.CoreUtils.XROrigin::get_CameraInOriginSpacePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  XROrigin_get_CameraInOriginSpacePos_mA25C4AECE774DCE217DF1AB838E9D82BB87BEE56 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 CameraInOriginSpacePos => m_OriginBaseGameObject.transform.InverseTransformPoint(m_Camera.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Unity.XR.CoreUtils.XROrigin::get_CameraInOriginSpaceHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XROrigin_get_CameraInOriginSpaceHeight_m59DC39ADD21E144299A2B7A283414591CC966FF7 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public float CameraInOriginSpaceHeight => CameraInOriginSpacePos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = XROrigin_get_CameraInOriginSpacePos_mA25C4AECE774DCE217DF1AB838E9D82BB87BEE56(__this, /*hidden argument*/NULL);
		float L_1 = L_0.get_y_3();
		return L_1;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::MoveOffsetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// switch (CurrentTrackingOriginMode)
		int32_t L_1;
		L_1 = XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0030;
		}
	}
	{
		// MoveOffsetHeight(0f);
		XROrigin_MoveOffsetHeight_m89E6241C5D67CCD0AC4A166AA4599AADF39E895F(__this, (0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0023:
	{
		// MoveOffsetHeight(m_CameraYOffset);
		float L_4 = __this->get_m_CameraYOffset_11();
		XROrigin_MoveOffsetHeight_m89E6241C5D67CCD0AC4A166AA4599AADF39E895F(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0030:
	{
		// return;
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::MoveOffsetHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_MoveOffsetHeight_m89E6241C5D67CCD0AC4A166AA4599AADF39E895F (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, float ___y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_CameraFloorOffsetObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CameraFloorOffsetObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// var offsetTransform = m_CameraFloorOffsetObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_CameraFloorOffsetObject_9();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		// var desiredPosition = offsetTransform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = L_3;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// desiredPosition.y = y;
		float L_6 = ___y0;
		(&V_0)->set_y_3(L_6);
		// offsetTransform.localPosition = desiredPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_TryInitializeCamera_m8A470425D8369F6555D3C36C3335F9D8F82B40A4 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// m_CameraInitialized = SetupCamera();
		bool L_1;
		L_1 = XROrigin_SetupCamera_m63ECB705B6D6398F5B8B7C2EF7B33CB37C796BC4(__this, /*hidden argument*/NULL);
		__this->set_m_CameraInitialized_14(L_1);
		// if (!m_CameraInitialized & !m_CameraInitializing)
		bool L_2 = __this->get_m_CameraInitialized_14();
		bool L_3 = __this->get_m_CameraInitializing_15();
		if (!((int32_t)((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_0036;
		}
	}
	{
		// StartCoroutine(RepeatInitializeCamera());
		RuntimeObject* L_4;
		L_4 = XROrigin_RepeatInitializeCamera_mE77E233DAE27A9547E0BE478CC06ED6E51E8917A(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_SetupCamera_m63ECB705B6D6398F5B8B7C2EF7B33CB37C796BC4 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var initialized = true;
		V_0 = (bool)1;
		// SubsystemManager.GetInstances(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// if (s_InputSubsystems.Count > 0)
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_1 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_1, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		// foreach (var inputSubsystem in s_InputSubsystems)
		IL2CPP_RUNTIME_CLASS_INIT(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_3 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_3);
		Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  L_4;
		L_4 = List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14(L_3, /*hidden argument*/List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0026:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_5;
			L_5 = Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
			V_2 = L_5;
			// if (SetupCamera(inputSubsystem))
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_6 = V_2;
			bool L_7;
			L_7 = XROrigin_SetupCamera_mEB39C60D1AE12C2A25647E578B353E127C406726(__this, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_005d;
			}
		}

IL_0037:
		{
			// inputSubsystem.trackingOriginUpdated -= OnInputSubsystemTrackingOriginUpdated;
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_8 = V_2;
			Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_9 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
			Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_9, __this, (intptr_t)((intptr_t)XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
			NullCheck(L_8);
			XRInputSubsystem_remove_trackingOriginUpdated_m330F23CA8B04C50C56B120AF7387A2EA6B00E641(L_8, L_9, /*hidden argument*/NULL);
			// inputSubsystem.trackingOriginUpdated += OnInputSubsystemTrackingOriginUpdated;
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_10 = V_2;
			Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_11 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
			Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_11, __this, (intptr_t)((intptr_t)XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
			NullCheck(L_10);
			XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392(L_10, L_11, /*hidden argument*/NULL);
			// }
			goto IL_005f;
		}

IL_005d:
		{
			// initialized = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			bool L_12;
			L_12 = Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0026;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		// return initialized;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_SetupCamera_mEB39C60D1AE12C2A25647E578B353E127C406726 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___inputSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21BABB7D4D81546003053B7D1D3E1523E82A424A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral558296ACB55EF55350E59F922EE5DD3735E5F58F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (inputSubsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = ___inputSubsystem0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// var successful = true;
		V_0 = (bool)1;
		// switch (m_RequestedTrackingOriginMode)
		int32_t L_1 = __this->get_m_RequestedTrackingOriginMode_10();
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))) > ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_009e;
	}

IL_001c:
	{
		// CurrentTrackingOriginMode = inputSubsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4 = ___inputSubsystem0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_4, /*hidden argument*/NULL);
		XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680_inline(__this, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_00a0;
	}

IL_002a:
	{
		// var supportedModes = inputSubsystem.GetSupportedTrackingOriginModes();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_6 = ___inputSubsystem0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (supportedModes == TrackingOriginModeFlags.Unknown)
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// var equivalentFlagsMode = m_RequestedTrackingOriginMode == TrackingOriginMode.Device
		//     ? TrackingOriginModeFlags.Device
		//     : TrackingOriginModeFlags.Floor;
		int32_t L_9 = __this->get_m_RequestedTrackingOriginMode_10();
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		G_B11_0 = 2;
		goto IL_0043;
	}

IL_0042:
	{
		G_B11_0 = 1;
	}

IL_0043:
	{
		V_3 = G_B11_0;
		// if ((supportedModes & equivalentFlagsMode) == 0)
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		if (((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0094;
		}
	}
	{
		// m_RequestedTrackingOriginMode = TrackingOriginMode.NotSpecified;
		__this->set_m_RequestedTrackingOriginMode_10(0);
		// CurrentTrackingOriginMode = inputSubsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_12 = ___inputSubsystem0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_12, /*hidden argument*/NULL);
		XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680_inline(__this, L_13, /*hidden argument*/NULL);
		// Debug.LogWarning($"Attempting to set the tracking origin mode to {equivalentFlagsMode}, but that is not supported by the SDK." +
		//     $" Supported types: {supportedModes:F}. Using the current mode of {CurrentTrackingOriginMode} instead.", this);
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral558296ACB55EF55350E59F922EE5DD3735E5F58F, L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21;
		L_21 = XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA_inline(__this, /*hidden argument*/NULL);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral21BABB7D4D81546003053B7D1D3E1523E82A424A, L_20, L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(L_25, __this, /*hidden argument*/NULL);
		// }
		goto IL_00a0;
	}

IL_0094:
	{
		// successful = inputSubsystem.TrySetTrackingOriginMode(equivalentFlagsMode);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_26 = ___inputSubsystem0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		bool L_28;
		L_28 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// break;
		goto IL_00a0;
	}

IL_009e:
	{
		// return false;
		return (bool)0;
	}

IL_00a0:
	{
		// if (successful)
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_00a9;
		}
	}
	{
		// MoveOffsetHeight();
		XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC(__this, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// if (CurrentTrackingOriginMode == TrackingOriginModeFlags.Device || m_RequestedTrackingOriginMode == TrackingOriginMode.Device)
		int32_t L_30;
		L_30 = XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_31 = __this->get_m_RequestedTrackingOriginMode_10();
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00c2;
		}
	}

IL_00bb:
	{
		// successful = inputSubsystem.TryRecenter();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_32 = ___inputSubsystem0;
		NullCheck(L_32);
		bool L_33;
		L_33 = XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
	}

IL_00c2:
	{
		// return successful;
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnInputSubsystemTrackingOriginUpdated(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___inputSubsystem0, const RuntimeMethod* method)
{
	{
		// CurrentTrackingOriginMode = inputSubsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = ___inputSubsystem0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_0, /*hidden argument*/NULL);
		XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680_inline(__this, L_1, /*hidden argument*/NULL);
		// MoveOffsetHeight();
		XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.XR.CoreUtils.XROrigin::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XROrigin_RepeatInitializeCamera_mE77E233DAE27A9547E0BE478CC06ED6E51E8917A (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * L_0 = (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 *)il2cpp_codegen_object_new(U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4_il2cpp_TypeInfo_var);
		U3CRepeatInitializeCameraU3Ed__48__ctor_m38D16CB74A912FFAC7BDB663DAC73CCC66F353DB(L_0, 0, /*hidden argument*/NULL);
		U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::RotateAroundCameraUsingOriginUp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_RotateAroundCameraUsingOriginUp_mFBC31926C33A2A4BB0FB2CD37A5D6A2DB805C26D (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, float ___angleDegrees0, const RuntimeMethod* method)
{
	{
		// return RotateAroundCameraPosition(m_OriginBaseGameObject.transform.up, angleDegrees);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = ___angleDegrees0;
		bool L_4;
		L_4 = XROrigin_RotateAroundCameraPosition_mDFFA1FCA35ABE47B99085527C2DBF97141289EC3(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::RotateAroundCameraPosition(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_RotateAroundCameraPosition_mDFFA1FCA35ABE47B99085527C2DBF97141289EC3 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___angleDegrees1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Camera == null || m_OriginBaseGameObject == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_OriginBaseGameObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// m_OriginBaseGameObject.transform.RotateAround(m_Camera.transform.position, vector, angleDegrees);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_m_Camera_4();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___vector0;
		float L_10 = ___angleDegrees1;
		NullCheck(L_5);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_5, L_8, L_9, L_10, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUp_mF2000A84EAFDFA87164B64B19BC93324AB030C26 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationUp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_OriginBaseGameObject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (m_OriginBaseGameObject.transform.up == destinationUp)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___destinationUp0;
		bool L_6;
		L_6 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002a:
	{
		// var rigUp = Quaternion.FromToRotation(m_OriginBaseGameObject.transform.up, destinationUp);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___destinationUp0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// m_OriginBaseGameObject.transform.rotation = rigUp * transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_17, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUpCameraForward(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUpCameraForward_mC4723BFAD3FF3C9ABA7659A74C4CB10800A2C50A (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationUp0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationForward1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Camera != null && MatchOriginUp(destinationUp))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___destinationUp0;
		bool L_3;
		L_3 = XROrigin_MatchOriginUp_mF2000A84EAFDFA87164B64B19BC93324AB030C26(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		// var projectedCamForward = Vector3.ProjectOnPlane(m_Camera.transform.forward, destinationUp).normalized;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_m_Camera_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___destinationUp0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_ProjectOnPlane_m066BDEFD60B2828C4B531CD96C4DBFADF6B0EF3B(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// var signedAngle = Vector3.SignedAngle(projectedCamForward, destinationForward, destinationUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___destinationForward1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___destinationUp0;
		float L_12;
		L_12 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_9, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// RotateAroundCameraPosition(destinationUp, signedAngle);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___destinationUp0;
		float L_14 = V_0;
		bool L_15;
		L_15 = XROrigin_RotateAroundCameraPosition_mDFFA1FCA35ABE47B99085527C2DBF97141289EC3(__this, L_13, L_14, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUpOriginForward(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUpOriginForward_m22ADB294CA783226D0C50DBDCEE0586A85AC9044 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationUp0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destinationForward1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (m_OriginBaseGameObject != null && MatchOriginUp(destinationUp))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___destinationUp0;
		bool L_3;
		L_3 = XROrigin_MatchOriginUp_mF2000A84EAFDFA87164B64B19BC93324AB030C26(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// var signedAngle = Vector3.SignedAngle(m_OriginBaseGameObject.transform.forward, destinationForward, destinationUp);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___destinationForward1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___destinationUp0;
		float L_9;
		L_9 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// RotateAroundCameraPosition(destinationUp, signedAngle);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___destinationUp0;
		float L_11 = V_0;
		bool L_12;
		L_12 = XROrigin_RotateAroundCameraPosition_mDFFA1FCA35ABE47B99085527C2DBF97141289EC3(__this, L_10, L_11, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::MoveCameraToWorldLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MoveCameraToWorldLocation_mBF588A0488903F9FEF0F70015E28772522794397 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___desiredWorldLocation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Camera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// var rot = Matrix4x4.Rotate(m_Camera.transform.rotation);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_4();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var delta = rot.MultiplyPoint3x4(OriginInCameraSpacePos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = XROrigin_get_OriginInCameraSpacePos_mC934EF4E3E14C7DC72A88E058C39F7A40104174C(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// m_OriginBaseGameObject.transform.position = delta + desiredWorldLocation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_OriginBaseGameObject_8();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___desiredWorldLocation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_Awake_mB3295310096FFDA1017D3226E81748B301EB93FD (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121_m54305E82B8992F7E6CCB558776E91B9CD4409E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D2453D8443A6065C34CE028B3CEFAABB0B25CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0963CC21FBA9B63973BFBAC23D8DE1C3294DCF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB91D3E4E9BA972BB951EE86D7F8FF9C99BD9CEE);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * V_1 = NULL;
	{
		// if (m_CameraFloorOffsetObject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CameraFloorOffsetObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogWarning("No Camera Floor Offset Object specified for XR Origin, using attached GameObject.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteral71D2453D8443A6065C34CE028B3CEFAABB0B25CF, __this, /*hidden argument*/NULL);
		// m_CameraFloorOffsetObject = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_m_CameraFloorOffsetObject_9(L_2);
	}

IL_0025:
	{
		// if (m_Camera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		// var mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_5;
		// if (mainCamera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// m_Camera = mainCamera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = V_0;
		__this->set_m_Camera_4(L_8);
		goto IL_0056;
	}

IL_004b:
	{
		// Debug.LogWarning("No Main Camera is found for XR Origin, please assign the Camera field manually.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(_stringLiteralD0963CC21FBA9B63973BFBAC23D8DE1C3294DCF5, __this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// TrackablesParent = (new GameObject("Trackables")).transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_9, _stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		XROrigin_set_TrackablesParent_mE069D24282C732C5164D03FEEDBA8C9FD8AF323E_inline(__this, L_10, /*hidden argument*/NULL);
		// TrackablesParent.SetParent(transform, false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_11, L_12, (bool)0, /*hidden argument*/NULL);
		// TrackablesParent.localPosition = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_13, L_14, /*hidden argument*/NULL);
		// TrackablesParent.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_15, L_16, /*hidden argument*/NULL);
		// TrackablesParent.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_17, L_18, /*hidden argument*/NULL);
		// if (m_Camera)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0102;
		}
	}
	{
		// var trackedPoseDriver = m_Camera.GetComponent<UnityEngine.InputSystem.XR.TrackedPoseDriver>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_m_Camera_4();
		NullCheck(L_21);
		TrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121 * L_22;
		L_22 = Component_GetComponent_TisTrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121_m54305E82B8992F7E6CCB558776E91B9CD4409E97(L_21, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_tA3843AFCF4D239CD7C3E594FD43A07B100AAE121_m54305E82B8992F7E6CCB558776E91B9CD4409E97_RuntimeMethod_var);
		// var trackedPoseDriverOld = m_Camera.GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23 = __this->get_m_Camera_4();
		NullCheck(L_23);
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_24;
		L_24 = Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C(L_23, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8_m7D01F24B54743E3D59A0CEE3C59DB545CF28600C_RuntimeMethod_var);
		V_1 = L_24;
		// if (trackedPoseDriver == null && trackedPoseDriverOld == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0102;
		}
	}
	{
		TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		// Debug.LogWarning(
		//     $"Camera \"{m_Camera.name}\" does not use a Tracked Pose Driver (Input System), " +
		//     "so its transform will not be updated by an XR device.  In order for this to be " +
		//     "updated, please add a Tracked Pose Driver (Input System) with bindings for position and rotation of the center eye.", this);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28 = __this->get_m_Camera_4();
		NullCheck(L_28);
		String_t* L_29;
		L_29 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F, L_29, _stringLiteralFB91D3E4E9BA972BB951EE86D7F8FF9C99BD9CEE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mE6AF3EFCF84F2296622CD42FBF9EEAF07244C0A8(L_30, __this, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// UnityEngine.Pose Unity.XR.CoreUtils.XROrigin::GetCameraOriginPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XROrigin_GetCameraOriginPose_m65F340AB82A12B79C1CE8A2239C49A4FCA34C3F5 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		// var localOriginPose = Pose.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		V_0 = L_0;
		// var parent = m_Camera.transform.parent;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_m_Camera_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// return parent
		//     ? parent.TransformPose(localOriginPose)
		//     : localOriginPose;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = V_0;
		return L_6;
	}

IL_0021:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_1;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = V_0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9;
		L_9 = TransformExtensions_TransformPose_mEB3D81D8D439A0CB8C08B791A180B78542978AAA(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnEnable_m85878F36D9F87D746996935D8BB5A6B1335E6201 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected void OnEnable() => Application.onBeforeRender += OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, __this, (intptr_t)((intptr_t)XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnDisable_mCD6CC559152D9231118E30D97F253D6B5B0AE50F (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected void OnDisable() => Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, __this, (intptr_t)((intptr_t)XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnBeforeRender_m20A25D128427DB95D8645B7B0C42CEC96547023E (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * G_B5_0 = NULL;
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * G_B4_0 = NULL;
	{
		// if (m_Camera)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// var pose = GetCameraOriginPose();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = XROrigin_GetCameraOriginPose_m65F340AB82A12B79C1CE8A2239C49A4FCA34C3F5(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// TrackablesParent.position = pose.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_position_0();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_5, /*hidden argument*/NULL);
		// TrackablesParent.rotation = pose.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rotation_1();
		NullCheck(L_6);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (TrackablesParent.hasChanged)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = Transform_get_hasChanged_m59490E3CAC42DF8CB2BCDFC0ED75DB6F89432F06(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// TrackablesParentTransformChanged?.Invoke(
		//     new ARTrackablesParentTransformChangedEventArgs(this, TrackablesParent));
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_11 = __this->get_TrackablesParentTransformChanged_6();
		Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_004f;
		}
	}
	{
		goto IL_0060;
	}

IL_004f:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ARTrackablesParentTransformChangedEventArgs__ctor_m90A574F56EAF0228BD1D7CBFDAF682B8E58F7F9D((&L_14), __this, L_13, /*hidden argument*/NULL);
		NullCheck(G_B5_0);
		Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194(G_B5_0, L_14, /*hidden argument*/Action_1_Invoke_m2B2CA538499FD62D49CD682C523D38D4059FB194_RuntimeMethod_var);
	}

IL_0060:
	{
		// TrackablesParent.hasChanged = false;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_hasChanged_mD1CDCAE366DB514FBECD9DAAED0F7834029E1304(L_15, (bool)0, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnValidate_m107F310112D1458AD2F8E44CD064359B9476BEFE (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_OriginBaseGameObject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_OriginBaseGameObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// m_OriginBaseGameObject = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_m_OriginBaseGameObject_8(L_2);
	}

IL_001a:
	{
		// if (Application.isPlaying && isActiveAndEnabled)
		bool L_3;
		L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4;
		L_4 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (IsModeStale())
		bool L_5;
		L_5 = XROrigin_U3COnValidateU3Eg__IsModeStaleU7C60_0_mFD6964C954EA4827D65DB27D63D003A16594CFB8(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// TryInitializeCamera();
		XROrigin_TryInitializeCamera_m8A470425D8369F6555D3C36C3335F9D8F82B40A4(__this, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		// MoveOffsetHeight();
		XROrigin_MoveOffsetHeight_mE85E434BC9ECF1D224C9A7506B814A3D37B2F3EC(__this, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_Start_m3E862070874567EBC71CEDFDFCE96346D89872A9 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// TryInitializeCamera();
		XROrigin_TryInitializeCamera_m8A470425D8369F6555D3C36C3335F9D8F82B40A4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin_OnDestroy_m8F5C01F5CFB4BD23FCC83EA915398067189613B2 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var inputSubsystem in s_InputSubsystems)
		IL2CPP_RUNTIME_CLASS_INIT(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_0);
		Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  L_1;
		L_1 = List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14(L_0, /*hidden argument*/List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_000d:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_2;
			L_2 = Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
			V_1 = L_2;
			// if (inputSubsystem != null)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3 = V_1;
			if (!L_3)
			{
				goto IL_002a;
			}
		}

IL_0018:
		{
			// inputSubsystem.trackingOriginUpdated -= OnInputSubsystemTrackingOriginUpdated;
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4 = V_1;
			Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_5 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
			Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_5, __this, (intptr_t)((intptr_t)XROrigin_OnInputSubsystemTrackingOriginUpdated_m132A24B0235B1E82289B45F7B5B9132A19A85719_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
			NullCheck(L_4);
			XRInputSubsystem_remove_trackingOriginUpdated_m330F23CA8B04C50C56B120AF7387A2EA6B00E641(L_4, L_5, /*hidden argument*/NULL);
		}

IL_002a:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			bool L_6;
			L_6 = Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000d;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin__ctor_mC64C36F5C94F69F20DDCC912292CB0E6614ED40B (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// float m_CameraYOffset = k_DefaultCameraYOffset;
		__this->set_m_CameraYOffset_11((1.11759996f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XROrigin__cctor_mF110E2E7581DC702D61F2AAE789091C9755F244A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<XRInputSubsystem> s_InputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_0, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->set_s_InputSubsystems_13(L_0);
		return;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin::<OnValidate>g__IsModeStale|60_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_U3COnValidateU3Eg__IsModeStaleU7C60_0_mFD6964C954EA4827D65DB27D63D003A16594CFB8 (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// if (s_InputSubsystems.Count > 0)
		IL2CPP_RUNTIME_CLASS_INIT(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_0, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		// foreach (var inputSubsystem in s_InputSubsystems)
		IL2CPP_RUNTIME_CLASS_INIT(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_2 = ((XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields*)il2cpp_codegen_static_fields_for(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_13();
		NullCheck(L_2);
		Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4  L_3;
		L_3 = List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14(L_2, /*hidden argument*/List_1_GetEnumerator_m60D07E581E67D66C7AB66589BE40C5EC7C158C14_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001a:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4;
			L_4 = Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_inline((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m356F358FCB2BC810714C0A2DD14A384C336FD9DB_RuntimeMethod_var);
			V_1 = L_4;
			// switch (m_RequestedTrackingOriginMode)
			int32_t L_5 = __this->get_m_RequestedTrackingOriginMode_10();
			V_3 = L_5;
			int32_t L_6 = V_3;
			switch (L_6)
			{
				case 0:
				{
					goto IL_003d;
				}
				case 1:
				{
					goto IL_0042;
				}
				case 2:
				{
					goto IL_0046;
				}
			}
		}

IL_003b:
		{
			goto IL_004a;
		}

IL_003d:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x7B, FINALLY_006b);
		}

IL_0042:
		{
			// equivalentFlagsMode = TrackingOriginModeFlags.Device;
			V_2 = 1;
			// break;
			goto IL_004f;
		}

IL_0046:
		{
			// equivalentFlagsMode = TrackingOriginModeFlags.Floor;
			V_2 = 2;
			// break;
			goto IL_004f;
		}

IL_004a:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x7B, FINALLY_006b);
		}

IL_004f:
		{
			// if (inputSubsystem != null && inputSubsystem.GetTrackingOriginMode() != equivalentFlagsMode)
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_7 = V_1;
			if (!L_7)
			{
				goto IL_0060;
			}
		}

IL_0052:
		{
			XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_2;
			if ((((int32_t)L_9) == ((int32_t)L_10)))
			{
				goto IL_0060;
			}
		}

IL_005b:
		{
			// return true;
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x7B, FINALLY_006b);
		}

IL_0060:
		{
			// foreach (var inputSubsystem in s_InputSubsystems)
			bool L_11;
			L_11 = Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m804B4A4FCD3F45ED367141E7A8F5D29E32F056E3_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_001a;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x79, FINALLY_006b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006b;
	}

FINALLY_006b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103((Enumerator_t543EC5952B8731B74913C3AC3E04BDCCB88EA7C4 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE528534AED8772C019A2ED4DB2D5DE9238A41103_RuntimeMethod_var);
		IL2CPP_END_FINALLY(107)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// return false;
		return (bool)0;
	}

IL_007b:
	{
		// }
		bool L_12 = V_4;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__48__ctor_m38D16CB74A912FFAC7BDB663DAC73CCC66F353DB (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__48_System_IDisposable_Dispose_m34D86CC2B00D547934EAB0050158EE4FC2316EB2 (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRepeatInitializeCameraU3Ed__48_MoveNext_m2A28BAD8A5F265425E6CED138B0ECD941C8C6D6A (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_CameraInitializing = true;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_m_CameraInitializing_15((bool)1);
		goto IL_0052;
	}

IL_0027:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!m_CameraInitialized)
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_m_CameraInitialized_14();
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		// m_CameraInitialized = SetupCamera();
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_7 = V_1;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = XROrigin_SetupCamera_m63ECB705B6D6398F5B8B7C2EF7B33CB37C796BC4(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_m_CameraInitialized_14(L_9);
	}

IL_0052:
	{
		// while (!m_CameraInitialized)
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_m_CameraInitialized_14();
		if (!L_11)
		{
			goto IL_0027;
		}
	}
	{
		// m_CameraInitializing = false;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_12 = V_1;
		NullCheck(L_12);
		L_12->set_m_CameraInitializing_15((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m85F41DF9153BE60931348D9DA5A5A0B0F5CB24E0 (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__48_System_Collections_IEnumerator_Reset_m034DF1C46AABE33936127AE4406DAB4F078F88D4 (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRepeatInitializeCameraU3Ed__48_System_Collections_IEnumerator_Reset_m034DF1C46AABE33936127AE4406DAB4F078F88D4_RuntimeMethod_var)));
	}
}
// System.Object Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__48_System_Collections_IEnumerator_get_Current_m7C83C7C74A3582ABE2F428AB355A4C5B175B9E09 (U3CRepeatInitializeCameraU3Ed__48_t386D21B9C7299986CD97EEBE582F1BC089608EA4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ARTrackablesParentTransformChangedEventArgs_get_Origin_m635FF91C20A6D6C0514EABDDED14289D01BDC0A5_inline (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method)
{
	{
		// public XROrigin Origin { get; }
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0 = __this->get_U3COriginU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ARTrackablesParentTransformChangedEventArgs_get_TrackablesParent_mC93ACA08A0A5E3F00A58F63EF932BD6AA768BA43_inline (ARTrackablesParentTransformChangedEventArgs_tC853D99AA0A2AD1501D6DA1FE339F39AE8B5069C * __this, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTrackablesParentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_BindAction_mC84020F3A9209984D2268B991678A608B21DBDE9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	{
		// public Action BindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CBindActionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBinding_set_BindAction_mBDF58F3C06D243CD7774B052BB5B0A90F5996D78_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action BindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3CBindActionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * EventBinding_get_UnbindAction_m0F29A3DEC5CAC0716802A686F982DC6739C8EAA9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, const RuntimeMethod* method)
{
	{
		// public Action UnbindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3CUnbindActionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBinding_set_UnbindAction_m0F0D30CC2B17576CA59618091D698F91C0FA28E9_inline (EventBinding_tA270F02E114C5E3F306ADA84248C67FC7F348BC0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action UnbindAction { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3CUnbindActionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XROrigin_get_CurrentTrackingOriginMode_m90D206E17CF4EBD3DDD281F526E43AA3A1A84AFA_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags CurrentTrackingOriginMode { get; private set; }
		int32_t L_0 = __this->get_U3CCurrentTrackingOriginModeU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROrigin_set_CurrentTrackingOriginMode_mE1F8C7BD93763B7503A9F1A66224B1E99AFB1680_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags CurrentTrackingOriginMode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCurrentTrackingOriginModeU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XROrigin_set_TrackablesParent_mE069D24282C732C5164D03FEEDBA8C9FD8AF323E_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CTrackablesParentU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * XROrigin_get_TrackablesParent_m1762CFBDDF007C80B97379835702D8607DB4F3E0_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

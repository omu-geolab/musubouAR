#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC;
// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>
struct IEnumerator_1_tB2F9F212D4DE89F44807A373DCC85C8191925AA6;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// UnityEngine.Rendering.Universal.ScriptableRenderer[]
struct ScriptableRendererU5BU5D_tE2D152F44EBC5F3F3BDEF3A00B00EE07D0C12D90;
// UnityEngine.Rendering.Universal.ScriptableRendererData[]
struct ScriptableRendererDataU5BU5D_tB15BFF39555534E840B4D39EB79E96E7C8942D47;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// StylizedWater.CausticsFeature
struct CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E;
// StylizedWater.CausticsPass
struct CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_tE699E87CDF753430EFA591B80E54D71A3624A083;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// StylizedWater.PlanarReflections
struct PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA;
// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133;
// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150;
// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// StylizedWater.StylizedWaterURP
struct StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// StylizedWater.CausticsFeature/CausticsSettings
struct CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC;
// StylizedWater.PlanarReflections/PlanarReflectionSettingData
struct PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBufferPool_tE2670FC4B01DFB04AE3774B0F7FE0B809A0A7FD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalRenderPipeline_t4FA4E16BFFB0A3C09A811365C66D3158CAA4F981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2____752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0333801DDDE292CC735049B0DFFCBDA72039BCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral041D9147FCC3085B0EC2BDA3C11F3A181998AD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A58035A03D99DED1301B952DBC00E8FC8741618;
IL2CPP_EXTERN_C String_t* _stringLiteral15DD3F54D20A90255F364735B76B52BBD05DECE1;
IL2CPP_EXTERN_C String_t* _stringLiteral16A17CF118CF475C2757904B9386B03BF0251B23;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1CEBE15C5797209AA3C83FD132C029D3FAE795;
IL2CPP_EXTERN_C String_t* _stringLiteral1F01BFC47DFA259EC5D18B9746BAF953B94F30D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0AB2F3EEE43CF59599847A13D381166DD9E000;
IL2CPP_EXTERN_C String_t* _stringLiteral314314AAF9B66BEEEFD467D27B1D9F9FCE9847EA;
IL2CPP_EXTERN_C String_t* _stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral403DBED855A029F46C7C6E6F7AE94262F5EE2A26;
IL2CPP_EXTERN_C String_t* _stringLiteral40F2B4EDB1966ECF89382516690F31A046BB9068;
IL2CPP_EXTERN_C String_t* _stringLiteral410E223397B2B0F15229A74B8FA14A96ADC4C8CB;
IL2CPP_EXTERN_C String_t* _stringLiteral421123D5FE201AAA768A7B652962605BD2174033;
IL2CPP_EXTERN_C String_t* _stringLiteral43B5732603D298425067F69269F47B9B8F6D5763;
IL2CPP_EXTERN_C String_t* _stringLiteral493FC5A67E3AA357259B8025A047D55576652948;
IL2CPP_EXTERN_C String_t* _stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390;
IL2CPP_EXTERN_C String_t* _stringLiteral56D35AFF824670621BA8FDD4EF4BCD302E75A870;
IL2CPP_EXTERN_C String_t* _stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F;
IL2CPP_EXTERN_C String_t* _stringLiteral599631BF813AD51AEFC83394541DF8C491ED8914;
IL2CPP_EXTERN_C String_t* _stringLiteral5EC36ACD8F1D3C13901B44A0B1F4C86AE56EFCF2;
IL2CPP_EXTERN_C String_t* _stringLiteral5F42FFAE2A925A5F5E591BBAC0535D43D925A91B;
IL2CPP_EXTERN_C String_t* _stringLiteral600C8E8AEDCC3F78FE5416A5E8D6176B333DA6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370;
IL2CPP_EXTERN_C String_t* _stringLiteral64FD1BBE4BB9A29456916871051EB15AA423F35F;
IL2CPP_EXTERN_C String_t* _stringLiteral6762219BFDE45F809091535BC69D45B777224781;
IL2CPP_EXTERN_C String_t* _stringLiteral67877C115DDC7712D22845AFFF07A1D84D44D248;
IL2CPP_EXTERN_C String_t* _stringLiteral69F3FBFAC83F9BFC07560D56676CBDB4E6AA9167;
IL2CPP_EXTERN_C String_t* _stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF7063852E0105D54A62FB8084245ED321886B1;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral701478AFDFECD0D2F0AE895576A1F0AE93D28F07;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7636A23DF21CCABAB0C9C75279FA31671F9EC3A4;
IL2CPP_EXTERN_C String_t* _stringLiteral76502E125FBDCAF3377A445CD9CBAF7C388DFE9E;
IL2CPP_EXTERN_C String_t* _stringLiteral7801D88C95FC982F2D7C9A1DC2E325E6E7387B50;
IL2CPP_EXTERN_C String_t* _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558;
IL2CPP_EXTERN_C String_t* _stringLiteral79886FA9CF59122D0B1DBE35D4DCF5F983BDA127;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2D412EE5B6CCCAE5B01EDA7075073582615087;
IL2CPP_EXTERN_C String_t* _stringLiteral8473AA138FB4CF2AC86AA6DE9A2F45D170E6FF29;
IL2CPP_EXTERN_C String_t* _stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829;
IL2CPP_EXTERN_C String_t* _stringLiteral8952A863A79819623CEF1FE142A6BADC18FDA38E;
IL2CPP_EXTERN_C String_t* _stringLiteral8998079511B0C081C91832B55C008102C6773BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral8B66A817222674DBBC174A6CE8DAAB2B9E89ECA8;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE52B0F2BC38AF814E21FAD43C469A4D257049F;
IL2CPP_EXTERN_C String_t* _stringLiteral8CEFC794E274C44D1A50BFC9D1B153E485F54FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCA9E52357DC1DFFC6C5F25BB099BF666FE8337;
IL2CPP_EXTERN_C String_t* _stringLiteral995CE9467B43081AF33F6037C559EF61760235E6;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5E2E5757F5B0BE63E44862CF266CCE9A81C12C;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD8F962F47C230B8F517A3BDE324BB42E6283DA;
IL2CPP_EXTERN_C String_t* _stringLiteral9BFCD84CA1BCE01A10B8D732418255EE7B29AEE6;
IL2CPP_EXTERN_C String_t* _stringLiteral9DAC0A1CC978C94BA1C2BBFA83DCBB5B90EAC2BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9DCACED0E613518862BFA93FF611943EF9AEEB01;
IL2CPP_EXTERN_C String_t* _stringLiteralA01E7D2DD7693408B1D1677571D3BF55C24FB2D3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A83BBB4568E6570EC9B686BCC91CC5799FA592;
IL2CPP_EXTERN_C String_t* _stringLiteralA66B2B71EBE542C0D46C6CF97E6D64E3DD950406;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062;
IL2CPP_EXTERN_C String_t* _stringLiteralB33F539A9E01915F4EB26ED03378C46E151061CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0;
IL2CPP_EXTERN_C String_t* _stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC583F47E5B425A079958150F0455B594B984249A;
IL2CPP_EXTERN_C String_t* _stringLiteralC62386AC1C3EE21307A94D8026EB3BFC38722050;
IL2CPP_EXTERN_C String_t* _stringLiteralC845047E036C62A1F573242E73A59A65DB38BA59;
IL2CPP_EXTERN_C String_t* _stringLiteralC851DCB31C58F247BD272816D02231576FA2D18E;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFBE1B79062B2D4922EB35CCB19FF40B9668939;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD1A05B6469D2356B1E7DF6E35DBF6330C3D43146;
IL2CPP_EXTERN_C String_t* _stringLiteralD3481A898F4378325D0E2C2B6CE721959464472E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DFEFB7B8F2C6C540A884CE26E2F22F478198E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD72F5686FE05C1B386E364E7FBA591559CB3E0CA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA3F3B9E65DA46E11654DC27B3C37BD037640BF;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA54D4E0E9BB6B83D60BF85D0FE37CAF05A26A3;
IL2CPP_EXTERN_C String_t* _stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE20DFD3A35F702F8FD36471E40D2F2EC2C77C799;
IL2CPP_EXTERN_C String_t* _stringLiteralE3321A3E07AB7760D7942B139137B6F6C4966F61;
IL2CPP_EXTERN_C String_t* _stringLiteralE6801E0E6BB47D939B5739EFE649943ADBC4FA05;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF604896EC5C3A469F7F7484ACA069166072111C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B8F322273F1F56538A17A91B9C676502616038;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m1EE97B0A1B03F8D1BFE7BAC68AEB3053D84C1B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_m2AA8EE310FFE7E914D9FDA380CEB307873615838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE67186FB898D2C0138A3188CAF1AD6FB994F2048 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// StylizedWater.PlanarReflections/PlanarReflectionSettingData
struct  PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301  : public RuntimeObject
{
public:
	// System.Boolean StylizedWater.PlanarReflections/PlanarReflectionSettingData::fog
	bool ___fog_0;
	// System.Int32 StylizedWater.PlanarReflections/PlanarReflectionSettingData::maximumLODLevel
	int32_t ___maximumLODLevel_1;
	// System.Single StylizedWater.PlanarReflections/PlanarReflectionSettingData::lodBias
	float ___lodBias_2;

public:
	inline static int32_t get_offset_of_fog_0() { return static_cast<int32_t>(offsetof(PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301, ___fog_0)); }
	inline bool get_fog_0() const { return ___fog_0; }
	inline bool* get_address_of_fog_0() { return &___fog_0; }
	inline void set_fog_0(bool value)
	{
		___fog_0 = value;
	}

	inline static int32_t get_offset_of_maximumLODLevel_1() { return static_cast<int32_t>(offsetof(PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301, ___maximumLODLevel_1)); }
	inline int32_t get_maximumLODLevel_1() const { return ___maximumLODLevel_1; }
	inline int32_t* get_address_of_maximumLODLevel_1() { return &___maximumLODLevel_1; }
	inline void set_maximumLODLevel_1(int32_t value)
	{
		___maximumLODLevel_1 = value;
	}

	inline static int32_t get_offset_of_lodBias_2() { return static_cast<int32_t>(offsetof(PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301, ___lodBias_2)); }
	inline float get_lodBias_2() const { return ___lodBias_2; }
	inline float* get_address_of_lodBias_2() { return &___lodBias_2; }
	inline void set_lodBias_2(float value)
	{
		___lodBias_2 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct  ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B__padding[24];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2
	__StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B  ___752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0;

public:
	inline static int32_t get_offset_of_U3752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2_StaticFields, ___752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0)); }
	inline __StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B  get_U3752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0() const { return ___752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0; }
	inline __StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B * get_address_of_U3752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0() { return &___752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0; }
	inline void set_U3752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0(__StaticArrayInitTypeSizeU3D24_t562F878E60F1DB952B12430D7E060AEA774D4B1B  value)
	{
		___752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.AntialiasingMode
struct  AntialiasingMode_t336A7E5CB797088B903DAE8FA35985B5E8254E6E 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.AntialiasingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AntialiasingMode_t336A7E5CB797088B903DAE8FA35985B5E8254E6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.AntialiasingQuality
struct  AntialiasingQuality_tA9250E9D89BFE78494D4A9445A7BACEF547AB8C8 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.AntialiasingQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AntialiasingQuality_tA9250E9D89BFE78494D4A9445A7BACEF547AB8C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.CameraOverrideOption
struct  CameraOverrideOption_t22346D7F8F089EC16B312D089ABBAA47B875FCB2 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.CameraOverrideOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraOverrideOption_t22346D7F8F089EC16B312D089ABBAA47B875FCB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.CameraRenderType
struct  CameraRenderType_tEBC464390BF6189A8FFB881742F5F1FECA40249D 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.CameraRenderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraRenderType_tEBC464390BF6189A8FFB881742F5F1FECA40249D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraType
struct  CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22 
{
public:
	// System.Int32 UnityEngine.CameraType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ClearFlag
struct  ClearFlag_t2C4E7C8E97B0911D3F71CAE6FD5EAB9A33018532 
{
public:
	// System.Int32 UnityEngine.Rendering.ClearFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClearFlag_t2C4E7C8E97B0911D3F71CAE6FD5EAB9A33018532, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ColorGradingMode
struct  ColorGradingMode_t7F456D8C2AB24E5F82915D791241C2219EFBFC05 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ColorGradingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorGradingMode_t7F456D8C2AB24E5F82915D791241C2219EFBFC05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CubemapFace
struct  CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullingResults
struct  CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760 
{
public:
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_tE699E87CDF753430EFA591B80E54D71A3624A083 * ___m_AllocationInfo_1;

public:
	inline static int32_t get_offset_of_ptr_0() { return static_cast<int32_t>(offsetof(CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760, ___ptr_0)); }
	inline intptr_t get_ptr_0() const { return ___ptr_0; }
	inline intptr_t* get_address_of_ptr_0() { return &___ptr_0; }
	inline void set_ptr_0(intptr_t value)
	{
		___ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocationInfo_1() { return static_cast<int32_t>(offsetof(CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760, ___m_AllocationInfo_1)); }
	inline CullingAllocationInfo_tE699E87CDF753430EFA591B80E54D71A3624A083 * get_m_AllocationInfo_1() const { return ___m_AllocationInfo_1; }
	inline CullingAllocationInfo_tE699E87CDF753430EFA591B80E54D71A3624A083 ** get_address_of_m_AllocationInfo_1() { return &___m_AllocationInfo_1; }
	inline void set_m_AllocationInfo_1(CullingAllocationInfo_tE699E87CDF753430EFA591B80E54D71A3624A083 * value)
	{
		___m_AllocationInfo_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// UnityEngine.Rendering.Universal.Downsampling
struct  Downsampling_t191EEAEE3ADFB09304B918D5285FC4EB6E3EEF4D 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.Downsampling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Downsampling_t191EEAEE3ADFB09304B918D5285FC4EB6E3EEF4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.LightRenderingMode
struct  LightRenderingMode_t3ACCF7D50613E3F6D10A930ACD33F10C0DBD5546 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.LightRenderingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightRenderingMode_t3ACCF7D50613E3F6D10A930ACD33F10C0DBD5546, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.MsaaQuality
struct  MsaaQuality_t5BE6ACAAACB66CC54E2523B7B19FB8FF5DAC1876 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.MsaaQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MsaaQuality_t5BE6ACAAACB66CC54E2523B7B19FB8FF5DAC1876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Rendering.PerObjectData
struct  PerObjectData_t150ACB02EC862851E065E229889031FFB5AB418C 
{
public:
	// System.Int32 UnityEngine.Rendering.PerObjectData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PerObjectData_t150ACB02EC862851E065E229889031FFB5AB418C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.PipelineDebugLevel
struct  PipelineDebugLevel_tF7FD7CA110BBCAD2BBF52D3717F37E7388AC3B9C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.PipelineDebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PipelineDebugLevel_tF7FD7CA110BBCAD2BBF52D3717F37E7388AC3B9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.RenderPassEvent
struct  RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderPassEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderPassEvent_tA78EC5DDCD3BB90631B4799E949962AC19E48B4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.RendererType
struct  RendererType_t2C52F62CF6217DA9ABA69EE226EE744CA0CD373C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RendererType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RendererType_t2C52F62CF6217DA9ABA69EE226EE744CA0CD373C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;

public:
	inline static int32_t get_offset_of_m_Ptr_1() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D, ___m_Ptr_1)); }
	inline intptr_t get_m_Ptr_1() const { return ___m_Ptr_1; }
	inline intptr_t* get_address_of_m_Ptr_1() { return &___m_Ptr_1; }
	inline void set_m_Ptr_1(intptr_t value)
	{
		___m_Ptr_1 = value;
	}
};

struct ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___kRenderTypeTag_0;

public:
	inline static int32_t get_offset_of_kRenderTypeTag_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields, ___kRenderTypeTag_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_kRenderTypeTag_0() const { return ___kRenderTypeTag_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_kRenderTypeTag_0() { return &___kRenderTypeTag_0; }
	inline void set_kRenderTypeTag_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___kRenderTypeTag_0 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderPassInput
struct  ScriptableRenderPassInput_tEDC08733C6ABB031D0ADDF7BD80F0345FC93284C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPassInput::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScriptableRenderPassInput_tEDC08733C6ABB031D0ADDF7BD80F0345FC93284C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ShaderVariantLogLevel
struct  ShaderVariantLogLevel_t76AEA7AE868F8AEE6569E3D227B33DED317E6097 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ShaderVariantLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaderVariantLogLevel_t76AEA7AE868F8AEE6569E3D227B33DED317E6097, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ShadowCascadesOption
struct  ShadowCascadesOption_t49C2C46CF697DB62CDAB13B294CFA611D649B9F1 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ShadowCascadesOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCascadesOption_t49C2C46CF697DB62CDAB13B294CFA611D649B9F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ShadowData
struct  ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E 
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsMainLightShadows
	bool ___supportsMainLightShadows_0;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::requiresScreenSpaceShadowResolve
	bool ___requiresScreenSpaceShadowResolve_1;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapWidth
	int32_t ___mainLightShadowmapWidth_2;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapHeight
	int32_t ___mainLightShadowmapHeight_3;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesCount
	int32_t ___mainLightShadowCascadesCount_4;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesSplit
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mainLightShadowCascadesSplit_5;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsAdditionalLightShadows
	bool ___supportsAdditionalLightShadows_6;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapWidth
	int32_t ___additionalLightsShadowmapWidth_7;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapHeight
	int32_t ___additionalLightsShadowmapHeight_8;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsSoftShadows
	bool ___supportsSoftShadows_9;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::shadowmapDepthBufferBits
	int32_t ___shadowmapDepthBufferBits_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.Rendering.Universal.ShadowData::bias
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___bias_11;

public:
	inline static int32_t get_offset_of_supportsMainLightShadows_0() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___supportsMainLightShadows_0)); }
	inline bool get_supportsMainLightShadows_0() const { return ___supportsMainLightShadows_0; }
	inline bool* get_address_of_supportsMainLightShadows_0() { return &___supportsMainLightShadows_0; }
	inline void set_supportsMainLightShadows_0(bool value)
	{
		___supportsMainLightShadows_0 = value;
	}

	inline static int32_t get_offset_of_requiresScreenSpaceShadowResolve_1() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___requiresScreenSpaceShadowResolve_1)); }
	inline bool get_requiresScreenSpaceShadowResolve_1() const { return ___requiresScreenSpaceShadowResolve_1; }
	inline bool* get_address_of_requiresScreenSpaceShadowResolve_1() { return &___requiresScreenSpaceShadowResolve_1; }
	inline void set_requiresScreenSpaceShadowResolve_1(bool value)
	{
		___requiresScreenSpaceShadowResolve_1 = value;
	}

	inline static int32_t get_offset_of_mainLightShadowmapWidth_2() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___mainLightShadowmapWidth_2)); }
	inline int32_t get_mainLightShadowmapWidth_2() const { return ___mainLightShadowmapWidth_2; }
	inline int32_t* get_address_of_mainLightShadowmapWidth_2() { return &___mainLightShadowmapWidth_2; }
	inline void set_mainLightShadowmapWidth_2(int32_t value)
	{
		___mainLightShadowmapWidth_2 = value;
	}

	inline static int32_t get_offset_of_mainLightShadowmapHeight_3() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___mainLightShadowmapHeight_3)); }
	inline int32_t get_mainLightShadowmapHeight_3() const { return ___mainLightShadowmapHeight_3; }
	inline int32_t* get_address_of_mainLightShadowmapHeight_3() { return &___mainLightShadowmapHeight_3; }
	inline void set_mainLightShadowmapHeight_3(int32_t value)
	{
		___mainLightShadowmapHeight_3 = value;
	}

	inline static int32_t get_offset_of_mainLightShadowCascadesCount_4() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___mainLightShadowCascadesCount_4)); }
	inline int32_t get_mainLightShadowCascadesCount_4() const { return ___mainLightShadowCascadesCount_4; }
	inline int32_t* get_address_of_mainLightShadowCascadesCount_4() { return &___mainLightShadowCascadesCount_4; }
	inline void set_mainLightShadowCascadesCount_4(int32_t value)
	{
		___mainLightShadowCascadesCount_4 = value;
	}

	inline static int32_t get_offset_of_mainLightShadowCascadesSplit_5() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___mainLightShadowCascadesSplit_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mainLightShadowCascadesSplit_5() const { return ___mainLightShadowCascadesSplit_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mainLightShadowCascadesSplit_5() { return &___mainLightShadowCascadesSplit_5; }
	inline void set_mainLightShadowCascadesSplit_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mainLightShadowCascadesSplit_5 = value;
	}

	inline static int32_t get_offset_of_supportsAdditionalLightShadows_6() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___supportsAdditionalLightShadows_6)); }
	inline bool get_supportsAdditionalLightShadows_6() const { return ___supportsAdditionalLightShadows_6; }
	inline bool* get_address_of_supportsAdditionalLightShadows_6() { return &___supportsAdditionalLightShadows_6; }
	inline void set_supportsAdditionalLightShadows_6(bool value)
	{
		___supportsAdditionalLightShadows_6 = value;
	}

	inline static int32_t get_offset_of_additionalLightsShadowmapWidth_7() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___additionalLightsShadowmapWidth_7)); }
	inline int32_t get_additionalLightsShadowmapWidth_7() const { return ___additionalLightsShadowmapWidth_7; }
	inline int32_t* get_address_of_additionalLightsShadowmapWidth_7() { return &___additionalLightsShadowmapWidth_7; }
	inline void set_additionalLightsShadowmapWidth_7(int32_t value)
	{
		___additionalLightsShadowmapWidth_7 = value;
	}

	inline static int32_t get_offset_of_additionalLightsShadowmapHeight_8() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___additionalLightsShadowmapHeight_8)); }
	inline int32_t get_additionalLightsShadowmapHeight_8() const { return ___additionalLightsShadowmapHeight_8; }
	inline int32_t* get_address_of_additionalLightsShadowmapHeight_8() { return &___additionalLightsShadowmapHeight_8; }
	inline void set_additionalLightsShadowmapHeight_8(int32_t value)
	{
		___additionalLightsShadowmapHeight_8 = value;
	}

	inline static int32_t get_offset_of_supportsSoftShadows_9() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___supportsSoftShadows_9)); }
	inline bool get_supportsSoftShadows_9() const { return ___supportsSoftShadows_9; }
	inline bool* get_address_of_supportsSoftShadows_9() { return &___supportsSoftShadows_9; }
	inline void set_supportsSoftShadows_9(bool value)
	{
		___supportsSoftShadows_9 = value;
	}

	inline static int32_t get_offset_of_shadowmapDepthBufferBits_10() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___shadowmapDepthBufferBits_10)); }
	inline int32_t get_shadowmapDepthBufferBits_10() const { return ___shadowmapDepthBufferBits_10; }
	inline int32_t* get_address_of_shadowmapDepthBufferBits_10() { return &___shadowmapDepthBufferBits_10; }
	inline void set_shadowmapDepthBufferBits_10(int32_t value)
	{
		___shadowmapDepthBufferBits_10 = value;
	}

	inline static int32_t get_offset_of_bias_11() { return static_cast<int32_t>(offsetof(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E, ___bias_11)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_bias_11() const { return ___bias_11; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_bias_11() { return &___bias_11; }
	inline void set_bias_11(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___bias_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bias_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshaled_pinvoke
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mainLightShadowCascadesSplit_5;
	int32_t ___supportsAdditionalLightShadows_6;
	int32_t ___additionalLightsShadowmapWidth_7;
	int32_t ___additionalLightsShadowmapHeight_8;
	int32_t ___supportsSoftShadows_9;
	int32_t ___shadowmapDepthBufferBits_10;
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___bias_11;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshaled_com
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mainLightShadowCascadesSplit_5;
	int32_t ___supportsAdditionalLightShadows_6;
	int32_t ___additionalLightsShadowmapWidth_7;
	int32_t ___additionalLightsShadowmapHeight_8;
	int32_t ___supportsSoftShadows_9;
	int32_t ___shadowmapDepthBufferBits_10;
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___bias_11;
};

// UnityEngine.Rendering.Universal.ShadowQuality
struct  ShadowQuality_t38F0C784E9AE63E2141839E03E12AFD6C5195C94 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ShadowQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowQuality_t38F0C784E9AE63E2141839E03E12AFD6C5195C94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.ShadowResolution
struct  ShadowResolution_t0C985FCC32A78E9AD4C5A75EA5B388F456C3AC60 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ShadowResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowResolution_t0C985FCC32A78E9AD4C5A75EA5B388F456C3AC60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.SortingCriteria
struct  SortingCriteria_tB1A065A1776F58E38A1749487F833F09CACEB92F 
{
public:
	// System.Int32 UnityEngine.Rendering.SortingCriteria::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortingCriteria_tB1A065A1776F58E38A1749487F833F09CACEB92F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StylizedWater.StylizedWaterURP/FoamMovement
struct  FoamMovement_tD4CA5A8A352AAC6AF86725DF8EF8E12A4EFEA49A 
{
public:
	// System.Int32 StylizedWater.StylizedWaterURP/FoamMovement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FoamMovement_tD4CA5A8A352AAC6AF86725DF8EF8E12A4EFEA49A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StylizedWater.StylizedWaterURP/Lighting
struct  Lighting_tB9CA100CDBDDCD033D95DC6D4B2FDDBA05644FAB 
{
public:
	// System.Int32 StylizedWater.StylizedWaterURP/Lighting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Lighting_tB9CA100CDBDDCD033D95DC6D4B2FDDBA05644FAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StylizedWater.StylizedWaterURP/WaterUVs
struct  WaterUVs_tC70EC89754A00EDAE2DF9B1443BA29B0CDB4CE5C 
{
public:
	// System.Int32 StylizedWater.StylizedWaterURP/WaterUVs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaterUVs_tC70EC89754A00EDAE2DF9B1443BA29B0CDB4CE5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StylizedWater.CausticsFeature/CausticsSettings/DebugMode
struct  DebugMode_t49DE1676111301C46C96603DA2ABE26258546354 
{
public:
	// System.Int32 StylizedWater.CausticsFeature/CausticsSettings/DebugMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugMode_t49DE1676111301C46C96603DA2ABE26258546354, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>
struct  NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.Rendering.Universal.PostProcessingData
struct  PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113 
{
public:
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.PostProcessingData::gradingMode
	int32_t ___gradingMode_0;
	// System.Int32 UnityEngine.Rendering.Universal.PostProcessingData::lutSize
	int32_t ___lutSize_1;

public:
	inline static int32_t get_offset_of_gradingMode_0() { return static_cast<int32_t>(offsetof(PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113, ___gradingMode_0)); }
	inline int32_t get_gradingMode_0() const { return ___gradingMode_0; }
	inline int32_t* get_address_of_gradingMode_0() { return &___gradingMode_0; }
	inline void set_gradingMode_0(int32_t value)
	{
		___gradingMode_0 = value;
	}

	inline static int32_t get_offset_of_lutSize_1() { return static_cast<int32_t>(offsetof(PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113, ___lutSize_1)); }
	inline int32_t get_lutSize_1() const { return ___lutSize_1; }
	inline int32_t* get_address_of_lutSize_1() { return &___lutSize_1; }
	inline void set_lutSize_1(int32_t value)
	{
		___lutSize_1 = value;
	}
};


// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// StylizedWater.CausticsFeature/CausticsSettings
struct  CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC  : public RuntimeObject
{
public:
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::strength
	float ___strength_0;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::rgbSplit
	float ___rgbSplit_1;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::shadowMask
	float ___shadowMask_2;
	// UnityEngine.Texture2D StylizedWater.CausticsFeature/CausticsSettings::texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture_3;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::scale
	float ___scale_4;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::speed
	float ___speed_5;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::waterLevel
	float ___waterLevel_6;
	// UnityEngine.Vector2 StylizedWater.CausticsFeature/CausticsSettings::depth
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___depth_7;
	// System.Single StylizedWater.CausticsFeature/CausticsSettings::fade
	float ___fade_8;
	// UnityEngine.Rendering.Universal.RenderPassEvent StylizedWater.CausticsFeature/CausticsSettings::renderPassEvent
	int32_t ___renderPassEvent_9;
	// StylizedWater.CausticsFeature/CausticsSettings/DebugMode StylizedWater.CausticsFeature/CausticsSettings::debug
	int32_t ___debug_10;

public:
	inline static int32_t get_offset_of_strength_0() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___strength_0)); }
	inline float get_strength_0() const { return ___strength_0; }
	inline float* get_address_of_strength_0() { return &___strength_0; }
	inline void set_strength_0(float value)
	{
		___strength_0 = value;
	}

	inline static int32_t get_offset_of_rgbSplit_1() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___rgbSplit_1)); }
	inline float get_rgbSplit_1() const { return ___rgbSplit_1; }
	inline float* get_address_of_rgbSplit_1() { return &___rgbSplit_1; }
	inline void set_rgbSplit_1(float value)
	{
		___rgbSplit_1 = value;
	}

	inline static int32_t get_offset_of_shadowMask_2() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___shadowMask_2)); }
	inline float get_shadowMask_2() const { return ___shadowMask_2; }
	inline float* get_address_of_shadowMask_2() { return &___shadowMask_2; }
	inline void set_shadowMask_2(float value)
	{
		___shadowMask_2 = value;
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___texture_3)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_3), (void*)value);
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___scale_4)); }
	inline float get_scale_4() const { return ___scale_4; }
	inline float* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(float value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_waterLevel_6() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___waterLevel_6)); }
	inline float get_waterLevel_6() const { return ___waterLevel_6; }
	inline float* get_address_of_waterLevel_6() { return &___waterLevel_6; }
	inline void set_waterLevel_6(float value)
	{
		___waterLevel_6 = value;
	}

	inline static int32_t get_offset_of_depth_7() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___depth_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_depth_7() const { return ___depth_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_depth_7() { return &___depth_7; }
	inline void set_depth_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___depth_7 = value;
	}

	inline static int32_t get_offset_of_fade_8() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___fade_8)); }
	inline float get_fade_8() const { return ___fade_8; }
	inline float* get_address_of_fade_8() { return &___fade_8; }
	inline void set_fade_8(float value)
	{
		___fade_8 = value;
	}

	inline static int32_t get_offset_of_renderPassEvent_9() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___renderPassEvent_9)); }
	inline int32_t get_renderPassEvent_9() const { return ___renderPassEvent_9; }
	inline int32_t* get_address_of_renderPassEvent_9() { return &___renderPassEvent_9; }
	inline void set_renderPassEvent_9(int32_t value)
	{
		___renderPassEvent_9 = value;
	}

	inline static int32_t get_offset_of_debug_10() { return static_cast<int32_t>(offsetof(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC, ___debug_10)); }
	inline int32_t get_debug_10() const { return ___debug_10; }
	inline int32_t* get_address_of_debug_10() { return &___debug_10; }
	inline void set_debug_10(int32_t value)
	{
		___debug_10 = value;
	}
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct  Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.Universal.CameraData
struct  CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ViewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.CameraData::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.CameraData::renderType
	int32_t ___renderType_3;
	// UnityEngine.RenderTexture UnityEngine.Rendering.Universal.CameraData::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.CameraData::cameraTargetDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.CameraData::pixelRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelWidth
	int32_t ___pixelWidth_7;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelHeight
	int32_t ___pixelHeight_8;
	// System.Single UnityEngine.Rendering.Universal.CameraData::aspectRatio
	float ___aspectRatio_9;
	// System.Single UnityEngine.Rendering.Universal.CameraData::renderScale
	float ___renderScale_10;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::clearDepth
	bool ___clearDepth_11;
	// UnityEngine.CameraType UnityEngine.Rendering.Universal.CameraData::cameraType
	int32_t ___cameraType_12;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDefaultViewport
	bool ___isDefaultViewport_13;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isHdrEnabled
	bool ___isHdrEnabled_14;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresDepthTexture
	bool ___requiresDepthTexture_15;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresOpaqueTexture
	bool ___requiresOpaqueTexture_16;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::xrRendering
	bool ___xrRendering_17;
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.Universal.CameraData::defaultOpaqueSortFlags
	int32_t ___defaultOpaqueSortFlags_18;
	// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.CameraData::xr
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStereoEnabled
	bool ___isStereoEnabled_20;
	// System.Single UnityEngine.Rendering.Universal.CameraData::maxShadowDistance
	float ___maxShadowDistance_21;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessEnabled
	bool ___postProcessEnabled_22;
	// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>> UnityEngine.Rendering.Universal.CameraData::captureActions
	RuntimeObject* ___captureActions_23;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.CameraData::volumeLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.CameraData::volumeTrigger
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStopNaNEnabled
	bool ___isStopNaNEnabled_26;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDitheringEnabled
	bool ___isDitheringEnabled_27;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.CameraData::antialiasing
	int32_t ___antialiasing_28;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.CameraData::antialiasingQuality
	int32_t ___antialiasingQuality_29;
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.CameraData::renderer
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::resolveFinalTarget
	bool ___resolveFinalTarget_31;

public:
	inline static int32_t get_offset_of_m_ViewMatrix_0() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___m_ViewMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ViewMatrix_0() const { return ___m_ViewMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ViewMatrix_0() { return &___m_ViewMatrix_0; }
	inline void set_m_ViewMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ViewMatrix_0 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_1() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___m_ProjectionMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_1() const { return ___m_ProjectionMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_1() { return &___m_ProjectionMatrix_1; }
	inline void set_m_ProjectionMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___camera_2)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_2() const { return ___camera_2; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_2), (void*)value);
	}

	inline static int32_t get_offset_of_renderType_3() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderType_3)); }
	inline int32_t get_renderType_3() const { return ___renderType_3; }
	inline int32_t* get_address_of_renderType_3() { return &___renderType_3; }
	inline void set_renderType_3(int32_t value)
	{
		___renderType_3 = value;
	}

	inline static int32_t get_offset_of_targetTexture_4() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___targetTexture_4)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_4() const { return ___targetTexture_4; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_4() { return &___targetTexture_4; }
	inline void set_targetTexture_4(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraTargetDescriptor_5() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___cameraTargetDescriptor_5)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_cameraTargetDescriptor_5() const { return ___cameraTargetDescriptor_5; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_cameraTargetDescriptor_5() { return &___cameraTargetDescriptor_5; }
	inline void set_cameraTargetDescriptor_5(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___cameraTargetDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_pixelRect_6() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelRect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_pixelRect_6() const { return ___pixelRect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_pixelRect_6() { return &___pixelRect_6; }
	inline void set_pixelRect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___pixelRect_6 = value;
	}

	inline static int32_t get_offset_of_pixelWidth_7() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelWidth_7)); }
	inline int32_t get_pixelWidth_7() const { return ___pixelWidth_7; }
	inline int32_t* get_address_of_pixelWidth_7() { return &___pixelWidth_7; }
	inline void set_pixelWidth_7(int32_t value)
	{
		___pixelWidth_7 = value;
	}

	inline static int32_t get_offset_of_pixelHeight_8() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelHeight_8)); }
	inline int32_t get_pixelHeight_8() const { return ___pixelHeight_8; }
	inline int32_t* get_address_of_pixelHeight_8() { return &___pixelHeight_8; }
	inline void set_pixelHeight_8(int32_t value)
	{
		___pixelHeight_8 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_9() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___aspectRatio_9)); }
	inline float get_aspectRatio_9() const { return ___aspectRatio_9; }
	inline float* get_address_of_aspectRatio_9() { return &___aspectRatio_9; }
	inline void set_aspectRatio_9(float value)
	{
		___aspectRatio_9 = value;
	}

	inline static int32_t get_offset_of_renderScale_10() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderScale_10)); }
	inline float get_renderScale_10() const { return ___renderScale_10; }
	inline float* get_address_of_renderScale_10() { return &___renderScale_10; }
	inline void set_renderScale_10(float value)
	{
		___renderScale_10 = value;
	}

	inline static int32_t get_offset_of_clearDepth_11() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___clearDepth_11)); }
	inline bool get_clearDepth_11() const { return ___clearDepth_11; }
	inline bool* get_address_of_clearDepth_11() { return &___clearDepth_11; }
	inline void set_clearDepth_11(bool value)
	{
		___clearDepth_11 = value;
	}

	inline static int32_t get_offset_of_cameraType_12() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___cameraType_12)); }
	inline int32_t get_cameraType_12() const { return ___cameraType_12; }
	inline int32_t* get_address_of_cameraType_12() { return &___cameraType_12; }
	inline void set_cameraType_12(int32_t value)
	{
		___cameraType_12 = value;
	}

	inline static int32_t get_offset_of_isDefaultViewport_13() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isDefaultViewport_13)); }
	inline bool get_isDefaultViewport_13() const { return ___isDefaultViewport_13; }
	inline bool* get_address_of_isDefaultViewport_13() { return &___isDefaultViewport_13; }
	inline void set_isDefaultViewport_13(bool value)
	{
		___isDefaultViewport_13 = value;
	}

	inline static int32_t get_offset_of_isHdrEnabled_14() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isHdrEnabled_14)); }
	inline bool get_isHdrEnabled_14() const { return ___isHdrEnabled_14; }
	inline bool* get_address_of_isHdrEnabled_14() { return &___isHdrEnabled_14; }
	inline void set_isHdrEnabled_14(bool value)
	{
		___isHdrEnabled_14 = value;
	}

	inline static int32_t get_offset_of_requiresDepthTexture_15() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___requiresDepthTexture_15)); }
	inline bool get_requiresDepthTexture_15() const { return ___requiresDepthTexture_15; }
	inline bool* get_address_of_requiresDepthTexture_15() { return &___requiresDepthTexture_15; }
	inline void set_requiresDepthTexture_15(bool value)
	{
		___requiresDepthTexture_15 = value;
	}

	inline static int32_t get_offset_of_requiresOpaqueTexture_16() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___requiresOpaqueTexture_16)); }
	inline bool get_requiresOpaqueTexture_16() const { return ___requiresOpaqueTexture_16; }
	inline bool* get_address_of_requiresOpaqueTexture_16() { return &___requiresOpaqueTexture_16; }
	inline void set_requiresOpaqueTexture_16(bool value)
	{
		___requiresOpaqueTexture_16 = value;
	}

	inline static int32_t get_offset_of_xrRendering_17() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___xrRendering_17)); }
	inline bool get_xrRendering_17() const { return ___xrRendering_17; }
	inline bool* get_address_of_xrRendering_17() { return &___xrRendering_17; }
	inline void set_xrRendering_17(bool value)
	{
		___xrRendering_17 = value;
	}

	inline static int32_t get_offset_of_defaultOpaqueSortFlags_18() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___defaultOpaqueSortFlags_18)); }
	inline int32_t get_defaultOpaqueSortFlags_18() const { return ___defaultOpaqueSortFlags_18; }
	inline int32_t* get_address_of_defaultOpaqueSortFlags_18() { return &___defaultOpaqueSortFlags_18; }
	inline void set_defaultOpaqueSortFlags_18(int32_t value)
	{
		___defaultOpaqueSortFlags_18 = value;
	}

	inline static int32_t get_offset_of_xr_19() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___xr_19)); }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * get_xr_19() const { return ___xr_19; }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** get_address_of_xr_19() { return &___xr_19; }
	inline void set_xr_19(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * value)
	{
		___xr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xr_19), (void*)value);
	}

	inline static int32_t get_offset_of_isStereoEnabled_20() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isStereoEnabled_20)); }
	inline bool get_isStereoEnabled_20() const { return ___isStereoEnabled_20; }
	inline bool* get_address_of_isStereoEnabled_20() { return &___isStereoEnabled_20; }
	inline void set_isStereoEnabled_20(bool value)
	{
		___isStereoEnabled_20 = value;
	}

	inline static int32_t get_offset_of_maxShadowDistance_21() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___maxShadowDistance_21)); }
	inline float get_maxShadowDistance_21() const { return ___maxShadowDistance_21; }
	inline float* get_address_of_maxShadowDistance_21() { return &___maxShadowDistance_21; }
	inline void set_maxShadowDistance_21(float value)
	{
		___maxShadowDistance_21 = value;
	}

	inline static int32_t get_offset_of_postProcessEnabled_22() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___postProcessEnabled_22)); }
	inline bool get_postProcessEnabled_22() const { return ___postProcessEnabled_22; }
	inline bool* get_address_of_postProcessEnabled_22() { return &___postProcessEnabled_22; }
	inline void set_postProcessEnabled_22(bool value)
	{
		___postProcessEnabled_22 = value;
	}

	inline static int32_t get_offset_of_captureActions_23() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___captureActions_23)); }
	inline RuntimeObject* get_captureActions_23() const { return ___captureActions_23; }
	inline RuntimeObject** get_address_of_captureActions_23() { return &___captureActions_23; }
	inline void set_captureActions_23(RuntimeObject* value)
	{
		___captureActions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captureActions_23), (void*)value);
	}

	inline static int32_t get_offset_of_volumeLayerMask_24() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___volumeLayerMask_24)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_volumeLayerMask_24() const { return ___volumeLayerMask_24; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_volumeLayerMask_24() { return &___volumeLayerMask_24; }
	inline void set_volumeLayerMask_24(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___volumeLayerMask_24 = value;
	}

	inline static int32_t get_offset_of_volumeTrigger_25() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___volumeTrigger_25)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_volumeTrigger_25() const { return ___volumeTrigger_25; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_volumeTrigger_25() { return &___volumeTrigger_25; }
	inline void set_volumeTrigger_25(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___volumeTrigger_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeTrigger_25), (void*)value);
	}

	inline static int32_t get_offset_of_isStopNaNEnabled_26() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isStopNaNEnabled_26)); }
	inline bool get_isStopNaNEnabled_26() const { return ___isStopNaNEnabled_26; }
	inline bool* get_address_of_isStopNaNEnabled_26() { return &___isStopNaNEnabled_26; }
	inline void set_isStopNaNEnabled_26(bool value)
	{
		___isStopNaNEnabled_26 = value;
	}

	inline static int32_t get_offset_of_isDitheringEnabled_27() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isDitheringEnabled_27)); }
	inline bool get_isDitheringEnabled_27() const { return ___isDitheringEnabled_27; }
	inline bool* get_address_of_isDitheringEnabled_27() { return &___isDitheringEnabled_27; }
	inline void set_isDitheringEnabled_27(bool value)
	{
		___isDitheringEnabled_27 = value;
	}

	inline static int32_t get_offset_of_antialiasing_28() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___antialiasing_28)); }
	inline int32_t get_antialiasing_28() const { return ___antialiasing_28; }
	inline int32_t* get_address_of_antialiasing_28() { return &___antialiasing_28; }
	inline void set_antialiasing_28(int32_t value)
	{
		___antialiasing_28 = value;
	}

	inline static int32_t get_offset_of_antialiasingQuality_29() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___antialiasingQuality_29)); }
	inline int32_t get_antialiasingQuality_29() const { return ___antialiasingQuality_29; }
	inline int32_t* get_address_of_antialiasingQuality_29() { return &___antialiasingQuality_29; }
	inline void set_antialiasingQuality_29(int32_t value)
	{
		___antialiasingQuality_29 = value;
	}

	inline static int32_t get_offset_of_renderer_30() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderer_30)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_renderer_30() const { return ___renderer_30; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_renderer_30() { return &___renderer_30; }
	inline void set_renderer_30(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___renderer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_30), (void*)value);
	}

	inline static int32_t get_offset_of_resolveFinalTarget_31() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___resolveFinalTarget_31)); }
	inline bool get_resolveFinalTarget_31() const { return ___resolveFinalTarget_31; }
	inline bool* get_address_of_resolveFinalTarget_31() { return &___resolveFinalTarget_31; }
	inline void set_resolveFinalTarget_31(bool value)
	{
		___resolveFinalTarget_31 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___xrRendering_17;
	int32_t ___defaultOpaqueSortFlags_18;
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	int32_t ___isStereoEnabled_20;
	float ___maxShadowDistance_21;
	int32_t ___postProcessEnabled_22;
	RuntimeObject* ___captureActions_23;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	int32_t ___isStopNaNEnabled_26;
	int32_t ___isDitheringEnabled_27;
	int32_t ___antialiasing_28;
	int32_t ___antialiasingQuality_29;
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	int32_t ___resolveFinalTarget_31;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___xrRendering_17;
	int32_t ___defaultOpaqueSortFlags_18;
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	int32_t ___isStereoEnabled_20;
	float ___maxShadowDistance_21;
	int32_t ___postProcessEnabled_22;
	RuntimeObject* ___captureActions_23;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	int32_t ___isStopNaNEnabled_26;
	int32_t ___isDitheringEnabled_27;
	int32_t ___antialiasing_28;
	int32_t ___antialiasingQuality_29;
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	int32_t ___resolveFinalTarget_31;
};

// UnityEngine.Rendering.Universal.LightData
struct  LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.LightData::mainLightIndex
	int32_t ___mainLightIndex_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::additionalLightsCount
	int32_t ___additionalLightsCount_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::maxPerObjectAdditionalLightsCount
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight> UnityEngine.Rendering.Universal.LightData::visibleLights
	NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD  ___visibleLights_3;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::shadeAdditionalLightsPerVertex
	bool ___shadeAdditionalLightsPerVertex_4;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsMixedLighting
	bool ___supportsMixedLighting_5;

public:
	inline static int32_t get_offset_of_mainLightIndex_0() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___mainLightIndex_0)); }
	inline int32_t get_mainLightIndex_0() const { return ___mainLightIndex_0; }
	inline int32_t* get_address_of_mainLightIndex_0() { return &___mainLightIndex_0; }
	inline void set_mainLightIndex_0(int32_t value)
	{
		___mainLightIndex_0 = value;
	}

	inline static int32_t get_offset_of_additionalLightsCount_1() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___additionalLightsCount_1)); }
	inline int32_t get_additionalLightsCount_1() const { return ___additionalLightsCount_1; }
	inline int32_t* get_address_of_additionalLightsCount_1() { return &___additionalLightsCount_1; }
	inline void set_additionalLightsCount_1(int32_t value)
	{
		___additionalLightsCount_1 = value;
	}

	inline static int32_t get_offset_of_maxPerObjectAdditionalLightsCount_2() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___maxPerObjectAdditionalLightsCount_2)); }
	inline int32_t get_maxPerObjectAdditionalLightsCount_2() const { return ___maxPerObjectAdditionalLightsCount_2; }
	inline int32_t* get_address_of_maxPerObjectAdditionalLightsCount_2() { return &___maxPerObjectAdditionalLightsCount_2; }
	inline void set_maxPerObjectAdditionalLightsCount_2(int32_t value)
	{
		___maxPerObjectAdditionalLightsCount_2 = value;
	}

	inline static int32_t get_offset_of_visibleLights_3() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___visibleLights_3)); }
	inline NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD  get_visibleLights_3() const { return ___visibleLights_3; }
	inline NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD * get_address_of_visibleLights_3() { return &___visibleLights_3; }
	inline void set_visibleLights_3(NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD  value)
	{
		___visibleLights_3 = value;
	}

	inline static int32_t get_offset_of_shadeAdditionalLightsPerVertex_4() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___shadeAdditionalLightsPerVertex_4)); }
	inline bool get_shadeAdditionalLightsPerVertex_4() const { return ___shadeAdditionalLightsPerVertex_4; }
	inline bool* get_address_of_shadeAdditionalLightsPerVertex_4() { return &___shadeAdditionalLightsPerVertex_4; }
	inline void set_shadeAdditionalLightsPerVertex_4(bool value)
	{
		___shadeAdditionalLightsPerVertex_4 = value;
	}

	inline static int32_t get_offset_of_supportsMixedLighting_5() { return static_cast<int32_t>(offsetof(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA, ___supportsMixedLighting_5)); }
	inline bool get_supportsMixedLighting_5() const { return ___supportsMixedLighting_5; }
	inline bool* get_address_of_supportsMixedLighting_5() { return &___supportsMixedLighting_5; }
	inline void set_supportsMixedLighting_5(bool value)
	{
		___supportsMixedLighting_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshaled_pinvoke
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD  ___visibleLights_3;
	int32_t ___shadeAdditionalLightsPerVertex_4;
	int32_t ___supportsMixedLighting_5;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshaled_com
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t1F0A88FF8A7D4163044A82215D16B30E7050C4FD  ___visibleLights_3;
	int32_t ___shadeAdditionalLightsPerVertex_4;
	int32_t ___supportsMixedLighting_5;
};

// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.RenderPipelineAsset
struct  RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct  ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.Universal.RenderPassEvent UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassEvent>k__BackingField
	int32_t ___U3CrenderPassEventU3Ek__BackingField_0;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderPass::<profilingSampler>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CprofilingSamplerU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<overrideCameraTarget>k__BackingField
	bool ___U3CoverrideCameraTargetU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isBlitRenderPass>k__BackingField
	bool ___U3CisBlitRenderPassU3Ek__BackingField_3;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ColorAttachments_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthAttachment
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_DepthAttachment_5;
	// UnityEngine.Rendering.Universal.ScriptableRenderPassInput UnityEngine.Rendering.Universal.ScriptableRenderPass::m_Input
	int32_t ___m_Input_6;
	// UnityEngine.Rendering.ClearFlag UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearFlag
	int32_t ___m_ClearFlag_7;
	// UnityEngine.Color UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ClearColor_8;

public:
	inline static int32_t get_offset_of_U3CrenderPassEventU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CrenderPassEventU3Ek__BackingField_0)); }
	inline int32_t get_U3CrenderPassEventU3Ek__BackingField_0() const { return ___U3CrenderPassEventU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrenderPassEventU3Ek__BackingField_0() { return &___U3CrenderPassEventU3Ek__BackingField_0; }
	inline void set_U3CrenderPassEventU3Ek__BackingField_0(int32_t value)
	{
		___U3CrenderPassEventU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CprofilingSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CprofilingSamplerU3Ek__BackingField_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CprofilingSamplerU3Ek__BackingField_1() const { return ___U3CprofilingSamplerU3Ek__BackingField_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CprofilingSamplerU3Ek__BackingField_1() { return &___U3CprofilingSamplerU3Ek__BackingField_1; }
	inline void set_U3CprofilingSamplerU3Ek__BackingField_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CprofilingSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprofilingSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoverrideCameraTargetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CoverrideCameraTargetU3Ek__BackingField_2)); }
	inline bool get_U3CoverrideCameraTargetU3Ek__BackingField_2() const { return ___U3CoverrideCameraTargetU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CoverrideCameraTargetU3Ek__BackingField_2() { return &___U3CoverrideCameraTargetU3Ek__BackingField_2; }
	inline void set_U3CoverrideCameraTargetU3Ek__BackingField_2(bool value)
	{
		___U3CoverrideCameraTargetU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CisBlitRenderPassU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___U3CisBlitRenderPassU3Ek__BackingField_3)); }
	inline bool get_U3CisBlitRenderPassU3Ek__BackingField_3() const { return ___U3CisBlitRenderPassU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisBlitRenderPassU3Ek__BackingField_3() { return &___U3CisBlitRenderPassU3Ek__BackingField_3; }
	inline void set_U3CisBlitRenderPassU3Ek__BackingField_3(bool value)
	{
		___U3CisBlitRenderPassU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorAttachments_4() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ColorAttachments_4)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ColorAttachments_4() const { return ___m_ColorAttachments_4; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ColorAttachments_4() { return &___m_ColorAttachments_4; }
	inline void set_m_ColorAttachments_4(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ColorAttachments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorAttachments_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthAttachment_5() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_DepthAttachment_5)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_DepthAttachment_5() const { return ___m_DepthAttachment_5; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_DepthAttachment_5() { return &___m_DepthAttachment_5; }
	inline void set_m_DepthAttachment_5(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_DepthAttachment_5 = value;
	}

	inline static int32_t get_offset_of_m_Input_6() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_Input_6)); }
	inline int32_t get_m_Input_6() const { return ___m_Input_6; }
	inline int32_t* get_address_of_m_Input_6() { return &___m_Input_6; }
	inline void set_m_Input_6(int32_t value)
	{
		___m_Input_6 = value;
	}

	inline static int32_t get_offset_of_m_ClearFlag_7() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ClearFlag_7)); }
	inline int32_t get_m_ClearFlag_7() const { return ___m_ClearFlag_7; }
	inline int32_t* get_address_of_m_ClearFlag_7() { return &___m_ClearFlag_7; }
	inline void set_m_ClearFlag_7(int32_t value)
	{
		___m_ClearFlag_7 = value;
	}

	inline static int32_t get_offset_of_m_ClearColor_8() { return static_cast<int32_t>(offsetof(ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA, ___m_ClearColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ClearColor_8() const { return ___m_ClearColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ClearColor_8() { return &___m_ClearColor_8; }
	inline void set_m_ClearColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ClearColor_8 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer
struct  ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer::<profilingExecute>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CprofilingExecuteU3Ek__BackingField_0;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures UnityEngine.Rendering.Universal.ScriptableRenderer::<supportedRenderingFeatures>k__BackingField
	RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2;
	// UnityEngine.Rendering.GraphicsDeviceType[] UnityEngine.Rendering.Universal.ScriptableRenderer::<unsupportedGraphicsDeviceTypes>k__BackingField
	GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveRenderPassQueue
	List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___m_ActiveRenderPassQueue_5;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RendererFeatures
	List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * ___m_RendererFeatures_6;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraColorTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraColorTarget_7;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraDepthTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraDepthTarget_8;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraColorTargetIsBound
	bool ___m_FirstTimeCameraColorTargetIsBound_9;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraDepthTargetIsBound
	bool ___m_FirstTimeCameraDepthTargetIsBound_10;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsPipelineExecuting
	bool ___m_IsPipelineExecuting_11;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::isCameraColorTargetValid
	bool ___isCameraColorTargetValid_12;

public:
	inline static int32_t get_offset_of_U3CprofilingExecuteU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CprofilingExecuteU3Ek__BackingField_0)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CprofilingExecuteU3Ek__BackingField_0() const { return ___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CprofilingExecuteU3Ek__BackingField_0() { return &___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline void set_U3CprofilingExecuteU3Ek__BackingField_0(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CprofilingExecuteU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprofilingExecuteU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2)); }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * get_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() const { return ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 ** get_address_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return &___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline void set_U3CsupportedRenderingFeaturesU3Ek__BackingField_2(RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * value)
	{
		___U3CsupportedRenderingFeaturesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsupportedRenderingFeaturesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3)); }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* get_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() const { return ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A** get_address_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return &___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline void set_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3(GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* value)
	{
		___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveRenderPassQueue_5() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_ActiveRenderPassQueue_5)); }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * get_m_ActiveRenderPassQueue_5() const { return ___m_ActiveRenderPassQueue_5; }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F ** get_address_of_m_ActiveRenderPassQueue_5() { return &___m_ActiveRenderPassQueue_5; }
	inline void set_m_ActiveRenderPassQueue_5(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * value)
	{
		___m_ActiveRenderPassQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveRenderPassQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererFeatures_6() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_RendererFeatures_6)); }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * get_m_RendererFeatures_6() const { return ___m_RendererFeatures_6; }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 ** get_address_of_m_RendererFeatures_6() { return &___m_RendererFeatures_6; }
	inline void set_m_RendererFeatures_6(List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * value)
	{
		___m_RendererFeatures_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererFeatures_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraColorTarget_7() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraColorTarget_7)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraColorTarget_7() const { return ___m_CameraColorTarget_7; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraColorTarget_7() { return &___m_CameraColorTarget_7; }
	inline void set_m_CameraColorTarget_7(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraColorTarget_7 = value;
	}

	inline static int32_t get_offset_of_m_CameraDepthTarget_8() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraDepthTarget_8)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraDepthTarget_8() const { return ___m_CameraDepthTarget_8; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraDepthTarget_8() { return &___m_CameraDepthTarget_8; }
	inline void set_m_CameraDepthTarget_8(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraDepthTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraColorTargetIsBound_9() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraColorTargetIsBound_9)); }
	inline bool get_m_FirstTimeCameraColorTargetIsBound_9() const { return ___m_FirstTimeCameraColorTargetIsBound_9; }
	inline bool* get_address_of_m_FirstTimeCameraColorTargetIsBound_9() { return &___m_FirstTimeCameraColorTargetIsBound_9; }
	inline void set_m_FirstTimeCameraColorTargetIsBound_9(bool value)
	{
		___m_FirstTimeCameraColorTargetIsBound_9 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraDepthTargetIsBound_10() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraDepthTargetIsBound_10)); }
	inline bool get_m_FirstTimeCameraDepthTargetIsBound_10() const { return ___m_FirstTimeCameraDepthTargetIsBound_10; }
	inline bool* get_address_of_m_FirstTimeCameraDepthTargetIsBound_10() { return &___m_FirstTimeCameraDepthTargetIsBound_10; }
	inline void set_m_FirstTimeCameraDepthTargetIsBound_10(bool value)
	{
		___m_FirstTimeCameraDepthTargetIsBound_10 = value;
	}

	inline static int32_t get_offset_of_m_IsPipelineExecuting_11() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_IsPipelineExecuting_11)); }
	inline bool get_m_IsPipelineExecuting_11() const { return ___m_IsPipelineExecuting_11; }
	inline bool* get_address_of_m_IsPipelineExecuting_11() { return &___m_IsPipelineExecuting_11; }
	inline void set_m_IsPipelineExecuting_11(bool value)
	{
		___m_IsPipelineExecuting_11 = value;
	}

	inline static int32_t get_offset_of_isCameraColorTargetValid_12() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___isCameraColorTargetValid_12)); }
	inline bool get_isCameraColorTargetValid_12() const { return ___isCameraColorTargetValid_12; }
	inline bool* get_address_of_isCameraColorTargetValid_12() { return &___isCameraColorTargetValid_12; }
	inline void set_isCameraColorTargetValid_12(bool value)
	{
		___isCameraColorTargetValid_12 = value;
	}
};

struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___current_1;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ActiveColorAttachments_13;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachment
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_ActiveDepthAttachment_14;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* ___m_TrimmedColorAttachmentCopies_15;

public:
	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___current_1)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_current_1() const { return ___current_1; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveColorAttachments_13() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorAttachments_13)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ActiveColorAttachments_13() const { return ___m_ActiveColorAttachments_13; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ActiveColorAttachments_13() { return &___m_ActiveColorAttachments_13; }
	inline void set_m_ActiveColorAttachments_13(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ActiveColorAttachments_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorAttachments_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveDepthAttachment_14() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveDepthAttachment_14)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_ActiveDepthAttachment_14() const { return ___m_ActiveDepthAttachment_14; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_ActiveDepthAttachment_14() { return &___m_ActiveDepthAttachment_14; }
	inline void set_m_ActiveDepthAttachment_14(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_ActiveDepthAttachment_14 = value;
	}

	inline static int32_t get_offset_of_m_TrimmedColorAttachmentCopies_15() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_TrimmedColorAttachmentCopies_15)); }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* get_m_TrimmedColorAttachmentCopies_15() const { return ___m_TrimmedColorAttachmentCopies_15; }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE** get_address_of_m_TrimmedColorAttachmentCopies_15() { return &___m_TrimmedColorAttachmentCopies_15; }
	inline void set_m_TrimmedColorAttachmentCopies_15(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* value)
	{
		___m_TrimmedColorAttachmentCopies_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrimmedColorAttachmentCopies_15), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct  ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererFeature::m_Active
	bool ___m_Active_4;

public:
	inline static int32_t get_offset_of_m_Active_4() { return static_cast<int32_t>(offsetof(ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447, ___m_Active_4)); }
	inline bool get_m_Active_4() const { return ___m_Active_4; }
	inline bool* get_address_of_m_Active_4() { return &___m_Active_4; }
	inline void set_m_Active_4(bool value)
	{
		___m_Active_4 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// StylizedWater.CausticsFeature
struct  CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E  : public ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447
{
public:
	// StylizedWater.CausticsFeature/CausticsSettings StylizedWater.CausticsFeature::settings
	CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * ___settings_5;
	// StylizedWater.CausticsPass StylizedWater.CausticsFeature::causticsPass
	CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * ___causticsPass_6;
	// UnityEngine.Shader StylizedWater.CausticsFeature::causticsShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___causticsShader_7;
	// UnityEngine.Material StylizedWater.CausticsFeature::causticsMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___causticsMaterial_8;

public:
	inline static int32_t get_offset_of_settings_5() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E, ___settings_5)); }
	inline CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * get_settings_5() const { return ___settings_5; }
	inline CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC ** get_address_of_settings_5() { return &___settings_5; }
	inline void set_settings_5(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * value)
	{
		___settings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_5), (void*)value);
	}

	inline static int32_t get_offset_of_causticsPass_6() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E, ___causticsPass_6)); }
	inline CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * get_causticsPass_6() const { return ___causticsPass_6; }
	inline CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A ** get_address_of_causticsPass_6() { return &___causticsPass_6; }
	inline void set_causticsPass_6(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * value)
	{
		___causticsPass_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___causticsPass_6), (void*)value);
	}

	inline static int32_t get_offset_of_causticsShader_7() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E, ___causticsShader_7)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_causticsShader_7() const { return ___causticsShader_7; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_causticsShader_7() { return &___causticsShader_7; }
	inline void set_causticsShader_7(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___causticsShader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___causticsShader_7), (void*)value);
	}

	inline static int32_t get_offset_of_causticsMaterial_8() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E, ___causticsMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_causticsMaterial_8() const { return ___causticsMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_causticsMaterial_8() { return &___causticsMaterial_8; }
	inline void set_causticsMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___causticsMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___causticsMaterial_8), (void*)value);
	}
};

struct CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields
{
public:
	// System.Int32 StylizedWater.CausticsFeature::SrcBlend
	int32_t ___SrcBlend_9;
	// System.Int32 StylizedWater.CausticsFeature::DstBlend
	int32_t ___DstBlend_10;
	// System.Int32 StylizedWater.CausticsFeature::causticsTextureID
	int32_t ___causticsTextureID_11;
	// System.Int32 StylizedWater.CausticsFeature::causticsStrengthID
	int32_t ___causticsStrengthID_12;
	// System.Int32 StylizedWater.CausticsFeature::causticsScaleID
	int32_t ___causticsScaleID_13;
	// System.Int32 StylizedWater.CausticsFeature::causticsSpeedID
	int32_t ___causticsSpeedID_14;
	// System.Int32 StylizedWater.CausticsFeature::causticsSplitID
	int32_t ___causticsSplitID_15;
	// System.Int32 StylizedWater.CausticsFeature::shadowMaskID
	int32_t ___shadowMaskID_16;
	// System.Int32 StylizedWater.CausticsFeature::causticsFadeID
	int32_t ___causticsFadeID_17;
	// System.Int32 StylizedWater.CausticsFeature::waterLevelID
	int32_t ___waterLevelID_18;
	// System.Int32 StylizedWater.CausticsFeature::causticsStartID
	int32_t ___causticsStartID_19;
	// System.Int32 StylizedWater.CausticsFeature::causticsEndID
	int32_t ___causticsEndID_20;

public:
	inline static int32_t get_offset_of_SrcBlend_9() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___SrcBlend_9)); }
	inline int32_t get_SrcBlend_9() const { return ___SrcBlend_9; }
	inline int32_t* get_address_of_SrcBlend_9() { return &___SrcBlend_9; }
	inline void set_SrcBlend_9(int32_t value)
	{
		___SrcBlend_9 = value;
	}

	inline static int32_t get_offset_of_DstBlend_10() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___DstBlend_10)); }
	inline int32_t get_DstBlend_10() const { return ___DstBlend_10; }
	inline int32_t* get_address_of_DstBlend_10() { return &___DstBlend_10; }
	inline void set_DstBlend_10(int32_t value)
	{
		___DstBlend_10 = value;
	}

	inline static int32_t get_offset_of_causticsTextureID_11() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsTextureID_11)); }
	inline int32_t get_causticsTextureID_11() const { return ___causticsTextureID_11; }
	inline int32_t* get_address_of_causticsTextureID_11() { return &___causticsTextureID_11; }
	inline void set_causticsTextureID_11(int32_t value)
	{
		___causticsTextureID_11 = value;
	}

	inline static int32_t get_offset_of_causticsStrengthID_12() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsStrengthID_12)); }
	inline int32_t get_causticsStrengthID_12() const { return ___causticsStrengthID_12; }
	inline int32_t* get_address_of_causticsStrengthID_12() { return &___causticsStrengthID_12; }
	inline void set_causticsStrengthID_12(int32_t value)
	{
		___causticsStrengthID_12 = value;
	}

	inline static int32_t get_offset_of_causticsScaleID_13() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsScaleID_13)); }
	inline int32_t get_causticsScaleID_13() const { return ___causticsScaleID_13; }
	inline int32_t* get_address_of_causticsScaleID_13() { return &___causticsScaleID_13; }
	inline void set_causticsScaleID_13(int32_t value)
	{
		___causticsScaleID_13 = value;
	}

	inline static int32_t get_offset_of_causticsSpeedID_14() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsSpeedID_14)); }
	inline int32_t get_causticsSpeedID_14() const { return ___causticsSpeedID_14; }
	inline int32_t* get_address_of_causticsSpeedID_14() { return &___causticsSpeedID_14; }
	inline void set_causticsSpeedID_14(int32_t value)
	{
		___causticsSpeedID_14 = value;
	}

	inline static int32_t get_offset_of_causticsSplitID_15() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsSplitID_15)); }
	inline int32_t get_causticsSplitID_15() const { return ___causticsSplitID_15; }
	inline int32_t* get_address_of_causticsSplitID_15() { return &___causticsSplitID_15; }
	inline void set_causticsSplitID_15(int32_t value)
	{
		___causticsSplitID_15 = value;
	}

	inline static int32_t get_offset_of_shadowMaskID_16() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___shadowMaskID_16)); }
	inline int32_t get_shadowMaskID_16() const { return ___shadowMaskID_16; }
	inline int32_t* get_address_of_shadowMaskID_16() { return &___shadowMaskID_16; }
	inline void set_shadowMaskID_16(int32_t value)
	{
		___shadowMaskID_16 = value;
	}

	inline static int32_t get_offset_of_causticsFadeID_17() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsFadeID_17)); }
	inline int32_t get_causticsFadeID_17() const { return ___causticsFadeID_17; }
	inline int32_t* get_address_of_causticsFadeID_17() { return &___causticsFadeID_17; }
	inline void set_causticsFadeID_17(int32_t value)
	{
		___causticsFadeID_17 = value;
	}

	inline static int32_t get_offset_of_waterLevelID_18() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___waterLevelID_18)); }
	inline int32_t get_waterLevelID_18() const { return ___waterLevelID_18; }
	inline int32_t* get_address_of_waterLevelID_18() { return &___waterLevelID_18; }
	inline void set_waterLevelID_18(int32_t value)
	{
		___waterLevelID_18 = value;
	}

	inline static int32_t get_offset_of_causticsStartID_19() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsStartID_19)); }
	inline int32_t get_causticsStartID_19() const { return ___causticsStartID_19; }
	inline int32_t* get_address_of_causticsStartID_19() { return &___causticsStartID_19; }
	inline void set_causticsStartID_19(int32_t value)
	{
		___causticsStartID_19 = value;
	}

	inline static int32_t get_offset_of_causticsEndID_20() { return static_cast<int32_t>(offsetof(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields, ___causticsEndID_20)); }
	inline int32_t get_causticsEndID_20() const { return ___causticsEndID_20; }
	inline int32_t* get_address_of_causticsEndID_20() { return &___causticsEndID_20; }
	inline void set_causticsEndID_20(int32_t value)
	{
		___causticsEndID_20 = value;
	}
};


// StylizedWater.CausticsPass
struct  CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A  : public ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA
{
public:
	// UnityEngine.Material StylizedWater.CausticsPass::causticsMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___causticsMaterial_10;
	// System.Single StylizedWater.CausticsPass::waterLevel
	float ___waterLevel_12;

public:
	inline static int32_t get_offset_of_causticsMaterial_10() { return static_cast<int32_t>(offsetof(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A, ___causticsMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_causticsMaterial_10() const { return ___causticsMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_causticsMaterial_10() { return &___causticsMaterial_10; }
	inline void set_causticsMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___causticsMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___causticsMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_waterLevel_12() { return static_cast<int32_t>(offsetof(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A, ___waterLevel_12)); }
	inline float get_waterLevel_12() const { return ___waterLevel_12; }
	inline float* get_address_of_waterLevel_12() { return &___waterLevel_12; }
	inline void set_waterLevel_12(float value)
	{
		___waterLevel_12 = value;
	}
};

struct CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_StaticFields
{
public:
	// UnityEngine.Mesh StylizedWater.CausticsPass::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_11;

public:
	inline static int32_t get_offset_of_mesh_11() { return static_cast<int32_t>(offsetof(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_StaticFields, ___mesh_11)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_11() const { return ___mesh_11; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_11() { return &___mesh_11; }
	inline void set_mesh_11(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_11), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Rendering.Universal.RenderingData
struct  RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED 
{
public:
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.Universal.RenderingData::cullResults
	CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760  ___cullResults_0;
	// UnityEngine.Rendering.Universal.CameraData UnityEngine.Rendering.Universal.RenderingData::cameraData
	CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  ___cameraData_1;
	// UnityEngine.Rendering.Universal.LightData UnityEngine.Rendering.Universal.RenderingData::lightData
	LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA  ___lightData_2;
	// UnityEngine.Rendering.Universal.ShadowData UnityEngine.Rendering.Universal.RenderingData::shadowData
	ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E  ___shadowData_3;
	// UnityEngine.Rendering.Universal.PostProcessingData UnityEngine.Rendering.Universal.RenderingData::postProcessingData
	PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113  ___postProcessingData_4;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::supportsDynamicBatching
	bool ___supportsDynamicBatching_5;
	// UnityEngine.Rendering.PerObjectData UnityEngine.Rendering.Universal.RenderingData::perObjectData
	int32_t ___perObjectData_6;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::postProcessingEnabled
	bool ___postProcessingEnabled_7;

public:
	inline static int32_t get_offset_of_cullResults_0() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___cullResults_0)); }
	inline CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760  get_cullResults_0() const { return ___cullResults_0; }
	inline CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760 * get_address_of_cullResults_0() { return &___cullResults_0; }
	inline void set_cullResults_0(CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760  value)
	{
		___cullResults_0 = value;
	}

	inline static int32_t get_offset_of_cameraData_1() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___cameraData_1)); }
	inline CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  get_cameraData_1() const { return ___cameraData_1; }
	inline CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * get_address_of_cameraData_1() { return &___cameraData_1; }
	inline void set_cameraData_1(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  value)
	{
		___cameraData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___camera_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___targetTexture_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___xr_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___captureActions_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___volumeTrigger_25), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___cameraData_1))->___renderer_30), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lightData_2() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___lightData_2)); }
	inline LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA  get_lightData_2() const { return ___lightData_2; }
	inline LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA * get_address_of_lightData_2() { return &___lightData_2; }
	inline void set_lightData_2(LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA  value)
	{
		___lightData_2 = value;
	}

	inline static int32_t get_offset_of_shadowData_3() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___shadowData_3)); }
	inline ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E  get_shadowData_3() const { return ___shadowData_3; }
	inline ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E * get_address_of_shadowData_3() { return &___shadowData_3; }
	inline void set_shadowData_3(ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E  value)
	{
		___shadowData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___shadowData_3))->___bias_11), (void*)NULL);
	}

	inline static int32_t get_offset_of_postProcessingData_4() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___postProcessingData_4)); }
	inline PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113  get_postProcessingData_4() const { return ___postProcessingData_4; }
	inline PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113 * get_address_of_postProcessingData_4() { return &___postProcessingData_4; }
	inline void set_postProcessingData_4(PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113  value)
	{
		___postProcessingData_4 = value;
	}

	inline static int32_t get_offset_of_supportsDynamicBatching_5() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___supportsDynamicBatching_5)); }
	inline bool get_supportsDynamicBatching_5() const { return ___supportsDynamicBatching_5; }
	inline bool* get_address_of_supportsDynamicBatching_5() { return &___supportsDynamicBatching_5; }
	inline void set_supportsDynamicBatching_5(bool value)
	{
		___supportsDynamicBatching_5 = value;
	}

	inline static int32_t get_offset_of_perObjectData_6() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___perObjectData_6)); }
	inline int32_t get_perObjectData_6() const { return ___perObjectData_6; }
	inline int32_t* get_address_of_perObjectData_6() { return &___perObjectData_6; }
	inline void set_perObjectData_6(int32_t value)
	{
		___perObjectData_6 = value;
	}

	inline static int32_t get_offset_of_postProcessingEnabled_7() { return static_cast<int32_t>(offsetof(RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED, ___postProcessingEnabled_7)); }
	inline bool get_postProcessingEnabled_7() const { return ___postProcessingEnabled_7; }
	inline bool* get_address_of_postProcessingEnabled_7() { return &___postProcessingEnabled_7; }
	inline void set_postProcessingEnabled_7(bool value)
	{
		___postProcessingEnabled_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshaled_pinvoke
{
	CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760  ___cullResults_0;
	CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke ___cameraData_1;
	LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshaled_pinvoke ___lightData_2;
	ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshaled_pinvoke ___shadowData_3;
	PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113  ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED_marshaled_com
{
	CullingResults_tDD88138CA53E22569BE3E63082758F29F3988760  ___cullResults_0;
	CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com ___cameraData_1;
	LightData_t03172A543E2E5DCB2281C1A952BB7959B06F26EA_marshaled_com ___lightData_2;
	ShadowData_tEF29C21E9E99EC663D98801116251CE7EED6EA9E_marshaled_com ___shadowData_3;
	PostProcessingData_tB589A3F90B1075694B8C70969063FF9426B5B113  ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
};

// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct  UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67  : public RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_DefaultShader_4;
	// UnityEngine.Rendering.Universal.ScriptableRenderer[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Renderers
	ScriptableRendererU5BU5D_tE2D152F44EBC5F3F3BDEF3A00B00EE07D0C12D90* ___m_Renderers_5;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetVersion
	int32_t ___k_AssetVersion_6;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetPreviousVersion
	int32_t ___k_AssetPreviousVersion_7;
	// UnityEngine.Rendering.Universal.RendererType UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererType
	int32_t ___m_RendererType_8;
	// UnityEngine.Rendering.Universal.ScriptableRendererData UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererData
	ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150 * ___m_RendererData_9;
	// UnityEngine.Rendering.Universal.ScriptableRendererData[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererDataList
	ScriptableRendererDataU5BU5D_tB15BFF39555534E840B4D39EB79E96E7C8942D47* ___m_RendererDataList_10;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultRendererIndex
	int32_t ___m_DefaultRendererIndex_11;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireDepthTexture
	bool ___m_RequireDepthTexture_12;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireOpaqueTexture
	bool ___m_RequireOpaqueTexture_13;
	// UnityEngine.Rendering.Universal.Downsampling UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_OpaqueDownsampling
	int32_t ___m_OpaqueDownsampling_14;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsTerrainHoles
	bool ___m_SupportsTerrainHoles_15;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsHDR
	bool ___m_SupportsHDR_16;
	// UnityEngine.Rendering.Universal.MsaaQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MSAA
	int32_t ___m_MSAA_17;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RenderScale
	float ___m_RenderScale_18;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightRenderingMode
	int32_t ___m_MainLightRenderingMode_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowsSupported
	bool ___m_MainLightShadowsSupported_20;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowmapResolution
	int32_t ___m_MainLightShadowmapResolution_21;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsRenderingMode
	int32_t ___m_AdditionalLightsRenderingMode_22;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsPerObjectLimit
	int32_t ___m_AdditionalLightsPerObjectLimit_23;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightShadowsSupported
	bool ___m_AdditionalLightShadowsSupported_24;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowmapResolution
	int32_t ___m_AdditionalLightsShadowmapResolution_25;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDistance
	float ___m_ShadowDistance_26;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascadeCount
	int32_t ___m_ShadowCascadeCount_27;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade2Split
	float ___m_Cascade2Split_28;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade3Split
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Cascade3Split_29;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade4Split
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Cascade4Split_30;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDepthBias
	float ___m_ShadowDepthBias_31;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowNormalBias
	float ___m_ShadowNormalBias_32;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SoftShadowsSupported
	bool ___m_SoftShadowsSupported_33;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseSRPBatcher
	bool ___m_UseSRPBatcher_34;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsDynamicBatching
	bool ___m_SupportsDynamicBatching_35;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MixedLightingSupported
	bool ___m_MixedLightingSupported_36;
	// UnityEngine.Rendering.Universal.PipelineDebugLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DebugLevel
	int32_t ___m_DebugLevel_37;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseAdaptivePerformance
	bool ___m_UseAdaptivePerformance_38;
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingMode
	int32_t ___m_ColorGradingMode_39;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingLutSize
	int32_t ___m_ColorGradingLutSize_40;
	// UnityEngine.Rendering.Universal.ShadowQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowType
	int32_t ___m_ShadowType_41;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsSupported
	bool ___m_LocalShadowsSupported_42;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsAtlasResolution
	int32_t ___m_LocalShadowsAtlasResolution_43;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MaxPixelLights
	int32_t ___m_MaxPixelLights_44;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowAtlasResolution
	int32_t ___m_ShadowAtlasResolution_45;
	// UnityEngine.Rendering.Universal.ShaderVariantLogLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShaderVariantLogLevel
	int32_t ___m_ShaderVariantLogLevel_46;
	// UnityEngine.Rendering.Universal.ShadowCascadesOption UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascades
	int32_t ___m_ShadowCascades_51;

public:
	inline static int32_t get_offset_of_m_DefaultShader_4() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_DefaultShader_4)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_DefaultShader_4() const { return ___m_DefaultShader_4; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_DefaultShader_4() { return &___m_DefaultShader_4; }
	inline void set_m_DefaultShader_4(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_DefaultShader_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultShader_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Renderers_5() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_Renderers_5)); }
	inline ScriptableRendererU5BU5D_tE2D152F44EBC5F3F3BDEF3A00B00EE07D0C12D90* get_m_Renderers_5() const { return ___m_Renderers_5; }
	inline ScriptableRendererU5BU5D_tE2D152F44EBC5F3F3BDEF3A00B00EE07D0C12D90** get_address_of_m_Renderers_5() { return &___m_Renderers_5; }
	inline void set_m_Renderers_5(ScriptableRendererU5BU5D_tE2D152F44EBC5F3F3BDEF3A00B00EE07D0C12D90* value)
	{
		___m_Renderers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Renderers_5), (void*)value);
	}

	inline static int32_t get_offset_of_k_AssetVersion_6() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___k_AssetVersion_6)); }
	inline int32_t get_k_AssetVersion_6() const { return ___k_AssetVersion_6; }
	inline int32_t* get_address_of_k_AssetVersion_6() { return &___k_AssetVersion_6; }
	inline void set_k_AssetVersion_6(int32_t value)
	{
		___k_AssetVersion_6 = value;
	}

	inline static int32_t get_offset_of_k_AssetPreviousVersion_7() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___k_AssetPreviousVersion_7)); }
	inline int32_t get_k_AssetPreviousVersion_7() const { return ___k_AssetPreviousVersion_7; }
	inline int32_t* get_address_of_k_AssetPreviousVersion_7() { return &___k_AssetPreviousVersion_7; }
	inline void set_k_AssetPreviousVersion_7(int32_t value)
	{
		___k_AssetPreviousVersion_7 = value;
	}

	inline static int32_t get_offset_of_m_RendererType_8() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RendererType_8)); }
	inline int32_t get_m_RendererType_8() const { return ___m_RendererType_8; }
	inline int32_t* get_address_of_m_RendererType_8() { return &___m_RendererType_8; }
	inline void set_m_RendererType_8(int32_t value)
	{
		___m_RendererType_8 = value;
	}

	inline static int32_t get_offset_of_m_RendererData_9() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RendererData_9)); }
	inline ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150 * get_m_RendererData_9() const { return ___m_RendererData_9; }
	inline ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150 ** get_address_of_m_RendererData_9() { return &___m_RendererData_9; }
	inline void set_m_RendererData_9(ScriptableRendererData_tBFB8085518B4B011ED0B4E30258F0D8E06E17150 * value)
	{
		___m_RendererData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererData_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererDataList_10() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RendererDataList_10)); }
	inline ScriptableRendererDataU5BU5D_tB15BFF39555534E840B4D39EB79E96E7C8942D47* get_m_RendererDataList_10() const { return ___m_RendererDataList_10; }
	inline ScriptableRendererDataU5BU5D_tB15BFF39555534E840B4D39EB79E96E7C8942D47** get_address_of_m_RendererDataList_10() { return &___m_RendererDataList_10; }
	inline void set_m_RendererDataList_10(ScriptableRendererDataU5BU5D_tB15BFF39555534E840B4D39EB79E96E7C8942D47* value)
	{
		___m_RendererDataList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererDataList_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultRendererIndex_11() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_DefaultRendererIndex_11)); }
	inline int32_t get_m_DefaultRendererIndex_11() const { return ___m_DefaultRendererIndex_11; }
	inline int32_t* get_address_of_m_DefaultRendererIndex_11() { return &___m_DefaultRendererIndex_11; }
	inline void set_m_DefaultRendererIndex_11(int32_t value)
	{
		___m_DefaultRendererIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_RequireDepthTexture_12() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RequireDepthTexture_12)); }
	inline bool get_m_RequireDepthTexture_12() const { return ___m_RequireDepthTexture_12; }
	inline bool* get_address_of_m_RequireDepthTexture_12() { return &___m_RequireDepthTexture_12; }
	inline void set_m_RequireDepthTexture_12(bool value)
	{
		___m_RequireDepthTexture_12 = value;
	}

	inline static int32_t get_offset_of_m_RequireOpaqueTexture_13() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RequireOpaqueTexture_13)); }
	inline bool get_m_RequireOpaqueTexture_13() const { return ___m_RequireOpaqueTexture_13; }
	inline bool* get_address_of_m_RequireOpaqueTexture_13() { return &___m_RequireOpaqueTexture_13; }
	inline void set_m_RequireOpaqueTexture_13(bool value)
	{
		___m_RequireOpaqueTexture_13 = value;
	}

	inline static int32_t get_offset_of_m_OpaqueDownsampling_14() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_OpaqueDownsampling_14)); }
	inline int32_t get_m_OpaqueDownsampling_14() const { return ___m_OpaqueDownsampling_14; }
	inline int32_t* get_address_of_m_OpaqueDownsampling_14() { return &___m_OpaqueDownsampling_14; }
	inline void set_m_OpaqueDownsampling_14(int32_t value)
	{
		___m_OpaqueDownsampling_14 = value;
	}

	inline static int32_t get_offset_of_m_SupportsTerrainHoles_15() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_SupportsTerrainHoles_15)); }
	inline bool get_m_SupportsTerrainHoles_15() const { return ___m_SupportsTerrainHoles_15; }
	inline bool* get_address_of_m_SupportsTerrainHoles_15() { return &___m_SupportsTerrainHoles_15; }
	inline void set_m_SupportsTerrainHoles_15(bool value)
	{
		___m_SupportsTerrainHoles_15 = value;
	}

	inline static int32_t get_offset_of_m_SupportsHDR_16() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_SupportsHDR_16)); }
	inline bool get_m_SupportsHDR_16() const { return ___m_SupportsHDR_16; }
	inline bool* get_address_of_m_SupportsHDR_16() { return &___m_SupportsHDR_16; }
	inline void set_m_SupportsHDR_16(bool value)
	{
		___m_SupportsHDR_16 = value;
	}

	inline static int32_t get_offset_of_m_MSAA_17() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MSAA_17)); }
	inline int32_t get_m_MSAA_17() const { return ___m_MSAA_17; }
	inline int32_t* get_address_of_m_MSAA_17() { return &___m_MSAA_17; }
	inline void set_m_MSAA_17(int32_t value)
	{
		___m_MSAA_17 = value;
	}

	inline static int32_t get_offset_of_m_RenderScale_18() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_RenderScale_18)); }
	inline float get_m_RenderScale_18() const { return ___m_RenderScale_18; }
	inline float* get_address_of_m_RenderScale_18() { return &___m_RenderScale_18; }
	inline void set_m_RenderScale_18(float value)
	{
		___m_RenderScale_18 = value;
	}

	inline static int32_t get_offset_of_m_MainLightRenderingMode_19() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MainLightRenderingMode_19)); }
	inline int32_t get_m_MainLightRenderingMode_19() const { return ___m_MainLightRenderingMode_19; }
	inline int32_t* get_address_of_m_MainLightRenderingMode_19() { return &___m_MainLightRenderingMode_19; }
	inline void set_m_MainLightRenderingMode_19(int32_t value)
	{
		___m_MainLightRenderingMode_19 = value;
	}

	inline static int32_t get_offset_of_m_MainLightShadowsSupported_20() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MainLightShadowsSupported_20)); }
	inline bool get_m_MainLightShadowsSupported_20() const { return ___m_MainLightShadowsSupported_20; }
	inline bool* get_address_of_m_MainLightShadowsSupported_20() { return &___m_MainLightShadowsSupported_20; }
	inline void set_m_MainLightShadowsSupported_20(bool value)
	{
		___m_MainLightShadowsSupported_20 = value;
	}

	inline static int32_t get_offset_of_m_MainLightShadowmapResolution_21() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MainLightShadowmapResolution_21)); }
	inline int32_t get_m_MainLightShadowmapResolution_21() const { return ___m_MainLightShadowmapResolution_21; }
	inline int32_t* get_address_of_m_MainLightShadowmapResolution_21() { return &___m_MainLightShadowmapResolution_21; }
	inline void set_m_MainLightShadowmapResolution_21(int32_t value)
	{
		___m_MainLightShadowmapResolution_21 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalLightsRenderingMode_22() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_AdditionalLightsRenderingMode_22)); }
	inline int32_t get_m_AdditionalLightsRenderingMode_22() const { return ___m_AdditionalLightsRenderingMode_22; }
	inline int32_t* get_address_of_m_AdditionalLightsRenderingMode_22() { return &___m_AdditionalLightsRenderingMode_22; }
	inline void set_m_AdditionalLightsRenderingMode_22(int32_t value)
	{
		___m_AdditionalLightsRenderingMode_22 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalLightsPerObjectLimit_23() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_AdditionalLightsPerObjectLimit_23)); }
	inline int32_t get_m_AdditionalLightsPerObjectLimit_23() const { return ___m_AdditionalLightsPerObjectLimit_23; }
	inline int32_t* get_address_of_m_AdditionalLightsPerObjectLimit_23() { return &___m_AdditionalLightsPerObjectLimit_23; }
	inline void set_m_AdditionalLightsPerObjectLimit_23(int32_t value)
	{
		___m_AdditionalLightsPerObjectLimit_23 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalLightShadowsSupported_24() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_AdditionalLightShadowsSupported_24)); }
	inline bool get_m_AdditionalLightShadowsSupported_24() const { return ___m_AdditionalLightShadowsSupported_24; }
	inline bool* get_address_of_m_AdditionalLightShadowsSupported_24() { return &___m_AdditionalLightShadowsSupported_24; }
	inline void set_m_AdditionalLightShadowsSupported_24(bool value)
	{
		___m_AdditionalLightShadowsSupported_24 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalLightsShadowmapResolution_25() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_AdditionalLightsShadowmapResolution_25)); }
	inline int32_t get_m_AdditionalLightsShadowmapResolution_25() const { return ___m_AdditionalLightsShadowmapResolution_25; }
	inline int32_t* get_address_of_m_AdditionalLightsShadowmapResolution_25() { return &___m_AdditionalLightsShadowmapResolution_25; }
	inline void set_m_AdditionalLightsShadowmapResolution_25(int32_t value)
	{
		___m_AdditionalLightsShadowmapResolution_25 = value;
	}

	inline static int32_t get_offset_of_m_ShadowDistance_26() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowDistance_26)); }
	inline float get_m_ShadowDistance_26() const { return ___m_ShadowDistance_26; }
	inline float* get_address_of_m_ShadowDistance_26() { return &___m_ShadowDistance_26; }
	inline void set_m_ShadowDistance_26(float value)
	{
		___m_ShadowDistance_26 = value;
	}

	inline static int32_t get_offset_of_m_ShadowCascadeCount_27() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowCascadeCount_27)); }
	inline int32_t get_m_ShadowCascadeCount_27() const { return ___m_ShadowCascadeCount_27; }
	inline int32_t* get_address_of_m_ShadowCascadeCount_27() { return &___m_ShadowCascadeCount_27; }
	inline void set_m_ShadowCascadeCount_27(int32_t value)
	{
		___m_ShadowCascadeCount_27 = value;
	}

	inline static int32_t get_offset_of_m_Cascade2Split_28() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_Cascade2Split_28)); }
	inline float get_m_Cascade2Split_28() const { return ___m_Cascade2Split_28; }
	inline float* get_address_of_m_Cascade2Split_28() { return &___m_Cascade2Split_28; }
	inline void set_m_Cascade2Split_28(float value)
	{
		___m_Cascade2Split_28 = value;
	}

	inline static int32_t get_offset_of_m_Cascade3Split_29() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_Cascade3Split_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Cascade3Split_29() const { return ___m_Cascade3Split_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Cascade3Split_29() { return &___m_Cascade3Split_29; }
	inline void set_m_Cascade3Split_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Cascade3Split_29 = value;
	}

	inline static int32_t get_offset_of_m_Cascade4Split_30() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_Cascade4Split_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Cascade4Split_30() const { return ___m_Cascade4Split_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Cascade4Split_30() { return &___m_Cascade4Split_30; }
	inline void set_m_Cascade4Split_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Cascade4Split_30 = value;
	}

	inline static int32_t get_offset_of_m_ShadowDepthBias_31() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowDepthBias_31)); }
	inline float get_m_ShadowDepthBias_31() const { return ___m_ShadowDepthBias_31; }
	inline float* get_address_of_m_ShadowDepthBias_31() { return &___m_ShadowDepthBias_31; }
	inline void set_m_ShadowDepthBias_31(float value)
	{
		___m_ShadowDepthBias_31 = value;
	}

	inline static int32_t get_offset_of_m_ShadowNormalBias_32() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowNormalBias_32)); }
	inline float get_m_ShadowNormalBias_32() const { return ___m_ShadowNormalBias_32; }
	inline float* get_address_of_m_ShadowNormalBias_32() { return &___m_ShadowNormalBias_32; }
	inline void set_m_ShadowNormalBias_32(float value)
	{
		___m_ShadowNormalBias_32 = value;
	}

	inline static int32_t get_offset_of_m_SoftShadowsSupported_33() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_SoftShadowsSupported_33)); }
	inline bool get_m_SoftShadowsSupported_33() const { return ___m_SoftShadowsSupported_33; }
	inline bool* get_address_of_m_SoftShadowsSupported_33() { return &___m_SoftShadowsSupported_33; }
	inline void set_m_SoftShadowsSupported_33(bool value)
	{
		___m_SoftShadowsSupported_33 = value;
	}

	inline static int32_t get_offset_of_m_UseSRPBatcher_34() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_UseSRPBatcher_34)); }
	inline bool get_m_UseSRPBatcher_34() const { return ___m_UseSRPBatcher_34; }
	inline bool* get_address_of_m_UseSRPBatcher_34() { return &___m_UseSRPBatcher_34; }
	inline void set_m_UseSRPBatcher_34(bool value)
	{
		___m_UseSRPBatcher_34 = value;
	}

	inline static int32_t get_offset_of_m_SupportsDynamicBatching_35() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_SupportsDynamicBatching_35)); }
	inline bool get_m_SupportsDynamicBatching_35() const { return ___m_SupportsDynamicBatching_35; }
	inline bool* get_address_of_m_SupportsDynamicBatching_35() { return &___m_SupportsDynamicBatching_35; }
	inline void set_m_SupportsDynamicBatching_35(bool value)
	{
		___m_SupportsDynamicBatching_35 = value;
	}

	inline static int32_t get_offset_of_m_MixedLightingSupported_36() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MixedLightingSupported_36)); }
	inline bool get_m_MixedLightingSupported_36() const { return ___m_MixedLightingSupported_36; }
	inline bool* get_address_of_m_MixedLightingSupported_36() { return &___m_MixedLightingSupported_36; }
	inline void set_m_MixedLightingSupported_36(bool value)
	{
		___m_MixedLightingSupported_36 = value;
	}

	inline static int32_t get_offset_of_m_DebugLevel_37() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_DebugLevel_37)); }
	inline int32_t get_m_DebugLevel_37() const { return ___m_DebugLevel_37; }
	inline int32_t* get_address_of_m_DebugLevel_37() { return &___m_DebugLevel_37; }
	inline void set_m_DebugLevel_37(int32_t value)
	{
		___m_DebugLevel_37 = value;
	}

	inline static int32_t get_offset_of_m_UseAdaptivePerformance_38() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_UseAdaptivePerformance_38)); }
	inline bool get_m_UseAdaptivePerformance_38() const { return ___m_UseAdaptivePerformance_38; }
	inline bool* get_address_of_m_UseAdaptivePerformance_38() { return &___m_UseAdaptivePerformance_38; }
	inline void set_m_UseAdaptivePerformance_38(bool value)
	{
		___m_UseAdaptivePerformance_38 = value;
	}

	inline static int32_t get_offset_of_m_ColorGradingMode_39() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ColorGradingMode_39)); }
	inline int32_t get_m_ColorGradingMode_39() const { return ___m_ColorGradingMode_39; }
	inline int32_t* get_address_of_m_ColorGradingMode_39() { return &___m_ColorGradingMode_39; }
	inline void set_m_ColorGradingMode_39(int32_t value)
	{
		___m_ColorGradingMode_39 = value;
	}

	inline static int32_t get_offset_of_m_ColorGradingLutSize_40() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ColorGradingLutSize_40)); }
	inline int32_t get_m_ColorGradingLutSize_40() const { return ___m_ColorGradingLutSize_40; }
	inline int32_t* get_address_of_m_ColorGradingLutSize_40() { return &___m_ColorGradingLutSize_40; }
	inline void set_m_ColorGradingLutSize_40(int32_t value)
	{
		___m_ColorGradingLutSize_40 = value;
	}

	inline static int32_t get_offset_of_m_ShadowType_41() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowType_41)); }
	inline int32_t get_m_ShadowType_41() const { return ___m_ShadowType_41; }
	inline int32_t* get_address_of_m_ShadowType_41() { return &___m_ShadowType_41; }
	inline void set_m_ShadowType_41(int32_t value)
	{
		___m_ShadowType_41 = value;
	}

	inline static int32_t get_offset_of_m_LocalShadowsSupported_42() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_LocalShadowsSupported_42)); }
	inline bool get_m_LocalShadowsSupported_42() const { return ___m_LocalShadowsSupported_42; }
	inline bool* get_address_of_m_LocalShadowsSupported_42() { return &___m_LocalShadowsSupported_42; }
	inline void set_m_LocalShadowsSupported_42(bool value)
	{
		___m_LocalShadowsSupported_42 = value;
	}

	inline static int32_t get_offset_of_m_LocalShadowsAtlasResolution_43() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_LocalShadowsAtlasResolution_43)); }
	inline int32_t get_m_LocalShadowsAtlasResolution_43() const { return ___m_LocalShadowsAtlasResolution_43; }
	inline int32_t* get_address_of_m_LocalShadowsAtlasResolution_43() { return &___m_LocalShadowsAtlasResolution_43; }
	inline void set_m_LocalShadowsAtlasResolution_43(int32_t value)
	{
		___m_LocalShadowsAtlasResolution_43 = value;
	}

	inline static int32_t get_offset_of_m_MaxPixelLights_44() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_MaxPixelLights_44)); }
	inline int32_t get_m_MaxPixelLights_44() const { return ___m_MaxPixelLights_44; }
	inline int32_t* get_address_of_m_MaxPixelLights_44() { return &___m_MaxPixelLights_44; }
	inline void set_m_MaxPixelLights_44(int32_t value)
	{
		___m_MaxPixelLights_44 = value;
	}

	inline static int32_t get_offset_of_m_ShadowAtlasResolution_45() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowAtlasResolution_45)); }
	inline int32_t get_m_ShadowAtlasResolution_45() const { return ___m_ShadowAtlasResolution_45; }
	inline int32_t* get_address_of_m_ShadowAtlasResolution_45() { return &___m_ShadowAtlasResolution_45; }
	inline void set_m_ShadowAtlasResolution_45(int32_t value)
	{
		___m_ShadowAtlasResolution_45 = value;
	}

	inline static int32_t get_offset_of_m_ShaderVariantLogLevel_46() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShaderVariantLogLevel_46)); }
	inline int32_t get_m_ShaderVariantLogLevel_46() const { return ___m_ShaderVariantLogLevel_46; }
	inline int32_t* get_address_of_m_ShaderVariantLogLevel_46() { return &___m_ShaderVariantLogLevel_46; }
	inline void set_m_ShaderVariantLogLevel_46(int32_t value)
	{
		___m_ShaderVariantLogLevel_46 = value;
	}

	inline static int32_t get_offset_of_m_ShadowCascades_51() { return static_cast<int32_t>(offsetof(UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67, ___m_ShadowCascades_51)); }
	inline int32_t get_m_ShadowCascades_51() const { return ___m_ShadowCascades_51; }
	inline int32_t* get_address_of_m_ShadowCascades_51() { return &___m_ShadowCascades_51; }
	inline void set_m_ShadowCascades_51(int32_t value)
	{
		___m_ShadowCascades_51 = value;
	}
};


// StylizedWater.PlanarReflections
struct  PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single StylizedWater.PlanarReflections::renderScale
	float ___renderScale_4;
	// UnityEngine.LayerMask StylizedWater.PlanarReflections::reflectionLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___reflectionLayer_5;
	// System.Boolean StylizedWater.PlanarReflections::reflectSkybox
	bool ___reflectSkybox_6;
	// UnityEngine.GameObject StylizedWater.PlanarReflections::reflectionTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___reflectionTarget_7;
	// System.Single StylizedWater.PlanarReflections::reflectionPlaneOffset
	float ___reflectionPlaneOffset_8;
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData StylizedWater.PlanarReflections::cameraData
	UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * ___cameraData_10;
	// UnityEngine.RenderTextureDescriptor StylizedWater.PlanarReflections::previousDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___previousDescriptor_12;
	// System.Int32 StylizedWater.PlanarReflections::_planarReflectionTextureId
	int32_t ____planarReflectionTextureId_13;
	// System.Boolean StylizedWater.PlanarReflections::hideReflectionCamera
	bool ___hideReflectionCamera_15;

public:
	inline static int32_t get_offset_of_renderScale_4() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___renderScale_4)); }
	inline float get_renderScale_4() const { return ___renderScale_4; }
	inline float* get_address_of_renderScale_4() { return &___renderScale_4; }
	inline void set_renderScale_4(float value)
	{
		___renderScale_4 = value;
	}

	inline static int32_t get_offset_of_reflectionLayer_5() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___reflectionLayer_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_reflectionLayer_5() const { return ___reflectionLayer_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_reflectionLayer_5() { return &___reflectionLayer_5; }
	inline void set_reflectionLayer_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___reflectionLayer_5 = value;
	}

	inline static int32_t get_offset_of_reflectSkybox_6() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___reflectSkybox_6)); }
	inline bool get_reflectSkybox_6() const { return ___reflectSkybox_6; }
	inline bool* get_address_of_reflectSkybox_6() { return &___reflectSkybox_6; }
	inline void set_reflectSkybox_6(bool value)
	{
		___reflectSkybox_6 = value;
	}

	inline static int32_t get_offset_of_reflectionTarget_7() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___reflectionTarget_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_reflectionTarget_7() const { return ___reflectionTarget_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_reflectionTarget_7() { return &___reflectionTarget_7; }
	inline void set_reflectionTarget_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___reflectionTarget_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reflectionTarget_7), (void*)value);
	}

	inline static int32_t get_offset_of_reflectionPlaneOffset_8() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___reflectionPlaneOffset_8)); }
	inline float get_reflectionPlaneOffset_8() const { return ___reflectionPlaneOffset_8; }
	inline float* get_address_of_reflectionPlaneOffset_8() { return &___reflectionPlaneOffset_8; }
	inline void set_reflectionPlaneOffset_8(float value)
	{
		___reflectionPlaneOffset_8 = value;
	}

	inline static int32_t get_offset_of_cameraData_10() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___cameraData_10)); }
	inline UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * get_cameraData_10() const { return ___cameraData_10; }
	inline UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E ** get_address_of_cameraData_10() { return &___cameraData_10; }
	inline void set_cameraData_10(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * value)
	{
		___cameraData_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraData_10), (void*)value);
	}

	inline static int32_t get_offset_of_previousDescriptor_12() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___previousDescriptor_12)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_previousDescriptor_12() const { return ___previousDescriptor_12; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_previousDescriptor_12() { return &___previousDescriptor_12; }
	inline void set_previousDescriptor_12(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___previousDescriptor_12 = value;
	}

	inline static int32_t get_offset_of__planarReflectionTextureId_13() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ____planarReflectionTextureId_13)); }
	inline int32_t get__planarReflectionTextureId_13() const { return ____planarReflectionTextureId_13; }
	inline int32_t* get_address_of__planarReflectionTextureId_13() { return &____planarReflectionTextureId_13; }
	inline void set__planarReflectionTextureId_13(int32_t value)
	{
		____planarReflectionTextureId_13 = value;
	}

	inline static int32_t get_offset_of_hideReflectionCamera_15() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC, ___hideReflectionCamera_15)); }
	inline bool get_hideReflectionCamera_15() const { return ___hideReflectionCamera_15; }
	inline bool* get_address_of_hideReflectionCamera_15() { return &___hideReflectionCamera_15; }
	inline void set_hideReflectionCamera_15(bool value)
	{
		___hideReflectionCamera_15 = value;
	}
};

struct PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields
{
public:
	// UnityEngine.Camera StylizedWater.PlanarReflections::_reflectionCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____reflectionCamera_9;
	// UnityEngine.RenderTexture StylizedWater.PlanarReflections::_reflectionTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ____reflectionTexture_11;
	// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> StylizedWater.PlanarReflections::BeginPlanarReflections
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___BeginPlanarReflections_14;

public:
	inline static int32_t get_offset_of__reflectionCamera_9() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields, ____reflectionCamera_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__reflectionCamera_9() const { return ____reflectionCamera_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__reflectionCamera_9() { return &____reflectionCamera_9; }
	inline void set__reflectionCamera_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____reflectionCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reflectionCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of__reflectionTexture_11() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields, ____reflectionTexture_11)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get__reflectionTexture_11() const { return ____reflectionTexture_11; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of__reflectionTexture_11() { return &____reflectionTexture_11; }
	inline void set__reflectionTexture_11(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		____reflectionTexture_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reflectionTexture_11), (void*)value);
	}

	inline static int32_t get_offset_of_BeginPlanarReflections_14() { return static_cast<int32_t>(offsetof(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields, ___BeginPlanarReflections_14)); }
	inline Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * get_BeginPlanarReflections_14() const { return ___BeginPlanarReflections_14; }
	inline Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA ** get_address_of_BeginPlanarReflections_14() { return &___BeginPlanarReflections_14; }
	inline void set_BeginPlanarReflections_14(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * value)
	{
		___BeginPlanarReflections_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginPlanarReflections_14), (void*)value);
	}
};


// StylizedWater.StylizedWaterURP
struct  StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean StylizedWater.StylizedWaterURP::refractionExpanded
	bool ___refractionExpanded_4;
	// System.Boolean StylizedWater.StylizedWaterURP::vertexPaintingExpanded
	bool ___vertexPaintingExpanded_5;
	// System.Boolean StylizedWater.StylizedWaterURP::surfaceFoamExpanded
	bool ___surfaceFoamExpanded_6;
	// System.Boolean StylizedWater.StylizedWaterURP::foamShadowsExpanded
	bool ___foamShadowsExpanded_7;
	// System.Boolean StylizedWater.StylizedWaterURP::intersectionEffectsExpanded
	bool ___intersectionEffectsExpanded_8;
	// System.Boolean StylizedWater.StylizedWaterURP::planarReflectionsExpanded
	bool ___planarReflectionsExpanded_9;
	// System.Boolean StylizedWater.StylizedWaterURP::causticsExpanded
	bool ___causticsExpanded_10;
	// System.Single StylizedWater.StylizedWaterURP::reflectionStrength
	float ___reflectionStrength_14;
	// System.Single StylizedWater.StylizedWaterURP::reflectionFresnel
	float ___reflectionFresnel_15;
	// System.Single StylizedWater.StylizedWaterURP::causticsStrength
	float ___causticsStrength_16;
	// UnityEngine.Texture StylizedWater.StylizedWaterURP::causticsTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___causticsTexture_17;
	// System.Single StylizedWater.StylizedWaterURP::causticsSplit
	float ___causticsSplit_18;
	// System.Single StylizedWater.StylizedWaterURP::causticsSpeed
	float ___causticsSpeed_19;
	// System.Single StylizedWater.StylizedWaterURP::causticsScale
	float ___causticsScale_20;
	// System.Single StylizedWater.StylizedWaterURP::causticsShadowMask
	float ___causticsShadowMask_21;
	// UnityEngine.Matrix4x4 StylizedWater.StylizedWaterURP::causticsLightMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___causticsLightMatrix_22;
	// System.Boolean StylizedWater.StylizedWaterURP::useLegacyCaustics
	bool ___useLegacyCaustics_23;
	// System.Single StylizedWater.StylizedWaterURP::causticsDepth
	float ___causticsDepth_24;
	// System.Boolean StylizedWater.StylizedWaterURP::useColorGradient
	bool ___useColorGradient_25;
	// UnityEngine.Gradient StylizedWater.StylizedWaterURP::colorGradient
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___colorGradient_26;
	// UnityEngine.Texture2D StylizedWater.StylizedWaterURP::colorGradientTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___colorGradientTexture_27;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::shallowColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shallowColor_28;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::deepColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___deepColor_29;
	// System.Single StylizedWater.StylizedWaterURP::colorDepth
	float ___colorDepth_30;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::horizonColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___horizonColor_31;
	// System.Single StylizedWater.StylizedWaterURP::horizonDistance
	float ___horizonDistance_32;
	// System.Single StylizedWater.StylizedWaterURP::shoreFade
	float ___shoreFade_33;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::shoreColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shoreColor_34;
	// System.Single StylizedWater.StylizedWaterURP::shoreStrength
	float ___shoreStrength_35;
	// System.Single StylizedWater.StylizedWaterURP::shoreBlend
	float ___shoreBlend_36;
	// System.Single StylizedWater.StylizedWaterURP::shoreDepth
	float ___shoreDepth_37;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::waveColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___waveColor_38;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::underwaterColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___underwaterColor_39;
	// System.Single StylizedWater.StylizedWaterURP::underwaterColorStrength
	float ___underwaterColorStrength_40;
	// System.Single StylizedWater.StylizedWaterURP::underwaterRefractionStrength
	float ___underwaterRefractionStrength_41;
	// UnityEngine.Texture StylizedWater.StylizedWaterURP::surfaceFoamTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___surfaceFoamTexture_42;
	// UnityEngine.Vector2 StylizedWater.StylizedWaterURP::surfaceFoamSampling
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___surfaceFoamSampling_43;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamCutoff
	float ___surfaceFoamCutoff_44;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamDistortion
	float ___surfaceFoamDistortion_45;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamBlend
	float ___surfaceFoamBlend_46;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::surfaceFoamColor1
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___surfaceFoamColor1_47;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::surfaceFoamColor2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___surfaceFoamColor2_48;
	// UnityEngine.Vector4 StylizedWater.StylizedWaterURP::surfaceFoamMovement
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___surfaceFoamMovement_49;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamDirection1
	float ___surfaceFoamDirection1_50;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamDirection2
	float ___surfaceFoamDirection2_51;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamSpeed1
	float ___surfaceFoamSpeed1_52;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamSpeed2
	float ___surfaceFoamSpeed2_53;
	// UnityEngine.Vector4 StylizedWater.StylizedWaterURP::surfaceFoamTilingAndOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___surfaceFoamTilingAndOffset_54;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamOffsetX
	float ___surfaceFoamOffsetX_55;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamOffsetY
	float ___surfaceFoamOffsetY_56;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamScale1
	float ___surfaceFoamScale1_57;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamScale2
	float ___surfaceFoamScale2_58;
	// System.Boolean StylizedWater.StylizedWaterURP::enableSurfaceFoam
	bool ___enableSurfaceFoam_59;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamHeightMask
	float ___surfaceFoamHeightMask_60;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamHeightMaskSmoothness
	float ___surfaceFoamHeightMaskSmoothness_61;
	// System.Boolean StylizedWater.StylizedWaterURP::enableHeightMask
	bool ___enableHeightMask_62;
	// System.Single StylizedWater.StylizedWaterURP::foamShadowStrength
	float ___foamShadowStrength_63;
	// System.Single StylizedWater.StylizedWaterURP::foamShadowDepth
	float ___foamShadowDepth_64;
	// System.Single StylizedWater.StylizedWaterURP::surfaceFoamShadowProjection
	float ___surfaceFoamShadowProjection_65;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamShadowProjection
	float ___intersectionFoamShadowProjection_66;
	// StylizedWater.StylizedWaterURP/FoamMovement StylizedWater.StylizedWaterURP::foamMovement
	int32_t ___foamMovement_67;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamDepth
	float ___intersectionFoamDepth_68;
	// UnityEngine.Texture StylizedWater.StylizedWaterURP::intersectionFoamTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___intersectionFoamTexture_69;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::intersectionFoamColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___intersectionFoamColor_70;
	// UnityEngine.Vector2 StylizedWater.StylizedWaterURP::intersectionFoamMovement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___intersectionFoamMovement_71;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamDirection
	float ___intersectionFoamDirection_72;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamSpeed
	float ___intersectionFoamSpeed_73;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamScale
	float ___intersectionFoamScale_74;
	// UnityEngine.Vector2 StylizedWater.StylizedWaterURP::intersectionFoamSampling
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___intersectionFoamSampling_75;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamCutoff
	float ___intersectionFoamCutoff_76;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamDistortion
	float ___intersectionFoamDistortion_77;
	// System.Boolean StylizedWater.StylizedWaterURP::enableIntersectionEffects
	bool ___enableIntersectionEffects_78;
	// System.Single StylizedWater.StylizedWaterURP::intersectionFoamBlend
	float ___intersectionFoamBlend_79;
	// System.Single StylizedWater.StylizedWaterURP::intersectionWaterBlend
	float ___intersectionWaterBlend_80;
	// System.Single StylizedWater.StylizedWaterURP::shoreFoamSpeed
	float ___shoreFoamSpeed_81;
	// System.Single StylizedWater.StylizedWaterURP::shoreFoamWidth
	float ___shoreFoamWidth_82;
	// System.Single StylizedWater.StylizedWaterURP::shoreFoamFrequency
	float ___shoreFoamFrequency_83;
	// System.Single StylizedWater.StylizedWaterURP::shoreFoamBreakupStrength
	float ___shoreFoamBreakupStrength_84;
	// System.Single StylizedWater.StylizedWaterURP::shoreFoamBreakupScale
	float ___shoreFoamBreakupScale_85;
	// StylizedWater.StylizedWaterURP/Lighting StylizedWater.StylizedWaterURP::lighting
	int32_t ___lighting_86;
	// System.Single StylizedWater.StylizedWaterURP::lightingSmoothness
	float ___lightingSmoothness_87;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::lightingSpecularColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightingSpecularColor_88;
	// UnityEngine.Color StylizedWater.StylizedWaterURP::lightingDiffuseColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightingDiffuseColor_89;
	// System.Single StylizedWater.StylizedWaterURP::lightingHardness
	float ___lightingHardness_90;
	// UnityEngine.Texture StylizedWater.StylizedWaterURP::normalsTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___normalsTexture_91;
	// UnityEngine.Vector2 StylizedWater.StylizedWaterURP::normalsMovement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalsMovement_92;
	// System.Single StylizedWater.StylizedWaterURP::normalsStrength
	float ___normalsStrength_93;
	// System.Single StylizedWater.StylizedWaterURP::normalsScale
	float ___normalsScale_94;
	// System.Single StylizedWater.StylizedWaterURP::normalsSpeed
	float ___normalsSpeed_95;
	// System.Single StylizedWater.StylizedWaterURP::refractionStrength
	float ___refractionStrength_96;
	// UnityEngine.Vector3 StylizedWater.StylizedWaterURP::waveVisuals
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___waveVisuals_97;
	// System.Single StylizedWater.StylizedWaterURP::waveSteepness
	float ___waveSteepness_98;
	// System.Single StylizedWater.StylizedWaterURP::waveLength
	float ___waveLength_99;
	// System.Single StylizedWater.StylizedWaterURP::waveSpeed
	float ___waveSpeed_100;
	// UnityEngine.Vector4 StylizedWater.StylizedWaterURP::waveDirections
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___waveDirections_101;
	// System.Single StylizedWater.StylizedWaterURP::waveDirection1
	float ___waveDirection1_102;
	// System.Single StylizedWater.StylizedWaterURP::waveDirection2
	float ___waveDirection2_103;
	// System.Single StylizedWater.StylizedWaterURP::waveDirection3
	float ___waveDirection3_104;
	// System.Single StylizedWater.StylizedWaterURP::waveDirection4
	float ___waveDirection4_105;
	// StylizedWater.StylizedWaterURP/WaterUVs StylizedWater.StylizedWaterURP::waterUVs
	int32_t ___waterUVs_106;
	// System.Boolean StylizedWater.StylizedWaterURP::hideComponents
	bool ___hideComponents_107;
	// System.Boolean StylizedWater.StylizedWaterURP::enableFoamShadows
	bool ___enableFoamShadows_108;
	// System.Boolean StylizedWater.StylizedWaterURP::enableRefraction
	bool ___enableRefraction_109;
	// UnityEngine.MeshRenderer StylizedWater.StylizedWaterURP::meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer_110;
	// UnityEngine.MeshFilter StylizedWater.StylizedWaterURP::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_111;
	// UnityEngine.Material StylizedWater.StylizedWaterURP::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_112;

public:
	inline static int32_t get_offset_of_refractionExpanded_4() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___refractionExpanded_4)); }
	inline bool get_refractionExpanded_4() const { return ___refractionExpanded_4; }
	inline bool* get_address_of_refractionExpanded_4() { return &___refractionExpanded_4; }
	inline void set_refractionExpanded_4(bool value)
	{
		___refractionExpanded_4 = value;
	}

	inline static int32_t get_offset_of_vertexPaintingExpanded_5() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___vertexPaintingExpanded_5)); }
	inline bool get_vertexPaintingExpanded_5() const { return ___vertexPaintingExpanded_5; }
	inline bool* get_address_of_vertexPaintingExpanded_5() { return &___vertexPaintingExpanded_5; }
	inline void set_vertexPaintingExpanded_5(bool value)
	{
		___vertexPaintingExpanded_5 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamExpanded_6() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamExpanded_6)); }
	inline bool get_surfaceFoamExpanded_6() const { return ___surfaceFoamExpanded_6; }
	inline bool* get_address_of_surfaceFoamExpanded_6() { return &___surfaceFoamExpanded_6; }
	inline void set_surfaceFoamExpanded_6(bool value)
	{
		___surfaceFoamExpanded_6 = value;
	}

	inline static int32_t get_offset_of_foamShadowsExpanded_7() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___foamShadowsExpanded_7)); }
	inline bool get_foamShadowsExpanded_7() const { return ___foamShadowsExpanded_7; }
	inline bool* get_address_of_foamShadowsExpanded_7() { return &___foamShadowsExpanded_7; }
	inline void set_foamShadowsExpanded_7(bool value)
	{
		___foamShadowsExpanded_7 = value;
	}

	inline static int32_t get_offset_of_intersectionEffectsExpanded_8() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionEffectsExpanded_8)); }
	inline bool get_intersectionEffectsExpanded_8() const { return ___intersectionEffectsExpanded_8; }
	inline bool* get_address_of_intersectionEffectsExpanded_8() { return &___intersectionEffectsExpanded_8; }
	inline void set_intersectionEffectsExpanded_8(bool value)
	{
		___intersectionEffectsExpanded_8 = value;
	}

	inline static int32_t get_offset_of_planarReflectionsExpanded_9() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___planarReflectionsExpanded_9)); }
	inline bool get_planarReflectionsExpanded_9() const { return ___planarReflectionsExpanded_9; }
	inline bool* get_address_of_planarReflectionsExpanded_9() { return &___planarReflectionsExpanded_9; }
	inline void set_planarReflectionsExpanded_9(bool value)
	{
		___planarReflectionsExpanded_9 = value;
	}

	inline static int32_t get_offset_of_causticsExpanded_10() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsExpanded_10)); }
	inline bool get_causticsExpanded_10() const { return ___causticsExpanded_10; }
	inline bool* get_address_of_causticsExpanded_10() { return &___causticsExpanded_10; }
	inline void set_causticsExpanded_10(bool value)
	{
		___causticsExpanded_10 = value;
	}

	inline static int32_t get_offset_of_reflectionStrength_14() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___reflectionStrength_14)); }
	inline float get_reflectionStrength_14() const { return ___reflectionStrength_14; }
	inline float* get_address_of_reflectionStrength_14() { return &___reflectionStrength_14; }
	inline void set_reflectionStrength_14(float value)
	{
		___reflectionStrength_14 = value;
	}

	inline static int32_t get_offset_of_reflectionFresnel_15() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___reflectionFresnel_15)); }
	inline float get_reflectionFresnel_15() const { return ___reflectionFresnel_15; }
	inline float* get_address_of_reflectionFresnel_15() { return &___reflectionFresnel_15; }
	inline void set_reflectionFresnel_15(float value)
	{
		___reflectionFresnel_15 = value;
	}

	inline static int32_t get_offset_of_causticsStrength_16() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsStrength_16)); }
	inline float get_causticsStrength_16() const { return ___causticsStrength_16; }
	inline float* get_address_of_causticsStrength_16() { return &___causticsStrength_16; }
	inline void set_causticsStrength_16(float value)
	{
		___causticsStrength_16 = value;
	}

	inline static int32_t get_offset_of_causticsTexture_17() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsTexture_17)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_causticsTexture_17() const { return ___causticsTexture_17; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_causticsTexture_17() { return &___causticsTexture_17; }
	inline void set_causticsTexture_17(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___causticsTexture_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___causticsTexture_17), (void*)value);
	}

	inline static int32_t get_offset_of_causticsSplit_18() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsSplit_18)); }
	inline float get_causticsSplit_18() const { return ___causticsSplit_18; }
	inline float* get_address_of_causticsSplit_18() { return &___causticsSplit_18; }
	inline void set_causticsSplit_18(float value)
	{
		___causticsSplit_18 = value;
	}

	inline static int32_t get_offset_of_causticsSpeed_19() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsSpeed_19)); }
	inline float get_causticsSpeed_19() const { return ___causticsSpeed_19; }
	inline float* get_address_of_causticsSpeed_19() { return &___causticsSpeed_19; }
	inline void set_causticsSpeed_19(float value)
	{
		___causticsSpeed_19 = value;
	}

	inline static int32_t get_offset_of_causticsScale_20() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsScale_20)); }
	inline float get_causticsScale_20() const { return ___causticsScale_20; }
	inline float* get_address_of_causticsScale_20() { return &___causticsScale_20; }
	inline void set_causticsScale_20(float value)
	{
		___causticsScale_20 = value;
	}

	inline static int32_t get_offset_of_causticsShadowMask_21() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsShadowMask_21)); }
	inline float get_causticsShadowMask_21() const { return ___causticsShadowMask_21; }
	inline float* get_address_of_causticsShadowMask_21() { return &___causticsShadowMask_21; }
	inline void set_causticsShadowMask_21(float value)
	{
		___causticsShadowMask_21 = value;
	}

	inline static int32_t get_offset_of_causticsLightMatrix_22() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsLightMatrix_22)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_causticsLightMatrix_22() const { return ___causticsLightMatrix_22; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_causticsLightMatrix_22() { return &___causticsLightMatrix_22; }
	inline void set_causticsLightMatrix_22(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___causticsLightMatrix_22 = value;
	}

	inline static int32_t get_offset_of_useLegacyCaustics_23() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___useLegacyCaustics_23)); }
	inline bool get_useLegacyCaustics_23() const { return ___useLegacyCaustics_23; }
	inline bool* get_address_of_useLegacyCaustics_23() { return &___useLegacyCaustics_23; }
	inline void set_useLegacyCaustics_23(bool value)
	{
		___useLegacyCaustics_23 = value;
	}

	inline static int32_t get_offset_of_causticsDepth_24() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___causticsDepth_24)); }
	inline float get_causticsDepth_24() const { return ___causticsDepth_24; }
	inline float* get_address_of_causticsDepth_24() { return &___causticsDepth_24; }
	inline void set_causticsDepth_24(float value)
	{
		___causticsDepth_24 = value;
	}

	inline static int32_t get_offset_of_useColorGradient_25() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___useColorGradient_25)); }
	inline bool get_useColorGradient_25() const { return ___useColorGradient_25; }
	inline bool* get_address_of_useColorGradient_25() { return &___useColorGradient_25; }
	inline void set_useColorGradient_25(bool value)
	{
		___useColorGradient_25 = value;
	}

	inline static int32_t get_offset_of_colorGradient_26() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___colorGradient_26)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_colorGradient_26() const { return ___colorGradient_26; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_colorGradient_26() { return &___colorGradient_26; }
	inline void set_colorGradient_26(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___colorGradient_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorGradient_26), (void*)value);
	}

	inline static int32_t get_offset_of_colorGradientTexture_27() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___colorGradientTexture_27)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_colorGradientTexture_27() const { return ___colorGradientTexture_27; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_colorGradientTexture_27() { return &___colorGradientTexture_27; }
	inline void set_colorGradientTexture_27(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___colorGradientTexture_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorGradientTexture_27), (void*)value);
	}

	inline static int32_t get_offset_of_shallowColor_28() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shallowColor_28)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shallowColor_28() const { return ___shallowColor_28; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shallowColor_28() { return &___shallowColor_28; }
	inline void set_shallowColor_28(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shallowColor_28 = value;
	}

	inline static int32_t get_offset_of_deepColor_29() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___deepColor_29)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_deepColor_29() const { return ___deepColor_29; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_deepColor_29() { return &___deepColor_29; }
	inline void set_deepColor_29(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___deepColor_29 = value;
	}

	inline static int32_t get_offset_of_colorDepth_30() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___colorDepth_30)); }
	inline float get_colorDepth_30() const { return ___colorDepth_30; }
	inline float* get_address_of_colorDepth_30() { return &___colorDepth_30; }
	inline void set_colorDepth_30(float value)
	{
		___colorDepth_30 = value;
	}

	inline static int32_t get_offset_of_horizonColor_31() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___horizonColor_31)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_horizonColor_31() const { return ___horizonColor_31; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_horizonColor_31() { return &___horizonColor_31; }
	inline void set_horizonColor_31(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___horizonColor_31 = value;
	}

	inline static int32_t get_offset_of_horizonDistance_32() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___horizonDistance_32)); }
	inline float get_horizonDistance_32() const { return ___horizonDistance_32; }
	inline float* get_address_of_horizonDistance_32() { return &___horizonDistance_32; }
	inline void set_horizonDistance_32(float value)
	{
		___horizonDistance_32 = value;
	}

	inline static int32_t get_offset_of_shoreFade_33() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFade_33)); }
	inline float get_shoreFade_33() const { return ___shoreFade_33; }
	inline float* get_address_of_shoreFade_33() { return &___shoreFade_33; }
	inline void set_shoreFade_33(float value)
	{
		___shoreFade_33 = value;
	}

	inline static int32_t get_offset_of_shoreColor_34() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreColor_34)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shoreColor_34() const { return ___shoreColor_34; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shoreColor_34() { return &___shoreColor_34; }
	inline void set_shoreColor_34(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shoreColor_34 = value;
	}

	inline static int32_t get_offset_of_shoreStrength_35() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreStrength_35)); }
	inline float get_shoreStrength_35() const { return ___shoreStrength_35; }
	inline float* get_address_of_shoreStrength_35() { return &___shoreStrength_35; }
	inline void set_shoreStrength_35(float value)
	{
		___shoreStrength_35 = value;
	}

	inline static int32_t get_offset_of_shoreBlend_36() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreBlend_36)); }
	inline float get_shoreBlend_36() const { return ___shoreBlend_36; }
	inline float* get_address_of_shoreBlend_36() { return &___shoreBlend_36; }
	inline void set_shoreBlend_36(float value)
	{
		___shoreBlend_36 = value;
	}

	inline static int32_t get_offset_of_shoreDepth_37() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreDepth_37)); }
	inline float get_shoreDepth_37() const { return ___shoreDepth_37; }
	inline float* get_address_of_shoreDepth_37() { return &___shoreDepth_37; }
	inline void set_shoreDepth_37(float value)
	{
		___shoreDepth_37 = value;
	}

	inline static int32_t get_offset_of_waveColor_38() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveColor_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_waveColor_38() const { return ___waveColor_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_waveColor_38() { return &___waveColor_38; }
	inline void set_waveColor_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___waveColor_38 = value;
	}

	inline static int32_t get_offset_of_underwaterColor_39() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___underwaterColor_39)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_underwaterColor_39() const { return ___underwaterColor_39; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_underwaterColor_39() { return &___underwaterColor_39; }
	inline void set_underwaterColor_39(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___underwaterColor_39 = value;
	}

	inline static int32_t get_offset_of_underwaterColorStrength_40() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___underwaterColorStrength_40)); }
	inline float get_underwaterColorStrength_40() const { return ___underwaterColorStrength_40; }
	inline float* get_address_of_underwaterColorStrength_40() { return &___underwaterColorStrength_40; }
	inline void set_underwaterColorStrength_40(float value)
	{
		___underwaterColorStrength_40 = value;
	}

	inline static int32_t get_offset_of_underwaterRefractionStrength_41() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___underwaterRefractionStrength_41)); }
	inline float get_underwaterRefractionStrength_41() const { return ___underwaterRefractionStrength_41; }
	inline float* get_address_of_underwaterRefractionStrength_41() { return &___underwaterRefractionStrength_41; }
	inline void set_underwaterRefractionStrength_41(float value)
	{
		___underwaterRefractionStrength_41 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamTexture_42() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamTexture_42)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_surfaceFoamTexture_42() const { return ___surfaceFoamTexture_42; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_surfaceFoamTexture_42() { return &___surfaceFoamTexture_42; }
	inline void set_surfaceFoamTexture_42(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___surfaceFoamTexture_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surfaceFoamTexture_42), (void*)value);
	}

	inline static int32_t get_offset_of_surfaceFoamSampling_43() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamSampling_43)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_surfaceFoamSampling_43() const { return ___surfaceFoamSampling_43; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_surfaceFoamSampling_43() { return &___surfaceFoamSampling_43; }
	inline void set_surfaceFoamSampling_43(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___surfaceFoamSampling_43 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamCutoff_44() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamCutoff_44)); }
	inline float get_surfaceFoamCutoff_44() const { return ___surfaceFoamCutoff_44; }
	inline float* get_address_of_surfaceFoamCutoff_44() { return &___surfaceFoamCutoff_44; }
	inline void set_surfaceFoamCutoff_44(float value)
	{
		___surfaceFoamCutoff_44 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamDistortion_45() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamDistortion_45)); }
	inline float get_surfaceFoamDistortion_45() const { return ___surfaceFoamDistortion_45; }
	inline float* get_address_of_surfaceFoamDistortion_45() { return &___surfaceFoamDistortion_45; }
	inline void set_surfaceFoamDistortion_45(float value)
	{
		___surfaceFoamDistortion_45 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamBlend_46() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamBlend_46)); }
	inline float get_surfaceFoamBlend_46() const { return ___surfaceFoamBlend_46; }
	inline float* get_address_of_surfaceFoamBlend_46() { return &___surfaceFoamBlend_46; }
	inline void set_surfaceFoamBlend_46(float value)
	{
		___surfaceFoamBlend_46 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamColor1_47() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamColor1_47)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_surfaceFoamColor1_47() const { return ___surfaceFoamColor1_47; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_surfaceFoamColor1_47() { return &___surfaceFoamColor1_47; }
	inline void set_surfaceFoamColor1_47(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___surfaceFoamColor1_47 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamColor2_48() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamColor2_48)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_surfaceFoamColor2_48() const { return ___surfaceFoamColor2_48; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_surfaceFoamColor2_48() { return &___surfaceFoamColor2_48; }
	inline void set_surfaceFoamColor2_48(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___surfaceFoamColor2_48 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamMovement_49() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamMovement_49)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_surfaceFoamMovement_49() const { return ___surfaceFoamMovement_49; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_surfaceFoamMovement_49() { return &___surfaceFoamMovement_49; }
	inline void set_surfaceFoamMovement_49(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___surfaceFoamMovement_49 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamDirection1_50() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamDirection1_50)); }
	inline float get_surfaceFoamDirection1_50() const { return ___surfaceFoamDirection1_50; }
	inline float* get_address_of_surfaceFoamDirection1_50() { return &___surfaceFoamDirection1_50; }
	inline void set_surfaceFoamDirection1_50(float value)
	{
		___surfaceFoamDirection1_50 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamDirection2_51() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamDirection2_51)); }
	inline float get_surfaceFoamDirection2_51() const { return ___surfaceFoamDirection2_51; }
	inline float* get_address_of_surfaceFoamDirection2_51() { return &___surfaceFoamDirection2_51; }
	inline void set_surfaceFoamDirection2_51(float value)
	{
		___surfaceFoamDirection2_51 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamSpeed1_52() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamSpeed1_52)); }
	inline float get_surfaceFoamSpeed1_52() const { return ___surfaceFoamSpeed1_52; }
	inline float* get_address_of_surfaceFoamSpeed1_52() { return &___surfaceFoamSpeed1_52; }
	inline void set_surfaceFoamSpeed1_52(float value)
	{
		___surfaceFoamSpeed1_52 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamSpeed2_53() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamSpeed2_53)); }
	inline float get_surfaceFoamSpeed2_53() const { return ___surfaceFoamSpeed2_53; }
	inline float* get_address_of_surfaceFoamSpeed2_53() { return &___surfaceFoamSpeed2_53; }
	inline void set_surfaceFoamSpeed2_53(float value)
	{
		___surfaceFoamSpeed2_53 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamTilingAndOffset_54() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamTilingAndOffset_54)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_surfaceFoamTilingAndOffset_54() const { return ___surfaceFoamTilingAndOffset_54; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_surfaceFoamTilingAndOffset_54() { return &___surfaceFoamTilingAndOffset_54; }
	inline void set_surfaceFoamTilingAndOffset_54(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___surfaceFoamTilingAndOffset_54 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamOffsetX_55() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamOffsetX_55)); }
	inline float get_surfaceFoamOffsetX_55() const { return ___surfaceFoamOffsetX_55; }
	inline float* get_address_of_surfaceFoamOffsetX_55() { return &___surfaceFoamOffsetX_55; }
	inline void set_surfaceFoamOffsetX_55(float value)
	{
		___surfaceFoamOffsetX_55 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamOffsetY_56() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamOffsetY_56)); }
	inline float get_surfaceFoamOffsetY_56() const { return ___surfaceFoamOffsetY_56; }
	inline float* get_address_of_surfaceFoamOffsetY_56() { return &___surfaceFoamOffsetY_56; }
	inline void set_surfaceFoamOffsetY_56(float value)
	{
		___surfaceFoamOffsetY_56 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamScale1_57() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamScale1_57)); }
	inline float get_surfaceFoamScale1_57() const { return ___surfaceFoamScale1_57; }
	inline float* get_address_of_surfaceFoamScale1_57() { return &___surfaceFoamScale1_57; }
	inline void set_surfaceFoamScale1_57(float value)
	{
		___surfaceFoamScale1_57 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamScale2_58() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamScale2_58)); }
	inline float get_surfaceFoamScale2_58() const { return ___surfaceFoamScale2_58; }
	inline float* get_address_of_surfaceFoamScale2_58() { return &___surfaceFoamScale2_58; }
	inline void set_surfaceFoamScale2_58(float value)
	{
		___surfaceFoamScale2_58 = value;
	}

	inline static int32_t get_offset_of_enableSurfaceFoam_59() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___enableSurfaceFoam_59)); }
	inline bool get_enableSurfaceFoam_59() const { return ___enableSurfaceFoam_59; }
	inline bool* get_address_of_enableSurfaceFoam_59() { return &___enableSurfaceFoam_59; }
	inline void set_enableSurfaceFoam_59(bool value)
	{
		___enableSurfaceFoam_59 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamHeightMask_60() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamHeightMask_60)); }
	inline float get_surfaceFoamHeightMask_60() const { return ___surfaceFoamHeightMask_60; }
	inline float* get_address_of_surfaceFoamHeightMask_60() { return &___surfaceFoamHeightMask_60; }
	inline void set_surfaceFoamHeightMask_60(float value)
	{
		___surfaceFoamHeightMask_60 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamHeightMaskSmoothness_61() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamHeightMaskSmoothness_61)); }
	inline float get_surfaceFoamHeightMaskSmoothness_61() const { return ___surfaceFoamHeightMaskSmoothness_61; }
	inline float* get_address_of_surfaceFoamHeightMaskSmoothness_61() { return &___surfaceFoamHeightMaskSmoothness_61; }
	inline void set_surfaceFoamHeightMaskSmoothness_61(float value)
	{
		___surfaceFoamHeightMaskSmoothness_61 = value;
	}

	inline static int32_t get_offset_of_enableHeightMask_62() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___enableHeightMask_62)); }
	inline bool get_enableHeightMask_62() const { return ___enableHeightMask_62; }
	inline bool* get_address_of_enableHeightMask_62() { return &___enableHeightMask_62; }
	inline void set_enableHeightMask_62(bool value)
	{
		___enableHeightMask_62 = value;
	}

	inline static int32_t get_offset_of_foamShadowStrength_63() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___foamShadowStrength_63)); }
	inline float get_foamShadowStrength_63() const { return ___foamShadowStrength_63; }
	inline float* get_address_of_foamShadowStrength_63() { return &___foamShadowStrength_63; }
	inline void set_foamShadowStrength_63(float value)
	{
		___foamShadowStrength_63 = value;
	}

	inline static int32_t get_offset_of_foamShadowDepth_64() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___foamShadowDepth_64)); }
	inline float get_foamShadowDepth_64() const { return ___foamShadowDepth_64; }
	inline float* get_address_of_foamShadowDepth_64() { return &___foamShadowDepth_64; }
	inline void set_foamShadowDepth_64(float value)
	{
		___foamShadowDepth_64 = value;
	}

	inline static int32_t get_offset_of_surfaceFoamShadowProjection_65() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___surfaceFoamShadowProjection_65)); }
	inline float get_surfaceFoamShadowProjection_65() const { return ___surfaceFoamShadowProjection_65; }
	inline float* get_address_of_surfaceFoamShadowProjection_65() { return &___surfaceFoamShadowProjection_65; }
	inline void set_surfaceFoamShadowProjection_65(float value)
	{
		___surfaceFoamShadowProjection_65 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamShadowProjection_66() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamShadowProjection_66)); }
	inline float get_intersectionFoamShadowProjection_66() const { return ___intersectionFoamShadowProjection_66; }
	inline float* get_address_of_intersectionFoamShadowProjection_66() { return &___intersectionFoamShadowProjection_66; }
	inline void set_intersectionFoamShadowProjection_66(float value)
	{
		___intersectionFoamShadowProjection_66 = value;
	}

	inline static int32_t get_offset_of_foamMovement_67() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___foamMovement_67)); }
	inline int32_t get_foamMovement_67() const { return ___foamMovement_67; }
	inline int32_t* get_address_of_foamMovement_67() { return &___foamMovement_67; }
	inline void set_foamMovement_67(int32_t value)
	{
		___foamMovement_67 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamDepth_68() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamDepth_68)); }
	inline float get_intersectionFoamDepth_68() const { return ___intersectionFoamDepth_68; }
	inline float* get_address_of_intersectionFoamDepth_68() { return &___intersectionFoamDepth_68; }
	inline void set_intersectionFoamDepth_68(float value)
	{
		___intersectionFoamDepth_68 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamTexture_69() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamTexture_69)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_intersectionFoamTexture_69() const { return ___intersectionFoamTexture_69; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_intersectionFoamTexture_69() { return &___intersectionFoamTexture_69; }
	inline void set_intersectionFoamTexture_69(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___intersectionFoamTexture_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intersectionFoamTexture_69), (void*)value);
	}

	inline static int32_t get_offset_of_intersectionFoamColor_70() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamColor_70)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_intersectionFoamColor_70() const { return ___intersectionFoamColor_70; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_intersectionFoamColor_70() { return &___intersectionFoamColor_70; }
	inline void set_intersectionFoamColor_70(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___intersectionFoamColor_70 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamMovement_71() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamMovement_71)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_intersectionFoamMovement_71() const { return ___intersectionFoamMovement_71; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_intersectionFoamMovement_71() { return &___intersectionFoamMovement_71; }
	inline void set_intersectionFoamMovement_71(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___intersectionFoamMovement_71 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamDirection_72() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamDirection_72)); }
	inline float get_intersectionFoamDirection_72() const { return ___intersectionFoamDirection_72; }
	inline float* get_address_of_intersectionFoamDirection_72() { return &___intersectionFoamDirection_72; }
	inline void set_intersectionFoamDirection_72(float value)
	{
		___intersectionFoamDirection_72 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamSpeed_73() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamSpeed_73)); }
	inline float get_intersectionFoamSpeed_73() const { return ___intersectionFoamSpeed_73; }
	inline float* get_address_of_intersectionFoamSpeed_73() { return &___intersectionFoamSpeed_73; }
	inline void set_intersectionFoamSpeed_73(float value)
	{
		___intersectionFoamSpeed_73 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamScale_74() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamScale_74)); }
	inline float get_intersectionFoamScale_74() const { return ___intersectionFoamScale_74; }
	inline float* get_address_of_intersectionFoamScale_74() { return &___intersectionFoamScale_74; }
	inline void set_intersectionFoamScale_74(float value)
	{
		___intersectionFoamScale_74 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamSampling_75() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamSampling_75)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_intersectionFoamSampling_75() const { return ___intersectionFoamSampling_75; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_intersectionFoamSampling_75() { return &___intersectionFoamSampling_75; }
	inline void set_intersectionFoamSampling_75(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___intersectionFoamSampling_75 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamCutoff_76() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamCutoff_76)); }
	inline float get_intersectionFoamCutoff_76() const { return ___intersectionFoamCutoff_76; }
	inline float* get_address_of_intersectionFoamCutoff_76() { return &___intersectionFoamCutoff_76; }
	inline void set_intersectionFoamCutoff_76(float value)
	{
		___intersectionFoamCutoff_76 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamDistortion_77() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamDistortion_77)); }
	inline float get_intersectionFoamDistortion_77() const { return ___intersectionFoamDistortion_77; }
	inline float* get_address_of_intersectionFoamDistortion_77() { return &___intersectionFoamDistortion_77; }
	inline void set_intersectionFoamDistortion_77(float value)
	{
		___intersectionFoamDistortion_77 = value;
	}

	inline static int32_t get_offset_of_enableIntersectionEffects_78() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___enableIntersectionEffects_78)); }
	inline bool get_enableIntersectionEffects_78() const { return ___enableIntersectionEffects_78; }
	inline bool* get_address_of_enableIntersectionEffects_78() { return &___enableIntersectionEffects_78; }
	inline void set_enableIntersectionEffects_78(bool value)
	{
		___enableIntersectionEffects_78 = value;
	}

	inline static int32_t get_offset_of_intersectionFoamBlend_79() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionFoamBlend_79)); }
	inline float get_intersectionFoamBlend_79() const { return ___intersectionFoamBlend_79; }
	inline float* get_address_of_intersectionFoamBlend_79() { return &___intersectionFoamBlend_79; }
	inline void set_intersectionFoamBlend_79(float value)
	{
		___intersectionFoamBlend_79 = value;
	}

	inline static int32_t get_offset_of_intersectionWaterBlend_80() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___intersectionWaterBlend_80)); }
	inline float get_intersectionWaterBlend_80() const { return ___intersectionWaterBlend_80; }
	inline float* get_address_of_intersectionWaterBlend_80() { return &___intersectionWaterBlend_80; }
	inline void set_intersectionWaterBlend_80(float value)
	{
		___intersectionWaterBlend_80 = value;
	}

	inline static int32_t get_offset_of_shoreFoamSpeed_81() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFoamSpeed_81)); }
	inline float get_shoreFoamSpeed_81() const { return ___shoreFoamSpeed_81; }
	inline float* get_address_of_shoreFoamSpeed_81() { return &___shoreFoamSpeed_81; }
	inline void set_shoreFoamSpeed_81(float value)
	{
		___shoreFoamSpeed_81 = value;
	}

	inline static int32_t get_offset_of_shoreFoamWidth_82() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFoamWidth_82)); }
	inline float get_shoreFoamWidth_82() const { return ___shoreFoamWidth_82; }
	inline float* get_address_of_shoreFoamWidth_82() { return &___shoreFoamWidth_82; }
	inline void set_shoreFoamWidth_82(float value)
	{
		___shoreFoamWidth_82 = value;
	}

	inline static int32_t get_offset_of_shoreFoamFrequency_83() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFoamFrequency_83)); }
	inline float get_shoreFoamFrequency_83() const { return ___shoreFoamFrequency_83; }
	inline float* get_address_of_shoreFoamFrequency_83() { return &___shoreFoamFrequency_83; }
	inline void set_shoreFoamFrequency_83(float value)
	{
		___shoreFoamFrequency_83 = value;
	}

	inline static int32_t get_offset_of_shoreFoamBreakupStrength_84() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFoamBreakupStrength_84)); }
	inline float get_shoreFoamBreakupStrength_84() const { return ___shoreFoamBreakupStrength_84; }
	inline float* get_address_of_shoreFoamBreakupStrength_84() { return &___shoreFoamBreakupStrength_84; }
	inline void set_shoreFoamBreakupStrength_84(float value)
	{
		___shoreFoamBreakupStrength_84 = value;
	}

	inline static int32_t get_offset_of_shoreFoamBreakupScale_85() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___shoreFoamBreakupScale_85)); }
	inline float get_shoreFoamBreakupScale_85() const { return ___shoreFoamBreakupScale_85; }
	inline float* get_address_of_shoreFoamBreakupScale_85() { return &___shoreFoamBreakupScale_85; }
	inline void set_shoreFoamBreakupScale_85(float value)
	{
		___shoreFoamBreakupScale_85 = value;
	}

	inline static int32_t get_offset_of_lighting_86() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___lighting_86)); }
	inline int32_t get_lighting_86() const { return ___lighting_86; }
	inline int32_t* get_address_of_lighting_86() { return &___lighting_86; }
	inline void set_lighting_86(int32_t value)
	{
		___lighting_86 = value;
	}

	inline static int32_t get_offset_of_lightingSmoothness_87() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___lightingSmoothness_87)); }
	inline float get_lightingSmoothness_87() const { return ___lightingSmoothness_87; }
	inline float* get_address_of_lightingSmoothness_87() { return &___lightingSmoothness_87; }
	inline void set_lightingSmoothness_87(float value)
	{
		___lightingSmoothness_87 = value;
	}

	inline static int32_t get_offset_of_lightingSpecularColor_88() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___lightingSpecularColor_88)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightingSpecularColor_88() const { return ___lightingSpecularColor_88; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightingSpecularColor_88() { return &___lightingSpecularColor_88; }
	inline void set_lightingSpecularColor_88(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightingSpecularColor_88 = value;
	}

	inline static int32_t get_offset_of_lightingDiffuseColor_89() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___lightingDiffuseColor_89)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightingDiffuseColor_89() const { return ___lightingDiffuseColor_89; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightingDiffuseColor_89() { return &___lightingDiffuseColor_89; }
	inline void set_lightingDiffuseColor_89(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightingDiffuseColor_89 = value;
	}

	inline static int32_t get_offset_of_lightingHardness_90() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___lightingHardness_90)); }
	inline float get_lightingHardness_90() const { return ___lightingHardness_90; }
	inline float* get_address_of_lightingHardness_90() { return &___lightingHardness_90; }
	inline void set_lightingHardness_90(float value)
	{
		___lightingHardness_90 = value;
	}

	inline static int32_t get_offset_of_normalsTexture_91() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___normalsTexture_91)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_normalsTexture_91() const { return ___normalsTexture_91; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_normalsTexture_91() { return &___normalsTexture_91; }
	inline void set_normalsTexture_91(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___normalsTexture_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalsTexture_91), (void*)value);
	}

	inline static int32_t get_offset_of_normalsMovement_92() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___normalsMovement_92)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_normalsMovement_92() const { return ___normalsMovement_92; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_normalsMovement_92() { return &___normalsMovement_92; }
	inline void set_normalsMovement_92(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___normalsMovement_92 = value;
	}

	inline static int32_t get_offset_of_normalsStrength_93() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___normalsStrength_93)); }
	inline float get_normalsStrength_93() const { return ___normalsStrength_93; }
	inline float* get_address_of_normalsStrength_93() { return &___normalsStrength_93; }
	inline void set_normalsStrength_93(float value)
	{
		___normalsStrength_93 = value;
	}

	inline static int32_t get_offset_of_normalsScale_94() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___normalsScale_94)); }
	inline float get_normalsScale_94() const { return ___normalsScale_94; }
	inline float* get_address_of_normalsScale_94() { return &___normalsScale_94; }
	inline void set_normalsScale_94(float value)
	{
		___normalsScale_94 = value;
	}

	inline static int32_t get_offset_of_normalsSpeed_95() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___normalsSpeed_95)); }
	inline float get_normalsSpeed_95() const { return ___normalsSpeed_95; }
	inline float* get_address_of_normalsSpeed_95() { return &___normalsSpeed_95; }
	inline void set_normalsSpeed_95(float value)
	{
		___normalsSpeed_95 = value;
	}

	inline static int32_t get_offset_of_refractionStrength_96() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___refractionStrength_96)); }
	inline float get_refractionStrength_96() const { return ___refractionStrength_96; }
	inline float* get_address_of_refractionStrength_96() { return &___refractionStrength_96; }
	inline void set_refractionStrength_96(float value)
	{
		___refractionStrength_96 = value;
	}

	inline static int32_t get_offset_of_waveVisuals_97() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveVisuals_97)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_waveVisuals_97() const { return ___waveVisuals_97; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_waveVisuals_97() { return &___waveVisuals_97; }
	inline void set_waveVisuals_97(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___waveVisuals_97 = value;
	}

	inline static int32_t get_offset_of_waveSteepness_98() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveSteepness_98)); }
	inline float get_waveSteepness_98() const { return ___waveSteepness_98; }
	inline float* get_address_of_waveSteepness_98() { return &___waveSteepness_98; }
	inline void set_waveSteepness_98(float value)
	{
		___waveSteepness_98 = value;
	}

	inline static int32_t get_offset_of_waveLength_99() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveLength_99)); }
	inline float get_waveLength_99() const { return ___waveLength_99; }
	inline float* get_address_of_waveLength_99() { return &___waveLength_99; }
	inline void set_waveLength_99(float value)
	{
		___waveLength_99 = value;
	}

	inline static int32_t get_offset_of_waveSpeed_100() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveSpeed_100)); }
	inline float get_waveSpeed_100() const { return ___waveSpeed_100; }
	inline float* get_address_of_waveSpeed_100() { return &___waveSpeed_100; }
	inline void set_waveSpeed_100(float value)
	{
		___waveSpeed_100 = value;
	}

	inline static int32_t get_offset_of_waveDirections_101() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveDirections_101)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_waveDirections_101() const { return ___waveDirections_101; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_waveDirections_101() { return &___waveDirections_101; }
	inline void set_waveDirections_101(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___waveDirections_101 = value;
	}

	inline static int32_t get_offset_of_waveDirection1_102() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveDirection1_102)); }
	inline float get_waveDirection1_102() const { return ___waveDirection1_102; }
	inline float* get_address_of_waveDirection1_102() { return &___waveDirection1_102; }
	inline void set_waveDirection1_102(float value)
	{
		___waveDirection1_102 = value;
	}

	inline static int32_t get_offset_of_waveDirection2_103() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveDirection2_103)); }
	inline float get_waveDirection2_103() const { return ___waveDirection2_103; }
	inline float* get_address_of_waveDirection2_103() { return &___waveDirection2_103; }
	inline void set_waveDirection2_103(float value)
	{
		___waveDirection2_103 = value;
	}

	inline static int32_t get_offset_of_waveDirection3_104() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveDirection3_104)); }
	inline float get_waveDirection3_104() const { return ___waveDirection3_104; }
	inline float* get_address_of_waveDirection3_104() { return &___waveDirection3_104; }
	inline void set_waveDirection3_104(float value)
	{
		___waveDirection3_104 = value;
	}

	inline static int32_t get_offset_of_waveDirection4_105() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waveDirection4_105)); }
	inline float get_waveDirection4_105() const { return ___waveDirection4_105; }
	inline float* get_address_of_waveDirection4_105() { return &___waveDirection4_105; }
	inline void set_waveDirection4_105(float value)
	{
		___waveDirection4_105 = value;
	}

	inline static int32_t get_offset_of_waterUVs_106() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___waterUVs_106)); }
	inline int32_t get_waterUVs_106() const { return ___waterUVs_106; }
	inline int32_t* get_address_of_waterUVs_106() { return &___waterUVs_106; }
	inline void set_waterUVs_106(int32_t value)
	{
		___waterUVs_106 = value;
	}

	inline static int32_t get_offset_of_hideComponents_107() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___hideComponents_107)); }
	inline bool get_hideComponents_107() const { return ___hideComponents_107; }
	inline bool* get_address_of_hideComponents_107() { return &___hideComponents_107; }
	inline void set_hideComponents_107(bool value)
	{
		___hideComponents_107 = value;
	}

	inline static int32_t get_offset_of_enableFoamShadows_108() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___enableFoamShadows_108)); }
	inline bool get_enableFoamShadows_108() const { return ___enableFoamShadows_108; }
	inline bool* get_address_of_enableFoamShadows_108() { return &___enableFoamShadows_108; }
	inline void set_enableFoamShadows_108(bool value)
	{
		___enableFoamShadows_108 = value;
	}

	inline static int32_t get_offset_of_enableRefraction_109() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___enableRefraction_109)); }
	inline bool get_enableRefraction_109() const { return ___enableRefraction_109; }
	inline bool* get_address_of_enableRefraction_109() { return &___enableRefraction_109; }
	inline void set_enableRefraction_109(bool value)
	{
		___enableRefraction_109 = value;
	}

	inline static int32_t get_offset_of_meshRenderer_110() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___meshRenderer_110)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer_110() const { return ___meshRenderer_110; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer_110() { return &___meshRenderer_110; }
	inline void set_meshRenderer_110(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_110), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_111() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___meshFilter_111)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_111() const { return ___meshFilter_111; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_111() { return &___meshFilter_111; }
	inline void set_meshFilter_111(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_111), (void*)value);
	}

	inline static int32_t get_offset_of_material_112() { return static_cast<int32_t>(offsetof(StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098, ___material_112)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_112() const { return ___material_112; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_112() { return &___material_112; }
	inline void set_material_112(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_112), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct  UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderShadows
	bool ___m_RenderShadows_4;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTextureOption
	int32_t ___m_RequiresDepthTextureOption_5;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresOpaqueTextureOption
	int32_t ___m_RequiresOpaqueTextureOption_6;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_CameraType
	int32_t ___m_CameraType_7;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Cameras
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * ___m_Cameras_8;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RendererIndex
	int32_t ___m_RendererIndex_9;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_VolumeLayerMask_10;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeTrigger
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_VolumeTrigger_11;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderPostProcessing
	bool ___m_RenderPostProcessing_12;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Antialiasing
	int32_t ___m_Antialiasing_13;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AntialiasingQuality
	int32_t ___m_AntialiasingQuality_14;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_StopNaN
	bool ___m_StopNaN_15;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Dithering
	bool ___m_Dithering_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_ClearDepth
	bool ___m_ClearDepth_17;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AllowXRRendering
	bool ___m_AllowXRRendering_18;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTexture
	bool ___m_RequiresDepthTexture_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresColorTexture
	bool ___m_RequiresColorTexture_21;
	// System.Single UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Version
	float ___m_Version_22;

public:
	inline static int32_t get_offset_of_m_RenderShadows_4() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RenderShadows_4)); }
	inline bool get_m_RenderShadows_4() const { return ___m_RenderShadows_4; }
	inline bool* get_address_of_m_RenderShadows_4() { return &___m_RenderShadows_4; }
	inline void set_m_RenderShadows_4(bool value)
	{
		___m_RenderShadows_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresDepthTextureOption_5() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RequiresDepthTextureOption_5)); }
	inline int32_t get_m_RequiresDepthTextureOption_5() const { return ___m_RequiresDepthTextureOption_5; }
	inline int32_t* get_address_of_m_RequiresDepthTextureOption_5() { return &___m_RequiresDepthTextureOption_5; }
	inline void set_m_RequiresDepthTextureOption_5(int32_t value)
	{
		___m_RequiresDepthTextureOption_5 = value;
	}

	inline static int32_t get_offset_of_m_RequiresOpaqueTextureOption_6() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RequiresOpaqueTextureOption_6)); }
	inline int32_t get_m_RequiresOpaqueTextureOption_6() const { return ___m_RequiresOpaqueTextureOption_6; }
	inline int32_t* get_address_of_m_RequiresOpaqueTextureOption_6() { return &___m_RequiresOpaqueTextureOption_6; }
	inline void set_m_RequiresOpaqueTextureOption_6(int32_t value)
	{
		___m_RequiresOpaqueTextureOption_6 = value;
	}

	inline static int32_t get_offset_of_m_CameraType_7() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_CameraType_7)); }
	inline int32_t get_m_CameraType_7() const { return ___m_CameraType_7; }
	inline int32_t* get_address_of_m_CameraType_7() { return &___m_CameraType_7; }
	inline void set_m_CameraType_7(int32_t value)
	{
		___m_CameraType_7 = value;
	}

	inline static int32_t get_offset_of_m_Cameras_8() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_Cameras_8)); }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 * get_m_Cameras_8() const { return ___m_Cameras_8; }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 ** get_address_of_m_Cameras_8() { return &___m_Cameras_8; }
	inline void set_m_Cameras_8(List_1_t653022B4EDCE73F282430E1A396635798D309409 * value)
	{
		___m_Cameras_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cameras_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererIndex_9() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RendererIndex_9)); }
	inline int32_t get_m_RendererIndex_9() const { return ___m_RendererIndex_9; }
	inline int32_t* get_address_of_m_RendererIndex_9() { return &___m_RendererIndex_9; }
	inline void set_m_RendererIndex_9(int32_t value)
	{
		___m_RendererIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_VolumeLayerMask_10() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_VolumeLayerMask_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_VolumeLayerMask_10() const { return ___m_VolumeLayerMask_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_VolumeLayerMask_10() { return &___m_VolumeLayerMask_10; }
	inline void set_m_VolumeLayerMask_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_VolumeLayerMask_10 = value;
	}

	inline static int32_t get_offset_of_m_VolumeTrigger_11() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_VolumeTrigger_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_VolumeTrigger_11() const { return ___m_VolumeTrigger_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_VolumeTrigger_11() { return &___m_VolumeTrigger_11; }
	inline void set_m_VolumeTrigger_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_VolumeTrigger_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VolumeTrigger_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderPostProcessing_12() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RenderPostProcessing_12)); }
	inline bool get_m_RenderPostProcessing_12() const { return ___m_RenderPostProcessing_12; }
	inline bool* get_address_of_m_RenderPostProcessing_12() { return &___m_RenderPostProcessing_12; }
	inline void set_m_RenderPostProcessing_12(bool value)
	{
		___m_RenderPostProcessing_12 = value;
	}

	inline static int32_t get_offset_of_m_Antialiasing_13() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_Antialiasing_13)); }
	inline int32_t get_m_Antialiasing_13() const { return ___m_Antialiasing_13; }
	inline int32_t* get_address_of_m_Antialiasing_13() { return &___m_Antialiasing_13; }
	inline void set_m_Antialiasing_13(int32_t value)
	{
		___m_Antialiasing_13 = value;
	}

	inline static int32_t get_offset_of_m_AntialiasingQuality_14() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_AntialiasingQuality_14)); }
	inline int32_t get_m_AntialiasingQuality_14() const { return ___m_AntialiasingQuality_14; }
	inline int32_t* get_address_of_m_AntialiasingQuality_14() { return &___m_AntialiasingQuality_14; }
	inline void set_m_AntialiasingQuality_14(int32_t value)
	{
		___m_AntialiasingQuality_14 = value;
	}

	inline static int32_t get_offset_of_m_StopNaN_15() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_StopNaN_15)); }
	inline bool get_m_StopNaN_15() const { return ___m_StopNaN_15; }
	inline bool* get_address_of_m_StopNaN_15() { return &___m_StopNaN_15; }
	inline void set_m_StopNaN_15(bool value)
	{
		___m_StopNaN_15 = value;
	}

	inline static int32_t get_offset_of_m_Dithering_16() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_Dithering_16)); }
	inline bool get_m_Dithering_16() const { return ___m_Dithering_16; }
	inline bool* get_address_of_m_Dithering_16() { return &___m_Dithering_16; }
	inline void set_m_Dithering_16(bool value)
	{
		___m_Dithering_16 = value;
	}

	inline static int32_t get_offset_of_m_ClearDepth_17() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_ClearDepth_17)); }
	inline bool get_m_ClearDepth_17() const { return ___m_ClearDepth_17; }
	inline bool* get_address_of_m_ClearDepth_17() { return &___m_ClearDepth_17; }
	inline void set_m_ClearDepth_17(bool value)
	{
		___m_ClearDepth_17 = value;
	}

	inline static int32_t get_offset_of_m_AllowXRRendering_18() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_AllowXRRendering_18)); }
	inline bool get_m_AllowXRRendering_18() const { return ___m_AllowXRRendering_18; }
	inline bool* get_address_of_m_AllowXRRendering_18() { return &___m_AllowXRRendering_18; }
	inline void set_m_AllowXRRendering_18(bool value)
	{
		___m_AllowXRRendering_18 = value;
	}

	inline static int32_t get_offset_of_m_Camera_19() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_Camera_19)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_19() const { return ___m_Camera_19; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_19() { return &___m_Camera_19; }
	inline void set_m_Camera_19(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequiresDepthTexture_20() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RequiresDepthTexture_20)); }
	inline bool get_m_RequiresDepthTexture_20() const { return ___m_RequiresDepthTexture_20; }
	inline bool* get_address_of_m_RequiresDepthTexture_20() { return &___m_RequiresDepthTexture_20; }
	inline void set_m_RequiresDepthTexture_20(bool value)
	{
		___m_RequiresDepthTexture_20 = value;
	}

	inline static int32_t get_offset_of_m_RequiresColorTexture_21() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_RequiresColorTexture_21)); }
	inline bool get_m_RequiresColorTexture_21() const { return ___m_RequiresColorTexture_21; }
	inline bool* get_address_of_m_RequiresColorTexture_21() { return &___m_RequiresColorTexture_21; }
	inline void set_m_RequiresColorTexture_21(bool value)
	{
		___m_RequiresColorTexture_21 = value;
	}

	inline static int32_t get_offset_of_m_Version_22() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E, ___m_Version_22)); }
	inline float get_m_Version_22() const { return ___m_Version_22; }
	inline float* get_address_of_m_Version_22() { return &___m_Version_22; }
	inline void set_m_Version_22(float value)
	{
		___m_Version_22 = value;
	}
};

struct UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::s_DefaultAdditionalCameraData
	UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * ___s_DefaultAdditionalCameraData_23;

public:
	inline static int32_t get_offset_of_s_DefaultAdditionalCameraData_23() { return static_cast<int32_t>(offsetof(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_StaticFields, ___s_DefaultAdditionalCameraData_23)); }
	inline UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * get_s_DefaultAdditionalCameraData_23() const { return ___s_DefaultAdditionalCameraData_23; }
	inline UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E ** get_address_of_s_DefaultAdditionalCameraData_23() { return &___s_DefaultAdditionalCameraData_23; }
	inline void set_s_DefaultAdditionalCameraData_23(UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * value)
	{
		___s_DefaultAdditionalCameraData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultAdditionalCameraData_23), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared (Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mDD4EC73CAA425ACB3E7289D905B9154BA144A701_gshared (Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void StylizedWater.CausticsPass::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsPass__ctor_m55FDACA68947F8DBE339A2BDC9EBAC136C71899A (CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * __this, float ___waterLevel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Rendering.CoreUtils::CreateEngineMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CoreUtils_CreateEngineMaterial_m31F7E75C11E58A77F38741F5A85E6018CF4F3864 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_renderPassEvent(UnityEngine.Rendering.Universal.RenderPassEvent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m6D7E1AC4B01D1E7A399ECD6F0D5160DAB114AAA7_inline (ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::EnqueuePass(UnityEngine.Rendering.Universal.ScriptableRenderPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderer_EnqueuePass_mA4AC1EEBC10ED9AB7917BCAC6793CA0B231D424C (ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * __this, ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * ___pass0, const RuntimeMethod* method);
// System.Void StylizedWater.CausticsFeature/CausticsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsSettings__ctor_mFE75102B0E00B3C04EFF78469633F5B011516BC5 (CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRendererFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRendererFeature__ctor_m4E442C9049432128BA582912051E321426F11A37 (ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderPass__ctor_mAA5A91BEB9828142EC78A43629B981C9BB63B23F (ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * __this, const RuntimeMethod* method);
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Light UnityEngine.RenderSettings::get_sun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_tA2F349FE839781469A0344CF6039B51512394275 * RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.CommandBufferPool::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * CommandBufferPool_Get_mA5C6EF4ED5B7BF53EC5D7D6F4C6D3D3DC0B8B98E (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Mesh StylizedWater.CausticsPass::GenerateQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * CausticsPass_GenerateQuad_m04745AB00F0B5D4E0AEC32F16E9D81E2AECD0B82 (float ___size0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m1045759BE3456DC0CE14E6E372E13FF6625D1A83 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_m044EA375988E542EF1A03C560F924EEFD743A875 (ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___commandBuffer0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBufferPool::Release(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBufferPool_Release_mFE4025888C42CD63837EBF79006FEFC3B656924F (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___buffer0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mFD39085AC9718190F30434932156BCE641DC1454 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::CleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CleanUp_m5D383811CA4E62E936C2C6983E9CB9F6C6B5E5AD (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m3BEE5CA33C1213402B83F0033F43841570D789B7 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::SafeDestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_SafeDestroyObject_mE384FC2760BD430948B5CBE3E32D04F0BF6F3BC8 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera StylizedWater.PlanarReflections::InitializeReflectionCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PlanarReflections_InitializeReflectionCamera_m7BFBEAA55F57259281A491C6BD7A4EC25025771F (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::UpdateCamera(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_UpdateCamera_mA8859882FDD97078836BA8188D88FEFE6982CA12 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___src0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CalculateReflectionMatrix_m865CD0436577CD31312E2C3F9807BE44E5B94784 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___reflectionMatrix0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___plane1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 StylizedWater.PlanarReflections::ReflectPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarReflections_ReflectPosition_m26BC86219F0821814F8AB90C170775F8D5C48553 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector4 StylizedWater.PlanarReflections::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  PlanarReflections_CameraSpacePlane_mBCE5F9DC8B35C32911052BE8639BAAACD73DF489 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_CalculateObliqueMatrix_m8DCA87B4563A3515995B189E4EBEAE548563B94C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___clipPlane0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyFrom_m8289D4C4041F4E1D886F5AF40E1C60C14707AD52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mA3DD08A2432C45B8A5438387F2788E7F585D33EB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Rendering.Universal.UniversalAdditionalCameraData>(!!0&)
inline bool GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_m2AA8EE310FFE7E914D9FDA380CEB307873615838 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_renderShadows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_mF3DA01F9E7788C1BB9BA5EC0CE4A7829DC1B8B14_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___components1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresColorOption(UnityEngine.Rendering.Universal.CameraOverrideOption)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorOption_mC20219C23DCE430195AF37B30CC7076E0A635EAA_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresDepthOption(UnityEngine.Rendering.Universal.CameraOverrideOption)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthOption_m5B5EA1E2F1E4B11CFCA732A686FB65D1B5DAF7E7_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::SetRenderer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m08B56097CDE7AF80C1DCB8C8824112F44E0F0345_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m33DBE382C6A293EDFF50FF459CBAB2FD3B7F469C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_autoGenerateMips_mB2B22300BCC043280A910A3E54E9DA327DEB0EA6 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m12CB5C3FB080267160281489734107AA60078EBC (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset UnityEngine.Rendering.Universal.UniversalRenderPipeline::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67 * UniversalRenderPipeline_get_asset_m49A3D05C0FE3F383C63A4E03A511C9EB30DC81C4 (const RuntimeMethod* method);
// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::get_renderScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniversalRenderPipelineAsset_get_renderScale_m085A3D5E3EB44F9BA241D7A1FE559A41EC432228_inline (UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTextureDescriptor StylizedWater.PlanarReflections::GetDescriptor(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  PlanarReflections_GetDescriptor_m1DD0222D842EC41B71F11BA032F362465A5D6544 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, float ___pipelineRenderScale1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___desc0, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::UpdateReflectionCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_UpdateReflectionCamera_m056BF0F2E4D10B6FB8FD61D3FE0C2D7042B4B107 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___realCamera0, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections::CreateReflectionTexture(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CreateReflectionTexture_m98BFCD91CB516DB689FC4B4C0B92C5733AB7224B (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData__ctor_m66E05F1A0228C7DC7374F4D80E873222D62E0250 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData_Set_m281A6C546DB5FE5E879329632CD8C9A829583768 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::Invoke(!0,!1)
inline void Action_2_Invoke_m1EE97B0A1B03F8D1BFE7BAC68AEB3053D84C1B44 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___arg10, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D , Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Action_2_Invoke_mDD4EC73CAA425ACB3E7289D905B9154BA144A701_gshared)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline::RenderSingleCamera(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalRenderPipeline_RenderSingleCamera_m050F3621EEE18BD32AA23340A165F8C565F3D689 (ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method);
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData_Restore_m737368AE38267E2DD6839ED155B20F620FBE2A44 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m0C81952FBBF80467F736DA58434E4C2CEF757792 (int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mDD2D9695A5F1B0D1FCACB8D87A3D1148C14D6F01 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void StylizedWater.StylizedWaterURP::ReadMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_ReadMaterialProperties_m0AD9E5B301E6550055603C76FA1ECD886A1B34FA (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.StylizedWaterURP::WriteMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_WriteMaterialProperties_m8D6E9D068EF4BE16BE0723971BD91300B955E05D (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.StylizedWaterURP::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_OnEnable_mBBC457D56760527288269ABCC9C82CCE0519BEAC (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method);
// System.Void StylizedWater.StylizedWaterURP::ResetHideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_ResetHideFlags_m3E4ECE1E5A96DCC599536666CAD3EEDDEB1D521C (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderSettings::get_fog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderSettings_get_fog_mAB01FC3FE552B153EB0D5AB467B29A896719B90F (const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_maximumLODLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_maximumLODLevel_m6740882BCC4512F85CD41DF4C55351B475CD2D86 (const RuntimeMethod* method);
// System.Single UnityEngine.QualitySettings::get_lodBias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QualitySettings_get_lodBias_m024776C3A1AD1A51EA990C587B03EE4F9F4D8F0A (const RuntimeMethod* method);
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_set_invertCulling_mECEDF71D7F35A9F99931F6975D415C9C6A8B8FF9 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_fog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fog_mD367E22D3EF66CA9FAAD7AF7712E891B2F569275 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_maximumLODLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_maximumLODLevel_m37B3C58789BDB707F9B3417047AA389286CDE91B (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_lodBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_lodBias_m15232C74C8BD590224D5435895FBF44213A42F7A (float ___value0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StylizedWater.CausticsFeature::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsFeature_Create_m68FC952B3D6C8DA6C1AAC7545790F35D97F9060D (CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0333801DDDE292CC735049B0DFFCBDA72039BCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F01BFC47DFA259EC5D18B9746BAF953B94F30D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6801E0E6BB47D939B5739EFE649943ADBC4FA05);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// causticsPass = new CausticsPass(settings.waterLevel);
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_0 = __this->get_settings_5();
		NullCheck(L_0);
		float L_1 = L_0->get_waterLevel_6();
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_2 = (CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A *)il2cpp_codegen_object_new(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var);
		CausticsPass__ctor_m55FDACA68947F8DBE339A2BDC9EBAC136C71899A(L_2, L_1, /*hidden argument*/NULL);
		__this->set_causticsPass_6(L_2);
		// if (causticsMaterial) DestroyImmediate(causticsMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// if (causticsMaterial) DestroyImmediate(causticsMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// causticsShader = Shader.Find("Hidden/Stylized Water/Caustics");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_6;
		L_6 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral0333801DDDE292CC735049B0DFFCBDA72039BCA2, /*hidden argument*/NULL);
		__this->set_causticsShader_7(L_6);
		// if (causticsShader != null) causticsMaterial = CoreUtils.CreateEngineMaterial(causticsShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = __this->get_causticsShader_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// if (causticsShader != null) causticsMaterial = CoreUtils.CreateEngineMaterial(causticsShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_9 = __this->get_causticsShader_7();
		IL2CPP_RUNTIME_CLASS_INIT(CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = CoreUtils_CreateEngineMaterial_m31F7E75C11E58A77F38741F5A85E6018CF4F3864(L_9, /*hidden argument*/NULL);
		__this->set_causticsMaterial_8(L_10);
	}

IL_005d:
	{
		// if (!causticsMaterial) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006b;
		}
	}
	{
		// if (!causticsMaterial) return;
		return;
	}

IL_006b:
	{
		// causticsMaterial.SetTexture(causticsTextureID, settings.texture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		int32_t L_14 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsTextureID_11();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_15 = __this->get_settings_5();
		NullCheck(L_15);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = L_15->get_texture_3();
		NullCheck(L_13);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_13, L_14, L_16, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsStrengthID, settings.strength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_causticsMaterial_8();
		int32_t L_18 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsStrengthID_12();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_19 = __this->get_settings_5();
		NullCheck(L_19);
		float L_20 = L_19->get_strength_0();
		NullCheck(L_17);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_17, L_18, L_20, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsScaleID, settings.scale);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_causticsMaterial_8();
		int32_t L_22 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsScaleID_13();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_23 = __this->get_settings_5();
		NullCheck(L_23);
		float L_24 = L_23->get_scale_4();
		NullCheck(L_21);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_21, L_22, L_24, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsSpeedID, settings.speed);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = __this->get_causticsMaterial_8();
		int32_t L_26 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsSpeedID_14();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_27 = __this->get_settings_5();
		NullCheck(L_27);
		float L_28 = L_27->get_speed_5();
		NullCheck(L_25);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_25, L_26, L_28, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsSplitID, settings.rgbSplit);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_causticsMaterial_8();
		int32_t L_30 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsSplitID_15();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_31 = __this->get_settings_5();
		NullCheck(L_31);
		float L_32 = L_31->get_rgbSplit_1();
		NullCheck(L_29);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_29, L_30, L_32, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(shadowMaskID, settings.shadowMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_causticsMaterial_8();
		int32_t L_34 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_shadowMaskID_16();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_35 = __this->get_settings_5();
		NullCheck(L_35);
		float L_36 = L_35->get_shadowMask_2();
		NullCheck(L_33);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_33, L_34, L_36, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsFadeID, settings.fade);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = __this->get_causticsMaterial_8();
		int32_t L_38 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsFadeID_17();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_39 = __this->get_settings_5();
		NullCheck(L_39);
		float L_40 = L_39->get_fade_8();
		NullCheck(L_37);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_37, L_38, L_40, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(waterLevelID, settings.waterLevel);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = __this->get_causticsMaterial_8();
		int32_t L_42 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_waterLevelID_18();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_43 = __this->get_settings_5();
		NullCheck(L_43);
		float L_44 = L_43->get_waterLevel_6();
		NullCheck(L_41);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_41, L_42, L_44, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsStartID, settings.depth.x);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_45 = __this->get_causticsMaterial_8();
		int32_t L_46 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsStartID_19();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_47 = __this->get_settings_5();
		NullCheck(L_47);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = L_47->get_address_of_depth_7();
		float L_49 = L_48->get_x_0();
		NullCheck(L_45);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_45, L_46, L_49, /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(causticsEndID, settings.depth.y);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_causticsMaterial_8();
		int32_t L_51 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_causticsEndID_20();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_52 = __this->get_settings_5();
		NullCheck(L_52);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = L_52->get_address_of_depth_7();
		float L_54 = L_53->get_y_1();
		NullCheck(L_50);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_50, L_51, L_54, /*hidden argument*/NULL);
		// switch (settings.debug)
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_55 = __this->get_settings_5();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_debug_10();
		V_0 = L_56;
		int32_t L_57 = V_0;
		switch (L_57)
		{
			case 0:
			{
				goto IL_01a6;
			}
			case 1:
			{
				goto IL_020b;
			}
			case 2:
			{
				goto IL_0267;
			}
		}
	}
	{
		goto IL_02c1;
	}

IL_01a6:
	{
		// causticsMaterial.SetFloat(SrcBlend, 2f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		int32_t L_59 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_SrcBlend_9();
		NullCheck(L_58);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_58, L_59, (2.0f), /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(DstBlend, 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_60 = __this->get_causticsMaterial_8();
		int32_t L_61 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_DstBlend_10();
		NullCheck(L_60);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_60, L_61, (0.0f), /*hidden argument*/NULL);
		// causticsMaterial.DisableKeyword("DEBUG_MASK");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = __this->get_causticsMaterial_8();
		NullCheck(L_62);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_62, _stringLiteralE6801E0E6BB47D939B5739EFE649943ADBC4FA05, /*hidden argument*/NULL);
		// causticsMaterial.DisableKeyword("DEBUG_CAUSTICS");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63 = __this->get_causticsMaterial_8();
		NullCheck(L_63);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_63, _stringLiteral1F01BFC47DFA259EC5D18B9746BAF953B94F30D5, /*hidden argument*/NULL);
		// causticsPass.renderPassEvent = settings.renderPassEvent;
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_64 = __this->get_causticsPass_6();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_65 = __this->get_settings_5();
		NullCheck(L_65);
		int32_t L_66 = L_65->get_renderPassEvent_9();
		NullCheck(L_64);
		ScriptableRenderPass_set_renderPassEvent_m6D7E1AC4B01D1E7A399ECD6F0D5160DAB114AAA7_inline(L_64, L_66, /*hidden argument*/NULL);
		// break;
		goto IL_02c1;
	}

IL_020b:
	{
		// causticsMaterial.SetFloat(SrcBlend, 1f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_67 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		int32_t L_68 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_SrcBlend_9();
		NullCheck(L_67);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_67, L_68, (1.0f), /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(DstBlend, 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_69 = __this->get_causticsMaterial_8();
		int32_t L_70 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_DstBlend_10();
		NullCheck(L_69);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_69, L_70, (0.0f), /*hidden argument*/NULL);
		// causticsMaterial.DisableKeyword("DEBUG_MASK");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_71 = __this->get_causticsMaterial_8();
		NullCheck(L_71);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_71, _stringLiteralE6801E0E6BB47D939B5739EFE649943ADBC4FA05, /*hidden argument*/NULL);
		// causticsMaterial.EnableKeyword("DEBUG_CAUSTICS");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72 = __this->get_causticsMaterial_8();
		NullCheck(L_72);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_72, _stringLiteral1F01BFC47DFA259EC5D18B9746BAF953B94F30D5, /*hidden argument*/NULL);
		// causticsPass.renderPassEvent = RenderPassEvent.AfterRenderingPostProcessing;
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_73 = __this->get_causticsPass_6();
		NullCheck(L_73);
		ScriptableRenderPass_set_renderPassEvent_m6D7E1AC4B01D1E7A399ECD6F0D5160DAB114AAA7_inline(L_73, ((int32_t)600), /*hidden argument*/NULL);
		// break;
		goto IL_02c1;
	}

IL_0267:
	{
		// causticsMaterial.SetFloat(SrcBlend, 1f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74 = __this->get_causticsMaterial_8();
		IL2CPP_RUNTIME_CLASS_INIT(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		int32_t L_75 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_SrcBlend_9();
		NullCheck(L_74);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_74, L_75, (1.0f), /*hidden argument*/NULL);
		// causticsMaterial.SetFloat(DstBlend, 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76 = __this->get_causticsMaterial_8();
		int32_t L_77 = ((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->get_DstBlend_10();
		NullCheck(L_76);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_76, L_77, (0.0f), /*hidden argument*/NULL);
		// causticsMaterial.DisableKeyword("DEBUG_CAUSTICS");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78 = __this->get_causticsMaterial_8();
		NullCheck(L_78);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_78, _stringLiteral1F01BFC47DFA259EC5D18B9746BAF953B94F30D5, /*hidden argument*/NULL);
		// causticsMaterial.EnableKeyword("DEBUG_MASK");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_79 = __this->get_causticsMaterial_8();
		NullCheck(L_79);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_79, _stringLiteralE6801E0E6BB47D939B5739EFE649943ADBC4FA05, /*hidden argument*/NULL);
		// causticsPass.renderPassEvent = RenderPassEvent.AfterRenderingPostProcessing;
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_80 = __this->get_causticsPass_6();
		NullCheck(L_80);
		ScriptableRenderPass_set_renderPassEvent_m6D7E1AC4B01D1E7A399ECD6F0D5160DAB114AAA7_inline(L_80, ((int32_t)600), /*hidden argument*/NULL);
	}

IL_02c1:
	{
		// causticsPass.causticsMaterial = causticsMaterial;
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_81 = __this->get_causticsPass_6();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82 = __this->get_causticsMaterial_8();
		NullCheck(L_81);
		L_81->set_causticsMaterial_10(L_82);
		// }
		return;
	}
}
// System.Void StylizedWater.CausticsFeature::AddRenderPasses(UnityEngine.Rendering.Universal.ScriptableRenderer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsFeature_AddRenderPasses_mF0D5513CB70B512C18C35816639EDE67E10AEFC2 (CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E * __this, ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer0, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED * ___renderingData1, const RuntimeMethod* method)
{
	{
		// renderer.EnqueuePass(causticsPass);
		ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * L_0 = ___renderer0;
		CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * L_1 = __this->get_causticsPass_6();
		NullCheck(L_0);
		ScriptableRenderer_EnqueuePass_mA4AC1EEBC10ED9AB7917BCAC6793CA0B231D424C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.CausticsFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsFeature__ctor_mC14947146B3994956117C8E3DA139D23FB87183D (CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CausticsSettings settings = new CausticsSettings();
		CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * L_0 = (CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC *)il2cpp_codegen_object_new(CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC_il2cpp_TypeInfo_var);
		CausticsSettings__ctor_mFE75102B0E00B3C04EFF78469633F5B011516BC5(L_0, /*hidden argument*/NULL);
		__this->set_settings_5(L_0);
		ScriptableRendererFeature__ctor_m4E442C9049432128BA582912051E321426F11A37(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StylizedWater.CausticsFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsFeature__cctor_m7D6813F2F9F999FBDC4D6A320710D419B93E5561 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A17CF118CF475C2757904B9386B03BF0251B23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410E223397B2B0F15229A74B8FA14A96ADC4C8CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DCACED0E613518862BFA93FF611943EF9AEEB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4DFEFB7B8F2C6C540A884CE26E2F22F478198E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int SrcBlend = Shader.PropertyToID("_SrcBlend");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_SrcBlend_9(L_0);
		// private static readonly int DstBlend = Shader.PropertyToID("_DstBlend");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_DstBlend_10(L_1);
		// private static readonly int causticsTextureID = Shader.PropertyToID("_CausticsTexture");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsTextureID_11(L_2);
		// private static readonly int causticsStrengthID = Shader.PropertyToID("_CausticsStrength");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsStrengthID_12(L_3);
		// private static readonly int causticsScaleID = Shader.PropertyToID("_CausticsScale");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsScaleID_13(L_4);
		// private static readonly int causticsSpeedID = Shader.PropertyToID("_CausticsSpeed");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsSpeedID_14(L_5);
		// private static readonly int causticsSplitID = Shader.PropertyToID("_CausticsSplit");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsSplitID_15(L_6);
		// private static readonly int shadowMaskID = Shader.PropertyToID("_CausticsShadowMask");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_shadowMaskID_16(L_7);
		// private static readonly int causticsFadeID = Shader.PropertyToID("_CausticsFade");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9DCACED0E613518862BFA93FF611943EF9AEEB01, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsFadeID_17(L_8);
		// private static readonly int waterLevelID = Shader.PropertyToID("_WaterLevel");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral16A17CF118CF475C2757904B9386B03BF0251B23, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_waterLevelID_18(L_9);
		// private static readonly int causticsStartID = Shader.PropertyToID("_CausticsStart");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD4DFEFB7B8F2C6C540A884CE26E2F22F478198E4, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsStartID_19(L_10);
		// private static readonly int causticsEndID = Shader.PropertyToID("_CausticsEnd");
		int32_t L_11;
		L_11 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral410E223397B2B0F15229A74B8FA14A96ADC4C8CB, /*hidden argument*/NULL);
		((CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_StaticFields*)il2cpp_codegen_static_fields_for(CausticsFeature_tB97CF3E8AC7C4CC1FA7DCB914E59705336783C8E_il2cpp_TypeInfo_var))->set_causticsEndID_20(L_11);
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
// System.Void StylizedWater.CausticsPass::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsPass__ctor_m55FDACA68947F8DBE339A2BDC9EBAC136C71899A (CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * __this, float ___waterLevel0, const RuntimeMethod* method)
{
	{
		// public CausticsPass(float waterLevel)
		ScriptableRenderPass__ctor_mAA5A91BEB9828142EC78A43629B981C9BB63B23F(__this, /*hidden argument*/NULL);
		// this.waterLevel = waterLevel;
		float L_0 = ___waterLevel0;
		__this->set_waterLevel_12(L_0);
		// }
		return;
	}
}
// System.Void StylizedWater.CausticsPass::Execute(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsPass_Execute_m80D73C20A5F81FF832C01A4F7CE8062E84F259A3 (CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED * ___renderingData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBufferPool_tE2670FC4B01DFB04AE3774B0F7FE0B809A0A7FD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2D412EE5B6CCCAE5B01EDA7075073582615087);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFBE1B79062B2D4922EB35CCB19FF40B9668939);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B10_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B11_1 = NULL;
	{
		// var cam = renderingData.cameraData.camera;
		RenderingData_tA6164A6139978FE89B72B1F026F82370EF15FDED * L_0 = ___renderingData1;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_1 = L_0->get_address_of_cameraData_1();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = L_1->get_camera_2();
		V_0 = L_2;
		// if (cam.cameraType == CameraType.Preview || !causticsMaterial) return;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0022;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_causticsMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// if (cam.cameraType == CameraType.Preview || !causticsMaterial) return;
		return;
	}

IL_0023:
	{
		// var sunMatrix = RenderSettings.sun != null
		//             ? RenderSettings.sun.transform.localToWorldMatrix
		//             : Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(-45f, 45f, 0f), Vector3.one);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_7;
		L_7 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-45.0f), (45.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_9, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0064;
	}

IL_0055:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_13;
		L_13 = RenderSettings_get_sun_mF349095D8EFEFFDD6450A02732B0881411F5AE9D(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_14, /*hidden argument*/NULL);
		G_B6_0 = L_15;
	}

IL_0064:
	{
		V_1 = G_B6_0;
		// causticsMaterial.SetMatrix("_MainLightDirection", sunMatrix);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_causticsMaterial_10();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17 = V_1;
		NullCheck(L_16);
		Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD(L_16, _stringLiteral7B2D412EE5B6CCCAE5B01EDA7075073582615087, L_17, /*hidden argument*/NULL);
		// CommandBuffer cmd = CommandBufferPool.Get(profilerTag);
		IL2CPP_RUNTIME_CLASS_INIT(CommandBufferPool_tE2670FC4B01DFB04AE3774B0F7FE0B809A0A7FD9_il2cpp_TypeInfo_var);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_18;
		L_18 = CommandBufferPool_Get_mA5C6EF4ED5B7BF53EC5D7D6F4C6D3D3DC0B8B98E(_stringLiteralCCFBE1B79062B2D4922EB35CCB19FF40B9668939, /*hidden argument*/NULL);
		V_2 = L_18;
		// if (!mesh) mesh = GenerateQuad(1000f);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_19 = ((CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_StaticFields*)il2cpp_codegen_static_fields_for(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var))->get_mesh_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_009c;
		}
	}
	{
		// if (!mesh) mesh = GenerateQuad(1000f);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_21;
		L_21 = CausticsPass_GenerateQuad_m04745AB00F0B5D4E0AEC32F16E9D81E2AECD0B82((1000.0f), /*hidden argument*/NULL);
		((CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_StaticFields*)il2cpp_codegen_static_fields_for(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var))->set_mesh_11(L_21);
	}

IL_009c:
	{
		// var position = cam.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22 = V_0;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// position.y = cam.transform.position.y > waterLevel ? waterLevel : cam.transform.position.y - BIAS;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = V_0;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		float L_29 = __this->get_waterLevel_12();
		G_B9_0 = (&V_3);
		if ((((float)L_28) > ((float)L_29)))
		{
			G_B10_0 = (&V_3);
			goto IL_00da;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = V_0;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		G_B11_0 = ((float)il2cpp_codegen_subtract((float)L_33, (float)(0.100000001f)));
		G_B11_1 = G_B9_0;
		goto IL_00e0;
	}

IL_00da:
	{
		float L_34 = __this->get_waterLevel_12();
		G_B11_0 = L_34;
		G_B11_1 = G_B10_0;
	}

IL_00e0:
	{
		G_B11_1->set_y_3(G_B11_0);
		// var matrix = Matrix4x4.TRS(position, Quaternion.identity, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_38;
		L_38 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_35, L_36, L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		// cmd.DrawMesh(mesh, matrix, causticsMaterial, 0, 0);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_39 = V_2;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_40 = ((CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_StaticFields*)il2cpp_codegen_static_fields_for(CausticsPass_tA6D900AD38962F3F25A688247F83E028C73B5B8A_il2cpp_TypeInfo_var))->get_mesh_11();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_41 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_causticsMaterial_10();
		NullCheck(L_39);
		CommandBuffer_DrawMesh_m1045759BE3456DC0CE14E6E372E13FF6625D1A83(L_39, L_40, L_41, L_42, 0, 0, /*hidden argument*/NULL);
		// context.ExecuteCommandBuffer(cmd);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_43 = V_2;
		ScriptableRenderContext_ExecuteCommandBuffer_m044EA375988E542EF1A03C560F924EEFD743A875((ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D *)(&___context0), L_43, /*hidden argument*/NULL);
		// CommandBufferPool.Release(cmd);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_44 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CommandBufferPool_tE2670FC4B01DFB04AE3774B0F7FE0B809A0A7FD9_il2cpp_TypeInfo_var);
		CommandBufferPool_Release_mFE4025888C42CD63837EBF79006FEFC3B656924F(L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh StylizedWater.CausticsPass::GenerateQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * CausticsPass_GenerateQuad_m04745AB00F0B5D4E0AEC32F16E9D81E2AECD0B82 (float ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2____752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	{
		// var m = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// size *= 0.5f;
		float L_1 = ___size0;
		___size0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(0.5f)));
		// var verts = new[]
		// {
		//     new Vector3(-size, 0f, -size),
		//     new Vector3(size, 0f, -size),
		//     new Vector3(-size, 0f, size),
		//     new Vector3(size, 0f, size)
		// };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = L_2;
		float L_4 = ___size0;
		float L_5 = ___size0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_4)), (0.0f), ((-L_5)), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = L_3;
		float L_8 = ___size0;
		float L_9 = ___size0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_8, (0.0f), ((-L_9)), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_10);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = L_7;
		float L_12 = ___size0;
		float L_13 = ___size0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((-L_12)), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_14);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = L_11;
		float L_16 = ___size0;
		float L_17 = ___size0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_16, (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_18);
		V_1 = L_15;
		// var tris = new[]
		// {
		//     0, 2, 1,
		//     2, 3, 1
		// };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = L_19;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t416793E905971E62EBB8B50F48E2DBC4CD5C3BC2____752A6E22358C492163D1DE31BFAFB249C23A54C303CE495A18ABF04CF82E01B2_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_20;
		// m.vertices = verts;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = V_1;
		NullCheck(L_22);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_22, L_23, /*hidden argument*/NULL);
		// m.triangles = tris;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_24 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = V_2;
		NullCheck(L_24);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_24, L_25, /*hidden argument*/NULL);
		// return m;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_26 = V_0;
		return L_26;
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
// System.Void StylizedWater.PlanarReflections::add_BeginPlanarReflections(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_add_BeginPlanarReflections_m6E1D02FC165BEE97910E552C1D7E9050002B6916 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_0 = NULL;
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_1 = NULL;
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_2 = NULL;
	{
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_0 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get_BeginPlanarReflections_14();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_1 = V_0;
		V_1 = L_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_2 = V_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)CastclassSealed((RuntimeObject*)L_4, Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var));
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_5 = V_2;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_6 = V_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *>((Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA **)(((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get_address_of_BeginPlanarReflections_14()), L_5, L_6);
		V_0 = L_7;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_8 = V_0;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)L_8) == ((RuntimeObject*)(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::remove_BeginPlanarReflections(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_remove_BeginPlanarReflections_mEF6356BBE83EA9911EC5C9D31D17FFA7E8A175BB (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_0 = NULL;
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_1 = NULL;
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * V_2 = NULL;
	{
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_0 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get_BeginPlanarReflections_14();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_1 = V_0;
		V_1 = L_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_2 = V_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)CastclassSealed((RuntimeObject*)L_4, Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var));
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_5 = V_2;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_6 = V_1;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *>((Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA **)(((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get_address_of_BeginPlanarReflections_14()), L_5, L_6);
		V_0 = L_7;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_8 = V_0;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)L_8) == ((RuntimeObject*)(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_OnEnable_m49E5D09FA7E308869930955283F37B34D6420C52 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderPipelineManager.beginCameraRendering += DoPlanarReflections;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_0 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_0, __this, (intptr_t)((intptr_t)PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginCameraRendering_mFD39085AC9718190F30434932156BCE641DC1454(L_0, /*hidden argument*/NULL);
		// reflectionLayer = ~(1 << 4);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)-17), /*hidden argument*/NULL);
		__this->set_reflectionLayer_5(L_1);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_OnDisable_m9EB18157DFD6765FE1EECCF85DA99449B76999D4 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CleanUp();
		PlanarReflections_CleanUp_m5D383811CA4E62E936C2C6983E9CB9F6C6B5E5AD(__this, /*hidden argument*/NULL);
		// RenderPipelineManager.beginCameraRendering -= DoPlanarReflections;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_0 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_0, __this, (intptr_t)((intptr_t)PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		RenderPipelineManager_remove_beginCameraRendering_m3BEE5CA33C1213402B83F0033F43841570D789B7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_OnDestroy_m33B47C4B4F660CE65D4F2B49D2DA9B7084509A4F (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CleanUp();
		PlanarReflections_CleanUp_m5D383811CA4E62E936C2C6983E9CB9F6C6B5E5AD(__this, /*hidden argument*/NULL);
		// RenderPipelineManager.beginCameraRendering -= DoPlanarReflections;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_0 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_0, __this, (intptr_t)((intptr_t)PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		RenderPipelineManager_remove_beginCameraRendering_m3BEE5CA33C1213402B83F0033F43841570D789B7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::CleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CleanUp_m5D383811CA4E62E936C2C6983E9CB9F6C6B5E5AD (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_reflectionCamera)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _reflectionCamera.targetTexture = null;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(L_2);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_2, (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// SafeDestroyObject(_reflectionCamera.gameObject);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		PlanarReflections_SafeDestroyObject_mE384FC2760BD430948B5CBE3E32D04F0BF6F3BC8(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (_reflectionTexture) RenderTexture.ReleaseTemporary(_reflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// if (_reflectionTexture) RenderTexture.ReleaseTemporary(_reflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::SafeDestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_SafeDestroyObject_mE384FC2760BD430948B5CBE3E32D04F0BF6F3BC8 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor) DestroyImmediate(obj);
		bool L_0;
		L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (Application.isEditor) DestroyImmediate(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_1, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		// else Destroy(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::UpdateReflectionCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_UpdateReflectionCamera_m056BF0F2E4D10B6FB8FD61D3FE0C2D7042B4B107 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___realCamera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_7;
	memset((&V_7), 0, sizeof(V_7));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_1 = NULL;
	{
		// if (_reflectionCamera == null) _reflectionCamera = InitializeReflectionCamera();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (_reflectionCamera == null) _reflectionCamera = InitializeReflectionCamera();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = PlanarReflections_InitializeReflectionCamera_m7BFBEAA55F57259281A491C6BD7A4EC25025771F(__this, /*hidden argument*/NULL);
		((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->set__reflectionCamera_9(L_2);
	}

IL_0018:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_3;
		// Vector3 normal = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		V_1 = L_4;
		// if (reflectionTarget != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_reflectionTarget_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		// pos = reflectionTarget.transform.position + Vector3.up * reflectionPlaneOffset;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_reflectionTarget_7();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_11 = __this->get_reflectionPlaneOffset_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// normal = reflectionTarget.transform.up;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_reflectionTarget_7();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0069:
	{
		// UpdateCamera(realCamera, _reflectionCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = ___realCamera0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		PlanarReflections_UpdateCamera_mA8859882FDD97078836BA8188D88FEFE6982CA12(__this, L_17, L_18, /*hidden argument*/NULL);
		// _reflectionCamera.gameObject.hideFlags = (hideReflectionCamera) ? HideFlags.HideAndDontSave : HideFlags.DontSave;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		bool L_21 = __this->get_hideReflectionCamera_15();
		G_B5_0 = L_20;
		if (L_21)
		{
			G_B6_0 = L_20;
			goto IL_008b;
		}
	}
	{
		G_B7_0 = ((int32_t)52);
		G_B7_1 = G_B5_0;
		goto IL_008d;
	}

IL_008b:
	{
		G_B7_0 = ((int32_t)61);
		G_B7_1 = G_B6_0;
	}

IL_008d:
	{
		NullCheck(G_B7_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// var d = -Vector3.Dot(normal, pos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		float L_24;
		L_24 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_22, L_23, /*hidden argument*/NULL);
		V_2 = ((-L_24));
		// var reflectionPlane = new Vector4(normal.x, normal.y, normal.z, d);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_1;
		float L_28 = L_27.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		float L_30 = L_29.get_z_4();
		float L_31 = V_2;
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_3), L_26, L_28, L_30, L_31, /*hidden argument*/NULL);
		// var reflection = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_32;
		L_32 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_4 = L_32;
		// reflection *= Matrix4x4.Scale(new Vector3(1, -1, 1));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_35;
		L_35 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_34, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_36;
		L_36 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_33, L_35, /*hidden argument*/NULL);
		V_4 = L_36;
		// PlanarReflections.CalculateReflectionMatrix(ref reflection, reflectionPlane);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_37 = V_3;
		PlanarReflections_CalculateReflectionMatrix_m865CD0436577CD31312E2C3F9807BE44E5B94784((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_37, /*hidden argument*/NULL);
		// var oldPosition = realCamera.transform.position - new Vector3(0, pos.y * 2, 0);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = ___realCamera0;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_0;
		float L_42 = L_41.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), (0.0f), ((float)il2cpp_codegen_multiply((float)L_42, (float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_40, L_43, /*hidden argument*/NULL);
		// var newPosition = PlanarReflections.ReflectPosition(oldPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = PlanarReflections_ReflectPosition_m26BC86219F0821814F8AB90C170775F8D5C48553(L_44, /*hidden argument*/NULL);
		V_5 = L_45;
		// _reflectionCamera.transform.forward = Vector3.Scale(realCamera.transform.forward, new Vector3(1, -1, 1));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_46 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48 = ___realCamera0;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_47, L_52, /*hidden argument*/NULL);
		// _reflectionCamera.worldToCameraMatrix = realCamera.worldToCameraMatrix * reflection;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_53 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_54 = ___realCamera0;
		NullCheck(L_54);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_55;
		L_55 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_54, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_56 = V_4;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_57;
		L_57 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_53);
		Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3(L_53, L_57, /*hidden argument*/NULL);
		// var clipPlane = CameraSpacePlane(_reflectionCamera, pos - Vector3.up * 0.1f, normal, 1.0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_58 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_60, (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_59, L_61, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_64;
		L_64 = PlanarReflections_CameraSpacePlane_mBCE5F9DC8B35C32911052BE8639BAAACD73DF489(__this, L_58, L_62, L_63, (1.0f), /*hidden argument*/NULL);
		V_6 = L_64;
		// var projection = realCamera.CalculateObliqueMatrix(clipPlane);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_65 = ___realCamera0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_66 = V_6;
		NullCheck(L_65);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_67;
		L_67 = Camera_CalculateObliqueMatrix_m8DCA87B4563A3515995B189E4EBEAE548563B94C(L_65, L_66, /*hidden argument*/NULL);
		V_7 = L_67;
		// _reflectionCamera.projectionMatrix = projection;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_68 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_69 = V_7;
		NullCheck(L_68);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_68, L_69, /*hidden argument*/NULL);
		// _reflectionCamera.cullingMask = reflectionLayer;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_70 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_71 = __this->get_reflectionLayer_5();
		int32_t L_72;
		L_72 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_70, L_72, /*hidden argument*/NULL);
		// _reflectionCamera.transform.position = newPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_73 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_5;
		NullCheck(L_74);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_74, L_75, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::UpdateCamera(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_UpdateCamera_mA8859882FDD97078836BA8188D88FEFE6982CA12 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___src0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___dest1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_m2AA8EE310FFE7E914D9FDA380CEB307873615838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * V_0 = NULL;
	{
		// if (dest == null) return;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (dest == null) return;
		return;
	}

IL_000a:
	{
		// dest.CopyFrom(src);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___dest1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___src0;
		NullCheck(L_2);
		Camera_CopyFrom_m8289D4C4041F4E1D886F5AF40E1C60C14707AD52(L_2, L_3, /*hidden argument*/NULL);
		// dest.useOcclusionCulling = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = ___dest1;
		NullCheck(L_4);
		Camera_set_useOcclusionCulling_mA3DD08A2432C45B8A5438387F2788E7F585D33EB(L_4, (bool)0, /*hidden argument*/NULL);
		// if (dest.gameObject.TryGetComponent(out UnityEngine.Rendering.Universal.UniversalAdditionalCameraData camData))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___dest1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_m2AA8EE310FFE7E914D9FDA380CEB307873615838(L_6, (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E **)(&V_0), /*hidden argument*/GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_m2AA8EE310FFE7E914D9FDA380CEB307873615838_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// camData.renderShadows = false;
		UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * L_8 = V_0;
		NullCheck(L_8);
		UniversalAdditionalCameraData_set_renderShadows_mF3DA01F9E7788C1BB9BA5EC0CE4A7829DC1B8B14_inline(L_8, (bool)0, /*hidden argument*/NULL);
		// if (reflectSkybox) dest.clearFlags = CameraClearFlags.Skybox;
		bool L_9 = __this->get_reflectSkybox_6();
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// if (reflectSkybox) dest.clearFlags = CameraClearFlags.Skybox;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = ___dest1;
		NullCheck(L_10);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_10, 1, /*hidden argument*/NULL);
		return;
	}

IL_003e:
	{
		// dest.clearFlags = CameraClearFlags.SolidColor;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = ___dest1;
		NullCheck(L_11);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_11, 2, /*hidden argument*/NULL);
		// dest.backgroundColor = Color.black;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = ___dest1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_12);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// UnityEngine.Camera StylizedWater.PlanarReflections::InitializeReflectionCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PlanarReflections_InitializeReflectionCamera_m7BFBEAA55F57259281A491C6BD7A4EC25025771F (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD72F5686FE05C1B386E364E7FBA591559CB3E0CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var go = new GameObject("", typeof(Camera));
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_m9829583AE3BF1285861C580895202F760F3A82E8(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_1, /*hidden argument*/NULL);
		V_0 = L_4;
		// go.name = "Reflection Camera [" + go.GetInstanceID() + "]";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD72F5686FE05C1B386E364E7FBA591559CB3E0CA, L_8, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, L_9, /*hidden argument*/NULL);
		// var camData = go.AddComponent(typeof(UnityEngine.Rendering.Universal.UniversalAdditionalCameraData)) as UnityEngine.Rendering.Universal.UniversalAdditionalCameraData;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13;
		L_13 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_10, L_12, /*hidden argument*/NULL);
		// camData.requiresColorOption = CameraOverrideOption.Off;
		UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * L_14 = ((UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E *)IsInstClass((RuntimeObject*)L_13, UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E_il2cpp_TypeInfo_var));
		NullCheck(L_14);
		UniversalAdditionalCameraData_set_requiresColorOption_mC20219C23DCE430195AF37B30CC7076E0A635EAA_inline(L_14, 0, /*hidden argument*/NULL);
		// camData.requiresDepthOption = CameraOverrideOption.Off;
		UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * L_15 = L_14;
		NullCheck(L_15);
		UniversalAdditionalCameraData_set_requiresDepthOption_m5B5EA1E2F1E4B11CFCA732A686FB65D1B5DAF7E7_inline(L_15, 0, /*hidden argument*/NULL);
		// camData.SetRenderer(0);
		NullCheck(L_15);
		UniversalAdditionalCameraData_SetRenderer_m08B56097CDE7AF80C1DCB8C8824112F44E0F0345_inline(L_15, 0, /*hidden argument*/NULL);
		// var t = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		// var reflectionCamera = go.GetComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		NullCheck(L_17);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18;
		L_18 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_17, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		// reflectionCamera.transform.SetPositionAndRotation(t.position, t.rotation);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = L_18;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_1;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = V_1;
		NullCheck(L_23);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_20, L_22, L_24, /*hidden argument*/NULL);
		// reflectionCamera.depth = -10;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = L_19;
		NullCheck(L_25);
		Camera_set_depth_m33DBE382C6A293EDFF50FF459CBAB2FD3B7F469C(L_25, (-10.0f), /*hidden argument*/NULL);
		// reflectionCamera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = L_25;
		NullCheck(L_26);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_26, (bool)0, /*hidden argument*/NULL);
		// return reflectionCamera;
		return L_26;
	}
}
// UnityEngine.Vector4 StylizedWater.PlanarReflections::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  PlanarReflections_CameraSpacePlane_mBCE5F9DC8B35C32911052BE8639BAAACD73DF489 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal2, float ___sideSign3, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var m = cam.worldToCameraMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___cam0;
		NullCheck(L_0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var cameraPosition = m.MultiplyPoint(pos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var cameraNormal = m.MultiplyVector(normal).normalized * sideSign;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___normal2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		float L_7 = ___sideSign3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// return new Vector4(cameraNormal.x, cameraNormal.y, cameraNormal.z, -Vector3.Dot(cameraPosition, cameraNormal));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_2;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		float L_14 = L_13.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		float L_17;
		L_17 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_18), L_10, L_12, L_14, ((-L_17)), /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.RenderTextureDescriptor StylizedWater.PlanarReflections::GetDescriptor(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  PlanarReflections_GetDescriptor_m1DD0222D842EC41B71F11BA032F362465A5D6544 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, float ___pipelineRenderScale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		// var width = (int)Mathf.Max(camera.pixelWidth * pipelineRenderScale * renderScale);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_2, /*hidden argument*/NULL);
		float L_4 = ___pipelineRenderScale1;
		float L_5 = __this->get_renderScale_4();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4)), (float)L_5)));
		float L_6;
		L_6 = Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_6));
		// var height = (int)Mathf.Max(camera.pixelHeight * pipelineRenderScale * renderScale);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = L_7;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = ___camera0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_9, /*hidden argument*/NULL);
		float L_11 = ___pipelineRenderScale1;
		float L_12 = __this->get_renderScale_4();
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_10)), (float)L_11)), (float)L_12)));
		float L_13;
		L_13 = Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C(L_8, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_13));
		// var hdr = camera.allowHDR;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ___camera0;
		NullCheck(L_14);
		bool L_15;
		L_15 = Camera_get_allowHDR_mD961A362F2C8BBA6FF0B316488FC566D64CB6222(L_14, /*hidden argument*/NULL);
		// var renderTextureFormat = hdr ? RenderTextureFormat.DefaultHDR : RenderTextureFormat.Default;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		G_B3_0 = 7;
		goto IL_004d;
	}

IL_004b:
	{
		G_B3_0 = ((int32_t)9);
	}

IL_004d:
	{
		V_2 = G_B3_0;
		// return new RenderTextureDescriptor(width, height, renderTextureFormat, 16)
		// {
		//     autoGenerateMips = true,
		//     useMipMap = true
		// };
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_3), L_16, L_17, L_18, ((int32_t)16), /*hidden argument*/NULL);
		RenderTextureDescriptor_set_autoGenerateMips_mB2B22300BCC043280A910A3E54E9DA327DEB0EA6((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_3), (bool)1, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_useMipMap_m12CB5C3FB080267160281489734107AA60078EBC((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_3), (bool)1, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_19 = V_3;
		return L_19;
	}
}
// System.Void StylizedWater.PlanarReflections::CreateReflectionTexture(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CreateReflectionTexture_m98BFCD91CB516DB689FC4B4C0B92C5733AB7224B (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t4FA4E16BFFB0A3C09A811365C66D3158CAA4F981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var descriptor = GetDescriptor(camera, UniversalRenderPipeline.asset.renderScale);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(UniversalRenderPipeline_t4FA4E16BFFB0A3C09A811365C66D3158CAA4F981_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67 * L_1;
		L_1 = UniversalRenderPipeline_get_asset_m49A3D05C0FE3F383C63A4E03A511C9EB30DC81C4(/*hidden argument*/NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = UniversalRenderPipelineAsset_get_renderScale_m085A3D5E3EB44F9BA241D7A1FE559A41EC432228_inline(L_1, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_3;
		L_3 = PlanarReflections_GetDescriptor_m1DD0222D842EC41B71F11BA032F362465A5D6544(__this, L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (_reflectionTexture == null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// _reflectionTexture = RenderTexture.GetTemporary(descriptor);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_6 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
		L_7 = RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF(L_6, /*hidden argument*/NULL);
		((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->set__reflectionTexture_11(L_7);
		// previousDescriptor = descriptor;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_8 = V_0;
		__this->set_previousDescriptor_12(L_8);
		// }
		goto IL_0075;
	}

IL_0033:
	{
		// else if (!descriptor.Equals(previousDescriptor))
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_9 = __this->get_previousDescriptor_12();
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_10 = L_9;
		RuntimeObject * L_11 = Box(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_il2cpp_TypeInfo_var, &L_10);
		RuntimeObject * L_12 = Box(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_11);
		V_0 = *(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)UnBox(L_12);
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		// if (_reflectionTexture) RenderTexture.ReleaseTemporary(_reflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if (_reflectionTexture) RenderTexture.ReleaseTemporary(_reflectionTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_16, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// _reflectionTexture = RenderTexture.GetTemporary(descriptor);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_17 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18;
		L_18 = RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF(L_17, /*hidden argument*/NULL);
		((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->set__reflectionTexture_11(L_18);
		// previousDescriptor = descriptor;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_19 = V_0;
		__this->set_previousDescriptor_12(L_19);
	}

IL_0075:
	{
		// _reflectionCamera.targetTexture = _reflectionTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_21 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		NullCheck(L_20);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::DoPlanarReflections(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_DoPlanarReflections_m75A758DBE2A1FC8EAFA6C69B2C845385B2479359 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m1EE97B0A1B03F8D1BFE7BAC68AEB3053D84C1B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t4FA4E16BFFB0A3C09A811365C66D3158CAA4F981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * G_B7_0 = NULL;
	PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * G_B7_1 = NULL;
	Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * G_B6_0 = NULL;
	PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * G_B6_1 = NULL;
	PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * G_B8_0 = NULL;
	PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * G_B10_0 = NULL;
	PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * G_B9_0 = NULL;
	{
		// if (camera.cameraType == CameraType.Reflection || camera.cameraType == CameraType.Preview) return;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)16))))
		{
			goto IL_0013;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		// if (camera.cameraType == CameraType.Reflection || camera.cameraType == CameraType.Preview) return;
		return;
	}

IL_0014:
	{
		// if (!reflectionTarget) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_reflectionTarget_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		// if (!reflectionTarget) return;
		return;
	}

IL_0022:
	{
		// UpdateReflectionCamera(camera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___camera1;
		PlanarReflections_UpdateReflectionCamera_m056BF0F2E4D10B6FB8FD61D3FE0C2D7042B4B107(__this, L_6, /*hidden argument*/NULL);
		// CreateReflectionTexture(camera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = ___camera1;
		PlanarReflections_CreateReflectionTexture_m98BFCD91CB516DB689FC4B4C0B92C5733AB7224B(__this, L_7, /*hidden argument*/NULL);
		// var data = new PlanarReflectionSettingData();
		PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * L_8 = (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 *)il2cpp_codegen_object_new(PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301_il2cpp_TypeInfo_var);
		PlanarReflectionSettingData__ctor_m66E05F1A0228C7DC7374F4D80E873222D62E0250(L_8, /*hidden argument*/NULL);
		// data.Set();
		PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * L_9 = L_8;
		NullCheck(L_9);
		PlanarReflectionSettingData_Set_m281A6C546DB5FE5E879329632CD8C9A829583768(L_9, /*hidden argument*/NULL);
		// BeginPlanarReflections?.Invoke(context, _reflectionCamera);
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_10 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get_BeginPlanarReflections_14();
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_11 = L_10;
		G_B6_0 = L_11;
		G_B6_1 = L_9;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = L_9;
			goto IL_0046;
		}
	}
	{
		G_B8_0 = G_B6_1;
		goto IL_0051;
	}

IL_0046:
	{
		ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  L_12 = ___context0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		NullCheck(G_B7_0);
		Action_2_Invoke_m1EE97B0A1B03F8D1BFE7BAC68AEB3053D84C1B44(G_B7_0, L_12, L_13, /*hidden argument*/Action_2_Invoke_m1EE97B0A1B03F8D1BFE7BAC68AEB3053D84C1B44_RuntimeMethod_var);
		G_B8_0 = G_B7_1;
	}

IL_0051:
	{
		// if (_reflectionCamera.WorldToViewportPoint(reflectionTarget.transform.position).z < 100000) UniversalRenderPipeline.RenderSingleCamera(context, _reflectionCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_reflectionTarget_7();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_14, L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		G_B9_0 = G_B8_0;
		if ((!(((float)L_19) < ((float)(100000.0f)))))
		{
			G_B10_0 = G_B8_0;
			goto IL_0082;
		}
	}
	{
		// if (_reflectionCamera.WorldToViewportPoint(reflectionTarget.transform.position).z < 100000) UniversalRenderPipeline.RenderSingleCamera(context, _reflectionCamera);
		ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  L_20 = ___context0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionCamera_9();
		IL2CPP_RUNTIME_CLASS_INIT(UniversalRenderPipeline_t4FA4E16BFFB0A3C09A811365C66D3158CAA4F981_il2cpp_TypeInfo_var);
		UniversalRenderPipeline_RenderSingleCamera_m050F3621EEE18BD32AA23340A165F8C565F3D689(L_20, L_21, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
	}

IL_0082:
	{
		// data.Restore();
		NullCheck(G_B10_0);
		PlanarReflectionSettingData_Restore_m737368AE38267E2DD6839ED155B20F620FBE2A44(G_B10_0, /*hidden argument*/NULL);
		// Shader.SetGlobalTexture(_planarReflectionTextureId, _reflectionTexture);
		int32_t L_22 = __this->get__planarReflectionTextureId_13();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = ((PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC_il2cpp_TypeInfo_var))->get__reflectionTexture_11();
		Shader_SetGlobalTexture_m0C81952FBBF80467F736DA58434E4C2CEF757792(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections_CalculateReflectionMatrix_m865CD0436577CD31312E2C3F9807BE44E5B94784 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___reflectionMatrix0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___plane1, const RuntimeMethod* method)
{
	{
		// reflectionMatrix.m00 = (1F - 2F * plane[0] * plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = ___reflectionMatrix0;
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_0->set_m00_0(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_1)), (float)L_2)))));
		// reflectionMatrix.m01 = (-2F * plane[0] * plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_3 = ___reflectionMatrix0;
		float L_4;
		L_4 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_3->set_m01_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_4)), (float)L_5)));
		// reflectionMatrix.m02 = (-2F * plane[0] * plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_6 = ___reflectionMatrix0;
		float L_7;
		L_7 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		float L_8;
		L_8 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_6->set_m02_8(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_7)), (float)L_8)));
		// reflectionMatrix.m03 = (-2F * plane[3] * plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_9 = ___reflectionMatrix0;
		float L_10;
		L_10 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_11;
		L_11 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_9->set_m03_12(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_10)), (float)L_11)));
		// reflectionMatrix.m10 = (-2F * plane[1] * plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_12 = ___reflectionMatrix0;
		float L_13;
		L_13 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_14;
		L_14 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_12->set_m10_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_13)), (float)L_14)));
		// reflectionMatrix.m11 = (1F - 2F * plane[1] * plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_15 = ___reflectionMatrix0;
		float L_16;
		L_16 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_17;
		L_17 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_15->set_m11_5(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_16)), (float)L_17)))));
		// reflectionMatrix.m12 = (-2F * plane[1] * plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_18 = ___reflectionMatrix0;
		float L_19;
		L_19 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_18->set_m12_9(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_19)), (float)L_20)));
		// reflectionMatrix.m13 = (-2F * plane[3] * plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_21 = ___reflectionMatrix0;
		float L_22;
		L_22 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_23;
		L_23 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_21->set_m13_13(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_22)), (float)L_23)));
		// reflectionMatrix.m20 = (-2F * plane[2] * plane[0]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_24 = ___reflectionMatrix0;
		float L_25;
		L_25 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_26;
		L_26 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 0, /*hidden argument*/NULL);
		L_24->set_m20_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_25)), (float)L_26)));
		// reflectionMatrix.m21 = (-2F * plane[2] * plane[1]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_27 = ___reflectionMatrix0;
		float L_28;
		L_28 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_29;
		L_29 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 1, /*hidden argument*/NULL);
		L_27->set_m21_6(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_28)), (float)L_29)));
		// reflectionMatrix.m22 = (1F - 2F * plane[2] * plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_30 = ___reflectionMatrix0;
		float L_31;
		L_31 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		float L_32;
		L_32 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_30->set_m22_10(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_31)), (float)L_32)))));
		// reflectionMatrix.m23 = (-2F * plane[3] * plane[2]);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_33 = ___reflectionMatrix0;
		float L_34;
		L_34 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 3, /*hidden argument*/NULL);
		float L_35;
		L_35 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___plane1), 2, /*hidden argument*/NULL);
		L_33->set_m23_14(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_34)), (float)L_35)));
		// reflectionMatrix.m30 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_36 = ___reflectionMatrix0;
		L_36->set_m30_3((0.0f));
		// reflectionMatrix.m31 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_37 = ___reflectionMatrix0;
		L_37->set_m31_7((0.0f));
		// reflectionMatrix.m32 = 0F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_38 = ___reflectionMatrix0;
		L_38->set_m32_11((0.0f));
		// reflectionMatrix.m33 = 1F;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_39 = ___reflectionMatrix0;
		L_39->set_m33_15((1.0f));
		// }
		return;
	}
}
// UnityEngine.Vector3 StylizedWater.PlanarReflections::ReflectPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PlanarReflections_ReflectPosition_m26BC86219F0821814F8AB90C170775F8D5C48553 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method)
{
	{
		// var newPos = new Vector3(pos.x, -pos.y, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pos0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___pos0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, ((-L_3)), L_5, /*hidden argument*/NULL);
		// return newPos;
		return L_6;
	}
}
// System.Boolean StylizedWater.PlanarReflections::Compare(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarReflections_Compare_mDEDF214439B2771FD414592146F6BAC599579E39 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	{
		// return a.x == b.x && a.y == b.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void StylizedWater.PlanarReflections::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflections__ctor_m8B0AA19E2A537EA0B3FA68AF2EEEF73A61E5AAD1 (PlanarReflections_t6C6AC91C5FE546D95E4E2633DCD2447AAEE273FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701478AFDFECD0D2F0AE895576A1F0AE93D28F07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Range(0.01f, 1f)] public float renderScale = 1f;
		__this->set_renderScale_4((1.0f));
		// public LayerMask reflectionLayer = -1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C((-1), /*hidden argument*/NULL);
		__this->set_reflectionLayer_5(L_0);
		// private readonly int _planarReflectionTextureId = Shader.PropertyToID("_PlanarReflectionTexture");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral701478AFDFECD0D2F0AE895576A1F0AE93D28F07, /*hidden argument*/NULL);
		__this->set__planarReflectionTextureId_13(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StylizedWater.StylizedWaterURP::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_OnEnable_mBBC457D56760527288269ABCC9C82CCE0519BEAC (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B10_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B11_1 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B13_0 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B14_1 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B16_0 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B17_1 = NULL;
	{
		// if (!meshRenderer) meshRenderer = this.GetComponent<MeshRenderer>();
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_meshRenderer_110();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!meshRenderer) meshRenderer = this.GetComponent<MeshRenderer>();
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		__this->set_meshRenderer_110(L_2);
	}

IL_0019:
	{
		// if (!meshFilter) meshFilter = this.GetComponent<MeshFilter>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_3 = __this->get_meshFilter_111();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (!meshFilter) meshFilter = this.GetComponent<MeshFilter>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_5;
		L_5 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		__this->set_meshFilter_111(L_5);
	}

IL_0032:
	{
		// material = meshRenderer.sharedMaterial;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_6 = __this->get_meshRenderer_110();
		NullCheck(L_6);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_6, /*hidden argument*/NULL);
		__this->set_material_112(L_7);
		// meshRenderer.shadowCastingMode = ShadowCastingMode.Off;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_8 = __this->get_meshRenderer_110();
		NullCheck(L_8);
		Renderer_set_shadowCastingMode_mDD2D9695A5F1B0D1FCACB8D87A3D1148C14D6F01(L_8, 0, /*hidden argument*/NULL);
		// if (material && meshRenderer && meshFilter && !Application.isPlaying)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_material_112();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00c7;
		}
	}
	{
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_11 = __this->get_meshRenderer_110();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_13 = __this->get_meshFilter_111();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_15;
		L_15 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00c7;
		}
	}
	{
		// meshRenderer.sharedMaterial.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16 = __this->get_meshRenderer_110();
		NullCheck(L_16);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17;
		L_17 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_16, /*hidden argument*/NULL);
		bool L_18 = __this->get_hideComponents_107();
		G_B9_0 = L_17;
		if (L_18)
		{
			G_B10_0 = L_17;
			goto IL_0093;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
	}

IL_0094:
	{
		NullCheck(G_B11_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		// meshRenderer.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_19 = __this->get_meshRenderer_110();
		bool L_20 = __this->get_hideComponents_107();
		G_B12_0 = L_19;
		if (L_20)
		{
			G_B13_0 = L_19;
			goto IL_00aa;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B14_0 = 2;
		G_B14_1 = G_B13_0;
	}

IL_00ab:
	{
		NullCheck(G_B14_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		// meshFilter.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_21 = __this->get_meshFilter_111();
		bool L_22 = __this->get_hideComponents_107();
		G_B15_0 = L_21;
		if (L_22)
		{
			G_B16_0 = L_21;
			goto IL_00c1;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B17_0 = 2;
		G_B17_1 = G_B16_0;
	}

IL_00c2:
	{
		NullCheck(G_B17_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B17_1, G_B17_0, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// this.gameObject.layer = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_23, 4, /*hidden argument*/NULL);
		// ReadMaterialProperties();
		StylizedWaterURP_ReadMaterialProperties_m0AD9E5B301E6550055603C76FA1ECD886A1B34FA(__this, /*hidden argument*/NULL);
		// WriteMaterialProperties();
		StylizedWaterURP_WriteMaterialProperties_m8D6E9D068EF4BE16BE0723971BD91300B955E05D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_Reset_m538F5A2300483BBF1B6731AC92BEED8FA84226FE (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// void Reset() => OnEnable();
		StylizedWaterURP_OnEnable_mBBC457D56760527288269ABCC9C82CCE0519BEAC(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::ResetHideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_ResetHideFlags_m3E4ECE1E5A96DCC599536666CAD3EEDDEB1D521C (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material && meshRenderer && meshFilter && !Application.isPlaying)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_material_112();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_2 = __this->get_meshRenderer_110();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_4 = __this->get_meshFilter_111();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		bool L_6;
		L_6 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		// meshRenderer.sharedMaterial.hideFlags = HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = __this->get_meshRenderer_110();
		NullCheck(L_7);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_8, 0, /*hidden argument*/NULL);
		// meshRenderer.hideFlags = HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9 = __this->get_meshRenderer_110();
		NullCheck(L_9);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_9, 0, /*hidden argument*/NULL);
		// meshFilter.hideFlags = HideFlags.None;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_10 = __this->get_meshFilter_111();
		NullCheck(L_10);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_10, 0, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_OnDisable_mA11999CF530A52F26DE6303B2313D3DCC74DB0BD (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// private void OnDisable() => ResetHideFlags();
		StylizedWaterURP_ResetHideFlags_m3E4ECE1E5A96DCC599536666CAD3EEDDEB1D521C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_OnDestroy_m168F9A39187765D915F7110560B4301A80F10F1B (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// private void OnDestroy() => ResetHideFlags();
		StylizedWaterURP_ResetHideFlags_m3E4ECE1E5A96DCC599536666CAD3EEDDEB1D521C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::SafeDestroyObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_SafeDestroyObject_mF93B9E308394A1365221CD01F276A1E50C317EE4 (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor) DestroyImmediate(obj);
		bool L_0;
		L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (Application.isEditor) DestroyImmediate(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_1, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		// else Destroy(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::ReadMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_ReadMaterialProperties_m0AD9E5B301E6550055603C76FA1ECD886A1B34FA (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral041D9147FCC3085B0EC2BDA3C11F3A181998AD8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A58035A03D99DED1301B952DBC00E8FC8741618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DD3F54D20A90255F364735B76B52BBD05DECE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1CEBE15C5797209AA3C83FD132C029D3FAE795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0AB2F3EEE43CF59599847A13D381166DD9E000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral314314AAF9B66BEEEFD467D27B1D9F9FCE9847EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral403DBED855A029F46C7C6E6F7AE94262F5EE2A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F2B4EDB1966ECF89382516690F31A046BB9068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421123D5FE201AAA768A7B652962605BD2174033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B5732603D298425067F69269F47B9B8F6D5763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493FC5A67E3AA357259B8025A047D55576652948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D35AFF824670621BA8FDD4EF4BCD302E75A870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral599631BF813AD51AEFC83394541DF8C491ED8914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC36ACD8F1D3C13901B44A0B1F4C86AE56EFCF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F42FFAE2A925A5F5E591BBAC0535D43D925A91B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600C8E8AEDCC3F78FE5416A5E8D6176B333DA6EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64FD1BBE4BB9A29456916871051EB15AA423F35F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6762219BFDE45F809091535BC69D45B777224781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67877C115DDC7712D22845AFFF07A1D84D44D248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F3FBFAC83F9BFC07560D56676CBDB4E6AA9167);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF7063852E0105D54A62FB8084245ED321886B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7636A23DF21CCABAB0C9C75279FA31671F9EC3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76502E125FBDCAF3377A445CD9CBAF7C388DFE9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7801D88C95FC982F2D7C9A1DC2E325E6E7387B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79886FA9CF59122D0B1DBE35D4DCF5F983BDA127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8473AA138FB4CF2AC86AA6DE9A2F45D170E6FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8952A863A79819623CEF1FE142A6BADC18FDA38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8998079511B0C081C91832B55C008102C6773BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B66A817222674DBBC174A6CE8DAAB2B9E89ECA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE52B0F2BC38AF814E21FAD43C469A4D257049F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CEFC794E274C44D1A50BFC9D1B153E485F54FAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCA9E52357DC1DFFC6C5F25BB099BF666FE8337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral995CE9467B43081AF33F6037C559EF61760235E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5E2E5757F5B0BE63E44862CF266CCE9A81C12C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD8F962F47C230B8F517A3BDE324BB42E6283DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BFCD84CA1BCE01A10B8D732418255EE7B29AEE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DAC0A1CC978C94BA1C2BBFA83DCBB5B90EAC2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01E7D2DD7693408B1D1677571D3BF55C24FB2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A83BBB4568E6570EC9B686BCC91CC5799FA592);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA66B2B71EBE542C0D46C6CF97E6D64E3DD950406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33F539A9E01915F4EB26ED03378C46E151061CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC583F47E5B425A079958150F0455B594B984249A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62386AC1C3EE21307A94D8026EB3BFC38722050);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC845047E036C62A1F573242E73A59A65DB38BA59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC851DCB31C58F247BD272816D02231576FA2D18E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A05B6469D2356B1E7DF6E35DBF6330C3D43146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3481A898F4378325D0E2C2B6CE721959464472E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA3F3B9E65DA46E11654DC27B3C37BD037640BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA54D4E0E9BB6B83D60BF85D0FE37CAF05A26A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE20DFD3A35F702F8FD36471E40D2F2EC2C77C799);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3321A3E07AB7760D7942B139137B6F6C4966F61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF604896EC5C3A469F7F7484ACA069166072111C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B8F322273F1F56538A17A91B9C676502616038);
		s_Il2CppMethodInitialized = true;
	}
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B10_0 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B11_1 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B18_0 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B19_1 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B25_0 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B26_1 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B28_0 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B29_1 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B37_0 = NULL;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * G_B38_1 = NULL;
	{
		// if (meshRenderer) material = meshRenderer.sharedMaterial;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_meshRenderer_110();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (meshRenderer) material = meshRenderer.sharedMaterial;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_2 = __this->get_meshRenderer_110();
		NullCheck(L_2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_2, /*hidden argument*/NULL);
		__this->set_material_112(L_3);
	}

IL_001e:
	{
		// if (!material) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_material_112();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		// if (!material) return;
		return;
	}

IL_002c:
	{
		// if (material.shader.name != shaderName && material.shader.name != mobileShaderName && material.shader.name != underwaterShaderName) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_material_112();
		NullCheck(L_6);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_material_112();
		NullCheck(L_10);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_11;
		L_11 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_12, _stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_material_112();
		NullCheck(L_14);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_15;
		L_15 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_16, _stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		// if (material.shader.name != shaderName && material.shader.name != mobileShaderName && material.shader.name != underwaterShaderName) return;
		return;
	}

IL_0081:
	{
		// enableRefraction = (material.IsKeywordEnabled("REFRACTION_ON")) ? true : false;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = __this->get_material_112();
		NullCheck(L_18);
		bool L_19;
		L_19 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_18, _stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0, /*hidden argument*/NULL);
		G_B9_0 = __this;
		if (L_19)
		{
			G_B10_0 = __this;
			goto IL_0097;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0098;
	}

IL_0097:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0098:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_enableRefraction_109((bool)G_B11_0);
		// waveVisuals = material.GetVector("_WaveVisuals");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_material_112();
		NullCheck(L_20);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		L_21 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_20, _stringLiteralC62386AC1C3EE21307A94D8026EB3BFC38722050, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_21, /*hidden argument*/NULL);
		__this->set_waveVisuals_97(L_22);
		// waveSteepness = waveVisuals.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_waveVisuals_97();
		float L_24 = L_23->get_x_2();
		__this->set_waveSteepness_98(L_24);
		// waveLength = waveVisuals.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_waveVisuals_97();
		float L_26 = L_25->get_y_3();
		__this->set_waveLength_99(L_26);
		// waveSpeed = waveVisuals.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_waveVisuals_97();
		float L_28 = L_27->get_z_4();
		__this->set_waveSpeed_100(L_28);
		// waveDirections = material.GetVector("_WaveDirections");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_material_112();
		NullCheck(L_29);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_30;
		L_30 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_29, _stringLiteralB33F539A9E01915F4EB26ED03378C46E151061CF, /*hidden argument*/NULL);
		__this->set_waveDirections_101(L_30);
		// waveDirection1 = waveDirections.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_31 = __this->get_address_of_waveDirections_101();
		float L_32 = L_31->get_x_1();
		__this->set_waveDirection1_102(L_32);
		// waveDirection2 = waveDirections.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_33 = __this->get_address_of_waveDirections_101();
		float L_34 = L_33->get_y_2();
		__this->set_waveDirection2_103(L_34);
		// waveDirection3 = waveDirections.z;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_35 = __this->get_address_of_waveDirections_101();
		float L_36 = L_35->get_z_3();
		__this->set_waveDirection3_104(L_36);
		// waveDirection4 = waveDirections.w;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_37 = __this->get_address_of_waveDirections_101();
		float L_38 = L_37->get_w_4();
		__this->set_waveDirection4_105(L_38);
		// refractionStrength = material.GetFloat("_RefractionStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = __this->get_material_112();
		NullCheck(L_39);
		float L_40;
		L_40 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_39, _stringLiteral6BF7063852E0105D54A62FB8084245ED321886B1, /*hidden argument*/NULL);
		__this->set_refractionStrength_96(L_40);
		// normalsMovement = material.GetVector("_NormalsMovement");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = __this->get_material_112();
		NullCheck(L_41);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_42;
		L_42 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_41, _stringLiteral6762219BFDE45F809091535BC69D45B777224781, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC(L_42, /*hidden argument*/NULL);
		__this->set_normalsMovement_92(L_43);
		// normalsSpeed = normalsMovement.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_normalsMovement_92();
		float L_45 = L_44->get_x_0();
		__this->set_normalsSpeed_95(L_45);
		// normalsScale = normalsMovement.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = __this->get_address_of_normalsMovement_92();
		float L_47 = L_46->get_y_1();
		__this->set_normalsScale_94(L_47);
		// if (material.shader.name == shaderName || material.shader.name == underwaterShaderName) underwaterColor = material.GetColor("_WaterColorUnderwater");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_material_112();
		NullCheck(L_48);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_49;
		L_49 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_49, /*hidden argument*/NULL);
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_01d0;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_52 = __this->get_material_112();
		NullCheck(L_52);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_53;
		L_53 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_53, /*hidden argument*/NULL);
		bool L_55;
		L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01e6;
		}
	}

IL_01d0:
	{
		// if (material.shader.name == shaderName || material.shader.name == underwaterShaderName) underwaterColor = material.GetColor("_WaterColorUnderwater");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_material_112();
		NullCheck(L_56);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_56, _stringLiteral493FC5A67E3AA357259B8025A047D55576652948, /*hidden argument*/NULL);
		__this->set_underwaterColor_39(L_57);
	}

IL_01e6:
	{
		// if (material.shader.name == shaderName || material.shader.name == mobileShaderName)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58 = __this->get_material_112();
		NullCheck(L_58);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_59;
		L_59 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_59, /*hidden argument*/NULL);
		bool L_61;
		L_61 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_60, _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0221;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = __this->get_material_112();
		NullCheck(L_62);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_63;
		L_63 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_63, /*hidden argument*/NULL);
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_0484;
		}
	}

IL_0221:
	{
		// shallowColor = material.GetColor("_WaterColorShallow");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_66 = __this->get_material_112();
		NullCheck(L_66);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_67;
		L_67 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_66, _stringLiteral69F3FBFAC83F9BFC07560D56676CBDB4E6AA9167, /*hidden argument*/NULL);
		__this->set_shallowColor_28(L_67);
		// deepColor = material.GetColor("_WaterColorDeep");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_68 = __this->get_material_112();
		NullCheck(L_68);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_69;
		L_69 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_68, _stringLiteral9DAC0A1CC978C94BA1C2BBFA83DCBB5B90EAC2BC, /*hidden argument*/NULL);
		__this->set_deepColor_29(L_69);
		// horizonColor = material.GetColor("_WaterColorHorizon");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70 = __this->get_material_112();
		NullCheck(L_70);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71;
		L_71 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_70, _stringLiteral7801D88C95FC982F2D7C9A1DC2E325E6E7387B50, /*hidden argument*/NULL);
		__this->set_horizonColor_31(L_71);
		// colorDepth = material.GetFloat("_WaterColorDepth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72 = __this->get_material_112();
		NullCheck(L_72);
		float L_73;
		L_73 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_72, _stringLiteral40F2B4EDB1966ECF89382516690F31A046BB9068, /*hidden argument*/NULL);
		__this->set_colorDepth_30(L_73);
		// horizonDistance = material.GetFloat("_WaterColorHorizonDistance");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74 = __this->get_material_112();
		NullCheck(L_74);
		float L_75;
		L_75 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_74, _stringLiteralA66B2B71EBE542C0D46C6CF97E6D64E3DD950406, /*hidden argument*/NULL);
		__this->set_horizonDistance_32(L_75);
		// waveColor = material.GetColor("_WaveColor");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76 = __this->get_material_112();
		NullCheck(L_76);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77;
		L_77 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_76, _stringLiteral8473AA138FB4CF2AC86AA6DE9A2F45D170E6FF29, /*hidden argument*/NULL);
		__this->set_waveColor_38(L_77);
		// shoreColor = material.GetColor("_ShoreColor");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78 = __this->get_material_112();
		NullCheck(L_78);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
		L_79 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_78, _stringLiteralA01E7D2DD7693408B1D1677571D3BF55C24FB2D3, /*hidden argument*/NULL);
		__this->set_shoreColor_34(L_79);
		// shoreDepth = material.GetFloat("_ShoreDepth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80 = __this->get_material_112();
		NullCheck(L_80);
		float L_81;
		L_81 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_80, _stringLiteral9BFCD84CA1BCE01A10B8D732418255EE7B29AEE6, /*hidden argument*/NULL);
		__this->set_shoreDepth_37(L_81);
		// shoreFade = material.GetFloat("_ShoreFade");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82 = __this->get_material_112();
		NullCheck(L_82);
		float L_83;
		L_83 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_82, _stringLiteral8FCA9E52357DC1DFFC6C5F25BB099BF666FE8337, /*hidden argument*/NULL);
		__this->set_shoreFade_33(L_83);
		// shoreBlend = material.GetFloat("_ShoreBlend");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = __this->get_material_112();
		NullCheck(L_84);
		float L_85;
		L_85 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_84, _stringLiteral7636A23DF21CCABAB0C9C75279FA31671F9EC3A4, /*hidden argument*/NULL);
		__this->set_shoreBlend_36(L_85);
		// surfaceFoamTexture = material.GetTexture("_SurfaceFoamTexture");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86 = __this->get_material_112();
		NullCheck(L_86);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_87;
		L_87 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_86, _stringLiteralE20DFD3A35F702F8FD36471E40D2F2EC2C77C799, /*hidden argument*/NULL);
		__this->set_surfaceFoamTexture_42(L_87);
		// surfaceFoamSampling = material.GetVector("_SurfaceFoamSampling");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_88 = __this->get_material_112();
		NullCheck(L_88);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_89;
		L_89 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_88, _stringLiteral600C8E8AEDCC3F78FE5416A5E8D6176B333DA6EE, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90;
		L_90 = Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC(L_89, /*hidden argument*/NULL);
		__this->set_surfaceFoamSampling_43(L_90);
		// surfaceFoamCutoff = surfaceFoamSampling.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_91 = __this->get_address_of_surfaceFoamSampling_43();
		float L_92 = L_91->get_x_0();
		__this->set_surfaceFoamCutoff_44(L_92);
		// surfaceFoamDistortion = surfaceFoamSampling.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_93 = __this->get_address_of_surfaceFoamSampling_43();
		float L_94 = L_93->get_y_1();
		__this->set_surfaceFoamDistortion_45(L_94);
		// surfaceFoamBlend = material.GetFloat("_SurfaceFoamBlend");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95 = __this->get_material_112();
		NullCheck(L_95);
		float L_96;
		L_96 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_95, _stringLiteral5EC36ACD8F1D3C13901B44A0B1F4C86AE56EFCF2, /*hidden argument*/NULL);
		__this->set_surfaceFoamBlend_46(L_96);
		// surfaceFoamColor1 = material.GetColor("_SurfaceFoamColor1");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_97 = __this->get_material_112();
		NullCheck(L_97);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98;
		L_98 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_97, _stringLiteral9BD8F962F47C230B8F517A3BDE324BB42E6283DA, /*hidden argument*/NULL);
		__this->set_surfaceFoamColor1_47(L_98);
		// surfaceFoamColor2 = material.GetColor("_SurfaceFoamColor2");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_99 = __this->get_material_112();
		NullCheck(L_99);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_100;
		L_100 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_99, _stringLiteral8BE52B0F2BC38AF814E21FAD43C469A4D257049F, /*hidden argument*/NULL);
		__this->set_surfaceFoamColor2_48(L_100);
		// surfaceFoamMovement = material.GetVector("_SurfaceFoamMovement");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_101 = __this->get_material_112();
		NullCheck(L_101);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_102;
		L_102 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_101, _stringLiteral403DBED855A029F46C7C6E6F7AE94262F5EE2A26, /*hidden argument*/NULL);
		__this->set_surfaceFoamMovement_49(L_102);
		// surfaceFoamDirection1 = surfaceFoamMovement.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_103 = __this->get_address_of_surfaceFoamMovement_49();
		float L_104 = L_103->get_x_1();
		__this->set_surfaceFoamDirection1_50(L_104);
		// surfaceFoamDirection2 = surfaceFoamMovement.z;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_105 = __this->get_address_of_surfaceFoamMovement_49();
		float L_106 = L_105->get_z_3();
		__this->set_surfaceFoamDirection2_51(L_106);
		// surfaceFoamSpeed1 = surfaceFoamMovement.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_107 = __this->get_address_of_surfaceFoamMovement_49();
		float L_108 = L_107->get_y_2();
		__this->set_surfaceFoamSpeed1_52(L_108);
		// surfaceFoamSpeed2 = surfaceFoamMovement.w;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_109 = __this->get_address_of_surfaceFoamMovement_49();
		float L_110 = L_109->get_w_4();
		__this->set_surfaceFoamSpeed2_53(L_110);
		// surfaceFoamTilingAndOffset = material.GetVector("_SurfaceFoamTilingAndOffset");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_111 = __this->get_material_112();
		NullCheck(L_111);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_112;
		L_112 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_111, _stringLiteral995CE9467B43081AF33F6037C559EF61760235E6, /*hidden argument*/NULL);
		__this->set_surfaceFoamTilingAndOffset_54(L_112);
		// surfaceFoamOffsetX = surfaceFoamTilingAndOffset.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_113 = __this->get_address_of_surfaceFoamTilingAndOffset_54();
		float L_114 = L_113->get_x_1();
		__this->set_surfaceFoamOffsetX_55(L_114);
		// surfaceFoamOffsetY = surfaceFoamTilingAndOffset.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_115 = __this->get_address_of_surfaceFoamTilingAndOffset_54();
		float L_116 = L_115->get_y_2();
		__this->set_surfaceFoamOffsetY_56(L_116);
		// surfaceFoamScale1 = surfaceFoamTilingAndOffset.z;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_117 = __this->get_address_of_surfaceFoamTilingAndOffset_54();
		float L_118 = L_117->get_z_3();
		__this->set_surfaceFoamScale1_57(L_118);
		// surfaceFoamScale2 = surfaceFoamTilingAndOffset.w;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * L_119 = __this->get_address_of_surfaceFoamTilingAndOffset_54();
		float L_120 = L_119->get_w_4();
		__this->set_surfaceFoamScale2_58(L_120);
		// enableSurfaceFoam = (material.IsKeywordEnabled("SURFACE_FOAM_ON")) ? true : false;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_121 = __this->get_material_112();
		NullCheck(L_121);
		bool L_122;
		L_122 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_121, _stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0, /*hidden argument*/NULL);
		G_B17_0 = __this;
		if (L_122)
		{
			G_B18_0 = __this;
			goto IL_045c;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_045d;
	}

IL_045c:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
	}

IL_045d:
	{
		NullCheck(G_B19_1);
		G_B19_1->set_enableSurfaceFoam_59((bool)G_B19_0);
		// if (material.IsKeywordEnabled("WORLD_SPACE_UV_ON")) waterUVs = WaterUVs.World;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_123 = __this->get_material_112();
		NullCheck(L_123);
		bool L_124;
		L_124 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_123, _stringLiteral8998079511B0C081C91832B55C008102C6773BB5, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_047d;
		}
	}
	{
		// if (material.IsKeywordEnabled("WORLD_SPACE_UV_ON")) waterUVs = WaterUVs.World;
		__this->set_waterUVs_106(1);
		goto IL_0484;
	}

IL_047d:
	{
		// else waterUVs = WaterUVs.Local;
		__this->set_waterUVs_106(0);
	}

IL_0484:
	{
		// if (material.shader.name == shaderName)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125 = __this->get_material_112();
		NullCheck(L_125);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_126;
		L_126 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_125, /*hidden argument*/NULL);
		NullCheck(L_126);
		String_t* L_127;
		L_127 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_126, /*hidden argument*/NULL);
		bool L_128;
		L_128 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_127, _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_08a6;
		}
	}
	{
		// useColorGradient = (material.IsKeywordEnabled("COLOR_GRADIENT_ON")) ? true : false;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_129 = __this->get_material_112();
		NullCheck(L_129);
		bool L_130;
		L_130 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_129, _stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370, /*hidden argument*/NULL);
		G_B24_0 = __this;
		if (L_130)
		{
			G_B25_0 = __this;
			goto IL_04b9;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_04ba;
	}

IL_04b9:
	{
		G_B26_0 = 1;
		G_B26_1 = G_B25_0;
	}

IL_04ba:
	{
		NullCheck(G_B26_1);
		G_B26_1->set_useColorGradient_25((bool)G_B26_0);
		// colorGradientTexture = (Texture2D)material.GetTexture("_WaterColorGradientTexture");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_131 = __this->get_material_112();
		NullCheck(L_131);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_132;
		L_132 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_131, _stringLiteral041D9147FCC3085B0EC2BDA3C11F3A181998AD8B, /*hidden argument*/NULL);
		__this->set_colorGradientTexture_27(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_132, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		// causticsStrength = material.GetFloat("_CausticsStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133 = __this->get_material_112();
		NullCheck(L_133);
		float L_134;
		L_134 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_133, _stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544, /*hidden argument*/NULL);
		__this->set_causticsStrength_16(L_134);
		// causticsTexture = material.GetTexture("_CausticsTexture");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_135 = __this->get_material_112();
		NullCheck(L_135);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_136;
		L_136 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_135, _stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB, /*hidden argument*/NULL);
		__this->set_causticsTexture_17(L_136);
		// causticsSplit = material.GetFloat("_CausticsSplit");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_137 = __this->get_material_112();
		NullCheck(L_137);
		float L_138;
		L_138 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_137, _stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2, /*hidden argument*/NULL);
		__this->set_causticsSplit_18(L_138);
		// causticsSpeed = material.GetFloat("_CausticsSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_139 = __this->get_material_112();
		NullCheck(L_139);
		float L_140;
		L_140 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_139, _stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062, /*hidden argument*/NULL);
		__this->set_causticsSpeed_19(L_140);
		// causticsScale = material.GetFloat("_CausticsScale");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_141 = __this->get_material_112();
		NullCheck(L_141);
		float L_142;
		L_142 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_141, _stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1, /*hidden argument*/NULL);
		__this->set_causticsScale_20(L_142);
		// causticsShadowMask = material.GetFloat("_CausticsShadowMask");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_143 = __this->get_material_112();
		NullCheck(L_143);
		float L_144;
		L_144 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_143, _stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2, /*hidden argument*/NULL);
		__this->set_causticsShadowMask_21(L_144);
		// causticsDepth = material.GetFloat("_CausticsDepth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_145 = __this->get_material_112();
		NullCheck(L_145);
		float L_146;
		L_146 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_145, _stringLiteral9B5E2E5757F5B0BE63E44862CF266CCE9A81C12C, /*hidden argument*/NULL);
		__this->set_causticsDepth_24(L_146);
		// underwaterRefractionStrength = material.GetFloat("_UnderwaterRefractionStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_147 = __this->get_material_112();
		NullCheck(L_147);
		float L_148;
		L_148 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_147, _stringLiteral5F42FFAE2A925A5F5E591BBAC0535D43D925A91B, /*hidden argument*/NULL);
		__this->set_underwaterRefractionStrength_41(L_148);
		// foamShadowStrength = material.GetFloat("_FoamShadowStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_149 = __this->get_material_112();
		NullCheck(L_149);
		float L_150;
		L_150 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_149, _stringLiteral1D1CEBE15C5797209AA3C83FD132C029D3FAE795, /*hidden argument*/NULL);
		__this->set_foamShadowStrength_63(L_150);
		// foamShadowDepth = material.GetFloat("_FoamShadowDepth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_151 = __this->get_material_112();
		NullCheck(L_151);
		float L_152;
		L_152 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_151, _stringLiteral8952A863A79819623CEF1FE142A6BADC18FDA38E, /*hidden argument*/NULL);
		__this->set_foamShadowDepth_64(L_152);
		// surfaceFoamShadowProjection = material.GetFloat("_SurfaceFoamShadowProjection");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_153 = __this->get_material_112();
		NullCheck(L_153);
		float L_154;
		L_154 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_153, _stringLiteralDEA54D4E0E9BB6B83D60BF85D0FE37CAF05A26A3, /*hidden argument*/NULL);
		__this->set_surfaceFoamShadowProjection_65(L_154);
		// intersectionFoamShadowProjection = material.GetFloat("_IntersectionFoamShadowProjection");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_155 = __this->get_material_112();
		NullCheck(L_155);
		float L_156;
		L_156 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_155, _stringLiteralF7B8F322273F1F56538A17A91B9C676502616038, /*hidden argument*/NULL);
		__this->set_intersectionFoamShadowProjection_66(L_156);
		// surfaceFoamHeightMaskSmoothness = material.GetFloat("_SurfaceFoamHeightMaskSmoothness");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_157 = __this->get_material_112();
		NullCheck(L_157);
		float L_158;
		L_158 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_157, _stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F, /*hidden argument*/NULL);
		__this->set_surfaceFoamHeightMaskSmoothness_61(L_158);
		// surfaceFoamHeightMask = material.GetFloat("_SurfaceFoamHeightMask");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_159 = __this->get_material_112();
		NullCheck(L_159);
		float L_160;
		L_160 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_159, _stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829, /*hidden argument*/NULL);
		__this->set_surfaceFoamHeightMask_60(L_160);
		// intersectionFoamBlend = material.GetFloat("_IntersectionFoamBlend");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_161 = __this->get_material_112();
		NullCheck(L_161);
		float L_162;
		L_162 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_161, _stringLiteralC851DCB31C58F247BD272816D02231576FA2D18E, /*hidden argument*/NULL);
		__this->set_intersectionFoamBlend_79(L_162);
		// intersectionWaterBlend = material.GetFloat("_IntersectionWaterBlend");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_163 = __this->get_material_112();
		NullCheck(L_163);
		float L_164;
		L_164 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_163, _stringLiteral8CEFC794E274C44D1A50BFC9D1B153E485F54FAE, /*hidden argument*/NULL);
		__this->set_intersectionWaterBlend_80(L_164);
		// intersectionFoamDepth = material.GetFloat("_IntersectionFoamDepth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_165 = __this->get_material_112();
		NullCheck(L_165);
		float L_166;
		L_166 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_165, _stringLiteral0A58035A03D99DED1301B952DBC00E8FC8741618, /*hidden argument*/NULL);
		__this->set_intersectionFoamDepth_68(L_166);
		// intersectionFoamTexture = material.GetTexture("_IntersectionFoamTexture");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_167 = __this->get_material_112();
		NullCheck(L_167);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_168;
		L_168 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_167, _stringLiteral599631BF813AD51AEFC83394541DF8C491ED8914, /*hidden argument*/NULL);
		__this->set_intersectionFoamTexture_69(L_168);
		// intersectionFoamColor = material.GetColor("_IntersectionFoamColor");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_169 = __this->get_material_112();
		NullCheck(L_169);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_170;
		L_170 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_169, _stringLiteralD1A05B6469D2356B1E7DF6E35DBF6330C3D43146, /*hidden argument*/NULL);
		__this->set_intersectionFoamColor_70(L_170);
		// intersectionFoamMovement = material.GetVector("_IntersectionFoamMovement");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_171 = __this->get_material_112();
		NullCheck(L_171);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_172;
		L_172 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_171, _stringLiteralA0A83BBB4568E6570EC9B686BCC91CC5799FA592, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_173;
		L_173 = Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC(L_172, /*hidden argument*/NULL);
		__this->set_intersectionFoamMovement_71(L_173);
		// intersectionFoamDirection = intersectionFoamMovement.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_174 = __this->get_address_of_intersectionFoamMovement_71();
		float L_175 = L_174->get_x_0();
		__this->set_intersectionFoamDirection_72(L_175);
		// intersectionFoamSpeed = intersectionFoamMovement.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_176 = __this->get_address_of_intersectionFoamMovement_71();
		float L_177 = L_176->get_y_1();
		__this->set_intersectionFoamSpeed_73(L_177);
		// intersectionFoamScale = material.GetFloat("_IntersectionFoamScale");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_178 = __this->get_material_112();
		NullCheck(L_178);
		float L_179;
		L_179 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_178, _stringLiteral76502E125FBDCAF3377A445CD9CBAF7C388DFE9E, /*hidden argument*/NULL);
		__this->set_intersectionFoamScale_74(L_179);
		// intersectionFoamSampling = material.GetVector("_IntersectionFoamSampling");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_180 = __this->get_material_112();
		NullCheck(L_180);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_181;
		L_181 = Material_GetVector_m0E41ED876B69FCFC4B9EA715D0286EE714CD201F(L_180, _stringLiteralC845047E036C62A1F573242E73A59A65DB38BA59, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_182;
		L_182 = Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC(L_181, /*hidden argument*/NULL);
		__this->set_intersectionFoamSampling_75(L_182);
		// intersectionFoamCutoff = intersectionFoamSampling.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_183 = __this->get_address_of_intersectionFoamSampling_75();
		float L_184 = L_183->get_x_0();
		__this->set_intersectionFoamCutoff_76(L_184);
		// intersectionFoamDistortion = intersectionFoamSampling.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_185 = __this->get_address_of_intersectionFoamSampling_75();
		float L_186 = L_185->get_y_1();
		__this->set_intersectionFoamDistortion_77(L_186);
		// enableIntersectionEffects = (material.IsKeywordEnabled("INTERSECTION_EFFECTS_ON")) ? true : false;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_187 = __this->get_material_112();
		NullCheck(L_187);
		bool L_188;
		L_188 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_187, _stringLiteral421123D5FE201AAA768A7B652962605BD2174033, /*hidden argument*/NULL);
		G_B27_0 = __this;
		if (L_188)
		{
			G_B28_0 = __this;
			goto IL_0722;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B27_0;
		goto IL_0723;
	}

IL_0722:
	{
		G_B29_0 = 1;
		G_B29_1 = G_B28_0;
	}

IL_0723:
	{
		NullCheck(G_B29_1);
		G_B29_1->set_enableIntersectionEffects_78((bool)G_B29_0);
		// shoreFoamSpeed = material.GetFloat("_ShoreFoamSpeed");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_189 = __this->get_material_112();
		NullCheck(L_189);
		float L_190;
		L_190 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_189, _stringLiteral79886FA9CF59122D0B1DBE35D4DCF5F983BDA127, /*hidden argument*/NULL);
		__this->set_shoreFoamSpeed_81(L_190);
		// shoreFoamWidth = material.GetFloat("_ShoreFoamWidth");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_191 = __this->get_material_112();
		NullCheck(L_191);
		float L_192;
		L_192 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_191, _stringLiteral64FD1BBE4BB9A29456916871051EB15AA423F35F, /*hidden argument*/NULL);
		__this->set_shoreFoamWidth_82(L_192);
		// shoreFoamFrequency = material.GetFloat("_ShoreFoamFrequency");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_193 = __this->get_material_112();
		NullCheck(L_193);
		float L_194;
		L_194 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_193, _stringLiteralD3481A898F4378325D0E2C2B6CE721959464472E, /*hidden argument*/NULL);
		__this->set_shoreFoamFrequency_83(L_194);
		// shoreFoamBreakupScale = material.GetFloat("_ShoreFoamBreakupScale");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_195 = __this->get_material_112();
		NullCheck(L_195);
		float L_196;
		L_196 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_195, _stringLiteralC583F47E5B425A079958150F0455B594B984249A, /*hidden argument*/NULL);
		__this->set_shoreFoamBreakupScale_85(L_196);
		// shoreFoamBreakupStrength = material.GetFloat("_ShoreFoamBreakupStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_197 = __this->get_material_112();
		NullCheck(L_197);
		float L_198;
		L_198 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_197, _stringLiteral56D35AFF824670621BA8FDD4EF4BCD302E75A870, /*hidden argument*/NULL);
		__this->set_shoreFoamBreakupStrength_84(L_198);
		// if (material.IsKeywordEnabled("WATER_LIGHTING_ON")) lighting = Lighting.Enabled;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_199 = __this->get_material_112();
		NullCheck(L_199);
		bool L_200;
		L_200 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_199, _stringLiteral43B5732603D298425067F69269F47B9B8F6D5763, /*hidden argument*/NULL);
		if (!L_200)
		{
			goto IL_07b1;
		}
	}
	{
		// if (material.IsKeywordEnabled("WATER_LIGHTING_ON")) lighting = Lighting.Enabled;
		__this->set_lighting_86(0);
		goto IL_07b8;
	}

IL_07b1:
	{
		// else lighting = Lighting.Disabled;
		__this->set_lighting_86(1);
	}

IL_07b8:
	{
		// if (material.IsKeywordEnabled("SHORE_MOVEMENT_ON")) foamMovement = FoamMovement.Shore;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_201 = __this->get_material_112();
		NullCheck(L_201);
		bool L_202;
		L_202 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_201, _stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1, /*hidden argument*/NULL);
		if (!L_202)
		{
			goto IL_07d3;
		}
	}
	{
		// if (material.IsKeywordEnabled("SHORE_MOVEMENT_ON")) foamMovement = FoamMovement.Shore;
		__this->set_foamMovement_67(1);
		goto IL_07da;
	}

IL_07d3:
	{
		// else foamMovement = FoamMovement.Directional;
		__this->set_foamMovement_67(0);
	}

IL_07da:
	{
		// lightingSmoothness = material.GetFloat("_LightingSmoothness");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_203 = __this->get_material_112();
		NullCheck(L_203);
		float L_204;
		L_204 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_203, _stringLiteralE3321A3E07AB7760D7942B139137B6F6C4966F61, /*hidden argument*/NULL);
		__this->set_lightingSmoothness_87(L_204);
		// lightingSpecularColor = material.GetColor("_LightingSpecularColor");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_205 = __this->get_material_112();
		NullCheck(L_205);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_206;
		L_206 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_205, _stringLiteralDDA3F3B9E65DA46E11654DC27B3C37BD037640BF, /*hidden argument*/NULL);
		__this->set_lightingSpecularColor_88(L_206);
		// lightingDiffuseColor = material.GetColor("_LightingDiffuseColor");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_207 = __this->get_material_112();
		NullCheck(L_207);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_208;
		L_208 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_207, _stringLiteral314314AAF9B66BEEEFD467D27B1D9F9FCE9847EA, /*hidden argument*/NULL);
		__this->set_lightingDiffuseColor_89(L_208);
		// lightingHardness = material.GetFloat("_LightingHardness");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_209 = __this->get_material_112();
		NullCheck(L_209);
		float L_210;
		L_210 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_209, _stringLiteral1F0AB2F3EEE43CF59599847A13D381166DD9E000, /*hidden argument*/NULL);
		__this->set_lightingHardness_90(L_210);
		// normalsTexture = material.GetTexture("_NormalsTexture");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_211 = __this->get_material_112();
		NullCheck(L_211);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_212;
		L_212 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_211, _stringLiteral67877C115DDC7712D22845AFFF07A1D84D44D248, /*hidden argument*/NULL);
		__this->set_normalsTexture_91(L_212);
		// normalsStrength = material.GetFloat("_NormalsStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_213 = __this->get_material_112();
		NullCheck(L_213);
		float L_214;
		L_214 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_213, _stringLiteralEF604896EC5C3A469F7F7484ACA069166072111C, /*hidden argument*/NULL);
		__this->set_normalsStrength_93(L_214);
		// reflectionStrength = material.GetFloat("_PlanarReflectionStrength");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_215 = __this->get_material_112();
		NullCheck(L_215);
		float L_216;
		L_216 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_215, _stringLiteral15DD3F54D20A90255F364735B76B52BBD05DECE1, /*hidden argument*/NULL);
		__this->set_reflectionStrength_14(L_216);
		// reflectionFresnel = material.GetFloat("_PlanarReflectionFresnel");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_217 = __this->get_material_112();
		NullCheck(L_217);
		float L_218;
		L_218 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_217, _stringLiteral8B66A817222674DBBC174A6CE8DAAB2B9E89ECA8, /*hidden argument*/NULL);
		__this->set_reflectionFresnel_15(L_218);
		// enableFoamShadows = (material.IsKeywordEnabled("FOAM_SHADOWS_ON")) ? true : false;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_219 = __this->get_material_112();
		NullCheck(L_219);
		bool L_220;
		L_220 = Material_IsKeywordEnabled_m21EB58B980BA61215B281A9C18BC861BF6CF126E(L_219, _stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF, /*hidden argument*/NULL);
		G_B36_0 = __this;
		if (L_220)
		{
			G_B37_0 = __this;
			goto IL_08a0;
		}
	}
	{
		G_B38_0 = 0;
		G_B38_1 = G_B36_0;
		goto IL_08a1;
	}

IL_08a0:
	{
		G_B38_0 = 1;
		G_B38_1 = G_B37_0;
	}

IL_08a1:
	{
		NullCheck(G_B38_1);
		G_B38_1->set_enableFoamShadows_108((bool)G_B38_0);
	}

IL_08a6:
	{
		// }
		return;
	}
}
// System.Void StylizedWater.StylizedWaterURP::WriteMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP_WriteMaterialProperties_m8D6E9D068EF4BE16BE0723971BD91300B955E05D (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral041D9147FCC3085B0EC2BDA3C11F3A181998AD8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A58035A03D99DED1301B952DBC00E8FC8741618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DD3F54D20A90255F364735B76B52BBD05DECE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D1CEBE15C5797209AA3C83FD132C029D3FAE795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0AB2F3EEE43CF59599847A13D381166DD9E000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral314314AAF9B66BEEEFD467D27B1D9F9FCE9847EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral403DBED855A029F46C7C6E6F7AE94262F5EE2A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F2B4EDB1966ECF89382516690F31A046BB9068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral421123D5FE201AAA768A7B652962605BD2174033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B5732603D298425067F69269F47B9B8F6D5763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493FC5A67E3AA357259B8025A047D55576652948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D35AFF824670621BA8FDD4EF4BCD302E75A870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral599631BF813AD51AEFC83394541DF8C491ED8914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC36ACD8F1D3C13901B44A0B1F4C86AE56EFCF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F42FFAE2A925A5F5E591BBAC0535D43D925A91B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600C8E8AEDCC3F78FE5416A5E8D6176B333DA6EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64FD1BBE4BB9A29456916871051EB15AA423F35F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6762219BFDE45F809091535BC69D45B777224781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67877C115DDC7712D22845AFFF07A1D84D44D248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F3FBFAC83F9BFC07560D56676CBDB4E6AA9167);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BF7063852E0105D54A62FB8084245ED321886B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7636A23DF21CCABAB0C9C75279FA31671F9EC3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76502E125FBDCAF3377A445CD9CBAF7C388DFE9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7801D88C95FC982F2D7C9A1DC2E325E6E7387B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79886FA9CF59122D0B1DBE35D4DCF5F983BDA127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8473AA138FB4CF2AC86AA6DE9A2F45D170E6FF29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8952A863A79819623CEF1FE142A6BADC18FDA38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8998079511B0C081C91832B55C008102C6773BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B66A817222674DBBC174A6CE8DAAB2B9E89ECA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BE52B0F2BC38AF814E21FAD43C469A4D257049F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CEFC794E274C44D1A50BFC9D1B153E485F54FAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCA9E52357DC1DFFC6C5F25BB099BF666FE8337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral995CE9467B43081AF33F6037C559EF61760235E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5E2E5757F5B0BE63E44862CF266CCE9A81C12C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BD8F962F47C230B8F517A3BDE324BB42E6283DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BFCD84CA1BCE01A10B8D732418255EE7B29AEE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DAC0A1CC978C94BA1C2BBFA83DCBB5B90EAC2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01E7D2DD7693408B1D1677571D3BF55C24FB2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A83BBB4568E6570EC9B686BCC91CC5799FA592);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA66B2B71EBE542C0D46C6CF97E6D64E3DD950406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33F539A9E01915F4EB26ED03378C46E151061CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC583F47E5B425A079958150F0455B594B984249A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62386AC1C3EE21307A94D8026EB3BFC38722050);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC845047E036C62A1F573242E73A59A65DB38BA59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC851DCB31C58F247BD272816D02231576FA2D18E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A05B6469D2356B1E7DF6E35DBF6330C3D43146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3481A898F4378325D0E2C2B6CE721959464472E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA3F3B9E65DA46E11654DC27B3C37BD037640BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEA54D4E0E9BB6B83D60BF85D0FE37CAF05A26A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE20DFD3A35F702F8FD36471E40D2F2EC2C77C799);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3321A3E07AB7760D7942B139137B6F6C4966F61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF604896EC5C3A469F7F7484ACA069166072111C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B8F322273F1F56538A17A91B9C676502616038);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B13_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B14_1 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B16_0 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * G_B17_1 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B19_0 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * G_B20_1 = NULL;
	{
		// if (!material) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_material_112();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!material) return;
		return;
	}

IL_000e:
	{
		// if (material.shader.name != shaderName && material.shader.name != mobileShaderName && material.shader.name != underwaterShaderName) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_material_112();
		NullCheck(L_2);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_4, _stringLiteral78A26EEE91A044BDF04574B37ABDCD06C1FC5558, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_material_112();
		NullCheck(L_6);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_material_112();
		NullCheck(L_10);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_11;
		L_11 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_12, _stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// if (material.shader.name != shaderName && material.shader.name != mobileShaderName && material.shader.name != underwaterShaderName) return;
		return;
	}

IL_0063:
	{
		// if (material && meshRenderer && meshFilter && meshRenderer.sharedMaterial && !Application.isPlaying)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_material_112();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00ed;
		}
	}
	{
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_16 = __this->get_meshRenderer_110();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ed;
		}
	}
	{
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_18 = __this->get_meshFilter_111();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ed;
		}
	}
	{
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_20 = __this->get_meshRenderer_110();
		NullCheck(L_20);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_23;
		L_23 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00ed;
		}
	}
	{
		// meshRenderer.sharedMaterial.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_24 = __this->get_meshRenderer_110();
		NullCheck(L_24);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25;
		L_25 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_24, /*hidden argument*/NULL);
		bool L_26 = __this->get_hideComponents_107();
		G_B12_0 = L_25;
		if (L_26)
		{
			G_B13_0 = L_25;
			goto IL_00b9;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B14_0 = 2;
		G_B14_1 = G_B13_0;
	}

IL_00ba:
	{
		NullCheck(G_B14_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		// meshRenderer.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_27 = __this->get_meshRenderer_110();
		bool L_28 = __this->get_hideComponents_107();
		G_B15_0 = L_27;
		if (L_28)
		{
			G_B16_0 = L_27;
			goto IL_00d0;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B17_0 = 2;
		G_B17_1 = G_B16_0;
	}

IL_00d1:
	{
		NullCheck(G_B17_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B17_1, G_B17_0, /*hidden argument*/NULL);
		// meshFilter.hideFlags = (hideComponents) ? HideFlags.HideInInspector : HideFlags.None;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_29 = __this->get_meshFilter_111();
		bool L_30 = __this->get_hideComponents_107();
		G_B18_0 = L_29;
		if (L_30)
		{
			G_B19_0 = L_29;
			goto IL_00e7;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B20_0 = 2;
		G_B20_1 = G_B19_0;
	}

IL_00e8:
	{
		NullCheck(G_B20_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(G_B20_1, G_B20_0, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// if (useColorGradient) material.EnableKeyword("COLOR_GRADIENT_ON");
		bool L_31 = __this->get_useColorGradient_25();
		if (!L_31)
		{
			goto IL_0107;
		}
	}
	{
		// if (useColorGradient) material.EnableKeyword("COLOR_GRADIENT_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_material_112();
		NullCheck(L_32);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_32, _stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_0107:
	{
		// else material.DisableKeyword("COLOR_GRADIENT_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = __this->get_material_112();
		NullCheck(L_33);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_33, _stringLiteral612069F58A27E4A7FBBB4E6FF8051C7CC1803370, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// material.SetTexture("_WaterColorGradientTexture", colorGradientTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = __this->get_material_112();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = __this->get_colorGradientTexture_27();
		NullCheck(L_34);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_34, _stringLiteral041D9147FCC3085B0EC2BDA3C11F3A181998AD8B, L_35, /*hidden argument*/NULL);
		// material.SetColor("_WaterColorShallow", shallowColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = __this->get_shallowColor_28();
		NullCheck(L_36);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_36, _stringLiteral69F3FBFAC83F9BFC07560D56676CBDB4E6AA9167, L_37, /*hidden argument*/NULL);
		// material.SetColor("_WaterColorHorizon", horizonColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = __this->get_horizonColor_31();
		NullCheck(L_38);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_38, _stringLiteral7801D88C95FC982F2D7C9A1DC2E325E6E7387B50, L_39, /*hidden argument*/NULL);
		// material.SetFloat("_WaterColorDepth", colorDepth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_material_112();
		float L_41 = __this->get_colorDepth_30();
		NullCheck(L_40);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_40, _stringLiteral40F2B4EDB1966ECF89382516690F31A046BB9068, L_41, /*hidden argument*/NULL);
		// material.SetFloat("_WaterColorHorizonDistance", horizonDistance);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_material_112();
		float L_43 = __this->get_horizonDistance_32();
		NullCheck(L_42);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_42, _stringLiteralA66B2B71EBE542C0D46C6CF97E6D64E3DD950406, L_43, /*hidden argument*/NULL);
		// material.SetColor("_WaveColor", waveColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = __this->get_waveColor_38();
		NullCheck(L_44);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_44, _stringLiteral8473AA138FB4CF2AC86AA6DE9A2F45D170E6FF29, L_45, /*hidden argument*/NULL);
		// material.SetColor("_WaterColorDeep", deepColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_46 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47 = __this->get_deepColor_29();
		NullCheck(L_46);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_46, _stringLiteral9DAC0A1CC978C94BA1C2BBFA83DCBB5B90EAC2BC, L_47, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsStrength", causticsStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_material_112();
		float L_49 = __this->get_causticsStrength_16();
		NullCheck(L_48);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_48, _stringLiteralE049547D280CD28AE7F3BF9A4F104A1AFC768544, L_49, /*hidden argument*/NULL);
		// material.SetTexture("_CausticsTexture", causticsTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_50 = __this->get_material_112();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_51 = __this->get_causticsTexture_17();
		NullCheck(L_50);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_50, _stringLiteral349B36B5EEC3CD3BE604A537DC0CE30E94B9FFFB, L_51, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsSplit", causticsSplit);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_52 = __this->get_material_112();
		float L_53 = __this->get_causticsSplit_18();
		NullCheck(L_52);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_52, _stringLiteral9B9DD5D091C24EA88597A7315C7FB5896539D6E2, L_53, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsSpeed", causticsSpeed);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_54 = __this->get_material_112();
		float L_55 = __this->get_causticsSpeed_19();
		NullCheck(L_54);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_54, _stringLiteralAFD110DF6330833A6A95D34A8211ACED668B4062, L_55, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsScale", causticsScale);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56 = __this->get_material_112();
		float L_57 = __this->get_causticsScale_20();
		NullCheck(L_56);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_56, _stringLiteralC336329BDFA56AC353EDACB46B83508BDAFBE2C1, L_57, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsShadowMask", causticsShadowMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58 = __this->get_material_112();
		float L_59 = __this->get_causticsShadowMask_21();
		NullCheck(L_58);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_58, _stringLiteral6B53FEBE1B250E5F9AE9722A782F51F1A363B0E2, L_59, /*hidden argument*/NULL);
		// material.SetFloat("_CausticsDepth", causticsDepth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_60 = __this->get_material_112();
		float L_61 = __this->get_causticsDepth_24();
		NullCheck(L_60);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_60, _stringLiteral9B5E2E5757F5B0BE63E44862CF266CCE9A81C12C, L_61, /*hidden argument*/NULL);
		// underwaterColor.a = underwaterColorStrength;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_62 = __this->get_address_of_underwaterColor_39();
		float L_63 = __this->get_underwaterColorStrength_40();
		L_62->set_a_3(L_63);
		// material.SetColor("_WaterColorUnderwater", underwaterColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65 = __this->get_underwaterColor_39();
		NullCheck(L_64);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_64, _stringLiteral493FC5A67E3AA357259B8025A047D55576652948, L_65, /*hidden argument*/NULL);
		// material.SetFloat("_UnderwaterRefractionStrength", underwaterRefractionStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_66 = __this->get_material_112();
		float L_67 = __this->get_underwaterRefractionStrength_41();
		NullCheck(L_66);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_66, _stringLiteral5F42FFAE2A925A5F5E591BBAC0535D43D925A91B, L_67, /*hidden argument*/NULL);
		// shoreColor.a = shoreStrength;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_68 = __this->get_address_of_shoreColor_34();
		float L_69 = __this->get_shoreStrength_35();
		L_68->set_a_3(L_69);
		// material.SetColor("_ShoreColor", shoreColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_70 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71 = __this->get_shoreColor_34();
		NullCheck(L_70);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_70, _stringLiteralA01E7D2DD7693408B1D1677571D3BF55C24FB2D3, L_71, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreDepth", shoreDepth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_72 = __this->get_material_112();
		float L_73 = __this->get_shoreDepth_37();
		NullCheck(L_72);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_72, _stringLiteral9BFCD84CA1BCE01A10B8D732418255EE7B29AEE6, L_73, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreFade", shoreFade);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74 = __this->get_material_112();
		float L_75 = __this->get_shoreFade_33();
		NullCheck(L_74);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_74, _stringLiteral8FCA9E52357DC1DFFC6C5F25BB099BF666FE8337, L_75, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreBlend", shoreBlend);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76 = __this->get_material_112();
		float L_77 = __this->get_shoreBlend_36();
		NullCheck(L_76);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_76, _stringLiteral7636A23DF21CCABAB0C9C75279FA31671F9EC3A4, L_77, /*hidden argument*/NULL);
		// material.SetFloat("_FoamShadowStrength", foamShadowStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_78 = __this->get_material_112();
		float L_79 = __this->get_foamShadowStrength_63();
		NullCheck(L_78);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_78, _stringLiteral1D1CEBE15C5797209AA3C83FD132C029D3FAE795, L_79, /*hidden argument*/NULL);
		// material.SetFloat("_FoamShadowDepth", foamShadowDepth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80 = __this->get_material_112();
		float L_81 = __this->get_foamShadowDepth_64();
		NullCheck(L_80);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_80, _stringLiteral8952A863A79819623CEF1FE142A6BADC18FDA38E, L_81, /*hidden argument*/NULL);
		// material.SetFloat("_SurfaceFoamShadowProjection", surfaceFoamShadowProjection);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82 = __this->get_material_112();
		float L_83 = __this->get_surfaceFoamShadowProjection_65();
		NullCheck(L_82);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_82, _stringLiteralDEA54D4E0E9BB6B83D60BF85D0FE37CAF05A26A3, L_83, /*hidden argument*/NULL);
		// material.SetFloat("_IntersectionFoamShadowProjection", intersectionFoamShadowProjection);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = __this->get_material_112();
		float L_85 = __this->get_intersectionFoamShadowProjection_66();
		NullCheck(L_84);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_84, _stringLiteralF7B8F322273F1F56538A17A91B9C676502616038, L_85, /*hidden argument*/NULL);
		// material.SetTexture("_SurfaceFoamTexture", surfaceFoamTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_86 = __this->get_material_112();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_87 = __this->get_surfaceFoamTexture_42();
		NullCheck(L_86);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_86, _stringLiteralE20DFD3A35F702F8FD36471E40D2F2EC2C77C799, L_87, /*hidden argument*/NULL);
		// material.SetVector("_SurfaceFoamSampling", new Vector2(surfaceFoamCutoff, surfaceFoamDistortion));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_88 = __this->get_material_112();
		float L_89 = __this->get_surfaceFoamCutoff_44();
		float L_90 = __this->get_surfaceFoamDistortion_45();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_91), L_89, L_90, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_92;
		L_92 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_91, /*hidden argument*/NULL);
		NullCheck(L_88);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_88, _stringLiteral600C8E8AEDCC3F78FE5416A5E8D6176B333DA6EE, L_92, /*hidden argument*/NULL);
		// material.SetFloat("_SurfaceFoamBlend", surfaceFoamBlend);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93 = __this->get_material_112();
		float L_94 = __this->get_surfaceFoamBlend_46();
		NullCheck(L_93);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_93, _stringLiteral5EC36ACD8F1D3C13901B44A0B1F4C86AE56EFCF2, L_94, /*hidden argument*/NULL);
		// material.SetColor("_SurfaceFoamColor1", surfaceFoamColor1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96 = __this->get_surfaceFoamColor1_47();
		NullCheck(L_95);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_95, _stringLiteral9BD8F962F47C230B8F517A3BDE324BB42E6283DA, L_96, /*hidden argument*/NULL);
		// material.SetColor("_SurfaceFoamColor2", surfaceFoamColor2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_97 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98 = __this->get_surfaceFoamColor2_48();
		NullCheck(L_97);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_97, _stringLiteral8BE52B0F2BC38AF814E21FAD43C469A4D257049F, L_98, /*hidden argument*/NULL);
		// material.SetVector("_SurfaceFoamMovement", new Vector4(surfaceFoamDirection1, surfaceFoamSpeed1, surfaceFoamDirection2, surfaceFoamSpeed2));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_99 = __this->get_material_112();
		float L_100 = __this->get_surfaceFoamDirection1_50();
		float L_101 = __this->get_surfaceFoamSpeed1_52();
		float L_102 = __this->get_surfaceFoamDirection2_51();
		float L_103 = __this->get_surfaceFoamSpeed2_53();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_104), L_100, L_101, L_102, L_103, /*hidden argument*/NULL);
		NullCheck(L_99);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_99, _stringLiteral403DBED855A029F46C7C6E6F7AE94262F5EE2A26, L_104, /*hidden argument*/NULL);
		// material.SetVector("_SurfaceFoamTilingAndOffset", new Vector4(surfaceFoamOffsetX, surfaceFoamOffsetY, surfaceFoamScale1, surfaceFoamScale2));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_105 = __this->get_material_112();
		float L_106 = __this->get_surfaceFoamOffsetX_55();
		float L_107 = __this->get_surfaceFoamOffsetY_56();
		float L_108 = __this->get_surfaceFoamScale1_57();
		float L_109 = __this->get_surfaceFoamScale2_58();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_110), L_106, L_107, L_108, L_109, /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_105, _stringLiteral995CE9467B43081AF33F6037C559EF61760235E6, L_110, /*hidden argument*/NULL);
		// if (enableSurfaceFoam) material.EnableKeyword("SURFACE_FOAM_ON");
		bool L_111 = __this->get_enableSurfaceFoam_59();
		if (!L_111)
		{
			goto IL_043b;
		}
	}
	{
		// if (enableSurfaceFoam) material.EnableKeyword("SURFACE_FOAM_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_112 = __this->get_material_112();
		NullCheck(L_112);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_112, _stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0, /*hidden argument*/NULL);
		goto IL_044b;
	}

IL_043b:
	{
		// else material.DisableKeyword("SURFACE_FOAM_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_113 = __this->get_material_112();
		NullCheck(L_113);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_113, _stringLiteralE0C0BE3876F9E6531F270967058A8EC5DEF3A0F0, /*hidden argument*/NULL);
	}

IL_044b:
	{
		// if (enableHeightMask)
		bool L_114 = __this->get_enableHeightMask_62();
		if (!L_114)
		{
			goto IL_0481;
		}
	}
	{
		// material.SetFloat("_SurfaceFoamHeightMask", surfaceFoamHeightMask);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_115 = __this->get_material_112();
		float L_116 = __this->get_surfaceFoamHeightMask_60();
		NullCheck(L_115);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_115, _stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829, L_116, /*hidden argument*/NULL);
		// material.SetFloat("_SurfaceFoamHeightMaskSmoothness", surfaceFoamHeightMaskSmoothness);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_117 = __this->get_material_112();
		float L_118 = __this->get_surfaceFoamHeightMaskSmoothness_61();
		NullCheck(L_117);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_117, _stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F, L_118, /*hidden argument*/NULL);
		// }
		goto IL_04ab;
	}

IL_0481:
	{
		// material.SetFloat("_SurfaceFoamHeightMask", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_119 = __this->get_material_112();
		NullCheck(L_119);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_119, _stringLiteral87BB279BE621A9F40EE9750998F71493F6F51829, (0.0f), /*hidden argument*/NULL);
		// material.SetFloat("_SurfaceFoamHeightMaskSmoothness", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_120 = __this->get_material_112();
		NullCheck(L_120);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_120, _stringLiteral589FDFDBC6AA1290F690A50E18B17CE9AA12DB5F, (0.0f), /*hidden argument*/NULL);
	}

IL_04ab:
	{
		// material.SetFloat("_IntersectionFoamBlend", intersectionFoamBlend);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_121 = __this->get_material_112();
		float L_122 = __this->get_intersectionFoamBlend_79();
		NullCheck(L_121);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_121, _stringLiteralC851DCB31C58F247BD272816D02231576FA2D18E, L_122, /*hidden argument*/NULL);
		// material.SetFloat("_IntersectionWaterBlend", intersectionWaterBlend);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_123 = __this->get_material_112();
		float L_124 = __this->get_intersectionWaterBlend_80();
		NullCheck(L_123);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_123, _stringLiteral8CEFC794E274C44D1A50BFC9D1B153E485F54FAE, L_124, /*hidden argument*/NULL);
		// material.SetFloat("_IntersectionFoamDepth", intersectionFoamDepth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125 = __this->get_material_112();
		float L_126 = __this->get_intersectionFoamDepth_68();
		NullCheck(L_125);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_125, _stringLiteral0A58035A03D99DED1301B952DBC00E8FC8741618, L_126, /*hidden argument*/NULL);
		// material.SetTexture("_IntersectionFoamTexture", intersectionFoamTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_127 = __this->get_material_112();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_128 = __this->get_intersectionFoamTexture_69();
		NullCheck(L_127);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_127, _stringLiteral599631BF813AD51AEFC83394541DF8C491ED8914, L_128, /*hidden argument*/NULL);
		// material.SetColor("_IntersectionFoamColor", intersectionFoamColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_129 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_130 = __this->get_intersectionFoamColor_70();
		NullCheck(L_129);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_129, _stringLiteralD1A05B6469D2356B1E7DF6E35DBF6330C3D43146, L_130, /*hidden argument*/NULL);
		// material.SetFloat("_IntersectionFoamScale", intersectionFoamScale);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_131 = __this->get_material_112();
		float L_132 = __this->get_intersectionFoamScale_74();
		NullCheck(L_131);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_131, _stringLiteral76502E125FBDCAF3377A445CD9CBAF7C388DFE9E, L_132, /*hidden argument*/NULL);
		// material.SetVector("_IntersectionFoamMovement", new Vector2(intersectionFoamDirection, intersectionFoamSpeed));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133 = __this->get_material_112();
		float L_134 = __this->get_intersectionFoamDirection_72();
		float L_135 = __this->get_intersectionFoamSpeed_73();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_136;
		memset((&L_136), 0, sizeof(L_136));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_136), L_134, L_135, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_137;
		L_137 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_136, /*hidden argument*/NULL);
		NullCheck(L_133);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_133, _stringLiteralA0A83BBB4568E6570EC9B686BCC91CC5799FA592, L_137, /*hidden argument*/NULL);
		// material.SetVector("_IntersectionFoamSampling", new Vector2(intersectionFoamCutoff, intersectionFoamDistortion));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_138 = __this->get_material_112();
		float L_139 = __this->get_intersectionFoamCutoff_76();
		float L_140 = __this->get_intersectionFoamDistortion_77();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_141), L_139, L_140, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_142;
		L_142 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_141, /*hidden argument*/NULL);
		NullCheck(L_138);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_138, _stringLiteralC845047E036C62A1F573242E73A59A65DB38BA59, L_142, /*hidden argument*/NULL);
		// if (enableIntersectionEffects) material.EnableKeyword("INTERSECTION_EFFECTS_ON");
		bool L_143 = __this->get_enableIntersectionEffects_78();
		if (!L_143)
		{
			goto IL_0595;
		}
	}
	{
		// if (enableIntersectionEffects) material.EnableKeyword("INTERSECTION_EFFECTS_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_144 = __this->get_material_112();
		NullCheck(L_144);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_144, _stringLiteral421123D5FE201AAA768A7B652962605BD2174033, /*hidden argument*/NULL);
		goto IL_05a5;
	}

IL_0595:
	{
		// else material.DisableKeyword("INTERSECTION_EFFECTS_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_145 = __this->get_material_112();
		NullCheck(L_145);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_145, _stringLiteral421123D5FE201AAA768A7B652962605BD2174033, /*hidden argument*/NULL);
	}

IL_05a5:
	{
		// material.SetFloat("_ShoreFoamSpeed", shoreFoamSpeed);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_146 = __this->get_material_112();
		float L_147 = __this->get_shoreFoamSpeed_81();
		NullCheck(L_146);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_146, _stringLiteral79886FA9CF59122D0B1DBE35D4DCF5F983BDA127, L_147, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreFoamWidth", shoreFoamWidth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_148 = __this->get_material_112();
		float L_149 = __this->get_shoreFoamWidth_82();
		NullCheck(L_148);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_148, _stringLiteral64FD1BBE4BB9A29456916871051EB15AA423F35F, L_149, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreFoamFrequency", shoreFoamFrequency);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_150 = __this->get_material_112();
		float L_151 = __this->get_shoreFoamFrequency_83();
		NullCheck(L_150);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_150, _stringLiteralD3481A898F4378325D0E2C2B6CE721959464472E, L_151, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreFoamBreakupStrength", shoreFoamBreakupStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_152 = __this->get_material_112();
		float L_153 = __this->get_shoreFoamBreakupStrength_84();
		NullCheck(L_152);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_152, _stringLiteral56D35AFF824670621BA8FDD4EF4BCD302E75A870, L_153, /*hidden argument*/NULL);
		// material.SetFloat("_ShoreFoamBreakupScale", shoreFoamBreakupScale);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_154 = __this->get_material_112();
		float L_155 = __this->get_shoreFoamBreakupScale_85();
		NullCheck(L_154);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_154, _stringLiteralC583F47E5B425A079958150F0455B594B984249A, L_155, /*hidden argument*/NULL);
		// material.SetVector("_WaveVisuals", new Vector3(waveSteepness, waveLength, waveSpeed));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_156 = __this->get_material_112();
		float L_157 = __this->get_waveSteepness_98();
		float L_158 = __this->get_waveLength_99();
		float L_159 = __this->get_waveSpeed_100();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160;
		memset((&L_160), 0, sizeof(L_160));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_160), L_157, L_158, L_159, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_161;
		L_161 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_160, /*hidden argument*/NULL);
		NullCheck(L_156);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_156, _stringLiteralC62386AC1C3EE21307A94D8026EB3BFC38722050, L_161, /*hidden argument*/NULL);
		// material.SetVector("_WaveDirections", new Vector4(waveDirection1, waveDirection2, waveDirection3, waveDirection4));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_162 = __this->get_material_112();
		float L_163 = __this->get_waveDirection1_102();
		float L_164 = __this->get_waveDirection2_103();
		float L_165 = __this->get_waveDirection3_104();
		float L_166 = __this->get_waveDirection4_105();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_167;
		memset((&L_167), 0, sizeof(L_167));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_167), L_163, L_164, L_165, L_166, /*hidden argument*/NULL);
		NullCheck(L_162);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_162, _stringLiteralB33F539A9E01915F4EB26ED03378C46E151061CF, L_167, /*hidden argument*/NULL);
		// if (waterUVs == WaterUVs.World) material.EnableKeyword("WORLD_SPACE_UV_ON");
		int32_t L_168 = __this->get_waterUVs_106();
		if ((!(((uint32_t)L_168) == ((uint32_t)1))))
		{
			goto IL_0687;
		}
	}
	{
		// if (waterUVs == WaterUVs.World) material.EnableKeyword("WORLD_SPACE_UV_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_169 = __this->get_material_112();
		NullCheck(L_169);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_169, _stringLiteral8998079511B0C081C91832B55C008102C6773BB5, /*hidden argument*/NULL);
		goto IL_0697;
	}

IL_0687:
	{
		// else material.DisableKeyword("WORLD_SPACE_UV_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_170 = __this->get_material_112();
		NullCheck(L_170);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_170, _stringLiteral8998079511B0C081C91832B55C008102C6773BB5, /*hidden argument*/NULL);
	}

IL_0697:
	{
		// if (lighting == Lighting.Enabled) material.EnableKeyword("WATER_LIGHTING_ON");
		int32_t L_171 = __this->get_lighting_86();
		if (L_171)
		{
			goto IL_06b1;
		}
	}
	{
		// if (lighting == Lighting.Enabled) material.EnableKeyword("WATER_LIGHTING_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_172 = __this->get_material_112();
		NullCheck(L_172);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_172, _stringLiteral43B5732603D298425067F69269F47B9B8F6D5763, /*hidden argument*/NULL);
		goto IL_06c1;
	}

IL_06b1:
	{
		// else material.DisableKeyword("WATER_LIGHTING_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_173 = __this->get_material_112();
		NullCheck(L_173);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_173, _stringLiteral43B5732603D298425067F69269F47B9B8F6D5763, /*hidden argument*/NULL);
	}

IL_06c1:
	{
		// if (foamMovement == FoamMovement.Shore) material.EnableKeyword("SHORE_MOVEMENT_ON");
		int32_t L_174 = __this->get_foamMovement_67();
		if ((!(((uint32_t)L_174) == ((uint32_t)1))))
		{
			goto IL_06dc;
		}
	}
	{
		// if (foamMovement == FoamMovement.Shore) material.EnableKeyword("SHORE_MOVEMENT_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_175 = __this->get_material_112();
		NullCheck(L_175);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_175, _stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1, /*hidden argument*/NULL);
		goto IL_06ec;
	}

IL_06dc:
	{
		// else material.DisableKeyword("SHORE_MOVEMENT_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_176 = __this->get_material_112();
		NullCheck(L_176);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_176, _stringLiteral6D0068BC0CFDF148F760A79AB45C78A7BC8B0FC1, /*hidden argument*/NULL);
	}

IL_06ec:
	{
		// material.SetFloat("_LightingSmoothness", lightingSmoothness);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_177 = __this->get_material_112();
		float L_178 = __this->get_lightingSmoothness_87();
		NullCheck(L_177);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_177, _stringLiteralE3321A3E07AB7760D7942B139137B6F6C4966F61, L_178, /*hidden argument*/NULL);
		// material.SetColor("_LightingSpecularColor", lightingSpecularColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_179 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_180 = __this->get_lightingSpecularColor_88();
		NullCheck(L_179);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_179, _stringLiteralDDA3F3B9E65DA46E11654DC27B3C37BD037640BF, L_180, /*hidden argument*/NULL);
		// material.SetColor("_LightingDiffuseColor", lightingDiffuseColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_181 = __this->get_material_112();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_182 = __this->get_lightingDiffuseColor_89();
		NullCheck(L_181);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_181, _stringLiteral314314AAF9B66BEEEFD467D27B1D9F9FCE9847EA, L_182, /*hidden argument*/NULL);
		// material.SetFloat("_LightingHardness", lightingHardness);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_183 = __this->get_material_112();
		float L_184 = __this->get_lightingHardness_90();
		NullCheck(L_183);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_183, _stringLiteral1F0AB2F3EEE43CF59599847A13D381166DD9E000, L_184, /*hidden argument*/NULL);
		// material.SetTexture("_NormalsTexture", normalsTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_185 = __this->get_material_112();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_186 = __this->get_normalsTexture_91();
		NullCheck(L_185);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_185, _stringLiteral67877C115DDC7712D22845AFFF07A1D84D44D248, L_186, /*hidden argument*/NULL);
		// material.SetVector("_NormalsMovement", new Vector2(normalsSpeed, normalsScale));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_187 = __this->get_material_112();
		float L_188 = __this->get_normalsSpeed_95();
		float L_189 = __this->get_normalsScale_94();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_190;
		memset((&L_190), 0, sizeof(L_190));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_190), L_188, L_189, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_191;
		L_191 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_190, /*hidden argument*/NULL);
		NullCheck(L_187);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_187, _stringLiteral6762219BFDE45F809091535BC69D45B777224781, L_191, /*hidden argument*/NULL);
		// material.SetFloat("_NormalsStrength", normalsStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_192 = __this->get_material_112();
		float L_193 = __this->get_normalsStrength_93();
		NullCheck(L_192);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_192, _stringLiteralEF604896EC5C3A469F7F7484ACA069166072111C, L_193, /*hidden argument*/NULL);
		// material.SetFloat("_PlanarReflectionStrength", reflectionStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_194 = __this->get_material_112();
		float L_195 = __this->get_reflectionStrength_14();
		NullCheck(L_194);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_194, _stringLiteral15DD3F54D20A90255F364735B76B52BBD05DECE1, L_195, /*hidden argument*/NULL);
		// material.SetFloat("_PlanarReflectionFresnel", reflectionFresnel);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_196 = __this->get_material_112();
		float L_197 = __this->get_reflectionFresnel_15();
		NullCheck(L_196);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_196, _stringLiteral8B66A817222674DBBC174A6CE8DAAB2B9E89ECA8, L_197, /*hidden argument*/NULL);
		// material.SetFloat("_RefractionStrength", refractionStrength);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_198 = __this->get_material_112();
		float L_199 = __this->get_refractionStrength_96();
		NullCheck(L_198);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_198, _stringLiteral6BF7063852E0105D54A62FB8084245ED321886B1, L_199, /*hidden argument*/NULL);
		// if (material.shader.name == mobileShaderName || material.shader.name == underwaterShaderName)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_200 = __this->get_material_112();
		NullCheck(L_200);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_201;
		L_201 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_200, /*hidden argument*/NULL);
		NullCheck(L_201);
		String_t* L_202;
		L_202 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_201, /*hidden argument*/NULL);
		bool L_203;
		L_203 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_202, _stringLiteral4DCC08FDE059C2488948D1259B79CF2E4A2B9390, /*hidden argument*/NULL);
		if (L_203)
		{
			goto IL_0810;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_204 = __this->get_material_112();
		NullCheck(L_204);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_205;
		L_205 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_204, /*hidden argument*/NULL);
		NullCheck(L_205);
		String_t* L_206;
		L_206 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_205, /*hidden argument*/NULL);
		bool L_207;
		L_207 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_206, _stringLiteralCF5FA8E841306E78F43C1BD50932F02B4400CEEC, /*hidden argument*/NULL);
		if (!L_207)
		{
			goto IL_083a;
		}
	}

IL_0810:
	{
		// if (enableRefraction) material.EnableKeyword("REFRACTION_ON");
		bool L_208 = __this->get_enableRefraction_109();
		if (!L_208)
		{
			goto IL_082a;
		}
	}
	{
		// if (enableRefraction) material.EnableKeyword("REFRACTION_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_209 = __this->get_material_112();
		NullCheck(L_209);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_209, _stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0, /*hidden argument*/NULL);
		goto IL_083a;
	}

IL_082a:
	{
		// else material.DisableKeyword("REFRACTION_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_210 = __this->get_material_112();
		NullCheck(L_210);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_210, _stringLiteralBFDDD78522DC45E7C63271812F1585757B2CB6D0, /*hidden argument*/NULL);
	}

IL_083a:
	{
		// if (enableFoamShadows) material.EnableKeyword("FOAM_SHADOWS_ON");
		bool L_211 = __this->get_enableFoamShadows_108();
		if (!L_211)
		{
			goto IL_0853;
		}
	}
	{
		// if (enableFoamShadows) material.EnableKeyword("FOAM_SHADOWS_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_212 = __this->get_material_112();
		NullCheck(L_212);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_212, _stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF, /*hidden argument*/NULL);
		return;
	}

IL_0853:
	{
		// else material.DisableKeyword("FOAM_SHADOWS_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_213 = __this->get_material_112();
		NullCheck(L_213);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_213, _stringLiteralEDC7E0EB239A79D22C73CBD656B39F0C99419DEF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single StylizedWater.StylizedWaterURP::GetWaveSteepness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StylizedWaterURP_GetWaveSteepness_mCFC817941DAA4005CF64C1574AA2327CCEAD0AF2 (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// public float GetWaveSteepness() => waveSteepness;
		float L_0 = __this->get_waveSteepness_98();
		return L_0;
	}
}
// System.Single StylizedWater.StylizedWaterURP::GetWaveLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StylizedWaterURP_GetWaveLength_m00686D5709FA40CA1A874255678367BB7A552DF0 (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// public float GetWaveLength() => waveLength;
		float L_0 = __this->get_waveLength_99();
		return L_0;
	}
}
// System.Single StylizedWater.StylizedWaterURP::GetWaveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StylizedWaterURP_GetWaveSpeed_mCEEBEBDC5622CC7C5242ACD6CB84FAA1AC462630 (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// public float GetWaveSpeed() => waveSpeed;
		float L_0 = __this->get_waveSpeed_100();
		return L_0;
	}
}
// System.Single[] StylizedWater.StylizedWaterURP::GetWaveDirections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* StylizedWaterURP_GetWaveDirections_mBB088E99380B72521659499EC2735CC7BFCA290C (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] GetWaveDirections() => new float[] { waveDirection1, waveDirection2, waveDirection3, waveDirection4 };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		float L_2 = __this->get_waveDirection1_102();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = L_1;
		float L_4 = __this->get_waveDirection2_103();
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = L_3;
		float L_6 = __this->get_waveDirection3_104();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = L_5;
		float L_8 = __this->get_waveDirection4_105();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_8);
		return L_7;
	}
}
// System.Void StylizedWater.StylizedWaterURP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylizedWaterURP__ctor_m470D52DB908265FB0A66F6AD2E832A65BE61AA43 (StylizedWaterURP_t5A5860A6F99993D9E06A6C1EDBB75834F4C6E098 * __this, const RuntimeMethod* method)
{
	{
		// [Range(0f, 7f)] public float reflectionFresnel = 1f;
		__this->set_reflectionFresnel_15((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StylizedWater.CausticsFeature/CausticsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CausticsSettings__ctor_mFE75102B0E00B3C04EFF78469633F5B011516BC5 (CausticsSettings_t261C5D7E191A1CA1FA63C18EB2B67797735B47EC * __this, const RuntimeMethod* method)
{
	{
		// [Range(0f, 3f)] public float strength = 3f;
		__this->set_strength_0((3.0f));
		// [Range(0f, 1f)] public float rgbSplit = 0.3f;
		__this->set_rgbSplit_1((0.300000012f));
		// [Range(0f, 1f)] public float shadowMask = 1f;
		__this->set_shadowMask_2((1.0f));
		// [Range(0.1f, 10f)] public float scale = 5f;
		__this->set_scale_4((5.0f));
		// [Range(0f, 0.3f)] public float speed = 0.125f;
		__this->set_speed_5((0.125f));
		// public Vector2 depth = new Vector2(0f, 4f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (4.0f), /*hidden argument*/NULL);
		__this->set_depth_7(L_0);
		// [Range(0f, 1f)] public float fade = 1f;
		__this->set_fade_8((1.0f));
		// public RenderPassEvent renderPassEvent = RenderPassEvent.AfterRenderingSkybox;
		__this->set_renderPassEvent_9(((int32_t)400));
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
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData__ctor_m66E05F1A0228C7DC7374F4D80E873222D62E0250 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method)
{
	{
		// public PlanarReflectionSettingData()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// fog = RenderSettings.fog;
		bool L_0;
		L_0 = RenderSettings_get_fog_mAB01FC3FE552B153EB0D5AB467B29A896719B90F(/*hidden argument*/NULL);
		__this->set_fog_0(L_0);
		// maximumLODLevel = QualitySettings.maximumLODLevel;
		int32_t L_1;
		L_1 = QualitySettings_get_maximumLODLevel_m6740882BCC4512F85CD41DF4C55351B475CD2D86(/*hidden argument*/NULL);
		__this->set_maximumLODLevel_1(L_1);
		// lodBias = QualitySettings.lodBias;
		float L_2;
		L_2 = QualitySettings_get_lodBias_m024776C3A1AD1A51EA990C587B03EE4F9F4D8F0A(/*hidden argument*/NULL);
		__this->set_lodBias_2(L_2);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData_Set_m281A6C546DB5FE5E879329632CD8C9A829583768 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method)
{
	{
		// GL.invertCulling = true;
		GL_set_invertCulling_mECEDF71D7F35A9F99931F6975D415C9C6A8B8FF9((bool)1, /*hidden argument*/NULL);
		// RenderSettings.fog = false;
		RenderSettings_set_fog_mD367E22D3EF66CA9FAAD7AF7712E891B2F569275((bool)0, /*hidden argument*/NULL);
		// QualitySettings.maximumLODLevel = 1;
		QualitySettings_set_maximumLODLevel_m37B3C58789BDB707F9B3417047AA389286CDE91B(1, /*hidden argument*/NULL);
		// QualitySettings.lodBias = lodBias * 0.5f;
		float L_0 = __this->get_lodBias_2();
		QualitySettings_set_lodBias_m15232C74C8BD590224D5435895FBF44213A42F7A(((float)il2cpp_codegen_multiply((float)L_0, (float)(0.5f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StylizedWater.PlanarReflections/PlanarReflectionSettingData::Restore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionSettingData_Restore_m737368AE38267E2DD6839ED155B20F620FBE2A44 (PlanarReflectionSettingData_tD611BDECE28F48904FC6F5C4497C05EC3C141301 * __this, const RuntimeMethod* method)
{
	{
		// GL.invertCulling = false;
		GL_set_invertCulling_mECEDF71D7F35A9F99931F6975D415C9C6A8B8FF9((bool)0, /*hidden argument*/NULL);
		// RenderSettings.fog = fog;
		bool L_0 = __this->get_fog_0();
		RenderSettings_set_fog_mD367E22D3EF66CA9FAAD7AF7712E891B2F569275(L_0, /*hidden argument*/NULL);
		// QualitySettings.maximumLODLevel = maximumLODLevel;
		int32_t L_1 = __this->get_maximumLODLevel_1();
		QualitySettings_set_maximumLODLevel_m37B3C58789BDB707F9B3417047AA389286CDE91B(L_1, /*hidden argument*/NULL);
		// QualitySettings.lodBias = lodBias;
		float L_2 = __this->get_lodBias_2();
		QualitySettings_set_lodBias_m15232C74C8BD590224D5435895FBF44213A42F7A(L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m6D7E1AC4B01D1E7A399ECD6F0D5160DAB114AAA7_inline (ScriptableRenderPass_tECF4F5733CC963965975FA650011A3D20FB62DCA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RenderPassEvent renderPassEvent { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrenderPassEventU3Ek__BackingField_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_mF3DA01F9E7788C1BB9BA5EC0CE4A7829DC1B8B14_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RenderShadows = value;
		bool L_0 = ___value0;
		__this->set_m_RenderShadows_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorOption_mC20219C23DCE430195AF37B30CC7076E0A635EAA_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RequiresOpaqueTextureOption = value;
		int32_t L_0 = ___value0;
		__this->set_m_RequiresOpaqueTextureOption_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthOption_m5B5EA1E2F1E4B11CFCA732A686FB65D1B5DAF7E7_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RequiresDepthTextureOption = value;
		int32_t L_0 = ___value0;
		__this->set_m_RequiresDepthTextureOption_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m08B56097CDE7AF80C1DCB8C8824112F44E0F0345_inline (UniversalAdditionalCameraData_t2F571B5E91C1601A48B36D5A4C5BFD7A3C716A3E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_RendererIndex = index;
		int32_t L_0 = ___index0;
		__this->set_m_RendererIndex_9(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniversalRenderPipelineAsset_get_renderScale_m085A3D5E3EB44F9BA241D7A1FE559A41EC432228_inline (UniversalRenderPipelineAsset_t1B75748F2AF869A13CD8B43192E9FCC728422C67 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RenderScale; }
		float L_0 = __this->get_m_RenderScale_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}

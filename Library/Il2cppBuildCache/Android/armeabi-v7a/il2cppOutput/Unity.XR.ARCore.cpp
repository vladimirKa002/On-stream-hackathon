﻿#include "pch-cpp.hpp"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5;
// System.Action`2<System.String,System.Boolean>
struct Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4;
// System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>
struct Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F;
// System.Func`1<System.Guid>
struct Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC;
// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>
struct HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.TextureFormat>
struct IEqualityComparer_1_t89F4520AF667B3E35E982EDC56414B71FDF77650;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.TextureFormat>[]
struct SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.XR.ARCore.ARCoreAnchorSubsystem
struct ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C;
// UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem
struct ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6;
// UnityEngine.XR.ARCore.ARCoreFaceSubsystem
struct ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2;
// UnityEngine.XR.ARCore.ARCoreImageDatabase
struct ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF;
// UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem
struct ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4;
// UnityEngine.XR.ARCore.ARCorePermissionManager
struct ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15;
// UnityEngine.XR.ARCore.ARCorePlaneSubsystem
struct ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03;
// UnityEngine.XR.ARCore.ARCoreRaycastSubsystem
struct ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375;
// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem
struct ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor
struct XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor
struct XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider
struct ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi
struct ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider
struct ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82;
// UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider
struct ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9;
// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider
struct ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE;
// UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider
struct ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA;
// UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider
struct ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F;
// UnityEngine.XR.ARCore.ARCoreRaycastSubsystem/ARCoreProvider
struct ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider
struct ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8;
// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider
struct ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c
struct U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate
struct CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate
struct CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9;

IL2CPP_EXTERN_C RuntimeClass* ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreFaceRegion_t1C15D961C65A62B99563CCF843093D53AC251412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A____B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11AD68235F83B2C17176B92A763AB9E0AC7A4485;
IL2CPP_EXTERN_C String_t* _stringLiteral163E615278B2AE83873F54F03D93170DAB900F53;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA5F011288BCBF98331BBD2D5505E1A91FD9790;
IL2CPP_EXTERN_C String_t* _stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207;
IL2CPP_EXTERN_C String_t* _stringLiteral3977B939E8BCFB0D217C679AE468DB146FEDDD1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1453CB157FF877C229EFEF4709423EB438C65F;
IL2CPP_EXTERN_C String_t* _stringLiteral42589FFCB0974F0DA239E2195FCB00CE99F45E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral47AD780500460EAC1898BA626940B0B65498BB62;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral595AD8A43ABE055987C7BE7C40246130A95D1C44;
IL2CPP_EXTERN_C String_t* _stringLiteral59F19161922870BC28A63022E58D5272106BC3F8;
IL2CPP_EXTERN_C String_t* _stringLiteral622EF3A2E5F5DB825F46D8CC0DAFFECAFCBF9140;
IL2CPP_EXTERN_C String_t* _stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860;
IL2CPP_EXTERN_C String_t* _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral8B99D5379F08846DA8E21293FFD2DC7A075C0FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D00B6854834FA62E7BBABFCF8AE7F12746BA09F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA005B42B75339BDF5A5EB4A9799C3BDD1C7B8185;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EABB848917088B77EB2237DA4C1CFA54C04DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralDC61B14207D18A29FD8F58987D3BA6770027F5CF;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralF799BF5DE9382ACB0037296B44D042FDFD3ACFE8;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreProvider_set_imageLibrary_m4C579D635602FEFFB7B02326D124CDA349571384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARCoreSessionSubsystem_ConfigurationChangedFromProvider_m0284DB23317FED506C478A5AECBCB1CCD43EF8D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m5BB7D65B541861587E009033DCEB2D9846A6C5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CCameraPermissionRequestProviderU3Eb__0_m5D4FD5ECD97417B45C84DFF8001CD44552D6C462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t89E7F1E7A3D38ECAB8D44A84314511E7080BB024 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>
struct  HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____slots_8)); }
	inline SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t31D39DA9F0325BB5955FD10F99B52248A5A3EF86* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.XR.ARCore.Api
struct  Api_tA5A93D3FA25743B4E8BE983E462FD978A8DE4A15  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARCore.NativeApi
struct  NativeApi_tE4B2ED837CB1FD6FA80D5FC13E357C29AEA18D35  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct  RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B  : public RuntimeObject
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


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct  SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct  SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi
struct  NativeApi_t34D60EEE680CF2B2AD52E8D86FE7FC57B6764D03  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi
struct  NativeApi_t4AA86E98F8F834FE1B5CF51EE1C9753B8AB35154  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct  Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c
struct  U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_StaticFields
{
public:
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c::<>9
	U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct  SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct  SubsystemProvider_1_t3B6396AEE76B5D8268802608E3593AA3D48DB307  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct  SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem>
struct  SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct  SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct  SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct  SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct  SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct  SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CproviderU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct  SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct  SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRDepthSubsystemDescriptor_t745DBB7D313FB52F756E0B7AA993FBBC26B412C2 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider>
struct  SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XREnvironmentProbeSubsystemDescriptor_t7C10519F545418330347AC7434FBB10F39DD4243 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct  SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct  SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRImageTrackingSubsystemDescriptor_t3EC191739B144A8AA00CEEE03E8F7FF01D7F833B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct  SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct  SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
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

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
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


// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct  MutableRuntimeReferenceImageLibrary_t887376CE46B48DEEC6E8655D429BADCA6E3C7EAA  : public RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct  XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_11;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraGrain>k__BackingField
	bool ___U3CsupportsCameraGrainU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageBrightnessU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_4() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_4() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_4; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsColorCorrectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_6() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_6() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsDisplayMatrixU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_7() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_7() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_7; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsProjectionMatrixU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_8() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_8() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_8; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsTimestampU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_9() const { return ___U3CsupportsTimestampU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_9() { return &___U3CsupportsTimestampU3Ek__BackingField_9; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_10() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_10; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_10(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraImageU3Ek__BackingField_11)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_11() const { return ___U3CsupportsCameraImageU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_11() { return &___U3CsupportsCameraImageU3Ek__BackingField_11; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_11(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12)); }
	inline bool get_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() const { return ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12() { return &___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12; }
	inline void set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12(bool value)
	{
		___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13)); }
	inline bool get_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() const { return ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13() { return &___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13; }
	inline void set_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13(bool value)
	{
		___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14)); }
	inline bool get_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() const { return ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14() { return &___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14; }
	inline void set_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14(bool value)
	{
		___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15)); }
	inline bool get_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() const { return ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15() { return &___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15; }
	inline void set_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15(bool value)
	{
		___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16)); }
	inline bool get_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() const { return ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16() { return &___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16; }
	inline void set_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16(bool value)
	{
		___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsFocusModesU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsFocusModesU3Ek__BackingField_17)); }
	inline bool get_U3CsupportsFocusModesU3Ek__BackingField_17() const { return ___U3CsupportsFocusModesU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CsupportsFocusModesU3Ek__BackingField_17() { return &___U3CsupportsFocusModesU3Ek__BackingField_17; }
	inline void set_U3CsupportsFocusModesU3Ek__BackingField_17(bool value)
	{
		___U3CsupportsFocusModesU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraGrainU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096, ___U3CsupportsCameraGrainU3Ek__BackingField_18)); }
	inline bool get_U3CsupportsCameraGrainU3Ek__BackingField_18() const { return ___U3CsupportsCameraGrainU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CsupportsCameraGrainU3Ek__BackingField_18() { return &___U3CsupportsCameraGrainU3Ek__BackingField_18; }
	inline void set_U3CsupportsCameraGrainU3Ek__BackingField_18(bool value)
	{
		___U3CsupportsCameraGrainU3Ek__BackingField_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct  XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTextureHDR>k__BackingField
	bool ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CimplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_3() const { return ___U3CimplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_3() { return &___U3CimplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsManualPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_4() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_4() { return &___U3CsupportsManualPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfManualU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_6() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_6; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_8() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_8; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2, ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() const { return ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9() { return &___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9; }
	inline void set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_5;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_6;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_8;
	int32_t ___U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650 
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
		uint8_t __StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650__padding[28];
	};

public:
};


// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi
struct  ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E  : public Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E
{
public:

public:
};

struct ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat> UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi::s_SupportedVideoConversionFormats
	HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * ___s_SupportedVideoConversionFormats_0;

public:
	inline static int32_t get_offset_of_s_SupportedVideoConversionFormats_0() { return static_cast<int32_t>(offsetof(ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_StaticFields, ___s_SupportedVideoConversionFormats_0)); }
	inline HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * get_s_SupportedVideoConversionFormats_0() const { return ___s_SupportedVideoConversionFormats_0; }
	inline HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 ** get_address_of_s_SupportedVideoConversionFormats_0() { return &___s_SupportedVideoConversionFormats_0; }
	inline void set_s_SupportedVideoConversionFormats_0(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * value)
	{
		___s_SupportedVideoConversionFormats_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedVideoConversionFormats_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct  Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct  Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMovingImagesU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_4() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_4() { return &___U3CsupportsMovingImagesU3Ek__BackingField_4; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5)); }
	inline bool get_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() const { return ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5() { return &___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5; }
	inline void set_U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5(bool value)
	{
		___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32, ___U3CsupportsMutableLibraryU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsMutableLibraryU3Ek__BackingField_6() const { return ___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsMutableLibraryU3Ek__BackingField_6() { return &___U3CsupportsMutableLibraryU3Ek__BackingField_6; }
	inline void set_U3CsupportsMutableLibraryU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsMutableLibraryU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_4;
	int32_t ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_5;
	int32_t ___U3CsupportsMutableLibraryU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct  Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_8() const { return ___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_8() { return &___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct  Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CproviderTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_3() const { return ___U3CproviderTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_3() { return &___U3CproviderTypeU3Ek__BackingField_3; }
	inline void set_U3CproviderTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemTypeOverrideU3Ek__BackingField_4)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_4() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_5() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct  TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94  : public SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct  TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider>
struct  TrackingSubsystem_4_t3D5C3B3749ABE82CC258AD552288C51FAE67DA1A  : public SubsystemWithProvider_3_t8B33A21A2B183DB3F429FD3F0A899D7ED1BB4DEA
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct  TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333  : public SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct  TrackingSubsystem_4_t52B43FDBB6E641E351193D790222EA1C68B2984E  : public SubsystemWithProvider_3_tD436D6BE4AA164ED727D09EFDE50FF8DCAA50D98
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct  TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077  : public SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct  TrackingSubsystem_4_tCE5EA1B7325877FD88C7CF41F681F25B1FC1717A  : public SubsystemWithProvider_3_t249D82EF0730E7FF15F2B19C4BB45B2E08CF620B
{
public:

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4
	__StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650  ___B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0;

public:
	inline static int32_t get_offset_of_B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A_StaticFields, ___B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0)); }
	inline __StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650  get_B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0() const { return ___B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0; }
	inline __StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650 * get_address_of_B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0() { return &___B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0; }
	inline void set_B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0(__StaticArrayInitTypeSizeU3D28_tCF9B11D033C9EA81B570C34E6EE9885962587650  value)
	{
		___B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs
struct  ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 
{
public:
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::m_Session
	intptr_t ___m_Session_0;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::m_Config
	intptr_t ___m_Config_1;

public:
	inline static int32_t get_offset_of_m_Session_0() { return static_cast<int32_t>(offsetof(ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064, ___m_Session_0)); }
	inline intptr_t get_m_Session_0() const { return ___m_Session_0; }
	inline intptr_t* get_address_of_m_Session_0() { return &___m_Session_0; }
	inline void set_m_Session_0(intptr_t value)
	{
		___m_Session_0 = value;
	}

	inline static int32_t get_offset_of_m_Config_1() { return static_cast<int32_t>(offsetof(ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064, ___m_Config_1)); }
	inline intptr_t get_m_Config_1() const { return ___m_Config_1; }
	inline intptr_t* get_address_of_m_Config_1() { return &___m_Config_1; }
	inline void set_m_Config_1(intptr_t value)
	{
		___m_Config_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreFaceRegion
struct  ARCoreFaceRegion_t1C15D961C65A62B99563CCF843093D53AC251412 
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreFaceRegion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoreFaceRegion_t1C15D961C65A62B99563CCF843093D53AC251412, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreImageDatabase
struct  ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF  : public MutableRuntimeReferenceImageLibrary_t887376CE46B48DEEC6E8655D429BADCA6E3C7EAA
{
public:
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreImageDatabase::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_StaticFields
{
public:
	// UnityEngine.TextureFormat[] UnityEngine.XR.ARCore.ARCoreImageDatabase::k_SupportedFormats
	TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* ___k_SupportedFormats_1;

public:
	inline static int32_t get_offset_of_k_SupportedFormats_1() { return static_cast<int32_t>(offsetof(ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_StaticFields, ___k_SupportedFormats_1)); }
	inline TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* get_k_SupportedFormats_1() const { return ___k_SupportedFormats_1; }
	inline TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE** get_address_of_k_SupportedFormats_1() { return &___k_SupportedFormats_1; }
	inline void set_k_SupportedFormats_1(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* value)
	{
		___k_SupportedFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SupportedFormats_1), (void*)value);
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


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
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


// UnityEngine.ColorSpace
struct  ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.XR.ARSubsystems.FaceSubsystemCapabilities
struct  FaceSubsystemCapabilities_t84A18B266F89BCEE6ADA3FB05E21935877632057 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.FaceSubsystemCapabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FaceSubsystemCapabilities_t84A18B266F89BCEE6ADA3FB05E21935877632057, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ManagedReferenceImage
struct  ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 
{
public:
	// System.Guid UnityEngine.XR.ARCore.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARCore.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARCore.ManagedReferenceImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_2;
	// System.IntPtr UnityEngine.XR.ARCore.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARCore.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10, ___size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_2() const { return ___size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
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

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
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


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9  : public SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_5;

public:
	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_4)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_4() const { return ___m_DefaultConfigurationChooser_4; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_4() { return &___m_DefaultConfigurationChooser_4; }
	inline void set_m_DefaultConfigurationChooser_4(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_5() const { return ___m_ConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_5() { return &___m_ConfigurationChooser_5; }
	inline void set_m_ConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_5), (void*)value);
	}
};


// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/CameraConfigurationResult
struct  CameraConfigurationResult_tF878D697E78FF865A75901729808CDCAEA3BCE63 
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreCameraSubsystem/CameraConfigurationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigurationResult_tF878D697E78FF865A75901729808CDCAEA3BCE63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCorePose
struct  ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCorePose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_0;
	// UnityEngine.Vector3 UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCorePose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;

public:
	inline static int32_t get_offset_of_rotation_0() { return static_cast<int32_t>(offsetof(ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49, ___rotation_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_0() const { return ___rotation_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_0() { return &___rotation_0; }
	inline void set_rotation_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct  Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1  : public SubsystemProvider_1_t3B6396AEE76B5D8268802608E3593AA3D48DB307
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider
struct  Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6  : public SubsystemProvider_1_tBB539901FE99992CAA10A1EFDFA610E048498E98
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities
struct  Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t6199DDFE580DA802DBAEC0155BA1C345525286CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider
struct  Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190  : public SubsystemProvider_1_tC3DB99A11F9F3210CE2ABA9FE09C127C5B13FF80
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct  Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7  : public SubsystemProvider_1_t23EADEE126E953AEBF796C02B50539998EA56B78
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::m_RequestedMaximumFaceCount
	int32_t ___m_RequestedMaximumFaceCount_1;

public:
	inline static int32_t get_offset_of_m_RequestedMaximumFaceCount_1() { return static_cast<int32_t>(offsetof(Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7, ___m_RequestedMaximumFaceCount_1)); }
	inline int32_t get_m_RequestedMaximumFaceCount_1() const { return ___m_RequestedMaximumFaceCount_1; }
	inline int32_t* get_address_of_m_RequestedMaximumFaceCount_1() { return &___m_RequestedMaximumFaceCount_1; }
	inline void set_m_RequestedMaximumFaceCount_1(int32_t value)
	{
		___m_RequestedMaximumFaceCount_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct  Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E  : public SubsystemProvider_1_t3086BC462E1384FBB8137E64FA6C513FC002E440
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0
struct  U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5  : public RuntimeObject
{
public:
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0::callback
	CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___callback_0;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0::context
	intptr_t ___context_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5, ___callback_0)); }
	inline CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * get_callback_0() const { return ___callback_0; }
	inline CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5, ___context_1)); }
	inline intptr_t get_context_1() const { return ___context_1; }
	inline intptr_t* get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(intptr_t value)
	{
		___context_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/ArAvailability
struct  ArAvailability_tE538B006129766E37E893353B71F627B8040A880 
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/ArAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArAvailability_tE538B006129766E37E893353B71F627B8040A880, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/ArPrestoApkInstallStatus
struct  ArPrestoApkInstallStatus_t51D537681702853840D138A766B1D6BA7674062C 
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/ArPrestoApkInstallStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArPrestoApkInstallStatus_t51D537681702853840D138A766B1D6BA7674062C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/RenderEvent
struct  RenderEvent_tC73E5F61FDAF3ED67A1BF27AC3400E13BD8202D8 
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/RenderEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderEvent_tC73E5F61FDAF3ED67A1BF27AC3400E13BD8202D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/Triangle`1<System.Int32>>
struct  NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/Triangle`1<System.UInt16>>
struct  NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>
struct  NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct  NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct  NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/FaceRegionWithARCorePose>
struct  NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct  ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C  : public XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreFaceRegionData
struct  ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 
{
public:
	// UnityEngine.XR.ARCore.ARCoreFaceRegion UnityEngine.XR.ARCore.ARCoreFaceRegionData::m_Region
	int32_t ___m_Region_0;
	// UnityEngine.Pose UnityEngine.XR.ARCore.ARCoreFaceRegionData::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;

public:
	inline static int32_t get_offset_of_m_Region_0() { return static_cast<int32_t>(offsetof(ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6, ___m_Region_0)); }
	inline int32_t get_m_Region_0() const { return ___m_Region_0; }
	inline int32_t* get_address_of_m_Region_0() { return &___m_Region_0; }
	inline void set_m_Region_0(int32_t value)
	{
		___m_Region_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCorePermissionManager
struct  ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:

public:
};

struct ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields
{
public:
	// UnityEngine.XR.ARCore.ARCorePermissionManager UnityEngine.XR.ARCore.ARCorePermissionManager::s_Instance
	ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * ___s_Instance_4;
	// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::s_Activity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_Activity_5;
	// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::s_PermissionService
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_PermissionService_6;
	// System.Action`2<System.String,System.Boolean> UnityEngine.XR.ARCore.ARCorePermissionManager::s_CurrentCallback
	Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * ___s_CurrentCallback_7;
	// System.String UnityEngine.XR.ARCore.ARCorePermissionManager::k_AndroidPermissionsClass
	String_t* ___k_AndroidPermissionsClass_8;
	// System.String UnityEngine.XR.ARCore.ARCorePermissionManager::k_AndroidPermissionService
	String_t* ___k_AndroidPermissionService_9;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___s_Instance_4)); }
	inline ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Activity_5() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___s_Activity_5)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_Activity_5() const { return ___s_Activity_5; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_Activity_5() { return &___s_Activity_5; }
	inline void set_s_Activity_5(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_Activity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Activity_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_PermissionService_6() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___s_PermissionService_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_PermissionService_6() const { return ___s_PermissionService_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_PermissionService_6() { return &___s_PermissionService_6; }
	inline void set_s_PermissionService_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_PermissionService_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PermissionService_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_CurrentCallback_7() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___s_CurrentCallback_7)); }
	inline Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * get_s_CurrentCallback_7() const { return ___s_CurrentCallback_7; }
	inline Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 ** get_address_of_s_CurrentCallback_7() { return &___s_CurrentCallback_7; }
	inline void set_s_CurrentCallback_7(Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * value)
	{
		___s_CurrentCallback_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CurrentCallback_7), (void*)value);
	}

	inline static int32_t get_offset_of_k_AndroidPermissionsClass_8() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___k_AndroidPermissionsClass_8)); }
	inline String_t* get_k_AndroidPermissionsClass_8() const { return ___k_AndroidPermissionsClass_8; }
	inline String_t** get_address_of_k_AndroidPermissionsClass_8() { return &___k_AndroidPermissionsClass_8; }
	inline void set_k_AndroidPermissionsClass_8(String_t* value)
	{
		___k_AndroidPermissionsClass_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_AndroidPermissionsClass_8), (void*)value);
	}

	inline static int32_t get_offset_of_k_AndroidPermissionService_9() { return static_cast<int32_t>(offsetof(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields, ___k_AndroidPermissionService_9)); }
	inline String_t* get_k_AndroidPermissionService_9() const { return ___k_AndroidPermissionService_9; }
	inline String_t** get_address_of_k_AndroidPermissionService_9() { return &___k_AndroidPermissionService_9; }
	inline void set_k_AndroidPermissionService_9(String_t* value)
	{
		___k_AndroidPermissionService_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_AndroidPermissionService_9), (void*)value);
	}
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct  ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem::beforeSetConfiguration
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___beforeSetConfiguration_6;

public:
	inline static int32_t get_offset_of_beforeSetConfiguration_6() { return static_cast<int32_t>(offsetof(ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375, ___beforeSetConfiguration_6)); }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * get_beforeSetConfiguration_6() const { return ___beforeSetConfiguration_6; }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E ** get_address_of_beforeSetConfiguration_6() { return &___beforeSetConfiguration_6; }
	inline void set_beforeSetConfiguration_6(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * value)
	{
		___beforeSetConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeSetConfiguration_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.FaceSubsystemParams
struct  FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.FaceSubsystemParams::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.FaceSubsystemParams::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.FaceSubsystemParams::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.FaceSubsystemParams::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.FaceSubsystemCapabilities UnityEngine.XR.ARSubsystems.FaceSubsystemParams::m_Capabilities
	int32_t ___m_Capabilities_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_4() { return static_cast<int32_t>(offsetof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09, ___m_Capabilities_4)); }
	inline int32_t get_m_Capabilities_4() const { return ___m_Capabilities_4; }
	inline int32_t* get_address_of_m_Capabilities_4() { return &___m_Capabilities_4; }
	inline void set_m_Capabilities_4(int32_t value)
	{
		___m_Capabilities_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.FaceSubsystemParams
struct FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___m_Capabilities_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.FaceSubsystemParams
struct FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___m_Capabilities_4;
};

// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct  XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct  XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28  : public TrackingSubsystem_4_t52B43FDBB6E641E351193D790222EA1C68B2984E
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct  XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6  : public TrackingSubsystem_4_t3D5C3B3749ABE82CC258AD552288C51FAE67DA1A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct  XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD  : public TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct  XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE  : public TrackingSubsystem_4_tCE5EA1B7325877FD88C7CF41F681F25B1FC1717A
{
public:
	// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_ImageLibrary
	RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * ___m_ImageLibrary_4;

public:
	inline static int32_t get_offset_of_m_ImageLibrary_4() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE, ___m_ImageLibrary_4)); }
	inline RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * get_m_ImageLibrary_4() const { return ___m_ImageLibrary_4; }
	inline RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B ** get_address_of_m_ImageLibrary_4() { return &___m_ImageLibrary_4; }
	inline void set_m_ImageLibrary_4(RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * value)
	{
		___m_ImageLibrary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImageLibrary_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct  XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE  : public TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct  XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8  : public TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider
struct  ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C  : public Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider
struct  ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82  : public Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1
{
public:
	// UnityEngine.Material UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::m_CameraMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_CameraMaterial_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::<cpuImageApi>k__BackingField
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___U3CcpuImageApiU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_CameraMaterial_2() { return static_cast<int32_t>(offsetof(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82, ___m_CameraMaterial_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_CameraMaterial_2() const { return ___m_CameraMaterial_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_CameraMaterial_2() { return &___m_CameraMaterial_2; }
	inline void set_m_CameraMaterial_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_CameraMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraMaterial_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcpuImageApiU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82, ___U3CcpuImageApiU3Ek__BackingField_3)); }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * get_U3CcpuImageApiU3Ek__BackingField_3() const { return ___U3CcpuImageApiU3Ek__BackingField_3; }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E ** get_address_of_U3CcpuImageApiU3Ek__BackingField_3() { return &___U3CcpuImageApiU3Ek__BackingField_3; }
	inline void set_U3CcpuImageApiU3Ek__BackingField_3(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * value)
	{
		___U3CcpuImageApiU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcpuImageApiU3Ek__BackingField_3), (void*)value);
	}
};

struct ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::k_MainTexPropertyNameId
	int32_t ___k_MainTexPropertyNameId_1;

public:
	inline static int32_t get_offset_of_k_MainTexPropertyNameId_1() { return static_cast<int32_t>(offsetof(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_StaticFields, ___k_MainTexPropertyNameId_1)); }
	inline int32_t get_k_MainTexPropertyNameId_1() const { return ___k_MainTexPropertyNameId_1; }
	inline int32_t* get_address_of_k_MainTexPropertyNameId_1() { return &___k_MainTexPropertyNameId_1; }
	inline void set_k_MainTexPropertyNameId_1(int32_t value)
	{
		___k_MainTexPropertyNameId_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider
struct  ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9  : public Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider
struct  ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE  : public Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/FaceRegionWithARCorePose
struct  FaceRegionWithARCorePose_t85CE44F6ECD5E3D6DB8ECD043407E311EBF7F35F 
{
public:
	// UnityEngine.XR.ARCore.ARCoreFaceRegion UnityEngine.XR.ARCore.ARCoreFaceSubsystem/FaceRegionWithARCorePose::regionType
	int32_t ___regionType_0;
	// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCorePose UnityEngine.XR.ARCore.ARCoreFaceSubsystem/FaceRegionWithARCorePose::pose
	ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49  ___pose_1;

public:
	inline static int32_t get_offset_of_regionType_0() { return static_cast<int32_t>(offsetof(FaceRegionWithARCorePose_t85CE44F6ECD5E3D6DB8ECD043407E311EBF7F35F, ___regionType_0)); }
	inline int32_t get_regionType_0() const { return ___regionType_0; }
	inline int32_t* get_address_of_regionType_0() { return &___regionType_0; }
	inline void set_regionType_0(int32_t value)
	{
		___regionType_0 = value;
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(FaceRegionWithARCorePose_t85CE44F6ECD5E3D6DB8ECD043407E311EBF7F35F, ___pose_1)); }
	inline ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49  get_pose_1() const { return ___pose_1; }
	inline ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49 * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(ARCorePose_t96813C5827C86C8B2B81929608ACD67B777FDF49  value)
	{
		___pose_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider
struct  ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA  : public Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider
struct  ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F  : public Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreRaycastSubsystem/ARCoreProvider
struct  ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B  : public Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider
struct  ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8  : public Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A
{
public:
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_ProviderHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___m_ProviderHandle_1;
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::beforeSetConfiguration
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___beforeSetConfiguration_2;
	// System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_SetConfigurationCallback
	Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * ___m_SetConfigurationCallback_3;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_RenderEventFunc
	intptr_t ___m_RenderEventFunc_4;

public:
	inline static int32_t get_offset_of_m_ProviderHandle_1() { return static_cast<int32_t>(offsetof(ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8, ___m_ProviderHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_m_ProviderHandle_1() const { return ___m_ProviderHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_m_ProviderHandle_1() { return &___m_ProviderHandle_1; }
	inline void set_m_ProviderHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___m_ProviderHandle_1 = value;
	}

	inline static int32_t get_offset_of_beforeSetConfiguration_2() { return static_cast<int32_t>(offsetof(ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8, ___beforeSetConfiguration_2)); }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * get_beforeSetConfiguration_2() const { return ___beforeSetConfiguration_2; }
	inline Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E ** get_address_of_beforeSetConfiguration_2() { return &___beforeSetConfiguration_2; }
	inline void set_beforeSetConfiguration_2(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * value)
	{
		___beforeSetConfiguration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeSetConfiguration_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SetConfigurationCallback_3() { return static_cast<int32_t>(offsetof(ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8, ___m_SetConfigurationCallback_3)); }
	inline Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * get_m_SetConfigurationCallback_3() const { return ___m_SetConfigurationCallback_3; }
	inline Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F ** get_address_of_m_SetConfigurationCallback_3() { return &___m_SetConfigurationCallback_3; }
	inline void set_m_SetConfigurationCallback_3(Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * value)
	{
		___m_SetConfigurationCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SetConfigurationCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderEventFunc_4() { return static_cast<int32_t>(offsetof(ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8, ___m_RenderEventFunc_4)); }
	inline intptr_t get_m_RenderEventFunc_4() const { return ___m_RenderEventFunc_4; }
	inline intptr_t* get_address_of_m_RenderEventFunc_4() { return &___m_RenderEventFunc_4; }
	inline void set_m_RenderEventFunc_4(intptr_t value)
	{
		___m_RenderEventFunc_4 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider
struct  ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F  : public Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6
{
public:

public:
};

struct ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_StaticFields
{
public:
	// System.Func`1<System.Guid> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::s_GenerateGuidDelegate
	Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * ___s_GenerateGuidDelegate_1;

public:
	inline static int32_t get_offset_of_s_GenerateGuidDelegate_1() { return static_cast<int32_t>(offsetof(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_StaticFields, ___s_GenerateGuidDelegate_1)); }
	inline Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * get_s_GenerateGuidDelegate_1() const { return ___s_GenerateGuidDelegate_1; }
	inline Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D ** get_address_of_s_GenerateGuidDelegate_1() { return &___s_GenerateGuidDelegate_1; }
	inline void set_s_GenerateGuidDelegate_1(Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * value)
	{
		___s_GenerateGuidDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GenerateGuidDelegate_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct  Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::implementationType
	Type_t * ___implementationType_3;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_3() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___implementationType_3)); }
	inline Type_t * get_implementationType_3() const { return ___implementationType_3; }
	inline Type_t ** get_address_of_implementationType_3() { return &___implementationType_3; }
	inline void set_implementationType_3(Type_t * value)
	{
		___implementationType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1, ___U3CcapabilitiesU3Ek__BackingField_4)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_4() const { return ___U3CcapabilitiesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_4() { return &___U3CcapabilitiesU3Ek__BackingField_4; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_4(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___implementationType_3;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct  Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_6)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_6() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_6(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() const { return ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return &___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline void set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct  Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.String,System.Boolean>
struct  Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>
struct  Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Guid>
struct  Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreAnchorSubsystem
struct  ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0  : public XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem
struct  ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6  : public XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem
struct  ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2  : public XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem
struct  ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4  : public XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE
{
public:

public:
};

struct ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_StaticFields
{
public:
	// System.String UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem::k_StreamingAssetsPath
	String_t* ___k_StreamingAssetsPath_5;

public:
	inline static int32_t get_offset_of_k_StreamingAssetsPath_5() { return static_cast<int32_t>(offsetof(ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_StaticFields, ___k_StreamingAssetsPath_5)); }
	inline String_t* get_k_StreamingAssetsPath_5() const { return ___k_StreamingAssetsPath_5; }
	inline String_t** get_address_of_k_StreamingAssetsPath_5() { return &___k_StreamingAssetsPath_5; }
	inline void set_k_StreamingAssetsPath_5(String_t* value)
	{
		___k_StreamingAssetsPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_StreamingAssetsPath_5), (void*)value);
	}
};


// UnityEngine.XR.ARCore.ARCorePlaneSubsystem
struct  ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03  : public XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreRaycastSubsystem
struct  ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362  : public XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem
struct  ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853  : public XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/TransformPoseJob
struct  TransformPoseJob_t677C9167D8394018632D739ADE07E97700BAA250 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/FaceRegionWithARCorePose> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/TransformPoseJob::regionsIn
	NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F  ___regionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/TransformPoseJob::regionsOut
	NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757  ___regionsOut_1;

public:
	inline static int32_t get_offset_of_regionsIn_0() { return static_cast<int32_t>(offsetof(TransformPoseJob_t677C9167D8394018632D739ADE07E97700BAA250, ___regionsIn_0)); }
	inline NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F  get_regionsIn_0() const { return ___regionsIn_0; }
	inline NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F * get_address_of_regionsIn_0() { return &___regionsIn_0; }
	inline void set_regionsIn_0(NativeArray_1_tBBE6B4D8E8C3C621A3FA673D8BF8BCF31380312F  value)
	{
		___regionsIn_0 = value;
	}

	inline static int32_t get_offset_of_regionsOut_1() { return static_cast<int32_t>(offsetof(TransformPoseJob_t677C9167D8394018632D739ADE07E97700BAA250, ___regionsOut_1)); }
	inline NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757  get_regionsOut_1() const { return ___regionsOut_1; }
	inline NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757 * get_address_of_regionsOut_1() { return &___regionsOut_1; }
	inline void set_regionsOut_1(NativeArray_1_t7C16D8B5807471D80F6ABE7E7A5DFEB24018C757  value)
	{
		___regionsOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob
struct  AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::grayscaleImage
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___grayscaleImage_0;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::name
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___name_1;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::database
	intptr_t ___database_2;
	// System.Int32 UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::width
	int32_t ___width_3;
	// System.Int32 UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::height
	int32_t ___height_4;
	// UnityEngine.XR.ARCore.ManagedReferenceImage UnityEngine.XR.ARCore.ARCoreImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10  ___managedReferenceImage_5;

public:
	inline static int32_t get_offset_of_grayscaleImage_0() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___grayscaleImage_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_grayscaleImage_0() const { return ___grayscaleImage_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_grayscaleImage_0() { return &___grayscaleImage_0; }
	inline void set_grayscaleImage_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___grayscaleImage_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___name_1)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_name_1() const { return ___name_1; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___name_1 = value;
	}

	inline static int32_t get_offset_of_database_2() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___database_2)); }
	inline intptr_t get_database_2() const { return ___database_2; }
	inline intptr_t* get_address_of_database_2() { return &___database_2; }
	inline void set_database_2(intptr_t value)
	{
		___database_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_5() { return static_cast<int32_t>(offsetof(AddImageJob_t9A6CD6B93EAF12A8F18EADAF667226157AA12ECF, ___managedReferenceImage_5)); }
	inline ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10  get_managedReferenceImage_5() const { return ___managedReferenceImage_5; }
	inline ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 * get_address_of_managedReferenceImage_5() { return &___managedReferenceImage_5; }
	inline void set_managedReferenceImage_5(ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10  value)
	{
		___managedReferenceImage_5 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformIndicesJob
struct  TransformIndicesJob_tE663EAFCD377349B53E42CCDB8D54F6C841874B1 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/Triangle`1<System.UInt16>> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformIndicesJob::triangleIndicesIn
	NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982  ___triangleIndicesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/Triangle`1<System.Int32>> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformIndicesJob::triangleIndicesOut
	NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438  ___triangleIndicesOut_1;

public:
	inline static int32_t get_offset_of_triangleIndicesIn_0() { return static_cast<int32_t>(offsetof(TransformIndicesJob_tE663EAFCD377349B53E42CCDB8D54F6C841874B1, ___triangleIndicesIn_0)); }
	inline NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982  get_triangleIndicesIn_0() const { return ___triangleIndicesIn_0; }
	inline NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982 * get_address_of_triangleIndicesIn_0() { return &___triangleIndicesIn_0; }
	inline void set_triangleIndicesIn_0(NativeArray_1_t3702A7E7C386B5BA9D224D756BE66A26A0CA0982  value)
	{
		___triangleIndicesIn_0 = value;
	}

	inline static int32_t get_offset_of_triangleIndicesOut_1() { return static_cast<int32_t>(offsetof(TransformIndicesJob_tE663EAFCD377349B53E42CCDB8D54F6C841874B1, ___triangleIndicesOut_1)); }
	inline NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438  get_triangleIndicesOut_1() const { return ___triangleIndicesOut_1; }
	inline NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438 * get_address_of_triangleIndicesOut_1() { return &___triangleIndicesOut_1; }
	inline void set_triangleIndicesOut_1(NativeArray_1_tB2162F030BB826AFBDA58ACC4DBEA9B1E8B13438  value)
	{
		___triangleIndicesOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformUVsJob
struct  TransformUVsJob_tD8F03472DDEFC92ACD82AAB1266A17D507BE6F32 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformUVsJob::uvsIn
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___uvsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformUVsJob::uvsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___uvsOut_1;

public:
	inline static int32_t get_offset_of_uvsIn_0() { return static_cast<int32_t>(offsetof(TransformUVsJob_tD8F03472DDEFC92ACD82AAB1266A17D507BE6F32, ___uvsIn_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_uvsIn_0() const { return ___uvsIn_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_uvsIn_0() { return &___uvsIn_0; }
	inline void set_uvsIn_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___uvsIn_0 = value;
	}

	inline static int32_t get_offset_of_uvsOut_1() { return static_cast<int32_t>(offsetof(TransformUVsJob_tD8F03472DDEFC92ACD82AAB1266A17D507BE6F32, ___uvsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_uvsOut_1() const { return ___uvsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_uvsOut_1() { return &___uvsOut_1; }
	inline void set_uvsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___uvsOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformVerticesJob
struct  TransformVerticesJob_t77809E0D8F3DA4608CE116C68F83A4396D49FCEC 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformVerticesJob::verticesIn
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___verticesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider/TransformVerticesJob::verticesOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___verticesOut_1;

public:
	inline static int32_t get_offset_of_verticesIn_0() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t77809E0D8F3DA4608CE116C68F83A4396D49FCEC, ___verticesIn_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_verticesIn_0() const { return ___verticesIn_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_verticesIn_0() { return &___verticesIn_0; }
	inline void set_verticesIn_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___verticesIn_0 = value;
	}

	inline static int32_t get_offset_of_verticesOut_1() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t77809E0D8F3DA4608CE116C68F83A4396D49FCEC, ___verticesOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_verticesOut_1() const { return ___verticesOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_verticesOut_1() { return &___verticesOut_1; }
	inline void set_verticesOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___verticesOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider/FlipBoundaryHandednessJob
struct  FlipBoundaryHandednessJob_t0C441DB8FEA090BD59B068B67406FF258CFD214D 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider/FlipBoundaryHandednessJob::vertices
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___vertices_0;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(FlipBoundaryHandednessJob_t0C441DB8FEA090BD59B068B67406FF258CFD214D, ___vertices_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_vertices_0() const { return ___vertices_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___vertices_0 = value;
	}
};


// UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider/FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_tB8A01A71204557EF4B69CCE9EF0E0B46491B23A7 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider/FlipBoundaryWindingJob::vertices
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___vertices_0;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_tB8A01A71204557EF4B69CCE9EF0E0B46491B23A7, ___vertices_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_vertices_0() const { return ___vertices_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___vertices_0 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate
struct  CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate
struct  CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/CopyIdentifiersJob
struct  CopyIdentifiersJob_tD324D0C48F429D2772540945C8D1F161876F523B 
{
public:
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/CopyIdentifiersJob::identifiersIn
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___identifiersIn_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/CopyIdentifiersJob::identifiersOut
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___identifiersOut_1;

public:
	inline static int32_t get_offset_of_identifiersIn_0() { return static_cast<int32_t>(offsetof(CopyIdentifiersJob_tD324D0C48F429D2772540945C8D1F161876F523B, ___identifiersIn_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_identifiersIn_0() const { return ___identifiersIn_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_identifiersIn_0() { return &___identifiersIn_0; }
	inline void set_identifiersIn_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___identifiersIn_0 = value;
	}

	inline static int32_t get_offset_of_identifiersOut_1() { return static_cast<int32_t>(offsetof(CopyIdentifiersJob_tD324D0C48F429D2772540945C8D1F161876F523B, ___identifiersOut_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_identifiersOut_1() const { return ___identifiersOut_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_identifiersOut_1() { return &___identifiersOut_1; }
	inline void set_identifiersOut_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___identifiersOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/ExtractConfidenceValuesJob
struct  ExtractConfidenceValuesJob_t3C3E3C2C06E49CC331FB2A0C7A243A76DBB144B3 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/ExtractConfidenceValuesJob::confidenceIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___confidenceIn_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/ExtractConfidenceValuesJob::confidenceOut
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___confidenceOut_1;

public:
	inline static int32_t get_offset_of_confidenceIn_0() { return static_cast<int32_t>(offsetof(ExtractConfidenceValuesJob_t3C3E3C2C06E49CC331FB2A0C7A243A76DBB144B3, ___confidenceIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_confidenceIn_0() const { return ___confidenceIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_confidenceIn_0() { return &___confidenceIn_0; }
	inline void set_confidenceIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___confidenceIn_0 = value;
	}

	inline static int32_t get_offset_of_confidenceOut_1() { return static_cast<int32_t>(offsetof(ExtractConfidenceValuesJob_t3C3E3C2C06E49CC331FB2A0C7A243A76DBB144B3, ___confidenceOut_1)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_confidenceOut_1() const { return ___confidenceOut_1; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_confidenceOut_1() { return &___confidenceOut_1; }
	inline void set_confidenceOut_1(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___confidenceOut_1 = value;
	}
};


// UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/TransformPositionsJob
struct  TransformPositionsJob_tA20C365F14C480BE23A500C6D7CD86E1F7C3E2B5 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/TransformPositionsJob::positionsIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider/TransformPositionsJob::positionsOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_tA20C365F14C480BE23A500C6D7CD86E1F7C3E2B5, ___positionsIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_tA20C365F14C480BE23A500C6D7CD86E1F7C3E2B5, ___positionsOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___positionsOut_1 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m3AFC336858ED8FDC879110B26D2EC6A62EB1B754_gshared (Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5 * __this, RuntimeObject * ___arg10, bool ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_gshared (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_gshared (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF_gshared (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared (Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Guid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E_gshared (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::.ctor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreBeforeSetConfigurationEventArgs__ctor_mD82A41F6097923312CA6631C8FC9E55673865064 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, intptr_t ___session0, intptr_t ___config1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::Equals(UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreBeforeSetConfigurationEventArgs_Equals_mCCCC91C281C61192FDAE808884D15533A8078ABB (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___other0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreBeforeSetConfigurationEventArgs_GetHashCode_mF4AFEA5E6A85C6F0F8DCC75245CE5428EFD53847 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreBeforeSetConfigurationEventArgs_Equals_m2768C2ABDDA85E466A0045B86025C978432F3D55 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.Api::get_Android()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageIntensityInLumens(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFocusModes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFaceTrackingAmbientIntensityLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsFaceTrackingHDRLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsWorldTrackingAmbientIntensityLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsWorldTrackingHDRLightEstimation(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraGrain(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4 (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222 (XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTextureHDR(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37 (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2 (XREnvironmentProbeSubsystem_t0C60258F565400E7C5AF0E0B7FA933F2BCF83CB6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.ARCoreFaceRegionData::Equals(UnityEngine.XR.ARCore.ARCoreFaceRegionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreFaceRegionData_Equals_m29EEA2391957456BAF06D78ECAEC9427FB2C2DE4 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  ___other0, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARCore.ARCoreFaceRegionData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreFaceRegionData_GetHashCode_m9F283CC3336333CB1E5C2C18777F417C5FA996A0 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.ARCoreFaceRegionData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreFaceRegionData_Equals_mB015262E7E27F819EF7C861972FF39D9075D95FE (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARCore.ARCoreFaceRegionData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreFaceRegionData_ToString_m4FBB298C921E49104BE4CBAF7AE855A44DD4C370 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_supportsFacePose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFacePose_mD799A27D00AC28F2E8228E7A3E38464B643BC99A (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_supportsFaceMeshVerticesAndIndices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFaceMeshVerticesAndIndices_mD137C1594ADBC51EC3017FDFAE248043C4CCBC75 (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_supportsFaceMeshUVs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFaceMeshUVs_m9FFBE6EF8118BB7F4A0BA3B50249DA55ED52B39E (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_supportsFaceMeshNormals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_supportsFaceMeshNormals_m4DEC49BDB7F800DA4EE6EFECCDB7FEF37DFC6413 (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_id_m89149E2175F86663FDFEB008B36BDAF40EA1585A_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_providerType_m5D660A72F34CA0D1C887F5BA68045B1D3973C7B3_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.FaceSubsystemParams::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_subsystemTypeOverride_mAC64FBAE73E16ACDA48708A4FFB77626437F8306_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.FaceSubsystemParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceSubsystemDescriptor_Create_mF8B2B433C3625242D3AEACDE1CD7F091BE8775BA (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceSubsystem__ctor_m25AB673DD168E2B5CDF6C90C8CD022AB8AA11D2A (XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMutableLibrary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1 (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52 (XRImageTrackingSubsystem_tBC68AD21C11D8D67F3343844E129DF505FF705CE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::get_permissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ARCorePermissionManager_get_permissionsService_m73B6B10A3CAB56B67C7B60012065D231381A25A7 (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::get_activity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ARCorePermissionManager_get_activity_m1732FFA1F7F50A20831DF1020C28FA31BA3B2BA8 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARCore.ARCorePermissionManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCorePermissionManager_IsPermissionGranted_mB145848003BD61C11B89262E8BDFB02F6ED0C7E5 (String_t* ___permissionName0, const RuntimeMethod* method);
// System.Void System.Action`2<System.String,System.Boolean>::Invoke(!0,!1)
inline void Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4 (Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * __this, String_t* ___arg10, bool ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 *, String_t*, bool, const RuntimeMethod*))Action_2_Invoke_m3AFC336858ED8FDC879110B26D2EC6A62EB1B754_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.XR.ARCore.ARCorePermissionManager UnityEngine.XR.ARCore.ARCorePermissionManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * ARCorePermissionManager_get_instance_m8E07FC7A6F3C77078E60E91565BB195898BA0C2D (const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager__ctor_m731A4AC44221DCF82F3238ACCB55EBFE234D37DA (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_provider()
inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F * __this, const RuntimeMethod* method)
{
	return ((  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * (*) (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5 (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::add_beforeSetConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_add_beforeSetConfiguration_m988029F05C1D432BFD254EAA9C84EE9B97D3615A (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19 (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 , const RuntimeMethod*))Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33 (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86 (XRDepthSubsystem_t808E21F0192095B08FA03AC535314FB5EF3B7E28 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ManagedReferenceImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedReferenceImage_Dispose_m8A1400CAB0D8B95D66B96CAFABF43751CD847FFC (ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_start_m6FB63637D0AC0E0CC15F490B0BAD19E59AE9099C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_stop_m76034CC7F6716698BE7BD332D7A26288E0A884B1 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_onDestroy_mD2A70ED11C74AD135FDE23BFB378799AD152E383 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_DisposeImage_m8CB833518CA3C8BA98E5FABD7B19011C792E52D0 (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api__ctor_mEC96F88C341E160F9DDE41F5FA275DFAFF8522BA (Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>::.ctor()
inline void HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *, const RuntimeMethod*))HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.TextureFormat>::Add(!0)
inline bool HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *, int32_t, const RuntimeMethod*))HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Construct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Construct_mEF906674C490B04D9A0DEAF1BE0F62AAC867D240 (int32_t ___mainTexPropertyNameId0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARCore.ARCoreCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreCameraSubsystem_get_backgroundShaderName_m8575EF961361C5915A396CF5F0A17C18EB57F192 (const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::CreateCameraMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C (Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * __this, String_t* ___cameraShaderName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCpuImageApi__ctor_mFAD3A378795CD3393D655D53654D41295C907D8B (ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Start_m55D98705CE5502F05EFCC3DC96287607CB72AAB8 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Stop_m4654718BF76628C71A3651269FC7C9C7268CFFFA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Destruct_mAFE401343E7B61E1A0672C912DF7708B45760FB6 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700 (Provider_tAF87FE3E906FDBF14F06488A1AA5E80400EFE190 * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Construct(UnityEngine.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Construct_mE13264BCF55332942D06088FF4F30C959449B2E2 (int32_t ___activeColorSpace0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Start_m17C41E2D09B9A7C6368DDA1DA75790C7A6BA827B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Stop_m61B5335B04468269DE86E30887BBCF743395B467 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Destroy_mA17334B346662B9A84A667B2A27AC530CB1E2D7C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Start_m28D224A02E33CDA8D30F50B8518F96AF59AF11BA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Stop_mFB38985B916548E322DDBBB0F3C1E2670C976765 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Destroy_mDE2026FB0580DB54FB3986A3B3F9AD2EE7A9A803 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mD36F52D0D0CF48E1C950DAE67246AB8C42498DE5 (Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::UnityARCore_imageTracking_setDatabase(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_imageTracking_setDatabase_m48A3826AB7DF54056F023488886E136BEE8C3051 (intptr_t ___imageDatabase0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ARCoreImageDatabase::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreImageDatabase_get_nativePtr_m17294038A31E21EEF973AB4806EDE38905A22115_inline (ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::UnityARCore_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_imageTracking_destroy_m2FCD3278A18C47BD47C8AB4B29D31522EE8C822F (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0 (Provider_tA7CEF856C3BC486ADEBD656F5535E24262AAAE9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_startTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_startTracking_m95842A2B26109F7668C7B969BC9A5740FF941C58 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_stopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_stopTracking_mC738C04D5E3B780E62EDAE848806451C59AB7526 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_destroy_m35920C0139A86AE3E571E25970FC42EB8129996D (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::SetConfigurationCallback(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679 (intptr_t ___session0, intptr_t ___config1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::CameraPermissionRequestProvider(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___callback0, intptr_t ___context1, const RuntimeMethod* method);
// System.Void System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionRequestProviderDelegate__ctor_m6BFF8DA3AB587D4E1804DC750A6B2FB14702FB68 (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_construct(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_construct_m5C7234C1082541ABB7E1A6311674E996E61B3FAF (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * ___cameraPermissionRequestProvider0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_graphicsMultiThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_graphicsMultiThreaded_m4F18D961FEC9604C0C866F884B99C9FD34C58354 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_getRenderEventFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARCore_session_getRenderEventFunc_m5B8B69C9AF4FED0AF6E612AEDA1DC2DC55468333 (const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_setConfigCallback(System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_setConfigCallback_mF06EBCC5508EDCF668067B31C90B7324117FF9A6 (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * ___callback0, intptr_t ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::CreateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_CreateTexture_m5BA73FF8E46F76B91616AC5E4DD1AD94B33805A7 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_resume(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_resume_m41E8E2ABECE5BCEE766C5E44CD3EB7BC7C19C823 (Guid_t  ___guid0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_pause_m96E3D51A74BCA1E525887C572C5A09F44C1B9D74 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::DeleteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_DeleteTexture_m006C3C6EECD65EB3CBE522C49F2B7FE8EFD31C6C (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_destroy_m6BE77CD64E4921402F1857DF25A046C747DD24A2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mC4EE4B567DF7F3370E982DB8B2F2109C25674B61 (U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5BB7D65B541861587E009033DCEB2D9846A6C5CB (Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::RequestPermission(System.String,System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04 (String_t* ___permissionName0, Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * ___callback1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_setRenderEventPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_setRenderEventPending_mE98D540DCB7A490FB94942ACF86C9E82F0257839 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_IssuePluginEvent_m32D9CA3BC8CFC8A03D57AE31D40F1CBEB928B88A (intptr_t ___callback0, int32_t ___eventID1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_waitForRenderEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_waitForRenderEvent_m37A5C56B0A9BB5CE675367FF6B64E4543B6F0613 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::IssueRenderEventAndWaitForCompletion(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/RenderEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_IssueRenderEventAndWaitForCompletion_mE8598AD009CD2C47A5DB5DF84D6CEAE4EE08FDF0 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, int32_t ___renderEvent0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_createTextureMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_createTextureMainThread_m9CE176299C9EDB9EE8EA49CB31E58DCD1C46E5EE (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_deleteTextureMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_deleteTextureMainThread_m542E9F2D054CB38540AA8D9E54B0BD7C35264D2D (const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57 (Provider_t8E88C17A70269CD3E96909AFCCA952AAA7DEC0B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Create(System.Func`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Create_mB23EFE0EEFF87C853E6F66F3BAF0726C6D90B9F8 (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * ___guidGenerator0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Destroy_m18771C9CE71D00C5B575EDD5B586A8EB9CF197E9 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Start_m9DCB34C3955D583FA9D68BDC8870BC4274B972DF (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Stop_m6639122C4B461F6D97FF35102B721F14B769FDD7 (const RuntimeMethod* method);
// System.Void System.Func`1<System.Guid>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE675E40D8A7C2A85513056633C2291A48735152 (U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate::Invoke(System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionsResultCallbackDelegate_Invoke_m7B84D210B26DDB2E90753B385ADAA4515FA8EF1C (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, bool ___granted0, intptr_t ___context1, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_faceTracking_Start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_faceTracking_Stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_faceTracking_Destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_EnvironmentProbeProvider_Construct(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_EnvironmentProbeProvider_Start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_EnvironmentProbeProvider_Stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_EnvironmentProbeProvider_Destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_refPoints_start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_refPoints_stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_refPoints_onDestroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_Camera_Construct(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_Camera_Destruct();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_Camera_Start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_Camera_Stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_Camera_DisposeImage(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_imageTracking_setDatabase(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_imageTracking_destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_planeTracking_startTracking();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_planeTracking_stopTracking();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_planeTracking_destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_construct(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_resume(Guid_t );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_pause();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARCore_session_getRenderEventFunc();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_setRenderEventPending();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_waitForRenderEvent();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_createTextureMainThread();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_deleteTextureMainThread();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_session_setConfigCallback(Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_depth_Create(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_depth_Start();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_depth_Stop();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARCore_depth_Destroy();
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
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreAnchorSubsystem_RegisterDescriptor_mE5D012C1846BFDBE17B38152E870501AD075FD01 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47AD780500460EAC1898BA626940B0B65498BB62);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             var cinfo = new XRAnchorSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-Anchor",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreAnchorSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreAnchorSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARCoreAnchorSubsystem),
		// #endif
		//                 supportsTrackableAttachments = true
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 ));
		Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), _stringLiteral47AD780500460EAC1898BA626940B0B65498BB62, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_4 = V_0;
		// XRAnchorSubsystemDescriptor.Create(cinfo);
		XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreAnchorSubsystem__ctor_m50C6FBB826F686A27BB269755632BA8527EE98B0 (ARCoreAnchorSubsystem_tE68ED395D5147C6A9919354DEDFA28994710B2E0 * __this, const RuntimeMethod* method)
{
	{
		XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_session()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr session => m_Session;
		intptr_t L_0 = __this->get_m_Session_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::get_config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr config => m_Config;
		intptr_t L_0 = __this->get_m_Config_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::.ctor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreBeforeSetConfigurationEventArgs__ctor_mD82A41F6097923312CA6631C8FC9E55673865064 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, intptr_t ___session0, intptr_t ___config1, const RuntimeMethod* method)
{
	{
		// m_Session = session;
		intptr_t L_0 = ___session0;
		__this->set_m_Session_0((intptr_t)L_0);
		// m_Config = config;
		intptr_t L_1 = ___config1;
		__this->set_m_Config_1((intptr_t)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARCoreBeforeSetConfigurationEventArgs__ctor_mD82A41F6097923312CA6631C8FC9E55673865064_AdjustorThunk (RuntimeObject * __this, intptr_t ___session0, intptr_t ___config1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	ARCoreBeforeSetConfigurationEventArgs__ctor_mD82A41F6097923312CA6631C8FC9E55673865064(_thisAdjusted, ___session0, ___config1, method);
}
// System.Boolean UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::Equals(UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreBeforeSetConfigurationEventArgs_Equals_mCCCC91C281C61192FDAE808884D15533A8078ABB (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     (m_Session == other.session) &&
		//     (m_Config == other.config);
		intptr_t L_0 = __this->get_m_Session_0();
		intptr_t L_1;
		L_1 = ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_3 = __this->get_m_Config_1();
		intptr_t L_4;
		L_4 = ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871_inline((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)(&___other0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARCoreBeforeSetConfigurationEventArgs_Equals_mCCCC91C281C61192FDAE808884D15533A8078ABB_AdjustorThunk (RuntimeObject * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARCoreBeforeSetConfigurationEventArgs_Equals_mCCCC91C281C61192FDAE808884D15533A8078ABB(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreBeforeSetConfigurationEventArgs_GetHashCode_mF4AFEA5E6A85C6F0F8DCC75245CE5428EFD53847 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// var hashCode = m_Session.GetHashCode();
		intptr_t* L_0 = __this->get_address_of_m_Session_0();
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Config.GetHashCode();
		intptr_t* L_2 = __this->get_address_of_m_Config_1();
		int32_t L_3;
		L_3 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_2, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ARCoreBeforeSetConfigurationEventArgs_GetHashCode_mF4AFEA5E6A85C6F0F8DCC75245CE5428EFD53847_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARCoreBeforeSetConfigurationEventArgs_GetHashCode_mF4AFEA5E6A85C6F0F8DCC75245CE5428EFD53847(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreBeforeSetConfigurationEventArgs_Equals_m2768C2ABDDA85E466A0045B86025C978432F3D55 (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => obj is ARCoreBeforeSetConfigurationEventArgs other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)UnBox(L_1, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064_il2cpp_TypeInfo_var))));
		ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  L_2 = V_0;
		bool L_3;
		L_3 = ARCoreBeforeSetConfigurationEventArgs_Equals_mCCCC91C281C61192FDAE808884D15533A8078ABB((ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARCoreBeforeSetConfigurationEventArgs_Equals_m2768C2ABDDA85E466A0045B86025C978432F3D55_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * _thisAdjusted = reinterpret_cast<ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARCoreBeforeSetConfigurationEventArgs_Equals_m2768C2ABDDA85E466A0045B86025C978432F3D55(_thisAdjusted, ___obj0, method);
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
// System.String UnityEngine.XR.ARCore.ARCoreCameraSubsystem::get_backgroundShaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreCameraSubsystem_get_backgroundShaderName_m8575EF961361C5915A396CF5F0A17C18EB57F192 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA005B42B75339BDF5A5EB4A9799C3BDD1C7B8185);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string backgroundShaderName => k_DefaultBackgroundShaderName;
		return _stringLiteralA005B42B75339BDF5A5EB4A9799C3BDD1C7B8185;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCameraSubsystem_Register_m15B6DA2733A469D498F403CFCC61DE1B9D34F750 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595AD8A43ABE055987C7BE7C40246130A95D1C44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D00B6854834FA62E7BBABFCF8AE7F12746BA09F);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.Android)
		bool L_0;
		L_0 = Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B(/*hidden argument*/NULL);
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
		//             var cameraSubsystemCinfo = new XRCameraSubsystemCinfo
		//             {
		//                 id = k_SubsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreCameraSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreCameraSubsystem),
		// #else
		//                 implementationType = typeof(ARCoreCameraSubsystem),
		// #endif
		//                 supportsAverageBrightness = true,
		//                 supportsAverageColorTemperature = false,
		//                 supportsColorCorrection = true,
		//                 supportsDisplayMatrix = true,
		//                 supportsProjectionMatrix = true,
		//                 supportsTimestamp = true,
		//                 supportsCameraConfigurations = true,
		//                 supportsCameraImage = true,
		//                 supportsAverageIntensityInLumens = false,
		//                 supportsFocusModes = true,
		//                 supportsFaceTrackingAmbientIntensityLightEstimation = true,
		//                 supportsFaceTrackingHDRLightEstimation = false,
		//                 supportsWorldTrackingAmbientIntensityLightEstimation = true,
		//                 supportsWorldTrackingHDRLightEstimation = true,
		//                 supportsCameraGrain = false,
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 ));
		XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), _stringLiteral8D00B6854834FA62E7BBABFCF8AE7F12746BA09F, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), L_4, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline((XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096  L_5 = V_0;
		// if (!XRCameraSubsystem.Register(cameraSubsystemCinfo))
		bool L_6;
		L_6 = XRCameraSubsystem_Register_m8E9CD378020A98CC1728A5C0A3324D25439921F4(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.LogError($"Failed to register the {k_SubsystemId} subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral595AD8A43ABE055987C7BE7C40246130A95D1C44, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCameraSubsystem__ctor_m460EAB110FFD4409BB7F4E2ABA4ACA7D4D760D81 (ARCoreCameraSubsystem_tE13501E322AB598EC6E014497B61F65F35BD348C * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m9DB793A0291AEB063BE13955137FCF52B8A6E222(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreEnvironmentProbeSubsystem_Register_m49A6CA225CEC16A536F36B5CA77268A6AFB56A06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F19161922870BC28A63022E58D5272106BC3F8);
		s_Il2CppMethodInitialized = true;
	}
	XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.Android)
		bool L_0;
		L_0 = Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B(/*hidden argument*/NULL);
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
		//             XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
		//             {
		//                 id = subsystemId,
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreEnvironmentProbeSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreEnvironmentProbeSubsystem),
		// #else
		//                 implementationType = typeof(ARCoreEnvironmentProbeSubsystem),
		// #endif
		//                 supportsManualPlacement = false,
		//                 supportsRemovalOfManual = false,
		//                 supportsAutomaticPlacement = true,
		//                 supportsRemovalOfAutomatic = false,
		//                 supportsEnvironmentTexture = false,
		//                 supportsEnvironmentTextureHDR = true,
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 ));
		XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), _stringLiteral59F19161922870BC28A63022E58D5272106BC3F8, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), L_4, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline((XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2  L_5 = V_0;
		// XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo);
		bool L_6;
		L_6 = XREnvironmentProbeSubsystem_Register_m20EFD30E3B31DD3ED37EA42B6E465AFAE132EA37(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreEnvironmentProbeSubsystem__ctor_mD4DA9F41AD5190EC49160E6F94364ABB37BF8ED2 (ARCoreEnvironmentProbeSubsystem_tFE75899905FEBC8659160323293EFFFE7D1347F6 * __this, const RuntimeMethod* method)
{
	{
		XREnvironmentProbeSubsystem__ctor_m72F971761AF7B66CBABFF9ABC8468A52406001A2(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARCore.ARCoreFaceRegionData::Equals(UnityEngine.XR.ARCore.ARCoreFaceRegionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreFaceRegionData_Equals_m29EEA2391957456BAF06D78ECAEC9427FB2C2DE4 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     (m_Region == other.m_Region) &&
		//     m_Pose.Equals(other.m_Pose);
		int32_t L_0 = __this->get_m_Region_0();
		ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  L_1 = ___other0;
		int32_t L_2 = L_1.get_m_Region_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0020;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = __this->get_address_of_m_Pose_1();
		ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  L_4 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_5 = L_4.get_m_Pose_1();
		bool L_6;
		L_6 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARCoreFaceRegionData_Equals_m29EEA2391957456BAF06D78ECAEC9427FB2C2DE4_AdjustorThunk (RuntimeObject * __this, ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * _thisAdjusted = reinterpret_cast<ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARCoreFaceRegionData_Equals_m29EEA2391957456BAF06D78ECAEC9427FB2C2DE4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARCore.ARCoreFaceRegionData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARCoreFaceRegionData_GetHashCode_m9F283CC3336333CB1E5C2C18777F417C5FA996A0 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hash = ((int)m_Region).GetHashCode();
		int32_t L_0 = __this->get_m_Region_0();
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_1();
		int32_t L_3;
		L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ARCoreFaceRegionData_GetHashCode_m9F283CC3336333CB1E5C2C18777F417C5FA996A0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * _thisAdjusted = reinterpret_cast<ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARCoreFaceRegionData_GetHashCode_m9F283CC3336333CB1E5C2C18777F417C5FA996A0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARCore.ARCoreFaceRegionData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCoreFaceRegionData_Equals_mB015262E7E27F819EF7C861972FF39D9075D95FE (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => obj is ARCoreFaceRegionData other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *)((ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *)UnBox(L_1, ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6_il2cpp_TypeInfo_var))));
		ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6  L_2 = V_0;
		bool L_3;
		L_3 = ARCoreFaceRegionData_Equals_m29EEA2391957456BAF06D78ECAEC9427FB2C2DE4((ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARCoreFaceRegionData_Equals_mB015262E7E27F819EF7C861972FF39D9075D95FE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * _thisAdjusted = reinterpret_cast<ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ARCoreFaceRegionData_Equals_mB015262E7E27F819EF7C861972FF39D9075D95FE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARCore.ARCoreFaceRegionData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARCoreFaceRegionData_ToString_m4FBB298C921E49104BE4CBAF7AE855A44DD4C370 (ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreFaceRegion_t1C15D961C65A62B99563CCF843093D53AC251412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AD68235F83B2C17176B92A763AB9E0AC7A4485);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("Region: {0}, Pose: {1}", m_Region, m_Pose);
		int32_t L_0 = __this->get_m_Region_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ARCoreFaceRegion_t1C15D961C65A62B99563CCF843093D53AC251412_il2cpp_TypeInfo_var, &L_1);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_3 = __this->get_m_Pose_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = L_3;
		RuntimeObject * L_5 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral11AD68235F83B2C17176B92A763AB9E0AC7A4485, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ARCoreFaceRegionData_ToString_m4FBB298C921E49104BE4CBAF7AE855A44DD4C370_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 * _thisAdjusted = reinterpret_cast<ARCoreFaceRegionData_t1421C6E0659D64370707015040C75159F658EFD6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ARCoreFaceRegionData_ToString_m4FBB298C921E49104BE4CBAF7AE855A44DD4C370(_thisAdjusted, method);
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
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Start_m28D224A02E33CDA8D30F50B8518F96AF59AF11BA (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_faceTracking_Start", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_faceTracking_Start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Stop_mFB38985B916548E322DDBBB0F3C1E2670C976765 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_faceTracking_Stop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_faceTracking_Stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::UnityARCore_faceTracking_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_UnityARCore_faceTracking_Destroy_mDE2026FB0580DB54FB3986A3B3F9AD2EE7A9A803 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_faceTracking_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_faceTracking_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_RegisterDescriptor_m9EA5E7DDE497CA5F39E091BAC325199C9F6AE146 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3977B939E8BCFB0D217C679AE468DB146FEDDD1F);
		s_Il2CppMethodInitialized = true;
	}
	FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             var descriptorParams = new FaceSubsystemParams
		//             {
		//                 supportsFacePose = true,
		//                 supportsFaceMeshVerticesAndIndices = true,
		//                 supportsFaceMeshUVs = true,
		//                 supportsFaceMeshNormals = true,
		//                 id = "ARCore-Face",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreFaceSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreFaceSubsystem)
		// #else
		//                 subsystemImplementationType = typeof(ARCoreFaceSubsystem)
		// #endif
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 ));
		FaceSubsystemParams_set_supportsFacePose_mD799A27D00AC28F2E8228E7A3E38464B643BC99A((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_supportsFaceMeshVerticesAndIndices_mD137C1594ADBC51EC3017FDFAE248043C4CCBC75((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_supportsFaceMeshUVs_m9FFBE6EF8118BB7F4A0BA3B50249DA55ED52B39E((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_supportsFaceMeshNormals_m4DEC49BDB7F800DA4EE6EFECCDB7FEF37DFC6413((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		FaceSubsystemParams_set_id_m89149E2175F86663FDFEB008B36BDAF40EA1585A_inline((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), _stringLiteral3977B939E8BCFB0D217C679AE468DB146FEDDD1F, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		FaceSubsystemParams_set_providerType_m5D660A72F34CA0D1C887F5BA68045B1D3973C7B3_inline((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		FaceSubsystemParams_set_subsystemTypeOverride_mAC64FBAE73E16ACDA48708A4FFB77626437F8306_inline((FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 *)(&V_0), L_3, /*hidden argument*/NULL);
		FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09  L_4 = V_0;
		// XRFaceSubsystemDescriptor.Create(descriptorParams);
		XRFaceSubsystemDescriptor_Create_mF8B2B433C3625242D3AEACDE1CD7F091BE8775BA(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem__ctor_mA467237EA8F044C401B2664372B5463BA47DD371 (ARCoreFaceSubsystem_t23396391ACA509AC984F95A5C85FA850EBF2C8B2 * __this, const RuntimeMethod* method)
{
	{
		XRFaceSubsystem__ctor_m25AB673DD168E2B5CDF6C90C8CD022AB8AA11D2A(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.ARCore.ARCoreImageDatabase::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARCoreImageDatabase_get_nativePtr_m17294038A31E21EEF973AB4806EDE38905A22115 (ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_0();
		return (intptr_t)L_0;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreImageDatabase__cctor_m590087A064FA31CC2A864212A1A6839436F80106 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A____B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly TextureFormat[] k_SupportedFormats =
		// {
		//     TextureFormat.Alpha8,
		//     TextureFormat.R8,
		//     TextureFormat.RFloat,
		//     TextureFormat.RGB24,
		//     TextureFormat.RGBA32,
		//     TextureFormat.ARGB32,
		//     TextureFormat.BGRA32,
		// };
		TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* L_0 = (TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE*)(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE*)SZArrayNew(TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE_il2cpp_TypeInfo_var, (uint32_t)7);
		TextureFormatU5BU5D_tC081C559AF0CE6678E9673429ADDC9B93B6B45CE* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7BA3E4D9911C28BB64C7563B2597A9989F7A5A1A____B32741A5717D0F010C0BF16EFE22BD6579CDC334592A1BD1847EE5DE4ABDB8F4_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_il2cpp_TypeInfo_var))->set_k_SupportedFormats_1(L_1);
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
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreImageTrackingSubsystem_RegisterDescriptor_m388E1C9A02DC30B9D426236F9097515398922B49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B99D5379F08846DA8E21293FFD2DC7A075C0FC4);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRImageTrackingSubsystemDescriptor.Create(new XRImageTrackingSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-ImageTracking",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreImageTrackingSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreImageTrackingSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARCoreImageTrackingSubsystem),
		// #endif
		//                 supportsMovingImages = true,
		//                 supportsMutableLibrary = true
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 ));
		Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), _stringLiteral8B99D5379F08846DA8E21293FFD2DC7A075C0FC4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline((Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32  L_4 = V_0;
		XRImageTrackingSubsystemDescriptor_Create_m3B9A00008CACA91AEC367F5D5EC19E57EA3D22A1(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreImageTrackingSubsystem__ctor_m5B2E19AD8D675FCB8626CBE6AA5C4BE56C0183ED (ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4 * __this, const RuntimeMethod* method)
{
	{
		XRImageTrackingSubsystem__ctor_m411C7B39B354BFB6468A5450B91D63A46CAC3A52(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreImageTrackingSubsystem__cctor_mCA7E18338A6DC2E0421C8C153689403ED560E785 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42589FFCB0974F0DA239E2195FCB00CE99F45E3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly string k_StreamingAssetsPath =
		// #if UNITY_EDITOR
		//     Path.Combine(Application.streamingAssetsPath, "HiddenARCore");
		// #else
		//     "jar:file://" + Application.dataPath + "!/assets/HiddenARCore";
		String_t* L_0;
		L_0 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207, L_0, _stringLiteral42589FFCB0974F0DA239E2195FCB00CE99F45E3B, /*hidden argument*/NULL);
		((ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreImageTrackingSubsystem_t6D45C34A578CB76238CB4971E78DC974B206CDB4_il2cpp_TypeInfo_var))->set_k_StreamingAssetsPath_5(L_1);
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
// System.Boolean UnityEngine.XR.ARCore.ARCorePermissionManager::IsPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCorePermissionManager_IsPermissionGranted_mB145848003BD61C11B89262E8BDFB02F6ED0C7E5 (String_t* ___permissionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// return permissionsService.Call<bool>("IsPermissionGranted", activity, permissionName);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = ARCorePermissionManager_get_permissionsService_m73B6B10A3CAB56B67C7B60012065D231381A25A7(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = ARCorePermissionManager_get_activity_m1732FFA1F7F50A20831DF1020C28FA31BA3B2BA8(/*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___permissionName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_1, _stringLiteral7D22511CC292B1C86526CD5212677E0053AC1C87, L_5, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::RequestPermission(System.String,System.Action`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04 (String_t* ___permissionName0, Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callback == null)
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("callback");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (IsPermissionGranted(permissionName))
		String_t* L_2 = ___permissionName0;
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ARCorePermissionManager_IsPermissionGranted_mB145848003BD61C11B89262E8BDFB02F6ED0C7E5(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// callback(permissionName, true);
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_4 = ___callback1;
		String_t* L_5 = ___permissionName0;
		NullCheck(L_4);
		Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4(L_4, L_5, (bool)1, /*hidden argument*/Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		// return;
		return;
	}

IL_001f:
	{
		// if (s_CurrentCallback != null)
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_6 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_CurrentCallback_7();
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new InvalidOperationException("Cannot start a new permissions request before the current one finishes.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF799BF5DE9382ACB0037296B44D042FDFD3ACFE8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04_RuntimeMethod_var)));
	}

IL_0031:
	{
		// permissionsService.Call("RequestPermissionAsync", activity, new[] { permissionName }, instance);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = ARCorePermissionManager_get_permissionsService_m73B6B10A3CAB56B67C7B60012065D231381A25A7(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11;
		L_11 = ARCorePermissionManager_get_activity_m1732FFA1F7F50A20831DF1020C28FA31BA3B2BA8(/*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15 = ___permissionName0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * L_17;
		L_17 = ARCorePermissionManager_get_instance_m8E07FC7A6F3C77078E60E91565BB195898BA0C2D(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		NullCheck(L_8);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_8, _stringLiteral4D147215C82FF43E4366FAF1CD51F52CFE8DF7EF, L_16, /*hidden argument*/NULL);
		// s_CurrentCallback = callback;
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_18 = ___callback1;
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_CurrentCallback_7(L_18);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::OnPermissionGranted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager_OnPermissionGranted_mF21EC359604457BF3C6A7CB51B479D1A97467DD7 (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * __this, String_t* ___permissionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_CurrentCallback(permissionName, true);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_CurrentCallback_7();
		String_t* L_1 = ___permissionName0;
		NullCheck(L_0);
		Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4(L_0, L_1, (bool)1, /*hidden argument*/Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		// s_CurrentCallback = null;
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_CurrentCallback_7((Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::OnPermissionDenied(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager_OnPermissionDenied_mA7F09F1A510EB6160B5F362F95FBCF3ED4649C81 (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * __this, String_t* ___permissionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_CurrentCallback(permissionName, false);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_CurrentCallback_7();
		String_t* L_1 = ___permissionName0;
		NullCheck(L_0);
		Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4(L_0, L_1, (bool)0, /*hidden argument*/Action_2_Invoke_m1F55E53FB9F83CBD0ED5F4254B35132F967E08F4_RuntimeMethod_var);
		// s_CurrentCallback = null;
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_CurrentCallback_7((Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::OnActivityResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager_OnActivityResult_m924643E8BFFF76B4BFA780ABBB81E5D3FFCF359A (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * __this, const RuntimeMethod* method)
{
	{
		// void OnActivityResult() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager__ctor_m731A4AC44221DCF82F3238ACCB55EBFE234D37DA (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(k_AndroidPermissionsClass)
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		String_t* L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_k_AndroidPermissionsClass_8();
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// UnityEngine.XR.ARCore.ARCorePermissionManager UnityEngine.XR.ARCore.ARCorePermissionManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * ARCorePermissionManager_get_instance_m8E07FC7A6F3C77078E60E91565BB195898BA0C2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_Instance_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Instance = new ARCorePermissionManager();
		ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * L_1 = (ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 *)il2cpp_codegen_object_new(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		ARCorePermissionManager__ctor_m731A4AC44221DCF82F3238ACCB55EBFE234D37DA(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_Instance_4(L_1);
	}

IL_0011:
	{
		// return s_Instance;
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15 * L_2 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_Instance_4();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::get_activity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ARCorePermissionManager_get_activity_m1732FFA1F7F50A20831DF1020C28FA31BA3B2BA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Activity == null)
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_Activity_5();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// s_Activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_Activity_5(L_2);
	}

IL_0020:
	{
		// return s_Activity;
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_Activity_5();
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.XR.ARCore.ARCorePermissionManager::get_permissionsService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ARCorePermissionManager_get_permissionsService_m73B6B10A3CAB56B67C7B60012065D231381A25A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_PermissionService == null)
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_PermissionService_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// s_PermissionService = new AndroidJavaObject(k_AndroidPermissionService);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_k_AndroidPermissionService_9();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_3, L_1, L_2, /*hidden argument*/NULL);
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_s_PermissionService_6(L_3);
	}

IL_001b:
	{
		// return s_PermissionService;
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = ((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->get_s_PermissionService_6();
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePermissionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePermissionManager__cctor_m0206AEF93F311A2B6D736E827AAA8394036853C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string k_AndroidPermissionsClass = "com.unity3d.plugin.UnityAndroidPermissions$IPermissionRequestResult";
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_k_AndroidPermissionsClass_8(_stringLiteral163E615278B2AE83873F54F03D93170DAB900F53);
		// static readonly string k_AndroidPermissionService = "com.unity3d.plugin.UnityAndroidPermissions";
		((ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_StaticFields*)il2cpp_codegen_static_fields_for(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var))->set_k_AndroidPermissionService_9(_stringLiteral78890CE9DBB1337BC5B353A9D2ECF645ABCDC860);
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
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePlaneSubsystem_RegisterDescriptor_mF1B5A74DBFB36D2B03369EC1D700ED6C0548976B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EABB848917088B77EB2237DA4C1CFA54C04DEE);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.Android)
		bool L_0;
		L_0 = Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B(/*hidden argument*/NULL);
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
		//             var cinfo = new XRPlaneSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-Plane",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCorePlaneSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCorePlaneSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARCorePlaneSubsystem),
		// #endif
		//                 supportsHorizontalPlaneDetection = true,
		//                 supportsVerticalPlaneDetection = true,
		//                 supportsArbitraryPlaneDetection = false,
		//                 supportsBoundaryVertices = true
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD ));
		Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), _stringLiteralD0EABB848917088B77EB2237DA4C1CFA54C04DEE, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_5 = V_0;
		// XRPlaneSubsystemDescriptor.Create(cinfo);
		XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCorePlaneSubsystem__ctor_mF3227EC88E38182C5367B4DB7A7E9AFFF6AF858F (ARCorePlaneSubsystem_t6DDC22620BF9F7FD4E705EDC741C81F69B673A03 * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRaycastSubsystem_RegisterDescriptor_m3F65091548AB4B5A225E5307ABA4E375184C236A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622EF3A2E5F5DB825F46D8CC0DAFFECAFCBF9140);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-Raycast",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreRaycastSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreRaycastSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARCoreRaycastSubsystem),
		// #endif
		//                 supportsViewportBasedRaycast = true,
		//                 supportsWorldBasedRaycast = true,
		//                 supportedTrackableTypes =
		//                     (TrackableType.Planes & ~TrackableType.PlaneWithinInfinity) |
		//                     TrackableType.FeaturePoint
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 ));
		Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), _stringLiteral622EF3A2E5F5DB825F46D8CC0DAFFECAFCBF9140, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&V_0), ((int32_t)27), /*hidden argument*/NULL);
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_4 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreRaycastSubsystem__ctor_m5E5D18F73EE2FD6F3FDB976405B50E3870E8FB98 (ARCoreRaycastSubsystem_tE7CE089A74BB73560DCD462AB71F249744B87362 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::OnCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_OnCreate_m3F93F0DC4B0BBB3B530D16D39B1A4391530068CC (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreSessionSubsystem_ConfigurationChangedFromProvider_m0284DB23317FED506C478A5AECBCB1CCD43EF8D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((ARCoreProvider)provider).beforeSetConfiguration += ConfigurationChangedFromProvider;
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_1 = (Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)il2cpp_codegen_object_new(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5(L_1, __this, (intptr_t)((intptr_t)ARCoreSessionSubsystem_ConfigurationChangedFromProvider_m0284DB23317FED506C478A5AECBCB1CCD43EF8D8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m90733AAB271F0E0BB8D97623F29C218FCFF071A5_RuntimeMethod_var);
		NullCheck(((ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 *)CastclassClass((RuntimeObject*)L_0, ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var)));
		ARCoreProvider_add_beforeSetConfiguration_m988029F05C1D432BFD254EAA9C84EE9B97D3615A(((ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 *)CastclassClass((RuntimeObject*)L_0, ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::ConfigurationChangedFromProvider(UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_ConfigurationChangedFromProvider_m0284DB23317FED506C478A5AECBCB1CCD43EF8D8 (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * G_B2_0 = NULL;
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * G_B1_0 = NULL;
	{
		// void ConfigurationChangedFromProvider(ARCoreBeforeSetConfigurationEventArgs eventArgs) => beforeSetConfiguration?.Invoke(eventArgs);
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_0 = __this->get_beforeSetConfiguration_6();
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  L_2 = ___eventArgs0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem_RegisterDescriptor_m1B4DB2B7C6353A232EC46B1A068C28F4601C0914 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1453CB157FF877C229EFEF4709423EB438C65F);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Api.Android)
		bool L_0;
		L_0 = Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B(/*hidden argument*/NULL);
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
		//             XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-Session",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreSessionSubsystem),
		// #else
		//                 subsystemImplementationType = typeof(ARCoreSessionSubsystem),
		// #endif
		//                 supportsInstall = true,
		//                 supportsMatchFrameRate = true
		//             });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A ));
		Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), _stringLiteral3C1453CB157FF877C229EFEF4709423EB438C65F, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), L_4, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_5 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreSessionSubsystem__ctor_m4A86F48B555802FD38A4421B7FEDB1C4CBBC6B3E (ARCoreSessionSubsystem_tFF74CE3FF58D5BB9130DF221576CF1EFD23BF375 * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreXRDepthSubsystem_RegisterDescriptor_m1E037F78E9AD1AC50492A1298023E25540941536 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC61B14207D18A29FD8F58987D3BA6770027F5CF);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//             var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
		//             {
		//                 id = "ARCore-Depth",
		// #if UNITY_2020_2_OR_NEWER
		//                 providerType = typeof(ARCoreXRDepthSubsystem.ARCoreProvider),
		//                 subsystemTypeOverride = typeof(ARCoreXRDepthSubsystem),
		// #else
		//                 implementationType = typeof(ARCoreXRDepthSubsystem),
		// #endif
		//                 supportsFeaturePoints = true,
		//                 supportsUniqueIds = true,
		//                 supportsConfidence = true
		//             };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 ));
		(&V_0)->set_id_0(_stringLiteralDC61B14207D18A29FD8F58987D3BA6770027F5CF);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), L_3, /*hidden argument*/NULL);
		Cinfo_set_supportsFeaturePoints_mD44DBE0A79D63D3234369E573653A81DC7FB8E1D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_mFF68A678A13F7C1BD9E157690649255A27369514((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_m78F76CAAFD5D667ADBED1580E1F8A1286B59C46D((Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1  L_4 = V_0;
		// XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
		XRDepthSubsystemDescriptor_RegisterDescriptor_mB5908D568E8943B143747EDA81FF550FE2BB3A33(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreXRDepthSubsystem__ctor_mF33D923EEC08E629C5D50C62A6DEF86A98120A37 (ARCoreXRDepthSubsystem_tD063DEC9427789CDE19E9A8B50AD6220E6EFD853 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_mCD27ED98C0FCF9538A67023E02DDD4AFB3B04D86(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARCore.Api::get_Android()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_Android_mB43A22CDBA502712C83FA507D2B4F7DA4795133B (const RuntimeMethod* method)
{
	{
		// public static bool Android => true;
		return (bool)1;
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
// System.Void UnityEngine.XR.ARCore.ManagedReferenceImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedReferenceImage_Dispose_m8A1400CAB0D8B95D66B96CAFABF43751CD847FFC (ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GCHandle.FromIntPtr(texture).Free();
		intptr_t L_0 = __this->get_texture_4();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// texture = IntPtr.Zero;
		__this->set_texture_4((intptr_t)(0));
		// GCHandle.FromIntPtr(name).Free();
		intptr_t L_2 = __this->get_name_3();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// name = IntPtr.Zero;
		__this->set_name_3((intptr_t)(0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ManagedReferenceImage_Dispose_m8A1400CAB0D8B95D66B96CAFABF43751CD847FFC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 * _thisAdjusted = reinterpret_cast<ManagedReferenceImage_tEA3FEA09D58B38947EE89CFFF857F50EC7309B10 *>(__this + _offset);
	ManagedReferenceImage_Dispose_m8A1400CAB0D8B95D66B96CAFABF43751CD847FFC(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Construct(UnityEngine.ColorSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Construct_mE13264BCF55332942D06088FF4F30C959449B2E2 (int32_t ___activeColorSpace0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_EnvironmentProbeProvider_Construct", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_EnvironmentProbeProvider_Construct)(___activeColorSpace0);
	#else
	il2cppPInvokeFunc(___activeColorSpace0);
	#endif

}
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Start_m17C41E2D09B9A7C6368DDA1DA75790C7A6BA827B (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_EnvironmentProbeProvider_Start", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_EnvironmentProbeProvider_Start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Stop_m61B5335B04468269DE86E30887BBCF743395B467 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_EnvironmentProbeProvider_Stop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_EnvironmentProbeProvider_Stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.NativeApi::UnityARCore_EnvironmentProbeProvider_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_EnvironmentProbeProvider_Destroy_mA17334B346662B9A84A667B2A27AC530CB1E2D7C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_EnvironmentProbeProvider_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_EnvironmentProbeProvider_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

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
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m95ED37E0AEB6F7B148D0D83F93694359B8B2E323 (ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => UnityARCore_refPoints_start();
		ARCoreProvider_UnityARCore_refPoints_start_m6FB63637D0AC0E0CC15F490B0BAD19E59AE9099C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mE30078A804B1F9F05A7481CA21BCA98112C84784 (ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => UnityARCore_refPoints_stop();
		ARCoreProvider_UnityARCore_refPoints_stop_m76034CC7F6716698BE7BD332D7A26288E0A884B1(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_m2717BCE0814270C5196E47DBE648F185452006B1 (ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => UnityARCore_refPoints_onDestroy();
		ARCoreProvider_UnityARCore_refPoints_onDestroy_mD2A70ED11C74AD135FDE23BFB378799AD152E383(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_start_m6FB63637D0AC0E0CC15F490B0BAD19E59AE9099C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_refPoints_start", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_refPoints_start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_stop_m76034CC7F6716698BE7BD332D7A26288E0A884B1 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_refPoints_stop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_refPoints_stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::UnityARCore_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_refPoints_onDestroy_mD2A70ED11C74AD135FDE23BFB378799AD152E383 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_refPoints_onDestroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_refPoints_onDestroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreAnchorSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_mFB2C570DAACD08A5DB691A7C8AD780B6A58CDD27 (ARCoreProvider_tE630A7647085F14F6DDD38F2BAF5B6C0292CAC9C * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCpuImageApi_DisposeImage_m49405620E4FADA934EF4EE31EA75F81BC76E82A5 (ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARCore_Camera_DisposeImage(nativeHandle);
		int32_t L_0 = ___nativeHandle0;
		NativeApi_UnityARCore_Camera_DisposeImage_m8CB833518CA3C8BA98E5FABD7B19011C792E52D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCpuImageApi__ctor_mFAD3A378795CD3393D655D53654D41295C907D8B (ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E * __this, const RuntimeMethod* method)
{
	{
		Api__ctor_mEC96F88C341E160F9DDE41F5FA275DFAFF8522BA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreCpuImageApi::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreCpuImageApi__cctor_mB8CF426461C5857EC9EF1231FD87E8DD503A55B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly HashSet<TextureFormat> s_SupportedVideoConversionFormats = new HashSet<TextureFormat>
		// {
		//     TextureFormat.Alpha8,
		//     TextureFormat.R8,
		//     TextureFormat.RGB24,
		//     TextureFormat.RGBA32,
		//     TextureFormat.ARGB32,
		//     TextureFormat.BGRA32,
		// };
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_0 = (HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 *)il2cpp_codegen_object_new(HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD(L_0, /*hidden argument*/HashSet_1__ctor_m42658446DE9E2709FD2DAF4F47CE5FC2A42351CD_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_1, 1, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_3, ((int32_t)63), /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_5, 3, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_7, 4, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_9, 5, /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		HashSet_1_t7981318DC35BC53AD64634B2D643DD6055A39054 * L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA(L_11, ((int32_t)14), /*hidden argument*/HashSet_1_Add_mF5186C7EFED02C844FC23546EFB8A3CB5B1E62CA_RuntimeMethod_var);
		((ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_il2cpp_TypeInfo_var))->set_s_SupportedVideoConversionFormats_0(L_11);
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
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_m1ED314981F09CCDA2AE2DB3088A2DC6EF3D8290A (ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ARCoreProvider()
		Provider__ctor_mA61CB0610059584FC8190F2C54D845C7612D82BE(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARCore_Camera_Construct(k_MainTexPropertyNameId);
		IL2CPP_RUNTIME_CLASS_INIT(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var))->get_k_MainTexPropertyNameId_1();
		NativeApi_UnityARCore_Camera_Construct_mEF906674C490B04D9A0DEAF1BE0F62AAC867D240(L_0, /*hidden argument*/NULL);
		// m_CameraMaterial = CreateCameraMaterial(ARCoreCameraSubsystem.backgroundShaderName);
		String_t* L_1;
		L_1 = ARCoreCameraSubsystem_get_backgroundShaderName_m8575EF961361C5915A396CF5F0A17C18EB57F192(/*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Provider_CreateCameraMaterial_mE1F6AD1B1D9F9BA80FE1B8DB3138262545FC018C(__this, L_1, /*hidden argument*/NULL);
		__this->set_m_CameraMaterial_2(L_2);
		// cpuImageApi = new ARCoreCpuImageApi();
		ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E * L_3 = (ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E *)il2cpp_codegen_object_new(ARCoreCpuImageApi_tB62CC3F6230B6F76006DEBFF924940E8F1ACFB2E_il2cpp_TypeInfo_var);
		ARCoreCpuImageApi__ctor_mFAD3A378795CD3393D655D53654D41295C907D8B(L_3, /*hidden argument*/NULL);
		__this->set_U3CcpuImageApiU3Ek__BackingField_3(L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m5383A5B49D3B06A363A9B88003097B71E9AB6C47 (ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARCore_Camera_Start();
		NativeApi_UnityARCore_Camera_Start_m55D98705CE5502F05EFCC3DC96287607CB72AAB8(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mF6BABA48B7C3E0A745680A2C7693B49975269D23 (ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARCore_Camera_Stop();
		NativeApi_UnityARCore_Camera_Stop_m4654718BF76628C71A3651269FC7C9C7268CFFFA(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_m957AB92A38A127625B07F5E15B3A7570D06EAF03 (ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82 * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => NativeApi.UnityARCore_Camera_Destruct();
		NativeApi_UnityARCore_Camera_Destruct_mAFE401343E7B61E1A0672C912DF7708B45760FB6(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/ARCoreProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__cctor_mEFFA2DE84F667EA116E66AEA66A91D24EF5A7D69 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_MainTexPropertyNameId = Shader.PropertyToID(k_MainTexPropertyName);
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreProvider_tF0C64A4C988B3301AC887A017D7F9C2E03FA2B82_il2cpp_TypeInfo_var))->set_k_MainTexPropertyNameId_1(L_0);
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
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Construct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Construct_mEF906674C490B04D9A0DEAF1BE0F62AAC867D240 (int32_t ___mainTexPropertyNameId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_Camera_Construct", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_Camera_Construct)(___mainTexPropertyNameId0);
	#else
	il2cppPInvokeFunc(___mainTexPropertyNameId0);
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Destruct_mAFE401343E7B61E1A0672C912DF7708B45760FB6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_Camera_Destruct", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_Camera_Destruct)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Start_m55D98705CE5502F05EFCC3DC96287607CB72AAB8 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_Camera_Start", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_Camera_Start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_Stop_m4654718BF76628C71A3651269FC7C9C7268CFFFA (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_Camera_Stop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_Camera_Stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreCameraSubsystem/NativeApi::UnityARCore_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_Camera_DisposeImage_m8CB833518CA3C8BA98E5FABD7B19011C792E52D0 (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_Camera_DisposeImage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_Camera_DisposeImage)(___nativeHandle0);
	#else
	il2cppPInvokeFunc(___nativeHandle0);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_mB8FB458E136A2A2A827388B5A5466C1724F1B836 (ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9 * __this, const RuntimeMethod* method)
{
	{
		// public ARCoreProvider() => NativeApi.UnityARCore_EnvironmentProbeProvider_Construct(QualitySettings.activeColorSpace);
		Provider__ctor_m82E278812C6826F3F89A708912491AB72058B700(__this, /*hidden argument*/NULL);
		// public ARCoreProvider() => NativeApi.UnityARCore_EnvironmentProbeProvider_Construct(QualitySettings.activeColorSpace);
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		NativeApi_UnityARCore_EnvironmentProbeProvider_Construct_mE13264BCF55332942D06088FF4F30C959449B2E2(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_mE0AA5EEBCC1544CC63623A002CEB908036DFC8AD (ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => NativeApi.UnityARCore_EnvironmentProbeProvider_Start();
		NativeApi_UnityARCore_EnvironmentProbeProvider_Start_m17C41E2D09B9A7C6368DDA1DA75790C7A6BA827B(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mDED3CD6E1A025EF1860AA61D81FD27437858D5BB (ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => NativeApi.UnityARCore_EnvironmentProbeProvider_Stop();
		NativeApi_UnityARCore_EnvironmentProbeProvider_Stop_m61B5335B04468269DE86E30887BBCF743395B467(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreEnvironmentProbeSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_m5055B39292F22CFE74A5975E9C9A5CBBE5C7EB33 (ARCoreProvider_t0382C4E70726A6A91E24F1E9C20E98367804F0A9 * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => NativeApi.UnityARCore_EnvironmentProbeProvider_Destroy();
		NativeApi_UnityARCore_EnvironmentProbeProvider_Destroy_mA17334B346662B9A84A667B2A27AC530CB1E2D7C(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m6EB8E41CC7EA8ECCD55969426A4A6EF49AB32FD3 (ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => UnityARCore_faceTracking_Start();
		ARCoreFaceSubsystem_UnityARCore_faceTracking_Start_m28D224A02E33CDA8D30F50B8518F96AF59AF11BA(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_m56C4B192B1B12A47236FD8B8D1C629366D717215 (ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => UnityARCore_faceTracking_Stop();
		ARCoreFaceSubsystem_UnityARCore_faceTracking_Stop_mFB38985B916548E322DDBBB0F3C1E2670C976765(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_m201BC25CC8FB3667A67D1A849E8EECF41BAAD69D (ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => UnityARCore_faceTracking_Destroy();
		ARCoreFaceSubsystem_UnityARCore_faceTracking_Destroy_mDE2026FB0580DB54FB3986A3B3F9AD2EE7A9A803(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_m5BEA16C9F635EAFA9A0752D9FECBA61079D40919 (ARCoreProvider_t883543E7D831BF766B06FE28E6B9071129F844EE * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mD36F52D0D0CF48E1C950DAE67246AB8C42498DE5(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m1172607E0DCE942973D5992D69DC7310BBAECC15 (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mE54EF88358179E8CC7F81B4A5289F8EB0192A213 (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::set_imageLibrary(UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_set_imageLibrary_m4C579D635602FEFFB7B02326D124CDA349571384 (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA * __this, RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * V_0 = NULL;
	{
		// if (value == null)
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UnityARCore_imageTracking_setDatabase(IntPtr.Zero);
		ARCoreProvider_UnityARCore_imageTracking_setDatabase_m48A3826AB7DF54056F023488886E136BEE8C3051((intptr_t)(0), /*hidden argument*/NULL);
		// }
		return;
	}

IL_000e:
	{
		// else if (value is ARCoreImageDatabase database)
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_1 = ___value0;
		V_0 = ((ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF *)IsInstSealed((RuntimeObject*)L_1, ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF_il2cpp_TypeInfo_var));
		ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// UnityARCore_imageTracking_setDatabase(database.nativePtr);
		ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ARCoreImageDatabase_get_nativePtr_m17294038A31E21EEF973AB4806EDE38905A22115_inline(L_3, /*hidden argument*/NULL);
		ARCoreProvider_UnityARCore_imageTracking_setDatabase_m48A3826AB7DF54056F023488886E136BEE8C3051((intptr_t)L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0024:
	{
		// throw new ArgumentException($"The {value.GetType().Name} is not a valid ARCore image library.");
		RuntimeReferenceImageLibrary_t76072EC5637B1F0F8FD0A1BFD3AEAF954D6F8D6B * L_5 = ___value0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F75ECDB116DCBBF6FC5A38C92B230BE664085FE)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1CA5F011288BCBF98331BBD2D5505E1A91FD9790)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCoreProvider_set_imageLibrary_m4C579D635602FEFFB7B02326D124CDA349571384_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_mB019821F9DC80EDB9696D21E6E94B5E7FBA32BA2 (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => UnityARCore_imageTracking_destroy();
		ARCoreProvider_UnityARCore_imageTracking_destroy_m2FCD3278A18C47BD47C8AB4B29D31522EE8C822F(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::UnityARCore_imageTracking_setDatabase(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_imageTracking_setDatabase_m48A3826AB7DF54056F023488886E136BEE8C3051 (intptr_t ___imageDatabase0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_imageTracking_setDatabase", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_imageTracking_setDatabase)(___imageDatabase0);
	#else
	il2cppPInvokeFunc(___imageDatabase0);
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::UnityARCore_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_imageTracking_destroy_m2FCD3278A18C47BD47C8AB4B29D31522EE8C822F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_imageTracking_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_imageTracking_destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_mE371B274A2B47A5AB7A6E2A168C2E60F90FD8B54 (ARCoreProvider_t89F6CC12488B0F53F2751304277F3E62D27D24AA * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mE0C779A245EE703B26578F529ABFD6F18E002AC0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m9C248977E9955548E8A3C6EF68CC52C5F6959E44 (ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() => UnityARCore_planeTracking_startTracking();
		ARCoreProvider_UnityARCore_planeTracking_startTracking_m95842A2B26109F7668C7B969BC9A5740FF941C58(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_m1F533B6576F0AE178DA7D4B4BA58A4EA2F4CDEEB (ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() => UnityARCore_planeTracking_stopTracking();
		ARCoreProvider_UnityARCore_planeTracking_stopTracking_mC738C04D5E3B780E62EDAE848806451C59AB7526(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_m9C14F82EB06F4492A5E9903CBDEA69C410194A1D (ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() => UnityARCore_planeTracking_destroy();
		ARCoreProvider_UnityARCore_planeTracking_destroy_m35920C0139A86AE3E571E25970FC42EB8129996D(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_startTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_startTracking_m95842A2B26109F7668C7B969BC9A5740FF941C58 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_planeTracking_startTracking", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_planeTracking_startTracking)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_stopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_stopTracking_mC738C04D5E3B780E62EDAE848806451C59AB7526 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_planeTracking_stopTracking", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_planeTracking_stopTracking)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::UnityARCore_planeTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_planeTracking_destroy_m35920C0139A86AE3E571E25970FC42EB8129996D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_planeTracking_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_planeTracking_destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCorePlaneSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_m26BE1DF907D3326F4BE0347EAEE8990F4C2AF1AE (ARCoreProvider_t0340EA20DD384E403EDA7431F6471D99D04B048F * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreRaycastSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_mE412CDDBEFA2E81385FFE54DFECC3E56461B1532 (ARCoreProvider_t089CAB661F82B7E96B1C9C63906B948556C4DD4B * __this, const RuntimeMethod* method)
{
	{
		Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679(intptr_t ___session0, intptr_t ___config1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679(___session0, ___config1, ___context2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59(Il2CppMethodPointer ___callback0, intptr_t ___context1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___callback0' to managed representation
	CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ____callback0_unmarshaled = NULL;
	____callback0_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9>(___callback0, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9_il2cpp_TypeInfo_var);

	// Managed method invocation
	ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59(____callback0_unmarshaled, ___context1, NULL);

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_m6BA0995032F06559DB85C42AE12E7A795E744742 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action<IntPtr, IntPtr, IntPtr> m_SetConfigurationCallback = SetConfigurationCallback;
		Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * L_0 = (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F *)il2cpp_codegen_object_new(Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F_il2cpp_TypeInfo_var);
		Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF(L_0, NULL, (intptr_t)((intptr_t)ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_m0E62C6F8ACA95BF5130991CC43166E727812EFEF_RuntimeMethod_var);
		__this->set_m_SetConfigurationCallback_3(L_0);
		// public ARCoreProvider()
		Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARCore_session_construct(CameraPermissionRequestProvider);
		CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * L_1 = (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 *)il2cpp_codegen_object_new(CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79_il2cpp_TypeInfo_var);
		CameraPermissionRequestProviderDelegate__ctor_m6BFF8DA3AB587D4E1804DC750A6B2FB14702FB68(L_1, NULL, (intptr_t)((intptr_t)ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59_RuntimeMethod_var), /*hidden argument*/NULL);
		NativeApi_UnityARCore_session_construct_m5C7234C1082541ABB7E1A6311674E996E61B3FAF(L_1, /*hidden argument*/NULL);
		// if (SystemInfo.graphicsMultiThreaded)
		bool L_2;
		L_2 = SystemInfo_get_graphicsMultiThreaded_m4F18D961FEC9604C0C866F884B99C9FD34C58354(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// m_RenderEventFunc = NativeApi.UnityARCore_session_getRenderEventFunc();
		intptr_t L_3;
		L_3 = NativeApi_UnityARCore_session_getRenderEventFunc_m5B8B69C9AF4FED0AF6E612AEDA1DC2DC55468333(/*hidden argument*/NULL);
		__this->set_m_RenderEventFunc_4((intptr_t)L_3);
	}

IL_003b:
	{
		// m_ProviderHandle = GCHandle.Alloc(this);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4;
		L_4 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		__this->set_m_ProviderHandle_1(L_4);
		// NativeApi.UnityARCore_session_setConfigCallback(m_SetConfigurationCallback, GCHandle.ToIntPtr(m_ProviderHandle));
		Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * L_5 = __this->get_m_SetConfigurationCallback_3();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_6 = __this->get_m_ProviderHandle_1();
		intptr_t L_7;
		L_7 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_6, /*hidden argument*/NULL);
		NativeApi_UnityARCore_session_setConfigCallback_mF06EBCC5508EDCF668067B31C90B7324117FF9A6(L_5, (intptr_t)L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_mF5EE2E87C4511D9704FF973855390682BD2216A4 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateTexture();
		ARCoreProvider_CreateTexture_m5BA73FF8E46F76B91616AC5E4DD1AD94B33805A7(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARCore_session_resume(Guid.NewGuid());
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		NativeApi_UnityARCore_session_resume_m41E8E2ABECE5BCEE766C5E44CD3EB7BC7C19C823(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mCE3DA64497587B7DED32F362910CEAAAB82F60E2 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	{
		// => NativeApi.UnityARCore_session_pause();
		NativeApi_UnityARCore_session_pause_m96E3D51A74BCA1E525887C572C5A09F44C1B9D74(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::add_beforeSetConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_add_beforeSetConfiguration_m988029F05C1D432BFD254EAA9C84EE9B97D3615A (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_0 = NULL;
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_1 = NULL;
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_2 = NULL;
	{
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_0 = __this->get_beforeSetConfiguration_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_2 = V_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var));
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E ** L_5 = __this->get_address_of_beforeSetConfiguration_2();
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_6 = V_2;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_7 = V_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *>((Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_9 = V_0;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)L_9) == ((RuntimeObject*)(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::remove_beforeSetConfiguration(System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_remove_beforeSetConfiguration_mAB20E7463AF5E8BBECFDACF1064276106FB0386F (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_0 = NULL;
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_1 = NULL;
	Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * V_2 = NULL;
	{
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_0 = __this->get_beforeSetConfiguration_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_2 = V_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E_il2cpp_TypeInfo_var));
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E ** L_5 = __this->get_address_of_beforeSetConfiguration_2();
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_6 = V_2;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_7 = V_1;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *>((Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_9 = V_0;
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)L_9) == ((RuntimeObject*)(Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::SetConfigurationCallback(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_SetConfigurationCallback_mFF36A044075B42081017D3D8841D01D16A552679 (intptr_t ___session0, intptr_t ___config1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * V_1 = NULL;
	{
		// var providerHandle = (GCHandle)context;
		intptr_t L_0 = ___context2;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (providerHandle.Target is ARCoreSessionSubsystem.ARCoreProvider provider && provider.beforeSetConfiguration != null)
		RuntimeObject * L_2;
		L_2 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 *)IsInstClass((RuntimeObject*)L_2, ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8_il2cpp_TypeInfo_var));
		ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * L_4 = V_1;
		NullCheck(L_4);
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_5 = L_4->get_beforeSetConfiguration_2();
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// provider.beforeSetConfiguration(new ARCoreBeforeSetConfigurationEventArgs(session, config));
		ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * L_6 = V_1;
		NullCheck(L_6);
		Action_1_tCC4179E247BFCEBE8876EFB25F7D9AB8AEBB733E * L_7 = L_6->get_beforeSetConfiguration_2();
		intptr_t L_8 = ___session0;
		intptr_t L_9 = ___config1;
		ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ARCoreBeforeSetConfigurationEventArgs__ctor_mD82A41F6097923312CA6631C8FC9E55673865064((&L_10), (intptr_t)L_8, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19(L_7, L_10, /*hidden argument*/Action_1_Invoke_mAEE51ABE83CE8C5FB048A3541FAA15BC3E108B19_RuntimeMethod_var);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_mE46D87F18C0F3C79AF019EF938DCAF722FBBAB02 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	{
		// m_ProviderHandle.Free();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = __this->get_address_of_m_ProviderHandle_1();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
		// DeleteTexture();
		ARCoreProvider_DeleteTexture_m006C3C6EECD65EB3CBE522C49F2B7FE8EFD31C6C(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARCore_session_destroy();
		NativeApi_UnityARCore_session_destroy_m6BE77CD64E4921402F1857DF25A046C747DD24A2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::CameraPermissionRequestProvider(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_CameraPermissionRequestProvider_m0E9468644682F3042A5368601E230B46C7315C59 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___callback0, intptr_t ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m5BB7D65B541861587E009033DCEB2D9846A6C5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CCameraPermissionRequestProviderU3Eb__0_m5D4FD5ECD97417B45C84DFF8001CD44552D6C462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * L_0 = (U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass40_0__ctor_mC4EE4B567DF7F3370E982DB8B2F2109C25674B61(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * L_1 = V_0;
		CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * L_3 = V_0;
		intptr_t L_4 = ___context1;
		NullCheck(L_3);
		L_3->set_context_1((intptr_t)L_4);
		// ARCorePermissionManager.RequestPermission(k_CameraPermissionName, (permissinName, granted) =>
		// {
		//     callback(granted, context);
		// });
		U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * L_5 = V_0;
		Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 * L_6 = (Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4 *)il2cpp_codegen_object_new(Action_2_t8FC3CF6A24FB4EA34536D08E810B50E7D41F53D4_il2cpp_TypeInfo_var);
		Action_2__ctor_m5BB7D65B541861587E009033DCEB2D9846A6C5CB(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass40_0_U3CCameraPermissionRequestProviderU3Eb__0_m5D4FD5ECD97417B45C84DFF8001CD44552D6C462_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m5BB7D65B541861587E009033DCEB2D9846A6C5CB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ARCorePermissionManager_tF5859FB2F0EEA6159CBA23C2240068E3B3629F15_il2cpp_TypeInfo_var);
		ARCorePermissionManager_RequestPermission_m8EECB0FABEB6F5D036F693680D49B69A2A842E04(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::IssueRenderEventAndWaitForCompletion(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/RenderEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_IssueRenderEventAndWaitForCompletion_mE8598AD009CD2C47A5DB5DF84D6CEAE4EE08FDF0 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, int32_t ___renderEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_RenderEventFunc != IntPtr.Zero)
		intptr_t L_0 = __this->get_m_RenderEventFunc_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// NativeApi.UnityARCore_session_setRenderEventPending();
		NativeApi_UnityARCore_session_setRenderEventPending_mE98D540DCB7A490FB94942ACF86C9E82F0257839(/*hidden argument*/NULL);
		// GL.IssuePluginEvent(m_RenderEventFunc, (int)renderEvent);
		intptr_t L_2 = __this->get_m_RenderEventFunc_4();
		int32_t L_3 = ___renderEvent0;
		GL_IssuePluginEvent_m32D9CA3BC8CFC8A03D57AE31D40F1CBEB928B88A((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// NativeApi.UnityARCore_session_waitForRenderEvent();
		NativeApi_UnityARCore_session_waitForRenderEvent_m37A5C56B0A9BB5CE675367FF6B64E4543B6F0613(/*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::CreateTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_CreateTexture_m5BA73FF8E46F76B91616AC5E4DD1AD94B33805A7 (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	{
		// if (SystemInfo.graphicsMultiThreaded)
		bool L_0;
		L_0 = SystemInfo_get_graphicsMultiThreaded_m4F18D961FEC9604C0C866F884B99C9FD34C58354(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// IssueRenderEventAndWaitForCompletion(NativeApi.RenderEvent.CreateTexture);
		ARCoreProvider_IssueRenderEventAndWaitForCompletion_mE8598AD009CD2C47A5DB5DF84D6CEAE4EE08FDF0(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// NativeApi.UnityARCore_session_createTextureMainThread();
		NativeApi_UnityARCore_session_createTextureMainThread_m9CE176299C9EDB9EE8EA49CB31E58DCD1C46E5EE(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::DeleteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_DeleteTexture_m006C3C6EECD65EB3CBE522C49F2B7FE8EFD31C6C (ARCoreProvider_t746C92AE44CFE1C12ACF9617C6055D53EB68D2F8 * __this, const RuntimeMethod* method)
{
	{
		// if (SystemInfo.graphicsMultiThreaded)
		bool L_0;
		L_0 = SystemInfo_get_graphicsMultiThreaded_m4F18D961FEC9604C0C866F884B99C9FD34C58354(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// IssueRenderEventAndWaitForCompletion(NativeApi.RenderEvent.DeleteTexture);
		ARCoreProvider_IssueRenderEventAndWaitForCompletion_mE8598AD009CD2C47A5DB5DF84D6CEAE4EE08FDF0(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000f:
	{
		// NativeApi.UnityARCore_session_deleteTextureMainThread();
		NativeApi_UnityARCore_session_deleteTextureMainThread_m542E9F2D054CB38540AA8D9E54B0BD7C35264D2D(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_construct(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_construct_m5C7234C1082541ABB7E1A6311674E996E61B3FAF (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * ___cameraPermissionRequestProvider0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_construct", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___cameraPermissionRequestProvider0' to native representation
	Il2CppMethodPointer ____cameraPermissionRequestProvider0_marshaled = NULL;
	____cameraPermissionRequestProvider0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___cameraPermissionRequestProvider0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_construct)(____cameraPermissionRequestProvider0_marshaled);
	#else
	il2cppPInvokeFunc(____cameraPermissionRequestProvider0_marshaled);
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_destroy_m6BE77CD64E4921402F1857DF25A046C747DD24A2 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_resume(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_resume_m41E8E2ABECE5BCEE766C5E44CD3EB7BC7C19C823 (Guid_t  ___guid0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Guid_t );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Guid_t );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_resume", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_resume)(___guid0);
	#else
	il2cppPInvokeFunc(___guid0);
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_pause_m96E3D51A74BCA1E525887C572C5A09F44C1B9D74 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_pause", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_pause)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_getRenderEventFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARCore_session_getRenderEventFunc_m5B8B69C9AF4FED0AF6E612AEDA1DC2DC55468333 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_getRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARCore_session_getRenderEventFunc)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_setRenderEventPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_setRenderEventPending_mE98D540DCB7A490FB94942ACF86C9E82F0257839 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_setRenderEventPending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_setRenderEventPending)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_waitForRenderEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_waitForRenderEvent_m37A5C56B0A9BB5CE675367FF6B64E4543B6F0613 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_waitForRenderEvent", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_waitForRenderEvent)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_createTextureMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_createTextureMainThread_m9CE176299C9EDB9EE8EA49CB31E58DCD1C46E5EE (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_createTextureMainThread", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_createTextureMainThread)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_deleteTextureMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_deleteTextureMainThread_m542E9F2D054CB38540AA8D9E54B0BD7C35264D2D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_deleteTextureMainThread", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_deleteTextureMainThread)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi::UnityARCore_session_setConfigCallback(System.Action`3<System.IntPtr,System.IntPtr,System.IntPtr>,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARCore_session_setConfigCallback_mF06EBCC5508EDCF668067B31C90B7324117FF9A6 (Action_3_tB36AB9B67E2D5EC22E81DBB186EFEDC2966C2A8F * ___callback0, intptr_t ___context1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppMethodPointer) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_session_setConfigCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_session_setConfigCallback)(____callback0_marshaled, ___context1);
	#else
	il2cppPInvokeFunc(____callback0_marshaled, ___context1);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" Guid_t  DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Guid_t  returnValue;
	returnValue = ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B(NULL);

	return returnValue;
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Create(System.Func`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Create_mB23EFE0EEFF87C853E6F66F3BAF0726C6D90B9F8 (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * ___guidGenerator0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppMethodPointer);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_depth_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___guidGenerator0' to native representation
	Il2CppMethodPointer ____guidGenerator0_marshaled = NULL;
	____guidGenerator0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___guidGenerator0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_depth_Create)(____guidGenerator0_marshaled);
	#else
	il2cppPInvokeFunc(____guidGenerator0_marshaled);
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Start_m9DCB34C3955D583FA9D68BDC8870BC4274B972DF (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_depth_Start", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_depth_Start)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Stop_m6639122C4B461F6D97FF35102B721F14B769FDD7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_depth_Stop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_depth_Stop)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::UnityARCore_depth_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_UnityARCore_depth_Destroy_m18771C9CE71D00C5B575EDD5B586A8EB9CF197E9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityARCore_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityARCore"), "UnityARCore_depth_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityARCore_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityARCore_depth_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Guid UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::GenerateGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Guid GenerateGuid() => Guid.NewGuid();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__ctor_m6BD7A3598F86AA14EBA11006B3BBA4456E6CFBC7 (ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ARCoreProvider() => UnityARCore_depth_Create(s_GenerateGuidDelegate);
		Provider__ctor_m1A368071CFCB91BC39B9760441A777FE20F86A57(__this, /*hidden argument*/NULL);
		// public ARCoreProvider() => UnityARCore_depth_Create(s_GenerateGuidDelegate);
		IL2CPP_RUNTIME_CLASS_INIT(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * L_0 = ((ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var))->get_s_GenerateGuidDelegate_1();
		ARCoreProvider_UnityARCore_depth_Create_mB23EFE0EEFF87C853E6F66F3BAF0726C6D90B9F8(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Destroy_mCA94C1E2D287758F9D17DCF2B23B1B5CC6D4F129 (ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void Destroy() => UnityARCore_depth_Destroy();
		IL2CPP_RUNTIME_CLASS_INIT(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		ARCoreProvider_UnityARCore_depth_Destroy_m18771C9CE71D00C5B575EDD5B586A8EB9CF197E9(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Start_m80D144A56F80BF7AE923788B363619FE1F08994D (ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void Start() => UnityARCore_depth_Start();
		IL2CPP_RUNTIME_CLASS_INIT(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		ARCoreProvider_UnityARCore_depth_Start_m9DCB34C3955D583FA9D68BDC8870BC4274B972DF(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_Stop_mE00D9CC386CD84C630CE60EF3C904E97CA88359B (ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override void Stop() => UnityARCore_depth_Stop();
		IL2CPP_RUNTIME_CLASS_INIT(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		ARCoreProvider_UnityARCore_depth_Stop_m6639122C4B461F6D97FF35102B721F14B769FDD7(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreXRDepthSubsystem/ARCoreProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider__cctor_m6769A29E66F4F9FA1286273056CD2A5F3929FC38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Func<Guid> s_GenerateGuidDelegate = GenerateGuid;
		Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D * L_0 = (Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D *)il2cpp_codegen_object_new(Func_1_t2B3BA50A820213348E0F04664CD1C806C4E4734D_il2cpp_TypeInfo_var);
		Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E(L_0, NULL, (intptr_t)((intptr_t)ARCoreProvider_GenerateGuid_mA52E9502CED2C91DD0681FFB36AA2C9AC876DD0B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m4A5865F1A971F340351F9310A5208ED8E89E372E_RuntimeMethod_var);
		((ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_StaticFields*)il2cpp_codegen_static_fields_for(ARCoreProvider_t35D5A8665C60B3B3E1D97928CD79AC4C8EEEEF8F_il2cpp_TypeInfo_var))->set_s_GenerateGuidDelegate_1(L_0);
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
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m94AFE72C0D3C56AE59C8B3F987EED5FCB6AF08B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * L_0 = (U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 *)il2cpp_codegen_object_new(U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE675E40D8A7C2A85513056633C2291A48735152(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE675E40D8A7C2A85513056633C2291A48735152 (U3CU3Ec_t4D3C79B0A5A668291741B2BDCB1904FB40319124 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mC4EE4B567DF7F3370E982DB8B2F2109C25674B61 (U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider/<>c__DisplayClass40_0::<CameraPermissionRequestProvider>b__0(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CCameraPermissionRequestProviderU3Eb__0_m5D4FD5ECD97417B45C84DFF8001CD44552D6C462 (U3CU3Ec__DisplayClass40_0_t678AA5535222D9291DD354D8B668C69E848A15B5 * __this, String_t* ___permissinName0, bool ___granted1, const RuntimeMethod* method)
{
	{
		// callback(granted, context);
		CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * L_0 = __this->get_callback_0();
		bool L_1 = ___granted1;
		intptr_t L_2 = __this->get_context_1();
		NullCheck(L_0);
		CameraPermissionsResultCallbackDelegate_Invoke_m7B84D210B26DDB2E90753B385ADAA4515FA8EF1C(L_0, L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___resultCallback0, intptr_t ___context1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Il2CppMethodPointer, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___resultCallback0' to native representation
	Il2CppMethodPointer ____resultCallback0_marshaled = NULL;
	____resultCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___resultCallback0));

	// Native function invocation
	il2cppPInvokeFunc(____resultCallback0_marshaled, ___context1);

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionRequestProviderDelegate__ctor_m6BFF8DA3AB587D4E1804DC750A6B2FB14702FB68 (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate::Invoke(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionRequestProviderDelegate_Invoke_mD269D56A74B4A661B4EC2AAC029F9172B884DB2F (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___resultCallback0, intptr_t ___context1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultCallback0, ___context1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resultCallback0, ___context1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, ___resultCallback0, ___context1);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, ___resultCallback0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resultCallback0, ___context1);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resultCallback0, ___context1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resultCallback0, ___context1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t >::Invoke(targetMethod, targetThis, ___resultCallback0, ___context1);
					else
						GenericVirtActionInvoker2< CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t >::Invoke(targetMethod, targetThis, ___resultCallback0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resultCallback0, ___context1);
					else
						VirtActionInvoker2< CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resultCallback0, ___context1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___resultCallback0, ___context1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 *, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___resultCallback0, ___context1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate::BeginInvoke(UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraPermissionRequestProviderDelegate_BeginInvoke_mA9F353FA69BA7A9AC2C6D7D37D9E1C45FF68FE78 (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * ___resultCallback0, intptr_t ___context1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___resultCallback0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionRequestProviderDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionRequestProviderDelegate_EndInvoke_m1E757339151CF87AE0CDC0A9C264F5D251277287 (CameraPermissionRequestProviderDelegate_tBCCC8F735AEC1163AE058D82CDF635CA0B519B79 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, bool ___granted0, intptr_t ___context1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___granted0), ___context1);

}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionsResultCallbackDelegate__ctor_mA70CE95B78AEDF542824EEC578292310FFB249F3 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate::Invoke(System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionsResultCallbackDelegate_Invoke_m7B84D210B26DDB2E90753B385ADAA4515FA8EF1C (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, bool ___granted0, intptr_t ___context1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___granted0, ___context1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___granted0, ___context1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, intptr_t >::Invoke(targetMethod, targetThis, ___granted0, ___context1);
					else
						GenericVirtActionInvoker2< bool, intptr_t >::Invoke(targetMethod, targetThis, ___granted0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___granted0, ___context1);
					else
						VirtActionInvoker2< bool, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___granted0, ___context1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___granted0, ___context1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate::BeginInvoke(System.Boolean,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraPermissionsResultCallbackDelegate_BeginInvoke_m017F5A955758F7B3C67D74C9A39B76584A33CA53 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, bool ___granted0, intptr_t ___context1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___granted0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/NativeApi/CameraPermissionsResultCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPermissionsResultCallbackDelegate_EndInvoke_mF10E2606E87A38685559FFBE5308146AF71B29C4 (CameraPermissionsResultCallbackDelegate_t74BA6C743F40680E0C2F868C875A7F1F49F8FAE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_session_mD0DB2552343796269B9AA4C0B0DC9CA9E6C1D8CA_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr session => m_Session;
		intptr_t L_0 = __this->get_m_Session_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreBeforeSetConfigurationEventArgs_get_config_m78D6316FEDA09CC59203149B1026BDADDCF92871_inline (ARCoreBeforeSetConfigurationEventArgs_tA0D3A651FF755F959564617393B3E7C4464DD064 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr config => m_Config;
		intptr_t L_0 = __this->get_m_Config_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m768994793A205C7D5CE603B354D350A34D47720D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_m78F56C5CEF9FF62F60DE6073B8AD0FB0AFD00730_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_mD4D22BB1EC102CA40AF084B06DA3C957139EF2D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_mC20A88BD3C8D137A1F34888C64DC5FFF37787759_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m77727C8CBAB59D0D078B0A634EB0A56F1BF368E4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_m1CBB9181A21D2A964705AD5E22F78735DCFE2C01_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsColorCorrection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsColorCorrectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_m2E11C0B7442273252613BDB41BB8B6F02698FBEA_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_mFC886F8859FDF308D7980935474AA0E66ECF66B4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_mAA6157EC368F6358F155571E257A578729D368D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mD0F431DDAB4F82DDC6E35AB7583572D25244E0F0_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m2140EBB7ACEA9B1634F56DE2DCB85F26CB8C4D7D_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageIntensityInLumens_m49462C178EF35B3E688EE6711FD3E41E9C1976AB_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageIntensityInLumens { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFocusModes_m2F70E7EFC54E2F930DEA28DC4922125E01FE3026_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFocusModes { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFocusModesU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingAmbientIntensityLightEstimation_m93740733F66607C53F3928946A79CE732EAF9EF9_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFaceTrackingAmbientIntensityLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsFaceTrackingHDRLightEstimation_mD76A9A9A127118388FBD2E971246303BB2BE0F0C_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsFaceTrackingHDRLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingAmbientIntensityLightEstimation_mE9B47A05DA11B6C6FFCB6FFED773ADB464130C5B_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldTrackingAmbientIntensityLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsWorldTrackingHDRLightEstimation_m92AC9270D4D5FA4C61ED353406511B3877E5D9D4_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldTrackingHDRLightEstimation { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraGrain_m8BF26C263FED0D5106C436091BD8C25BFF8FD755_inline (XRCameraSubsystemCinfo_tFC7E8E15AD29D15868FBCE758A26ADCB5E9A5096 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraGrain { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraGrainU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m5C48BD3E879410D5C622BE7DC74D5C798E151731_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_providerType_m70C42D1F210DE19AB5E7D82F2D0BDB467E94FC2F_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_subsystemTypeOverride_mB35BB7FC1C0C42E0A7773365C147F539E7AC27EE_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_m2D1156DE760E47CBDDC345AD5CAE5D23AC23E524_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m01CE117FEA37EE9BEF79903754E396C35B859419_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mC4DBFBBD4DBB44D6B1154C4759A3175F9AC33D46_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_m6FCC1E3ACDC01E4447E385A1B89C96DEE16B7EF2_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_mE30B73C6AC37C6DF8F5B7DBDBC90A975A498D3E4_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTextureHDR_mA465A23A4DC052895F8F634892B7C8E3A49F4777_inline (XREnvironmentProbeSubsystemCinfo_t6D9368EC95B6B356A67B7289270F27BB6A4440B2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTextureHDR { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureHDRU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_id_m89149E2175F86663FDFEB008B36BDAF40EA1585A_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_providerType_m5D660A72F34CA0D1C887F5BA68045B1D3973C7B3_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSubsystemParams_set_subsystemTypeOverride_mAC64FBAE73E16ACDA48708A4FFB77626437F8306_inline (FaceSubsystemParams_t2FC64133455298391F1A1DDC61B151E688301B09 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m57970CF355AB638BAD860B9673F0E76B42126C1A_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_mCACA6EC48AB4B305E1515A312B32DC196AD9B92C_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m167DE9461D1FE4E4D8AB0EE25A7A4B0A947151D8_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m04BB57385FC0A2025414437DB1BEFBE97372E579_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMutableLibrary_m434D9A05D0025989AA711BA50139FD348D127661_inline (Cinfo_tED92D7CBD16BE657927A6B7DB64A22DA21EB7D32 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMutableLibrary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMutableLibraryU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m79B371C14F188233806BAB677302143650CD9A29_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEF323B6CBB63FB7E5ECB4A6849F06C57BFDF8120_inline (Cinfo_t37F91E88FCD8623834BE1898FC146620538C08B1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARCoreImageDatabase_get_nativePtr_m17294038A31E21EEF973AB4806EDE38905A22115_inline (ARCoreImageDatabase_tF7349633CA9F95DAF0AAAC4DEE3A4E5E175A34EF * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CproviderU3Ek__BackingField_3();
		return (RuntimeObject *)L_0;
	}
}

﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0Invoker
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker;
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0Invoker
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E;
struct Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277;
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782;
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56;
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t9EBA015A0670545A091B6BE5A51191A69DD0F5EB;
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2;
struct ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111;
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79;
struct RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4;
struct RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432;
struct Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975;
struct Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141;
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93;
struct SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7;
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1;
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF;
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027;
struct Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F;
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF;
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30;
struct ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6;
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A;
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6;
struct SimpleMonitor_t225944DC7DA5C8CD8310E408D52EC07FF6A140CA;
struct SimpleMonitor_tB9FB1EDE482325676967121CD31A0F99524EEF7F;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242;
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC;
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614;
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9;
struct Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E;
struct SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct FieldInfo_t;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
struct PropertyInfo_t;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral358A3678217D3CE720F0C294149170B975E33338;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA  : public RuntimeObject
{
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01 : public RuntimeObject {};
struct Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141  : public RuntimeObject
{
	int32_t ___U3CStatusU3Ek__BackingField;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___U3CErrorU3Ek__BackingField;
	RuntimeObject* ___U3CArgumentU3Ek__BackingField;
};
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 : public RuntimeObject {};
struct SafeHandleCache_1_tD31279A1EA56BC4347D7A0B62E555E9454E146FA  : public RuntimeObject
{
};
struct Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct SimpleMonitor_t225944DC7DA5C8CD8310E408D52EC07FF6A140CA  : public RuntimeObject
{
	int32_t ____busyCount;
	ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2* ____collection;
};
struct SimpleMonitor_tB9FB1EDE482325676967121CD31A0F99524EEF7F  : public RuntimeObject
{
	int32_t ____busyCount;
	ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8* ____collection;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_array;
};
struct SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____elements;
	int32_t ____freeCount;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____next;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____prev;
};
struct SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614  : public RuntimeObject
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____head;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____tail;
};
struct StackDebugView_1_t44367B01AFAD9690E05D510A1EBE184344E4BC56  : public RuntimeObject
{
};
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E  : public RuntimeObject
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7  : public RuntimeObject
{
	int32_t ___U3CmaxAtlasSizeU3Ek__BackingField;
	int32_t ___U3CmaxImageWidthU3Ek__BackingField;
	int32_t ___U3CmaxImageHeightU3Ek__BackingField;
	int32_t ___U3CvirtualWidthU3Ek__BackingField;
	int32_t ___U3CvirtualHeightU3Ek__BackingField;
	int32_t ___U3CphysicalWidthU3Ek__BackingField;
	int32_t ___U3CphysicalHeightU3Ek__BackingField;
	AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D* ___m_FirstUnpartitionedArea;
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ___m_OpenRows;
	int32_t ___m_1SidePadding;
	int32_t ___m_2SidePadding;
	bool ___U3CdisposedU3Ek__BackingField;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ___m_PropertiesList;
	Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* ___m_PropertiesHash;
};
struct EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 
{
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ____stack;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C 
{
	Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ____stack;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2  : public Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3
{
	SimpleMonitor_t225944DC7DA5C8CD8310E408D52EC07FF6A140CA* ____monitor;
	int32_t ____blockReentrancyCount;
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ___CollectionChanged;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged;
};
struct ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8  : public Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E
{
	SimpleMonitor_tB9FB1EDE482325676967121CD31A0F99524EEF7F* ____monitor;
	int32_t ____blockReentrancyCount;
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ___CollectionChanged;
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged;
};
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	RuntimeObject* ___m_Info;
	bool ___m_IsStructContainerType;
	GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* ___m_GetStructValueAction;
	SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* ___m_SetStructValueAction;
	GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* ___m_GetClassValueAction;
	SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* ___m_SetClassValueAction;
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1 : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3 {};
struct SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* ___m_Property;
};
struct SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0 
{
	void* ____buffer;
};
struct SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08 
{
	void* ____buffer;
};
struct Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 
{
	int32_t ___hashCode;
	Il2CppChar ___value;
	int32_t ___next;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D 
{
	int32_t ___hashCode;
	int32_t ___value;
	int32_t ___next;
};
struct Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E 
{
	int32_t ___hashCode;
	RuntimeObject* ___value;
	int32_t ___next;
};
struct Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 
{
	RuntimeObject* ___Item;
	int32_t ___SequenceNumber;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
typedef Il2CppFullySharedGenericStruct Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B;
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ____source;
	int32_t ____index;
};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 
{
	bool ___Item1;
	RuntimeObject* ___Item2;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF 
{
	FieldInfo_t* ___m_FieldInfo;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_pinvoke
{
	FieldInfo_t* ___m_FieldInfo;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_com
{
	FieldInfo_t* ___m_FieldInfo;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MethodBase_t  : public MemberInfo_t
{
};
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_OffsetPadding[128];
					int32_t ___Head;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_OffsetPadding[256];
					int32_t ___Tail;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 
{
	PropertyInfo_t* ___m_PropertyInfo;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_pinvoke
{
	PropertyInfo_t* ___m_PropertyInfo;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_com
{
	PropertyInfo_t* ___m_PropertyInfo;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	int32_t ____count;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshaled_pinvoke
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshaled_com
{
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDelay;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___transitionDuration;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___transitionProperty;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___transitionTimingFunction;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A 
{
	Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ____stack;
	int32_t ____version;
	int32_t ____index;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____currentElement;
};
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 ___value;
};
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79  : public ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424
{
};
struct Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975  : public RuntimeObject
{
	int32_t ___U3CStatusU3Ek__BackingField;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___U3CErrorU3Ek__BackingField;
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___U3CArgumentU3Ek__BackingField;
};
struct SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2  : public RuntimeObject
{
	SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____nextSegment;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots;
	int32_t ____slotsMask;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail;
	bool ____preservedForObservation;
	bool ____frozenForEnqueues;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment;
};
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___m_Texels;
};
struct ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___m_Texels;
};
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Texels;
};
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ChotspotU3Ek__BackingField;
	int32_t ___U3CdefaultCursorIdU3Ek__BackingField;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 
{
	int32_t ___alignContent;
	int32_t ___alignItems;
	int32_t ___alignSelf;
	float ___borderBottomWidth;
	float ___borderLeftWidth;
	float ___borderRightWidth;
	float ___borderTopWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___bottom;
	int32_t ___display;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___flexBasis;
	int32_t ___flexDirection;
	float ___flexGrow;
	float ___flexShrink;
	int32_t ___flexWrap;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___height;
	int32_t ___justifyContent;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___left;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginBottom;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginLeft;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginRight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___marginTop;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___maxHeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___maxWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___minHeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___minWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingBottom;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingLeft;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingRight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___paddingTop;
	int32_t ___position;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___right;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___top;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	intptr_t ___handle;
	int32_t ____state;
	bool ____ownsHandle;
	bool ____fullyInitialized;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 ___value;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshaled_pinvoke
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshaled_com
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___fontSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___letterSpacing;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___textShadow;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___unityFont;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___unityFontDefinition;
	int32_t ___unityFontStyleAndWeight;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___unityParagraphSpacing;
	int32_t ___unityTextAlign;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityTextOutlineColor;
	float ___unityTextOutlineWidth;
	int32_t ___visibility;
	int32_t ___whiteSpace;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___wordSpacing;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshaled_pinvoke
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_pinvoke ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshaled_com
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshaled_com ___cursor;
	int32_t ___textOverflow;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___unityBackgroundImageTintColor;
	int32_t ___unityOverflowClipBox;
	int32_t ___unitySliceBottom;
	int32_t ___unitySliceLeft;
	int32_t ___unitySliceRight;
	float ___unitySliceScale;
	int32_t ___unitySliceTop;
	int32_t ___unityTextOverflowPosition;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___translate;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___translate;
};
struct TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___rotate;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___scale;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___transformOrigin;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___translate;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshaled_pinvoke
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshaled_com
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___backgroundImage;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionX;
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___backgroundPositionY;
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___backgroundRepeat;
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___backgroundSize;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderBottomColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderBottomRightRadius;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderLeftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderRightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___borderTopColor;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopLeftRadius;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___borderTopRightRadius;
	float ___opacity;
	int32_t ___overflow;
};
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E  : public MulticastDelegate_t
{
};
struct Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277  : public MulticastDelegate_t
{
};
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782  : public MulticastDelegate_t
{
};
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56  : public MulticastDelegate_t
{
};
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39  : public MulticastDelegate_t
{
};
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 ___value;
};
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 ___value;
};
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 ___value;
};
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A  : public RuntimeObject
{
	int32_t ___m_RefCount;
	uint32_t ___m_Id;
	VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B ___value;
};
struct RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4  : public MulticastDelegate_t
{
};
struct RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432  : public MulticastDelegate_t
{
};
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7  : public MulticastDelegate_t
{
};
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027  : public MulticastDelegate_t
{
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___Value;
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60_StaticFields
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___Value;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01_StaticFields
{
	uint32_t ___m_NextId;
};
struct SafeHandleCache_1_tD31279A1EA56BC4347D7A0B62E555E9454E146FA_StaticFields
{
	RuntimeObject* ___s_invalidHandle;
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields
{
	int32_t ___s_TextureCounter;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerCopyTexture;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerGetTextureData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUpdateTexture;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTryAllocate;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	int32_t ___SpinCountforSpinBeforeWait;
};
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9_StaticFields
{
	uint32_t ___m_NextId;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1_StaticFields
{
	uint32_t ___m_NextId;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D_StaticFields
{
	uint32_t ___m_NextId;
};
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A_StaticFields
{
	uint32_t ___m_NextId;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 m_Items[1];

	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item), (void*)NULL);
	}
};
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 m_Items[1];

	inline Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D m_Items[1];

	inline Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tEA2D8282E9A5C3740D622EF2860F93438167A05D value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E m_Items[1];

	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_gshared_inline (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_gshared_inline (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_mCBC8FCA2D5D54D31D81A60F04EE69A5FC7936870_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, bool ___1_add, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_mF91026011328E50BA436D94348DE02AF46D42EFD_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m38F4CBE716E6784546D718D806BF699B34BBC743_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, bool ___1_add, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_mE05E14DAF4F3293B4FFF6AB25FA043E28986C483_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, bool ___1_add, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared_inline (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_gshared_inline (Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96_gshared (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0* __this, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61_gshared (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C* __this, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB_gshared (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A* __this, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ___0_stack, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, uint16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, uint32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_destination, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, uint64_t, const RuntimeMethod*))Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_inline (const RuntimeMethod* method)
{
	return ((  jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* (*) (const RuntimeMethod*))Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline)(method);
}
inline void ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964*, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71 (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44*, const RuntimeMethod*))RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 InheritedData_Copy_m0EABC6E355A3778EBE1EBBC888F0A33D4A3CC12E (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1 (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1*, const RuntimeMethod*))RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 LayoutData_Copy_m43CB8791B4A3BEDD9E8184D6E868008688E9EC31 (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD*, const RuntimeMethod*))RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 RareData_Copy_m704FCCC82A27DD5034CFB2E88E94D1C27582E29E (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32 (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D*, const RuntimeMethod*))RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 TransformData_Copy_m1C72DA746E9EDA30EF3A0B6B582ADE0D1F1CC1E1 (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9*, const RuntimeMethod*))RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 TransitionData_Copy_m6AECD90470D754363F0DCB00918CB167788DC51B (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* __this, const RuntimeMethod* method) ;
inline void RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704 (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method)
{
	((  void (*) (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A*, const RuntimeMethod*))RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B VisualData_Copy_m4672E40E37CE425C9991B5FC11EE9EEF32CD1A0F (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
inline int32_t Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_inline (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975*, const RuntimeMethod*))Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_gshared_inline)(__this, method);
}
inline int32_t Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_inline (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141*, const RuntimeMethod*))Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
inline int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582 (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, const RuntimeMethod*))Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m544E79984FB21C732A4514A2EFFC126ECAA22B66 (const RuntimeMethod* method) ;
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline bool Set_1_Find_mCBC8FCA2D5D54D31D81A60F04EE69A5FC7936870 (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, bool ___1_add, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F*, Il2CppChar, bool, const RuntimeMethod*))Set_1_Find_mCBC8FCA2D5D54D31D81A60F04EE69A5FC7936870_gshared)(__this, ___0_value, ___1_add, method);
}
inline int32_t Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9 (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F*, Il2CppChar, const RuntimeMethod*))Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9_gshared)(__this, ___0_value, method);
}
inline void Set_1_Resize_mF91026011328E50BA436D94348DE02AF46D42EFD (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F*, const RuntimeMethod*))Set_1_Resize_mF91026011328E50BA436D94348DE02AF46D42EFD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline bool Set_1_Find_m38F4CBE716E6784546D718D806BF699B34BBC743 (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, bool ___1_add, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, int32_t, bool, const RuntimeMethod*))Set_1_Find_m38F4CBE716E6784546D718D806BF699B34BBC743_gshared)(__this, ___0_value, ___1_add, method);
}
inline int32_t Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, int32_t, const RuntimeMethod*))Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB_gshared)(__this, ___0_value, method);
}
inline void Set_1_Resize_mE05E14DAF4F3293B4FFF6AB25FA043E28986C483 (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, const RuntimeMethod*))Set_1_Resize_mE05E14DAF4F3293B4FFF6AB25FA043E28986C483_gshared)(__this, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, bool ___1_add, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, bool, const RuntimeMethod*))Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5_gshared)(__this, ___0_value, ___1_add, method);
}
inline int32_t Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D_gshared)(__this, ___0_value, method);
}
inline void Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, const RuntimeMethod*))Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F (RuntimeObject* ___0_disposable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_initialAtlasSize, int32_t ___1_maxAtlasSize, int32_t ___2_sidePadding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187 (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method)
{
	((  void (*) (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30*, const RuntimeMethod*))ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline)(__this, method);
}
inline NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3_gshared)(__this, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, const RuntimeMethod*))ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared)(___0_src, ___1_srcWidth, ___2_srcHeight, ___3_dst, ___4_dstWidth, ___5_dstHeight, method);
}
inline void ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method)
{
	((  void (*) (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6*, const RuntimeMethod*))ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_inline (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared_inline)(__this, method);
}
inline NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2_gshared)(__this, method);
}
inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_inline (Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method)
{
	return ((  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B (*) (Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_gshared_inline)(__this, ___0_arg, method);
}
inline void ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6 (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, int32_t, int32_t, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, int32_t, int32_t, const RuntimeMethod*))ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6_gshared)(___0_src, ___1_srcWidth, ___2_srcHeight, ___3_dst, ___4_dstWidth, ___5_dstHeight, method);
}
inline void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*, void*, const RuntimeMethod*))SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline)(__this, ___0_buffer, method);
}
inline intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline)(___0_ptr, method);
}
inline intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*, const RuntimeMethod*))SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared)(__this, method);
}
inline void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, void*, const RuntimeMethod*))SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline)(__this, ___0_buffer, method);
}
inline Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2 (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, const RuntimeMethod*))SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, int32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, uint16_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, uint32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline)(__this, ___0_array, method);
}
inline void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*, int32_t, const RuntimeMethod*))Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*, const RuntimeMethod*))Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458 (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared)(__this, ___0_source, ___1_index, method);
}
inline SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline)(__this, method);
}
inline int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*, const RuntimeMethod*))SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline)(__this, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared)(__this, ___0_size, ___1_prev, method);
}
inline void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, int32_t, const RuntimeMethod*))SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared)(__this, ___0_size, method);
}
inline int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27 (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*, const RuntimeMethod*))SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96 (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0* __this, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0*, Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline (const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* (*) (const RuntimeMethod*))Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61 (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C* __this, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C*, Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, const RuntimeMethod*))Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560 (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9*, int32_t, const RuntimeMethod*))Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33_gshared)(___0_array, ___1_newSize, method);
}
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method)
{
	return ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (const RuntimeMethod*))Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline)(method);
}
inline int32_t Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC_gshared)(___0_array, ___1_value, ___2_startIndex, method);
}
inline void Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A* __this, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* ___0_stack, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A*, Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, const RuntimeMethod*))Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB_gshared)(__this, ___0_stack, method);
}
inline void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338 (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, const RuntimeMethod*))Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared)(__this, method);
}
inline void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1 (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared)(__this, ___0_item, method);
}
inline void Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D**, int32_t, const RuntimeMethod*))Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA_gshared)(___0_array, ___1_newSize, method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___1_start;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m72B233A5EEDFB1EC10568EBB03636205A2CD2BA6_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m557355F726A371E8071A5192CC30B8DA84DBA843_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m8233C912934C08E206DCCC1E5D8A0F8DBCF01D46_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDC71816B8A88A167F396D550E922E9236155ECA8_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_get_Empty_mF590D02EC6334390A18F6F05B80FDD62991A3C27_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppChar>(L_9);
		int32_t L_11 = ___1_start;
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_10, L_11);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ReadOnlySpan_1_ToArray_m3CC38C41E9FB235D0C9D24033DE4D561B1017488_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mAFC53FF457D681D6B91A0C169D2EEEAB29625F7F_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m43FCB412B29F8C6C9215173C3D4A72DC006670DF_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_op_Implicit_mDFCA2CC95F3991458A0775D346FCEB9A2F770D4B_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_get_Empty_mD21E73543F21952EEC2C85604B0A17A3BCEC7F7D_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<int32_t>(L_2);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		int32_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<int32_t>(L_9);
		int32_t L_11 = ___1_start;
		int32_t* L_12;
		L_12 = il2cpp_unsafe_add<int32_t,int32_t>(L_10, L_11);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m002824E5A4D3C902519D80E02AE5E0953C4612D4_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ReadOnlySpan_1_get_Item_mCBC5F0FABD8DDD286D8C4A8A4642667D57F03FDC_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m6BFC735A52A9BD567CDB9BF88E6C14CCBACF7C31_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m35C8CC70EDA895664220562932C2A81DD93CA6F8_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF5627E75DD87A05D82D8C33FA7FA5F063C33DAB2_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m443360A96312A8548DCAAEED412F39FDDC82B987_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m3B1FBAC8160374A2C197C9735069B0A620A62A23_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m30A9A7FDA90B255CD058755FB136AC1E6E2F63F8_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mC6C1A0EA0A982CC47A19F1F4042218D793D50C8B_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m7E853E9381AC068A39F5E774C8BCDFE597B99E76_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m05C07E0A62BA692216B91BA053CA22025545740B_gshared (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_op_Implicit_mAA9659DD7F5904F510BD9CC8AF18C21D0C3E51E3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_get_Empty_mEFB8239BC871589022E9F2F9D06FE4A1C45E5BFF_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_000b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint16_t>(L_2);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint16_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint16_t>(L_9);
		int32_t L_11 = ___1_start;
		uint16_t* L_12;
		L_12 = il2cpp_unsafe_add<uint16_t,int32_t>(L_10, L_11);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m122645EBEE1C3ADD7F4C7858AD28F32832FFD06F_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* ReadOnlySpan_1_get_Item_mCFD433A80298274F600D43D896D5C59C37FCAA1C_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9AC1DA05918AFC4CD99CDB827C8B0289FA116E9E_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_0 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE7A84DECFE9CB6550FA4A5097A186D13635EBAB2_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_1 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mC4B073FADE7B526E75997BC1812E9E3371188587_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_Slice_m494BE882D95FFF9E48B512B6FA3E1EE200AC6C96_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_Slice_m57DF5ED1C710FC376AC1CFBF096648F6A813436D_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint16_t* L_8;
		L_8 = il2cpp_unsafe_add<uint16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ReadOnlySpan_1_ToArray_mDE00EB18C6624A1284C3966BF6ACD1A7D3779163_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m3B3D525429B8C053A4BEB0D85DEFA165E48F2940_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC37EFCABE7D3BA69084448D2B98A8797C4C10C6A_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m281BC95A9D1B6908DC8B08AC979A1FDE4AD2DD8D_gshared (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_get_Empty_m49A88741D28FC840C5211427C11A9E5B625F613A_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4));
		return;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint32_t>(L_2);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCD16F7A99B857A37C2FEB5789418CE2E815CB971_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint32_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint32_t>(L_9);
		int32_t L_11 = ___1_start;
		uint32_t* L_12;
		L_12 = il2cpp_unsafe_add<uint32_t,int32_t>(L_10, L_11);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3171FE41972002FF13386D08A04FBCA3CB3672ED_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_1);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* ReadOnlySpan_1_get_Item_mEEE9EF749211790A7AB56BD450058AFF3624235C_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7418BCDEE74C36918B20E773012FE5C07F93A929_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mF4FD2021B28BD5686C91FFD78BE652D27D347A8B_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m74C3032589E2997359E5BCD92A91A3F4BAFDC9C5_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_Slice_mC6B76F8C79CDBA2B623B6915330B6A03BF62F44D_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_Slice_m10208F61FC7498158119767465B72116CDEE5F61_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ReadOnlySpan_1_ToArray_mA412A2425D8DE292217C7B5243AA89DD2BCC253A_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint32_t>(L_5);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_7 = __this->____pointer;
		V_0 = L_7;
		uint32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mECB6F69D573AF8465CDDC9C937244A18F38E1E19_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m5A1EE4D529E0060979E87E05F82F9584995B5BFD_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m80CB3F17B1BBC0D3E46B22062F280B525E6CBF6A_gshared (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_op_Implicit_mFC6781C7F4A1F9E5B433EC402A88FA6D99DCCC8B_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ReadOnlySpan_1_get_Empty_m132E13C20762E96A8BB09F9F94B76B74557F3E2E_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4));
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_2);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		int32_t L_11 = ___1_start;
		Il2CppFullySharedGenericAny* L_12;
		L_12 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m28C620FC83437DB4DA07A6AE8509838FEEC3CB44_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_mB39169D4E17B6E306E9C695E4B46FF465EADAE44_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_Slice_m5FF60C7FC975ABE8A18ECC2B3C066E77F55AECBD_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlySpan_1_ToArray_mC80D8D89B94D8ACFFFA96DC9812EFABF437B8830_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mF9C2BB2D1BC343ECA2DD473397A9E9314A1F65EA_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m47E226FBCC60E1F22C0A7012C93B763B35BAEB7B_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mCBD885A11AC8A168D48E4362A144A9F92E6DB56C_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_op_Implicit_mA3F92A25347CAF6EE827341F881A3F7527D8559A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlySpan_1_get_Empty_mBF0BAF52E133CA2C4344C933D07E81B9E5005980_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964));
		return;
	}

IL_000b:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_2);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9709AB4937426B14A50A2C45F3E80DE7DCB9E199_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_10;
		L_10 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_9);
		int32_t L_11 = ___1_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_12;
		L_12 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_10, L_11);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer = L_13;
		int32_t L_14 = ___2_length;
		__this->____length = L_14;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9B36094D58D2E4E5F9BB70F61F08F95497BF6E7_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ReadOnlySpan_1_get_Item_mE1E09A1D7E0859C0E136B6BBE502111F2529C57F_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mAB9E8A1C37FF392312CB5A43390E024E315AF507_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_0 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB03E69A532C121EC068085F75878AA4820A14BED_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_1 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mA701F163837D239732A470E19C49D186F20AB44F_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 ReadOnlySpan_1_Slice_m34F56A40E635C4883C94115118BA1A96A27C138A_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 ReadOnlySpan_1_Slice_m460A0F3BD290DFD69641ADA1C3E896CD6864ADED_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ReadOnlySpan_1_ToArray_mFD83F530478E0964554F5E9331A501172574EBE2_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 16), (uint32_t)L_2);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_5);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_7 = __this->____pointer;
		V_0 = L_7;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_mBE5940D1076F68C92D96D0C930DF906082C0E579_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_mF7DC885C64E99EF1560E017BD9403331181AF31C_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD2B27884967D95B665FDD76C7D12572348E0031C_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m169B16B999883E832AA599A4B6152CFB9E2C5398_gshared (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 ReadOnlySpan_1_op_Implicit_m7417C684C6A8831FC178D695A64D2A5EA60FDEC4_gshared (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 ReadOnlySpan_1_get_Empty_m6B53659FBDD2328C90BFE0C7CDA44B836606FCDD_gshared (const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964));
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_0 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_mDA6C3EA05DA938316AD79899DB789AFE0BFE517D_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m035B4EA8D59E276E1DC24433426EA75673557C9F_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m8BC836BAA34887A77338EF8567D43C1534ED8B23_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* RefCounted_Copy_m983ECC38DDBB3B4E5DD66AB28B90CFD256108FCE_gshared (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* __this, const RuntimeMethod* method) 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* V_0 = NULL;
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_0 = (RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_m75A25F45B52ACD9C78C95BA16FB57B0E42B2EB71(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_1 = L_0;
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67* L_2 = (InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67*)(&__this->___value);
		InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67 L_3;
		L_3 = InheritedData_Copy_m0EABC6E355A3778EBE1EBBC888F0A33D4A3CC12E(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___value))->___unityFont), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___unityFontDefinition))->___m_Font), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___unityFontDefinition))->___m_FontAsset), (void*)NULL);
		#endif
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_m542A5E5AD621F5B20946CD0D27B51652EF487597_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m1AD16289A8C8D8DA3A7ECC0680231BC6A4066926_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m425354771732561E790099B6F6FE3027FB6BCB01_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m72C2643CF7F289E61C778A23B1D4F1A9565B3498_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* RefCounted_Copy_mAA3FD5FCAF8C98D4B3491A0EBACD2F549C2BB5A5_gshared (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* __this, const RuntimeMethod* method) 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* V_0 = NULL;
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_0 = (RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_m0496B511120C1FDD72C23E87815BB99452CE70A1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_1 = L_0;
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440* L_2 = (LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440*)(&__this->___value);
		LayoutData_tEFB8DF2EADED24B7658EB2987E991107CCA22440 L_3;
		L_3 = LayoutData_Copy_m43CB8791B4A3BEDD9E8184D6E868008688E9EC31(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_mFFC8810BFF69B0FDA32EDED3C9B281C2D9B06B20_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m8DD4FE1E5657F49CE812DABF94FED33D1499D117_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m5C1EE58D70A887930B24661DC47C72BF77B277B5_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_mC2F546EB4EC39890099D84637183FD80DFA09F8C_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* RefCounted_Copy_m6F55A127986D1E8A6761CCB3AE9BFA3ABD97A705_gshared (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* __this, const RuntimeMethod* method) 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* V_0 = NULL;
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_0 = (RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_m37FD751AF74BCAB27B7058BE04C6BF0727E6FC4F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_1 = L_0;
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26* L_2 = (RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26*)(&__this->___value);
		RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26 L_3;
		L_3 = RareData_Copy_m704FCCC82A27DD5034CFB2E88E94D1C27582E29E(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___cursor))->___U3CtextureU3Ek__BackingField), (void*)NULL);
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_mE65C5C8480E4B0523FC5EBE987AA8F0FF4C7AC12_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m9DFC803B92AC1D8B79AC40AA5505C094FDE12E88_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_mD9974AF42BC7934D9986CAB91BDFCCE7C2680B21_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m6307DCC71675FF62601B91E7A493D444182B9E52_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* RefCounted_Copy_mA631233A1B06BF988F6B77DC571D0A133321BBBE_gshared (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* __this, const RuntimeMethod* method) 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* V_0 = NULL;
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_0 = (RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_m2AF5DD75CF4372209217BD191D8CA90C5DA04B32(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_1 = L_0;
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808* L_2 = (TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808*)(&__this->___value);
		TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808 L_3;
		L_3 = TransformData_Copy_m1C72DA746E9EDA30EF3A0B6B582ADE0D1F1CC1E1(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_mC1D648F66C8B5C1FA00BC1773C97123830F962A8_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m7E469A5FB2F14DB3BA642166067928D80EE5E95A_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m8C0F56C0D1E1BF867100AF1A2AD95BE177CEA593_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m434729833D2FA7BDFF1318EFB1B313D9E8B74C89_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* RefCounted_Copy_m12F802EEAE192E187965A8F5C2D5A84FE03624C6_gshared (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* __this, const RuntimeMethod* method) 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* V_0 = NULL;
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_0 = (RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_m4D632ECA38BDAE33DDDD2C1825353CE37AB6BE1D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_1 = L_0;
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321* L_2 = (TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321*)(&__this->___value);
		TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321 L_3;
		L_3 = TransitionData_Copy_m6AECD90470D754363F0DCB00918CB167788DC51B(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___value))->___transitionDelay), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___value))->___transitionDuration), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___value))->___transitionProperty), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___value))->___transitionTimingFunction), (void*)NULL);
		#endif
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_m8EA68ED94AE4AA0582707A8619600C4DD39FD9D6_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_m8722390CF6EBB0B91042486B5E20A582C7241995_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___m_RefCount = 1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		__this->___m_Id = (uint32_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m758ACF0FC4A33A56D63B3EDA9E5726A87731C542_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m7C551570A08A499A42E0345743338E524CB75E75_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RefCount;
		__this->___m_RefCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* RefCounted_Copy_m9CFFA6EF9C52585976042EC53C85EE7D853726BE_gshared (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* __this, const RuntimeMethod* method) 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* V_0 = NULL;
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_0 = (RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		RefCounted__ctor_mA7222FFA782F7443B91F8398ADEFE7B94B45C704(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_1 = L_0;
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B* L_2 = (VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B*)(&__this->___value);
		VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B L_3;
		L_3 = VisualData_Copy_m4672E40E37CE425C9991B5FC11EE9EEF32CD1A0F(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_1);
		L_1->___value = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___backgroundImage))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___backgroundImage))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___backgroundImage))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___value))->___backgroundImage))->___m_VectorImage), (void*)NULL);
		#endif
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_mA188208705742BFBF9A66FB888903A915DB1CC00_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RefCounted_get_refCount_mE664226CBB5FEE074ADE0ED90A84AC43C29B4C81_gshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__ctor_m010A861EF73D65F19889782B4BB7471216535639_gshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), 1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		uint32_t L_0 = ((RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId;
		int32_t L_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, 1));
		((RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 1)))->___m_NextId = (uint32_t)L_1;
		il2cpp_codegen_write_instance_field_data<uint32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), (uint32_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Acquire_m1BFD34EAD02D7839AF6B8BEED931A49133D17991_gshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted_Release_m366419440666897A7846596D074041C76EC83051_gshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), ((int32_t)il2cpp_codegen_subtract(L_0, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* RefCounted_Copy_mC3560A976A406E0708D21619AA928EDA0498995C_gshared (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* __this, const RuntimeMethod* method) 
{
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
	const uint32_t SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
	RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* V_0 = NULL;
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_0 = (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_1 = L_0;
		ConstrainedActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_2, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), (Il2CppFullySharedGenericStruct*)L_3);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_3, SizeOf_T_t37EF4BEE1DC016ACBF00F238A0AE26E2677BED72);
		V_0 = L_1;
		goto IL_0020;
	}

IL_0020:
	{
		RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefCounted__cctor_m7EF01B4E33D5192433E222603EFD864D97529418_gshared (const RuntimeMethod* method) 
{
	{
		((RefCounted_t78D31FC73D26EBCEA1088F115267D5D0A9615F01_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___m_NextId = (uint32_t)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectedMemberProperty_2_get_Name_m06EF5B89A747065C7498B30D45F846DD0D5A0011_gshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115_gshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, RuntimeObject* ___0_info, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	MethodInfo_t* V_7 = NULL;
	bool V_8 = false;
	MethodInfo_t* V_9 = NULL;
	MethodInfo_t* V_10 = NULL;
	bool V_11 = false;
	MethodInfo_t* V_12 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		String_t* L_0 = ___1_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		RuntimeObject* L_1 = ___0_info;
		__this->___m_Info = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Info), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		bool L_2;
		L_2 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_IsStructContainerType = L_2;
		RuntimeObject* L_3 = ___0_info;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_3);
		NullCheck((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this);
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		RuntimeObject* L_5 = __this->___m_Info;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(1, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		NullCheck((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this);
		bool L_7;
		L_7 = ((  bool (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0044;
	}

IL_0043:
	{
		G_B3_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		__this->___U3CIsReadOnlyU3Ek__BackingField = L_8;
		RuntimeObject* L_9 = __this->___m_Info;
		V_3 = L_9;
		RuntimeObject* L_10 = V_3;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var)))
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		V_1 = ((*(FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF*)((FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF*)(FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF*)UnBox((RuntimeObject*)L_11, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var))));
		G_B6_0 = 1;
		goto IL_0066;
	}

IL_0065:
	{
		G_B6_0 = 0;
	}

IL_0066:
	{
		V_2 = (bool)G_B6_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_016d;
	}

IL_0071:
	{
		RuntimeObject* L_13 = __this->___m_Info;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		V_4 = ((*(PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984*)((PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984*)(PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984*)UnBox((RuntimeObject*)L_15, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var))));
		G_B11_0 = 1;
		goto IL_008c;
	}

IL_008b:
	{
		G_B11_0 = 0;
	}

IL_008c:
	{
		V_5 = (bool)G_B11_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_016d;
		}
	}
	{
		bool L_17 = __this->___m_IsStructContainerType;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0108;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_19 = V_4;
		PropertyInfo_t* L_20 = L_19.___m_PropertyInfo;
		NullCheck(L_20);
		MethodInfo_t* L_21;
		L_21 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(22, L_20, (bool)1);
		V_7 = L_21;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		MethodInfo_t* L_24 = V_7;
		Delegate_t* L_25;
		L_25 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_23, L_24, NULL);
		__this->___m_GetStructValueAction = ((GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GetStructValueAction), (void*)((GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->klass->rgctx_data, 8))));
		bool L_26 = V_0;
		V_8 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0105;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_28 = V_4;
		PropertyInfo_t* L_29 = L_28.___m_PropertyInfo;
		NullCheck(L_29);
		MethodInfo_t* L_30;
		L_30 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24, L_29, (bool)1);
		V_9 = L_30;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		MethodInfo_t* L_33 = V_9;
		Delegate_t* L_34;
		L_34 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_32, L_33, NULL);
		__this->___m_SetStructValueAction = ((SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->klass->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SetStructValueAction), (void*)((SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->klass->rgctx_data, 10))));
	}

IL_0105:
	{
		goto IL_016c;
	}

IL_0108:
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_35 = V_4;
		PropertyInfo_t* L_36 = L_35.___m_PropertyInfo;
		NullCheck(L_36);
		MethodInfo_t* L_37;
		L_37 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(22, L_36, (bool)1);
		V_10 = L_37;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		MethodInfo_t* L_40 = V_10;
		Delegate_t* L_41;
		L_41 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_39, L_40, NULL);
		__this->___m_GetClassValueAction = ((GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GetClassValueAction), (void*)((GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->klass->rgctx_data, 12))));
		bool L_42 = V_0;
		V_11 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_016b;
		}
	}
	{
		PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_44 = V_4;
		PropertyInfo_t* L_45 = L_44.___m_PropertyInfo;
		NullCheck(L_45);
		MethodInfo_t* L_46;
		L_46 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24, L_45, (bool)1);
		V_12 = L_46;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		MethodInfo_t* L_49 = V_12;
		Delegate_t* L_50;
		L_50 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_48, L_49, NULL);
		__this->___m_SetClassValueAction = ((SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*)Castclass((RuntimeObject*)L_50, il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SetClassValueAction), (void*)((SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*)Castclass((RuntimeObject*)L_50, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
	}

IL_016b:
	{
	}

IL_016c:
	{
	}

IL_016d:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedPropertyBag_1__ctor_m6CFCFAB1CD0AEFC3445A3D2E8C1424F6A8C7395A_gshared (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_Multicast(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* currentDelegate = reinterpret_cast<RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ace, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenInst(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ace, method);
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenStatic(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_ace, method);
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenVirtual(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenInterface(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenGenericVirtual(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenGenericInterface(RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_ace);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveAcesCallback_1__ctor_mB48B59686D769DE99222CEC6E12211DC6B4E97F2_gshared (RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveAcesCallback_1_Invoke_mFE3D1B6E2ED2B1FD1CBEBFBFCFB3C596CE8C930C_gshared (RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* __this, RuntimeObject* ___0_ace, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ace, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_Multicast(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* currentDelegate = reinterpret_cast<RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_ace, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenStaticInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_ClosedStaticInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_ClosedInstInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenInstInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return InvokerFuncInvoker0< bool >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenVirtualInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return VirtualFuncInvoker0Invoker< bool >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenInterfaceInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return InterfaceFuncInvoker0Invoker< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenGenericVirtualInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return GenericVirtualFuncInvoker0Invoker< bool >::Invoke(method, (RuntimeObject*)___0_ace);
}
bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenGenericInterfaceInvoker(RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method)
{
	NullCheck(___0_ace);
	return GenericInterfaceFuncInvoker0Invoker< bool >::Invoke(method, (RuntimeObject*)___0_ace);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveAcesCallback_1__ctor_mF3D38E961B0D8F46B3030F176673EEEFA658A429_gshared (RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoveAcesCallback_1_Invoke_m4DC81C0FCF1B54DEF3B9CF394D5C8EDADF64BFFF_gshared (RemoveAcesCallback_1_t9374E45C41B37BED59D3FC46BA75A0FD8EDE0432* __this, Il2CppFullySharedGenericAny ___0_ace, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_ace, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Result_get_Success_m9BC906CB72C0A20B6CF097CB8DCA47535110CC68_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_m9FAFA1989A80151A01E339FC1D2586F73C9D4C77_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = __this->___U3CErrorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 Result_get_Argument_m30970989A7E224928EDE82D80FB4E115D61B4683_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_0 = __this->___U3CArgumentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m5A81D1197C54988F99BEF2587D1EABB4D91854C8_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___0_argument, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___U3CStatusU3Ek__BackingField = (int32_t)1;
		ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 L_0 = ___0_argument;
		__this->___U3CArgumentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CArgumentU3Ek__BackingField))->___Item2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mAA80039C5B135EB383CD26CD700C23D612D8AE79_gshared (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, int32_t ___0_state, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_error, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_state;
		__this->___U3CStatusU3Ek__BackingField = L_0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = ___1_error;
		__this->___U3CErrorU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Result_get_Success_m953244B0EE81F73A5607533A9035F668F3208C4A_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_m0378037255A6BEB508BB56911DB6C30742D1E57D_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = __this->___U3CErrorU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Result_get_Argument_mC52827584236381750B4A8A425115FB53016A3CD_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CArgumentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mE7EAFCF012BC699CFEE59F023EF6DD69E782D64F_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, RuntimeObject* ___0_argument, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__this->___U3CStatusU3Ek__BackingField = (int32_t)1;
		RuntimeObject* L_0 = ___0_argument;
		__this->___U3CArgumentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mE8F1C199C4CF5B0FA046A04E43D30FAC8CD1FF50_gshared (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, int32_t ___0_state, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_error, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_state;
		__this->___U3CStatusU3Ek__BackingField = L_0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = ___1_error;
		__this->___U3CErrorU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Result_get_Status_mE4AEFB0E863B8A5D9A3A8FC53D1F5FC886946F2A_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Result_get_Success_m544F562C986FF71F6BC7A07336ACF921FFC0277F_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_get_Argument_mFF777A595129DC21EE0ACD74FCDF6DA6FF49E6CD_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mD5334A91B372F17CC957E2376D067FD29F493A72_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, Il2CppFullySharedGenericAny ___0_argument, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (int32_t)1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_argument : &___0_argument), SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0, SizeOf_T_tC85B517966D02B88B23A0B7C8484ED3312FDCF2E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, int32_t ___0_state, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_error, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = ___1_error;
		il2cpp_codegen_write_instance_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteEnumEqualityComparer_1__ctor_m7D2F2ACC388CDD11FB144BFCED678FD87D0FC660_gshared (SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteEnumEqualityComparer_1__ctor_m1D88BE1D929EA59F3E6FAD308B8E7F9F2E597ABA_gshared (SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByteEnumEqualityComparer_1_GetHashCode_m775C2A00B7BE54D6A3800F7D8F36C91AAFC5FDB5_gshared (SByteEnumEqualityComparer_1_tBC7CE1B84BD3FA9E95F67907B755637B3F1464AF* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tFC5542913C5C664040FE11A1CD3CAA5047760AA3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tFC5542913C5C664040FE11A1CD3CAA5047760AA3);
	int8_t V_0 = 0x0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_tFC5542913C5C664040FE11A1CD3CAA5047760AA3);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), NULL, L_0);
		V_0 = ((int8_t)L_1);
		int32_t L_2;
		L_2 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF((&V_0), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandleCache_1_IsCachedInvalidHandle_m9691A0FD66B0C5755EDE1E3E541E615730B636B9_gshared (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___0_handle, const RuntimeMethod* method) 
{
	{
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_0 = ___0_handle;
		RuntimeObject* L_1;
		L_1 = VolatileRead((&((SafeHandleCache_1_tD31279A1EA56BC4347D7A0B62E555E9454E146FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_invalidHandle));
		return (bool)((((RuntimeObject*)(SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mD5C583944CF31346F08BA757C9C15371C4858FA7_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, int32_t ___0_boundedLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_boundedLength;
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_1 = (SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B*)(SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->____slots = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_1);
		int32_t L_2 = ___0_boundedLength;
		__this->____slotsMask = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		V_0 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = V_0;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___SequenceNumber = L_5;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_8 = __this->____slots;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_Capacity_m6AC42C585777163E56321B193E08010DFD029898_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) 
{
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_0 = __this->____slots;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) 
{
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_0 = __this->____slots;
		NullCheck(L_0);
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_EnsureFrozenForEnqueues_mC7EA723BE98E075BE173825F3913AA3C16F0B655_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____frozenForEnqueues;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		__this->____frozenForEnqueues = (bool)1;
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0017:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_1 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_2 = (int32_t*)(&L_1->___Tail);
		int32_t L_3;
		L_3 = VolatileRead(L_2);
		V_1 = L_3;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_4 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_5 = (int32_t*)(&L_4->___Tail);
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), L_8, NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0017;
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryDequeue_m65CCE1E0A24F41FA5EE05BBB78C07B873ADCC77E_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, RuntimeObject** ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Head);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t* L_7 = (int32_t*)(&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___SequenceNumber);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1))));
		int32_t L_10 = V_3;
		if (L_10)
		{
			goto IL_00b7;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_11 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_12 = (int32_t*)(&L_11->___Head);
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject** L_17 = ___0_item;
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_18 = __this->____slots;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___Item;
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		bool* L_21 = (bool*)(&__this->____preservedForObservation);
		bool L_22;
		L_22 = VolatileRead(L_21);
		if (L_22)
		{
			goto IL_00b5;
		}
	}
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_23 = __this->____slots;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		RuntimeObject** L_25 = (RuntimeObject**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Item);
		il2cpp_codegen_initobj(L_25, sizeof(RuntimeObject*));
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_26 = __this->____slots;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t* L_28 = (int32_t*)(&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___SequenceNumber);
		int32_t L_29 = V_1;
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_30 = __this->____slots;
		NullCheck(L_30);
		VolatileWrite(L_28, ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(((RuntimeArray*)L_30)->max_length)))));
	}

IL_00b5:
	{
		return (bool)1;
	}

IL_00b7:
	{
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_32 = __this->____frozenForEnqueues;
		V_4 = L_32;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_33 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_34 = (int32_t*)(&L_33->___Tail);
		int32_t L_35;
		L_35 = VolatileRead(L_34);
		V_5 = L_35;
		int32_t L_36 = V_5;
		int32_t L_37 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, L_37))) <= ((int32_t)0)))
		{
			goto IL_00ee;
		}
	}
	{
		bool L_38 = V_4;
		if (!L_38)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_39 = V_5;
		int32_t L_40;
		L_40 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_41 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_39, L_40)), L_41))) > ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}

IL_00ee:
	{
		RuntimeObject** L_42 = ___0_item;
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryPeek_m8AE646DCD469A3337B3B3DA3B568612B8B3F7BD1_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, RuntimeObject** ___0_result, bool ___1_resultUsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject** G_B6_0 = NULL;
	RuntimeObject** G_B5_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject** G_B7_1 = NULL;
	{
		bool L_0 = ___1_resultUsed;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		__this->____preservedForObservation = (bool)1;
		Interlocked_MemoryBarrier_m544E79984FB21C732A4514A2EFFC126ECAA22B66(NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0017:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_1 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_2 = (int32_t*)(&L_1->___Head);
		int32_t L_3;
		L_3 = VolatileRead(L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = __this->____slotsMask;
		V_2 = ((int32_t)(L_4&L_5));
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_6 = __this->____slots;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t* L_8 = (int32_t*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___SequenceNumber);
		int32_t L_9;
		L_9 = VolatileRead(L_8);
		int32_t L_10 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1))));
		int32_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject** L_12 = ___0_result;
		bool L_13 = ___1_resultUsed;
		if (L_13)
		{
			G_B6_0 = L_12;
			goto IL_005f;
		}
		G_B5_0 = L_12;
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_4;
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0070;
	}

IL_005f:
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_15 = __this->____slots;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		RuntimeObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Item;
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
	}

IL_0070:
	{
		*(RuntimeObject**)G_B7_1 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B7_1, (void*)G_B7_0);
		return (bool)1;
	}

IL_0077:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_19 = __this->____frozenForEnqueues;
		V_5 = L_19;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_20 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_21 = (int32_t*)(&L_20->___Tail);
		int32_t L_22;
		L_22 = VolatileRead(L_21);
		V_6 = L_22;
		int32_t L_23 = V_6;
		int32_t L_24 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_23, L_24))) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_26 = V_6;
		int32_t L_27;
		L_27 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_28 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_26, L_27)), L_28))) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}

IL_00ae:
	{
		RuntimeObject** L_29 = ___0_result;
		il2cpp_codegen_initobj(L_29, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_00b7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0017;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryEnqueue_mC0606A90F9CBCD06D9ED05EA760356F9A9A9AF84_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Tail);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t* L_7 = (int32_t*)(&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___SequenceNumber);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		int32_t L_10 = V_3;
		if (L_10)
		{
			goto IL_0082;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_11 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_12 = (int32_t*)(&L_11->___Tail);
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), L_14, NULL);
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0088;
		}
	}
	{
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_17 = __this->____slots;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ___0_item;
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Item = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Item), (void*)L_19);
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_20 = __this->____slots;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t* L_22 = (int32_t*)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___SequenceNumber);
		int32_t L_23 = V_1;
		VolatileWrite(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)));
		return (bool)1;
	}

IL_0082:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_m689E7F271E2E30F14E6576697F99A07803DA3FE4_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, int32_t ___0_boundedLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_boundedLength;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_1 = (SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444*)(SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->____slots = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_1);
		int32_t L_2 = ___0_boundedLength;
		__this->____slotsMask = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		V_0 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_8 = __this->____slots;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_Capacity_m92681141D9BB3D36E7FD591BC9C0D7D397FCFA6A_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_0 = __this->____slots;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m8EC2B0554DDCE54682CBC146A7831D373B1EDFFF_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_0 = __this->____slots;
		NullCheck(L_0);
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment_EnsureFrozenForEnqueues_mC82E3164D3C343DA553195673B25AAEAB3F65003_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____frozenForEnqueues;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		__this->____frozenForEnqueues = (bool)1;
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0017:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_1 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_2 = (int32_t*)(&L_1->___Tail);
		int32_t L_3;
		L_3 = VolatileRead(L_2);
		V_1 = L_3;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_4 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_5 = (int32_t*)(&L_4->___Tail);
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), L_8, NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0017;
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryDequeue_m6BAB74EC08A4DC03DBFA211358808BD7C6BA0E14_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, Il2CppFullySharedGenericAny* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Head);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VolatileRead((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))));
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1))));
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_00b7;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_10 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_11 = (int32_t*)(&L_10->___Head);
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_13, NULL);
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_16 = ___0_item;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_17 = __this->____slots;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_16, L_19, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)L_16, (void*)L_19);
		bool* L_20 = (bool*)(&__this->____preservedForObservation);
		bool L_21;
		L_21 = VolatileRead(L_20);
		if (L_21)
		{
			goto IL_00b5;
		}
	}
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_22 = __this->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)))), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_24 = __this->____slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = V_1;
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_27 = __this->____slots;
		NullCheck(L_27);
		VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length)))));
	}

IL_00b5:
	{
		return (bool)1;
	}

IL_00b7:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_29 = __this->____frozenForEnqueues;
		V_4 = L_29;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_30 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_31 = (int32_t*)(&L_30->___Tail);
		int32_t L_32;
		L_32 = VolatileRead(L_31);
		V_5 = L_32;
		int32_t L_33 = V_5;
		int32_t L_34 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, L_34))) <= ((int32_t)0)))
		{
			goto IL_00ee;
		}
	}
	{
		bool L_35 = V_4;
		if (!L_35)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_36 = V_5;
		int32_t L_37;
		L_37 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_38 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_36, L_37)), L_38))) > ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}

IL_00ee:
	{
		Il2CppFullySharedGenericAny* L_39 = ___0_item;
		il2cpp_codegen_initobj(L_39, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		return (bool)0;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryPeek_mAF54A1ABF5360F1D49BBF8355164E795F00B0835_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, Il2CppFullySharedGenericAny* ___0_result, bool ___1_resultUsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	const Il2CppFullySharedGenericAny L_16 = L_13;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	memset(V_4, 0, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	bool V_5 = false;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericAny* G_B6_0 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	memset(G_B7_0, 0, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	Il2CppFullySharedGenericAny* G_B7_1 = NULL;
	{
		bool L_0 = ___1_resultUsed;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		__this->____preservedForObservation = (bool)1;
		Interlocked_MemoryBarrier_m544E79984FB21C732A4514A2EFFC126ECAA22B66(NULL);
	}

IL_000f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0017:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_1 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_2 = (int32_t*)(&L_1->___Head);
		int32_t L_3;
		L_3 = VolatileRead(L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = __this->____slotsMask;
		V_2 = ((int32_t)(L_4&L_5));
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_6 = __this->____slots;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VolatileRead((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))));
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1))));
		int32_t L_10 = V_3;
		if (L_10)
		{
			goto IL_0077;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_11 = ___0_result;
		bool L_12 = ___1_resultUsed;
		if (L_12)
		{
			G_B6_0 = ((Il2CppFullySharedGenericAny*)L_11);
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)L_11);
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_memcpy(L_13, V_4, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_memcpy(G_B7_0, L_13, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		G_B7_1 = ((Il2CppFullySharedGenericAny*)G_B5_0);
		goto IL_0070;
	}

IL_005f:
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_14 = __this->____slots;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0)), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_memcpy(G_B7_0, L_16, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		G_B7_1 = ((Il2CppFullySharedGenericAny*)G_B6_0);
	}

IL_0070:
	{
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)G_B7_1, G_B7_0, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(Il2CppFullySharedGenericAny*)G_B7_1, (void*)G_B7_0);
		return (bool)1;
	}

IL_0077:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_18 = __this->____frozenForEnqueues;
		V_5 = L_18;
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_19 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_20 = (int32_t*)(&L_19->___Tail);
		int32_t L_21;
		L_21 = VolatileRead(L_20);
		V_6 = L_21;
		int32_t L_22 = V_6;
		int32_t L_23 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, L_23))) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_25 = V_6;
		int32_t L_26;
		L_26 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_27 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_25, L_26)), L_27))) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}

IL_00ae:
	{
		Il2CppFullySharedGenericAny* L_28 = ___0_result;
		il2cpp_codegen_initobj(L_28, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		return (bool)0;
	}

IL_00b7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0017;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Segment_TryEnqueue_mA7EA4BC2F27AF97D51E9BE4828C4A2C6D62D43FD_gshared (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_0008:
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_0 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_1 = (int32_t*)(&L_0->___Tail);
		int32_t L_2;
		L_2 = VolatileRead(L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = __this->____slotsMask;
		V_2 = ((int32_t)(L_3&L_4));
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_5 = __this->____slots;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VolatileRead((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))));
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_0082;
		}
	}
	{
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_10 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&__this->____headAndTail);
		int32_t* L_11 = (int32_t*)(&L_10->___Tail);
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_13, NULL);
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0088;
		}
	}
	{
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_16 = __this->____slots;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		il2cpp_codegen_write_instance_field_data(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_18, SizeOf_T_tF1AD3B4BF29C34CE1B3E4E12787F926FD640211B);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_19 = __this->____slots;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = V_1;
		VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1)))), ((int32_t)il2cpp_codegen_add(L_21, 1)));
		return (bool)1;
	}

IL_0082:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_il2cpp_TypeInfo_var);
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_0), NULL);
		goto IL_0008;
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
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_Multicast(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* currentDelegate = reinterpret_cast<SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenStaticInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedStaticInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedInstInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInstInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenVirtualInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInterfaceInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericVirtualInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_container, ___1_value);
}
void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericInterfaceInvoker(SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	GenericInterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(method, (RuntimeObject*)___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction__ctor_m1583BFB0B3D1C7C1E59D54D83E6A0B539690760D_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetClassValueAction_Invoke_mD793E79E4B2D7EE8A74A6A7C0854491B9063F00A_gshared (SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetElementProperty_get_Name_mC7FA01CDE2DF4F326FED2443263DD4C00F789AA2_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	{
		String_t* L_1;
		L_1 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_0, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetElementProperty__ctor_m113D7183F4BF3274D3F50AAC84D07FAA974233E1_gshared (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetPropertyBagBase_2__ctor_m649EC64E71E2806820C40AECE38739D04311DE79_gshared (SetPropertyBagBase_2_t9148CA09D4A212A82F0DEC9E6A8C41B7B0A1B8FF* __this, const RuntimeMethod* method) 
{
	{
		SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1* L_0 = (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (SetElementProperty_tD32144938E8C2B3852669AF6CB12C17FAB5056C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___m_Property = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Property), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		((  void (*) (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
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
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_Multicast(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* currentDelegate = reinterpret_cast<SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenStaticInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedStaticInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedInstInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenInstInvoker(SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetStructValueAction__ctor_m8C741F85A542DF59D45F2951F1CE89AFF4DEC80A_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetStructValueAction_Invoke_mAB0772BDE2B78CA0683237A9B9EC4ED0A2DFF44F_gshared (SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_m97E8D90405CEA937FC90EE307EEC765797EF39FA_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1;
		L_1 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_4 = (SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91*)(SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m1E51D4BB2E3EFB7AAF0B637BBC1B18E114A14596_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_value;
		bool L_1;
		L_1 = Set_1_Find_mCBC8FCA2D5D54D31D81A60F04EE69A5FC7936870(__this, L_0, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Remove_mB60BF7DDBBB20B839DA2FB650BC4F43547AE93EC_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_00fe;
	}

IL_0025:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_8 = __this->___slots;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_12 = __this->___comparer;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_13 = __this->___slots;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		Il2CppChar L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		Il2CppChar L_16 = ___0_value;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___buckets;
		int32_t L_20 = V_1;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_21 = __this->___slots;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1)));
		goto IL_00a1;
	}

IL_007f:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_26 = __this->___slots;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next = L_28;
	}

IL_00a1:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_29 = __this->___slots;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___hashCode = (-1);
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_31 = __this->___slots;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Il2CppChar* L_33 = (Il2CppChar*)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value);
		il2cpp_codegen_initobj(L_33, sizeof(Il2CppChar));
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_34 = __this->___slots;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = __this->___freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = V_3;
		__this->___freeList = L_37;
		return (bool)1;
	}

IL_00ea:
	{
		int32_t L_38 = V_3;
		V_2 = L_38;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_39 = __this->___slots;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_3 = L_41;
	}

IL_00fe:
	{
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_mCBC8FCA2D5D54D31D81A60F04EE69A5FC7936870_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppChar L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buckets;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0065;
	}

IL_001e:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_7 = __this->___slots;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___hashCode;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_12 = __this->___slots;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppChar L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___value;
		Il2CppChar L_15 = ___0_value;
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_11, L_14, L_15);
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_17 = __this->___slots;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___next;
		V_1 = L_19;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_21 = ___1_add;
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = __this->___freeList;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_23 = __this->___freeList;
		V_2 = L_23;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		__this->___freeList = L_26;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_27 = __this->___count;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_28 = __this->___slots;
		NullCheck(L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		Set_1_Resize_mF91026011328E50BA436D94348DE02AF46D42EFD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_29 = __this->___count;
		V_2 = L_29;
		int32_t L_30 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c3:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___buckets;
		NullCheck(L_32);
		V_3 = ((int32_t)(L_31%((int32_t)(((RuntimeArray*)L_32)->max_length))));
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_33 = __this->___slots;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = V_0;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___hashCode = L_35;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_36 = __this->___slots;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Il2CppChar L_38 = ___0_value;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___value = L_38;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_39 = __this->___slots;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___buckets;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_mF91026011328E50BA436D94348DE02AF46D42EFD_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_4 = (SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91*)(SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_5 = __this->___slots;
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_t12A0B0E2B7B30A593E514A89B14D5D20B4ACAB91* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_mAAF38A59ED92847B9B907DE41F4E81EC5E9C7CA9_gshared (Set_1_tCA6FDE67D0311D89FB0BE39F3CF32426F6F8C09F* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		Il2CppChar L_2 = ___0_value;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppChar >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_4 = (SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301*)(SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		bool L_1;
		L_1 = Set_1_Find_m38F4CBE716E6784546D718D806BF699B34BBC743(__this, L_0, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Remove_mFB03EE9AE4FDB92CCB833530A9BBB375FA86B52D_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_00fe;
	}

IL_0025:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_8 = __this->___slots;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_12 = __this->___comparer;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_13 = __this->___slots;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		int32_t L_16 = ___0_value;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___buckets;
		int32_t L_20 = V_1;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_21 = __this->___slots;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1)));
		goto IL_00a1;
	}

IL_007f:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_26 = __this->___slots;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next = L_28;
	}

IL_00a1:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_29 = __this->___slots;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___hashCode = (-1);
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_31 = __this->___slots;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t* L_33 = (int32_t*)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value);
		il2cpp_codegen_initobj(L_33, sizeof(int32_t));
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_34 = __this->___slots;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = __this->___freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = V_3;
		__this->___freeList = L_37;
		return (bool)1;
	}

IL_00ea:
	{
		int32_t L_38 = V_3;
		V_2 = L_38;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_39 = __this->___slots;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_3 = L_41;
	}

IL_00fe:
	{
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m38F4CBE716E6784546D718D806BF699B34BBC743_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buckets;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0065;
	}

IL_001e:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_7 = __this->___slots;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___hashCode;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_12 = __this->___slots;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___value;
		int32_t L_15 = ___0_value;
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_11, L_14, L_15);
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_17 = __this->___slots;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___next;
		V_1 = L_19;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_21 = ___1_add;
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = __this->___freeList;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_23 = __this->___freeList;
		V_2 = L_23;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		__this->___freeList = L_26;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_27 = __this->___count;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_28 = __this->___slots;
		NullCheck(L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		Set_1_Resize_mE05E14DAF4F3293B4FFF6AB25FA043E28986C483(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_29 = __this->___count;
		V_2 = L_29;
		int32_t L_30 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c3:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___buckets;
		NullCheck(L_32);
		V_3 = ((int32_t)(L_31%((int32_t)(((RuntimeArray*)L_32)->max_length))));
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_33 = __this->___slots;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = V_0;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___hashCode = L_35;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_36 = __this->___slots;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		int32_t L_38 = ___0_value;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___value = L_38;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_39 = __this->___slots;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___buckets;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_mE05E14DAF4F3293B4FFF6AB25FA043E28986C483_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_4 = (SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301*)(SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_5 = __this->___slots;
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m7A0FE35F90C191925E60A44C049FB18C2E106BAB_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		int32_t L_2 = ___0_value;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_4 = (SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F*)(SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5(__this, L_0, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Remove_m9B33C129D32C29739FEB5D6AF108675ABF0876FC_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_00fe;
	}

IL_0025:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_8 = __this->___slots;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_12 = __this->___comparer;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_13 = __this->___slots;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		RuntimeObject* L_16 = ___0_value;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___buckets;
		int32_t L_20 = V_1;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_21 = __this->___slots;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1)));
		goto IL_00a1;
	}

IL_007f:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_26 = __this->___slots;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next;
		((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next = L_28;
	}

IL_00a1:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_29 = __this->___slots;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___hashCode = (-1);
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_31 = __this->___slots;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		RuntimeObject** L_33 = (RuntimeObject**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value);
		il2cpp_codegen_initobj(L_33, sizeof(RuntimeObject*));
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_34 = __this->___slots;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = __this->___freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = V_3;
		__this->___freeList = L_37;
		return (bool)1;
	}

IL_00ea:
	{
		int32_t L_38 = V_3;
		V_2 = L_38;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_39 = __this->___slots;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next;
		V_3 = L_41;
	}

IL_00fe:
	{
		int32_t L_42 = V_3;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m0D913EFD47DC863BE45C62690FAA7384426488F5_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		int32_t L_1;
		L_1 = Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buckets;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0065;
	}

IL_001e:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_7 = __this->___slots;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___hashCode;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_12 = __this->___slots;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___value;
		RuntimeObject* L_15 = ___0_value;
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_11, L_14, L_15);
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_17 = __this->___slots;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___next;
		V_1 = L_19;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_21 = ___1_add;
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = __this->___freeList;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_23 = __this->___freeList;
		V_2 = L_23;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		__this->___freeList = L_26;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_27 = __this->___count;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_28 = __this->___slots;
		NullCheck(L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_29 = __this->___count;
		V_2 = L_29;
		int32_t L_30 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c3:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___buckets;
		NullCheck(L_32);
		V_3 = ((int32_t)(L_31%((int32_t)(((RuntimeArray*)L_32)->max_length))));
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_33 = __this->___slots;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = V_0;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___hashCode = L_35;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_36 = __this->___slots;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		RuntimeObject* L_38 = ___0_value;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___value = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___value), (void*)L_38);
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_39 = __this->___slots;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___buckets;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___next = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m412FA20937FDCB14C2E2B845F49F08B867C44BF2_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_4 = (SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F*)(SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_5 = __this->___slots;
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m65081DB1D2FE097D384414C9BBCD303E9A90725D_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mED0A938761C7C57601C916255E86AF3FCCCEDD4E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_mA59F3D323F7969614AEF4DAEC1546F94E059B3E2_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_0: *(void**)L_0), (bool)1);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Remove_mAF8BF42BC789F150262FCB37F15A3C4BE3FEEA09_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_00fe;
	}

IL_0025:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_8 = __this->___slots;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_12 = __this->___comparer;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_13 = __this->___slots;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1)), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___buckets;
		int32_t L_20 = V_1;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_21 = __this->___slots;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1)));
		goto IL_00a1;
	}

IL_007f:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_26 = __this->___slots;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), L_28);
	}

IL_00a1:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_29 = __this->___slots;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0), (-1));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_31 = __this->___slots;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1)))), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_33 = __this->___slots;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = __this->___freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), L_35);
		int32_t L_36 = V_3;
		__this->___freeList = L_36;
		return (bool)1;
	}

IL_00ea:
	{
		int32_t L_37 = V_3;
		V_2 = L_37;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_38 = __this->___slots;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		V_3 = L_40;
	}

IL_00fe:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buckets;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0065;
	}

IL_001e:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_7 = __this->___slots;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_12 = __this->___slots;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1)), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_15: *(void**)L_15));
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_17 = __this->___slots;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		V_1 = L_19;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_21 = ___1_add;
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = __this->___freeList;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_23 = __this->___freeList;
		V_2 = L_23;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		__this->___freeList = L_26;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_27 = __this->___count;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_28 = __this->___slots;
		NullCheck(L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_29 = __this->___count;
		V_2 = L_29;
		int32_t L_30 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c3:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___buckets;
		NullCheck(L_32);
		V_3 = ((int32_t)(L_31%((int32_t)(((RuntimeArray*)L_32)->max_length))));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_33 = __this->___slots;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0), L_35);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_36 = __this->___slots;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_write_instance_field_data(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1), L_38, SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_39 = __this->___slots;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___buckets;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_5 = __this->___slots;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_m3A0A8B48CCEDA1F58DC2A1E45D890DDA33593187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_format, Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		int32_t L_0 = ___3_maxSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_4 = ___2_initialSize;
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_4, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		int32_t L_6 = ___3_maxSize;
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_6, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_8 = ___1_convert;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m74AF0FF1FF5C010A746B8A0457EA28EECAC060CC_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		bool L_1 = ___0_disposing;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, NULL);
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_4 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_4, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003c;
		}
		G_B2_0 = L_6;
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
	}

IL_0042:
	{
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_004a:
	{
		bool L_7 = ___0_disposing;
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_m6F7C1265092E1DD652F00F7D10EFEE74C6CBF95B_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_m41EB00B8DA1E503EF573F59F4DD6DDD178D131B7_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_2 = ___2_uvs;
		il2cpp_codegen_initobj(L_2, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_001e:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_3 = __this->___m_Allocator;
		V_2 = (bool)((((RuntimeObject*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->___m_InitialSize;
		int32_t L_6 = __this->___m_MaxSize;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_7 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_7, L_5, L_6, 0, NULL);
		__this->___m_Allocator = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_7);
	}

IL_0043:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_8 = __this->___m_Allocator;
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		NullCheck(L_8);
		bool L_12;
		L_12 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_8, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_005c:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_15 = ___2_uvs;
		int32_t L_16;
		L_16 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_15, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_17 = ___2_uvs;
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_17, NULL);
		int32_t L_19 = ___0_width;
		int32_t L_20 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_21;
		memset((&L_21), 0, sizeof(L_21));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_21), L_16, L_18, L_19, L_20, NULL);
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_14 = L_21;
		ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = (bool)1;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_mCD04D40793D8A3A83934B5C3D549E5F070B226CA_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0061;
	}

IL_0015:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_2 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		NullCheck(L_5);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_6;
		L_6 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Texels = L_6;
	}

IL_003a:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_7 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		int32_t L_8 = ___0_x;
		int32_t L_9 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_12 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_inline(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (L_7)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_11)))), (L_14));
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m259E4530800035DF1625C5055FDFE7574680AECE_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0054;
	}

IL_0015:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_4 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0054;
	}

IL_003a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, (bool)0, (bool)0, NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_8 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
	}

IL_0054:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		V_0 = L_1;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0136;
	}

IL_0058:
	{
		V_2 = (bool)1;
	}

IL_005b:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_14, NULL);
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_16 = __this->___m_Allocator;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_16, NULL);
		int32_t L_18 = __this->___m_Format;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_19, L_15, L_17, L_18, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_22 = L_21;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_6 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_23, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20, L_24, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_20;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (int32_t)((int32_t)61), NULL);
		V_3 = L_25;
		bool L_26 = V_2;
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0117;
		}
	}
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_28 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_29;
		L_29 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_29)
		{
			goto IL_00d0;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___m_Texture;
		NullCheck(L_30);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_31;
		L_31 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B11_0 = L_31;
		goto IL_00d6;
	}

IL_00d0:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_32 = __this->___m_Texels;
		G_B11_0 = L_32;
	}

IL_00d6:
	{
		V_8 = G_B11_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_3;
		NullCheck(L_33);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_34;
		L_34 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_9 = L_34;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_35 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_40 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4(L_35, L_37, L_39, L_40, L_42, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_45 = V_9;
		__this->___m_Texels = L_45;
		goto IL_0123;
	}

IL_0117:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_46 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_46, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
	}

IL_0123:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_47, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_3;
		__this->___m_Texture = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_48);
	}

IL_0136:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___5_dstHeight;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___1_srcWidth;
		int32_t L_9 = ___2_srcHeight;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		V_3 = 0;
		V_4 = 0;
		int32_t L_10 = ___1_srcWidth;
		V_5 = L_10;
		goto IL_0068;
	}

IL_002f:
	{
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&___0_src))->___m_Buffer, L_12);
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&___3_dst))->___m_Buffer, L_11, (L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_5;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___1_srcWidth;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
	}

IL_0068:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_002f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_mD11645EBACDBF20EA5720F446D814A53D8EF54A0_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, int32_t ___0_format, Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		int32_t L_0 = ___3_maxSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_4 = ___2_initialSize;
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_4, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		int32_t L_6 = ___3_maxSize;
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_6, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* L_8 = ___1_convert;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m729ABD394D37595D6832793573B1898C16B562DD_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		bool L_1 = ___0_disposing;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, NULL);
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_4, sizeof(NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003c;
		}
		G_B2_0 = L_6;
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
	}

IL_0042:
	{
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_004a:
	{
		bool L_7 = ___0_disposing;
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_mD4DAD12BFD12AF9B55AA9BB820799A4BAA7D72C1_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_m4DBEF0B4048181BA13604EDC55D2C3F4DA33A173_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_2 = ___2_uvs;
		il2cpp_codegen_initobj(L_2, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_001e:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_3 = __this->___m_Allocator;
		V_2 = (bool)((((RuntimeObject*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->___m_InitialSize;
		int32_t L_6 = __this->___m_MaxSize;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_7 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_7, L_5, L_6, 0, NULL);
		__this->___m_Allocator = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_7);
	}

IL_0043:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_8 = __this->___m_Allocator;
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		NullCheck(L_8);
		bool L_12;
		L_12 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_8, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_005c:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_15 = ___2_uvs;
		int32_t L_16;
		L_16 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_15, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_17 = ___2_uvs;
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_17, NULL);
		int32_t L_19 = ___0_width;
		int32_t L_20 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_21;
		memset((&L_21), 0, sizeof(L_21));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_21), L_16, L_18, L_19, L_20, NULL);
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_14 = L_21;
		ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = (bool)1;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_mDA6FEEA87529E7AE103D36CD412D87F64F335A6B_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0061;
	}

IL_0015:
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_2 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		NullCheck(L_5);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_6;
		L_6 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Texels = L_6;
	}

IL_003a:
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_7 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		int32_t L_8 = ___0_x;
		int32_t L_9 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* L_12 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_12);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		L_14 = Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_inline(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		IL2CPP_NATIVEARRAY_SET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (L_7)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_11)))), (L_14));
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m36C84E9B6039B54FA30E6301F8FD919CED4C5EB5_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0054;
	}

IL_0015:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_4 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0054;
	}

IL_003a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, (bool)0, (bool)0, NULL);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_8 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D));
	}

IL_0054:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m3A11FECC9241A3AC0AA5E2242F108FB2F8D6CA0A_gshared (ShaderInfoStorage_1_tD51663F3CDEDF587A26C0FE2DABE674C3122A1F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		V_0 = L_1;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0136;
	}

IL_0058:
	{
		V_2 = (bool)1;
	}

IL_005b:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_14, NULL);
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_16 = __this->___m_Allocator;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_16, NULL);
		int32_t L_18 = __this->___m_Format;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_19, L_15, L_17, L_18, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_22 = L_21;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_6 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_23, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20, L_24, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_20;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (int32_t)((int32_t)61), NULL);
		V_3 = L_25;
		bool L_26 = V_2;
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0117;
		}
	}
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_28 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		bool L_29;
		L_29 = NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_inline(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_29)
		{
			goto IL_00d0;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___m_Texture;
		NullCheck(L_30);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_31;
		L_31 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B11_0 = L_31;
		goto IL_00d6;
	}

IL_00d0:
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_32 = __this->___m_Texels;
		G_B11_0 = L_32;
	}

IL_00d6:
	{
		V_8 = G_B11_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_3;
		NullCheck(L_33);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_34;
		L_34 = Texture2D_GetRawTextureData_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m3F258FE3486B29D798DCFECF41E9845382EF5CC2(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_9 = L_34;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_35 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_40 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6(L_35, L_37, L_39, L_40, L_42, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_45 = V_9;
		__this->___m_Texels = L_45;
		goto IL_0123;
	}

IL_0117:
	{
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* L_46 = (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_46, sizeof(NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D));
	}

IL_0123:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_47, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_3;
		__this->___m_Texture = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_48);
	}

IL_0136:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m7346CD0CF2BF6F40780481549130C59DCDEFFDB6_gshared (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___5_dstHeight;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___1_srcWidth;
		int32_t L_9 = ___2_srcHeight;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		V_3 = 0;
		V_4 = 0;
		int32_t L_10 = ___1_srcWidth;
		V_5 = L_10;
		goto IL_0068;
	}

IL_002f:
	{
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&___0_src))->___m_Buffer, L_12);
		IL2CPP_NATIVEARRAY_SET_ITEM(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, ((&___3_dst))->___m_Buffer, L_11, (L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_5;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___1_srcWidth;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
	}

IL_0068:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_002f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_mFE6521060564BB839835FA902AA1D9BA02F85E86_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_format, Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		int32_t L_0 = ___3_maxSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_4 = ___2_initialSize;
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_4, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		int32_t L_6 = ___3_maxSize;
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A(L_6, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_8 = ___1_convert;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m3A95983FB76FC8AFBD0EB90D9B7FAD40536E05C4_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		bool L_1 = ___0_disposing;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, NULL);
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_4, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003c;
		}
		G_B2_0 = L_6;
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
	}

IL_0042:
	{
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_004a:
	{
		bool L_7 = ___0_disposing;
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_m6C37ECA9DABA5D261E358801335376BE5A4ECE4B_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_mF0004D550D493D1C12BB4B259293F1DD082BEC88_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_2 = ___2_uvs;
		il2cpp_codegen_initobj(L_2, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_001e:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_3 = __this->___m_Allocator;
		V_2 = (bool)((((RuntimeObject*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->___m_InitialSize;
		int32_t L_6 = __this->___m_MaxSize;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_7 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_7, L_5, L_6, 0, NULL);
		__this->___m_Allocator = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_7);
	}

IL_0043:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_8 = __this->___m_Allocator;
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		NullCheck(L_8);
		bool L_12;
		L_12 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_8, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_005c:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_15 = ___2_uvs;
		int32_t L_16;
		L_16 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_15, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_17 = ___2_uvs;
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_17, NULL);
		int32_t L_19 = ___0_width;
		int32_t L_20 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_21;
		memset((&L_21), 0, sizeof(L_21));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_21), L_16, L_18, L_19, L_20, NULL);
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_14 = L_21;
		((  void (*) (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = (bool)1;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_m5F6938D6AD91CBA99FD3A575B4E1D2CB02669A89_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	bool V_0 = false;
	bool V_1 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0061;
	}

IL_0015:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_3;
		L_3 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		NullCheck(L_5);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Texels = L_6;
	}

IL_003a:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		int32_t L_8 = ___0_x;
		int32_t L_9 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_12 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_12);
		InvokerActionInvoker2< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_12, L_13, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_11)))), L_14);
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m9ACE3AFEC8022BA9756E8A10C8FB4F8D058FBBDA_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0054;
	}

IL_0015:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_5;
		L_5 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0054;
	}

IL_003a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, (bool)0, (bool)0, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
	}

IL_0054:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		V_0 = L_1;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0136;
	}

IL_0058:
	{
		V_2 = (bool)1;
	}

IL_005b:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_14, NULL);
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_16 = __this->___m_Allocator;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_16, NULL);
		int32_t L_18 = __this->___m_Format;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_19, L_15, L_17, L_18, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_22 = L_21;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_6 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_23, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20, L_24, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_20;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (int32_t)((int32_t)61), NULL);
		V_3 = L_25;
		bool L_26 = V_2;
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0117;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_28 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_29;
		L_29 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_29)
		{
			goto IL_00d0;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = __this->___m_Texture;
		NullCheck(L_30);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_31;
		L_31 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B11_0 = L_31;
		goto IL_00d6;
	}

IL_00d0:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_32 = __this->___m_Texels;
		G_B11_0 = L_32;
	}

IL_00d6:
	{
		V_8 = G_B11_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_3;
		NullCheck(L_33);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_34;
		L_34 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_9 = L_34;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_35 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_36);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_38);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_40 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_43);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_35, L_37, L_39, L_40, L_42, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_45 = V_9;
		__this->___m_Texels = L_45;
		goto IL_0123;
	}

IL_0117:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_46 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_46, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
	}

IL_0123:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_47, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_3;
		__this->___m_Texture = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_48);
	}

IL_0136:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___5_dstHeight;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___1_srcWidth;
		int32_t L_9 = ___2_srcHeight;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		V_3 = 0;
		V_4 = 0;
		int32_t L_10 = ___1_srcWidth;
		V_5 = L_10;
		goto IL_0068;
	}

IL_002f:
	{
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), (&___0_src), L_12, (Il2CppFullySharedGenericStruct*)L_13);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (&___3_dst), L_11, L_13);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_5;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___1_srcWidth;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
	}

IL_0068:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_002f;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*>(__this + _offset);
	SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_inline(_thisAdjusted, ___0_buffer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____buffer;
		intptr_t* L_1;
		L_1 = UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*>(__this + _offset);
	intptr_t* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*>(__this + _offset);
	SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline(_thisAdjusted, ___0_buffer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____buffer;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_mDF4021A13BC967B8F2160B8A016872E7025447E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_m61792EA8BEDC5EB839C9BE5113E73DE5E2C17C91_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortEnumEqualityComparer_1_GetHashCode_m3DD7EC97F7CC8C9A3747EFB17278B3B4AF22E8E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
	int16_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), NULL, L_0);
		V_0 = ((int16_t)L_1);
		int32_t L_2;
		L_2 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_0), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMonitor__ctor_m019D0739DA6140C89353B3919D5E0D28D96840C0_gshared (SimpleMonitor_t225944DC7DA5C8CD8310E408D52EC07FF6A140CA* __this, ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2* L_0 = ___0_collection;
		__this->____collection = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collection), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMonitor_Dispose_mD67A18891000F936CF98CD0044F2F2D015A8B96B_gshared (SimpleMonitor_t225944DC7DA5C8CD8310E408D52EC07FF6A140CA* __this, const RuntimeMethod* method) 
{
	{
		ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2* L_0 = __this->____collection;
		ObservableCollection_1_t4CB200E1C6797EA9D051C4223CD2A00E8C0C48E2* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____blockReentrancyCount;
		NullCheck(L_1);
		L_1->____blockReentrancyCount = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMonitor__ctor_mD93ACDCB7B56A28F873B7B636C41996B05B7A71D_gshared (SimpleMonitor_tB9FB1EDE482325676967121CD31A0F99524EEF7F* __this, ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8* L_0 = ___0_collection;
		__this->____collection = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collection), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMonitor_Dispose_m033BC33011E9A5F9B4076AFAEBDCB12DD701243C_gshared (SimpleMonitor_tB9FB1EDE482325676967121CD31A0F99524EEF7F* __this, const RuntimeMethod* method) 
{
	{
		ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8* L_0 = __this->____collection;
		ObservableCollection_1_t88F7DA7F7087023443CFAD5538FB4B4B561318A8* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____blockReentrancyCount;
		NullCheck(L_1);
		L_1->____blockReentrancyCount = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
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
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE5D19FF7B2CED496CE41333FF842F490D1F14C03_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int32_t>(L_10);
		int32_t L_12 = ___1_start;
		int32_t* L_13;
		L_13 = il2cpp_unsafe_add<int32_t,int32_t>(L_11, L_12);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m9272911ACF4FC0A82F6053A0DE22CEBC8C10D4E0_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_GetPinnableReference_mF920821F83971F1D7D3E554CAD596D5902754811_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m36EEDEB219123208E625AC1446BC03AB5A21A001_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_0 = __this->____pointer;
		V_0 = L_0;
		int32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0911D9EBB79D74E3F1442C095DEDB346CBE87340_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4 = __this->____pointer;
		V_2 = L_4;
		int32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_12 = __this->____pointer;
		V_2 = L_12;
		int32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int32_t L_19 = ___0_value;
		*(int32_t*)L_18 = L_19;
		int32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int32_t L_24 = ___0_value;
		*(int32_t*)L_23 = L_24;
		int32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int32_t L_29 = ___0_value;
		*(int32_t*)L_28 = L_29;
		int32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int32_t L_34 = ___0_value;
		*(int32_t*)L_33 = L_34;
		int32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int32_t L_39 = ___0_value;
		*(int32_t*)L_38 = L_39;
		int32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int32_t L_44 = ___0_value;
		*(int32_t*)L_43 = L_44;
		int32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int32_t L_49 = ___0_value;
		*(int32_t*)L_48 = L_49;
		int32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int32_t L_54 = ___0_value;
		*(int32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int32_t L_64 = ___0_value;
		*(int32_t*)L_63 = L_64;
		int32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int32_t L_69 = ___0_value;
		*(int32_t*)L_68 = L_69;
		int32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int32_t L_74 = ___0_value;
		*(int32_t*)L_73 = L_74;
		int32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int32_t L_79 = ___0_value;
		*(int32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int32_t L_85 = ___0_value;
		*(int32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_span;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1 = L_0.____pointer;
		V_0 = L_1;
		int32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m71CB64722D92C563993B18D00317C1A3929D259B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_mEE3E0DF3B0F4D4D2A6CE3587C2919CD859EF4973_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1756B3F9D59F21477044E6EE24B20B51BB216F31_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBB9141DEAC1EA44851C84E0A12B1A3136460B0D4_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88D9BE6D0BF5FDFDF1EC95538768786944AA873A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint16_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint16_t>(L_10);
		int32_t L_12 = ___1_start;
		uint16_t* L_13;
		L_13 = il2cpp_unsafe_add<uint16_t,int32_t>(L_11, L_12);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_get_Item_m51DF8F9B68EB998FCFF5DE6A753DEC3D3BE61D30_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_GetPinnableReference_m2084184F17A5461CA1BD4D2364E1423E83775299_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint16_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint16_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0935AE3C29451F430E10E1C162F4B2767137CC57_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_0 = __this->____pointer;
		V_0 = L_0;
		uint16_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint16_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m1739BAAE7DCB30488B41A98BE7F70F2C3E2A683B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint16_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint16_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4 = __this->____pointer;
		V_2 = L_4;
		uint16_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_12 = __this->____pointer;
		V_2 = L_12;
		uint16_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint16_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint16_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint16_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint16_t L_19 = ___0_value;
		*(uint16_t*)L_18 = L_19;
		uint16_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint16_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint16_t L_24 = ___0_value;
		*(uint16_t*)L_23 = L_24;
		uint16_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint16_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint16_t L_29 = ___0_value;
		*(uint16_t*)L_28 = L_29;
		uint16_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint16_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint16_t L_34 = ___0_value;
		*(uint16_t*)L_33 = L_34;
		uint16_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint16_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint16_t L_39 = ___0_value;
		*(uint16_t*)L_38 = L_39;
		uint16_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint16_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint16_t L_44 = ___0_value;
		*(uint16_t*)L_43 = L_44;
		uint16_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint16_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint16_t L_49 = ___0_value;
		*(uint16_t*)L_48 = L_49;
		uint16_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint16_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint16_t L_54 = ___0_value;
		*(uint16_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint16_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint16_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint16_t L_64 = ___0_value;
		*(uint16_t*)L_63 = L_64;
		uint16_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint16_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint16_t L_69 = ___0_value;
		*(uint16_t*)L_68 = L_69;
		uint16_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint16_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint16_t L_74 = ___0_value;
		*(uint16_t*)L_73 = L_74;
		uint16_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint16_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint16_t L_79 = ___0_value;
		*(uint16_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint16_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint16_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint16_t L_85 = ___0_value;
		*(uint16_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m1E3344EA531D3CEBB2D498C960EA1E11D3042E89_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_0 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m8B92037E39DBEC33F5EFF019B694C6F8422F6254_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_1 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F Span_1_op_Implicit_m2BCA68E89516F4E0AD7CF9A9513466D4837140F8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_0 = ___0_span;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1 = L_0.____pointer;
		V_0 = L_1;
		uint16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC92A31A501B7BC12A11981C1C3D653971D37E35C_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_m60CA4425F69A57B604820588F7299CE6056B9BF7_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_mD475695D1F124D1A5F0514CB93BF8B2D12FFF09A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint16_t* L_8;
		L_8 = il2cpp_unsafe_add<uint16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m658BC08F24940E68B344C2623996A8BAA8506DFF_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m0DD2A2BE777631909AB6BC8EB9C8C50A65227EF8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_op_Implicit_mDFEC7007D8B0366E7FB8FA350AC4D3F3EAFB4EA7_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m660EEF593C35EC36D687474C6F23E166CD9F31D9_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint32_t>(L_10);
		int32_t L_12 = ___1_start;
		uint32_t* L_13;
		L_13 = il2cpp_unsafe_add<uint32_t,int32_t>(L_11, L_12);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_1);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m02A8F30DBE1911D7E5357E864D231529455D1963_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_GetPinnableReference_m296F8EBB04F54E3973579C184284BEFAA947B759_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m2B78C0269CD984BA3EDE84E92E7D0405F534E396_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_0 = __this->____pointer;
		V_0 = L_0;
		uint32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m8EC6942077811D5BDD7FE56421443067FD9B57B8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4 = __this->____pointer;
		V_2 = L_4;
		uint32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_12 = __this->____pointer;
		V_2 = L_12;
		uint32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint32_t L_19 = ___0_value;
		*(uint32_t*)L_18 = L_19;
		uint32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint32_t L_24 = ___0_value;
		*(uint32_t*)L_23 = L_24;
		uint32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint32_t L_29 = ___0_value;
		*(uint32_t*)L_28 = L_29;
		uint32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint32_t L_34 = ___0_value;
		*(uint32_t*)L_33 = L_34;
		uint32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint32_t L_39 = ___0_value;
		*(uint32_t*)L_38 = L_39;
		uint32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint32_t L_44 = ___0_value;
		*(uint32_t*)L_43 = L_44;
		uint32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint32_t L_49 = ___0_value;
		*(uint32_t*)L_48 = L_49;
		uint32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint32_t L_54 = ___0_value;
		*(uint32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint32_t L_64 = ___0_value;
		*(uint32_t*)L_63 = L_64;
		uint32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint32_t L_69 = ___0_value;
		*(uint32_t*)L_68 = L_69;
		uint32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint32_t L_74 = ___0_value;
		*(uint32_t*)L_73 = L_74;
		uint32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint32_t L_79 = ___0_value;
		*(uint32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint32_t L_85 = ___0_value;
		*(uint32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m45ED9076CBEDB2D4CA30A83E16D9BEE75626A9FF_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44CEE930589FCECFE9020025FFB505DD707B2D5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 Span_1_op_Implicit_m030D7D0A16134F1819235F6051864FF9A776A1F6_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_0 = ___0_span;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD3E4D84FCE98C375E6C9F2162A57B2395B398873_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_m0F9C99478BF7174C4DDEA1889C51F3FA1B7A0234_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_mD2B8E011F70C9E2504AF31237A6738E6BDB321A5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Span_1_ToArray_m69464A7BA0B38D8637E326F94C6FBBB031DF39C4_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint32_t>(L_5);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_7 = __this->____pointer;
		V_0 = L_7;
		uint32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mBCA1DE3F35219C89B8834EC233C51D4CF12DF5A8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m8ADDE3CC62F09D09699842E5024D67145223201D_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_op_Implicit_m5689B5F42218BA135D8CF5E828BF56EFB7FF7FBD_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___1_start;
		if ((!(((uint32_t)L_12) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck((RuntimeArray*)L_15);
		uint8_t* L_16;
		L_16 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_15, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_16);
		int32_t L_18 = ___1_start;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_17, L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_20), L_19);
		__this->____pointer = L_20;
		int32_t L_21 = ___2_length;
		__this->____length = L_21;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m11A4E1CD4E1718E30A0C2DA5934B04EDE635A447_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = __this->____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		intptr_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<intptr_t>(L_2);
		int32_t L_4 = __this->____length;
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_6;
		L_6 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_3, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_4), ((int64_t)((int32_t)(L_5/L_6))))), NULL);
		return;
	}

IL_0034:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		uint8_t* L_9;
		L_9 = il2cpp_unsafe_as_ref<uint8_t>(L_8);
		int32_t L_10 = __this->____length;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_9, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_10), ((int64_t)L_11))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m6EAE11FECC435B38881A2D1F4D4575D178BCE162_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_19 = L_3;
	const Il2CppFullySharedGenericAny L_64 = L_3;
	const Il2CppFullySharedGenericAny L_85 = L_3;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_69 = L_24;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_74 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_79 = L_34;
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_44 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	uint32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_1, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppFullySharedGenericAny* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)V_1);
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppFullySharedGenericAny* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppFullySharedGenericAny* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_19, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_19);
		Il2CppFullySharedGenericAny* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppFullySharedGenericAny* L_23;
		L_23 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_23, L_24, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_23, (void*)L_24);
		Il2CppFullySharedGenericAny* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_28, L_29, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_28, (void*)L_29);
		Il2CppFullySharedGenericAny* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppFullySharedGenericAny* L_33;
		L_33 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, L_34, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)L_34);
		Il2CppFullySharedGenericAny* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppFullySharedGenericAny* L_38;
		L_38 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_39, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_39);
		Il2CppFullySharedGenericAny* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppFullySharedGenericAny* L_43;
		L_43 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_43, L_44, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_43, (void*)L_44);
		Il2CppFullySharedGenericAny* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppFullySharedGenericAny* L_48;
		L_48 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, L_49, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)L_49);
		Il2CppFullySharedGenericAny* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppFullySharedGenericAny* L_53;
		L_53 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_53, L_54, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_53, (void*)L_54);
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppFullySharedGenericAny* L_63;
		L_63 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_63, L_64, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_63, (void*)L_64);
		Il2CppFullySharedGenericAny* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppFullySharedGenericAny* L_68;
		L_68 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_68, L_69, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_68, (void*)L_69);
		Il2CppFullySharedGenericAny* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppFullySharedGenericAny* L_73;
		L_73 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_74, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_73, L_74, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_73, (void*)L_74);
		Il2CppFullySharedGenericAny* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppFullySharedGenericAny* L_78;
		L_78 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_79, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_78, L_79, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_78, (void*)L_79);
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppFullySharedGenericAny* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppFullySharedGenericAny* L_84;
		L_84 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		il2cpp_codegen_memcpy(L_85, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___0_value : &___0_value), SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_84, L_85, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_84, (void*)L_85);
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)))((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_destination;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_mC857EC48EAC26C4D9A5C6302BA08A7796020C8E1_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m40491EA378B979FB91CD7BC368CA95BE931D13F0_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3061054FFC5FFBF234FA34F5319A12C2E9241B3F_gshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0037;
	}

IL_0037:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_3);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6124823D76DBCB84B895045F4072C5D8BAD54418_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_11;
		L_11 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_10);
		int32_t L_12 = ___1_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_13;
		L_13 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_11, L_12);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_get_Item_mB5F50B0D20B3D8E944F96112B8B4DAC7D17650EA_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1;
		L_1 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m91ABCA1B4BF1AC38DEC21718D6A7A946A42A62EF_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_0 = __this->____pointer;
		V_0 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5F214A54E6119724209D9A6022CF24DDB9C02AF6_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_4 = __this->____pointer;
		V_2 = L_4;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_12 = __this->____pointer;
		V_2 = L_12;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_19 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_18 = L_19;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_24 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_23 = L_24;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_29 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_28 = L_29;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_34 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_33 = L_34;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_39 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_38 = L_39;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_44 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_43 = L_44;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_49 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_48 = L_49;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_54 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_64 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_63 = L_64;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_69 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_68 = L_69;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_74 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_73 = L_74;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_79 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_85 = ___0_value;
		*(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4A21D34A3385E3970F0A5816F70F7333A06BE56B_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_0 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m99A85634C362E5EB0DA6C2D017EBB178D32307F9_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___0_destination;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3 = L_2.____pointer;
		V_1 = L_3;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 Span_1_op_Implicit_m17AF33F5674C02E3D7679E066E81DB5609B84BAB_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_0 = ___0_span;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1 = L_0.____pointer;
		V_0 = L_1;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m981EF00CBB9E2175CE158EE6AF832867FCAB1BAE_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_1 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_Slice_m2BA372A81D74723E61E19017C77886B880B5BF29_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_2 = __this->____pointer;
		V_0 = L_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_Slice_mC2BFF8AEEE5C308DBAE92526A79182BA3523561E_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5 = __this->____pointer;
		V_0 = L_5;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = il2cpp_unsafe_add<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Span_1_ToArray_mB0599718A25BB507D329B31366909FD456AFCEA6_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_6;
		L_6 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_5);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_7 = __this->____pointer;
		V_0 = L_7;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m48D2E426B92CBE28782CF29BD703DF063CFF422D(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9F3E0520692B8B831C6629192F893B72EA9D95D2_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF597BBC608D68A57C8937FFFA10D01B1617B0349_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 Span_1_op_Implicit_m2562566D0096520B0F0B4642C72BCFA5460FFE30_gshared (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1__ctor_m835EE9E3B6A134B4BAB7901843AAF2E8FA962B8E_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_0);
		il2cpp_codegen_memory_barrier();
		__this->___m_array = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SparseArray_1_get_Current_m0FCEEF0118EEDEB25CD8A7FB6E38D1BBC12F86AF_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparseArray_1_Add_mFA82FEC4F7D90A91283709B10F5151F2A7C2ADF0_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;

IL_0000:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0097;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0097:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				V_3 = 0;
				goto IL_0083_1;
			}

IL_0019_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				int32_t L_7 = L_6;
				RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
				if (L_8)
				{
					goto IL_0039_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11 = ___0_e;
				VolatileWrite(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), L_11);
				int32_t L_12 = V_3;
				V_4 = L_12;
				goto IL_0098;
			}

IL_0039_1:
			{
				int32_t L_13 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
				NullCheck(L_14);
				if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1))))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				if ((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_15) == ((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16))))
				{
					goto IL_007f_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
				NullCheck(L_17);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)));
				V_5 = L_18;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_5;
				int32_t L_21 = V_3;
				Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_19, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_5;
				int32_t L_23 = V_3;
				RuntimeObject* L_24 = ___0_e;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (RuntimeObject*)L_24);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_5;
				il2cpp_codegen_memory_barrier();
				__this->___m_array = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_array), (void*)L_25);
				int32_t L_26 = V_3;
				V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_0098;
			}

IL_007f_1:
			{
				int32_t L_27 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_0083_1:
			{
				int32_t L_28 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_0;
				NullCheck(L_29);
				if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0000;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		int32_t L_30 = V_4;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparseArray_1_Remove_mC48EB2673EB8C6ABDA639D24E83B75A2F4189EB9_gshared (SparseArray_1_t8D77ECC0E534C3B1A8C7403D9BDAC38694EAF242* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___m_array;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006c;
					}
				}
				{
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0054_1;
			}

IL_0017_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				RuntimeObject* L_8 = ___0_e;
				if ((!(((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
				{
					goto IL_0050_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				int32_t L_10 = V_2;
				NullCheck(L_9);
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_11 = V_3;
				VolatileWrite(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), L_11);
				goto IL_006d;
			}

IL_0050_1:
			{
				int32_t L_12 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0054_1:
			{
				int32_t L_13 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___m_array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_14);
				if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = ___0_source;
		__this->____source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->____index = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458_AdjustorThunk (RuntimeObject* __this, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458(_thisAdjusted, ___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_size;
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(__this, L_0, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_size, SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* ___1_prev, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_0);
		__this->____elements = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_1);
		int32_t L_2 = ___0_size;
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = L_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = ___1_prev;
		il2cpp_codegen_memory_barrier();
		__this->____prev = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_get_Item_mEF1B53A93D46F6F69F18517CF5472F67BCE45C38_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VolatileRead(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayFragment_1_get_Prev_m549822EBEA5C7E59A7EAC7B83D621B72E822A8FA_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____prev;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SparselyPopulatedArrayFragment_1_SafeAtomicRemove_m41CC9DA2BF22A6BD80CE1F09B5F56031C6EE67FC_gshared (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* __this, int32_t ___0_index, RuntimeObject* ___1_expectedElement, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____elements;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = ___1_expectedElement;
		RuntimeObject* L_4;
		L_4 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_2, L_3);
		RuntimeObject* L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_0035;
		}
		G_B1_0 = L_5;
	}
	{
		int32_t L_6 = __this->____freeCount;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B2_0 = G_B1_0;
	}

IL_0035:
	{
		return G_B2_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SparselyPopulatedArray_1__ctor_m13D75BA18ED19BF0AE6E4AB201C66718D56D0643_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_initialSize;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m1BAEA22A2C2FD0C50376CEBFC7F3A024EE3C302E(L_1, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1;
		V_0 = L_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_2);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = V_0;
		__this->____head = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____head), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArray_1_get_Tail_m28175FF31A3507C7DDE945D58B2ADEA01D07B64C_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D SparselyPopulatedArray_1_Add_mE99CA2479CB966676495F0908849E6ADE8C79CDB_gshared (SparselyPopulatedArray_1_t127D3C1977D038D143CA5A6CDD74A71117B5A614* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) 
{
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_1 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B15_0 = NULL;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* G_B16_1 = NULL;
	int32_t G_B24_0 = 0;

IL_0000:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____tail;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		goto IL_001d;
	}

IL_000b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_1 = V_0;
		NullCheck(L_1);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_2 = L_1->____next;
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_3 = L_2;
		V_0 = L_3;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_3);
	}

IL_001d:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_4 = V_0;
		NullCheck(L_4);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_5 = L_4->____next;
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_6 = V_0;
		V_1 = L_6;
		goto IL_0115;
	}

IL_002e:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_9 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_10);
		il2cpp_codegen_memory_barrier();
		L_10->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_004b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->____freeCount;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)-10))))
		{
			goto IL_010c;
		}
	}

IL_0065:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SparselyPopulatedArrayFragment_1_get_Length_m2F77B48EDD934ED6586E559645752EB229677D27(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_3 = L_17;
		int32_t L_18 = V_3;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->____freeCount;
		il2cpp_codegen_memory_barrier();
		int32_t L_21 = V_3;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, L_20))%L_21));
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		V_4 = 0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_23 = V_1;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_24 = L_23;
		NullCheck(L_24);
		int32_t L_25 = L_24->____freeCount;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_24);
		il2cpp_codegen_memory_barrier();
		L_24->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0094:
	{
		V_5 = 0;
		goto IL_0107;
	}

IL_0099:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_3;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, L_27))%L_28));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_29 = V_1;
		NullCheck(L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29->____elements;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if (L_33)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_34 = V_1;
		NullCheck(L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34->____elements;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		RuntimeObject* L_37 = ___0_element;
		il2cpp_codegen_initobj((&V_7), sizeof(RuntimeObject*));
		RuntimeObject* L_38 = V_7;
		RuntimeObject* L_39;
		L_39 = InterlockedCompareExchangeImpl<RuntimeObject*>(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), L_37, L_38);
		if (L_39)
		{
			goto IL_0101;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->____freeCount;
		il2cpp_codegen_memory_barrier();
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_42 = V_1;
		int32_t L_43 = V_8;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			G_B15_0 = L_42;
			goto IL_00ef;
		}
		G_B14_0 = L_42;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00f1;
	}

IL_00ef:
	{
		int32_t L_44 = V_8;
		G_B16_0 = L_44;
		G_B16_1 = G_B15_0;
	}

IL_00f1:
	{
		NullCheck(G_B16_1);
		il2cpp_codegen_memory_barrier();
		G_B16_1->____freeCount = G_B16_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_45 = V_1;
		int32_t L_46 = V_6;
		SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D L_47;
		memset((&L_47), 0, sizeof(L_47));
		SparselyPopulatedArrayAddInfo_1__ctor_m323E378EC0EE0C48A24AA0E14E40D7B020BB0458((&L_47), L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_47;
	}

IL_0101:
	{
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0107:
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0099;
		}
	}

IL_010c:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_51 = V_1;
		NullCheck(L_51);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_52 = L_51->____prev;
		il2cpp_codegen_memory_barrier();
		V_1 = L_52;
	}

IL_0115:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_53 = V_1;
		if (L_53)
		{
			goto IL_002e;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_54 = V_0;
		NullCheck(L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_54->____elements;
		NullCheck(L_55);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0136;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_56 = V_0;
		NullCheck(L_56);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56->____elements;
		NullCheck(L_57);
		G_B24_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_57)->max_length)), 2));
		goto IL_013b;
	}

IL_0136:
	{
		G_B24_0 = ((int32_t)4096);
	}

IL_013b:
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_58 = V_0;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_59 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		SparselyPopulatedArrayFragment_1__ctor_m849B5F4632EC0E042F4CF4F23102F9D74CE14294(L_59, G_B24_0, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_2 = L_59;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_60 = V_0;
		NullCheck(L_60);
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC** L_61 = (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC**)(&L_60->____next);
		il2cpp_codegen_memory_barrier();
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_62 = V_2;
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_63;
		L_63 = InterlockedCompareExchangeImpl<SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*>(L_61, L_62, (SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC*)NULL);
		if (L_63)
		{
			goto IL_0000;
		}
	}
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_64 = V_2;
		il2cpp_codegen_memory_barrier();
		__this->____tail = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tail), (void*)L_64);
		goto IL_0000;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mE296FAAA22A3EB0AC336CF00A25F421F6B67A818_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mA506A2FE234FF6181FB2AF00DB329E33CFF628B2_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m582B32C425FCABE2412EAFD287EE75C402ECF671_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m603821E13AA067379EA5D21B577261CBB0BEF8E6(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m43C5D88AC2BA4A7B9657B005A68F0EE5930F395F_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 Stack_1_GetEnumerator_mDC30F9E4DD7D12559CD9C33E6C412F630A4F9BE3_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9B28A06DBE13C361182F64834E2480DB46457B8E_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_mC9903FC129ABAFBAE6FDC2428B611C2CBF5E6F2D_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3D5138341817152CEF519175368AA02FBB797C96((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1ED2EFBA8997D05D3B6586A9FF9D467F8D5482F0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m2E32959EAD54D6F02C9FF531A2AFDEF3EC04FEB6_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B2_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** G_B3_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____array);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_mA0C247058163BBAB7D8BFE60D542FFE434A3D834_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD05342C1BB452792EAB7B189EEA951942662B556_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0;
		L_0 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mABE5114368C378A79F5762E756A3D3A7BAA0E3B9_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m4792730A13F3249ABCC0E87BE58C4CEFAA2593AB_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m5669A05A4FD8B7CCB4CD8C85C2A6DE062991D5C3_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mB3BDA03E5159B66D486FB4E1586CE35997217FD6_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mAF063B67F8243B0B5C7A855C8A67BFCE618A77B2_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m6BBC3821516EBCC69444130978DA5FBB01D47D84_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		int32_t L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m92EE93D981B3058A8384DCA90FFC1502242652F7(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_m4A3AD652EAB28362C9657E2E57B70D7AB605E075_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C Stack_1_GetEnumerator_mDB63D8CFE5E6ABAEAAB522D0B379A1856CC2434B_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m85DDC6ED4CF02AB415FB39E590E78CBCC427B0C7_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m5E943A8F427C868897F545EDBB1D696EF1DA3E92_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89062508E459D03177AC1ECE62116EFC56A6FB61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t0D7F1F6081F1B6DDB263573004129C443F04F41C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_mCBB15AA52FA8864E2B9065918EE83B3B246CB54F_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_mF65EFCC543A2FA4060EBB2D1F791A2C95BF0C2B6_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m2A7A3A8D713263E2DE6846D71351F2951D0D3459_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_mBA4873FC90B54D47FCDFAF825F1E462FA6F28560_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B2_0 = NULL;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** G_B3_1 = NULL;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F** L_0 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F**)(&__this->____array);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m540BB33A026A346B7B0033684BE811ED519B1E33(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m652E1B38200FB5443D4A6688E81A1589AE0D10DC_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mE8BC3D8693065B793B1A0CA19DA48B1F049CB940_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0;
		L_0 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mEA234C0CB558E2C38137325D097689FD7EBFFFF2_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mE0CA6020FCAC821CECC725F9BDD93EEDFE97A872_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_System_Collections_ICollection_get_IsSynchronized_mAC5B5D1F0715D3F5EDCAAFD1DB41E98DC2A04E9C_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_ICollection_get_SyncRoot_mC5BE9250C67B11D27BC5D7F3AC54C729612BBFF8_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mE760938D1ADEAF722C519115D86462EF392D5F8E_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0019;
	}

IL_0019:
	{
		__this->____size = 0;
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Contains_m5EE0B038B11D0498E8627CCD869DC641026D4D1B_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___0_item;
		int32_t L_3 = __this->____size;
		int32_t L_4;
		L_4 = Array_LastIndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mFC821A119D3BD51B91A59F09A28A8FDC1C32F6FC(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_System_Collections_ICollection_CopyTo_mF378128FED4B9119EE9AD3C0CD02C2BA04B244AC_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_arrayIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_arrayIndex;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_arrayIndex;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
	}
	try
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_21 = __this->____array;
		RuntimeArray* L_22 = ___0_array;
		int32_t L_23 = ___1_arrayIndex;
		int32_t L_24 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, 0, L_22, L_23, L_24, NULL);
		RuntimeArray* L_25 = ___0_array;
		int32_t L_26 = ___1_arrayIndex;
		int32_t L_27 = __this->____size;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD(L_25, L_26, L_27, NULL);
		goto IL_00b3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a2;
		}
		throw e;
	}

CATCH_00a2:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A Stack_1_GetEnumerator_m02240169A5AC764BD521BF173361FA927C136FB7_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m90327FF68B7506C945BA4506E55DF116B296B4FC_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_System_Collections_IEnumerable_GetEnumerator_m2D77C0C75B6A42F516D2AFB5B44A703EC0B41F6F_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2E659404649FBEA780D53C3FA4E957998A349FB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		Enumerator_t1999C0BADD971016559CDAF90DA9DC67FAEF5B8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Stack_1_Peek_m4C71DF7964D5892AE0F074981907CC29E354C498_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Stack_1_Pop_m682D32993E1CB092C642F495A93915B11F401A7F_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____size;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_001c:
	{
		int32_t L_4 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		__this->____size = L_5;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B4_0 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m4D734379CC958AED5ED7FF36A9467EDCE6AFDF56_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_1 = NULL;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_1;
		int32_t L_5 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_6);
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_0034:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___0_item;
		Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Stack_1_PushWithResize_m08841831A121C2488026F8131C34F8C15C250CC1_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B2_0 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** G_B3_1 = NULL;
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D** L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D**)(&__this->____array);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____array;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_0;
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____array;
		NullCheck(L_2);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_2)->max_length))));
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		Array_Resize_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m45E2DE0DBF4E0547B569F9496A9D773B058C30CA(G_B3_1, G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____array;
		int32_t L_4 = __this->____size;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_ThrowForEmptyStack_m8A1BE6CEDDAD8DB304FC2E141DA5635DB3B88338_gshared (Stack_1_t8A661B4E11F715EF60608DE57485D9956E00C72E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95F0EE30865D503A05F1D329BC3FED0946B65C24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_xMin;
		__this->___m_XMin = L_0;
		int32_t L_1 = ___1_yMin;
		__this->___m_YMin = L_1;
		int32_t L_2 = ___2_width;
		__this->___m_Width = L_2;
		int32_t L_3 = ___3_height;
		__this->___m_Height = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CphysicalWidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CphysicalHeightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC48B3CCB640A2A27C9527ABC78D1EE03E46F015D_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAFD23847977E4B2A336339DF9406FBD87A2B94E0_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<int32_t>(L_2);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_000b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint16_t>(L_2);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m64F54D65CB95EE1F86F961D036DA94655F9A977F_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4));
		return;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint32_t>(L_2);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_2);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m655719167577EE7B24CAAF5A9D0995E0259B6A84_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* Array_Empty_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mD8B08917D1DC7B424036208C74F0A7A6EC83DAAE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((EmptyArray_1_tB610FBC2B87561A97224E274FC1699BCE50B2C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m95BEA186944A5BE6FF77B2E8A45CE67AA50641B2_gshared_inline (ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tEC1E786ADECA91AF68E558734868FBB77E05D964));
		return;
	}

IL_000b:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_3;
		L_3 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_2);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Result_get_Status_m40F359230C3EF5DB41ACAFE4F0E1D3107C6BCB29_gshared_inline (Result_t9F723A00486BDFA09EDCB0A97E42BEBF4208D975* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Result_get_Status_m2E3CDFB12A300935DCD19F66FF7D78E4BCC292CA_gshared_inline (Result_t420EC3DB7CBFF98E377E8BC8AEC581F7FCD7A141* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) 
{
	typedef Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*FunctionPointerType) (RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD9622F7595F5F0E1CEEA6699AA249F1FB0FD5C5D_gshared_inline (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Func_2_Invoke_mDB0D63C6DA4FC8F4E65D1E67A762FB549B728597_gshared_inline (Func_2_t74BA73845DFA0004A7F25F3773A11A75228F5277* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) 
{
	typedef Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B (*FunctionPointerType) (RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		__this->____length = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1DA3ED274C046791E48A52F415066C7C86B031D1_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0 = ___0_ptr;
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0037;
	}

IL_0037:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_3);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* SparselyPopulatedArrayAddInfo_1_get_Source_mBA043CE79666AA955D0FE4335ED3B82802E75C86_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		SparselyPopulatedArrayFragment_1_t2D5B093B992E7F6EEEBD059E1065DFEDDBE906FC* L_0 = __this->____source;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SparselyPopulatedArrayAddInfo_1_get_Index_mCBBF3F010A994612AC94DA417AB8D04A2C92B45A_gshared_inline (SparselyPopulatedArrayAddInfo_1_tC49C525D3AFE80CB49D53650F40C9A49D4CDD19D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}

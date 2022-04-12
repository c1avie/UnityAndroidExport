#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2BBB49FBD09B49D547A38B10C02C19A31AE4FF46;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t02D98A2DF112652B17AE74E4DCF748A7D017DCEC;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t3BA38B41448989D2B2B3F7543FFFAF51CDF246A5;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tF18CA5AA122FDD12A1A3DEDDEC417CC451BE7354;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t0FAAE807B2188BF2EAF436196055B6352146F3A1;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tEAA5E601A59C9BE266EE5908DD70CA558861E5FD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_tC598ECD4CA8E5E322164CA52B236BD2B8B705321;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_tAEB5AE0D56FFA57C14906BA1FE624BEFDC7B7F8A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t700460EB97AED1062C245F811F908C3AEE76D3B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_tFF99F5EB27EC44B6E626E6C1E9B39ED3B26D3CC5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t3EDD9EF431330ABB9FE2679C89161309386C182B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_t963915886CF30EB71C3BB2D8A01119DCFD6D3DE3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_tDC8680AB09D7184CF88FE6E925675F7A342692A2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t78F426B76F2E0C6DD17B9843FF234B687FED6F1B;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_tCEBA3F14769BE18C7CC4A4295E95557CE3EBB84A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t809CF773CCAB10CD21BA2DD48988E9D345315865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t993A8615D400411D706A5CE972DBBEE0774F8EFD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t447BD323DF4E850DB4FE9D17455D09CDD5273AC5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t0EABA3C28A7A2636BDE9A6080A1926F84D853B86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t54AC7ECFF959B8F7E97392FC69049AAD257E6DAF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_tBA4BB0E109452BA1A0CBE28A58F685943A5016A4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_tA2074AA0EAB1B04A372524692E58F4B446B758A6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_t0084F27B142358B1D9B7CEFC0BD06F9A6D0E21A2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_tE287F3014E16C15782F68E0BC9A3C354F0B285C6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t55ED78D868BBF0FF476D8791C34BDFC0375B2E53;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_t58A34F721E72F2F9CA5CC371F899CFA9C0F300ED;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_tAB6A12FD536454DD4CB19E5F5E81F8F8B2719EC0;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_t1CF21ADD3CF973A58F265217190F0CFD90140D9F;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LitJson.JsonData[]
struct JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t2C69F71B145FEE68C178DE2994E5AD9118D35EC2;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// LitJson.ExporterFunc
struct ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// LitJson.IJsonWrapper
struct IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// LitJson.ImporterFunc
struct ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// LitJson.JsonData
struct JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E;
// LitJson.JsonException
struct JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E;
// LitJson.JsonWriter
struct JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LitJson.WriterContext
struct WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A;
// LitJson.JsonMapper/<>c
struct U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t251B73D69E4417EC5BAB394AB832378F8545B085_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t99426DF07D859FEE63E638373BDAFA394EAA0212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tBDF7A4E7543C054E056B356C3BEB38C62D745CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2CB546D1C84D71C23D7D936322C4D8D160356072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5257ABD3486E9F0A0482DE96A82C4A396A814F3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t39BFB6A9706DF9863DD40D6E7EE54B91EF6FABD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tC598ECD4CA8E5E322164CA52B236BD2B8B705321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7;
IL2CPP_EXTERN_C String_t* _stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m10A18160D7315B3DC3967D96FA48D45611B31352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6D6151678B5AC886BB0599E5B1A7C0482044B6C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m89DE5C8D097A231F1E851D12364AB1D6A47F0074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE52B8090BAEB0506DDDD3E69A73F51F101686CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC99CC7D747DDEF9188CF027A93DF02B3A716BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetBoolean_m117937A3832CFB815EC02F3CD8382EAAB5BEB8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetDouble_m956E32723BB535A0CB3E7FA2B32A2040DF4C57B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetInt_m3BB5A020239E56D8C7AE8D99ADB1B28D23BA9DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetLong_m2533FF369D0DAA6CAA15D761176B843B1406B2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetString_mA757B6F8443FB37C23BDE6529D6A22599D485FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_mB8012E509825FF726C0AFC33ED6E357E4E4E28FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_mC51ECD4E7FBB9E4E3FFD377B32B1B8B39A62D2B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m8A45A4B37997D5AC4393D28EC9EBE9B376238E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2B240FC09431A73DB3225844C249152D858FFEB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF34766DA4EE81C5B88258A17FE45DBF58B0BEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m55014D4CDF8DC347B44A107DCBCEC684B9E565EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m8B85B1791EC0CC2DDB1E2848C13CCAD55743B511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m3294D89A7967C1CE733E6F91729FCCCCD757937C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m1EFD47A283D3348EA652F3F7F59F33A79519B280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m9DD5C4D9F3BA528F03D1BD2EBACF75323DAD9B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mE507794CC2A60D275143740FF75095C06E0D3652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m21783424FA90939EED51CCF7DF72C0D9106E124E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m30EDBC569557815D333D8F3BA3F4A69806198904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mC977D3D79E8D19CBFB093A528CEADFEB62380D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m3314C30FBAD6946DDAE096C867663B506EE1D786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7616067E26AAF4C6DC41213473B7605E2E62C438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m600E6639380982A15A28D16A871EE7E349DA4DCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mDD7A4F653F2B3A8543A96AAA30D2FBFFCAC60212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m21E72AA5777B08595D054673BA49CF9E593F2A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m686EB419CF73B0BDC8636B55F7A634FAA789740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m74F1E4ED9D2541A2BEE6CDB817000D7DDA310575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_mF29C40133B5443F4407EDB24E778B5D5789A0C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_mEAB5FD8302E9A2FFC78A0E236BD73B6AB1F2B791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m141C31497D55ABC8D1519BBFA64B494863A50BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m1D1BC62B83EF74B63A14B6680B508C5020B54414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m55FFD7D545119D28CDAC4C39932B6F597A46344B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mAC3340ECA68B3E213E813A87EFECB7C13C02CF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m1943BD1FBC2E51745822615E1905D23E5F449FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m58270799B739D26928D6ED5A56787AD46E0778CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m6EB0D491D19CC5CCA63495C8DDEF05C316DA3B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m3BAA49A036978D404328E8E91F07B8894D9FAEE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mFC4DC67A36D5FCEFA5CE0B7D06BB0BCFC86AB6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBAAD04399D961364334385E5E2CA53AD7FF2CF96 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct  Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA2074AA0EAB1B04A372524692E58F4B446B758A6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tAEB5AE0D56FFA57C14906BA1FE624BEFDC7B7F8A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCEBA3F14769BE18C7CC4A4295E95557CE3EBB84A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___entries_1)); }
	inline EntryU5BU5D_tA2074AA0EAB1B04A372524692E58F4B446B758A6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA2074AA0EAB1B04A372524692E58F4B446B758A6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA2074AA0EAB1B04A372524692E58F4B446B758A6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___keys_7)); }
	inline KeyCollection_tAEB5AE0D56FFA57C14906BA1FE624BEFDC7B7F8A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAEB5AE0D56FFA57C14906BA1FE624BEFDC7B7F8A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAEB5AE0D56FFA57C14906BA1FE624BEFDC7B7F8A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ___values_8)); }
	inline ValueCollection_tCEBA3F14769BE18C7CC4A4295E95557CE3EBB84A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCEBA3F14769BE18C7CC4A4295E95557CE3EBB84A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCEBA3F14769BE18C7CC4A4295E95557CE3EBB84A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0084F27B142358B1D9B7CEFC0BD06F9A6D0E21A2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t700460EB97AED1062C245F811F908C3AEE76D3B1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t809CF773CCAB10CD21BA2DD48988E9D345315865 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___entries_1)); }
	inline EntryU5BU5D_t0084F27B142358B1D9B7CEFC0BD06F9A6D0E21A2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0084F27B142358B1D9B7CEFC0BD06F9A6D0E21A2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0084F27B142358B1D9B7CEFC0BD06F9A6D0E21A2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___keys_7)); }
	inline KeyCollection_t700460EB97AED1062C245F811F908C3AEE76D3B1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t700460EB97AED1062C245F811F908C3AEE76D3B1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t700460EB97AED1062C245F811F908C3AEE76D3B1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ___values_8)); }
	inline ValueCollection_t809CF773CCAB10CD21BA2DD48988E9D345315865 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t809CF773CCAB10CD21BA2DD48988E9D345315865 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t809CF773CCAB10CD21BA2DD48988E9D345315865 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___entries_1)); }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___keys_7)); }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___values_8)); }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE287F3014E16C15782F68E0BC9A3C354F0B285C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFF99F5EB27EC44B6E626E6C1E9B39ED3B26D3CC5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t993A8615D400411D706A5CE972DBBEE0774F8EFD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___entries_1)); }
	inline EntryU5BU5D_tE287F3014E16C15782F68E0BC9A3C354F0B285C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE287F3014E16C15782F68E0BC9A3C354F0B285C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE287F3014E16C15782F68E0BC9A3C354F0B285C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___keys_7)); }
	inline KeyCollection_tFF99F5EB27EC44B6E626E6C1E9B39ED3B26D3CC5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFF99F5EB27EC44B6E626E6C1E9B39ED3B26D3CC5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFF99F5EB27EC44B6E626E6C1E9B39ED3B26D3CC5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ___values_8)); }
	inline ValueCollection_t993A8615D400411D706A5CE972DBBEE0774F8EFD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t993A8615D400411D706A5CE972DBBEE0774F8EFD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t993A8615D400411D706A5CE972DBBEE0774F8EFD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t55ED78D868BBF0FF476D8791C34BDFC0375B2E53* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3EDD9EF431330ABB9FE2679C89161309386C182B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t447BD323DF4E850DB4FE9D17455D09CDD5273AC5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___entries_1)); }
	inline EntryU5BU5D_t55ED78D868BBF0FF476D8791C34BDFC0375B2E53* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t55ED78D868BBF0FF476D8791C34BDFC0375B2E53** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t55ED78D868BBF0FF476D8791C34BDFC0375B2E53* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___keys_7)); }
	inline KeyCollection_t3EDD9EF431330ABB9FE2679C89161309386C182B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3EDD9EF431330ABB9FE2679C89161309386C182B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3EDD9EF431330ABB9FE2679C89161309386C182B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ___values_8)); }
	inline ValueCollection_t447BD323DF4E850DB4FE9D17455D09CDD5273AC5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t447BD323DF4E850DB4FE9D17455D09CDD5273AC5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t447BD323DF4E850DB4FE9D17455D09CDD5273AC5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t58A34F721E72F2F9CA5CC371F899CFA9C0F300ED* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t963915886CF30EB71C3BB2D8A01119DCFD6D3DE3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0EABA3C28A7A2636BDE9A6080A1926F84D853B86 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___entries_1)); }
	inline EntryU5BU5D_t58A34F721E72F2F9CA5CC371F899CFA9C0F300ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t58A34F721E72F2F9CA5CC371F899CFA9C0F300ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t58A34F721E72F2F9CA5CC371F899CFA9C0F300ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___keys_7)); }
	inline KeyCollection_t963915886CF30EB71C3BB2D8A01119DCFD6D3DE3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t963915886CF30EB71C3BB2D8A01119DCFD6D3DE3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t963915886CF30EB71C3BB2D8A01119DCFD6D3DE3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ___values_8)); }
	inline ValueCollection_t0EABA3C28A7A2636BDE9A6080A1926F84D853B86 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0EABA3C28A7A2636BDE9A6080A1926F84D853B86 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0EABA3C28A7A2636BDE9A6080A1926F84D853B86 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAB6A12FD536454DD4CB19E5F5E81F8F8B2719EC0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tDC8680AB09D7184CF88FE6E925675F7A342692A2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t54AC7ECFF959B8F7E97392FC69049AAD257E6DAF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___entries_1)); }
	inline EntryU5BU5D_tAB6A12FD536454DD4CB19E5F5E81F8F8B2719EC0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAB6A12FD536454DD4CB19E5F5E81F8F8B2719EC0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAB6A12FD536454DD4CB19E5F5E81F8F8B2719EC0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___keys_7)); }
	inline KeyCollection_tDC8680AB09D7184CF88FE6E925675F7A342692A2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDC8680AB09D7184CF88FE6E925675F7A342692A2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDC8680AB09D7184CF88FE6E925675F7A342692A2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ___values_8)); }
	inline ValueCollection_t54AC7ECFF959B8F7E97392FC69049AAD257E6DAF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t54AC7ECFF959B8F7E97392FC69049AAD257E6DAF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t54AC7ECFF959B8F7E97392FC69049AAD257E6DAF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1CF21ADD3CF973A58F265217190F0CFD90140D9F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t78F426B76F2E0C6DD17B9843FF234B687FED6F1B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBA4BB0E109452BA1A0CBE28A58F685943A5016A4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___entries_1)); }
	inline EntryU5BU5D_t1CF21ADD3CF973A58F265217190F0CFD90140D9F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1CF21ADD3CF973A58F265217190F0CFD90140D9F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1CF21ADD3CF973A58F265217190F0CFD90140D9F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___keys_7)); }
	inline KeyCollection_t78F426B76F2E0C6DD17B9843FF234B687FED6F1B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t78F426B76F2E0C6DD17B9843FF234B687FED6F1B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t78F426B76F2E0C6DD17B9843FF234B687FED6F1B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ___values_8)); }
	inline ValueCollection_tBA4BB0E109452BA1A0CBE28A58F685943A5016A4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBA4BB0E109452BA1A0CBE28A58F685943A5016A4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBA4BB0E109452BA1A0CBE28A58F685943A5016A4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct  List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t35D17EA329591CA9F03C3DE7BF30C8A45D889CB4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.JsonData>
struct  List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB, ____items_1)); }
	inline JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* get__items_1() const { return ____items_1; }
	inline JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB_StaticFields, ____emptyArray_5)); }
	inline JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonDataU5BU5D_tDC0EE799374BFE52A4BC9EF47A9F6111C7655475* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct  List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D, ____items_1)); }
	inline PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* get__items_1() const { return ____items_1; }
	inline PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D_StaticFields, ____emptyArray_5)); }
	inline PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyMetadataU5BU5D_t71B1AA784BEEC40360462A0B327DED72A9C5D52D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t2C69F71B145FEE68C178DE2994E5AD9118D35EC2* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E, ____array_0)); }
	inline WriterContextU5BU5D_t2C69F71B145FEE68C178DE2994E5AD9118D35EC2* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t2C69F71B145FEE68C178DE2994E5AD9118D35EC2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t2C69F71B145FEE68C178DE2994E5AD9118D35EC2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// LitJson.JsonMapper
struct  JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___static_writer_14)); }
	inline JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}
};


// LitJson.JsonWriter
struct  JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.Boolean LitJson.JsonWriter::lower_case_properties
	bool ___lower_case_properties_10;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer_11;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___context_1)); }
	inline WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * get_context_1() const { return ___context_1; }
	inline WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___ctx_stack_2)); }
	inline Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___hex_seq_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_lower_case_properties_10() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___lower_case_properties_10)); }
	inline bool get_lower_case_properties_10() const { return ___lower_case_properties_10; }
	inline bool* get_address_of_lower_case_properties_10() { return &___lower_case_properties_10; }
	inline void set_lower_case_properties_10(bool value)
	{
		___lower_case_properties_10 = value;
	}

	inline static int32_t get_offset_of_writer_11() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75, ___writer_11)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_writer_11() const { return ___writer_11; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_writer_11() { return &___writer_11; }
	inline void set_writer_11(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___writer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_11), (void*)value);
	}
};

struct JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_enumerator_0), (void*)value);
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// LitJson.WriterContext
struct  WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};


// LitJson.JsonMapper/<>c
struct  U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields
{
public:
	// LitJson.JsonMapper/<>c LitJson.JsonMapper/<>c::<>9
	U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * ___U3CU3E9_0;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_0
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_0_1;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_1
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_1_2;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_2
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_2_3;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_3
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_3_4;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_4
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_4_5;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_5
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_5_6;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_6
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_6_7;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_7
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_7_8;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_8
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_8_9;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_9
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * ___U3CU3E9__24_9_10;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_0
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_0_11;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_1
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_1_12;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_2
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_2_13;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_3
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_3_14;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_4
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_4_15;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_5
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_5_16;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_6
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_6_17;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_7
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_7_18;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_8
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_8_19;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_9
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_9_20;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_10
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_10_21;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_11
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_11_22;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_12
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_12_23;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_13
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_13_24;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_14
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___U3CU3E9__25_14_25;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_0_1)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_1_2)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_1_2() const { return ___U3CU3E9__24_1_2; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_1_2() { return &___U3CU3E9__24_1_2; }
	inline void set_U3CU3E9__24_1_2(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_2_3)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_2_3() const { return ___U3CU3E9__24_2_3; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_2_3() { return &___U3CU3E9__24_2_3; }
	inline void set_U3CU3E9__24_2_3(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_3_4)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_3_4() const { return ___U3CU3E9__24_3_4; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_3_4() { return &___U3CU3E9__24_3_4; }
	inline void set_U3CU3E9__24_3_4(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_4_5)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_4_5() const { return ___U3CU3E9__24_4_5; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_4_5() { return &___U3CU3E9__24_4_5; }
	inline void set_U3CU3E9__24_4_5(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_5_6)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_5_6() const { return ___U3CU3E9__24_5_6; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_5_6() { return &___U3CU3E9__24_5_6; }
	inline void set_U3CU3E9__24_5_6(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_6_7)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_6_7() const { return ___U3CU3E9__24_6_7; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_6_7() { return &___U3CU3E9__24_6_7; }
	inline void set_U3CU3E9__24_6_7(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_7_8)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_7_8() const { return ___U3CU3E9__24_7_8; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_7_8() { return &___U3CU3E9__24_7_8; }
	inline void set_U3CU3E9__24_7_8(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_8_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_8_9)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_8_9() const { return ___U3CU3E9__24_8_9; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_8_9() { return &___U3CU3E9__24_8_9; }
	inline void set_U3CU3E9__24_8_9(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_8_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_9_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__24_9_10)); }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * get_U3CU3E9__24_9_10() const { return ___U3CU3E9__24_9_10; }
	inline ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 ** get_address_of_U3CU3E9__24_9_10() { return &___U3CU3E9__24_9_10; }
	inline void set_U3CU3E9__24_9_10(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * value)
	{
		___U3CU3E9__24_9_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_9_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_0_11)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_0_11() const { return ___U3CU3E9__25_0_11; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_0_11() { return &___U3CU3E9__25_0_11; }
	inline void set_U3CU3E9__25_0_11(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_1_12)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_1_12() const { return ___U3CU3E9__25_1_12; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_1_12() { return &___U3CU3E9__25_1_12; }
	inline void set_U3CU3E9__25_1_12(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_2_13)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_2_13() const { return ___U3CU3E9__25_2_13; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_2_13() { return &___U3CU3E9__25_2_13; }
	inline void set_U3CU3E9__25_2_13(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_3_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_3_14)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_3_14() const { return ___U3CU3E9__25_3_14; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_3_14() { return &___U3CU3E9__25_3_14; }
	inline void set_U3CU3E9__25_3_14(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_3_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_4_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_4_15)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_4_15() const { return ___U3CU3E9__25_4_15; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_4_15() { return &___U3CU3E9__25_4_15; }
	inline void set_U3CU3E9__25_4_15(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_4_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_4_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_5_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_5_16)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_5_16() const { return ___U3CU3E9__25_5_16; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_5_16() { return &___U3CU3E9__25_5_16; }
	inline void set_U3CU3E9__25_5_16(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_5_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_5_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_6_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_6_17)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_6_17() const { return ___U3CU3E9__25_6_17; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_6_17() { return &___U3CU3E9__25_6_17; }
	inline void set_U3CU3E9__25_6_17(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_6_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_6_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_7_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_7_18)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_7_18() const { return ___U3CU3E9__25_7_18; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_7_18() { return &___U3CU3E9__25_7_18; }
	inline void set_U3CU3E9__25_7_18(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_7_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_7_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_8_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_8_19)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_8_19() const { return ___U3CU3E9__25_8_19; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_8_19() { return &___U3CU3E9__25_8_19; }
	inline void set_U3CU3E9__25_8_19(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_8_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_8_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_9_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_9_20)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_9_20() const { return ___U3CU3E9__25_9_20; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_9_20() { return &___U3CU3E9__25_9_20; }
	inline void set_U3CU3E9__25_9_20(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_9_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_9_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_10_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_10_21)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_10_21() const { return ___U3CU3E9__25_10_21; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_10_21() { return &___U3CU3E9__25_10_21; }
	inline void set_U3CU3E9__25_10_21(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_10_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_10_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_11_22() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_11_22)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_11_22() const { return ___U3CU3E9__25_11_22; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_11_22() { return &___U3CU3E9__25_11_22; }
	inline void set_U3CU3E9__25_11_22(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_11_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_11_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_12_23() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_12_23)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_12_23() const { return ___U3CU3E9__25_12_23; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_12_23() { return &___U3CU3E9__25_12_23; }
	inline void set_U3CU3E9__25_12_23(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_12_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_12_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_13_24() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_13_24)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_13_24() const { return ___U3CU3E9__25_13_24; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_13_24() { return &___U3CU3E9__25_13_24; }
	inline void set_U3CU3E9__25_13_24(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_13_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_13_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_14_25() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields, ___U3CU3E9__25_14_25)); }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * get_U3CU3E9__25_14_25() const { return ___U3CU3E9__25_14_25; }
	inline ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 ** get_address_of_U3CU3E9__25_14_25() { return &___U3CU3E9__25_14_25; }
	inline void set_U3CU3E9__25_14_25(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * value)
	{
		___U3CU3E9__25_14_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_14_25), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct  KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10, ___value_1)); }
	inline JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * get_value_1() const { return ___value_1; }
	inline JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// LitJson.ArrayMetadata
struct  ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Collections.DictionaryEntry
struct  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// LitJson.ObjectMetadata
struct  ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// LitJson.PropertyMetadata
struct  PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// LitJson.Condition
struct  Condition_t4D0D1F95ACA9DA99818B589A4D8054433F3CDE1F 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_t4D0D1F95ACA9DA99818B589A4D8054433F3CDE1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
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

// LitJson.JsonType
struct  JsonType_tD504D6051B70CCEB0E147202E53A6594F5DE5EC2 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_tD504D6051B70CCEB0E147202E53A6594F5DE5EC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.IO.StringWriter
struct  StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureData_1)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_compareInfo_4)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureInfo_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendar_17)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dayNames_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_eraNames_39)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dateWords_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// LitJson.JsonData
struct  JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_object_5), (void*)value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_6), (void*)value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_7), (void*)value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_list_9), (void*)value);
	}
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

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
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


// LitJson.ExporterFunc
struct  ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct  ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6  : public MulticastDelegate_t
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


// LitJson.JsonException
struct  JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4DDE08C217F84A4EA45656A74E44A6AC89B9DAF5_gshared (Dictionary_2_t2BBB49FBD09B49D547A38B10C02C19A31AE4FF46 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF9FCD24895EF7DAB1497667D0F5921D976CCE2D7_gshared (Dictionary_2_t02D98A2DF112652B17AE74E4DCF748A7D017DCEC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93_gshared (List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_mDC01B236E4ED621C3E4538F6E91BC9C9644D108A (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m63D1A89427832F433622FA3A324D3AE78F7CBF47 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mB4162FFA569930E991DABB239B12E2F11A1F0114 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_mC164B10E8D2003C3776B52975246975FB88FE88A (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_mE6922D12E3CDE93192B7174393B447D3DA5E555D (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_mF0A86BD537551AAD2CD6AED897BD629B7DBD2A47 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m09C5EF0ACA3A505E6ABF9BD9C91CDFAE0805CD45 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m8EB150A86DAE396EBEECE73821C246666B3CFA82 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * JsonData_ToJsonData_mBF999680D54AD94FD69ED8B478562BA2AE122C53 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m9C87135232077958705AF77A1CB4C3EFE4EB4A54 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, String_t* ___prop_name0, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m414CCED797D8F5CE9757B0D5B6D3F544FEEBF851 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2 (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 * __this, String_t* ___key0, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *, String_t*, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m651D4CA6C3EF595FAB60E97238257D159BF34A91 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9BDCC5506C73D22C70431DF7BA760614EDEA611F (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mD8DF8E0C7D7E441FA50A4D0F12695077C9EDE159 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_mEC6F3693CD92BF07290B9254998DE3EBF46BA4D0 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m19AC0FDA1929622B16A711E1A6652FD728115EEF (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_m548E08E89490F8E547812EC991B6A9E6997E1686 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mECE184838A77B057E1F4F227E74275CF26C280EA (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_mEC99CC7D747DDEF9188CF027A93DF02B3A716BE4 (Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m2B240FC09431A73DB3225844C249152D858FFEB8 (List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84 *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_mBF34766DA4EE81C5B88258A17FE45DBF58B0BEBA (List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mC51ECD4E7FBB9E4E3FFD377B32B1B8B39A62D2B7 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m01D1B3986280094C490B1D081C4DDFBDDDF74FE0 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___boolean0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC2DB5F45F15CE540050B379DEDD3B7498CFBD125 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, double ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m97F42B4B853B961A365A75F6518ED58F27ED81A2 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33 (RuntimeObject* ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m0B12D9A2FD3397BE986517F38D8F92AAB97B77AD (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_mD919692F9AB62C076E3CDBEA2C950D467F406753 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___property_name0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m4A15F84179BBB3FB61377209D7A63DA3D79F3213 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697 (int64_t* __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D (bool* __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m8A45A4B37997D5AC4393D28EC9EBE9B376238E25 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m6D2E2B3E7754C79332C98D72E0C4FD26DE8A777A_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m89DE5C8D097A231F1E851D12364AB1D6A47F0074 (Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E *, const RuntimeMethod*))Dictionary_2__ctor_m4DDE08C217F84A4EA45656A74E44A6AC89B9DAF5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762 (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m6D6151678B5AC886BB0599E5B1A7C0482044B6C2 (Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63 *, const RuntimeMethod*))Dictionary_2__ctor_mF9FCD24895EF7DAB1497667D0F5921D976CCE2D7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_m10A18160D7315B3DC3967D96FA48D45611B31352 (Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mF8BFE4E334D770453BBAEDA2CA09CB17A79FE3B8 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B (Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040 (Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mC30757CEC877E26A539A122D941E33123D8B58FF (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mB5B3DCF191DA712B503F0C2427F35E5384D6F004 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
inline void List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93 (List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D *, const RuntimeMethod*))List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93_gshared)(__this, method);
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3 (Type_t * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75 (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_mE52B8090BAEB0506DDDD3E69A73F51F101686CFD (Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335 (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m32C2BEEC39481C8DD9D9DB4D8F0CEB1C594329D0_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFB33F4779BDE9E2C699D69EB8B5219577B9C91C4 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, float ___number0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655 (RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE0DF2059BDF4FD0C15C7CADAAB9AC7287F5B6FA6 (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m679D6F00860149C05D900AB269421221DA3D2C1E (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m554C909CC02E6EC6CBEF66FACA38843A36AEB51F (Type_t * ___type0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mD0C0CA7CDA559C4B218026A62C8960842F2F5F56 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m575795591118467EB41462D15B5F0215F4253DDF (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m8B85B1791EC0CC2DDB1E2848C13CCAD55743B511 (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9 (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mE29E9098071B00B132090535FAA5D6FC405FED3B (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m6879C7BB33822B772DEEF59150A42C87F432407B (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m55014D4CDF8DC347B44A107DCBCEC684B9E565EA (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Single,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7FB984128CEAAE2A92EF7AC1D299BB0908183A79 (float ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m0C292FCE6A5DC8FF178D4FEFA95264E54722B9AA (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461 (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_inline (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5 (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * (*) (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *, const RuntimeMethod*))Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m1A290CD3A1A9C0F08192321F376C4E20218EC041 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_mE8E56C393D4003DB098A08A821A1F4FC2E0AEFE7 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_mD4A8A769B77593BD0EBA7B2105DA2AB6D8C4A078 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_inline (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 * __this, const RuntimeMethod* method)
{
	return ((  JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * (*) (KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4 (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB560D82FFE9BEB382B77534939BABD3F77980E60 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55 (uint8_t ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m22BB83DF5B5FC8248612CF527305D6FC80E27312 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4 (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4 (uint32_t ___value0, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F (int32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB05B99FB500FD4129E7616031A2405404524A074 (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668 (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125 (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644 (double ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m97B465B7C9620523539B9BA65C256991531C0D05 (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_Parse_mEAC1F90F2294A19A5DC107BD74A3C50FBE5D3D56 (String_t* ___input0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_pinvoke(const ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933& unmarshaled, ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_pinvoke_back(const ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_pinvoke& marshaled, ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_pinvoke_cleanup(ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_com(const ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933& unmarshaled, ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_com_back(const ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_com& marshaled, ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshal_com_cleanup(ArrayMetadata_t87558B6EAE1810FCCB7D34D9B9D87EEC3D9EA933_marshaled_com& marshaled)
{
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mE0DF2059BDF4FD0C15C7CADAAB9AC7287F5B6FA6 (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
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
						GenericInterfaceActionInvoker1< JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m01A51C026985FC0588FE28FAA91310D9AF6D2F6B (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_mDD6778DE315E6195E0A1D97E333B99884825A942 (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75 (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m23C33C81AACC4E5A745B2FC67B627732B4389AB0 (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_m3E4CCD9074E52E6BD674C5D40E0AA4F1F01CA8C3 (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * __this, RuntimeObject * ___input0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_m9A5C80C6C51106E7AD37A78ABFF828DDA15CDBAE (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_mDC01B236E4ED621C3E4538F6E91BC9C9644D108A (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_m63D1A89427832F433622FA3A324D3AE78F7CBF47 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_mB4162FFA569930E991DABB239B12E2F11A1F0114 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)7))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_mC164B10E8D2003C3776B52975246975FB88FE88A (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_mE6922D12E3CDE93192B7174393B447D3DA5E555D (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_mF0A86BD537551AAD2CD6AED897BD629B7DBD2A47 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m09C5EF0ACA3A505E6ABF9BD9C91CDFAE0805CD45 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m8EB150A86DAE396EBEECE73821C246666B3CFA82 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_mA22366ABAB4CBBF6C807A5A9C28747B9331650D3 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_mDC01B236E4ED621C3E4538F6E91BC9C9644D108A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsArray_mE408AA6D69630ACBB4B69969490999D5E30D7427 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsArray_m63D1A89427832F433622FA3A324D3AE78F7CBF47(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m10EAB0647A08AF77B371BBA4A596E4A971ABD0D1 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsBoolean_mB4162FFA569930E991DABB239B12E2F11A1F0114(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsDouble_mE8998BD56EF00A4C1F92C470D5A0589A40BA3779 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsDouble_mC164B10E8D2003C3776B52975246975FB88FE88A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsInt_mB347AC67BDCF99E4D4D8C07765B3C14D7E6D9744 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsInt_mE6922D12E3CDE93192B7174393B447D3DA5E555D(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsLong_m563AA742290B080EEFCE6C5332A59C02C7B10F5A (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsLong_mF0A86BD537551AAD2CD6AED897BD629B7DBD2A47(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsObject_m59B16E5FEC0334CE263BC2BC7964E538FE0E4427 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_m09C5EF0ACA3A505E6ABF9BD9C91CDFAE0805CD45(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsString_mA599B594A9A9E5FA15C29F8EFEDE8102539851F1 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsString_m8EB150A86DAE396EBEECE73821C246666B3CFA82(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_mCF1583E8AB626590DCDF09075AE037D67ACDE08E (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IDictionary_get_Item_m7CD1252538DE0E73E15B11D917583D2E2C9465BA (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_mB8012E509825FF726C0AFC33ED6E357E4E4E28FA (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_mB8012E509825FF726C0AFC33ED6E357E4E4E28FA_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___value1;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_3;
		L_3 = JsonData_ToJsonData_mBF999680D54AD94FD69ED8B478562BA2AE122C53(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = ___key0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_5 = V_0;
		JsonData_set_Item_m9C87135232077958705AF77A1CB4C3EFE4EB4A54(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IList_get_Item_m1EB66F746CBBA97948BE16BCD7657BB44AC8CBA7 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_m5CDDB85E6DF6D78F765BBF01626D622FB3DD6575 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_2;
		L_2 = JsonData_ToJsonData_mBF999680D54AD94FD69ED8B478562BA2AE122C53(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_4 = V_0;
		JsonData_set_Item_m414CCED797D8F5CE9757B0D5B6D3F544FEEBF851(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m9C87135232077958705AF77A1CB4C3EFE4EB4A54 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, String_t* ___prop_name0, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t251B73D69E4417EC5BAB394AB832378F8545B085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prop_name0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_2 = ___value1;
		KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->get_inst_object_5();
		String_t* L_4 = ___prop_name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_0022:
	{
		RuntimeObject* L_6 = __this->get_object_list_9();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		String_t* L_10 = ___prop_name0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_object_list_9();
		int32_t L_13 = V_1;
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->get_object_list_9();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t251B73D69E4417EC5BAB394AB832378F8545B085_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_006d;
	}

IL_0061:
	{
		RuntimeObject* L_19 = __this->get_object_list_9();
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t251B73D69E4417EC5BAB394AB832378F8545B085_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_006d:
	{
		RuntimeObject* L_21 = __this->get_inst_object_5();
		String_t* L_22 = ___prop_name0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_23 = ___value1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m414CCED797D8F5CE9757B0D5B6D3F544FEEBF851 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tC598ECD4CA8E5E322164CA52B236BD2B8B705321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_tC598ECD4CA8E5E322164CA52B236BD2B8B705321_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_005b;
	}

IL_001f:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_9 = ___value1;
		KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_1), L_8, L_9, /*hidden argument*/KeyValuePair_2__ctor_mBF92958413ECD3C00FF58F2CE262E308079D62A2_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->get_object_list_9();
		int32_t L_11 = ___index0;
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t1F77E80B6FF551B82FD6F841AB389DA5CF188518_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->get_inst_object_5();
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_15 = ___value1;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t4DBD9EECEEA0D3D2F64F7F4B3202B8594D2656DC_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_005b:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m227C265AD972F6B0768BF8F35CE6D145C0820375 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m651D4CA6C3EF595FAB60E97238257D159BF34A91 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___number0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(4);
		int32_t L_0 = ___number0;
		__this->set_inst_int_3(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m9BDCC5506C73D22C70431DF7BA760614EDEA611F (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int64_t ___number0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(5);
		int64_t L_0 = ___number0;
		__this->set_inst_long_4(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mC51ECD4E7FBB9E4E3FFD377B32B1B8B39A62D2B7 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_type_8(7);
		RuntimeObject * L_1 = ___obj0;
		__this->set_inst_boolean_1(((*(bool*)((bool*)UnBox(L_1, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0022:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		__this->set_type_8(6);
		RuntimeObject * L_3 = ___obj0;
		__this->set_inst_double_2(((*(double*)((double*)UnBox(L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		return;
	}

IL_003e:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		__this->set_type_8(4);
		RuntimeObject * L_5 = ___obj0;
		__this->set_inst_int_3(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		return;
	}

IL_005a:
	{
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		__this->set_type_8(5);
		RuntimeObject * L_7 = ___obj0;
		__this->set_inst_long_4(((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0076:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		__this->set_type_8(3);
		RuntimeObject * L_9 = ___obj0;
		__this->set_inst_string_6(((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0092:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_mC51ECD4E7FBB9E4E3FFD377B32B1B8B39A62D2B7_RuntimeMethod_var)));
	}
}
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mD8DF8E0C7D7E441FA50A4D0F12695077C9EDE159 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(3);
		String_t* L_0 = ___str0;
		__this->set_inst_string_6(L_0);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * JsonData_op_Implicit_mB9E2AB2C52D1BF23D9C1E35D00E8E30BD1295895 (int32_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___data0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_1 = (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)il2cpp_codegen_object_new(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		JsonData__ctor_m651D4CA6C3EF595FAB60E97238257D159BF34A91(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * JsonData_op_Implicit_m9C61F4A7CEC943726FD901D1811F92368A7D65B2 (int64_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___data0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_1 = (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)il2cpp_codegen_object_new(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		JsonData__ctor_m9BDCC5506C73D22C70431DF7BA760614EDEA611F(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * JsonData_op_Implicit_mE6D0E6D31835151B52134514E83A490677DF2DEE (String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___data0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_1 = (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)il2cpp_codegen_object_new(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		JsonData__ctor_mD8DF8E0C7D7E441FA50A4D0F12695077C9EDE159(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_mAD6043A2F7E3F2F2B46E9EFCB9D98F73820C8EA5 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43(__this, /*hidden argument*/NULL);
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_m60FFEADD79977467FC57D55BC5B48E790121AFCA (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_m23F2FA1C4A448C51B9E0E1A8CA55972F0627158D (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_mB1E68E50825601FC5C9F4B760C9F0890EA727E5E (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_GetBoolean_m117937A3832CFB815EC02F3CD8382EAAB5BEB8A5 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_m117937A3832CFB815EC02F3CD8382EAAB5BEB8A5_RuntimeMethod_var)));
	}

IL_0014:
	{
		bool L_2 = __this->get_inst_boolean_1();
		return L_2;
	}
}
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_LitJson_IJsonWrapper_GetDouble_m956E32723BB535A0CB3E7FA2B32A2040DF4C57B2 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_m956E32723BB535A0CB3E7FA2B32A2040DF4C57B2_RuntimeMethod_var)));
	}

IL_0014:
	{
		double L_2 = __this->get_inst_double_2();
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_LitJson_IJsonWrapper_GetInt_m3BB5A020239E56D8C7AE8D99ADB1B28D23BA9DF0 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_m3BB5A020239E56D8C7AE8D99ADB1B28D23BA9DF0_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = __this->get_inst_int_3();
		return L_2;
	}
}
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_LitJson_IJsonWrapper_GetLong_m2533FF369D0DAA6CAA15D761176B843B1406B2C1 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_m2533FF369D0DAA6CAA15D761176B843B1406B2C1_RuntimeMethod_var)));
	}

IL_0014:
	{
		int64_t L_2 = __this->get_inst_long_4();
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_GetString_mA757B6F8443FB37C23BDE6529D6A22599D485FBD (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_mA757B6F8443FB37C23BDE6529D6A22599D485FBD_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = __this->get_inst_string_6();
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_ToJson_mAF218E23B2027557FE01CE068F12B806D82F7C8C (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = JsonData_ToJson_mEC6F3693CD92BF07290B9254998DE3EBF46BA4D0(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_ToJson_m512433C7D0E4F573CC40288D219E3159C2CC3B5B (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer0, const RuntimeMethod* method)
{
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer0;
		JsonData_ToJson_m19AC0FDA1929622B16A711E1A6652FD728115EEF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_mD37EA990CFFC1EA199D135BE2F8E66924D26523E (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1;
		L_1 = JsonData_Add_m548E08E89490F8E547812EC991B6A9E6997E1686(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_m48D37991E36A35941EB115D4898D3F6214985567 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_mE71135C325775481433FCDF66E11CEAAA0E58460 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_m66FA5B9ADB307DE0EC2C4579791000011D4C0650 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_m3AE64BBA2F003E92731B04BA5E2E76242F877032 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(7 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_m2B6670C3E7F27DA6557ECA22BE4600476D09C85E (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_mEDD97AEE48CF8E0195B0DD924F6FFAB75EF6435E (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m524A1B3BFF6E1FD6EFF5C8E5AC3368E54B7D42F8 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5257ABD3486E9F0A0482DE96A82C4A396A814F3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_object_list_9();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t5257ABD3486E9F0A0482DE96A82C4A396A814F3D_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * L_3 = (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 *)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mECE184838A77B057E1F4F227E74275CF26C280EA(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_mFA0CE7101287FE380314C10F90BC63234E847B43_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC99CC7D747DDEF9188CF027A93DF02B3A716BE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2B240FC09431A73DB3225844C249152D858FFEB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_mC66DF4C394207655722E791CFC9F0E2473E28340_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->set_type_8(1);
		Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05 * L_4 = (Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05 *)il2cpp_codegen_object_new(Dictionary_2_t49A96CB42ACC8EB7270D09C2EA60CFC2A6947A05_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEC99CC7D747DDEF9188CF027A93DF02B3A716BE4(L_4, /*hidden argument*/Dictionary_2__ctor_mEC99CC7D747DDEF9188CF027A93DF02B3A716BE4_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84 * L_5 = (List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84 *)il2cpp_codegen_object_new(List_1_t7A1B7FC64DF09AB44A74E3CC1A656EFB0A8EAD84_il2cpp_TypeInfo_var);
		List_1__ctor_m2B240FC09431A73DB3225844C249152D858FFEB8(L_5, /*hidden argument*/List_1__ctor_m2B240FC09431A73DB3225844C249152D858FFEB8_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		RuntimeObject* L_6 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF34766DA4EE81C5B88258A17FE45DBF58B0BEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->set_type_8(2);
		List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB * L_4 = (List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB *)il2cpp_codegen_object_new(List_1_t580A880D069F499F7B22880AA61CB2B0A0B1A8FB_il2cpp_TypeInfo_var);
		List_1__ctor_mBF34766DA4EE81C5B88258A17FE45DBF58B0BEBA(L_4, /*hidden argument*/List_1__ctor_mBF34766DA4EE81C5B88258A17FE45DBF58B0BEBA_RuntimeMethod_var);
		__this->set_inst_array_0(L_4);
		RuntimeObject* L_5 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * JsonData_ToJsonData_mBF999680D54AD94FD69ED8B478562BA2AE122C53 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)IsInstClass((RuntimeObject*)L_1, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		return ((JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)CastclassClass((RuntimeObject*)L_2, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var));
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___obj0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_4 = (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)il2cpp_codegen_object_new(JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		JsonData__ctor_mC51ECD4E7FBB9E4E3FFD377B32B1B8B39A62D2B7(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33 (RuntimeObject* ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_1 = ___writer1;
		NullCheck(L_1);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean LitJson.IJsonWrapper::get_IsString() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_4 = ___writer1;
		RuntimeObject* L_5 = ___obj0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(11 /* System.String LitJson.IJsonWrapper::GetString() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_4, L_6, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___obj0;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean LitJson.IJsonWrapper::get_IsBoolean() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_9 = ___writer1;
		RuntimeObject* L_10 = ___obj0;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean LitJson.IJsonWrapper::GetBoolean() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		JsonWriter_Write_m01D1B3986280094C490B1D081C4DDFBDDDF74FE0(L_9, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0035:
	{
		RuntimeObject* L_12 = ___obj0;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean LitJson.IJsonWrapper::get_IsDouble() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_004a;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_14 = ___writer1;
		RuntimeObject* L_15 = ___obj0;
		NullCheck(L_15);
		double L_16;
		L_16 = InterfaceFuncInvoker0< double >::Invoke(8 /* System.Double LitJson.IJsonWrapper::GetDouble() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_14);
		JsonWriter_Write_mC2DB5F45F15CE540050B379DEDD3B7498CFBD125(L_14, L_16, /*hidden argument*/NULL);
		return;
	}

IL_004a:
	{
		RuntimeObject* L_17 = ___obj0;
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean LitJson.IJsonWrapper::get_IsInt() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_17);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_19 = ___writer1;
		RuntimeObject* L_20 = ___obj0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 LitJson.IJsonWrapper::GetInt() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_19);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_19, L_21, /*hidden argument*/NULL);
		return;
	}

IL_005f:
	{
		RuntimeObject* L_22 = ___obj0;
		NullCheck(L_22);
		bool L_23;
		L_23 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean LitJson.IJsonWrapper::get_IsLong() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_22);
		if (!L_23)
		{
			goto IL_0074;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_24 = ___writer1;
		RuntimeObject* L_25 = ___obj0;
		NullCheck(L_25);
		int64_t L_26;
		L_26 = InterfaceFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 LitJson.IJsonWrapper::GetLong() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_24);
		JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3(L_24, L_26, /*hidden argument*/NULL);
		return;
	}

IL_0074:
	{
		RuntimeObject* L_27 = ___obj0;
		NullCheck(L_27);
		bool L_28;
		L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean LitJson.IJsonWrapper::get_IsArray() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_27);
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_29 = ___writer1;
		NullCheck(L_29);
		JsonWriter_WriteArrayStart_m97F42B4B853B961A365A75F6518ED58F27ED81A2(L_29, /*hidden argument*/NULL);
		RuntimeObject* L_30 = ___obj0;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_30);
		V_0 = L_31;
	}

IL_0089:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009c;
		}

IL_008b:
		{
			RuntimeObject* L_32 = V_0;
			NullCheck(L_32);
			RuntimeObject * L_33;
			L_33 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_34 = ___writer1;
			JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33(((JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)CastclassClass((RuntimeObject*)L_33, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var)), L_34, /*hidden argument*/NULL);
		}

IL_009c:
		{
			RuntimeObject* L_35 = V_0;
			NullCheck(L_35);
			bool L_36;
			L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_008b;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_38 = V_1;
			if (!L_38)
			{
				goto IL_00b6;
			}
		}

IL_00b0:
		{
			RuntimeObject* L_39 = V_1;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
		}

IL_00b6:
		{
			IL2CPP_END_FINALLY(166)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
	}

IL_00b7:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_40 = ___writer1;
		NullCheck(L_40);
		JsonWriter_WriteArrayEnd_m0B12D9A2FD3397BE986517F38D8F92AAB97B77AD(L_40, /*hidden argument*/NULL);
		return;
	}

IL_00be:
	{
		RuntimeObject* L_41 = ___obj0;
		NullCheck(L_41);
		bool L_42;
		L_42 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean LitJson.IJsonWrapper::get_IsObject() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, L_41);
		if (!L_42)
		{
			goto IL_0127;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_43 = ___writer1;
		NullCheck(L_43);
		JsonWriter_WriteObjectStart_mD919692F9AB62C076E3CDBEA2C950D467F406753(L_43, /*hidden argument*/NULL);
		RuntimeObject* L_44 = ___obj0;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_44);
		V_2 = L_45;
	}

IL_00d3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0105;
		}

IL_00d5:
		{
			RuntimeObject* L_46 = V_2;
			NullCheck(L_46);
			RuntimeObject * L_47;
			L_47 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_46);
			V_3 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_47, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_48 = ___writer1;
			RuntimeObject * L_49;
			L_49 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_48);
			JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534(L_48, ((String_t*)CastclassSealed((RuntimeObject*)L_49, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_50;
			L_50 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_3), /*hidden argument*/NULL);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_51 = ___writer1;
			JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33(((JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E *)CastclassClass((RuntimeObject*)L_50, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E_il2cpp_TypeInfo_var)), L_51, /*hidden argument*/NULL);
		}

IL_0105:
		{
			RuntimeObject* L_52 = V_2;
			NullCheck(L_52);
			bool L_53;
			L_53 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_00d5;
			}
		}

IL_010d:
		{
			IL2CPP_LEAVE(0x120, FINALLY_010f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010f;
	}

FINALLY_010f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_2;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_54, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_55 = V_1;
			if (!L_55)
			{
				goto IL_011f;
			}
		}

IL_0119:
		{
			RuntimeObject* L_56 = V_1;
			NullCheck(L_56);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_56);
		}

IL_011f:
		{
			IL2CPP_END_FINALLY(271)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(271)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x120, IL_0120)
	}

IL_0120:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_57 = ___writer1;
		NullCheck(L_57);
		JsonWriter_WriteObjectEnd_m4A15F84179BBB3FB61377209D7A63DA3D79F3213(L_57, /*hidden argument*/NULL);
		return;
	}

IL_0127:
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_m548E08E89490F8E547812EC991B6A9E6997E1686 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_1;
		L_1 = JsonData_ToJsonData_mBF999680D54AD94FD69ED8B478562BA2AE122C53(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->set_json_7((String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_m6B9E8409B4ABA5AF41C478E725A7B98888C819DB(__this, /*hidden argument*/NULL);
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_m62984C1AA8EC250104372A5BD29494092095BAAB (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_8();
		int32_t L_3 = __this->get_type_8();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_4 = ___x0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_type_8();
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0025;
		}
	}
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0037;
		}
	}

IL_0025:
	{
		int32_t L_8 = __this->get_type_8();
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = __this->get_type_8();
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		int32_t L_10 = __this->get_type_8();
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_00a3;
			}
			case 5:
			{
				goto IL_00ee;
			}
			case 6:
			{
				goto IL_0139;
			}
			case 7:
			{
				goto IL_014b;
			}
		}
	}
	{
		goto IL_015d;
	}

IL_006b:
	{
		return (bool)1;
	}

IL_006d:
	{
		RuntimeObject* L_12 = __this->get_inst_object_5();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_13 = ___x0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_inst_object_5();
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_14);
		return L_15;
	}

IL_007f:
	{
		RuntimeObject* L_16 = __this->get_inst_array_0();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_17 = ___x0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->get_inst_array_0();
		NullCheck(L_16);
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_18);
		return L_19;
	}

IL_0091:
	{
		String_t* L_20 = __this->get_inst_string_6();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_21 = ___x0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_inst_string_6();
		NullCheck(L_20);
		bool L_23;
		L_23 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_20, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_00a3:
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_24 = ___x0;
		NullCheck(L_24);
		bool L_25;
		L_25 = JsonData_get_IsLong_mF0A86BD537551AAD2CD6AED897BD629B7DBD2A47(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00dc;
		}
	}
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_26 = ___x0;
		NullCheck(L_26);
		int64_t L_27 = L_26->get_inst_long_4();
		if ((((int64_t)L_27) < ((int64_t)((int64_t)((int64_t)((int32_t)-2147483648LL))))))
		{
			goto IL_00c7;
		}
	}
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_28 = ___x0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_inst_long_4();
		if ((((int64_t)L_29) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_00c9;
		}
	}

IL_00c7:
	{
		return (bool)0;
	}

IL_00c9:
	{
		int32_t* L_30 = __this->get_address_of_inst_int_3();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_31 = ___x0;
		NullCheck(L_31);
		int64_t L_32 = L_31->get_inst_long_4();
		bool L_33;
		L_33 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_30, ((int32_t)((int32_t)L_32)), /*hidden argument*/NULL);
		return L_33;
	}

IL_00dc:
	{
		int32_t* L_34 = __this->get_address_of_inst_int_3();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_35 = ___x0;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_inst_int_3();
		bool L_37;
		L_37 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_34, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00ee:
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_38 = ___x0;
		NullCheck(L_38);
		bool L_39;
		L_39 = JsonData_get_IsInt_mE6922D12E3CDE93192B7174393B447D3DA5E555D(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0127;
		}
	}
	{
		int64_t L_40 = __this->get_inst_long_4();
		if ((((int64_t)L_40) < ((int64_t)((int64_t)((int64_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0112;
		}
	}
	{
		int64_t L_41 = __this->get_inst_long_4();
		if ((((int64_t)L_41) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_0114;
		}
	}

IL_0112:
	{
		return (bool)0;
	}

IL_0114:
	{
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_42 = ___x0;
		NullCheck(L_42);
		int32_t* L_43 = L_42->get_address_of_inst_int_3();
		int64_t L_44 = __this->get_inst_long_4();
		bool L_45;
		L_45 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_43, ((int32_t)((int32_t)L_44)), /*hidden argument*/NULL);
		return L_45;
	}

IL_0127:
	{
		int64_t* L_46 = __this->get_address_of_inst_long_4();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_47 = ___x0;
		NullCheck(L_47);
		int64_t L_48 = L_47->get_inst_long_4();
		bool L_49;
		L_49 = Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697((int64_t*)L_46, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_0139:
	{
		double* L_50 = __this->get_address_of_inst_double_2();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_51 = ___x0;
		NullCheck(L_51);
		double L_52 = L_51->get_inst_double_2();
		bool L_53;
		L_53 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)L_50, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_014b:
	{
		bool* L_54 = __this->get_address_of_inst_boolean_1();
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_55 = ___x0;
		NullCheck(L_55);
		bool L_56 = L_55->get_inst_boolean_1();
		bool L_57;
		L_57 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)L_54, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_015d:
	{
		return (bool)0;
	}
}
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_mEC6F3693CD92BF07290B9254998DE3EBF46BA4D0 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * V_1 = NULL;
	{
		String_t* L_0 = __this->get_json_7();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_json_7();
		return L_1;
	}

IL_000f:
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = V_0;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_4 = (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *)il2cpp_codegen_object_new(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m8A45A4B37997D5AC4393D28EC9EBE9B376238E25(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_5 = V_1;
		NullCheck(L_5);
		JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505_inline(L_5, (bool)0, /*hidden argument*/NULL);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_6 = V_1;
		JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33(__this, L_6, /*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		__this->set_json_7(L_8);
		String_t* L_9 = __this->get_json_7();
		return L_9;
	}
}
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m19AC0FDA1929622B16A711E1A6652FD728115EEF (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonWriter_get_Validate_m6D2E2B3E7754C79332C98D72E0C4FD26DE8A777A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505_inline(L_2, (bool)0, /*hidden argument*/NULL);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_3 = ___writer0;
		JsonData_WriteJson_m74E1584A541ABDE4282644F84DCE049D2F16EF33(__this, L_3, /*hidden argument*/NULL);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_4 = ___writer0;
		bool L_5 = V_0;
		NullCheck(L_4);
		JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505_inline(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m1EACA1EF4B4502B41CD791582BF4C03CD2A68BE7 (JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002d:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0033:
	{
		bool* L_2 = __this->get_address_of_inst_boolean_1();
		String_t* L_3;
		L_3 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_003f:
	{
		double* L_4 = __this->get_address_of_inst_double_2();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_004b:
	{
		int32_t* L_6 = __this->get_address_of_inst_int_3();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0057:
	{
		int64_t* L_8 = __this->get_address_of_inst_long_4();
		String_t* L_9;
		L_9 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0063:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_0069:
	{
		String_t* L_10 = __this->get_inst_string_6();
		return L_10;
	}

IL_0070:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
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
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335 (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_mB99CB559A0E3ED2A84357E53F50D169D62AD333C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m10A18160D7315B3DC3967D96FA48D45611B31352_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6D6151678B5AC886BB0599E5B1A7C0482044B6C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m89DE5C8D097A231F1E851D12364AB1D6A47F0074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_2, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E * L_5 = (Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E *)il2cpp_codegen_object_new(Dictionary_2_tDA7F010AE8AAE182E8F80F116A176D61D4A1E89E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m89DE5C8D097A231F1E851D12364AB1D6A47F0074(L_5, /*hidden argument*/Dictionary_2__ctor_m89DE5C8D097A231F1E851D12364AB1D6A47F0074_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * L_6 = (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *)il2cpp_codegen_object_new(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762(L_6, /*hidden argument*/Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63 * L_7 = (Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63 *)il2cpp_codegen_object_new(Dictionary_2_tC789A638B0DD7764C20891061C3478F8B005FE63_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6D6151678B5AC886BB0599E5B1A7C0482044B6C2(L_7, /*hidden argument*/Dictionary_2__ctor_m6D6151678B5AC886BB0599E5B1A7C0482044B6C2_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522 * L_8 = (Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522 *)il2cpp_codegen_object_new(Dictionary_2_t1836121AFCCDD40437730F195B965E940FB7D522_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m10A18160D7315B3DC3967D96FA48D45611B31352(L_8, /*hidden argument*/Dictionary_2__ctor_m10A18160D7315B3DC3967D96FA48D45611B31352_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_9 = (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 *)il2cpp_codegen_object_new(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		JsonWriter__ctor_mF8BFE4E334D770453BBAEDA2CA09CB17A79FE3B8(L_9, /*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * L_10;
		L_10 = DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B(/*hidden argument*/NULL);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 * L_11 = (Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 *)il2cpp_codegen_object_new(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B(L_11, /*hidden argument*/Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 * L_12 = (Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24 *)il2cpp_codegen_object_new(Dictionary_2_t3F9A1675EBFD2E1660A972C71C5744934C0C0A24_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B(L_12, /*hidden argument*/Dictionary_2__ctor_m3991654F86F2829817C6ADE69012E3245DC2B50B_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB * L_13 = (Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB *)il2cpp_codegen_object_new(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040(L_13, /*hidden argument*/Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB * L_14 = (Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB *)il2cpp_codegen_object_new(Dictionary_2_tD1CD1CF24D33BE0C5D745339580CED4E0B7209FB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040(L_14, /*hidden argument*/Dictionary_2__ctor_m2A7423CDDCB6BF0462A8E9FF0F0A6B2787E92040_RuntimeMethod_var);
		((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mC30757CEC877E26A539A122D941E33123D8B58FF(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_mB5B3DCF191DA712B503F0C2427F35E5384D6F004(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m554C909CC02E6EC6CBEF66FACA38843A36AEB51F (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t99426DF07D859FEE63E638373BDAFA394EAA0212_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(!0) */, IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D * L_3 = (List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D *)il2cpp_codegen_object_new(List_1_t4E478A01E9AFCD3FE5C8A2EB315EF73C32D3DF7D_il2cpp_TypeInfo_var);
		List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93(L_3, /*hidden argument*/List_1__ctor_m123D82B95DDCC8057B4C9B70F5B50165CE4F9B93_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_5;
		L_5 = Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0059;
	}

IL_001f:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		PropertyInfo_t * L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C ));
		PropertyInfo_t * L_13 = V_3;
		(&V_4)->set_Info_0(L_13);
		(&V_4)->set_IsField_1((bool)0);
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t99426DF07D859FEE63E638373BDAFA394EAA0212_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_20;
		L_20 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		V_2 = 0;
		goto IL_0096;
	}

IL_006b:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_21 = V_5;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		il2cpp_codegen_initobj((&V_7), sizeof(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C ));
		FieldInfo_t * L_25 = V_6;
		(&V_7)->set_Info_0(L_25);
		(&V_7)->set_IsField_1((bool)1);
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_27 = V_7;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t99426DF07D859FEE63E638373BDAFA394EAA0212_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0096:
	{
		int32_t L_29 = V_2;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject * L_31 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_type_properties_lock_13();
		V_8 = L_31;
		V_9 = (bool)0;
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_32 = V_8;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_32, (bool*)(&V_9), /*hidden argument*/NULL);
		}

IL_00b0:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			RuntimeObject* L_33 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_type_properties_12();
			Type_t * L_34 = ___type0;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(!0,!1) */, IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var, L_33, L_34, L_35);
			IL2CPP_LEAVE(0xCD, FINALLY_00c1);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00be;
			throw e;
		}

CATCH_00be:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0xCD, FINALLY_00c1);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			bool L_36 = V_9;
			if (!L_36)
			{
				goto IL_00cc;
			}
		}

IL_00c5:
		{
			RuntimeObject * L_37 = V_8;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_37, /*hidden argument*/NULL);
		}

IL_00cc:
		{
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCD, IL_00cd)
	}

IL_00cd:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mC30757CEC877E26A539A122D941E33123D8B58FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m3294D89A7967C1CE733E6F91729FCCCCD757937C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m1EFD47A283D3348EA652F3F7F59F33A79519B280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m9DD5C4D9F3BA528F03D1BD2EBACF75323DAD9B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mE507794CC2A60D275143740FF75095C06E0D3652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m21783424FA90939EED51CCF7DF72C0D9106E124E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m30EDBC569557815D333D8F3BA3F4A69806198904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mC977D3D79E8D19CBFB093A528CEADFEB62380D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m3314C30FBAD6946DDAE096C867663B506EE1D786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7616067E26AAF4C6DC41213473B7605E2E62C438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m600E6639380982A15A28D16A871EE7E349DA4DCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B2_0 = NULL;
	Type_t * G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B1_0 = NULL;
	Type_t * G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B4_0 = NULL;
	Type_t * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B6_0 = NULL;
	Type_t * G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B5_0 = NULL;
	Type_t * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B8_0 = NULL;
	Type_t * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B7_0 = NULL;
	Type_t * G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B10_0 = NULL;
	Type_t * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B9_0 = NULL;
	Type_t * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B12_0 = NULL;
	Type_t * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B11_0 = NULL;
	Type_t * G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B14_0 = NULL;
	Type_t * G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B13_0 = NULL;
	Type_t * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B16_0 = NULL;
	Type_t * G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B15_0 = NULL;
	Type_t * G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B18_0 = NULL;
	Type_t * G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B17_0 = NULL;
	Type_t * G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B20_0 = NULL;
	Type_t * G_B20_1 = NULL;
	RuntimeObject* G_B20_2 = NULL;
	ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * G_B19_0 = NULL;
	Type_t * G_B19_1 = NULL;
	RuntimeObject* G_B19_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_3 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_0;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_5 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_6 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m3294D89A7967C1CE733E6F91729FCCCCD757937C_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_7 = L_6;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002e:
	{
		NullCheck(G_B2_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B2_2, G_B2_1, G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_11 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_2();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		G_B3_2 = L_8;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			G_B4_2 = L_8;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_13 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_14 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m1EFD47A283D3348EA652F3F7F59F33A79519B280_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_15 = L_14;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_2(L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0061:
	{
		NullCheck(G_B4_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_19 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_2_3();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = L_16;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = L_16;
			goto IL_0094;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_21 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_22 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m9DD5C4D9F3BA528F03D1BD2EBACF75323DAD9B41_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_23 = L_22;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_2_3(L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0094:
	{
		NullCheck(G_B6_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_27 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_3_4();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_28 = L_27;
		G_B7_0 = L_28;
		G_B7_1 = L_26;
		G_B7_2 = L_24;
		if (L_28)
		{
			G_B8_0 = L_28;
			G_B8_1 = L_26;
			G_B8_2 = L_24;
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_29 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_30 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mE507794CC2A60D275143740FF75095C06E0D3652_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_31 = L_30;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_3_4(L_31);
		G_B8_0 = L_31;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00c7:
	{
		NullCheck(G_B8_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B8_2, G_B8_1, G_B8_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_35 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_4_5();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_36 = L_35;
		G_B9_0 = L_36;
		G_B9_1 = L_34;
		G_B9_2 = L_32;
		if (L_36)
		{
			G_B10_0 = L_36;
			G_B10_1 = L_34;
			G_B10_2 = L_32;
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_37 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_38 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m21783424FA90939EED51CCF7DF72C0D9106E124E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_39 = L_38;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_4_5(L_39);
		G_B10_0 = L_39;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00fa:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_43 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_5_6();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_44 = L_43;
		G_B11_0 = L_44;
		G_B11_1 = L_42;
		G_B11_2 = L_40;
		if (L_44)
		{
			G_B12_0 = L_44;
			G_B12_1 = L_42;
			G_B12_2 = L_40;
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_45 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_46 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_46, L_45, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m30EDBC569557815D333D8F3BA3F4A69806198904_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_47 = L_46;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_5_6(L_47);
		G_B12_0 = L_47;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_012d:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_48 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_51 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_6_7();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_52 = L_51;
		G_B13_0 = L_52;
		G_B13_1 = L_50;
		G_B13_2 = L_48;
		if (L_52)
		{
			G_B14_0 = L_52;
			G_B14_1 = L_50;
			G_B14_2 = L_48;
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_53 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_54 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_54, L_53, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mC977D3D79E8D19CBFB093A528CEADFEB62380D7F_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_55 = L_54;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_6_7(L_55);
		G_B14_0 = L_55;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_0160:
	{
		NullCheck(G_B14_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B14_2, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_56 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_57 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58;
		L_58 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_59 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_7_8();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_60 = L_59;
		G_B15_0 = L_60;
		G_B15_1 = L_58;
		G_B15_2 = L_56;
		if (L_60)
		{
			G_B16_0 = L_60;
			G_B16_1 = L_58;
			G_B16_2 = L_56;
			goto IL_0193;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_61 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_62 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_62, L_61, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m3314C30FBAD6946DDAE096C867663B506EE1D786_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_63 = L_62;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_7_8(L_63);
		G_B16_0 = L_63;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0193:
	{
		NullCheck(G_B16_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B16_2, G_B16_1, G_B16_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_64 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66;
		L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_67 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_8_9();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_68 = L_67;
		G_B17_0 = L_68;
		G_B17_1 = L_66;
		G_B17_2 = L_64;
		if (L_68)
		{
			G_B18_0 = L_68;
			G_B18_1 = L_66;
			G_B18_2 = L_64;
			goto IL_01c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_69 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_70 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_70, L_69, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7616067E26AAF4C6DC41213473B7605E2E62C438_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_71 = L_70;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_8_9(L_71);
		G_B18_0 = L_71;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_01c6:
	{
		NullCheck(G_B18_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B18_2, G_B18_1, G_B18_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_72 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_73 = { reinterpret_cast<intptr_t> (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_74;
		L_74 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_75 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__24_9_10();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_76 = L_75;
		G_B19_0 = L_76;
		G_B19_1 = L_74;
		G_B19_2 = L_72;
		if (L_76)
		{
			G_B20_0 = L_76;
			G_B20_1 = L_74;
			G_B20_2 = L_72;
			goto IL_01f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_77 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_78 = (ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *)il2cpp_codegen_object_new(ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m0D1A127040818440370FBF544A9C9D39032BF49E(L_78, L_77, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m600E6639380982A15A28D16A871EE7E349DA4DCB_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_79 = L_78;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__24_9_10(L_79);
		G_B20_0 = L_79;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_01f9:
	{
		NullCheck(G_B20_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, G_B20_2, G_B20_1, G_B20_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mB5B3DCF191DA712B503F0C2427F35E5384D6F004 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mDD7A4F653F2B3A8543A96AAA30D2FBFFCAC60212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m21E72AA5777B08595D054673BA49CF9E593F2A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m686EB419CF73B0BDC8636B55F7A634FAA789740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m74F1E4ED9D2541A2BEE6CDB817000D7DDA310575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_mF29C40133B5443F4407EDB24E778B5D5789A0C3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_mEAB5FD8302E9A2FFC78A0E236BD73B6AB1F2B791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m141C31497D55ABC8D1519BBFA64B494863A50BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m1D1BC62B83EF74B63A14B6680B508C5020B54414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m55FFD7D545119D28CDAC4C39932B6F597A46344B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mAC3340ECA68B3E213E813A87EFECB7C13C02CF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m1943BD1FBC2E51745822615E1905D23E5F449FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m58270799B739D26928D6ED5A56787AD46E0778CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m6EB0D491D19CC5CCA63495C8DDEF05C316DA3B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m3BAA49A036978D404328E8E91F07B8894D9FAEE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mFC4DC67A36D5FCEFA5CE0B7D06BB0BCFC86AB6B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * V_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B2_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B1_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B4_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B3_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B6_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B5_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B8_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B7_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B10_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B9_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B12_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B11_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B14_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B13_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B16_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B15_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B18_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B17_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B20_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B19_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B22_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B21_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B24_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B23_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B26_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B25_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B28_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B27_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B30_0 = NULL;
	ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * G_B29_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_0 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_0_11();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_2 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_3 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mDD7A4F653F2B3A8543A96AAA30D2FBFFCAC60212_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_4 = L_3;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_0_11(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_10 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_5, L_7, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_11 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_1_12();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_13 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_14 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m141C31497D55ABC8D1519BBFA64B494863A50BA5_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_15 = L_14;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_1_12(L_15);
		G_B4_0 = L_15;
	}

IL_005e:
	{
		V_0 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_21 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_22 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_2_13();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_23 = L_22;
		G_B5_0 = L_23;
		if (L_23)
		{
			G_B6_0 = L_23;
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_24 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_25 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m1D1BC62B83EF74B63A14B6680B508C5020B54414_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_26 = L_25;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_2_13(L_26);
		G_B6_0 = L_26;
	}

IL_009d:
	{
		V_0 = G_B6_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_27 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29;
		L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_28, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_31;
		L_31 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_30, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_32 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_33 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_3_14();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_34 = L_33;
		G_B7_0 = L_34;
		if (L_34)
		{
			G_B8_0 = L_34;
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_35 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_36 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m55FFD7D545119D28CDAC4C39932B6F597A46344B_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_37 = L_36;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_3_14(L_37);
		G_B8_0 = L_37;
	}

IL_00dc:
	{
		V_0 = G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_38 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40;
		L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_43 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_38, L_40, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_44 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_4_15();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_45 = L_44;
		G_B9_0 = L_45;
		if (L_45)
		{
			G_B10_0 = L_45;
			goto IL_011b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_46 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_47 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mAC3340ECA68B3E213E813A87EFECB7C13C02CF4A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_48 = L_47;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_4_15(L_48);
		G_B10_0 = L_48;
	}

IL_011b:
	{
		V_0 = G_B10_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_50 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51;
		L_51 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_50, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_52 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_53;
		L_53 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_52, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_54 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_49, L_51, L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_55 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_5_16();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_56 = L_55;
		G_B11_0 = L_56;
		if (L_56)
		{
			G_B12_0 = L_56;
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_57 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_58 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_58, L_57, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m1943BD1FBC2E51745822615E1905D23E5F449FFA_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_59 = L_58;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_5_16(L_59);
		G_B12_0 = L_59;
	}

IL_015a:
	{
		V_0 = G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_60 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_61, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_63 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_64;
		L_64 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_63, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_65 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_60, L_62, L_64, L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_66 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_6_17();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_67 = L_66;
		G_B13_0 = L_67;
		if (L_67)
		{
			G_B14_0 = L_67;
			goto IL_0199;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_68 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_69 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_69, L_68, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m58270799B739D26928D6ED5A56787AD46E0778CD_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_70 = L_69;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_6_17(L_70);
		G_B14_0 = L_70;
	}

IL_0199:
	{
		V_0 = G_B14_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_71 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_72 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73;
		L_73 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_72, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_74 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_75;
		L_75 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_74, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_76 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_71, L_73, L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_77 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_7_18();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_78 = L_77;
		G_B15_0 = L_78;
		if (L_78)
		{
			G_B16_0 = L_78;
			goto IL_01d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_79 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_80 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_80, L_79, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m6EB0D491D19CC5CCA63495C8DDEF05C316DA3B72_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_81 = L_80;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_7_18(L_81);
		G_B16_0 = L_81;
	}

IL_01d8:
	{
		V_0 = G_B16_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_82 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_83 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_84;
		L_84 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_83, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_85 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_86;
		L_86 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_85, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_87 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_82, L_84, L_86, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_88 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_8_19();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_89 = L_88;
		G_B17_0 = L_89;
		if (L_89)
		{
			G_B18_0 = L_89;
			goto IL_0217;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_90 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_91 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_91, L_90, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m3BAA49A036978D404328E8E91F07B8894D9FAEE2_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_92 = L_91;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_8_19(L_92);
		G_B18_0 = L_92;
	}

IL_0217:
	{
		V_0 = G_B18_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_93 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_96 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_97;
		L_97 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_96, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_98 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_99 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_9_20();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_100 = L_99;
		G_B19_0 = L_100;
		if (L_100)
		{
			G_B20_0 = L_100;
			goto IL_0256;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_101 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_102 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_102, L_101, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mFC4DC67A36D5FCEFA5CE0B7D06BB0BCFC86AB6B5_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_103 = L_102;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_9_20(L_103);
		G_B20_0 = L_103;
	}

IL_0256:
	{
		V_0 = G_B20_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_104 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_107 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_108;
		L_108 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_107, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_109 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_110 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_10_21();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_111 = L_110;
		G_B21_0 = L_111;
		if (L_111)
		{
			G_B22_0 = L_111;
			goto IL_0295;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_112 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_113 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_113, L_112, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m21E72AA5777B08595D054673BA49CF9E593F2A74_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_114 = L_113;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_10_21(L_114);
		G_B22_0 = L_114;
	}

IL_0295:
	{
		V_0 = G_B22_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_115 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_116 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_117;
		L_117 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_116, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_118 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_119;
		L_119 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_118, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_120 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_115, L_117, L_119, L_120, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_121 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_11_22();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_122 = L_121;
		G_B23_0 = L_122;
		if (L_122)
		{
			G_B24_0 = L_122;
			goto IL_02d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_123 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_124 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_124, L_123, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m686EB419CF73B0BDC8636B55F7A634FAA789740D_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_125 = L_124;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_11_22(L_125);
		G_B24_0 = L_125;
	}

IL_02d4:
	{
		V_0 = G_B24_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_126 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_127 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_128;
		L_128 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_127, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_129 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_130;
		L_130 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_129, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_131 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_126, L_128, L_130, L_131, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_132 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_12_23();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_133 = L_132;
		G_B25_0 = L_133;
		if (L_133)
		{
			G_B26_0 = L_133;
			goto IL_0313;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_134 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_135 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_135, L_134, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m74F1E4ED9D2541A2BEE6CDB817000D7DDA310575_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_136 = L_135;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_12_23(L_136);
		G_B26_0 = L_136;
	}

IL_0313:
	{
		V_0 = G_B26_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_137 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_139;
		L_139 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_138, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_140 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_141;
		L_141 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_140, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_142 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_137, L_139, L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_143 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_13_24();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_144 = L_143;
		G_B27_0 = L_144;
		if (L_144)
		{
			G_B28_0 = L_144;
			goto IL_0352;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_145 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_146 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_146, L_145, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_mF29C40133B5443F4407EDB24E778B5D5789A0C3B_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_147 = L_146;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_13_24(L_147);
		G_B28_0 = L_147;
	}

IL_0352:
	{
		V_0 = G_B28_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_148 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_149 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_150;
		L_150 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_149, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_151 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_152;
		L_152 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_151, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_153 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_148, L_150, L_152, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_154 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9__25_14_25();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_155 = L_154;
		G_B29_0 = L_155;
		if (L_155)
		{
			G_B30_0 = L_155;
			goto IL_0391;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_156 = ((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_157 = (ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 *)il2cpp_codegen_object_new(ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_mEDB8D50F8F6EBB58902297054D9D86A5E8AD0F75(L_157, L_156, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_mEAB5FD8302E9A2FFC78A0E236BD73B6AB1F2B791_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_158 = L_157;
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9__25_14_25(L_158);
		G_B30_0 = L_158;
	}

IL_0391:
	{
		V_0 = G_B30_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_159 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_160 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_161;
		L_161 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_160, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_162 = { reinterpret_cast<intptr_t> (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var) };
		Type_t * L_163;
		L_163 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_162, /*hidden argument*/NULL);
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_164 = V_0;
		JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690(L_159, L_161, L_163, L_164, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m0BC258B70D7135EC449442D4F6F553E8E2CDD690 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE52B8090BAEB0506DDDD3E69A73F51F101686CFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBDF7A4E7543C054E056B356C3BEB38C62D745CCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01 * L_5 = (Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01 *)il2cpp_codegen_object_new(Dictionary_2_t425DDF0BF600A1FF4445392AAF3813F134A0DA01_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE52B8090BAEB0506DDDD3E69A73F51F101686CFD(L_5, /*hidden argument*/Dictionary_2__ctor_mE52B8090BAEB0506DDDD3E69A73F51F101686CFD_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0015:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t19DDE96E9F59F2C8613ABCD2954E919A4B9AD8B0_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t53530E0A16C71603649F9D01684B69E0D5E0A3B6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_tBDF7A4E7543C054E056B356C3BEB38C62D745CCD_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655 (RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2CB546D1C84D71C23D7D936322C4D8D160356072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t39BFB6A9706DF9863DD40D6E7EE54B91EF6FABD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Type_t * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	PropertyInfo_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B46_0 = NULL;
	{
		int32_t L_0 = ___depth3;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_max_nesting_depth_0();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18)), L_3, /*hidden argument*/NULL);
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_5 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655_RuntimeMethod_var)));
	}

IL_001e:
	{
		RuntimeObject * L_6 = ___obj0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_7, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_11;
		L_11 = JsonWriter_get_TextWriter_m32C2BEEC39481C8DD9D9DB4D8F0CEB1C594329D0_inline(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		return;
	}

IL_004b:
	{
		RuntimeObject * L_14 = ___obj0;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * >::Invoke(13 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_tC6BBB2626B57EAD269CFE4B2B26B8A690BF78709_il2cpp_TypeInfo_var)), L_15);
		return;
	}

IL_0058:
	{
		RuntimeObject * L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_17 = ___writer1;
		RuntimeObject * L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_006d:
	{
		RuntimeObject * L_19 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_20 = ___writer1;
		RuntimeObject * L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_mC2DB5F45F15CE540050B379DEDD3B7498CFBD125(L_20, ((*(double*)((double*)UnBox(L_21, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		RuntimeObject * L_22 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_23 = ___writer1;
		RuntimeObject * L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_mFB33F4779BDE9E2C699D69EB8B5219577B9C91C4(L_23, ((*(float*)((float*)UnBox(L_24, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0097:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_00ac;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_26 = ___writer1;
		RuntimeObject * L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_26, ((*(int32_t*)((int32_t*)UnBox(L_27, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00ac:
	{
		RuntimeObject * L_28 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_00c1;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_29 = ___writer1;
		RuntimeObject * L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m01D1B3986280094C490B1D081C4DDFBDDDF74FE0(L_29, ((*(bool*)((bool*)UnBox(L_30, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00c1:
	{
		RuntimeObject * L_31 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_31, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_00d6;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_32 = ___writer1;
		RuntimeObject * L_33 = ___obj0;
		NullCheck(L_32);
		JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3(L_32, ((*(int64_t*)((int64_t*)UnBox(L_33, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00d6:
	{
		RuntimeObject * L_34 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_34, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0124;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_35 = ___writer1;
		NullCheck(L_35);
		JsonWriter_WriteArrayStart_m97F42B4B853B961A365A75F6518ED58F27ED81A2(L_35, /*hidden argument*/NULL);
		RuntimeObject * L_36 = ___obj0;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_36, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_37;
		L_37 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(((RuntimeArray *)CastclassClass((RuntimeObject*)L_36, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_37;
	}

IL_00f0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0102;
		}

IL_00f2:
		{
			RuntimeObject* L_38 = V_2;
			NullCheck(L_38);
			RuntimeObject * L_39;
			L_39 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_38);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_40 = ___writer1;
			bool L_41 = ___writer_is_private2;
			int32_t L_42 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_39, L_40, L_41, ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0102:
		{
			RuntimeObject* L_43 = V_2;
			NullCheck(L_43);
			bool L_44;
			L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_00f2;
			}
		}

IL_010a:
		{
			IL2CPP_LEAVE(0x11D, FINALLY_010c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010c;
	}

FINALLY_010c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_45 = V_2;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_45, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_46 = V_3;
			if (!L_46)
			{
				goto IL_011c;
			}
		}

IL_0116:
		{
			RuntimeObject* L_47 = V_3;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_47);
		}

IL_011c:
		{
			IL2CPP_END_FINALLY(268)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(268)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11D, IL_011d)
	}

IL_011d:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_48 = ___writer1;
		NullCheck(L_48);
		JsonWriter_WriteArrayEnd_m0B12D9A2FD3397BE986517F38D8F92AAB97B77AD(L_48, /*hidden argument*/NULL);
		return;
	}

IL_0124:
	{
		RuntimeObject * L_49 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_49, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)))
		{
			goto IL_0172;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_50 = ___writer1;
		NullCheck(L_50);
		JsonWriter_WriteArrayStart_m97F42B4B853B961A365A75F6518ED58F27ED81A2(L_50, /*hidden argument*/NULL);
		RuntimeObject * L_51 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_51, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)));
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_51, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)));
		V_2 = L_52;
	}

IL_013e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0150;
		}

IL_0140:
		{
			RuntimeObject* L_53 = V_2;
			NullCheck(L_53);
			RuntimeObject * L_54;
			L_54 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_53);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_55 = ___writer1;
			bool L_56 = ___writer_is_private2;
			int32_t L_57 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_54, L_55, L_56, ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0150:
		{
			RuntimeObject* L_58 = V_2;
			NullCheck(L_58);
			bool L_59;
			L_59 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_58);
			if (L_59)
			{
				goto IL_0140;
			}
		}

IL_0158:
		{
			IL2CPP_LEAVE(0x16B, FINALLY_015a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015a;
	}

FINALLY_015a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_60 = V_2;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_60, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_61 = V_3;
			if (!L_61)
			{
				goto IL_016a;
			}
		}

IL_0164:
		{
			RuntimeObject* L_62 = V_3;
			NullCheck(L_62);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_62);
		}

IL_016a:
		{
			IL2CPP_END_FINALLY(346)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(346)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16B, IL_016b)
	}

IL_016b:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_63 = ___writer1;
		NullCheck(L_63);
		JsonWriter_WriteArrayEnd_m0B12D9A2FD3397BE986517F38D8F92AAB97B77AD(L_63, /*hidden argument*/NULL);
		return;
	}

IL_0172:
	{
		RuntimeObject * L_64 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_64, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		RuntimeObject* L_65 = V_0;
		if (!L_65)
		{
			goto IL_0203;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_66 = ___writer1;
		NullCheck(L_66);
		JsonWriter_WriteObjectStart_mD919692F9AB62C076E3CDBEA2C950D467F406753(L_66, /*hidden argument*/NULL);
		RuntimeObject* L_67 = V_0;
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_67);
		V_4 = L_68;
	}

IL_018d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01df;
		}

IL_018f:
		{
			RuntimeObject* L_69 = V_4;
			NullCheck(L_69);
			RuntimeObject * L_70;
			L_70 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_69);
			V_5 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_70, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			RuntimeObject * L_71;
			L_71 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_5), /*hidden argument*/NULL);
			V_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_71, String_t_il2cpp_TypeInfo_var));
			String_t* L_72 = V_7;
			if (L_72)
			{
				goto IL_01c2;
			}
		}

IL_01af:
		{
			RuntimeObject * L_73;
			L_73 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_5), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_74;
			L_74 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			String_t* L_75;
			L_75 = Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB(L_73, L_74, /*hidden argument*/NULL);
			G_B46_0 = L_75;
			goto IL_01c4;
		}

IL_01c2:
		{
			String_t* L_76 = V_7;
			G_B46_0 = L_76;
		}

IL_01c4:
		{
			V_6 = G_B46_0;
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_77 = ___writer1;
			String_t* L_78 = V_6;
			NullCheck(L_77);
			JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534(L_77, L_78, /*hidden argument*/NULL);
			RuntimeObject * L_79;
			L_79 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_5), /*hidden argument*/NULL);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_80 = ___writer1;
			bool L_81 = ___writer_is_private2;
			int32_t L_82 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_79, L_80, L_81, ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_01df:
		{
			RuntimeObject* L_83 = V_4;
			NullCheck(L_83);
			bool L_84;
			L_84 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_83);
			if (L_84)
			{
				goto IL_018f;
			}
		}

IL_01e8:
		{
			IL2CPP_LEAVE(0x1FC, FINALLY_01ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ea;
	}

FINALLY_01ea:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_85 = V_4;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_85, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_86 = V_3;
			if (!L_86)
			{
				goto IL_01fb;
			}
		}

IL_01f5:
		{
			RuntimeObject* L_87 = V_3;
			NullCheck(L_87);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_87);
		}

IL_01fb:
		{
			IL2CPP_END_FINALLY(490)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(490)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1FC, IL_01fc)
	}

IL_01fc:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_88 = ___writer1;
		NullCheck(L_88);
		JsonWriter_WriteObjectEnd_m4A15F84179BBB3FB61377209D7A63DA3D79F3213(L_88, /*hidden argument*/NULL);
		return;
	}

IL_0203:
	{
		RuntimeObject * L_89 = ___obj0;
		NullCheck(L_89);
		Type_t * L_90;
		L_90 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_89, /*hidden argument*/NULL);
		V_1 = L_90;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_91 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_92 = V_1;
		NullCheck(L_91);
		bool L_93;
		L_93 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, L_91, L_92);
		if (!L_93)
		{
			goto IL_022a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_94 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_95 = V_1;
		NullCheck(L_94);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_96;
		L_96 = InterfaceFuncInvoker1< ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, L_94, L_95);
		RuntimeObject * L_97 = ___obj0;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_98 = ___writer1;
		NullCheck(L_96);
		ExporterFunc_Invoke_mE0DF2059BDF4FD0C15C7CADAAB9AC7287F5B6FA6(L_96, L_97, L_98, /*hidden argument*/NULL);
		return;
	}

IL_022a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_99 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_100 = V_1;
		NullCheck(L_99);
		bool L_101;
		L_101 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, L_99, L_100);
		if (!L_101)
		{
			goto IL_024a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_102 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_103 = V_1;
		NullCheck(L_102);
		ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 * L_104;
		L_104 = InterfaceFuncInvoker1< ExporterFunc_t51D71BD5CBD7C94083BA752427236A2F708449B6 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t898A133D99476DDD5051AAE3606F61E6CCCCB826_il2cpp_TypeInfo_var, L_102, L_103);
		RuntimeObject * L_105 = ___obj0;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_106 = ___writer1;
		NullCheck(L_104);
		ExporterFunc_Invoke_mE0DF2059BDF4FD0C15C7CADAAB9AC7287F5B6FA6(L_104, L_105, L_106, /*hidden argument*/NULL);
		return;
	}

IL_024a:
	{
		RuntimeObject * L_107 = ___obj0;
		if (!((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)IsInstClass((RuntimeObject*)L_107, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var)))
		{
			goto IL_034b;
		}
	}
	{
		Type_t * L_108 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		Type_t * L_109;
		L_109 = Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53(L_108, /*hidden argument*/NULL);
		V_8 = L_109;
		Type_t * L_110 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_111 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_112;
		L_112 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_111, /*hidden argument*/NULL);
		bool L_113;
		L_113 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_110, L_112, /*hidden argument*/NULL);
		if (!L_113)
		{
			goto IL_027d;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_114 = ___writer1;
		RuntimeObject * L_115 = ___obj0;
		NullCheck(L_114);
		JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3(L_114, ((*(int64_t*)((int64_t*)UnBox(L_115, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		Type_t * L_116 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_117 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_118;
		L_118 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_117, /*hidden argument*/NULL);
		bool L_119;
		L_119 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_116, L_118, /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_029e;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_120 = ___writer1;
		RuntimeObject * L_121 = ___obj0;
		NullCheck(L_120);
		JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3(L_120, ((int64_t)((uint64_t)((*(uint32_t*)((uint32_t*)UnBox(L_121, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return;
	}

IL_029e:
	{
		Type_t * L_122 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_123 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_124;
		L_124 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_123, /*hidden argument*/NULL);
		bool L_125;
		L_125 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_122, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_02be;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_126 = ___writer1;
		RuntimeObject * L_127 = ___obj0;
		NullCheck(L_126);
		JsonWriter_Write_m679D6F00860149C05D900AB269421221DA3D2C1E(L_126, ((*(uint64_t*)((uint64_t*)UnBox(L_127, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_02be:
	{
		Type_t * L_128 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_129 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_130;
		L_130 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_129, /*hidden argument*/NULL);
		bool L_131;
		L_131 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_128, L_130, /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_02de;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_132 = ___writer1;
		RuntimeObject * L_133 = ___obj0;
		NullCheck(L_132);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_132, ((*(uint16_t*)((uint16_t*)UnBox(L_133, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_02de:
	{
		Type_t * L_134 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_135 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_136;
		L_136 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_135, /*hidden argument*/NULL);
		bool L_137;
		L_137 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_134, L_136, /*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_02fe;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_138 = ___writer1;
		RuntimeObject * L_139 = ___obj0;
		NullCheck(L_138);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_138, ((*(int16_t*)((int16_t*)UnBox(L_139, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_02fe:
	{
		Type_t * L_140 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_141 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_142;
		L_142 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_141, /*hidden argument*/NULL);
		bool L_143;
		L_143 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_140, L_142, /*hidden argument*/NULL);
		if (!L_143)
		{
			goto IL_031e;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_144 = ___writer1;
		RuntimeObject * L_145 = ___obj0;
		NullCheck(L_144);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_144, ((*(uint8_t*)((uint8_t*)UnBox(L_145, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_031e:
	{
		Type_t * L_146 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_147 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_148;
		L_148 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_147, /*hidden argument*/NULL);
		bool L_149;
		L_149 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_146, L_148, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_033e;
		}
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_150 = ___writer1;
		RuntimeObject * L_151 = ___obj0;
		NullCheck(L_150);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_150, ((*(int8_t*)((int8_t*)UnBox(L_151, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_033e:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_152 = ___writer1;
		RuntimeObject * L_153 = ___obj0;
		NullCheck(L_152);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_152, ((*(int32_t*)((int32_t*)UnBox(L_153, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_034b:
	{
		Type_t * L_154 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m554C909CC02E6EC6CBEF66FACA38843A36AEB51F(L_154, /*hidden argument*/NULL);
		RuntimeObject* L_155 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_156 = V_1;
		NullCheck(L_155);
		RuntimeObject* L_157;
		L_157 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(!0) */, IDictionary_2_t19C43747A8CDA083AC3615B8074B83C18230689D_il2cpp_TypeInfo_var, L_155, L_156);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_158 = ___writer1;
		NullCheck(L_158);
		JsonWriter_WriteObjectStart_mD919692F9AB62C076E3CDBEA2C950D467F406753(L_158, /*hidden argument*/NULL);
		NullCheck(L_157);
		RuntimeObject* L_159;
		L_159 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_t2CB546D1C84D71C23D7D936322C4D8D160356072_il2cpp_TypeInfo_var, L_157);
		V_9 = L_159;
	}

IL_0369:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03e9;
		}

IL_036b:
		{
			RuntimeObject* L_160 = V_9;
			NullCheck(L_160);
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_161;
			L_161 = InterfaceFuncInvoker0< PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t39BFB6A9706DF9863DD40D6E7EE54B91EF6FABD9_il2cpp_TypeInfo_var, L_160);
			V_10 = L_161;
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_162 = V_10;
			bool L_163 = L_162.get_IsField_1();
			if (!L_163)
			{
				goto IL_03ad;
			}
		}

IL_037d:
		{
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_164 = ___writer1;
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_165 = V_10;
			MemberInfo_t * L_166 = L_165.get_Info_0();
			NullCheck(L_166);
			String_t* L_167;
			L_167 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_166);
			NullCheck(L_164);
			JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534(L_164, L_167, /*hidden argument*/NULL);
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_168 = V_10;
			MemberInfo_t * L_169 = L_168.get_Info_0();
			RuntimeObject * L_170 = ___obj0;
			NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_169, FieldInfo_t_il2cpp_TypeInfo_var)));
			RuntimeObject * L_171;
			L_171 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_169, FieldInfo_t_il2cpp_TypeInfo_var)), L_170);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_172 = ___writer1;
			bool L_173 = ___writer_is_private2;
			int32_t L_174 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_171, L_172, L_173, ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_03e9;
		}

IL_03ad:
		{
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_175 = V_10;
			MemberInfo_t * L_176 = L_175.get_Info_0();
			V_11 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_176, PropertyInfo_t_il2cpp_TypeInfo_var));
			PropertyInfo_t * L_177 = V_11;
			NullCheck(L_177);
			bool L_178;
			L_178 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_177);
			if (!L_178)
			{
				goto IL_03e9;
			}
		}

IL_03c4:
		{
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_179 = ___writer1;
			PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C  L_180 = V_10;
			MemberInfo_t * L_181 = L_180.get_Info_0();
			NullCheck(L_181);
			String_t* L_182;
			L_182 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_181);
			NullCheck(L_179);
			JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534(L_179, L_182, /*hidden argument*/NULL);
			PropertyInfo_t * L_183 = V_11;
			RuntimeObject * L_184 = ___obj0;
			NullCheck(L_183);
			RuntimeObject * L_185;
			L_185 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_183, L_184, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
			JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_186 = ___writer1;
			bool L_187 = ___writer_is_private2;
			int32_t L_188 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_185, L_186, L_187, ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_03e9:
		{
			RuntimeObject* L_189 = V_9;
			NullCheck(L_189);
			bool L_190;
			L_190 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_189);
			if (L_190)
			{
				goto IL_036b;
			}
		}

IL_03f5:
		{
			IL2CPP_LEAVE(0x403, FINALLY_03f7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03f7;
	}

FINALLY_03f7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_191 = V_9;
			if (!L_191)
			{
				goto IL_0402;
			}
		}

IL_03fb:
		{
			RuntimeObject* L_192 = V_9;
			NullCheck(L_192);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_192);
		}

IL_0402:
		{
			IL2CPP_END_FINALLY(1015)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1015)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x403, IL_0403)
	}

IL_0403:
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_193 = ___writer1;
		NullCheck(L_193);
		JsonWriter_WriteObjectEnd_m4A15F84179BBB3FB61377209D7A63DA3D79F3213(L_193, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m5B81CB920F5ED4520C548981748704BB536F2C4C (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_static_writer_lock_15();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_2 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_2);
		JsonWriter_Reset_mD0C0CA7CDA559C4B218026A62C8960842F2F5F56(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___obj0;
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_4 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_static_writer_14();
		JsonMapper_WriteValue_m7C87FE0C0F296F4429AA30D10726177C22097655(L_3, L_4, (bool)1, 0, /*hidden argument*/NULL);
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_5 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_2 = L_6;
		IL2CPP_LEAVE(0x3E, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		String_t* L_9 = V_2;
		return L_9;
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
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m32C2BEEC39481C8DD9D9DB4D8F0CEB1C594329D0 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get_writer_11();
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m6D2E2B3E7754C79332C98D72E0C4FD26DE8A777A (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_validate_9();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m6B52A6B388D807B9B914AE9FE178D0F2BDDD17D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mF8BFE4E334D770453BBAEDA2CA09CB17A79FE3B8 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_11(L_2);
		JsonWriter_Init_m575795591118467EB41462D15B5F0215F4253DDF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m8A45A4B37997D5AC4393D28EC9EBE9B376238E25 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m8A45A4B37997D5AC4393D28EC9EBE9B376238E25_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___writer0;
		__this->set_writer_11(L_2);
		JsonWriter_Init_m575795591118467EB41462D15B5F0215F4253DDF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_2 = __this->get_context_1();
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0020:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_7 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return;
	}

IL_0057:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_9 = __this->get_context_1();
		NullCheck(L_9);
		bool L_10 = L_9->get_InArray_1();
		if (L_10)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_11 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_0072:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_12 = __this->get_context_1();
		NullCheck(L_12);
		bool L_13 = L_12->get_InObject_2();
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_ExpectingValue_3();
		if (!L_15)
		{
			goto IL_0116;
		}
	}

IL_008f:
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_16 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_009a:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_17 = __this->get_context_1();
		NullCheck(L_17);
		bool L_18 = L_17->get_InObject_2();
		if (!L_18)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_19 = __this->get_context_1();
		NullCheck(L_19);
		bool L_20 = L_19->get_ExpectingValue_3();
		if (L_20)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_21 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_00bf:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_22 = __this->get_context_1();
		NullCheck(L_22);
		bool L_23 = L_22->get_InObject_2();
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_ExpectingValue_3();
		if (!L_25)
		{
			goto IL_0116;
		}
	}

IL_00d9:
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_26 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_00e4:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_27 = __this->get_context_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_InArray_1();
		if (L_28)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_29 = __this->get_context_1();
		NullCheck(L_29);
		bool L_30 = L_29->get_InObject_2();
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_31 = __this->get_context_1();
		NullCheck(L_31);
		bool L_32 = L_31->get_ExpectingValue_3();
		if (L_32)
		{
			goto IL_0116;
		}
	}

IL_010b:
	{
		JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E * L_33 = (JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t9D5EFA59BEF6E947EABD76C7124307D06A8D1A4E_il2cpp_TypeInfo_var)));
		JsonException__ctor_mD6A27213FCFA66BEB4BA0887CC714A4EA2663335(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17_RuntimeMethod_var)));
	}

IL_0116:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m575795591118467EB41462D15B5F0215F4253DDF (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m8B85B1791EC0CC2DDB1E2848C13CCAD55743B511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		__this->set_lower_case_properties_10((bool)0);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_1 = (Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E *)il2cpp_codegen_object_new(Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E_il2cpp_TypeInfo_var);
		Stack_1__ctor_m8B85B1791EC0CC2DDB1E2848C13CCAD55743B511(L_1, /*hidden argument*/Stack_1__ctor_m8B85B1791EC0CC2DDB1E2848C13CCAD55743B511_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_2 = (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A *)il2cpp_codegen_object_new(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_3 = __this->get_ctx_stack_2();
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D(L_3, L_4, /*hidden argument*/Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m6879C7BB33822B772DEEF59150A42C87F432407B (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4)))));
		goto IL_0027;
	}

IL_001a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10))))))));
	}

IL_0027:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_mE8E56C393D4003DB098A08A821A1F4FC2E0AEFE7 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = __this->get_writer_11();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = __this->get_writer_11();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_mE29E9098071B00B132090535FAA5D6FC405FED3B(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mE29E9098071B00B132090535FAA5D6FC405FED3B (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = __this->get_writer_11();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = __this->get_writer_11();
		String_t* L_10;
		L_10 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
	}

IL_0050:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m0C292FCE6A5DC8FF178D4FEFA95264E54722B9AA (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = __this->get_writer_11();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_10 = __this->get_writer_11();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		goto IL_0141;
	}

IL_0072:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_11 = __this->get_writer_11();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		goto IL_0141;
	}

IL_0087:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_12 = __this->get_writer_11();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		goto IL_0141;
	}

IL_009c:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_13 = __this->get_writer_11();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = __this->get_writer_11();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0141;
	}

IL_00c0:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		goto IL_0141;
	}

IL_00d2:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_19 = __this->get_writer_11();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		goto IL_0141;
	}

IL_00e4:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_26 = __this->get_writer_11();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0141;
	}

IL_010e:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m6879C7BB33822B772DEEF59150A42C87F432407B(L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_34 = __this->get_writer_11();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_35 = __this->get_writer_11();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_40 = __this->get_writer_11();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m1A290CD3A1A9C0F08192321F376C4E20218EC041 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_mA64AE8AD702A81251FB8985B4AD71A671352F170 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mD0C0CA7CDA559C4B218026A62C8960842F2F5F56 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m55014D4CDF8DC347B44A107DCBCEC684B9E565EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Clear_m55014D4CDF8DC347B44A107DCBCEC684B9E565EA(L_0, /*hidden argument*/Stack_1_Clear_m55014D4CDF8DC347B44A107DCBCEC684B9E565EA_RuntimeMethod_var);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A *)il2cpp_codegen_object_new(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_2 = __this->get_ctx_stack_2();
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D(L_2, L_3, /*hidden argument*/Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		StringBuilder_t * L_4 = __this->get_inst_string_builder_7();
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get_inst_string_builder_7();
		StringBuilder_t * L_6 = __this->get_inst_string_builder_7();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m01D1B3986280094C490B1D081C4DDFBDDDF74FE0 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * G_B2_0 = NULL;
	JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m22BB83DF5B5FC8248612CF527305D6FC80E27312 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC2DB5F45F15CE540050B379DEDD3B7498CFBD125 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = __this->get_writer_11();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_0046:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mFB33F4779BDE9E2C699D69EB8B5219577B9C91C4 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, float ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		float L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7FB984128CEAAE2A92EF7AC1D299BB0908183A79(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_3, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_4 = __this->get_context_1();
		NullCheck(L_4);
		L_4->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF0752B1872CDE7E25EA84C1E5F7876E843BEA2A3 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m0C292FCE6A5DC8FF178D4FEFA95264E54722B9AA(__this, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m679D6F00860149C05D900AB269421221DA3D2C1E (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m0B12D9A2FD3397BE986517F38D8F92AAB97B77AD (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mE29E9098071B00B132090535FAA5D6FC405FED3B(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1;
		L_1 = Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461(L_0, /*hidden argument*/Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461_RuntimeMethod_var);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_inline(L_2, /*hidden argument*/Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_5;
		L_5 = Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5(L_4, /*hidden argument*/Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_m1A290CD3A1A9C0F08192321F376C4E20218EC041(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m97F42B4B853B961A365A75F6518ED58F27ED81A2 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_0 = (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A *)il2cpp_codegen_object_new(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_2 = __this->get_ctx_stack_2();
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D(L_2, L_3, /*hidden argument*/Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		JsonWriter_Indent_mE8E56C393D4003DB098A08A821A1F4FC2E0AEFE7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m4A15F84179BBB3FB61377209D7A63DA3D79F3213 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mE29E9098071B00B132090535FAA5D6FC405FED3B(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1;
		L_1 = Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461(L_0, /*hidden argument*/Stack_1_Pop_m143F23C2EFD5A48F522B0F4B4EDE7008DDCB1461_RuntimeMethod_var);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_inline(L_2, /*hidden argument*/Stack_1_get_Count_m752E76497C6EAD9DE5378B31F79693EACC56D25B_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_5;
		L_5 = Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5(L_4, /*hidden argument*/Stack_1_Peek_m61B7EB1B5E0CB93EEF3B5072A44C777087F6AED5_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_m1A290CD3A1A9C0F08192321F376C4E20218EC041(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_mD919692F9AB62C076E3CDBEA2C950D467F406753 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m175DD340A9DCFB8DFFCAD719906707B1D9717BE0(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_0 = (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A *)il2cpp_codegen_object_new(WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A_il2cpp_TypeInfo_var);
		WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_tEF7B8CFD8C3F89A8C0FAB35690F9B418F18A086E * L_2 = __this->get_ctx_stack_2();
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D(L_2, L_3, /*hidden argument*/Stack_1_Push_m547B065AF10AA88EE7591998B0F73B55CB80364D_RuntimeMethod_var);
		JsonWriter_Indent_mE8E56C393D4003DB098A08A821A1F4FC2E0AEFE7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m6BBF4AAF3A53089E90ABB64ECC256ED6809C4534 (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	{
		JsonWriter_DoValidation_m215EF907A97E49A723CC9A4EE0F611F058142D17(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mD6094ED890DF924CBA39440D79BC6BA718BB4A7F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = __this->get_lower_case_properties_10();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_2, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		String_t* L_4 = ___property_name0;
		G_B4_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		String_t* L_5 = V_0;
		JsonWriter_PutString_m0C292FCE6A5DC8FF178D4FEFA95264E54722B9AA(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_11 = __this->get_context_1();
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_Padding_4(L_13);
	}

IL_0055:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_14 = __this->get_context_1();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Padding_4();
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_17));
		goto IL_007b;
	}

IL_006a:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, ((int32_t)32));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_21 = __this->get_writer_11();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_009e;
	}

IL_0091:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_22 = __this->get_writer_11();
		NullCheck(L_22);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_22, ((int32_t)58));
	}

IL_009e:
	{
		WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * L_23 = __this->get_context_1();
		NullCheck(L_23);
		L_23->set_ExpectingValue_3((bool)1);
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
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_pinvoke(const ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505& unmarshaled, ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_pinvoke_back(const ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_pinvoke& marshaled, ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_pinvoke_cleanup(ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_com(const ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505& unmarshaled, ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_com_back(const ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_com& marshaled, ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshal_com_cleanup(ObjectMetadata_tCDA757C78E7DE39783DA38FAC5FAA6EC797AD505_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Current_m08EC20FE13060375E2D8AC3103023059B2F5FF27 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_mD4A8A769B77593BD0EBA7B2105DA2AB6D8C4A078(__this, /*hidden argument*/NULL);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_mD4A8A769B77593BD0EBA7B2105DA2AB6D8C4A078 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_3;
		L_3 = KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_RuntimeMethod_var);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Key_m7060E8550C9CD153607CF06CD91133ED6661A107 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m6D032EA804AB2561169EEF2BBC9FE50BEC7E97AB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Value_mDEF41ED7489CA97109C785D4E8B7FDF55207FF53 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t0A32EE179C380C0FBEE967877E261B43A6AC4FE8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t50D374AC55CD61FC457BA3EACB6F5BFCDDB9769E * L_2;
		L_2 = KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_inline((KeyValuePair_2_tE1A489B4571AFA208027DCA04832E85359255D10 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m994F4F1CF968D0A10CC7AC0450DBDD4590D38A15_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mECE184838A77B057E1F4F227E74275CF26C280EA (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m0758988666C19CE30E6C382FF8AFFC058D4DFABD (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_mFC066512B99BDCE6BB1C41259DF9C60841869437 (OrderedDictionaryEnumerator_t2E56A0BF3A4560BF1A4EA8B23C18DEF08298B304 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_pinvoke(const PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C& unmarshaled, PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_pinvoke_back(const PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_pinvoke& marshaled, PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_pinvoke_cleanup(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_com(const PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C& unmarshaled, PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_com_back(const PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_com& marshaled, PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshal_com_cleanup(PropertyMetadata_t8987E433F36CE9B66504BBAAB72DF684D947765C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m0993CDDA636B80EF335E7648C8FB8FC643C5E1B9 (WriterContext_t0605DA73D25AD21EFE5B826ABD44F366DFA3623A * __this, const RuntimeMethod* method)
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
// System.Void LitJson.JsonMapper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAACA4A8E16D7F8B52FB099DB33045F7E0AA6ACB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * L_0 = (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 *)il2cpp_codegen_object_new(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB560D82FFE9BEB382B77534939BABD3F77980E60(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB560D82FFE9BEB382B77534939BABD3F77980E60 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m3294D89A7967C1CE733E6F91729FCCCCD757937C (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m1EFD47A283D3348EA652F3F7F59F33A79519B280 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m9DD5C4D9F3BA528F03D1BD2EBACF75323DAD9B41 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mE507794CC2A60D275143740FF75095C06E0D3652 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m22BB83DF5B5FC8248612CF527305D6FC80E27312(L_0, ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_1, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m21783424FA90939EED51CCF7DF72C0D9106E124E (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m30EDBC569557815D333D8F3BA3F4A69806198904 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mC977D3D79E8D19CBFB093A528CEADFEB62380D7F (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m4D0226B2155921E633EEB88F02FD880F0EC32463(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m3314C30FBAD6946DDAE096C867663B506EE1D786 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m679D6F00860149C05D900AB269421221DA3D2C1E(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7616067E26AAF4C6DC41213473B7605E2E62C438 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m679D6F00860149C05D900AB269421221DA3D2C1E(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_9(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m600E6639380982A15A28D16A871EE7E349DA4DCB (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___obj0, JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_1, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_datetime_format_1();
		String_t* L_3;
		L_3 = DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_0), _stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8CDCEF647AF2F8319F4A1893CCAE233C010C90DC(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mDD7A4F653F2B3A8543A96AAA30D2FBFFCAC60212 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m141C31497D55ABC8D1519BBFA64B494863A50BA5 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m1D1BC62B83EF74B63A14B6680B508C5020B54414 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Convert_ToInt64_mB05B99FB500FD4129E7616031A2405404524A074(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m55FFD7D545119D28CDAC4C39932B6F597A46344B (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mAC3340ECA68B3E213E813A87EFECB7C13C02CF4A (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m1943BD1FBC2E51745822615E1905D23E5F449FFA (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m58270799B739D26928D6ED5A56787AD46E0778CD (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m6EB0D491D19CC5CCA63495C8DDEF05C316DA3B72 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m3BAA49A036978D404328E8E91F07B8894D9FAEE2 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mFC4DC67A36D5FCEFA5CE0B7D06BB0BCFC86AB6B5 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m21E72AA5777B08595D054673BA49CF9E593F2A74 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m97B465B7C9620523539B9BA65C256991531C0D05(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m686EB419CF73B0BDC8636B55F7A634FAA789740D (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m74F1E4ED9D2541A2BEE6CDB817000D7DDA310575 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_mF29C40133B5443F4407EDB24E778B5D5789A0C3B (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_mEAB5FD8302E9A2FFC78A0E236BD73B6AB1F2B791 (U3CU3Ec_tFF15C44BBEF574E2982BC1888909670C801BA8C0 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t83C99DF47CDA32104159DC9CA36AF13BC1361D66_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_2;
		L_2 = DateTimeOffset_Parse_mEAC1F90F2294A19A5DC107BD74A3C50FBE5D3D56(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7B341F80FB593460E643B0CD44E0F9667BADA505_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m6D2E2B3E7754C79332C98D72E0C4FD26DE8A777A_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_validate_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m32C2BEEC39481C8DD9D9DB4D8F0CEB1C594329D0_inline (JsonWriter_tEB60EC0AA5F9A560CE15C6E6B9E6D70D612B0B75 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get_writer_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}

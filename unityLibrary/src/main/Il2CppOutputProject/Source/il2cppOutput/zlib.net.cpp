#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// ComponentAce.Compression.Libs.zlib.Deflate/Config[]
struct ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC;
// ComponentAce.Compression.Libs.zlib.Adler32
struct Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC;
// ComponentAce.Compression.Libs.zlib.Deflate
struct Deflate_t1E8313533D58AB84BF7166A0F45273505763C953;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// ComponentAce.Compression.Libs.zlib.InfBlocks
struct InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2;
// ComponentAce.Compression.Libs.zlib.InfCodes
struct InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A;
// ComponentAce.Compression.Libs.zlib.Inflate
struct Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// ComponentAce.Compression.Libs.zlib.StaticTree
struct StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// ComponentAce.Compression.Libs.zlib.Tree
struct Tree_t41355ACB403457F46C8722BE5800B70589101E81;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ComponentAce.Compression.Libs.zlib.ZOutputStream
struct ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4;
// ComponentAce.Compression.Libs.zlib.ZStream
struct ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5;
// ComponentAce.Compression.Libs.zlib.ZStreamException
struct ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22;
// ComponentAce.Compression.Libs.zlib.Deflate/Config
struct Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_Write_mC770961C5BEA43F6B630F1770D38ACA0F2289BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_finish_m0E96F16A7267AA4567BC8C4D135A6397EE07E180_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7905B32E28D6CE35C610E596BCEDDD599380ED9D 
{
public:

public:
};


// System.Object


// ComponentAce.Compression.Libs.zlib.Adler32
struct  Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// ComponentAce.Compression.Libs.zlib.Deflate
struct  Deflate_t1E8313533D58AB84BF7166A0F45273505763C953  : public RuntimeObject
{
public:
	// ComponentAce.Compression.Libs.zlib.ZStream ComponentAce.Compression.Libs.zlib.Deflate::strm
	ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm_5;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::status
	int32_t ___status_6;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Deflate::pending_buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pending_buf_7;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::pending_buf_size
	int32_t ___pending_buf_size_8;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::pending_out
	int32_t ___pending_out_9;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::pending
	int32_t ___pending_10;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::noheader
	int32_t ___noheader_11;
	// System.Byte ComponentAce.Compression.Libs.zlib.Deflate::data_type
	uint8_t ___data_type_12;
	// System.Byte ComponentAce.Compression.Libs.zlib.Deflate::method
	uint8_t ___method_13;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::last_flush
	int32_t ___last_flush_14;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::w_size
	int32_t ___w_size_15;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::w_bits
	int32_t ___w_bits_16;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::w_mask
	int32_t ___w_mask_17;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Deflate::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_18;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::window_size
	int32_t ___window_size_19;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::prev
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___prev_20;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::head
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___head_21;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::ins_h
	int32_t ___ins_h_22;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::hash_size
	int32_t ___hash_size_23;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::hash_bits
	int32_t ___hash_bits_24;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::hash_mask
	int32_t ___hash_mask_25;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::hash_shift
	int32_t ___hash_shift_26;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::block_start
	int32_t ___block_start_27;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::match_length
	int32_t ___match_length_28;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::prev_match
	int32_t ___prev_match_29;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::match_available
	int32_t ___match_available_30;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::strstart
	int32_t ___strstart_31;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::match_start
	int32_t ___match_start_32;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::lookahead
	int32_t ___lookahead_33;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::prev_length
	int32_t ___prev_length_34;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::max_chain_length
	int32_t ___max_chain_length_35;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::max_lazy_match
	int32_t ___max_lazy_match_36;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::level
	int32_t ___level_37;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::strategy
	int32_t ___strategy_38;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::good_match
	int32_t ___good_match_39;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::nice_match
	int32_t ___nice_match_40;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::dyn_ltree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_ltree_41;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::dyn_dtree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_dtree_42;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::bl_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_tree_43;
	// ComponentAce.Compression.Libs.zlib.Tree ComponentAce.Compression.Libs.zlib.Deflate::l_desc
	Tree_t41355ACB403457F46C8722BE5800B70589101E81 * ___l_desc_44;
	// ComponentAce.Compression.Libs.zlib.Tree ComponentAce.Compression.Libs.zlib.Deflate::d_desc
	Tree_t41355ACB403457F46C8722BE5800B70589101E81 * ___d_desc_45;
	// ComponentAce.Compression.Libs.zlib.Tree ComponentAce.Compression.Libs.zlib.Deflate::bl_desc
	Tree_t41355ACB403457F46C8722BE5800B70589101E81 * ___bl_desc_46;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Deflate::bl_count
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count_47;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Deflate::heap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___heap_48;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::heap_len
	int32_t ___heap_len_49;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::heap_max
	int32_t ___heap_max_50;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Deflate::depth
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___depth_51;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::l_buf
	int32_t ___l_buf_52;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::lit_bufsize
	int32_t ___lit_bufsize_53;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::last_lit
	int32_t ___last_lit_54;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::d_buf
	int32_t ___d_buf_55;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::opt_len
	int32_t ___opt_len_56;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::static_len
	int32_t ___static_len_57;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::matches
	int32_t ___matches_58;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::last_eob_len
	int32_t ___last_eob_len_59;
	// System.Int16 ComponentAce.Compression.Libs.zlib.Deflate::bi_buf
	int16_t ___bi_buf_60;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::bi_valid
	int32_t ___bi_valid_61;

public:
	inline static int32_t get_offset_of_strm_5() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___strm_5)); }
	inline ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * get_strm_5() const { return ___strm_5; }
	inline ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 ** get_address_of_strm_5() { return &___strm_5; }
	inline void set_strm_5(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * value)
	{
		___strm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strm_5), (void*)value);
	}

	inline static int32_t get_offset_of_status_6() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___status_6)); }
	inline int32_t get_status_6() const { return ___status_6; }
	inline int32_t* get_address_of_status_6() { return &___status_6; }
	inline void set_status_6(int32_t value)
	{
		___status_6 = value;
	}

	inline static int32_t get_offset_of_pending_buf_7() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___pending_buf_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pending_buf_7() const { return ___pending_buf_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pending_buf_7() { return &___pending_buf_7; }
	inline void set_pending_buf_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pending_buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_buf_size_8() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___pending_buf_size_8)); }
	inline int32_t get_pending_buf_size_8() const { return ___pending_buf_size_8; }
	inline int32_t* get_address_of_pending_buf_size_8() { return &___pending_buf_size_8; }
	inline void set_pending_buf_size_8(int32_t value)
	{
		___pending_buf_size_8 = value;
	}

	inline static int32_t get_offset_of_pending_out_9() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___pending_out_9)); }
	inline int32_t get_pending_out_9() const { return ___pending_out_9; }
	inline int32_t* get_address_of_pending_out_9() { return &___pending_out_9; }
	inline void set_pending_out_9(int32_t value)
	{
		___pending_out_9 = value;
	}

	inline static int32_t get_offset_of_pending_10() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___pending_10)); }
	inline int32_t get_pending_10() const { return ___pending_10; }
	inline int32_t* get_address_of_pending_10() { return &___pending_10; }
	inline void set_pending_10(int32_t value)
	{
		___pending_10 = value;
	}

	inline static int32_t get_offset_of_noheader_11() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___noheader_11)); }
	inline int32_t get_noheader_11() const { return ___noheader_11; }
	inline int32_t* get_address_of_noheader_11() { return &___noheader_11; }
	inline void set_noheader_11(int32_t value)
	{
		___noheader_11 = value;
	}

	inline static int32_t get_offset_of_data_type_12() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___data_type_12)); }
	inline uint8_t get_data_type_12() const { return ___data_type_12; }
	inline uint8_t* get_address_of_data_type_12() { return &___data_type_12; }
	inline void set_data_type_12(uint8_t value)
	{
		___data_type_12 = value;
	}

	inline static int32_t get_offset_of_method_13() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___method_13)); }
	inline uint8_t get_method_13() const { return ___method_13; }
	inline uint8_t* get_address_of_method_13() { return &___method_13; }
	inline void set_method_13(uint8_t value)
	{
		___method_13 = value;
	}

	inline static int32_t get_offset_of_last_flush_14() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___last_flush_14)); }
	inline int32_t get_last_flush_14() const { return ___last_flush_14; }
	inline int32_t* get_address_of_last_flush_14() { return &___last_flush_14; }
	inline void set_last_flush_14(int32_t value)
	{
		___last_flush_14 = value;
	}

	inline static int32_t get_offset_of_w_size_15() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___w_size_15)); }
	inline int32_t get_w_size_15() const { return ___w_size_15; }
	inline int32_t* get_address_of_w_size_15() { return &___w_size_15; }
	inline void set_w_size_15(int32_t value)
	{
		___w_size_15 = value;
	}

	inline static int32_t get_offset_of_w_bits_16() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___w_bits_16)); }
	inline int32_t get_w_bits_16() const { return ___w_bits_16; }
	inline int32_t* get_address_of_w_bits_16() { return &___w_bits_16; }
	inline void set_w_bits_16(int32_t value)
	{
		___w_bits_16 = value;
	}

	inline static int32_t get_offset_of_w_mask_17() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___w_mask_17)); }
	inline int32_t get_w_mask_17() const { return ___w_mask_17; }
	inline int32_t* get_address_of_w_mask_17() { return &___w_mask_17; }
	inline void set_w_mask_17(int32_t value)
	{
		___w_mask_17 = value;
	}

	inline static int32_t get_offset_of_window_18() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___window_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_18() const { return ___window_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_18() { return &___window_18; }
	inline void set_window_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_18), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_19() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___window_size_19)); }
	inline int32_t get_window_size_19() const { return ___window_size_19; }
	inline int32_t* get_address_of_window_size_19() { return &___window_size_19; }
	inline void set_window_size_19(int32_t value)
	{
		___window_size_19 = value;
	}

	inline static int32_t get_offset_of_prev_20() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___prev_20)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_prev_20() const { return ___prev_20; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_prev_20() { return &___prev_20; }
	inline void set_prev_20(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___prev_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_20), (void*)value);
	}

	inline static int32_t get_offset_of_head_21() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___head_21)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_head_21() const { return ___head_21; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_head_21() { return &___head_21; }
	inline void set_head_21(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___head_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_21), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_22() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___ins_h_22)); }
	inline int32_t get_ins_h_22() const { return ___ins_h_22; }
	inline int32_t* get_address_of_ins_h_22() { return &___ins_h_22; }
	inline void set_ins_h_22(int32_t value)
	{
		___ins_h_22 = value;
	}

	inline static int32_t get_offset_of_hash_size_23() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___hash_size_23)); }
	inline int32_t get_hash_size_23() const { return ___hash_size_23; }
	inline int32_t* get_address_of_hash_size_23() { return &___hash_size_23; }
	inline void set_hash_size_23(int32_t value)
	{
		___hash_size_23 = value;
	}

	inline static int32_t get_offset_of_hash_bits_24() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___hash_bits_24)); }
	inline int32_t get_hash_bits_24() const { return ___hash_bits_24; }
	inline int32_t* get_address_of_hash_bits_24() { return &___hash_bits_24; }
	inline void set_hash_bits_24(int32_t value)
	{
		___hash_bits_24 = value;
	}

	inline static int32_t get_offset_of_hash_mask_25() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___hash_mask_25)); }
	inline int32_t get_hash_mask_25() const { return ___hash_mask_25; }
	inline int32_t* get_address_of_hash_mask_25() { return &___hash_mask_25; }
	inline void set_hash_mask_25(int32_t value)
	{
		___hash_mask_25 = value;
	}

	inline static int32_t get_offset_of_hash_shift_26() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___hash_shift_26)); }
	inline int32_t get_hash_shift_26() const { return ___hash_shift_26; }
	inline int32_t* get_address_of_hash_shift_26() { return &___hash_shift_26; }
	inline void set_hash_shift_26(int32_t value)
	{
		___hash_shift_26 = value;
	}

	inline static int32_t get_offset_of_block_start_27() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___block_start_27)); }
	inline int32_t get_block_start_27() const { return ___block_start_27; }
	inline int32_t* get_address_of_block_start_27() { return &___block_start_27; }
	inline void set_block_start_27(int32_t value)
	{
		___block_start_27 = value;
	}

	inline static int32_t get_offset_of_match_length_28() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___match_length_28)); }
	inline int32_t get_match_length_28() const { return ___match_length_28; }
	inline int32_t* get_address_of_match_length_28() { return &___match_length_28; }
	inline void set_match_length_28(int32_t value)
	{
		___match_length_28 = value;
	}

	inline static int32_t get_offset_of_prev_match_29() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___prev_match_29)); }
	inline int32_t get_prev_match_29() const { return ___prev_match_29; }
	inline int32_t* get_address_of_prev_match_29() { return &___prev_match_29; }
	inline void set_prev_match_29(int32_t value)
	{
		___prev_match_29 = value;
	}

	inline static int32_t get_offset_of_match_available_30() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___match_available_30)); }
	inline int32_t get_match_available_30() const { return ___match_available_30; }
	inline int32_t* get_address_of_match_available_30() { return &___match_available_30; }
	inline void set_match_available_30(int32_t value)
	{
		___match_available_30 = value;
	}

	inline static int32_t get_offset_of_strstart_31() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___strstart_31)); }
	inline int32_t get_strstart_31() const { return ___strstart_31; }
	inline int32_t* get_address_of_strstart_31() { return &___strstart_31; }
	inline void set_strstart_31(int32_t value)
	{
		___strstart_31 = value;
	}

	inline static int32_t get_offset_of_match_start_32() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___match_start_32)); }
	inline int32_t get_match_start_32() const { return ___match_start_32; }
	inline int32_t* get_address_of_match_start_32() { return &___match_start_32; }
	inline void set_match_start_32(int32_t value)
	{
		___match_start_32 = value;
	}

	inline static int32_t get_offset_of_lookahead_33() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___lookahead_33)); }
	inline int32_t get_lookahead_33() const { return ___lookahead_33; }
	inline int32_t* get_address_of_lookahead_33() { return &___lookahead_33; }
	inline void set_lookahead_33(int32_t value)
	{
		___lookahead_33 = value;
	}

	inline static int32_t get_offset_of_prev_length_34() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___prev_length_34)); }
	inline int32_t get_prev_length_34() const { return ___prev_length_34; }
	inline int32_t* get_address_of_prev_length_34() { return &___prev_length_34; }
	inline void set_prev_length_34(int32_t value)
	{
		___prev_length_34 = value;
	}

	inline static int32_t get_offset_of_max_chain_length_35() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___max_chain_length_35)); }
	inline int32_t get_max_chain_length_35() const { return ___max_chain_length_35; }
	inline int32_t* get_address_of_max_chain_length_35() { return &___max_chain_length_35; }
	inline void set_max_chain_length_35(int32_t value)
	{
		___max_chain_length_35 = value;
	}

	inline static int32_t get_offset_of_max_lazy_match_36() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___max_lazy_match_36)); }
	inline int32_t get_max_lazy_match_36() const { return ___max_lazy_match_36; }
	inline int32_t* get_address_of_max_lazy_match_36() { return &___max_lazy_match_36; }
	inline void set_max_lazy_match_36(int32_t value)
	{
		___max_lazy_match_36 = value;
	}

	inline static int32_t get_offset_of_level_37() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___level_37)); }
	inline int32_t get_level_37() const { return ___level_37; }
	inline int32_t* get_address_of_level_37() { return &___level_37; }
	inline void set_level_37(int32_t value)
	{
		___level_37 = value;
	}

	inline static int32_t get_offset_of_strategy_38() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___strategy_38)); }
	inline int32_t get_strategy_38() const { return ___strategy_38; }
	inline int32_t* get_address_of_strategy_38() { return &___strategy_38; }
	inline void set_strategy_38(int32_t value)
	{
		___strategy_38 = value;
	}

	inline static int32_t get_offset_of_good_match_39() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___good_match_39)); }
	inline int32_t get_good_match_39() const { return ___good_match_39; }
	inline int32_t* get_address_of_good_match_39() { return &___good_match_39; }
	inline void set_good_match_39(int32_t value)
	{
		___good_match_39 = value;
	}

	inline static int32_t get_offset_of_nice_match_40() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___nice_match_40)); }
	inline int32_t get_nice_match_40() const { return ___nice_match_40; }
	inline int32_t* get_address_of_nice_match_40() { return &___nice_match_40; }
	inline void set_nice_match_40(int32_t value)
	{
		___nice_match_40 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_41() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___dyn_ltree_41)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_ltree_41() const { return ___dyn_ltree_41; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_ltree_41() { return &___dyn_ltree_41; }
	inline void set_dyn_ltree_41(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_ltree_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_41), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_42() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___dyn_dtree_42)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_dtree_42() const { return ___dyn_dtree_42; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_dtree_42() { return &___dyn_dtree_42; }
	inline void set_dyn_dtree_42(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_dtree_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_42), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_43() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___bl_tree_43)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_tree_43() const { return ___bl_tree_43; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_tree_43() { return &___bl_tree_43; }
	inline void set_bl_tree_43(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_tree_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_43), (void*)value);
	}

	inline static int32_t get_offset_of_l_desc_44() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___l_desc_44)); }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 * get_l_desc_44() const { return ___l_desc_44; }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 ** get_address_of_l_desc_44() { return &___l_desc_44; }
	inline void set_l_desc_44(Tree_t41355ACB403457F46C8722BE5800B70589101E81 * value)
	{
		___l_desc_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_desc_44), (void*)value);
	}

	inline static int32_t get_offset_of_d_desc_45() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___d_desc_45)); }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 * get_d_desc_45() const { return ___d_desc_45; }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 ** get_address_of_d_desc_45() { return &___d_desc_45; }
	inline void set_d_desc_45(Tree_t41355ACB403457F46C8722BE5800B70589101E81 * value)
	{
		___d_desc_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_desc_45), (void*)value);
	}

	inline static int32_t get_offset_of_bl_desc_46() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___bl_desc_46)); }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 * get_bl_desc_46() const { return ___bl_desc_46; }
	inline Tree_t41355ACB403457F46C8722BE5800B70589101E81 ** get_address_of_bl_desc_46() { return &___bl_desc_46; }
	inline void set_bl_desc_46(Tree_t41355ACB403457F46C8722BE5800B70589101E81 * value)
	{
		___bl_desc_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_desc_46), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_47() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___bl_count_47)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_count_47() const { return ___bl_count_47; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_count_47() { return &___bl_count_47; }
	inline void set_bl_count_47(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_count_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_47), (void*)value);
	}

	inline static int32_t get_offset_of_heap_48() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___heap_48)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_heap_48() const { return ___heap_48; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_heap_48() { return &___heap_48; }
	inline void set_heap_48(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___heap_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_48), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_49() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___heap_len_49)); }
	inline int32_t get_heap_len_49() const { return ___heap_len_49; }
	inline int32_t* get_address_of_heap_len_49() { return &___heap_len_49; }
	inline void set_heap_len_49(int32_t value)
	{
		___heap_len_49 = value;
	}

	inline static int32_t get_offset_of_heap_max_50() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___heap_max_50)); }
	inline int32_t get_heap_max_50() const { return ___heap_max_50; }
	inline int32_t* get_address_of_heap_max_50() { return &___heap_max_50; }
	inline void set_heap_max_50(int32_t value)
	{
		___heap_max_50 = value;
	}

	inline static int32_t get_offset_of_depth_51() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___depth_51)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_depth_51() const { return ___depth_51; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_depth_51() { return &___depth_51; }
	inline void set_depth_51(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___depth_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_51), (void*)value);
	}

	inline static int32_t get_offset_of_l_buf_52() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___l_buf_52)); }
	inline int32_t get_l_buf_52() const { return ___l_buf_52; }
	inline int32_t* get_address_of_l_buf_52() { return &___l_buf_52; }
	inline void set_l_buf_52(int32_t value)
	{
		___l_buf_52 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_53() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___lit_bufsize_53)); }
	inline int32_t get_lit_bufsize_53() const { return ___lit_bufsize_53; }
	inline int32_t* get_address_of_lit_bufsize_53() { return &___lit_bufsize_53; }
	inline void set_lit_bufsize_53(int32_t value)
	{
		___lit_bufsize_53 = value;
	}

	inline static int32_t get_offset_of_last_lit_54() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___last_lit_54)); }
	inline int32_t get_last_lit_54() const { return ___last_lit_54; }
	inline int32_t* get_address_of_last_lit_54() { return &___last_lit_54; }
	inline void set_last_lit_54(int32_t value)
	{
		___last_lit_54 = value;
	}

	inline static int32_t get_offset_of_d_buf_55() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___d_buf_55)); }
	inline int32_t get_d_buf_55() const { return ___d_buf_55; }
	inline int32_t* get_address_of_d_buf_55() { return &___d_buf_55; }
	inline void set_d_buf_55(int32_t value)
	{
		___d_buf_55 = value;
	}

	inline static int32_t get_offset_of_opt_len_56() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___opt_len_56)); }
	inline int32_t get_opt_len_56() const { return ___opt_len_56; }
	inline int32_t* get_address_of_opt_len_56() { return &___opt_len_56; }
	inline void set_opt_len_56(int32_t value)
	{
		___opt_len_56 = value;
	}

	inline static int32_t get_offset_of_static_len_57() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___static_len_57)); }
	inline int32_t get_static_len_57() const { return ___static_len_57; }
	inline int32_t* get_address_of_static_len_57() { return &___static_len_57; }
	inline void set_static_len_57(int32_t value)
	{
		___static_len_57 = value;
	}

	inline static int32_t get_offset_of_matches_58() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___matches_58)); }
	inline int32_t get_matches_58() const { return ___matches_58; }
	inline int32_t* get_address_of_matches_58() { return &___matches_58; }
	inline void set_matches_58(int32_t value)
	{
		___matches_58 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_59() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___last_eob_len_59)); }
	inline int32_t get_last_eob_len_59() const { return ___last_eob_len_59; }
	inline int32_t* get_address_of_last_eob_len_59() { return &___last_eob_len_59; }
	inline void set_last_eob_len_59(int32_t value)
	{
		___last_eob_len_59 = value;
	}

	inline static int32_t get_offset_of_bi_buf_60() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___bi_buf_60)); }
	inline int16_t get_bi_buf_60() const { return ___bi_buf_60; }
	inline int16_t* get_address_of_bi_buf_60() { return &___bi_buf_60; }
	inline void set_bi_buf_60(int16_t value)
	{
		___bi_buf_60 = value;
	}

	inline static int32_t get_offset_of_bi_valid_61() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953, ___bi_valid_61)); }
	inline int32_t get_bi_valid_61() const { return ___bi_valid_61; }
	inline int32_t* get_address_of_bi_valid_61() { return &___bi_valid_61; }
	inline void set_bi_valid_61(int32_t value)
	{
		___bi_valid_61 = value;
	}
};

struct Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields
{
public:
	// ComponentAce.Compression.Libs.zlib.Deflate/Config[] ComponentAce.Compression.Libs.zlib.Deflate::config_table
	ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* ___config_table_0;
	// System.String[] ComponentAce.Compression.Libs.zlib.Deflate::z_errmsg
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___z_errmsg_1;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_2;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::L_CODES
	int32_t ___L_CODES_3;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::HEAP_SIZE
	int32_t ___HEAP_SIZE_4;

public:
	inline static int32_t get_offset_of_config_table_0() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields, ___config_table_0)); }
	inline ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* get_config_table_0() const { return ___config_table_0; }
	inline ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC** get_address_of_config_table_0() { return &___config_table_0; }
	inline void set_config_table_0(ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* value)
	{
		___config_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_table_0), (void*)value);
	}

	inline static int32_t get_offset_of_z_errmsg_1() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields, ___z_errmsg_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_z_errmsg_1() const { return ___z_errmsg_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_z_errmsg_1() { return &___z_errmsg_1; }
	inline void set_z_errmsg_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___z_errmsg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_errmsg_1), (void*)value);
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_2() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields, ___MIN_LOOKAHEAD_2)); }
	inline int32_t get_MIN_LOOKAHEAD_2() const { return ___MIN_LOOKAHEAD_2; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_2() { return &___MIN_LOOKAHEAD_2; }
	inline void set_MIN_LOOKAHEAD_2(int32_t value)
	{
		___MIN_LOOKAHEAD_2 = value;
	}

	inline static int32_t get_offset_of_L_CODES_3() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields, ___L_CODES_3)); }
	inline int32_t get_L_CODES_3() const { return ___L_CODES_3; }
	inline int32_t* get_address_of_L_CODES_3() { return &___L_CODES_3; }
	inline void set_L_CODES_3(int32_t value)
	{
		___L_CODES_3 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_4() { return static_cast<int32_t>(offsetof(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields, ___HEAP_SIZE_4)); }
	inline int32_t get_HEAP_SIZE_4() const { return ___HEAP_SIZE_4; }
	inline int32_t* get_address_of_HEAP_SIZE_4() { return &___HEAP_SIZE_4; }
	inline void set_HEAP_SIZE_4(int32_t value)
	{
		___HEAP_SIZE_4 = value;
	}
};


// ComponentAce.Compression.Libs.zlib.InfBlocks
struct  InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2  : public RuntimeObject
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::mode
	int32_t ___mode_2;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::left
	int32_t ___left_3;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::table
	int32_t ___table_4;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::index
	int32_t ___index_5;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::blens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___blens_6;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::bb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb_7;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::tb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb_8;
	// ComponentAce.Compression.Libs.zlib.InfCodes ComponentAce.Compression.Libs.zlib.InfBlocks::codes
	InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * ___codes_9;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::last
	int32_t ___last_10;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::hufts
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hufts_13;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.InfBlocks::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_14;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::end
	int32_t ___end_15;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::read
	int32_t ___read_16;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::write
	int32_t ___write_17;
	// System.Object ComponentAce.Compression.Libs.zlib.InfBlocks::checkfn
	RuntimeObject * ___checkfn_18;
	// System.Int64 ComponentAce.Compression.Libs.zlib.InfBlocks::check
	int64_t ___check_19;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___table_4)); }
	inline int32_t get_table_4() const { return ___table_4; }
	inline int32_t* get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(int32_t value)
	{
		___table_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_blens_6() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___blens_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_blens_6() const { return ___blens_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_blens_6() { return &___blens_6; }
	inline void set_blens_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___blens_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blens_6), (void*)value);
	}

	inline static int32_t get_offset_of_bb_7() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___bb_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bb_7() const { return ___bb_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bb_7() { return &___bb_7; }
	inline void set_bb_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bb_7), (void*)value);
	}

	inline static int32_t get_offset_of_tb_8() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___tb_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tb_8() const { return ___tb_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tb_8() { return &___tb_8; }
	inline void set_tb_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tb_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tb_8), (void*)value);
	}

	inline static int32_t get_offset_of_codes_9() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___codes_9)); }
	inline InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * get_codes_9() const { return ___codes_9; }
	inline InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A ** get_address_of_codes_9() { return &___codes_9; }
	inline void set_codes_9(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * value)
	{
		___codes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codes_9), (void*)value);
	}

	inline static int32_t get_offset_of_last_10() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___last_10)); }
	inline int32_t get_last_10() const { return ___last_10; }
	inline int32_t* get_address_of_last_10() { return &___last_10; }
	inline void set_last_10(int32_t value)
	{
		___last_10 = value;
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___hufts_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hufts_13), (void*)value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___window_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_14), (void*)value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_read_16() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___read_16)); }
	inline int32_t get_read_16() const { return ___read_16; }
	inline int32_t* get_address_of_read_16() { return &___read_16; }
	inline void set_read_16(int32_t value)
	{
		___read_16 = value;
	}

	inline static int32_t get_offset_of_write_17() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___write_17)); }
	inline int32_t get_write_17() const { return ___write_17; }
	inline int32_t* get_address_of_write_17() { return &___write_17; }
	inline void set_write_17(int32_t value)
	{
		___write_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___checkfn_18)); }
	inline RuntimeObject * get_checkfn_18() const { return ___checkfn_18; }
	inline RuntimeObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(RuntimeObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkfn_18), (void*)value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2, ___check_19)); }
	inline int64_t get_check_19() const { return ___check_19; }
	inline int64_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(int64_t value)
	{
		___check_19 = value;
	}
};

struct InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields
{
public:
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::inflate_mask
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___inflate_mask_0;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfBlocks::border
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___border_1;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflate_mask_0), (void*)value);
	}

	inline static int32_t get_offset_of_border_1() { return static_cast<int32_t>(offsetof(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields, ___border_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_border_1() const { return ___border_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_border_1() { return &___border_1; }
	inline void set_border_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___border_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___border_1), (void*)value);
	}
};


// ComponentAce.Compression.Libs.zlib.InfCodes
struct  InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A  : public RuntimeObject
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::mode
	int32_t ___mode_1;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::len
	int32_t ___len_2;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfCodes::tree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tree_3;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::tree_index
	int32_t ___tree_index_4;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::need
	int32_t ___need_5;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::lit
	int32_t ___lit_6;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::get_Renamed
	int32_t ___get_Renamed_7;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::dist
	int32_t ___dist_8;
	// System.Byte ComponentAce.Compression.Libs.zlib.InfCodes::lbits
	uint8_t ___lbits_9;
	// System.Byte ComponentAce.Compression.Libs.zlib.InfCodes::dbits
	uint8_t ___dbits_10;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfCodes::ltree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ltree_11;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::ltree_index
	int32_t ___ltree_index_12;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfCodes::dtree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dtree_13;
	// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::dtree_index
	int32_t ___dtree_index_14;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_tree_3() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___tree_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tree_3() const { return ___tree_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tree_3() { return &___tree_3; }
	inline void set_tree_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_3), (void*)value);
	}

	inline static int32_t get_offset_of_tree_index_4() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___tree_index_4)); }
	inline int32_t get_tree_index_4() const { return ___tree_index_4; }
	inline int32_t* get_address_of_tree_index_4() { return &___tree_index_4; }
	inline void set_tree_index_4(int32_t value)
	{
		___tree_index_4 = value;
	}

	inline static int32_t get_offset_of_need_5() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___need_5)); }
	inline int32_t get_need_5() const { return ___need_5; }
	inline int32_t* get_address_of_need_5() { return &___need_5; }
	inline void set_need_5(int32_t value)
	{
		___need_5 = value;
	}

	inline static int32_t get_offset_of_lit_6() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___lit_6)); }
	inline int32_t get_lit_6() const { return ___lit_6; }
	inline int32_t* get_address_of_lit_6() { return &___lit_6; }
	inline void set_lit_6(int32_t value)
	{
		___lit_6 = value;
	}

	inline static int32_t get_offset_of_get_Renamed_7() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___get_Renamed_7)); }
	inline int32_t get_get_Renamed_7() const { return ___get_Renamed_7; }
	inline int32_t* get_address_of_get_Renamed_7() { return &___get_Renamed_7; }
	inline void set_get_Renamed_7(int32_t value)
	{
		___get_Renamed_7 = value;
	}

	inline static int32_t get_offset_of_dist_8() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___dist_8)); }
	inline int32_t get_dist_8() const { return ___dist_8; }
	inline int32_t* get_address_of_dist_8() { return &___dist_8; }
	inline void set_dist_8(int32_t value)
	{
		___dist_8 = value;
	}

	inline static int32_t get_offset_of_lbits_9() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___lbits_9)); }
	inline uint8_t get_lbits_9() const { return ___lbits_9; }
	inline uint8_t* get_address_of_lbits_9() { return &___lbits_9; }
	inline void set_lbits_9(uint8_t value)
	{
		___lbits_9 = value;
	}

	inline static int32_t get_offset_of_dbits_10() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___dbits_10)); }
	inline uint8_t get_dbits_10() const { return ___dbits_10; }
	inline uint8_t* get_address_of_dbits_10() { return &___dbits_10; }
	inline void set_dbits_10(uint8_t value)
	{
		___dbits_10 = value;
	}

	inline static int32_t get_offset_of_ltree_11() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___ltree_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ltree_11() const { return ___ltree_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ltree_11() { return &___ltree_11; }
	inline void set_ltree_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ltree_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ltree_11), (void*)value);
	}

	inline static int32_t get_offset_of_ltree_index_12() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___ltree_index_12)); }
	inline int32_t get_ltree_index_12() const { return ___ltree_index_12; }
	inline int32_t* get_address_of_ltree_index_12() { return &___ltree_index_12; }
	inline void set_ltree_index_12(int32_t value)
	{
		___ltree_index_12 = value;
	}

	inline static int32_t get_offset_of_dtree_13() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___dtree_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_dtree_13() const { return ___dtree_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_dtree_13() { return &___dtree_13; }
	inline void set_dtree_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___dtree_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtree_13), (void*)value);
	}

	inline static int32_t get_offset_of_dtree_index_14() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A, ___dtree_index_14)); }
	inline int32_t get_dtree_index_14() const { return ___dtree_index_14; }
	inline int32_t* get_address_of_dtree_index_14() { return &___dtree_index_14; }
	inline void set_dtree_index_14(int32_t value)
	{
		___dtree_index_14 = value;
	}
};

struct InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields
{
public:
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfCodes::inflate_mask
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___inflate_mask_0;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflate_mask_0), (void*)value);
	}
};


// ComponentAce.Compression.Libs.zlib.InfTree
struct  InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951  : public RuntimeObject
{
public:

public:
};

struct InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields
{
public:
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::fixed_tl
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_tl_0;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::fixed_td
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_td_1;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::cplens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplens_2;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::cplext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplext_3;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::cpdist
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdist_4;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.InfTree::cpdext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_tl_0), (void*)value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_td_1), (void*)value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplens_2), (void*)value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplext_3), (void*)value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdist_4), (void*)value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdext_5), (void*)value);
	}
};


// ComponentAce.Compression.Libs.zlib.Inflate
struct  Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE  : public RuntimeObject
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::mode
	int32_t ___mode_0;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::method
	int32_t ___method_1;
	// System.Int64[] ComponentAce.Compression.Libs.zlib.Inflate::was
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___was_2;
	// System.Int64 ComponentAce.Compression.Libs.zlib.Inflate::need
	int64_t ___need_3;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::marker
	int32_t ___marker_4;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::nowrap
	int32_t ___nowrap_5;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::wbits
	int32_t ___wbits_6;
	// ComponentAce.Compression.Libs.zlib.InfBlocks ComponentAce.Compression.Libs.zlib.Inflate::blocks
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * ___blocks_7;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___method_1)); }
	inline int32_t get_method_1() const { return ___method_1; }
	inline int32_t* get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(int32_t value)
	{
		___method_1 = value;
	}

	inline static int32_t get_offset_of_was_2() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___was_2)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_was_2() const { return ___was_2; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_was_2() { return &___was_2; }
	inline void set_was_2(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___was_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___was_2), (void*)value);
	}

	inline static int32_t get_offset_of_need_3() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___need_3)); }
	inline int64_t get_need_3() const { return ___need_3; }
	inline int64_t* get_address_of_need_3() { return &___need_3; }
	inline void set_need_3(int64_t value)
	{
		___need_3 = value;
	}

	inline static int32_t get_offset_of_marker_4() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___marker_4)); }
	inline int32_t get_marker_4() const { return ___marker_4; }
	inline int32_t* get_address_of_marker_4() { return &___marker_4; }
	inline void set_marker_4(int32_t value)
	{
		___marker_4 = value;
	}

	inline static int32_t get_offset_of_nowrap_5() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___nowrap_5)); }
	inline int32_t get_nowrap_5() const { return ___nowrap_5; }
	inline int32_t* get_address_of_nowrap_5() { return &___nowrap_5; }
	inline void set_nowrap_5(int32_t value)
	{
		___nowrap_5 = value;
	}

	inline static int32_t get_offset_of_wbits_6() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___wbits_6)); }
	inline int32_t get_wbits_6() const { return ___wbits_6; }
	inline int32_t* get_address_of_wbits_6() { return &___wbits_6; }
	inline void set_wbits_6(int32_t value)
	{
		___wbits_6 = value;
	}

	inline static int32_t get_offset_of_blocks_7() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE, ___blocks_7)); }
	inline InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * get_blocks_7() const { return ___blocks_7; }
	inline InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 ** get_address_of_blocks_7() { return &___blocks_7; }
	inline void set_blocks_7(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * value)
	{
		___blocks_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_7), (void*)value);
	}
};

struct Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_StaticFields
{
public:
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Inflate::mark
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mark_8;

public:
	inline static int32_t get_offset_of_mark_8() { return static_cast<int32_t>(offsetof(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_StaticFields, ___mark_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mark_8() const { return ___mark_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mark_8() { return &___mark_8; }
	inline void set_mark_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mark_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_8), (void*)value);
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

// ComponentAce.Compression.Libs.zlib.StaticTree
struct  StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F  : public RuntimeObject
{
public:
	// System.Int16[] ComponentAce.Compression.Libs.zlib.StaticTree::static_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___static_tree_6;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.StaticTree::extra_bits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_bits_7;
	// System.Int32 ComponentAce.Compression.Libs.zlib.StaticTree::extra_base
	int32_t ___extra_base_8;
	// System.Int32 ComponentAce.Compression.Libs.zlib.StaticTree::elems
	int32_t ___elems_9;
	// System.Int32 ComponentAce.Compression.Libs.zlib.StaticTree::max_length
	int32_t ___max_length_10;

public:
	inline static int32_t get_offset_of_static_tree_6() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F, ___static_tree_6)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_static_tree_6() const { return ___static_tree_6; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_static_tree_6() { return &___static_tree_6; }
	inline void set_static_tree_6(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___static_tree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_tree_6), (void*)value);
	}

	inline static int32_t get_offset_of_extra_bits_7() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F, ___extra_bits_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_bits_7() const { return ___extra_bits_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_bits_7() { return &___extra_bits_7; }
	inline void set_extra_bits_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_bits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_bits_7), (void*)value);
	}

	inline static int32_t get_offset_of_extra_base_8() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F, ___extra_base_8)); }
	inline int32_t get_extra_base_8() const { return ___extra_base_8; }
	inline int32_t* get_address_of_extra_base_8() { return &___extra_base_8; }
	inline void set_extra_base_8(int32_t value)
	{
		___extra_base_8 = value;
	}

	inline static int32_t get_offset_of_elems_9() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F, ___elems_9)); }
	inline int32_t get_elems_9() const { return ___elems_9; }
	inline int32_t* get_address_of_elems_9() { return &___elems_9; }
	inline void set_elems_9(int32_t value)
	{
		___elems_9 = value;
	}

	inline static int32_t get_offset_of_max_length_10() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F, ___max_length_10)); }
	inline int32_t get_max_length_10() const { return ___max_length_10; }
	inline int32_t* get_address_of_max_length_10() { return &___max_length_10; }
	inline void set_max_length_10(int32_t value)
	{
		___max_length_10 = value;
	}
};

struct StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.StaticTree::L_CODES
	int32_t ___L_CODES_0;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.StaticTree::static_ltree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___static_ltree_1;
	// System.Int16[] ComponentAce.Compression.Libs.zlib.StaticTree::static_dtree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___static_dtree_2;
	// ComponentAce.Compression.Libs.zlib.StaticTree ComponentAce.Compression.Libs.zlib.StaticTree::static_l_desc
	StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * ___static_l_desc_3;
	// ComponentAce.Compression.Libs.zlib.StaticTree ComponentAce.Compression.Libs.zlib.StaticTree::static_d_desc
	StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * ___static_d_desc_4;
	// ComponentAce.Compression.Libs.zlib.StaticTree ComponentAce.Compression.Libs.zlib.StaticTree::static_bl_desc
	StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * ___static_bl_desc_5;

public:
	inline static int32_t get_offset_of_L_CODES_0() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___L_CODES_0)); }
	inline int32_t get_L_CODES_0() const { return ___L_CODES_0; }
	inline int32_t* get_address_of_L_CODES_0() { return &___L_CODES_0; }
	inline void set_L_CODES_0(int32_t value)
	{
		___L_CODES_0 = value;
	}

	inline static int32_t get_offset_of_static_ltree_1() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___static_ltree_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_static_ltree_1() const { return ___static_ltree_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_static_ltree_1() { return &___static_ltree_1; }
	inline void set_static_ltree_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___static_ltree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_ltree_1), (void*)value);
	}

	inline static int32_t get_offset_of_static_dtree_2() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___static_dtree_2)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_static_dtree_2() const { return ___static_dtree_2; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_static_dtree_2() { return &___static_dtree_2; }
	inline void set_static_dtree_2(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___static_dtree_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_dtree_2), (void*)value);
	}

	inline static int32_t get_offset_of_static_l_desc_3() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___static_l_desc_3)); }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * get_static_l_desc_3() const { return ___static_l_desc_3; }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F ** get_address_of_static_l_desc_3() { return &___static_l_desc_3; }
	inline void set_static_l_desc_3(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * value)
	{
		___static_l_desc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_l_desc_3), (void*)value);
	}

	inline static int32_t get_offset_of_static_d_desc_4() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___static_d_desc_4)); }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * get_static_d_desc_4() const { return ___static_d_desc_4; }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F ** get_address_of_static_d_desc_4() { return &___static_d_desc_4; }
	inline void set_static_d_desc_4(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * value)
	{
		___static_d_desc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_d_desc_4), (void*)value);
	}

	inline static int32_t get_offset_of_static_bl_desc_5() { return static_cast<int32_t>(offsetof(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields, ___static_bl_desc_5)); }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * get_static_bl_desc_5() const { return ___static_bl_desc_5; }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F ** get_address_of_static_bl_desc_5() { return &___static_bl_desc_5; }
	inline void set_static_bl_desc_5(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * value)
	{
		___static_bl_desc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_bl_desc_5), (void*)value);
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


// ComponentAce.Compression.Libs.zlib.SupportClass
struct  SupportClass_tA71DD26FDDDC5A229AE8AAD2871E06F1DE8EF2DF  : public RuntimeObject
{
public:

public:
};


// ComponentAce.Compression.Libs.zlib.Tree
struct  Tree_t41355ACB403457F46C8722BE5800B70589101E81  : public RuntimeObject
{
public:
	// System.Int16[] ComponentAce.Compression.Libs.zlib.Tree::dyn_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_tree_10;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::max_code
	int32_t ___max_code_11;
	// ComponentAce.Compression.Libs.zlib.StaticTree ComponentAce.Compression.Libs.zlib.Tree::stat_desc
	StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * ___stat_desc_12;

public:
	inline static int32_t get_offset_of_dyn_tree_10() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81, ___dyn_tree_10)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_tree_10() const { return ___dyn_tree_10; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_tree_10() { return &___dyn_tree_10; }
	inline void set_dyn_tree_10(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_tree_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_tree_10), (void*)value);
	}

	inline static int32_t get_offset_of_max_code_11() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81, ___max_code_11)); }
	inline int32_t get_max_code_11() const { return ___max_code_11; }
	inline int32_t* get_address_of_max_code_11() { return &___max_code_11; }
	inline void set_max_code_11(int32_t value)
	{
		___max_code_11 = value;
	}

	inline static int32_t get_offset_of_stat_desc_12() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81, ___stat_desc_12)); }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * get_stat_desc_12() const { return ___stat_desc_12; }
	inline StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F ** get_address_of_stat_desc_12() { return &___stat_desc_12; }
	inline void set_stat_desc_12(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * value)
	{
		___stat_desc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stat_desc_12), (void*)value);
	}
};

struct Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::L_CODES
	int32_t ___L_CODES_0;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_1;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Tree::extra_lbits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_lbits_2;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Tree::extra_dbits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_dbits_3;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Tree::extra_blbits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_blbits_4;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Tree::bl_order
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bl_order_5;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Tree::_dist_code
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____dist_code_6;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.Tree::_length_code
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____length_code_7;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Tree::base_length
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___base_length_8;
	// System.Int32[] ComponentAce.Compression.Libs.zlib.Tree::base_dist
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___base_dist_9;

public:
	inline static int32_t get_offset_of_L_CODES_0() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___L_CODES_0)); }
	inline int32_t get_L_CODES_0() const { return ___L_CODES_0; }
	inline int32_t* get_address_of_L_CODES_0() { return &___L_CODES_0; }
	inline void set_L_CODES_0(int32_t value)
	{
		___L_CODES_0 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_1() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___HEAP_SIZE_1)); }
	inline int32_t get_HEAP_SIZE_1() const { return ___HEAP_SIZE_1; }
	inline int32_t* get_address_of_HEAP_SIZE_1() { return &___HEAP_SIZE_1; }
	inline void set_HEAP_SIZE_1(int32_t value)
	{
		___HEAP_SIZE_1 = value;
	}

	inline static int32_t get_offset_of_extra_lbits_2() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___extra_lbits_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_lbits_2() const { return ___extra_lbits_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_lbits_2() { return &___extra_lbits_2; }
	inline void set_extra_lbits_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_lbits_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_lbits_2), (void*)value);
	}

	inline static int32_t get_offset_of_extra_dbits_3() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___extra_dbits_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_dbits_3() const { return ___extra_dbits_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_dbits_3() { return &___extra_dbits_3; }
	inline void set_extra_dbits_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_dbits_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_dbits_3), (void*)value);
	}

	inline static int32_t get_offset_of_extra_blbits_4() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___extra_blbits_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_blbits_4() const { return ___extra_blbits_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_blbits_4() { return &___extra_blbits_4; }
	inline void set_extra_blbits_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_blbits_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_blbits_4), (void*)value);
	}

	inline static int32_t get_offset_of_bl_order_5() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___bl_order_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bl_order_5() const { return ___bl_order_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bl_order_5() { return &___bl_order_5; }
	inline void set_bl_order_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bl_order_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_order_5), (void*)value);
	}

	inline static int32_t get_offset_of__dist_code_6() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ____dist_code_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__dist_code_6() const { return ____dist_code_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__dist_code_6() { return &____dist_code_6; }
	inline void set__dist_code_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____dist_code_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dist_code_6), (void*)value);
	}

	inline static int32_t get_offset_of__length_code_7() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ____length_code_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__length_code_7() const { return ____length_code_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__length_code_7() { return &____length_code_7; }
	inline void set__length_code_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____length_code_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____length_code_7), (void*)value);
	}

	inline static int32_t get_offset_of_base_length_8() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___base_length_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_base_length_8() const { return ___base_length_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_base_length_8() { return &___base_length_8; }
	inline void set_base_length_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___base_length_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_length_8), (void*)value);
	}

	inline static int32_t get_offset_of_base_dist_9() { return static_cast<int32_t>(offsetof(Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields, ___base_dist_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_base_dist_9() const { return ___base_dist_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_base_dist_9() { return &___base_dist_9; }
	inline void set_base_dist_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___base_dist_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_dist_9), (void*)value);
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

// ComponentAce.Compression.Libs.zlib.ZStream
struct  ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5  : public RuntimeObject
{
public:
	// System.Byte[] ComponentAce.Compression.Libs.zlib.ZStream::next_in
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___next_in_1;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::next_in_index
	int32_t ___next_in_index_2;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::avail_in
	int32_t ___avail_in_3;
	// System.Int64 ComponentAce.Compression.Libs.zlib.ZStream::total_in
	int64_t ___total_in_4;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.ZStream::next_out
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___next_out_5;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::next_out_index
	int32_t ___next_out_index_6;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::avail_out
	int32_t ___avail_out_7;
	// System.Int64 ComponentAce.Compression.Libs.zlib.ZStream::total_out
	int64_t ___total_out_8;
	// System.String ComponentAce.Compression.Libs.zlib.ZStream::msg
	String_t* ___msg_9;
	// ComponentAce.Compression.Libs.zlib.Deflate ComponentAce.Compression.Libs.zlib.ZStream::dstate
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * ___dstate_10;
	// ComponentAce.Compression.Libs.zlib.Inflate ComponentAce.Compression.Libs.zlib.ZStream::istate
	Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * ___istate_11;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::data_type
	int32_t ___data_type_12;
	// System.Int64 ComponentAce.Compression.Libs.zlib.ZStream::adler
	int64_t ___adler_13;
	// ComponentAce.Compression.Libs.zlib.Adler32 ComponentAce.Compression.Libs.zlib.ZStream::_adler
	Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * ____adler_14;

public:
	inline static int32_t get_offset_of_next_in_1() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___next_in_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_next_in_1() const { return ___next_in_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_next_in_1() { return &___next_in_1; }
	inline void set_next_in_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___next_in_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_in_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_in_index_2() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___next_in_index_2)); }
	inline int32_t get_next_in_index_2() const { return ___next_in_index_2; }
	inline int32_t* get_address_of_next_in_index_2() { return &___next_in_index_2; }
	inline void set_next_in_index_2(int32_t value)
	{
		___next_in_index_2 = value;
	}

	inline static int32_t get_offset_of_avail_in_3() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___avail_in_3)); }
	inline int32_t get_avail_in_3() const { return ___avail_in_3; }
	inline int32_t* get_address_of_avail_in_3() { return &___avail_in_3; }
	inline void set_avail_in_3(int32_t value)
	{
		___avail_in_3 = value;
	}

	inline static int32_t get_offset_of_total_in_4() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___total_in_4)); }
	inline int64_t get_total_in_4() const { return ___total_in_4; }
	inline int64_t* get_address_of_total_in_4() { return &___total_in_4; }
	inline void set_total_in_4(int64_t value)
	{
		___total_in_4 = value;
	}

	inline static int32_t get_offset_of_next_out_5() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___next_out_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_next_out_5() const { return ___next_out_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_next_out_5() { return &___next_out_5; }
	inline void set_next_out_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___next_out_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_out_5), (void*)value);
	}

	inline static int32_t get_offset_of_next_out_index_6() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___next_out_index_6)); }
	inline int32_t get_next_out_index_6() const { return ___next_out_index_6; }
	inline int32_t* get_address_of_next_out_index_6() { return &___next_out_index_6; }
	inline void set_next_out_index_6(int32_t value)
	{
		___next_out_index_6 = value;
	}

	inline static int32_t get_offset_of_avail_out_7() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___avail_out_7)); }
	inline int32_t get_avail_out_7() const { return ___avail_out_7; }
	inline int32_t* get_address_of_avail_out_7() { return &___avail_out_7; }
	inline void set_avail_out_7(int32_t value)
	{
		___avail_out_7 = value;
	}

	inline static int32_t get_offset_of_total_out_8() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___total_out_8)); }
	inline int64_t get_total_out_8() const { return ___total_out_8; }
	inline int64_t* get_address_of_total_out_8() { return &___total_out_8; }
	inline void set_total_out_8(int64_t value)
	{
		___total_out_8 = value;
	}

	inline static int32_t get_offset_of_msg_9() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___msg_9)); }
	inline String_t* get_msg_9() const { return ___msg_9; }
	inline String_t** get_address_of_msg_9() { return &___msg_9; }
	inline void set_msg_9(String_t* value)
	{
		___msg_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_9), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_10() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___dstate_10)); }
	inline Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * get_dstate_10() const { return ___dstate_10; }
	inline Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 ** get_address_of_dstate_10() { return &___dstate_10; }
	inline void set_dstate_10(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * value)
	{
		___dstate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_10), (void*)value);
	}

	inline static int32_t get_offset_of_istate_11() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___istate_11)); }
	inline Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * get_istate_11() const { return ___istate_11; }
	inline Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE ** get_address_of_istate_11() { return &___istate_11; }
	inline void set_istate_11(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * value)
	{
		___istate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_11), (void*)value);
	}

	inline static int32_t get_offset_of_data_type_12() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___data_type_12)); }
	inline int32_t get_data_type_12() const { return ___data_type_12; }
	inline int32_t* get_address_of_data_type_12() { return &___data_type_12; }
	inline void set_data_type_12(int32_t value)
	{
		___data_type_12 = value;
	}

	inline static int32_t get_offset_of_adler_13() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ___adler_13)); }
	inline int64_t get_adler_13() const { return ___adler_13; }
	inline int64_t* get_address_of_adler_13() { return &___adler_13; }
	inline void set_adler_13(int64_t value)
	{
		___adler_13 = value;
	}

	inline static int32_t get_offset_of__adler_14() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5, ____adler_14)); }
	inline Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * get__adler_14() const { return ____adler_14; }
	inline Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC ** get_address_of__adler_14() { return &____adler_14; }
	inline void set__adler_14(Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * value)
	{
		____adler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____adler_14), (void*)value);
	}
};

struct ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_StaticFields
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::DEF_WBITS
	int32_t ___DEF_WBITS_0;

public:
	inline static int32_t get_offset_of_DEF_WBITS_0() { return static_cast<int32_t>(offsetof(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_StaticFields, ___DEF_WBITS_0)); }
	inline int32_t get_DEF_WBITS_0() const { return ___DEF_WBITS_0; }
	inline int32_t* get_address_of_DEF_WBITS_0() { return &___DEF_WBITS_0; }
	inline void set_DEF_WBITS_0(int32_t value)
	{
		___DEF_WBITS_0 = value;
	}
};


// ComponentAce.Compression.Libs.zlib.Deflate/Config
struct  Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB  : public RuntimeObject
{
public:
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate/Config::good_length
	int32_t ___good_length_0;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate/Config::max_lazy
	int32_t ___max_lazy_1;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate/Config::nice_length
	int32_t ___nice_length_2;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate/Config::max_chain
	int32_t ___max_chain_3;
	// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate/Config::func
	int32_t ___func_4;

public:
	inline static int32_t get_offset_of_good_length_0() { return static_cast<int32_t>(offsetof(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB, ___good_length_0)); }
	inline int32_t get_good_length_0() const { return ___good_length_0; }
	inline int32_t* get_address_of_good_length_0() { return &___good_length_0; }
	inline void set_good_length_0(int32_t value)
	{
		___good_length_0 = value;
	}

	inline static int32_t get_offset_of_max_lazy_1() { return static_cast<int32_t>(offsetof(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB, ___max_lazy_1)); }
	inline int32_t get_max_lazy_1() const { return ___max_lazy_1; }
	inline int32_t* get_address_of_max_lazy_1() { return &___max_lazy_1; }
	inline void set_max_lazy_1(int32_t value)
	{
		___max_lazy_1 = value;
	}

	inline static int32_t get_offset_of_nice_length_2() { return static_cast<int32_t>(offsetof(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB, ___nice_length_2)); }
	inline int32_t get_nice_length_2() const { return ___nice_length_2; }
	inline int32_t* get_address_of_nice_length_2() { return &___nice_length_2; }
	inline void set_nice_length_2(int32_t value)
	{
		___nice_length_2 = value;
	}

	inline static int32_t get_offset_of_max_chain_3() { return static_cast<int32_t>(offsetof(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB, ___max_chain_3)); }
	inline int32_t get_max_chain_3() const { return ___max_chain_3; }
	inline int32_t* get_address_of_max_chain_3() { return &___max_chain_3; }
	inline void set_max_chain_3(int32_t value)
	{
		___max_chain_3 = value;
	}

	inline static int32_t get_offset_of_func_4() { return static_cast<int32_t>(offsetof(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB, ___func_4)); }
	inline int32_t get_func_4() const { return ___func_4; }
	inline int32_t* get_address_of_func_4() { return &___func_4; }
	inline void set_func_4(int32_t value)
	{
		___func_4 = value;
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D1152
struct  __StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8 
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
		uint8_t __StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8__padding[1152];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D116
struct  __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0 
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
		uint8_t __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0__padding[116];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D120
struct  __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4 
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
		uint8_t __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D124
struct  __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87 
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
		uint8_t __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87__padding[124];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D19
struct  __StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071 
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
		uint8_t __StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071__padding[19];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D256
struct  __StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69 
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
		uint8_t __StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D384
struct  __StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C 
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
		uint8_t __StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C__padding[384];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D512
struct  __StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D__padding[512];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D6144
struct  __StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588 
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
		uint8_t __StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588__padding[6144];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D68
struct  __StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3 
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
		uint8_t __StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3__padding[68];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D76
struct  __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75 
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
		uint8_t __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75__padding[76];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D19 <PrivateImplementationDetails>::111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15
	__StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071  ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D1152 <PrivateImplementationDetails>::36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38
	__StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8  ___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D512 <PrivateImplementationDetails>::3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A
	__StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D  ___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D120 <PrivateImplementationDetails>::5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6
	__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  ___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D384 <PrivateImplementationDetails>::5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7
	__StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C  ___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D124 <PrivateImplementationDetails>::5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD
	__StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  ___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D124 <PrivateImplementationDetails>::61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1
	__StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D116 <PrivateImplementationDetails>::7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D
	__StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  ___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D6144 <PrivateImplementationDetails>::8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095
	__StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588  ___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D76 <PrivateImplementationDetails>::8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E
	__StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  ___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D120 <PrivateImplementationDetails>::9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503
	__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  ___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D120 <PrivateImplementationDetails>::B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114
	__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  ___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D256 <PrivateImplementationDetails>::B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4
	__StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69  ___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D76 <PrivateImplementationDetails>::C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B
	__StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  ___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D68 <PrivateImplementationDetails>::CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C
	__StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3  ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D116 <PrivateImplementationDetails>::F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842
	__StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  ___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D120 <PrivateImplementationDetails>::FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3
	__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  ___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16;

public:
	inline static int32_t get_offset_of_U3111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0)); }
	inline __StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071  get_U3111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0() const { return ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0; }
	inline __StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071 * get_address_of_U3111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0() { return &___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0; }
	inline void set_U3111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0(__StaticArrayInitTypeSizeU3D19_t4F935E59FEBCDC0579454BC5D37D1D66766E8071  value)
	{
		___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0 = value;
	}

	inline static int32_t get_offset_of_U336B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1)); }
	inline __StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8  get_U336B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1() const { return ___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1; }
	inline __StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8 * get_address_of_U336B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1() { return &___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1; }
	inline void set_U336B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1(__StaticArrayInitTypeSizeU3D1152_tE5346C22C27095EC8C3C57E985AC6577E9CB36C8  value)
	{
		___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1 = value;
	}

	inline static int32_t get_offset_of_U33E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2)); }
	inline __StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D  get_U33E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2() const { return ___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2; }
	inline __StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D * get_address_of_U33E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2() { return &___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2; }
	inline void set_U33E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2(__StaticArrayInitTypeSizeU3D512_tBB6AFB9D52085FD4CDBF95EA685B86356834C10D  value)
	{
		___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2 = value;
	}

	inline static int32_t get_offset_of_U35961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3)); }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  get_U35961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3() const { return ___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3; }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4 * get_address_of_U35961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3() { return &___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3; }
	inline void set_U35961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3(__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  value)
	{
		___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3 = value;
	}

	inline static int32_t get_offset_of_U35D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4)); }
	inline __StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C  get_U35D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4() const { return ___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4; }
	inline __StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C * get_address_of_U35D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4() { return &___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4; }
	inline void set_U35D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4(__StaticArrayInitTypeSizeU3D384_t2614782FFDBB627F26C39484CB84125960C03D0C  value)
	{
		___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4 = value;
	}

	inline static int32_t get_offset_of_U35D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5)); }
	inline __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  get_U35D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5() const { return ___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5; }
	inline __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87 * get_address_of_U35D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5() { return &___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5; }
	inline void set_U35D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5(__StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  value)
	{
		___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5 = value;
	}

	inline static int32_t get_offset_of_U361358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6)); }
	inline __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  get_U361358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6() const { return ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6; }
	inline __StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87 * get_address_of_U361358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6() { return &___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6; }
	inline void set_U361358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6(__StaticArrayInitTypeSizeU3D124_t9254341E42D015D73698C8DD7E831D0F05405F87  value)
	{
		___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6 = value;
	}

	inline static int32_t get_offset_of_U37DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7)); }
	inline __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  get_U37DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7() const { return ___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7; }
	inline __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0 * get_address_of_U37DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7() { return &___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7; }
	inline void set_U37DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7(__StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  value)
	{
		___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7 = value;
	}

	inline static int32_t get_offset_of_U38AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8)); }
	inline __StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588  get_U38AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8() const { return ___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8; }
	inline __StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588 * get_address_of_U38AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8() { return &___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8; }
	inline void set_U38AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8(__StaticArrayInitTypeSizeU3D6144_t01814DC8E6963CFF2F70D514CD52FF9D0A41F588  value)
	{
		___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8 = value;
	}

	inline static int32_t get_offset_of_U38FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9)); }
	inline __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  get_U38FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9() const { return ___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9; }
	inline __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75 * get_address_of_U38FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9() { return &___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9; }
	inline void set_U38FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9(__StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  value)
	{
		___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9 = value;
	}

	inline static int32_t get_offset_of_U39476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10)); }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  get_U39476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10() const { return ___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10; }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4 * get_address_of_U39476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10() { return &___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10; }
	inline void set_U39476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10(__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  value)
	{
		___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10 = value;
	}

	inline static int32_t get_offset_of_B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11)); }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  get_B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11() const { return ___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11; }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4 * get_address_of_B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11() { return &___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11; }
	inline void set_B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11(__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  value)
	{
		___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11 = value;
	}

	inline static int32_t get_offset_of_B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12)); }
	inline __StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69  get_B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12() const { return ___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12; }
	inline __StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69 * get_address_of_B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12() { return &___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12; }
	inline void set_B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12(__StaticArrayInitTypeSizeU3D256_tD1F00EC91EBE470587B71473BE1D0936E0EA0D69  value)
	{
		___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12 = value;
	}

	inline static int32_t get_offset_of_C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13)); }
	inline __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  get_C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13() const { return ___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13; }
	inline __StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75 * get_address_of_C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13() { return &___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13; }
	inline void set_C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13(__StaticArrayInitTypeSizeU3D76_tA5897C79893FB053A23DCCD16A93DDF9BADB7F75  value)
	{
		___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13 = value;
	}

	inline static int32_t get_offset_of_CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14)); }
	inline __StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3  get_CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14() const { return ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14; }
	inline __StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3 * get_address_of_CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14() { return &___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14; }
	inline void set_CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14(__StaticArrayInitTypeSizeU3D68_t651F9B43D2689DE507FDE7CE65D1689ABC20CFD3  value)
	{
		___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14 = value;
	}

	inline static int32_t get_offset_of_F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15)); }
	inline __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  get_F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15() const { return ___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15; }
	inline __StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0 * get_address_of_F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15() { return &___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15; }
	inline void set_F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15(__StaticArrayInitTypeSizeU3D116_t5CE56DFC58C1250666F401A27C3ACE8F6C8976A0  value)
	{
		___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15 = value;
	}

	inline static int32_t get_offset_of_FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6_StaticFields, ___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16)); }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  get_FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16() const { return ___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16; }
	inline __StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4 * get_address_of_FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16() { return &___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16; }
	inline void set_FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16(__StaticArrayInitTypeSizeU3D120_t1881BAC61EB472F06B13802787518DACFC4975A4  value)
	{
		___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16 = value;
	}
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


// System.IO.SeekOrigin
struct  SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ComponentAce.Compression.Libs.zlib.ZOutputStream
struct  ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// ComponentAce.Compression.Libs.zlib.ZStream ComponentAce.Compression.Libs.zlib.ZOutputStream::z
	ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z_4;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZOutputStream::bufsize
	int32_t ___bufsize_5;
	// System.Int32 ComponentAce.Compression.Libs.zlib.ZOutputStream::flush_Renamed_Field
	int32_t ___flush_Renamed_Field_6;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.ZOutputStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_7;
	// System.Byte[] ComponentAce.Compression.Libs.zlib.ZOutputStream::buf1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1_8;
	// System.Boolean ComponentAce.Compression.Libs.zlib.ZOutputStream::compress
	bool ___compress_9;
	// System.IO.Stream ComponentAce.Compression.Libs.zlib.ZOutputStream::out_Renamed
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___out_Renamed_10;

public:
	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___z_4)); }
	inline ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * get_z_4() const { return ___z_4; }
	inline ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 ** get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * value)
	{
		___z_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_4), (void*)value);
	}

	inline static int32_t get_offset_of_bufsize_5() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___bufsize_5)); }
	inline int32_t get_bufsize_5() const { return ___bufsize_5; }
	inline int32_t* get_address_of_bufsize_5() { return &___bufsize_5; }
	inline void set_bufsize_5(int32_t value)
	{
		___bufsize_5 = value;
	}

	inline static int32_t get_offset_of_flush_Renamed_Field_6() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___flush_Renamed_Field_6)); }
	inline int32_t get_flush_Renamed_Field_6() const { return ___flush_Renamed_Field_6; }
	inline int32_t* get_address_of_flush_Renamed_Field_6() { return &___flush_Renamed_Field_6; }
	inline void set_flush_Renamed_Field_6(int32_t value)
	{
		___flush_Renamed_Field_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___buf_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_buf1_8() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___buf1_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf1_8() const { return ___buf1_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf1_8() { return &___buf1_8; }
	inline void set_buf1_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf1_8), (void*)value);
	}

	inline static int32_t get_offset_of_compress_9() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___compress_9)); }
	inline bool get_compress_9() const { return ___compress_9; }
	inline bool* get_address_of_compress_9() { return &___compress_9; }
	inline void set_compress_9(bool value)
	{
		___compress_9 = value;
	}

	inline static int32_t get_offset_of_out_Renamed_10() { return static_cast<int32_t>(offsetof(ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4, ___out_Renamed_10)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_out_Renamed_10() const { return ___out_Renamed_10; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_out_Renamed_10() { return &___out_Renamed_10; }
	inline void set_out_Renamed_10(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___out_Renamed_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___out_Renamed_10), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// ComponentAce.Compression.Libs.zlib.ZStreamException
struct  ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
// ComponentAce.Compression.Libs.zlib.Deflate/Config[]
struct ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * m_Items[1];

public:
	inline Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * value)
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
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_mC82A4E2F0B806436AA7FB77F65F12B2FA9C7F4EA (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::init_block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_init_block_mA66B0FCA3808B20C31015E9E8AF557A39FCB5B38 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Boolean ComponentAce.Compression.Libs.zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate_smaller_m36247F54BF132649632F92AE43D1393D74327659 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___depth3, const RuntimeMethod* method);
// System.Int64 ComponentAce.Compression.Libs.zlib.SupportClass::Identity(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_Identity_m1803D8ECDFA9464117EB94A2883BAA7691C67FF3 (int64_t ___literal0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_scan_tree_m0AFE4FA8D3989A6B58C0F8D3102079043D9ADE3E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Tree::build_tree(ComponentAce.Compression.Libs.zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m785563FC52B4A8A398EB767AF4B4314DB2DB37EE (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * ___s0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___value_Renamed0, int32_t ___length1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_tree_mD887A073AB1FF3E3711173FCA6B74DD4A77B791D (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_byte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, uint8_t ___c0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.SupportClass::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_short(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___w0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_flush_m38D84F389D13221EF479BE9B84A8B390C14EB44B (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::d_code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_d_code_m0170777DABE6477AD30D425BE284A316BBD63087 (int32_t ___dist0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_windup_m8B3D43BE48B233A612B599C01611D9A248C61576 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_mA66AA44B886AA5CE385ADBEEFA14297EC9CFEC6E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_flush_block_m4AE54513F62012BB177A1DD4960BC9294CD1C7B8 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::fill_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_fill_window_mD153BDE316DBDE9F1BDE83EE631A65B86C09FD56 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, bool ___eof0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_copy_block_m9EF5D8EF20100EDE0E148AED18C6C58750F27C51 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_set_data_type_mB53FAB1E44C35B1F3BC0D0EEACBD310012BD614F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_build_bl_tree_mB1E1BB45C6B58C53743BF461E5B144FA9EB1756A (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_stored_block_m2BA7FE64D58F7E6D7B4E88041B99D376892650B2 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::compress_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_compress_block_mC6F4BF33DBD84C6FC2F161A02FE37BA2B42E21E3 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_all_trees_m959ADD871BA98CE85B164117243F4BAAB7F4067F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_read_buf_mC5F146889D2E448DFCC3050CB18FE4ED2057CF8A (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_longest_match_m90026559FAA5A9C4DB9B9E10FA9D7540E7750FF1 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___cur_match0, const RuntimeMethod* method);
// System.Boolean ComponentAce.Compression.Libs.zlib.Deflate::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateInit2(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit2_m17CFB15BB80D1BA75F8522A971CD9EC060030800 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___level1, int32_t ___method2, int32_t ___windowBits3, int32_t ___memLevel4, int32_t ___strategy5, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateReset(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateReset_m88C03182F3793A7F56D5F6031DB9C4345FD23E47 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, const RuntimeMethod* method);
// System.Int64 ComponentAce.Compression.Libs.zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29 (Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * __this, int64_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::tr_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_tr_init_m42D8B2C77CC96FBE34A20385791ED418AFFF0E16 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::lm_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_lm_init_m5014B2FCA7223AEB6545219C3D65877D82A9167A (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::putShortMSB(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___b0, const RuntimeMethod* method);
// System.Int64 ComponentAce.Compression.Libs.zlib.SupportClass::URShift(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_URShift_mC0BC764584FD96B1999D4858790BE5A794E6A45F (int64_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_stored(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_stored_mEEF074EF6FDE2634B496206476E24126496CB4C4 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_fast(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_fast_mB749779D018A8168E6217340B07FBD32C3525FE2 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_slow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_slow_m0195CBDDE0EA237CBE3C6615F64888B377137988 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_align_m9F72D51AE59E8DF7AA93C052AF4627E67238AFEF (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01 (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * __this, int32_t ___good_length0, int32_t ___max_lazy1, int32_t ___nice_length2, int32_t ___max_chain3, int32_t ___func4, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::free(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_free_m7D9FDE1833010B5396F62607225847809C4B699B (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::inflate_flush(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1 (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___r1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mB1977DB03EB28D7F884870C0DD13EC6D1D9EFF96 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_m6289B183FD15FF5A6EDA02136649282C1DF6FDFE (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_mA613382505106C7A36B855888F39D8532BC68941 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m122BA0C5068F2F9687E458B23CD73AB06D791F1B (int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z8, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_mCC8A236794C243573E24D459981EAF0BC1F396E9 (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z6, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::proc(ComponentAce.Compression.Libs.zlib.InfBlocks,ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_proc_m6BDFD30B1E6E548F530697A4942F63656217F2A0 (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * ___s0, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z1, int32_t ___r2, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.InfBlocks::reset(ComponentAce.Compression.Libs.zlib.ZStream,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_reset_m4A71EBEF90F55E3D15CD90E74C8A7CF0C8B1E69F (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___c1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,ComponentAce.Compression.Libs.zlib.InfBlocks,ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_m2B40F404300D1B16485C53B8B839D4F82161DD6C (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * ___s6, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z7, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m5DC61DE09FEA8A0E70966CFB7F2D0132902D44C1 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.InfBlocks::free(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_free_m3C6B1713D9EA9ED1C94E9E06BC0113E675ADAEFD (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::proc(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_proc_mE4503151D64C41E77412D9705D3EF30C937C1AE6 (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___r1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_m2A40CFE885F4C7C313B9CD6DDB42A7756324EBD4 (StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___static_tree0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_pqdownheap_mECA2F4629E9BDBA9C898FA8B7755602E46139CBE (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___k1, const RuntimeMethod* method);
// System.Byte System.Math::Max(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_mCA27A75C0677CDAF214D29620E7F508A9C6FB30A (uint8_t ___val10, uint8_t ___val21, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Tree::gen_bitlen(ComponentAce.Compression.Libs.zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m40C122458BD0ADAAE863B6E6F1BC02F390084882 (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * ___s0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_mD795D4562454C33EE91583D588A0DB14E9C3C3BE (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count2, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mB6EB1A392792A1D84BCDE5F01446694B7FF5E5D6 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mCC583FBAA01ED86605F51E70C716639915A8C0A9 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_InitBlock_m51BEC88ACCDE6C8FE5C35E13DF30083591A7FFB1 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mE94A552ED40C352E3317B05286081DECCEDAA02D (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::WriteByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_mEA8E26866218DE8F4A52DED3436CAD13FB97EA97 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, int32_t ___b0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_mBFC342FE52280E8F36544C620BB5A894704CF128 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_mE5065E56AC04A90EB1242A012854869A5C7AFFCD (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___f0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStreamException__ctor_m398F2F46F47B77810C066A7AA49D4162BC9F6365 (ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m4A0DA02A0B83AA69396E08EF0204A399DEA6BD9A (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_mFAF89E1C1FEF24569BC3051AE757D630A143D9EF (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_mCBD9AB383DF91D64CE2810AFB137285A7E4497CC (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::inflate(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_m1EA6F328B08305EA06B72E53EB157C74D1A9AA1E (Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___f1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::inflateEnd(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_mF0DCA80DC9439C455755E4DCB12B570610D60783 (Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m239AC8B4409580BD731561D543D61F2C3F6A5AA5 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__ctor_mED7B5E32F4FB97669977239FCD527F14AB1C0368 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateInit(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_mDD25807DB36282975349F585D3AA8F9FB16FB9FF (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_mB8E67AB0475DCDFB67D43E9E88B79224BE92D72B (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___flush1, const RuntimeMethod* method);
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateEnd_m40591DA2B91FE54846F5195D59E0FEF613ABEF4E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method);
// System.Void ComponentAce.Compression.Libs.zlib.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_m27FACD209599E6A1D0B81EFF9A5635D61227035C (Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * __this, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, const RuntimeMethod* method);
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
// System.Int64 ComponentAce.Compression.Libs.zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29 (Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * __this, int64_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int64_t)((int64_t)1));
	}

IL_0006:
	{
		int64_t L_1 = ___adler0;
		V_0 = ((int64_t)((int64_t)L_1&(int64_t)((int64_t)((int64_t)((int32_t)65535)))));
		int64_t L_2 = ___adler0;
		V_1 = ((int64_t)((int64_t)((int64_t)((int64_t)L_2>>(int32_t)((int32_t)16)))&(int64_t)((int64_t)((int64_t)((int32_t)65535)))));
		goto IL_01dd;
	}

IL_0020:
	{
		int32_t L_3 = ___len3;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)5552))))
		{
			goto IL_0030;
		}
	}
	{
		G_B6_0 = ((int32_t)5552);
		goto IL_0032;
	}

IL_0030:
	{
		int32_t L_4 = ___len3;
		G_B6_0 = L_4;
	}

IL_0032:
	{
		V_2 = G_B6_0;
		int32_t L_5 = ___len3;
		int32_t L_6 = V_2;
		___len3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		goto IL_01a3;
	}

IL_003e:
	{
		int64_t L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___buf1;
		int32_t L_9 = ___index2;
		int32_t L_10 = L_9;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))));
		int64_t L_13 = V_1;
		int64_t L_14 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)L_14));
		int64_t L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___buf1;
		int32_t L_17 = ___index2;
		int32_t L_18 = L_17;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		NullCheck(L_16);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)255)))))));
		int64_t L_21 = V_1;
		int64_t L_22 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)L_22));
		int64_t L_23 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___buf1;
		int32_t L_25 = ___index2;
		int32_t L_26 = L_25;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)255)))))));
		int64_t L_29 = V_1;
		int64_t L_30 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)L_30));
		int64_t L_31 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___buf1;
		int32_t L_33 = ___index2;
		int32_t L_34 = L_33;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_36&(int32_t)((int32_t)255)))))));
		int64_t L_37 = V_1;
		int64_t L_38 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_37, (int64_t)L_38));
		int64_t L_39 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = ___buf1;
		int32_t L_41 = ___index2;
		int32_t L_42 = L_41;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)255)))))));
		int64_t L_45 = V_1;
		int64_t L_46 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, (int64_t)L_46));
		int64_t L_47 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___buf1;
		int32_t L_49 = ___index2;
		int32_t L_50 = L_49;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_52&(int32_t)((int32_t)255)))))));
		int64_t L_53 = V_1;
		int64_t L_54 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, (int64_t)L_54));
		int64_t L_55 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = ___buf1;
		int32_t L_57 = ___index2;
		int32_t L_58 = L_57;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_55, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_60&(int32_t)((int32_t)255)))))));
		int64_t L_61 = V_1;
		int64_t L_62 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)L_62));
		int64_t L_63 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = ___buf1;
		int32_t L_65 = ___index2;
		int32_t L_66 = L_65;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		NullCheck(L_64);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)255)))))));
		int64_t L_69 = V_1;
		int64_t L_70 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, (int64_t)L_70));
		int64_t L_71 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = ___buf1;
		int32_t L_73 = ___index2;
		int32_t L_74 = L_73;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		NullCheck(L_72);
		int32_t L_75 = L_74;
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_76&(int32_t)((int32_t)255)))))));
		int64_t L_77 = V_1;
		int64_t L_78 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, (int64_t)L_78));
		int64_t L_79 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = ___buf1;
		int32_t L_81 = ___index2;
		int32_t L_82 = L_81;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		NullCheck(L_80);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)255)))))));
		int64_t L_85 = V_1;
		int64_t L_86 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, (int64_t)L_86));
		int64_t L_87 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = ___buf1;
		int32_t L_89 = ___index2;
		int32_t L_90 = L_89;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		NullCheck(L_88);
		int32_t L_91 = L_90;
		uint8_t L_92 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_92&(int32_t)((int32_t)255)))))));
		int64_t L_93 = V_1;
		int64_t L_94 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)L_94));
		int64_t L_95 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = ___buf1;
		int32_t L_97 = ___index2;
		int32_t L_98 = L_97;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_100&(int32_t)((int32_t)255)))))));
		int64_t L_101 = V_1;
		int64_t L_102 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, (int64_t)L_102));
		int64_t L_103 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = ___buf1;
		int32_t L_105 = ___index2;
		int32_t L_106 = L_105;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_108&(int32_t)((int32_t)255)))))));
		int64_t L_109 = V_1;
		int64_t L_110 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		int64_t L_111 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = ___buf1;
		int32_t L_113 = ___index2;
		int32_t L_114 = L_113;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
		NullCheck(L_112);
		int32_t L_115 = L_114;
		uint8_t L_116 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_111, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_116&(int32_t)((int32_t)255)))))));
		int64_t L_117 = V_1;
		int64_t L_118 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, (int64_t)L_118));
		int64_t L_119 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_120 = ___buf1;
		int32_t L_121 = ___index2;
		int32_t L_122 = L_121;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		NullCheck(L_120);
		int32_t L_123 = L_122;
		uint8_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_124&(int32_t)((int32_t)255)))))));
		int64_t L_125 = V_1;
		int64_t L_126 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_126));
		int64_t L_127 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_128 = ___buf1;
		int32_t L_129 = ___index2;
		int32_t L_130 = L_129;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		NullCheck(L_128);
		int32_t L_131 = L_130;
		uint8_t L_132 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_132&(int32_t)((int32_t)255)))))));
		int64_t L_133 = V_1;
		int64_t L_134 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_133, (int64_t)L_134));
		int32_t L_135 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)((int32_t)16)));
	}

IL_01a3:
	{
		int32_t L_136 = V_2;
		if ((((int32_t)L_136) >= ((int32_t)((int32_t)16))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_137 = V_2;
		if (!L_137)
		{
			goto IL_01cb;
		}
	}

IL_01ae:
	{
		int64_t L_138 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = ___buf1;
		int32_t L_140 = ___index2;
		int32_t L_141 = L_140;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
		NullCheck(L_139);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_143&(int32_t)((int32_t)255)))))));
		int64_t L_144 = V_1;
		int64_t L_145 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		int32_t L_146 = V_2;
		int32_t L_147 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)1));
		V_2 = L_147;
		if (L_147)
		{
			goto IL_01ae;
		}
	}

IL_01cb:
	{
		int64_t L_148 = V_0;
		V_0 = ((int64_t)((int64_t)L_148%(int64_t)((int64_t)((int64_t)((int32_t)65521)))));
		int64_t L_149 = V_1;
		V_1 = ((int64_t)((int64_t)L_149%(int64_t)((int64_t)((int64_t)((int32_t)65521)))));
	}

IL_01dd:
	{
		int32_t L_150 = ___len3;
		if ((((int32_t)L_150) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_151 = V_1;
		int64_t L_152 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)L_151<<(int32_t)((int32_t)16)))|(int64_t)L_152));
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_m27FACD209599E6A1D0B81EFF9A5635D61227035C (Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * __this, const RuntimeMethod* method)
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
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__ctor_mED7B5E32F4FB97669977239FCD527F14AB1C0368 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_0 = (Tree_t41355ACB403457F46C8722BE5800B70589101E81 *)il2cpp_codegen_object_new(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Tree__ctor_mC82A4E2F0B806436AA7FB77F65F12B2FA9C7F4EA(L_0, /*hidden argument*/NULL);
		__this->set_l_desc_44(L_0);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_1 = (Tree_t41355ACB403457F46C8722BE5800B70589101E81 *)il2cpp_codegen_object_new(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Tree__ctor_mC82A4E2F0B806436AA7FB77F65F12B2FA9C7F4EA(L_1, /*hidden argument*/NULL);
		__this->set_d_desc_45(L_1);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_2 = (Tree_t41355ACB403457F46C8722BE5800B70589101E81 *)il2cpp_codegen_object_new(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Tree__ctor_mC82A4E2F0B806436AA7FB77F65F12B2FA9C7F4EA(L_2, /*hidden argument*/NULL);
		__this->set_bl_desc_46(L_2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_bl_count_47(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_L_CODES_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_4)), (int32_t)1)));
		__this->set_heap_48(L_5);
		int32_t L_6 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_L_CODES_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_6)), (int32_t)1)));
		__this->set_depth_51(L_7);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_8 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_HEAP_SIZE_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2)));
		__this->set_dyn_ltree_41(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)122));
		__this->set_dyn_dtree_42(L_10);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_11 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)78));
		__this->set_bl_tree_43(L_11);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::lm_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_lm_init_m5014B2FCA7223AEB6545219C3D65877D82A9167A (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_w_size_15();
		__this->set_window_size_19(((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_head_21();
		int32_t L_2 = __this->get_hash_size_23();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))), (int16_t)0);
		V_0 = 0;
		goto IL_002f;
	}

IL_0022:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_head_21();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int16_t)0);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_hash_size_23();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_8 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		int32_t L_9 = __this->get_level_37();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12 = L_11->get_max_lazy_1();
		__this->set_max_lazy_match_36(L_12);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_13 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		int32_t L_14 = __this->get_level_37();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->get_good_length_0();
		__this->set_good_match_39(L_17);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_18 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		int32_t L_19 = __this->get_level_37();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = L_21->get_nice_length_2();
		__this->set_nice_match_40(L_22);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_23 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		int32_t L_24 = __this->get_level_37();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		int32_t L_27 = L_26->get_max_chain_3();
		__this->set_max_chain_length_35(L_27);
		__this->set_strstart_31(0);
		__this->set_block_start_27(0);
		__this->set_lookahead_33(0);
		int32_t L_28 = 2;
		V_1 = L_28;
		__this->set_prev_length_34(L_28);
		int32_t L_29 = V_1;
		__this->set_match_length_28(L_29);
		__this->set_match_available_30(0);
		__this->set_ins_h_22(0);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::tr_init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_tr_init_m42D8B2C77CC96FBE34A20385791ED418AFFF0E16 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_0 = __this->get_l_desc_44();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_41();
		NullCheck(L_0);
		L_0->set_dyn_tree_10(L_1);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_2 = __this->get_l_desc_44();
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_3 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_l_desc_3();
		NullCheck(L_2);
		L_2->set_stat_desc_12(L_3);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_4 = __this->get_d_desc_45();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_42();
		NullCheck(L_4);
		L_4->set_dyn_tree_10(L_5);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_6 = __this->get_d_desc_45();
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_7 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_d_desc_4();
		NullCheck(L_6);
		L_6->set_stat_desc_12(L_7);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_8 = __this->get_bl_desc_46();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = __this->get_bl_tree_43();
		NullCheck(L_8);
		L_8->set_dyn_tree_10(L_9);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_10 = __this->get_bl_desc_46();
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_11 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_bl_desc_5();
		NullCheck(L_10);
		L_10->set_stat_desc_12(L_11);
		__this->set_bi_buf_60((int16_t)0);
		__this->set_bi_valid_61(0);
		__this->set_last_eob_len_59(8);
		Deflate_init_block_mA66B0FCA3808B20C31015E9E8AF557A39FCB5B38(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::init_block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_init_block_mA66B0FCA3808B20C31015E9E8AF557A39FCB5B38 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_41();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))), (int16_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_L_CODES_3();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		V_1 = 0;
		goto IL_002e;
	}

IL_001f:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_42();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2))), (int16_t)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)30))))
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0046;
	}

IL_0037:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = __this->get_bl_tree_43();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2))), (int16_t)0);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)19))))
		{
			goto IL_0037;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = __this->get_dyn_ltree_41();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)512)), (int16_t)1);
		int32_t L_14 = 0;
		V_3 = L_14;
		__this->set_static_len_57(L_14);
		int32_t L_15 = V_3;
		__this->set_opt_len_56(L_15);
		int32_t L_16 = 0;
		V_3 = L_16;
		__this->set_matches_58(L_16);
		int32_t L_17 = V_3;
		__this->set_last_lit_54(L_17);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_pqdownheap_mECA2F4629E9BDBA9C898FA8B7755602E46139CBE (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_heap_48();
		int32_t L_1 = ___k1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		goto IL_006a;
	}

IL_000f:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_heap_len_49();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___tree0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_heap_48();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_heap_48();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_depth_51();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Deflate_smaller_m36247F54BF132649632F92AE43D1393D74327659(L_7, L_11, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_003c:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_heap_48();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_depth_51();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Deflate_smaller_m36247F54BF132649632F92AE43D1393D74327659(L_19, L_20, L_24, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0073;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_heap_48();
		int32_t L_28 = ___k1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_heap_48();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		int32_t L_33 = V_1;
		___k1 = L_33;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34<<(int32_t)1));
	}

IL_006a:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->get_heap_len_49();
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_000f;
		}
	}

IL_0073:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_heap_48();
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		return;
	}
}
// System.Boolean ComponentAce.Compression.Libs.zlib.Deflate::smaller(System.Int16[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate_smaller_m36247F54BF132649632F92AE43D1393D74327659 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___depth3, const RuntimeMethod* method)
{
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) < ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = ___tree0;
		int32_t L_9 = ___n1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = ___tree0;
		int32_t L_13 = ___m2;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2));
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_11) == ((uint32_t)L_15))))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___depth3;
		int32_t L_17 = ___n1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___depth3;
		int32_t L_21 = ___m2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		return (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_scan_tree_m0AFE4FA8D3989A6B58C0F8D3102079043D9ADE3E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___max_code1;
		int64_t L_6;
		L_6 = SupportClass_Identity_m1803D8ECDFA9464117EB94A2883BAA7691C67FF3(((int64_t)((int64_t)((int32_t)65535))), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (int32_t)2)), (int32_t)1))), (int16_t)((int16_t)((int16_t)L_6)));
		V_0 = 0;
		goto IL_00fe;
	}

IL_0038:
	{
		int32_t L_7 = V_3;
		V_2 = L_7;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = ___tree0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		int32_t L_12 = V_4;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		V_4 = L_13;
		int32_t L_14 = V_5;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_00fa;
		}
	}

IL_0056:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_6;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0076;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = __this->get_bl_tree_43();
		int32_t L_20 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = __this->get_bl_tree_43();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2));
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_4;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)2))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)))));
		goto IL_00d4;
	}

IL_0076:
	{
		int32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_0091;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = __this->get_bl_tree_43();
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int16_t* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))));
	}

IL_0091:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_33 = __this->get_bl_tree_43();
		NullCheck(L_33);
		int16_t* L_34 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)32))));
		int32_t L_35 = *((int16_t*)L_34);
		*((int16_t*)L_34) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))));
		goto IL_00d4;
	}

IL_00a6:
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)10))))
		{
			goto IL_00c1;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = __this->get_bl_tree_43();
		NullCheck(L_37);
		int16_t* L_38 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)34))));
		int32_t L_39 = *((int16_t*)L_38);
		*((int16_t*)L_38) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))));
		goto IL_00d4;
	}

IL_00c1:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = __this->get_bl_tree_43();
		NullCheck(L_40);
		int16_t* L_41 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)36))));
		int32_t L_42 = *((int16_t*)L_41);
		*((int16_t*)L_41) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1))));
	}

IL_00d4:
	{
		V_4 = 0;
		int32_t L_43 = V_2;
		V_1 = L_43;
		int32_t L_44 = V_3;
		if (L_44)
		{
			goto IL_00e8;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_00fa;
	}

IL_00e8:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_3;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_00f4;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_00fa;
	}

IL_00f4:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_00fa:
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00fe:
	{
		int32_t L_48 = V_0;
		int32_t L_49 = ___max_code1;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0038;
		}
	}
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_build_bl_tree_mB1E1BB45C6B58C53743BF461E5B144FA9EB1756A (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_41();
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_1 = __this->get_l_desc_44();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_max_code_11();
		Deflate_scan_tree_m0AFE4FA8D3989A6B58C0F8D3102079043D9ADE3E(__this, L_0, L_2, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_dyn_dtree_42();
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_4 = __this->get_d_desc_45();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_max_code_11();
		Deflate_scan_tree_m0AFE4FA8D3989A6B58C0F8D3102079043D9ADE3E(__this, L_3, L_5, /*hidden argument*/NULL);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_6 = __this->get_bl_desc_46();
		NullCheck(L_6);
		Tree_build_tree_m785563FC52B4A8A398EB767AF4B4314DB2DB37EE(L_6, __this, /*hidden argument*/NULL);
		V_0 = ((int32_t)18);
		goto IL_0057;
	}

IL_003f:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = __this->get_bl_tree_43();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_bl_order_5();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2)), (int32_t)1));
		int16_t L_13 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)3)))
		{
			goto IL_003f;
		}
	}

IL_005b:
	{
		int32_t L_16 = __this->get_opt_len_56();
		int32_t L_17 = V_0;
		__this->set_opt_len_56(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)))), (int32_t)5)), (int32_t)5)), (int32_t)4)))));
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_all_trees_m959ADD871BA98CE85B164117243F4BAAB7F4067F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___lcodes0;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)257))), 5, /*hidden argument*/NULL);
		int32_t L_1 = ___dcodes1;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), 5, /*hidden argument*/NULL);
		int32_t L_2 = ___blcodes2;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)4)), 4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_bl_tree_43();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_bl_order_5();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2)), (int32_t)1));
		int16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, L_9, 3, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = __this->get_dyn_ltree_41();
		int32_t L_14 = ___lcodes0;
		Deflate_send_tree_mD887A073AB1FF3E3711173FCA6B74DD4A77B791D(__this, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_dtree_42();
		int32_t L_16 = ___dcodes1;
		Deflate_send_tree_mD887A073AB1FF3E3711173FCA6B74DD4A77B791D(__this, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_tree_mD887A073AB1FF3E3711173FCA6B74DD4A77B791D (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_00f9;
	}

IL_0023:
	{
		int32_t L_4 = V_3;
		V_2 = L_4;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___tree0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00f5;
		}
	}

IL_0041:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005f;
		}
	}

IL_0047:
	{
		int32_t L_16 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = __this->get_bl_tree_43();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cf;
	}

IL_005f:
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = __this->get_bl_tree_43();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0079:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_26 = __this->get_bl_tree_43();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)16), L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_4;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)3)), 2, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_0094:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)10))))
		{
			goto IL_00b5;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = __this->get_bl_tree_43();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)17), L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_00b5:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = __this->get_bl_tree_43();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)18), L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)11))), 7, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		V_4 = 0;
		int32_t L_33 = V_2;
		V_1 = L_33;
		int32_t L_34 = V_3;
		if (L_34)
		{
			goto IL_00e3;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_00f5;
	}

IL_00e3:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00ef;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_00f5;
	}

IL_00ef:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_00f5:
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = ___max_code1;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_byte(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_mA66AA44B886AA5CE385ADBEEFA14297EC9CFEC6E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_pending_buf_7();
		int32_t L_3 = __this->get_pending_10();
		int32_t L_4 = ___len2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_pending_10();
		int32_t L_6 = ___len2;
		__this->set_pending_10(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_byte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, uint8_t ___c0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_pending_buf_7();
		int32_t L_1 = __this->get_pending_10();
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->set_pending_10(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___c0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::put_short(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___w0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___w0;
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)L_0)), /*hidden argument*/NULL);
		int32_t L_1 = ___w0;
		int32_t L_2;
		L_2 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_1, 8, /*hidden argument*/NULL);
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::putShortMSB(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___b0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___b0;
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_0>>(int32_t)8)))), /*hidden argument*/NULL);
		int32_t L_1 = ___b0;
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)L_1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method)
{
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree1;
		int32_t L_1 = ___c0;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree1;
		int32_t L_5 = ___c0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)), (int32_t)1));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, ((int32_t)((int32_t)L_3&(int32_t)((int32_t)65535))), ((int32_t)((int32_t)L_7&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___value_Renamed0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		V_0 = L_0;
		int32_t L_1 = __this->get_bi_valid_61();
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_2)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_3 = ___value_Renamed0;
		V_1 = L_3;
		int16_t L_4 = __this->get_bi_buf_60();
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_bi_valid_61();
		__this->set_bi_buf_60(((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((uint16_t)L_4))|(int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		int16_t L_7 = __this->get_bi_buf_60();
		Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_bi_valid_61();
		int32_t L_10;
		L_10 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_9)), /*hidden argument*/NULL);
		__this->set_bi_buf_60(((int16_t)((int16_t)L_10)));
		int32_t L_11 = __this->get_bi_valid_61();
		int32_t L_12 = V_0;
		__this->set_bi_valid_61(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)16))))));
		return;
	}

IL_0065:
	{
		int16_t L_13 = __this->get_bi_buf_60();
		int32_t L_14 = ___value_Renamed0;
		int32_t L_15 = __this->get_bi_valid_61();
		__this->set_bi_buf_60(((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((uint16_t)L_13))|(int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		int32_t L_16 = __this->get_bi_valid_61();
		int32_t L_17 = V_0;
		__this->set_bi_valid_61(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)));
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_align_m9F72D51AE59E8DF7AA93C052AF4627E67238AFEF (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, 2, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_ltree_1();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)256), L_0, /*hidden argument*/NULL);
		Deflate_bi_flush_m38D84F389D13221EF479BE9B84A8B390C14EB44B(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_last_eob_len_59();
		int32_t L_2 = __this->get_bi_valid_61();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_1)), (int32_t)((int32_t)10))), (int32_t)L_2))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, 2, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_ltree_1();
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)256), L_3, /*hidden argument*/NULL);
		Deflate_bi_flush_m38D84F389D13221EF479BE9B84A8B390C14EB44B(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		__this->set_last_eob_len_59(7);
		return;
	}
}
// System.Boolean ComponentAce.Compression.Libs.zlib.Deflate::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_pending_buf_7();
		int32_t L_1 = __this->get_d_buf_55();
		int32_t L_2 = __this->get_last_lit_54();
		int32_t L_3 = ___dist0;
		int32_t L_4;
		L_4 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_3, 8, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))))), (uint8_t)((int32_t)((uint8_t)L_4)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_pending_buf_7();
		int32_t L_6 = __this->get_d_buf_55();
		int32_t L_7 = __this->get_last_lit_54();
		int32_t L_8 = ___dist0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2)))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)L_8)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_pending_buf_7();
		int32_t L_10 = __this->get_l_buf_52();
		int32_t L_11 = __this->get_last_lit_54();
		int32_t L_12 = ___lc1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))), (uint8_t)((int32_t)((uint8_t)L_12)));
		int32_t L_13 = __this->get_last_lit_54();
		__this->set_last_lit_54(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = ___dist0;
		if (L_14)
		{
			goto IL_0075;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_41();
		int32_t L_16 = ___lc1;
		NullCheck(L_15);
		int16_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)))));
		int32_t L_18 = *((int16_t*)L_17);
		*((int16_t*)L_17) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1))));
		goto IL_00c3;
	}

IL_0075:
	{
		int32_t L_19 = __this->get_matches_58();
		__this->set_matches_58(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		int32_t L_20 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = __this->get_dyn_ltree_41();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get__length_code_7();
		int32_t L_23 = ___lc1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		int16_t* L_26 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)256))), (int32_t)1)), (int32_t)2)))));
		int32_t L_27 = *((int16_t*)L_26);
		*((int16_t*)L_26) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_dyn_dtree_42();
		int32_t L_29 = ___dist0;
		int32_t L_30;
		L_30 = Tree_d_code_m0170777DABE6477AD30D425BE284A316BBD63087(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		int16_t* L_31 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))));
	}

IL_00c3:
	{
		int32_t L_33 = __this->get_last_lit_54();
		if (((int32_t)((int32_t)L_33&(int32_t)((int32_t)8191))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_34 = __this->get_level_37();
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_35 = __this->get_last_lit_54();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)8));
		int32_t L_36 = __this->get_strstart_31();
		int32_t L_37 = __this->get_block_start_27();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		V_2 = 0;
		goto IL_0115;
	}

IL_00f5:
	{
		int32_t L_38 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = __this->get_dyn_dtree_42();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2));
		int16_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_dbits_3();
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_38)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_42)), (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)5)), (int64_t)((int64_t)((int64_t)L_46))))))))));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0115:
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)30))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_49 = V_0;
		int32_t L_50;
		L_50 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_49, 3, /*hidden argument*/NULL);
		V_0 = L_50;
		int32_t L_51 = __this->get_matches_58();
		int32_t L_52 = __this->get_last_lit_54();
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)((int32_t)L_52/(int32_t)2)))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)((int32_t)L_54/(int32_t)2)))))
		{
			goto IL_013a;
		}
	}
	{
		return (bool)1;
	}

IL_013a:
	{
		int32_t L_55 = __this->get_last_lit_54();
		int32_t L_56 = __this->get_lit_bufsize_53();
		return (bool)((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1))))? 1 : 0);
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::compress_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_compress_block_mC6F4BF33DBD84C6FC2F161A02FE37BA2B42E21E3 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_last_lit_54();
		if (!L_0)
		{
			goto IL_00df;
		}
	}

IL_000d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_buf_7();
		int32_t L_2 = __this->get_d_buf_55();
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2))));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_buf_7();
		int32_t L_7 = __this->get_d_buf_55();
		int32_t L_8 = V_2;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2)))), (int32_t)1));
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))&(int32_t)((int32_t)65280)))|(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_buf_7();
		int32_t L_12 = __this->get_l_buf_52();
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)255)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_18 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___ltree0;
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get__length_code_7();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		int32_t L_24 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = ___ltree0;
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)256))), (int32_t)1)), L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_lbits_2();
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = L_29;
		int32_t L_30 = V_4;
		if (!L_30)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_base_length_8();
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_35));
		int32_t L_36 = V_1;
		int32_t L_37 = V_4;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, L_36, L_37, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		int32_t L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		int32_t L_40;
		L_40 = Tree_d_code_m0170777DABE6477AD30D425BE284A316BBD63087(L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		int32_t L_41 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_42 = ___dtree1;
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, L_41, L_42, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_dbits_3();
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_4 = L_46;
		int32_t L_47 = V_4;
		if (!L_47)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_48 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_base_dist_9();
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_52));
		int32_t L_53 = V_0;
		int32_t L_54 = V_4;
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(__this, L_53, L_54, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		int32_t L_55 = V_2;
		int32_t L_56 = __this->get_last_lit_54();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_000d;
		}
	}

IL_00df:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_57 = ___ltree0;
		Deflate_send_code_mE6CEE774FFC6CCC3633C4F87F70109FF410721DC(__this, ((int32_t)256), L_57, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_58 = ___ltree0;
		NullCheck(L_58);
		int32_t L_59 = ((int32_t)513);
		int16_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		__this->set_last_eob_len_59(L_60);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_set_data_type_mB53FAB1E44C35B1F3BC0D0EEACBD310012BD614F (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B11_0 = NULL;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B12_1 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0019;
	}

IL_0008:
	{
		int32_t L_0 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_41();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2));
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = __this->get_dyn_ltree_41();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_004b;
	}

IL_003a:
	{
		int32_t L_14 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_41();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2));
		int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_18));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)256))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_22, 2, /*hidden argument*/NULL);
		G_B10_0 = __this;
		if ((((int32_t)L_21) > ((int32_t)L_23)))
		{
			G_B11_0 = __this;
			goto IL_0061;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_0062:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_data_type_12((uint8_t)((int32_t)((uint8_t)G_B12_0)));
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_flush_m38D84F389D13221EF479BE9B84A8B390C14EB44B (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bi_valid_61();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0025;
		}
	}
	{
		int16_t L_1 = __this->get_bi_buf_60();
		Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E(__this, L_1, /*hidden argument*/NULL);
		__this->set_bi_buf_60((int16_t)0);
		__this->set_bi_valid_61(0);
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->get_bi_valid_61();
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		int16_t L_3 = __this->get_bi_buf_60();
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)L_3)), /*hidden argument*/NULL);
		int16_t L_4 = __this->get_bi_buf_60();
		int32_t L_5;
		L_5 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_4, 8, /*hidden argument*/NULL);
		__this->set_bi_buf_60(((int16_t)((int16_t)L_5)));
		int32_t L_6 = __this->get_bi_valid_61();
		__this->set_bi_valid_61(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)8)));
	}

IL_005c:
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_bi_windup_m8B3D43BE48B233A612B599C01611D9A248C61576 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bi_valid_61();
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		int16_t L_1 = __this->get_bi_buf_60();
		Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E(__this, L_1, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0017:
	{
		int32_t L_2 = __this->get_bi_valid_61();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int16_t L_3 = __this->get_bi_buf_60();
		Deflate_put_byte_m3ED5B595183B639F83F2B4DF5F417807D6EAF360(__this, (uint8_t)((int32_t)((uint8_t)L_3)), /*hidden argument*/NULL);
	}

IL_002d:
	{
		__this->set_bi_buf_60((int16_t)0);
		__this->set_bi_valid_61(0);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_copy_block_m9EF5D8EF20100EDE0E148AED18C6C58750F27C51 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method)
{
	{
		Deflate_bi_windup_m8B3D43BE48B233A612B599C01611D9A248C61576(__this, /*hidden argument*/NULL);
		__this->set_last_eob_len_59(8);
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___len1;
		Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E(__this, ((int16_t)((int16_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = ___len1;
		Deflate_put_short_mF58C029A0CBA19A873814BB82C64AFA064233A9E(__this, ((int16_t)((int16_t)((~L_2)))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_window_18();
		int32_t L_4 = ___buf0;
		int32_t L_5 = ___len1;
		Deflate_put_byte_mA66AA44B886AA5CE385ADBEEFA14297EC9CFEC6E(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, bool ___eof0, const RuntimeMethod* method)
{
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B2_0 = NULL;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get_block_start_27();
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1 = __this->get_block_start_27();
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		int32_t L_2 = __this->get_strstart_31();
		int32_t L_3 = __this->get_block_start_27();
		bool L_4 = ___eof0;
		NullCheck(G_B3_1);
		Deflate__tr_flush_block_m4AE54513F62012BB177A1DD4960BC9294CD1C7B8(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_strstart_31();
		__this->set_block_start_27(L_5);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_6 = __this->get_strm_5();
		NullCheck(L_6);
		ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_stored(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_stored_mEEF074EF6FDE2634B496206476E24126496CB4C4 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)65535);
		int32_t L_0 = V_0;
		int32_t L_1 = __this->get_pending_buf_size_8();
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)5)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->get_pending_buf_size_8();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)5));
	}

IL_001a:
	{
		int32_t L_3 = __this->get_lookahead_33();
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		Deflate_fill_window_mD153BDE316DBDE9F1BDE83EE631A65B86C09FD56(__this, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_lookahead_33();
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = ___flush0;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		int32_t L_6 = __this->get_lookahead_33();
		if (!L_6)
		{
			goto IL_00d7;
		}
	}

IL_0041:
	{
		int32_t L_7 = __this->get_strstart_31();
		int32_t L_8 = __this->get_lookahead_33();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		__this->set_lookahead_33(0);
		int32_t L_9 = __this->get_block_start_27();
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = __this->get_strstart_31();
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_12 = __this->get_strstart_31();
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_00a0;
		}
	}

IL_0075:
	{
		int32_t L_14 = __this->get_strstart_31();
		int32_t L_15 = V_1;
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)));
		int32_t L_16 = V_1;
		__this->set_strstart_31(L_16);
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)0, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_17 = __this->get_strm_5();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_avail_out_7();
		if (L_18)
		{
			goto IL_00a0;
		}
	}
	{
		return 0;
	}

IL_00a0:
	{
		int32_t L_19 = __this->get_strstart_31();
		int32_t L_20 = __this->get_block_start_27();
		int32_t L_21 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_22 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)))))
		{
			goto IL_001a;
		}
	}
	{
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)0, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_23 = __this->get_strm_5();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_avail_out_7();
		if (L_24)
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_00d7:
	{
		int32_t L_25 = ___flush0;
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_26 = __this->get_strm_5();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_avail_out_7();
		if (L_27)
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_28 = ___flush0;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_00f4;
		}
	}
	{
		return 0;
	}

IL_00f4:
	{
		return 2;
	}

IL_00f6:
	{
		int32_t L_29 = ___flush0;
		if ((((int32_t)L_29) == ((int32_t)4)))
		{
			goto IL_00fc;
		}
	}
	{
		return 1;
	}

IL_00fc:
	{
		return 3;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_stored_block_m2BA7FE64D58F7E6D7B4E88041B99D376892650B2 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B2_0 = NULL;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B3_1 = NULL;
	{
		bool L_0 = ___eof2;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(G_B3_1, G_B3_0, 3, /*hidden argument*/NULL);
		int32_t L_1 = ___buf0;
		int32_t L_2 = ___stored_len1;
		Deflate_copy_block_m9EF5D8EF20100EDE0E148AED18C6C58750F27C51(__this, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__tr_flush_block_m4AE54513F62012BB177A1DD4960BC9294CD1C7B8 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B12_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B13_2 = NULL;
	int32_t G_B16_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B17_2 = NULL;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_level_37();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		uint8_t L_1 = __this->get_data_type_12();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		Deflate_set_data_type_mB53FAB1E44C35B1F3BC0D0EEACBD310012BD614F(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_2 = __this->get_l_desc_44();
		NullCheck(L_2);
		Tree_build_tree_m785563FC52B4A8A398EB767AF4B4314DB2DB37EE(L_2, __this, /*hidden argument*/NULL);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_3 = __this->get_d_desc_45();
		NullCheck(L_3);
		Tree_build_tree_m785563FC52B4A8A398EB767AF4B4314DB2DB37EE(L_3, __this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Deflate_build_bl_tree_mB1E1BB45C6B58C53743BF461E5B144FA9EB1756A(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = __this->get_opt_len_56();
		int32_t L_6;
		L_6 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)3)), (int32_t)7)), 3, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = __this->get_static_len_57();
		int32_t L_8;
		L_8 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)3)), (int32_t)7)), 3, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) > ((int32_t)L_10)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_11 = V_1;
		V_0 = L_11;
		goto IL_0069;
	}

IL_0063:
	{
		int32_t L_12 = ___stored_len1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)5));
		V_1 = L_13;
		V_0 = L_13;
	}

IL_0069:
	{
		int32_t L_14 = ___stored_len1;
		int32_t L_15 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)4))) > ((int32_t)L_15)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_16 = ___buf0;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = ___buf0;
		int32_t L_18 = ___stored_len1;
		bool L_19 = ___eof2;
		Deflate__tr_stored_block_m2BA7FE64D58F7E6D7B4E88041B99D376892650B2(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_007e:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00a4;
		}
	}
	{
		bool L_22 = ___eof2;
		G_B11_0 = 2;
		G_B11_1 = __this;
		if (L_22)
		{
			G_B12_0 = 2;
			G_B12_1 = __this;
			goto IL_008a;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008b;
	}

IL_008a:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008b:
	{
		NullCheck(G_B13_2);
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(G_B13_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B13_1, (int32_t)G_B13_0)), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_ltree_1();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_dtree_2();
		Deflate_compress_block_mC6F4BF33DBD84C6FC2F161A02FE37BA2B42E21E3(__this, L_23, L_24, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00a4:
	{
		bool L_25 = ___eof2;
		G_B15_0 = 4;
		G_B15_1 = __this;
		if (L_25)
		{
			G_B16_0 = 4;
			G_B16_1 = __this;
			goto IL_00ac;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00ad:
	{
		NullCheck(G_B17_2);
		Deflate_send_bits_mA88B89E3077DED834E0D2F7ACBE03B71412E1CC0(G_B17_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B17_1, (int32_t)G_B17_0)), 3, /*hidden argument*/NULL);
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_26 = __this->get_l_desc_44();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_max_code_11();
		Tree_t41355ACB403457F46C8722BE5800B70589101E81 * L_28 = __this->get_d_desc_45();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_max_code_11();
		int32_t L_30 = V_2;
		Deflate_send_all_trees_m959ADD871BA98CE85B164117243F4BAAB7F4067F(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = __this->get_dyn_ltree_41();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = __this->get_dyn_dtree_42();
		Deflate_compress_block_mC6F4BF33DBD84C6FC2F161A02FE37BA2B42E21E3(__this, L_31, L_32, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		Deflate_init_block_mA66B0FCA3808B20C31015E9E8AF557A39FCB5B38(__this, /*hidden argument*/NULL);
		bool L_33 = ___eof2;
		if (!L_33)
		{
			goto IL_00f8;
		}
	}
	{
		Deflate_bi_windup_m8B3D43BE48B233A612B599C01611D9A248C61576(__this, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::fill_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_fill_window_mD153BDE316DBDE9F1BDE83EE631A65B86C09FD56 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B16_2 = NULL;

IL_0000:
	{
		int32_t L_0 = __this->get_window_size_19();
		int32_t L_1 = __this->get_lookahead_33();
		int32_t L_2 = __this->get_strstart_31();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = __this->get_strstart_31();
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = __this->get_lookahead_33();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = __this->get_w_size_15();
		V_3 = L_6;
		goto IL_013f;
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		goto IL_013f;
	}

IL_0041:
	{
		int32_t L_9 = __this->get_strstart_31();
		int32_t L_10 = __this->get_w_size_15();
		int32_t L_11 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_12 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)L_12)))))
		{
			goto IL_013f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_window_18();
		int32_t L_14 = __this->get_w_size_15();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_window_18();
		int32_t L_16 = __this->get_w_size_15();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_13, L_14, (RuntimeArray *)(RuntimeArray *)L_15, 0, L_16, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_match_start_32();
		int32_t L_18 = __this->get_w_size_15();
		__this->set_match_start_32(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)));
		int32_t L_19 = __this->get_strstart_31();
		int32_t L_20 = __this->get_w_size_15();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)));
		int32_t L_21 = __this->get_block_start_27();
		int32_t L_22 = __this->get_w_size_15();
		__this->set_block_start_27(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)));
		int32_t L_23 = __this->get_hash_size_23();
		V_0 = L_23;
		int32_t L_24 = V_0;
		V_2 = L_24;
	}

IL_00bf:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = __this->get_head_21();
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		int16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = __this->get_head_21();
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		int32_t L_33 = __this->get_w_size_15();
		G_B9_0 = L_31;
		G_B9_1 = L_30;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			G_B10_0 = L_31;
			G_B10_1 = L_30;
			goto IL_00e5;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ed;
	}

IL_00e5:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = __this->get_w_size_15();
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35));
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ed:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)((int16_t)G_B11_0)));
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
		V_0 = L_37;
		if (L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = __this->get_w_size_15();
		V_0 = L_38;
		int32_t L_39 = V_0;
		V_2 = L_39;
	}

IL_00ff:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = __this->get_prev_20();
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		V_2 = L_42;
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int16_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_1 = ((int32_t)((int32_t)L_44&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = __this->get_prev_20();
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		int32_t L_48 = __this->get_w_size_15();
		G_B14_0 = L_46;
		G_B14_1 = L_45;
		if ((((int32_t)L_47) >= ((int32_t)L_48)))
		{
			G_B15_0 = L_46;
			G_B15_1 = L_45;
			goto IL_0125;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_012d;
	}

IL_0125:
	{
		int32_t L_49 = V_1;
		int32_t L_50 = __this->get_w_size_15();
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50));
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_012d:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)((int16_t)G_B16_0)));
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		V_0 = L_52;
		if (L_52)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_53 = V_3;
		int32_t L_54 = __this->get_w_size_15();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
	}

IL_013f:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_55 = __this->get_strm_5();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_avail_in_3();
		if (L_56)
		{
			goto IL_014d;
		}
	}
	{
		return;
	}

IL_014d:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_57 = __this->get_strm_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = __this->get_window_18();
		int32_t L_59 = __this->get_strstart_31();
		int32_t L_60 = __this->get_lookahead_33();
		int32_t L_61 = V_3;
		NullCheck(L_57);
		int32_t L_62;
		L_62 = ZStream_read_buf_mC5F146889D2E448DFCC3050CB18FE4ED2057CF8A(L_57, L_58, ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60)), L_61, /*hidden argument*/NULL);
		V_0 = L_62;
		int32_t L_63 = __this->get_lookahead_33();
		int32_t L_64 = V_0;
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64)));
		int32_t L_65 = __this->get_lookahead_33();
		if ((((int32_t)L_65) < ((int32_t)3)))
		{
			goto IL_01d0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = __this->get_window_18();
		int32_t L_67 = __this->get_strstart_31();
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		__this->set_ins_h_22(((int32_t)((int32_t)L_69&(int32_t)((int32_t)255))));
		int32_t L_70 = __this->get_ins_h_22();
		int32_t L_71 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = __this->get_window_18();
		int32_t L_73 = __this->get_strstart_31();
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		uint8_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		int32_t L_76 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_70<<(int32_t)((int32_t)((int32_t)L_71&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)255)))))&(int32_t)L_76)));
	}

IL_01d0:
	{
		int32_t L_77 = __this->get_lookahead_33();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_78 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_77) >= ((int32_t)L_78)))
		{
			goto IL_01ed;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_79 = __this->get_strm_5();
		NullCheck(L_79);
		int32_t L_80 = L_79->get_avail_in_3();
		if (L_80)
		{
			goto IL_0000;
		}
	}

IL_01ed:
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_fast(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_fast_mB749779D018A8168E6217340B07FBD32C3525FE2 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_33();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		Deflate_fill_window_mD153BDE316DBDE9F1BDE83EE631A65B86C09FD56(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_lookahead_33();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_5 = __this->get_lookahead_33();
		if (!L_5)
		{
			goto IL_02c4;
		}
	}

IL_0032:
	{
		int32_t L_6 = __this->get_lookahead_33();
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_7 = __this->get_ins_h_22();
		int32_t L_8 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_window_18();
		int32_t L_10 = __this->get_strstart_31();
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)2));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))&(int32_t)L_13)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = __this->get_head_21();
		int32_t L_15 = __this->get_ins_h_22();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int16_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = __this->get_prev_20();
		int32_t L_19 = __this->get_strstart_31();
		int32_t L_20 = __this->get_w_mask_17();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = __this->get_head_21();
		int32_t L_22 = __this->get_ins_h_22();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_19&(int32_t)L_20))), (int16_t)L_24);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = __this->get_head_21();
		int32_t L_26 = __this->get_ins_h_22();
		int32_t L_27 = __this->get_strstart_31();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int16_t)((int16_t)((int16_t)L_27)));
	}

IL_00b7:
	{
		int32_t L_28 = V_0;
		if (!((int64_t)((int64_t)L_28)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_29 = __this->get_strstart_31();
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_32 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_30))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_33 = __this->get_strategy_38();
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = Deflate_longest_match_m90026559FAA5A9C4DB9B9E10FA9D7540E7750FF1(__this, L_34, /*hidden argument*/NULL);
		__this->set_match_length_28(L_35);
	}

IL_00ed:
	{
		int32_t L_36 = __this->get_match_length_28();
		if ((((int32_t)L_36) < ((int32_t)3)))
		{
			goto IL_026e;
		}
	}
	{
		int32_t L_37 = __this->get_strstart_31();
		int32_t L_38 = __this->get_match_start_32();
		int32_t L_39 = __this->get_match_length_28();
		bool L_40;
		L_40 = Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)3)), /*hidden argument*/NULL);
		V_1 = L_40;
		int32_t L_41 = __this->get_lookahead_33();
		int32_t L_42 = __this->get_match_length_28();
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42)));
		int32_t L_43 = __this->get_match_length_28();
		int32_t L_44 = __this->get_max_lazy_match_36();
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_45 = __this->get_lookahead_33();
		if ((((int32_t)L_45) < ((int32_t)3)))
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_46 = __this->get_match_length_28();
		__this->set_match_length_28(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)));
	}

IL_0153:
	{
		int32_t L_47 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		int32_t L_48 = __this->get_ins_h_22();
		int32_t L_49 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = __this->get_window_18();
		int32_t L_51 = __this->get_strstart_31();
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)2));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_48<<(int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)255)))))&(int32_t)L_54)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_55 = __this->get_head_21();
		int32_t L_56 = __this->get_ins_h_22();
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int16_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)((int32_t)L_58&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_59 = __this->get_prev_20();
		int32_t L_60 = __this->get_strstart_31();
		int32_t L_61 = __this->get_w_mask_17();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_62 = __this->get_head_21();
		int32_t L_63 = __this->get_ins_h_22();
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int16_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_60&(int32_t)L_61))), (int16_t)L_65);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_66 = __this->get_head_21();
		int32_t L_67 = __this->get_ins_h_22();
		int32_t L_68 = __this->get_strstart_31();
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (int16_t)((int16_t)((int16_t)L_68)));
		int32_t L_69 = __this->get_match_length_28();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		int32_t L_70 = V_2;
		__this->set_match_length_28(L_70);
		int32_t L_71 = V_2;
		if (L_71)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_72 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)));
		goto IL_02a5;
	}

IL_0206:
	{
		int32_t L_73 = __this->get_strstart_31();
		int32_t L_74 = __this->get_match_length_28();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74)));
		__this->set_match_length_28(0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = __this->get_window_18();
		int32_t L_76 = __this->get_strstart_31();
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		__this->set_ins_h_22(((int32_t)((int32_t)L_78&(int32_t)((int32_t)255))));
		int32_t L_79 = __this->get_ins_h_22();
		int32_t L_80 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = __this->get_window_18();
		int32_t L_82 = __this->get_strstart_31();
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_79<<(int32_t)((int32_t)((int32_t)L_80&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_84&(int32_t)((int32_t)255)))))&(int32_t)L_85)));
		goto IL_02a5;
	}

IL_026e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = __this->get_window_18();
		int32_t L_87 = __this->get_strstart_31();
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint8_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		bool L_90;
		L_90 = Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F(__this, 0, ((int32_t)((int32_t)L_89&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_90;
		int32_t L_91 = __this->get_lookahead_33();
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1)));
		int32_t L_92 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)));
	}

IL_02a5:
	{
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_0002;
		}
	}
	{
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)0, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_94 = __this->get_strm_5();
		NullCheck(L_94);
		int32_t L_95 = L_94->get_avail_out_7();
		if (L_95)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_02c4:
	{
		int32_t L_96 = ___flush0;
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)((((int32_t)L_96) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_97 = __this->get_strm_5();
		NullCheck(L_97);
		int32_t L_98 = L_97->get_avail_out_7();
		if (L_98)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_99 = ___flush0;
		if ((!(((uint32_t)L_99) == ((uint32_t)4))))
		{
			goto IL_02e1;
		}
	}
	{
		return 2;
	}

IL_02e1:
	{
		return 0;
	}

IL_02e3:
	{
		int32_t L_100 = ___flush0;
		if ((((int32_t)L_100) == ((int32_t)4)))
		{
			goto IL_02e9;
		}
	}
	{
		return 1;
	}

IL_02e9:
	{
		return 3;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate_slow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_slow_m0195CBDDE0EA237CBE3C6615F64888B377137988 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_33();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		Deflate_fill_window_mD153BDE316DBDE9F1BDE83EE631A65B86C09FD56(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_lookahead_33();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_5 = __this->get_lookahead_33();
		if (!L_5)
		{
			goto IL_0323;
		}
	}

IL_0032:
	{
		int32_t L_6 = __this->get_lookahead_33();
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_7 = __this->get_ins_h_22();
		int32_t L_8 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_window_18();
		int32_t L_10 = __this->get_strstart_31();
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)2));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))&(int32_t)L_13)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = __this->get_head_21();
		int32_t L_15 = __this->get_ins_h_22();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int16_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)((int32_t)L_17&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = __this->get_prev_20();
		int32_t L_19 = __this->get_strstart_31();
		int32_t L_20 = __this->get_w_mask_17();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = __this->get_head_21();
		int32_t L_22 = __this->get_ins_h_22();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_19&(int32_t)L_20))), (int16_t)L_24);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = __this->get_head_21();
		int32_t L_26 = __this->get_ins_h_22();
		int32_t L_27 = __this->get_strstart_31();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int16_t)((int16_t)((int16_t)L_27)));
	}

IL_00b7:
	{
		int32_t L_28 = __this->get_match_length_28();
		__this->set_prev_length_34(L_28);
		int32_t L_29 = __this->get_match_start_32();
		__this->set_prev_match_29(L_29);
		__this->set_match_length_28(2);
		int32_t L_30 = V_0;
		if (!L_30)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_31 = __this->get_prev_length_34();
		int32_t L_32 = __this->get_max_lazy_match_36();
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_33 = __this->get_strstart_31();
		int32_t L_34 = V_0;
		int32_t L_35 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_36 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_37 = __this->get_strategy_38();
		if ((((int32_t)L_37) == ((int32_t)2)))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39;
		L_39 = Deflate_longest_match_m90026559FAA5A9C4DB9B9E10FA9D7540E7750FF1(__this, L_38, /*hidden argument*/NULL);
		__this->set_match_length_28(L_39);
	}

IL_0119:
	{
		int32_t L_40 = __this->get_match_length_28();
		if ((((int32_t)L_40) > ((int32_t)5)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_41 = __this->get_strategy_38();
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_42 = __this->get_match_length_28();
		if ((!(((uint32_t)L_42) == ((uint32_t)3))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_43 = __this->get_strstart_31();
		int32_t L_44 = __this->get_match_start_32();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_44))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_014f;
		}
	}

IL_0148:
	{
		__this->set_match_length_28(2);
	}

IL_014f:
	{
		int32_t L_45 = __this->get_prev_length_34();
		if ((((int32_t)L_45) < ((int32_t)3)))
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_46 = __this->get_match_length_28();
		int32_t L_47 = __this->get_prev_length_34();
		if ((((int32_t)L_46) > ((int32_t)L_47)))
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_48 = __this->get_strstart_31();
		int32_t L_49 = __this->get_lookahead_33();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49)), (int32_t)3));
		int32_t L_50 = __this->get_strstart_31();
		int32_t L_51 = __this->get_prev_match_29();
		int32_t L_52 = __this->get_prev_length_34();
		bool L_53;
		L_53 = Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1)), (int32_t)L_51)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)3)), /*hidden argument*/NULL);
		V_1 = L_53;
		int32_t L_54 = __this->get_lookahead_33();
		int32_t L_55 = __this->get_prev_length_34();
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)))));
		int32_t L_56 = __this->get_prev_length_34();
		__this->set_prev_length_34(((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)2)));
	}

IL_01bd:
	{
		int32_t L_57 = __this->get_strstart_31();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		int32_t L_58 = V_3;
		__this->set_strstart_31(L_58);
		int32_t L_59 = V_3;
		int32_t L_60 = V_2;
		if ((((int32_t)L_59) > ((int32_t)L_60)))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_61 = __this->get_ins_h_22();
		int32_t L_62 = __this->get_hash_shift_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = __this->get_window_18();
		int32_t L_64 = __this->get_strstart_31();
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = __this->get_hash_mask_25();
		__this->set_ins_h_22(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_61<<(int32_t)((int32_t)((int32_t)L_62&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_66&(int32_t)((int32_t)255)))))&(int32_t)L_67)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_68 = __this->get_head_21();
		int32_t L_69 = __this->get_ins_h_22();
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int16_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_0 = ((int32_t)((int32_t)L_71&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_72 = __this->get_prev_20();
		int32_t L_73 = __this->get_strstart_31();
		int32_t L_74 = __this->get_w_mask_17();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_75 = __this->get_head_21();
		int32_t L_76 = __this->get_ins_h_22();
		NullCheck(L_75);
		int32_t L_77 = L_76;
		int16_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_73&(int32_t)L_74))), (int16_t)L_78);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_79 = __this->get_head_21();
		int32_t L_80 = __this->get_ins_h_22();
		int32_t L_81 = __this->get_strstart_31();
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (int16_t)((int16_t)((int16_t)L_81)));
	}

IL_024d:
	{
		int32_t L_82 = __this->get_prev_length_34();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
		int32_t L_83 = V_3;
		__this->set_prev_length_34(L_83);
		int32_t L_84 = V_3;
		if (L_84)
		{
			goto IL_01bd;
		}
	}
	{
		__this->set_match_available_30(0);
		__this->set_match_length_28(2);
		int32_t L_85 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1)));
		bool L_86 = V_1;
		if (!L_86)
		{
			goto IL_0002;
		}
	}
	{
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)0, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_87 = __this->get_strm_5();
		NullCheck(L_87);
		int32_t L_88 = L_87->get_avail_out_7();
		if (L_88)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_029e:
	{
		int32_t L_89 = __this->get_match_available_30();
		if (!L_89)
		{
			goto IL_02fb;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = __this->get_window_18();
		int32_t L_91 = __this->get_strstart_31();
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1));
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		bool L_94;
		L_94 = Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F(__this, 0, ((int32_t)((int32_t)L_93&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_94;
		bool L_95 = V_1;
		if (!L_95)
		{
			goto IL_02cd;
		}
	}
	{
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_02cd:
	{
		int32_t L_96 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		int32_t L_97 = __this->get_lookahead_33();
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_98 = __this->get_strm_5();
		NullCheck(L_98);
		int32_t L_99 = L_98->get_avail_out_7();
		if (L_99)
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}

IL_02fb:
	{
		__this->set_match_available_30(1);
		int32_t L_100 = __this->get_strstart_31();
		__this->set_strstart_31(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1)));
		int32_t L_101 = __this->get_lookahead_33();
		__this->set_lookahead_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1)));
		goto IL_0002;
	}

IL_0323:
	{
		int32_t L_102 = __this->get_match_available_30();
		if (!L_102)
		{
			goto IL_034f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = __this->get_window_18();
		int32_t L_104 = __this->get_strstart_31();
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1));
		uint8_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		bool L_107;
		L_107 = Deflate__tr_tally_m0F183B60DF0E3B309CB50B6E761EA3CA1156C86F(__this, 0, ((int32_t)((int32_t)L_106&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_107;
		__this->set_match_available_30(0);
	}

IL_034f:
	{
		int32_t L_108 = ___flush0;
		Deflate_flush_block_only_m401754C9C23970A962EE8E161904C52F0C29E978(__this, (bool)((((int32_t)L_108) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_109 = __this->get_strm_5();
		NullCheck(L_109);
		int32_t L_110 = L_109->get_avail_out_7();
		if (L_110)
		{
			goto IL_036e;
		}
	}
	{
		int32_t L_111 = ___flush0;
		if ((!(((uint32_t)L_111) == ((uint32_t)4))))
		{
			goto IL_036c;
		}
	}
	{
		return 2;
	}

IL_036c:
	{
		return 0;
	}

IL_036e:
	{
		int32_t L_112 = ___flush0;
		if ((((int32_t)L_112) == ((int32_t)4)))
		{
			goto IL_0374;
		}
	}
	{
		return 1;
	}

IL_0374:
	{
		return 3;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_longest_match_m90026559FAA5A9C4DB9B9E10FA9D7540E7750FF1 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, int32_t ___cur_match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_max_chain_length_35();
		V_0 = L_0;
		int32_t L_1 = __this->get_strstart_31();
		V_1 = L_1;
		int32_t L_2 = __this->get_prev_length_34();
		V_4 = L_2;
		int32_t L_3 = __this->get_strstart_31();
		int32_t L_4 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		if ((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))))
		{
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0040;
	}

IL_002d:
	{
		int32_t L_6 = __this->get_strstart_31();
		int32_t L_7 = __this->get_w_size_15();
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_MIN_LOOKAHEAD_2();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8))));
	}

IL_0040:
	{
		V_5 = G_B3_0;
		int32_t L_9 = __this->get_nice_match_40();
		V_6 = L_9;
		int32_t L_10 = __this->get_w_mask_17();
		V_7 = L_10;
		int32_t L_11 = __this->get_strstart_31();
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)258)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_window_18();
		int32_t L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), (int32_t)1));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_9 = L_16;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_window_18();
		int32_t L_18 = V_1;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_10 = L_21;
		int32_t L_22 = __this->get_prev_length_34();
		int32_t L_23 = __this->get_good_match_39();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24>>(int32_t)2));
	}

IL_008e:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = __this->get_lookahead_33();
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_27 = __this->get_lookahead_33();
		V_6 = L_27;
	}

IL_00a0:
	{
		int32_t L_28 = ___cur_match0;
		V_2 = L_28;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_window_18();
		int32_t L_30 = V_2;
		int32_t L_31 = V_4;
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		uint8_t L_34 = V_10;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_window_18();
		int32_t L_36 = V_2;
		int32_t L_37 = V_4;
		NullCheck(L_35);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)1));
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint8_t L_40 = V_9;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_window_18();
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_window_18();
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_48))))
		{
			goto IL_0225;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = __this->get_window_18();
		int32_t L_50 = V_2;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		V_2 = L_51;
		NullCheck(L_49);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = __this->get_window_18();
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_53) == ((uint32_t)L_57))))
		{
			goto IL_0225;
		}
	}
	{
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)2));
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0100:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = __this->get_window_18();
		int32_t L_61 = V_1;
		int32_t L_62 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		V_1 = L_62;
		NullCheck(L_60);
		int32_t L_63 = L_62;
		uint8_t L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = __this->get_window_18();
		int32_t L_66 = V_2;
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		V_2 = L_67;
		NullCheck(L_65);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((!(((uint32_t)L_64) == ((uint32_t)L_69))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = __this->get_window_18();
		int32_t L_71 = V_1;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		V_1 = L_72;
		NullCheck(L_70);
		int32_t L_73 = L_72;
		uint8_t L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = __this->get_window_18();
		int32_t L_76 = V_2;
		int32_t L_77 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		V_2 = L_77;
		NullCheck(L_75);
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		if ((!(((uint32_t)L_74) == ((uint32_t)L_79))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = __this->get_window_18();
		int32_t L_81 = V_1;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		V_1 = L_82;
		NullCheck(L_80);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = __this->get_window_18();
		int32_t L_86 = V_2;
		int32_t L_87 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		V_2 = L_87;
		NullCheck(L_85);
		int32_t L_88 = L_87;
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if ((!(((uint32_t)L_84) == ((uint32_t)L_89))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = __this->get_window_18();
		int32_t L_91 = V_1;
		int32_t L_92 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		V_1 = L_92;
		NullCheck(L_90);
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95 = __this->get_window_18();
		int32_t L_96 = V_2;
		int32_t L_97 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		V_2 = L_97;
		NullCheck(L_95);
		int32_t L_98 = L_97;
		uint8_t L_99 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		if ((!(((uint32_t)L_94) == ((uint32_t)L_99))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = __this->get_window_18();
		int32_t L_101 = V_1;
		int32_t L_102 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		V_1 = L_102;
		NullCheck(L_100);
		int32_t L_103 = L_102;
		uint8_t L_104 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_105 = __this->get_window_18();
		int32_t L_106 = V_2;
		int32_t L_107 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		V_2 = L_107;
		NullCheck(L_105);
		int32_t L_108 = L_107;
		uint8_t L_109 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		if ((!(((uint32_t)L_104) == ((uint32_t)L_109))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_110 = __this->get_window_18();
		int32_t L_111 = V_1;
		int32_t L_112 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
		V_1 = L_112;
		NullCheck(L_110);
		int32_t L_113 = L_112;
		uint8_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_115 = __this->get_window_18();
		int32_t L_116 = V_2;
		int32_t L_117 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		V_2 = L_117;
		NullCheck(L_115);
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		if ((!(((uint32_t)L_114) == ((uint32_t)L_119))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_120 = __this->get_window_18();
		int32_t L_121 = V_1;
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		V_1 = L_122;
		NullCheck(L_120);
		int32_t L_123 = L_122;
		uint8_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_125 = __this->get_window_18();
		int32_t L_126 = V_2;
		int32_t L_127 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		V_2 = L_127;
		NullCheck(L_125);
		int32_t L_128 = L_127;
		uint8_t L_129 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		if ((!(((uint32_t)L_124) == ((uint32_t)L_129))))
		{
			goto IL_01e1;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = __this->get_window_18();
		int32_t L_131 = V_1;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		V_1 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		uint8_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = __this->get_window_18();
		int32_t L_136 = V_2;
		int32_t L_137 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
		V_2 = L_137;
		NullCheck(L_135);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		if ((!(((uint32_t)L_134) == ((uint32_t)L_139))))
		{
			goto IL_01e1;
		}
	}
	{
		int32_t L_140 = V_1;
		int32_t L_141 = V_8;
		if ((((int32_t)L_140) < ((int32_t)L_141)))
		{
			goto IL_0100;
		}
	}

IL_01e1:
	{
		int32_t L_142 = V_8;
		int32_t L_143 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)258), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)L_143))));
		int32_t L_144 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_144, (int32_t)((int32_t)258)));
		int32_t L_145 = V_3;
		int32_t L_146 = V_4;
		if ((((int32_t)L_145) <= ((int32_t)L_146)))
		{
			goto IL_0225;
		}
	}
	{
		int32_t L_147 = ___cur_match0;
		__this->set_match_start_32(L_147);
		int32_t L_148 = V_3;
		V_4 = L_148;
		int32_t L_149 = V_3;
		int32_t L_150 = V_6;
		if ((((int32_t)L_149) >= ((int32_t)L_150)))
		{
			goto IL_0247;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_151 = __this->get_window_18();
		int32_t L_152 = V_1;
		int32_t L_153 = V_4;
		NullCheck(L_151);
		int32_t L_154 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)L_153)), (int32_t)1));
		uint8_t L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_9 = L_155;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_156 = __this->get_window_18();
		int32_t L_157 = V_1;
		int32_t L_158 = V_4;
		NullCheck(L_156);
		int32_t L_159 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_158));
		uint8_t L_160 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		V_10 = L_160;
	}

IL_0225:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_161 = __this->get_prev_20();
		int32_t L_162 = ___cur_match0;
		int32_t L_163 = V_7;
		NullCheck(L_161);
		int32_t L_164 = ((int32_t)((int32_t)L_162&(int32_t)L_163));
		int16_t L_165 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = ((int32_t)((int32_t)L_165&(int32_t)((int32_t)65535)));
		___cur_match0 = L_166;
		int32_t L_167 = V_5;
		if ((((int32_t)L_166) <= ((int32_t)L_167)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_168 = V_0;
		int32_t L_169 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_168, (int32_t)1));
		V_0 = L_169;
		if (L_169)
		{
			goto IL_00a0;
		}
	}

IL_0247:
	{
		int32_t L_170 = V_4;
		int32_t L_171 = __this->get_lookahead_33();
		if ((((int32_t)L_170) > ((int32_t)L_171)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_172 = V_4;
		return L_172;
	}

IL_0254:
	{
		int32_t L_173 = __this->get_lookahead_33();
		return L_173;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateInit(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_mDD25807DB36282975349F585D3AA8F9FB16FB9FF (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method)
{
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___strm0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		int32_t L_3;
		L_3 = Deflate_deflateInit2_m17CFB15BB80D1BA75F8522A971CD9EC060030800(__this, L_0, L_1, 8, L_2, 8, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateInit2(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit2_m17CFB15BB80D1BA75F8522A971CD9EC060030800 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___level1, int32_t ___method2, int32_t ___windowBits3, int32_t ___memLevel4, int32_t ___strategy5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___strm0;
		NullCheck(L_0);
		L_0->set_msg_9((String_t*)NULL);
		int32_t L_1 = ___level1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		___level1 = 6;
	}

IL_0010:
	{
		int32_t L_2 = ___windowBits3;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = ___windowBits3;
		___windowBits3 = ((-L_3));
	}

IL_001c:
	{
		int32_t L_4 = ___memLevel4;
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_5 = ___memLevel4;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = ___method2;
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7 = ___windowBits3;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_8 = ___windowBits3;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = ___level1;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_10 = ___level1;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_11 = ___strategy5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = ___strategy5;
		if ((((int32_t)L_12) <= ((int32_t)2)))
		{
			goto IL_004d;
		}
	}

IL_004a:
	{
		return ((int32_t)-2);
	}

IL_004d:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_13 = ___strm0;
		NullCheck(L_13);
		L_13->set_dstate_10(__this);
		int32_t L_14 = V_0;
		__this->set_noheader_11(L_14);
		int32_t L_15 = ___windowBits3;
		__this->set_w_bits_16(L_15);
		int32_t L_16 = __this->get_w_bits_16();
		__this->set_w_size_15(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31))))));
		int32_t L_17 = __this->get_w_size_15();
		__this->set_w_mask_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		int32_t L_18 = ___memLevel4;
		__this->set_hash_bits_24(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)7)));
		int32_t L_19 = __this->get_hash_bits_24();
		__this->set_hash_size_23(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)31))))));
		int32_t L_20 = __this->get_hash_size_23();
		__this->set_hash_mask_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = __this->get_hash_bits_24();
		__this->set_hash_shift_26(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)3)), (int32_t)1))/(int32_t)3)));
		int32_t L_22 = __this->get_w_size_15();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2)));
		__this->set_window_18(L_23);
		int32_t L_24 = __this->get_w_size_15();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_25 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->set_prev_20(L_25);
		int32_t L_26 = __this->get_hash_size_23();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_26);
		__this->set_head_21(L_27);
		int32_t L_28 = ___memLevel4;
		__this->set_lit_bufsize_53(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)6))&(int32_t)((int32_t)31))))));
		int32_t L_29 = __this->get_lit_bufsize_53();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)4)));
		__this->set_pending_buf_7(L_30);
		int32_t L_31 = __this->get_lit_bufsize_53();
		__this->set_pending_buf_size_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)4)));
		int32_t L_32 = __this->get_lit_bufsize_53();
		__this->set_d_buf_55(L_32);
		int32_t L_33 = __this->get_lit_bufsize_53();
		__this->set_l_buf_52(((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_33)));
		int32_t L_34 = ___level1;
		__this->set_level_37(L_34);
		int32_t L_35 = ___strategy5;
		__this->set_strategy_38(L_35);
		int32_t L_36 = ___method2;
		__this->set_method_13((uint8_t)((int32_t)((uint8_t)L_36)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_37 = ___strm0;
		int32_t L_38;
		L_38 = Deflate_deflateReset_m88C03182F3793A7F56D5F6031DB9C4345FD23E47(__this, L_37, /*hidden argument*/NULL);
		return L_38;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateReset(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateReset_m88C03182F3793A7F56D5F6031DB9C4345FD23E47 (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B4_0 = NULL;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * G_B5_1 = NULL;
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___strm0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_1 = ___strm0;
		int64_t L_2 = ((int64_t)((int64_t)0));
		V_0 = L_2;
		NullCheck(L_1);
		L_1->set_total_out_8(L_2);
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->set_total_in_4(L_3);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_4 = ___strm0;
		NullCheck(L_4);
		L_4->set_msg_9((String_t*)NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_5 = ___strm0;
		NullCheck(L_5);
		L_5->set_data_type_12(2);
		__this->set_pending_10(0);
		__this->set_pending_out_9(0);
		int32_t L_6 = __this->get_noheader_11();
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_noheader_11(0);
	}

IL_003d:
	{
		int32_t L_7 = __this->get_noheader_11();
		G_B3_0 = __this;
		if (L_7)
		{
			G_B4_0 = __this;
			goto IL_004a;
		}
	}
	{
		G_B5_0 = ((int32_t)42);
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_004a:
	{
		G_B5_0 = ((int32_t)113);
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_status_6(G_B5_0);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_8 = ___strm0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_9 = ___strm0;
		NullCheck(L_9);
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_10 = L_9->get__adler_14();
		NullCheck(L_10);
		int64_t L_11;
		L_11 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_10, ((int64_t)((int64_t)0)), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_adler_13(L_11);
		__this->set_last_flush_14(0);
		Deflate_tr_init_m42D8B2C77CC96FBE34A20385791ED418AFFF0E16(__this, /*hidden argument*/NULL);
		Deflate_lm_init_m5014B2FCA7223AEB6545219C3D65877D82A9167A(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateEnd_m40591DA2B91FE54846F5195D59E0FEF613ABEF4E (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_6();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = __this->get_status_6();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)113))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = __this->get_status_6();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)666))))
		{
			goto IL_0024;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_0024:
	{
		__this->set_pending_buf_7((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_head_21((Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL);
		__this->set_prev_20((Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL);
		__this->set_window_18((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		int32_t L_3 = __this->get_status_6();
		if ((((int32_t)L_3) == ((int32_t)((int32_t)113))))
		{
			goto IL_004c;
		}
	}
	{
		return 0;
	}

IL_004c:
	{
		return ((int32_t)-3);
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Deflate::deflate(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_mB8E67AB0475DCDFB67D43E9E88B79224BE92D72B (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___strm0, int32_t ___flush1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___flush1;
		if ((((int32_t)L_0) > ((int32_t)4)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___flush1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}

IL_0008:
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = ___strm0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_next_out_5();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_4 = ___strm0;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4->get_next_in_1();
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_6 = ___strm0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_avail_in_3();
		if (L_7)
		{
			goto IL_0034;
		}
	}

IL_0023:
	{
		int32_t L_8 = __this->get_status_6();
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = ___flush1;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_0044;
		}
	}

IL_0034:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_10 = ___strm0;
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_z_errmsg_1();
		NullCheck(L_11);
		int32_t L_12 = 4;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		L_10->set_msg_9(L_13);
		return ((int32_t)-2);
	}

IL_0044:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_14 = ___strm0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_avail_out_7();
		if (L_15)
		{
			goto IL_005c;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_16 = ___strm0;
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_z_errmsg_1();
		NullCheck(L_17);
		int32_t L_18 = 7;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		L_16->set_msg_9(L_19);
		return ((int32_t)-5);
	}

IL_005c:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_20 = ___strm0;
		__this->set_strm_5(L_20);
		int32_t L_21 = __this->get_last_flush_14();
		V_0 = L_21;
		int32_t L_22 = ___flush1;
		__this->set_last_flush_14(L_22);
		int32_t L_23 = __this->get_status_6();
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_24 = __this->get_w_bits_16();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)8, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)8))<<(int32_t)4))))<<(int32_t)8));
		int32_t L_25 = __this->get_level_37();
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1))&(int32_t)((int32_t)255)))>>(int32_t)1));
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) <= ((int32_t)3)))
		{
			goto IL_00a4;
		}
	}
	{
		V_2 = 3;
	}

IL_00a4:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		V_1 = ((int32_t)((int32_t)L_27|(int32_t)((int32_t)((int32_t)L_28<<(int32_t)6))));
		int32_t L_29 = __this->get_strstart_31();
		if (!L_29)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30|(int32_t)((int32_t)32)));
	}

IL_00b7:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)31), (int32_t)((int32_t)((int32_t)L_32%(int32_t)((int32_t)31)))))));
		__this->set_status_6(((int32_t)113));
		int32_t L_33 = V_1;
		Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744(__this, L_33, /*hidden argument*/NULL);
		int32_t L_34 = __this->get_strstart_31();
		if (!L_34)
		{
			goto IL_0100;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_35 = ___strm0;
		NullCheck(L_35);
		int64_t L_36 = L_35->get_adler_13();
		int64_t L_37;
		L_37 = SupportClass_URShift_mC0BC764584FD96B1999D4858790BE5A794E6A45F(L_36, ((int32_t)16), /*hidden argument*/NULL);
		Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744(__this, ((int32_t)((int32_t)L_37)), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_38 = ___strm0;
		NullCheck(L_38);
		int64_t L_39 = L_38->get_adler_13();
		Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744(__this, ((int32_t)((int32_t)((int64_t)((int64_t)L_39&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))), /*hidden argument*/NULL);
	}

IL_0100:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_40 = ___strm0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_41 = ___strm0;
		NullCheck(L_41);
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_42 = L_41->get__adler_14();
		NullCheck(L_42);
		int64_t L_43;
		L_43 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_42, ((int64_t)((int64_t)0)), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_40);
		L_40->set_adler_13(L_43);
	}

IL_0116:
	{
		int32_t L_44 = __this->get_pending_10();
		if (!L_44)
		{
			goto IL_0135;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_45 = ___strm0;
		NullCheck(L_45);
		ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3(L_45, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_46 = ___strm0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_avail_out_7();
		if (L_47)
		{
			goto IL_0155;
		}
	}
	{
		__this->set_last_flush_14((-1));
		return 0;
	}

IL_0135:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_48 = ___strm0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_avail_in_3();
		if (L_49)
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_50 = ___flush1;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) > ((int32_t)L_51)))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_52 = ___flush1;
		if ((((int32_t)L_52) == ((int32_t)4)))
		{
			goto IL_0155;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_53 = ___strm0;
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_z_errmsg_1();
		NullCheck(L_54);
		int32_t L_55 = 7;
		String_t* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_53);
		L_53->set_msg_9(L_56);
		return ((int32_t)-5);
	}

IL_0155:
	{
		int32_t L_57 = __this->get_status_6();
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_017a;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_58 = ___strm0;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_avail_in_3();
		if (!L_59)
		{
			goto IL_017a;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_60 = ___strm0;
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_z_errmsg_1();
		NullCheck(L_61);
		int32_t L_62 = 7;
		String_t* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_60);
		L_60->set_msg_9(L_63);
		return ((int32_t)-5);
	}

IL_017a:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_64 = ___strm0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_avail_in_3();
		if (L_65)
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_66 = __this->get_lookahead_33();
		if (L_66)
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_67 = ___flush1;
		if (!L_67)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_68 = __this->get_status_6();
		if ((((int32_t)L_68) == ((int32_t)((int32_t)666))))
		{
			goto IL_0264;
		}
	}

IL_01a0:
	{
		V_3 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_69 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		int32_t L_70 = __this->get_level_37();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		int32_t L_73 = L_72->get_func_4();
		V_4 = L_73;
		int32_t L_74 = V_4;
		switch (L_74)
		{
			case 0:
			{
				goto IL_01ca;
			}
			case 1:
			{
				goto IL_01d4;
			}
			case 2:
			{
				goto IL_01de;
			}
		}
	}
	{
		goto IL_01e6;
	}

IL_01ca:
	{
		int32_t L_75 = ___flush1;
		int32_t L_76;
		L_76 = Deflate_deflate_stored_mEEF074EF6FDE2634B496206476E24126496CB4C4(__this, L_75, /*hidden argument*/NULL);
		V_3 = L_76;
		goto IL_01e6;
	}

IL_01d4:
	{
		int32_t L_77 = ___flush1;
		int32_t L_78;
		L_78 = Deflate_deflate_fast_mB749779D018A8168E6217340B07FBD32C3525FE2(__this, L_77, /*hidden argument*/NULL);
		V_3 = L_78;
		goto IL_01e6;
	}

IL_01de:
	{
		int32_t L_79 = ___flush1;
		int32_t L_80;
		L_80 = Deflate_deflate_slow_m0195CBDDE0EA237CBE3C6615F64888B377137988(__this, L_79, /*hidden argument*/NULL);
		V_3 = L_80;
	}

IL_01e6:
	{
		int32_t L_81 = V_3;
		if ((((int32_t)L_81) == ((int32_t)2)))
		{
			goto IL_01ee;
		}
	}
	{
		int32_t L_82 = V_3;
		if ((!(((uint32_t)L_82) == ((uint32_t)3))))
		{
			goto IL_01f9;
		}
	}

IL_01ee:
	{
		__this->set_status_6(((int32_t)666));
	}

IL_01f9:
	{
		int32_t L_83 = V_3;
		if (!L_83)
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_84 = V_3;
		if ((!(((uint32_t)L_84) == ((uint32_t)2))))
		{
			goto IL_0211;
		}
	}

IL_0200:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_85 = ___strm0;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_avail_out_7();
		if (L_86)
		{
			goto IL_020f;
		}
	}
	{
		__this->set_last_flush_14((-1));
	}

IL_020f:
	{
		return 0;
	}

IL_0211:
	{
		int32_t L_87 = V_3;
		if ((!(((uint32_t)L_87) == ((uint32_t)1))))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_88 = ___flush1;
		if ((!(((uint32_t)L_88) == ((uint32_t)1))))
		{
			goto IL_0221;
		}
	}
	{
		Deflate__tr_align_m9F72D51AE59E8DF7AA93C052AF4627E67238AFEF(__this, /*hidden argument*/NULL);
		goto IL_024d;
	}

IL_0221:
	{
		Deflate__tr_stored_block_m2BA7FE64D58F7E6D7B4E88041B99D376892650B2(__this, 0, 0, (bool)0, /*hidden argument*/NULL);
		int32_t L_89 = ___flush1;
		if ((!(((uint32_t)L_89) == ((uint32_t)3))))
		{
			goto IL_024d;
		}
	}
	{
		V_5 = 0;
		goto IL_0243;
	}

IL_0233:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_90 = __this->get_head_21();
		int32_t L_91 = V_5;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int16_t)0);
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
	}

IL_0243:
	{
		int32_t L_93 = V_5;
		int32_t L_94 = __this->get_hash_size_23();
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_0233;
		}
	}

IL_024d:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_95 = ___strm0;
		NullCheck(L_95);
		ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3(L_95, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_96 = ___strm0;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_avail_out_7();
		if (L_97)
		{
			goto IL_0264;
		}
	}
	{
		__this->set_last_flush_14((-1));
		return 0;
	}

IL_0264:
	{
		int32_t L_98 = ___flush1;
		if ((((int32_t)L_98) == ((int32_t)4)))
		{
			goto IL_026a;
		}
	}
	{
		return 0;
	}

IL_026a:
	{
		int32_t L_99 = __this->get_noheader_11();
		if (!L_99)
		{
			goto IL_0274;
		}
	}
	{
		return 1;
	}

IL_0274:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_100 = ___strm0;
		NullCheck(L_100);
		int64_t L_101 = L_100->get_adler_13();
		int64_t L_102;
		L_102 = SupportClass_URShift_mC0BC764584FD96B1999D4858790BE5A794E6A45F(L_101, ((int32_t)16), /*hidden argument*/NULL);
		Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744(__this, ((int32_t)((int32_t)L_102)), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_103 = ___strm0;
		NullCheck(L_103);
		int64_t L_104 = L_103->get_adler_13();
		Deflate_putShortMSB_mD6ACE99087DEA3262E595F6959808774750FB744(__this, ((int32_t)((int32_t)((int64_t)((int64_t)L_104&(int64_t)((int64_t)((int64_t)((int32_t)65535))))))), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_105 = ___strm0;
		NullCheck(L_105);
		ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3(L_105, /*hidden argument*/NULL);
		__this->set_noheader_11((-1));
		int32_t L_106 = __this->get_pending_10();
		if (L_106)
		{
			goto IL_02b3;
		}
	}
	{
		return 1;
	}

IL_02b3:
	{
		return 0;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Deflate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__cctor_m1AB64BD0AC5884ED234962E717B5B19930A32400 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->set_z_errmsg_1(L_10);
		((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->set_MIN_LOOKAHEAD_2(((int32_t)262));
		((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->set_L_CODES_3(((int32_t)286));
		int32_t L_11 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_L_CODES_3();
		((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->set_HEAP_SIZE_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_11)), (int32_t)1)));
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_12 = (ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC*)(ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC*)SZArrayNew(ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->set_config_table_0(L_12);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_13 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_14 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_14, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_14);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_15 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_16 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_16, 4, 4, 8, 4, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_16);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_17 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_18 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_18, 4, 5, ((int32_t)16), 8, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_18);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_19 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_20 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_20, 4, 6, ((int32_t)32), ((int32_t)32), 1, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_20);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_21 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_22 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_22, 4, 4, ((int32_t)16), ((int32_t)16), 2, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_22);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_23 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_24 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_24, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_24);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_25 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_26 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_26, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_26);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_27 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_28 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_28, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_28);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_29 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_30 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_30, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_30);
		ConfigU5BU5D_t1C0B10B477F3C2A6B33AAC41FE90CEF69B8324CC* L_31 = ((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_StaticFields*)il2cpp_codegen_static_fields_for(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var))->get_config_table_0();
		Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * L_32 = (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)il2cpp_codegen_object_new(Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB_il2cpp_TypeInfo_var);
		Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01(L_32, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB *)L_32);
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
// System.Void ComponentAce.Compression.Libs.zlib.InfBlocks::reset(ComponentAce.Compression.Libs.zlib.ZStream,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_reset_m4A71EBEF90F55E3D15CD90E74C8A7CF0C8B1E69F (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___c1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___c1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ___c1;
		int64_t L_2 = __this->get_check_19();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)L_2);
	}

IL_000c:
	{
		int32_t L_3 = __this->get_mode_2();
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_4 = __this->get_mode_2();
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_0025;
		}
	}

IL_001e:
	{
		__this->set_blens_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
	}

IL_0025:
	{
		int32_t L_5 = __this->get_mode_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)6))))
		{
			goto IL_003a;
		}
	}
	{
		InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * L_6 = __this->get_codes_9();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_7 = ___z0;
		NullCheck(L_6);
		InfCodes_free_m7D9FDE1833010B5396F62607225847809C4B699B(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003a:
	{
		__this->set_mode_2(0);
		__this->set_bitk_11(0);
		__this->set_bitb_12(0);
		int32_t L_8 = 0;
		V_0 = L_8;
		__this->set_write_17(L_8);
		int32_t L_9 = V_0;
		__this->set_read_16(L_9);
		RuntimeObject * L_10 = __this->get_checkfn_18();
		if (!L_10)
		{
			goto IL_0086;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_11 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_12 = ___z0;
		NullCheck(L_12);
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_13 = L_12->get__adler_14();
		NullCheck(L_13);
		int64_t L_14;
		L_14 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_13, ((int64_t)((int64_t)0)), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		int64_t L_15 = L_14;
		V_1 = L_15;
		__this->set_check_19(L_15);
		int64_t L_16 = V_1;
		NullCheck(L_11);
		L_11->set_adler_13(L_16);
	}

IL_0086:
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::proc(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_proc_mE4503151D64C41E77412D9705D3EF30C937C1AE6 (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_11 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_16 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_17 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_18 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_19 = NULL;
	int32_t G_B3_0 = 0;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B28_0 = NULL;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B25_0 = NULL;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B27_0 = NULL;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B26_0 = NULL;
	int32_t G_B29_0 = 0;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B29_1 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B48_0 = 0;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B58_0 = NULL;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B57_0 = NULL;
	int32_t G_B59_0 = 0;
	InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * G_B59_1 = NULL;
	int32_t G_B96_0 = 0;
	int32_t G_B99_0 = 0;
	int32_t G_B112_0 = 0;
	int32_t G_B125_0 = 0;
	int32_t G_B131_0 = 0;
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_in_index_2();
		V_3 = L_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = ___z0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_avail_in_3();
		V_4 = L_3;
		int32_t L_4 = __this->get_bitb_12();
		V_1 = L_4;
		int32_t L_5 = __this->get_bitk_11();
		V_2 = L_5;
		int32_t L_6 = __this->get_write_17();
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->get_read_16();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_9 = __this->get_end_15();
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		goto IL_0045;
	}

IL_003a:
	{
		int32_t L_11 = __this->get_read_16();
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
	}

IL_0045:
	{
		V_6 = G_B3_0;
	}

IL_0047:
	{
		int32_t L_13 = __this->get_mode_2();
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_00f4;
			}
			case 1:
			{
				goto IL_02a5;
			}
			case 2:
			{
				goto IL_0350;
			}
			case 3:
			{
				goto IL_057d;
			}
			case 4:
			{
				goto IL_06e2;
			}
			case 5:
			{
				goto IL_07bb;
			}
			case 6:
			{
				goto IL_0b66;
			}
			case 7:
			{
				goto IL_0c2f;
			}
			case 8:
			{
				goto IL_0cc4;
			}
			case 9:
			{
				goto IL_0d0b;
			}
		}
	}
	{
		goto IL_0d53;
	}

IL_0083:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		___r1 = 0;
		goto IL_00d0;
	}

IL_008c:
	{
		int32_t L_16 = V_1;
		__this->set_bitb_12(L_16);
		int32_t L_17 = V_2;
		__this->set_bitk_11(L_17);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_18 = ___z0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->set_avail_in_3(L_19);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_20 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_total_in_4();
		int32_t L_23 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_24 = ___z0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_next_in_index_2();
		NullCheck(L_21);
		L_21->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_26 = ___z0;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->set_next_in_index_2(L_27);
		int32_t L_28 = V_5;
		__this->set_write_17(L_28);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_29 = ___z0;
		int32_t L_30 = ___r1;
		int32_t L_31;
		L_31 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00d0:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		int32_t L_33 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_34 = ___z0;
		NullCheck(L_34);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = L_34->get_next_in_1();
		int32_t L_36 = V_3;
		int32_t L_37 = L_36;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_2;
		V_1 = ((int32_t)((int32_t)L_33|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_40&(int32_t)((int32_t)31)))))));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)8));
	}

IL_00f4:
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) < ((int32_t)3)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_43 = V_1;
		V_0 = ((int32_t)((int32_t)L_43&(int32_t)7));
		int32_t L_44 = V_0;
		__this->set_last_10(((int32_t)((int32_t)L_44&(int32_t)1)));
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_45, 1, /*hidden argument*/NULL);
		V_8 = L_46;
		int32_t L_47 = V_8;
		switch (L_47)
		{
			case 0:
			{
				goto IL_012a;
			}
			case 1:
			{
				goto IL_0152;
			}
			case 2:
			{
				goto IL_01b5;
			}
			case 3:
			{
				goto IL_01cd;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_012a:
	{
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_48, 3, /*hidden argument*/NULL);
		V_1 = L_49;
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)3));
		int32_t L_51 = V_2;
		V_0 = ((int32_t)((int32_t)L_51&(int32_t)7));
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		int32_t L_54;
		L_54 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_52, L_53, /*hidden argument*/NULL);
		V_1 = L_54;
		int32_t L_55 = V_2;
		int32_t L_56 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)L_56));
		__this->set_mode_2(1);
		goto IL_0047;
	}

IL_0152:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_57;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_58;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_59 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_59;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_60 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_60;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = V_9;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_10;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_63 = V_11;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_64 = V_12;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_65 = ___z0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		int32_t L_66;
		L_66 = InfTree_inflate_trees_fixed_mB1977DB03EB28D7F884870C0DD13EC6D1D9EFF96(L_61, L_62, L_63, L_64, L_65, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = V_9;
		NullCheck(L_67);
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = V_10;
		NullCheck(L_70);
		int32_t L_71 = 0;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_73 = V_11;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_76 = V_12;
		NullCheck(L_76);
		int32_t L_77 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_79 = ___z0;
		InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * L_80 = (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A *)il2cpp_codegen_object_new(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		InfCodes__ctor_m6289B183FD15FF5A6EDA02136649282C1DF6FDFE(L_80, L_69, L_72, L_75, L_78, L_79, /*hidden argument*/NULL);
		__this->set_codes_9(L_80);
		int32_t L_81 = V_1;
		int32_t L_82;
		L_82 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_81, 3, /*hidden argument*/NULL);
		V_1 = L_82;
		int32_t L_83 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)3));
		__this->set_mode_2(6);
		goto IL_0047;
	}

IL_01b5:
	{
		int32_t L_84 = V_1;
		int32_t L_85;
		L_85 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_84, 3, /*hidden argument*/NULL);
		V_1 = L_85;
		int32_t L_86 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)3));
		__this->set_mode_2(3);
		goto IL_0047;
	}

IL_01cd:
	{
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_87, 3, /*hidden argument*/NULL);
		V_1 = L_88;
		int32_t L_89 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)3));
		__this->set_mode_2(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_90 = ___z0;
		NullCheck(L_90);
		L_90->set_msg_9(_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		___r1 = ((int32_t)-3);
		int32_t L_91 = V_1;
		__this->set_bitb_12(L_91);
		int32_t L_92 = V_2;
		__this->set_bitk_11(L_92);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_93 = ___z0;
		int32_t L_94 = V_4;
		NullCheck(L_93);
		L_93->set_avail_in_3(L_94);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_95 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_96 = L_95;
		NullCheck(L_96);
		int64_t L_97 = L_96->get_total_in_4();
		int32_t L_98 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_99 = ___z0;
		NullCheck(L_99);
		int32_t L_100 = L_99->get_next_in_index_2();
		NullCheck(L_96);
		L_96->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_97, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)L_100)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_101 = ___z0;
		int32_t L_102 = V_3;
		NullCheck(L_101);
		L_101->set_next_in_index_2(L_102);
		int32_t L_103 = V_5;
		__this->set_write_17(L_103);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_104 = ___z0;
		int32_t L_105 = ___r1;
		int32_t L_106;
		L_106 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_104, L_105, /*hidden argument*/NULL);
		return L_106;
	}

IL_0234:
	{
		int32_t L_107 = V_4;
		if (!L_107)
		{
			goto IL_023d;
		}
	}
	{
		___r1 = 0;
		goto IL_0281;
	}

IL_023d:
	{
		int32_t L_108 = V_1;
		__this->set_bitb_12(L_108);
		int32_t L_109 = V_2;
		__this->set_bitk_11(L_109);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_110 = ___z0;
		int32_t L_111 = V_4;
		NullCheck(L_110);
		L_110->set_avail_in_3(L_111);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_112 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_113 = L_112;
		NullCheck(L_113);
		int64_t L_114 = L_113->get_total_in_4();
		int32_t L_115 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_116 = ___z0;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_next_in_index_2();
		NullCheck(L_113);
		L_113->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)L_117)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_118 = ___z0;
		int32_t L_119 = V_3;
		NullCheck(L_118);
		L_118->set_next_in_index_2(L_119);
		int32_t L_120 = V_5;
		__this->set_write_17(L_120);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_121 = ___z0;
		int32_t L_122 = ___r1;
		int32_t L_123;
		L_123 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_121, L_122, /*hidden argument*/NULL);
		return L_123;
	}

IL_0281:
	{
		int32_t L_124 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)1));
		int32_t L_125 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_126 = ___z0;
		NullCheck(L_126);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_127 = L_126->get_next_in_1();
		int32_t L_128 = V_3;
		int32_t L_129 = L_128;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
		NullCheck(L_127);
		int32_t L_130 = L_129;
		uint8_t L_131 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		int32_t L_132 = V_2;
		V_1 = ((int32_t)((int32_t)L_125|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_131&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_132&(int32_t)((int32_t)31)))))));
		int32_t L_133 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)8));
	}

IL_02a5:
	{
		int32_t L_134 = V_2;
		if ((((int32_t)L_134) < ((int32_t)((int32_t)32))))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_135 = V_1;
		int32_t L_136;
		L_136 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(((~L_135)), ((int32_t)16), /*hidden argument*/NULL);
		int32_t L_137 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_136&(int32_t)((int32_t)65535)))) == ((int32_t)((int32_t)((int32_t)L_137&(int32_t)((int32_t)65535))))))
		{
			goto IL_031d;
		}
	}
	{
		__this->set_mode_2(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_138 = ___z0;
		NullCheck(L_138);
		L_138->set_msg_9(_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		___r1 = ((int32_t)-3);
		int32_t L_139 = V_1;
		__this->set_bitb_12(L_139);
		int32_t L_140 = V_2;
		__this->set_bitk_11(L_140);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_141 = ___z0;
		int32_t L_142 = V_4;
		NullCheck(L_141);
		L_141->set_avail_in_3(L_142);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_143 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_144 = L_143;
		NullCheck(L_144);
		int64_t L_145 = L_144->get_total_in_4();
		int32_t L_146 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_147 = ___z0;
		NullCheck(L_147);
		int32_t L_148 = L_147->get_next_in_index_2();
		NullCheck(L_144);
		L_144->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)L_148)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_149 = ___z0;
		int32_t L_150 = V_3;
		NullCheck(L_149);
		L_149->set_next_in_index_2(L_150);
		int32_t L_151 = V_5;
		__this->set_write_17(L_151);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_152 = ___z0;
		int32_t L_153 = ___r1;
		int32_t L_154;
		L_154 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_152, L_153, /*hidden argument*/NULL);
		return L_154;
	}

IL_031d:
	{
		int32_t L_155 = V_1;
		__this->set_left_3(((int32_t)((int32_t)L_155&(int32_t)((int32_t)65535))));
		int32_t L_156 = 0;
		V_2 = L_156;
		V_1 = L_156;
		int32_t L_157 = __this->get_left_3();
		G_B25_0 = __this;
		if (L_157)
		{
			G_B28_0 = __this;
			goto IL_0345;
		}
	}
	{
		int32_t L_158 = __this->get_last_10();
		G_B26_0 = G_B25_0;
		if (L_158)
		{
			G_B27_0 = G_B25_0;
			goto IL_0342;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B26_0;
		goto IL_0346;
	}

IL_0342:
	{
		G_B29_0 = 7;
		G_B29_1 = G_B27_0;
		goto IL_0346;
	}

IL_0345:
	{
		G_B29_0 = 2;
		G_B29_1 = G_B28_0;
	}

IL_0346:
	{
		NullCheck(G_B29_1);
		G_B29_1->set_mode_2(G_B29_0);
		goto IL_0047;
	}

IL_0350:
	{
		int32_t L_159 = V_4;
		if (L_159)
		{
			goto IL_0398;
		}
	}
	{
		int32_t L_160 = V_1;
		__this->set_bitb_12(L_160);
		int32_t L_161 = V_2;
		__this->set_bitk_11(L_161);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_162 = ___z0;
		int32_t L_163 = V_4;
		NullCheck(L_162);
		L_162->set_avail_in_3(L_163);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_164 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_165 = L_164;
		NullCheck(L_165);
		int64_t L_166 = L_165->get_total_in_4();
		int32_t L_167 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_168 = ___z0;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_next_in_index_2();
		NullCheck(L_165);
		L_165->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_166, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_169)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_170 = ___z0;
		int32_t L_171 = V_3;
		NullCheck(L_170);
		L_170->set_next_in_index_2(L_171);
		int32_t L_172 = V_5;
		__this->set_write_17(L_172);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_173 = ___z0;
		int32_t L_174 = ___r1;
		int32_t L_175;
		L_175 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_173, L_174, /*hidden argument*/NULL);
		return L_175;
	}

IL_0398:
	{
		int32_t L_176 = V_6;
		if (L_176)
		{
			goto IL_0498;
		}
	}
	{
		int32_t L_177 = V_5;
		int32_t L_178 = __this->get_end_15();
		if ((!(((uint32_t)L_177) == ((uint32_t)L_178))))
		{
			goto IL_03d6;
		}
	}
	{
		int32_t L_179 = __this->get_read_16();
		if (!L_179)
		{
			goto IL_03d6;
		}
	}
	{
		V_5 = 0;
		int32_t L_180 = V_5;
		int32_t L_181 = __this->get_read_16();
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_03c9;
		}
	}
	{
		int32_t L_182 = __this->get_end_15();
		int32_t L_183 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_182, (int32_t)L_183));
		goto IL_03d4;
	}

IL_03c9:
	{
		int32_t L_184 = __this->get_read_16();
		int32_t L_185 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_184, (int32_t)L_185)), (int32_t)1));
	}

IL_03d4:
	{
		V_6 = G_B38_0;
	}

IL_03d6:
	{
		int32_t L_186 = V_6;
		if (L_186)
		{
			goto IL_0498;
		}
	}
	{
		int32_t L_187 = V_5;
		__this->set_write_17(L_187);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_188 = ___z0;
		int32_t L_189 = ___r1;
		int32_t L_190;
		L_190 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_188, L_189, /*hidden argument*/NULL);
		___r1 = L_190;
		int32_t L_191 = __this->get_write_17();
		V_5 = L_191;
		int32_t L_192 = V_5;
		int32_t L_193 = __this->get_read_16();
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_040c;
		}
	}
	{
		int32_t L_194 = __this->get_end_15();
		int32_t L_195 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_194, (int32_t)L_195));
		goto IL_0417;
	}

IL_040c:
	{
		int32_t L_196 = __this->get_read_16();
		int32_t L_197 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_196, (int32_t)L_197)), (int32_t)1));
	}

IL_0417:
	{
		V_6 = G_B43_0;
		int32_t L_198 = V_5;
		int32_t L_199 = __this->get_end_15();
		if ((!(((uint32_t)L_198) == ((uint32_t)L_199))))
		{
			goto IL_0450;
		}
	}
	{
		int32_t L_200 = __this->get_read_16();
		if (!L_200)
		{
			goto IL_0450;
		}
	}
	{
		V_5 = 0;
		int32_t L_201 = V_5;
		int32_t L_202 = __this->get_read_16();
		if ((((int32_t)L_201) < ((int32_t)L_202)))
		{
			goto IL_0443;
		}
	}
	{
		int32_t L_203 = __this->get_end_15();
		int32_t L_204 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_203, (int32_t)L_204));
		goto IL_044e;
	}

IL_0443:
	{
		int32_t L_205 = __this->get_read_16();
		int32_t L_206 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_205, (int32_t)L_206)), (int32_t)1));
	}

IL_044e:
	{
		V_6 = G_B48_0;
	}

IL_0450:
	{
		int32_t L_207 = V_6;
		if (L_207)
		{
			goto IL_0498;
		}
	}
	{
		int32_t L_208 = V_1;
		__this->set_bitb_12(L_208);
		int32_t L_209 = V_2;
		__this->set_bitk_11(L_209);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_210 = ___z0;
		int32_t L_211 = V_4;
		NullCheck(L_210);
		L_210->set_avail_in_3(L_211);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_212 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_213 = L_212;
		NullCheck(L_213);
		int64_t L_214 = L_213->get_total_in_4();
		int32_t L_215 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_216 = ___z0;
		NullCheck(L_216);
		int32_t L_217 = L_216->get_next_in_index_2();
		NullCheck(L_213);
		L_213->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_214, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_215, (int32_t)L_217)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_218 = ___z0;
		int32_t L_219 = V_3;
		NullCheck(L_218);
		L_218->set_next_in_index_2(L_219);
		int32_t L_220 = V_5;
		__this->set_write_17(L_220);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_221 = ___z0;
		int32_t L_222 = ___r1;
		int32_t L_223;
		L_223 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_221, L_222, /*hidden argument*/NULL);
		return L_223;
	}

IL_0498:
	{
		___r1 = 0;
		int32_t L_224 = __this->get_left_3();
		V_0 = L_224;
		int32_t L_225 = V_0;
		int32_t L_226 = V_4;
		if ((((int32_t)L_225) <= ((int32_t)L_226)))
		{
			goto IL_04aa;
		}
	}
	{
		int32_t L_227 = V_4;
		V_0 = L_227;
	}

IL_04aa:
	{
		int32_t L_228 = V_0;
		int32_t L_229 = V_6;
		if ((((int32_t)L_228) <= ((int32_t)L_229)))
		{
			goto IL_04b2;
		}
	}
	{
		int32_t L_230 = V_6;
		V_0 = L_230;
	}

IL_04b2:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_231 = ___z0;
		NullCheck(L_231);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_232 = L_231->get_next_in_1();
		int32_t L_233 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_234 = __this->get_window_14();
		int32_t L_235 = V_5;
		int32_t L_236 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_232, L_233, (RuntimeArray *)(RuntimeArray *)L_234, L_235, L_236, /*hidden argument*/NULL);
		int32_t L_237 = V_3;
		int32_t L_238 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238));
		int32_t L_239 = V_4;
		int32_t L_240 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_239, (int32_t)L_240));
		int32_t L_241 = V_5;
		int32_t L_242 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)L_242));
		int32_t L_243 = V_6;
		int32_t L_244 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)L_244));
		int32_t L_245 = __this->get_left_3();
		int32_t L_246 = V_0;
		int32_t L_247 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_245, (int32_t)L_246));
		V_8 = L_247;
		__this->set_left_3(L_247);
		int32_t L_248 = V_8;
		if (L_248)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_249 = __this->get_last_10();
		G_B57_0 = __this;
		if (L_249)
		{
			G_B58_0 = __this;
			goto IL_0501;
		}
	}
	{
		G_B59_0 = 0;
		G_B59_1 = G_B57_0;
		goto IL_0502;
	}

IL_0501:
	{
		G_B59_0 = 7;
		G_B59_1 = G_B58_0;
	}

IL_0502:
	{
		NullCheck(G_B59_1);
		G_B59_1->set_mode_2(G_B59_0);
		goto IL_0047;
	}

IL_050c:
	{
		int32_t L_250 = V_4;
		if (!L_250)
		{
			goto IL_0515;
		}
	}
	{
		___r1 = 0;
		goto IL_0559;
	}

IL_0515:
	{
		int32_t L_251 = V_1;
		__this->set_bitb_12(L_251);
		int32_t L_252 = V_2;
		__this->set_bitk_11(L_252);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_253 = ___z0;
		int32_t L_254 = V_4;
		NullCheck(L_253);
		L_253->set_avail_in_3(L_254);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_255 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_256 = L_255;
		NullCheck(L_256);
		int64_t L_257 = L_256->get_total_in_4();
		int32_t L_258 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_259 = ___z0;
		NullCheck(L_259);
		int32_t L_260 = L_259->get_next_in_index_2();
		NullCheck(L_256);
		L_256->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_257, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_258, (int32_t)L_260)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_261 = ___z0;
		int32_t L_262 = V_3;
		NullCheck(L_261);
		L_261->set_next_in_index_2(L_262);
		int32_t L_263 = V_5;
		__this->set_write_17(L_263);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_264 = ___z0;
		int32_t L_265 = ___r1;
		int32_t L_266;
		L_266 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_264, L_265, /*hidden argument*/NULL);
		return L_266;
	}

IL_0559:
	{
		int32_t L_267 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_267, (int32_t)1));
		int32_t L_268 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_269 = ___z0;
		NullCheck(L_269);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_270 = L_269->get_next_in_1();
		int32_t L_271 = V_3;
		int32_t L_272 = L_271;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)1));
		NullCheck(L_270);
		int32_t L_273 = L_272;
		uint8_t L_274 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = V_2;
		V_1 = ((int32_t)((int32_t)L_268|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_274&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_275&(int32_t)((int32_t)31)))))));
		int32_t L_276 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_276, (int32_t)8));
	}

IL_057d:
	{
		int32_t L_277 = V_2;
		if ((((int32_t)L_277) < ((int32_t)((int32_t)14))))
		{
			goto IL_050c;
		}
	}
	{
		int32_t L_278 = V_1;
		int32_t L_279 = ((int32_t)((int32_t)L_278&(int32_t)((int32_t)16383)));
		V_0 = L_279;
		__this->set_table_4(L_279);
		int32_t L_280 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_280&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_05a3;
		}
	}
	{
		int32_t L_281 = V_0;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_281>>(int32_t)5))&(int32_t)((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_05fe;
		}
	}

IL_05a3:
	{
		__this->set_mode_2(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_282 = ___z0;
		NullCheck(L_282);
		L_282->set_msg_9(_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		___r1 = ((int32_t)-3);
		int32_t L_283 = V_1;
		__this->set_bitb_12(L_283);
		int32_t L_284 = V_2;
		__this->set_bitk_11(L_284);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_285 = ___z0;
		int32_t L_286 = V_4;
		NullCheck(L_285);
		L_285->set_avail_in_3(L_286);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_287 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_288 = L_287;
		NullCheck(L_288);
		int64_t L_289 = L_288->get_total_in_4();
		int32_t L_290 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_291 = ___z0;
		NullCheck(L_291);
		int32_t L_292 = L_291->get_next_in_index_2();
		NullCheck(L_288);
		L_288->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_289, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)L_292)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_293 = ___z0;
		int32_t L_294 = V_3;
		NullCheck(L_293);
		L_293->set_next_in_index_2(L_294);
		int32_t L_295 = V_5;
		__this->set_write_17(L_295);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_296 = ___z0;
		int32_t L_297 = ___r1;
		int32_t L_298;
		L_298 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_296, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_05fe:
	{
		int32_t L_299 = V_0;
		int32_t L_300 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_299&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_300>>(int32_t)5))&(int32_t)((int32_t)31)))));
		int32_t L_301 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_302 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_301);
		__this->set_blens_6(L_302);
		int32_t L_303 = V_1;
		int32_t L_304;
		L_304 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_303, ((int32_t)14), /*hidden argument*/NULL);
		V_1 = L_304;
		int32_t L_305 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_305, (int32_t)((int32_t)14)));
		__this->set_index_5(0);
		__this->set_mode_2(4);
		goto IL_06e2;
	}

IL_063d:
	{
		int32_t L_306 = V_4;
		if (!L_306)
		{
			goto IL_0646;
		}
	}
	{
		___r1 = 0;
		goto IL_068a;
	}

IL_0646:
	{
		int32_t L_307 = V_1;
		__this->set_bitb_12(L_307);
		int32_t L_308 = V_2;
		__this->set_bitk_11(L_308);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_309 = ___z0;
		int32_t L_310 = V_4;
		NullCheck(L_309);
		L_309->set_avail_in_3(L_310);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_311 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_312 = L_311;
		NullCheck(L_312);
		int64_t L_313 = L_312->get_total_in_4();
		int32_t L_314 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_315 = ___z0;
		NullCheck(L_315);
		int32_t L_316 = L_315->get_next_in_index_2();
		NullCheck(L_312);
		L_312->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_313, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_314, (int32_t)L_316)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_317 = ___z0;
		int32_t L_318 = V_3;
		NullCheck(L_317);
		L_317->set_next_in_index_2(L_318);
		int32_t L_319 = V_5;
		__this->set_write_17(L_319);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_320 = ___z0;
		int32_t L_321 = ___r1;
		int32_t L_322;
		L_322 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_320, L_321, /*hidden argument*/NULL);
		return L_322;
	}

IL_068a:
	{
		int32_t L_323 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_323, (int32_t)1));
		int32_t L_324 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_325 = ___z0;
		NullCheck(L_325);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_326 = L_325->get_next_in_1();
		int32_t L_327 = V_3;
		int32_t L_328 = L_327;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_328, (int32_t)1));
		NullCheck(L_326);
		int32_t L_329 = L_328;
		uint8_t L_330 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = V_2;
		V_1 = ((int32_t)((int32_t)L_324|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_330&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)31)))))));
		int32_t L_332 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_332, (int32_t)8));
	}

IL_06ae:
	{
		int32_t L_333 = V_2;
		if ((((int32_t)L_333) < ((int32_t)3)))
		{
			goto IL_063d;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_334 = __this->get_blens_6();
		IL2CPP_RUNTIME_CLASS_INIT(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_335 = ((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->get_border_1();
		int32_t L_336 = __this->get_index_5();
		V_8 = L_336;
		int32_t L_337 = V_8;
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_337, (int32_t)1)));
		int32_t L_338 = V_8;
		NullCheck(L_335);
		int32_t L_339 = L_338;
		int32_t L_340 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		int32_t L_341 = V_1;
		NullCheck(L_334);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (int32_t)((int32_t)((int32_t)L_341&(int32_t)7)));
		int32_t L_342 = V_1;
		int32_t L_343;
		L_343 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_342, 3, /*hidden argument*/NULL);
		V_1 = L_343;
		int32_t L_344 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_344, (int32_t)3));
	}

IL_06e2:
	{
		int32_t L_345 = __this->get_index_5();
		int32_t L_346 = __this->get_table_4();
		int32_t L_347;
		L_347 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_346, ((int32_t)10), /*hidden argument*/NULL);
		if ((((int32_t)L_345) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)L_347)))))
		{
			goto IL_06ae;
		}
	}
	{
		goto IL_071d;
	}

IL_06fb:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_348 = __this->get_blens_6();
		IL2CPP_RUNTIME_CLASS_INIT(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_349 = ((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->get_border_1();
		int32_t L_350 = __this->get_index_5();
		V_8 = L_350;
		int32_t L_351 = V_8;
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_351, (int32_t)1)));
		int32_t L_352 = V_8;
		NullCheck(L_349);
		int32_t L_353 = L_352;
		int32_t L_354 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(L_354), (int32_t)0);
	}

IL_071d:
	{
		int32_t L_355 = __this->get_index_5();
		if ((((int32_t)L_355) < ((int32_t)((int32_t)19))))
		{
			goto IL_06fb;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_356 = __this->get_bb_7();
		NullCheck(L_356);
		(L_356)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_357 = __this->get_blens_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_358 = __this->get_bb_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_359 = __this->get_tb_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_360 = __this->get_hufts_13();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_361 = ___z0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		int32_t L_362;
		L_362 = InfTree_inflate_trees_bits_mA613382505106C7A36B855888F39D8532BC68941(L_357, L_358, L_359, L_360, L_361, /*hidden argument*/NULL);
		V_0 = L_362;
		int32_t L_363 = V_0;
		if (!L_363)
		{
			goto IL_07ad;
		}
	}
	{
		int32_t L_364 = V_0;
		___r1 = L_364;
		int32_t L_365 = ___r1;
		if ((!(((uint32_t)L_365) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0769;
		}
	}
	{
		__this->set_blens_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_2(((int32_t)9));
	}

IL_0769:
	{
		int32_t L_366 = V_1;
		__this->set_bitb_12(L_366);
		int32_t L_367 = V_2;
		__this->set_bitk_11(L_367);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_368 = ___z0;
		int32_t L_369 = V_4;
		NullCheck(L_368);
		L_368->set_avail_in_3(L_369);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_370 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_371 = L_370;
		NullCheck(L_371);
		int64_t L_372 = L_371->get_total_in_4();
		int32_t L_373 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_374 = ___z0;
		NullCheck(L_374);
		int32_t L_375 = L_374->get_next_in_index_2();
		NullCheck(L_371);
		L_371->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_372, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_373, (int32_t)L_375)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_376 = ___z0;
		int32_t L_377 = V_3;
		NullCheck(L_376);
		L_376->set_next_in_index_2(L_377);
		int32_t L_378 = V_5;
		__this->set_write_17(L_378);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_379 = ___z0;
		int32_t L_380 = ___r1;
		int32_t L_381;
		L_381 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_379, L_380, /*hidden argument*/NULL);
		return L_381;
	}

IL_07ad:
	{
		__this->set_index_5(0);
		__this->set_mode_2(5);
	}

IL_07bb:
	{
		int32_t L_382 = __this->get_table_4();
		V_0 = L_382;
		int32_t L_383 = __this->get_index_5();
		int32_t L_384 = V_0;
		int32_t L_385 = V_0;
		if ((((int32_t)L_383) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_384&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_385>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_0a6a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_386 = __this->get_bb_7();
		NullCheck(L_386);
		int32_t L_387 = 0;
		int32_t L_388 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		V_0 = L_388;
		goto IL_085a;
	}

IL_07e9:
	{
		int32_t L_389 = V_4;
		if (!L_389)
		{
			goto IL_07f2;
		}
	}
	{
		___r1 = 0;
		goto IL_0836;
	}

IL_07f2:
	{
		int32_t L_390 = V_1;
		__this->set_bitb_12(L_390);
		int32_t L_391 = V_2;
		__this->set_bitk_11(L_391);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_392 = ___z0;
		int32_t L_393 = V_4;
		NullCheck(L_392);
		L_392->set_avail_in_3(L_393);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_394 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_395 = L_394;
		NullCheck(L_395);
		int64_t L_396 = L_395->get_total_in_4();
		int32_t L_397 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_398 = ___z0;
		NullCheck(L_398);
		int32_t L_399 = L_398->get_next_in_index_2();
		NullCheck(L_395);
		L_395->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_396, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_397, (int32_t)L_399)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_400 = ___z0;
		int32_t L_401 = V_3;
		NullCheck(L_400);
		L_400->set_next_in_index_2(L_401);
		int32_t L_402 = V_5;
		__this->set_write_17(L_402);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_403 = ___z0;
		int32_t L_404 = ___r1;
		int32_t L_405;
		L_405 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_403, L_404, /*hidden argument*/NULL);
		return L_405;
	}

IL_0836:
	{
		int32_t L_406 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_406, (int32_t)1));
		int32_t L_407 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_408 = ___z0;
		NullCheck(L_408);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_409 = L_408->get_next_in_1();
		int32_t L_410 = V_3;
		int32_t L_411 = L_410;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_411, (int32_t)1));
		NullCheck(L_409);
		int32_t L_412 = L_411;
		uint8_t L_413 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		int32_t L_414 = V_2;
		V_1 = ((int32_t)((int32_t)L_407|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_413&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_414&(int32_t)((int32_t)31)))))));
		int32_t L_415 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)8));
	}

IL_085a:
	{
		int32_t L_416 = V_2;
		int32_t L_417 = V_0;
		if ((((int32_t)L_416) < ((int32_t)L_417)))
		{
			goto IL_07e9;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_418 = __this->get_tb_8();
		NullCheck(L_418);
		int32_t L_419 = 0;
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_421 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_422 = __this->get_tb_8();
		NullCheck(L_422);
		int32_t L_423 = 0;
		int32_t L_424 = (L_422)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		int32_t L_425 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_426 = ((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_427 = V_0;
		NullCheck(L_426);
		int32_t L_428 = L_427;
		int32_t L_429 = (L_426)->GetAt(static_cast<il2cpp_array_size_t>(L_428));
		NullCheck(L_421);
		int32_t L_430 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_424, (int32_t)((int32_t)((int32_t)L_425&(int32_t)L_429)))), (int32_t)3)), (int32_t)1));
		int32_t L_431 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		V_0 = L_431;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_432 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_433 = __this->get_tb_8();
		NullCheck(L_433);
		int32_t L_434 = 0;
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		int32_t L_436 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_437 = ((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_438 = V_0;
		NullCheck(L_437);
		int32_t L_439 = L_438;
		int32_t L_440 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		NullCheck(L_432);
		int32_t L_441 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_435, (int32_t)((int32_t)((int32_t)L_436&(int32_t)L_440)))), (int32_t)3)), (int32_t)2));
		int32_t L_442 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		V_15 = L_442;
		int32_t L_443 = V_15;
		if ((((int32_t)L_443) >= ((int32_t)((int32_t)16))))
		{
			goto IL_08da;
		}
	}
	{
		int32_t L_444 = V_1;
		int32_t L_445 = V_0;
		int32_t L_446;
		L_446 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_444, L_445, /*hidden argument*/NULL);
		V_1 = L_446;
		int32_t L_447 = V_2;
		int32_t L_448 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_447, (int32_t)L_448));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_449 = __this->get_blens_6();
		int32_t L_450 = __this->get_index_5();
		V_8 = L_450;
		int32_t L_451 = V_8;
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_451, (int32_t)1)));
		int32_t L_452 = V_8;
		int32_t L_453 = V_15;
		NullCheck(L_449);
		(L_449)->SetAt(static_cast<il2cpp_array_size_t>(L_452), (int32_t)L_453);
		goto IL_07bb;
	}

IL_08da:
	{
		int32_t L_454 = V_15;
		if ((((int32_t)L_454) == ((int32_t)((int32_t)18))))
		{
			goto IL_08e7;
		}
	}
	{
		int32_t L_455 = V_15;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_455, (int32_t)((int32_t)14)));
		goto IL_08e8;
	}

IL_08e7:
	{
		G_B96_0 = 7;
	}

IL_08e8:
	{
		V_13 = G_B96_0;
		int32_t L_456 = V_15;
		if ((((int32_t)L_456) == ((int32_t)((int32_t)18))))
		{
			goto IL_08f3;
		}
	}
	{
		G_B99_0 = 3;
		goto IL_08f5;
	}

IL_08f3:
	{
		G_B99_0 = ((int32_t)11);
	}

IL_08f5:
	{
		V_14 = G_B99_0;
		goto IL_096a;
	}

IL_08f9:
	{
		int32_t L_457 = V_4;
		if (!L_457)
		{
			goto IL_0902;
		}
	}
	{
		___r1 = 0;
		goto IL_0946;
	}

IL_0902:
	{
		int32_t L_458 = V_1;
		__this->set_bitb_12(L_458);
		int32_t L_459 = V_2;
		__this->set_bitk_11(L_459);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_460 = ___z0;
		int32_t L_461 = V_4;
		NullCheck(L_460);
		L_460->set_avail_in_3(L_461);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_462 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_463 = L_462;
		NullCheck(L_463);
		int64_t L_464 = L_463->get_total_in_4();
		int32_t L_465 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_466 = ___z0;
		NullCheck(L_466);
		int32_t L_467 = L_466->get_next_in_index_2();
		NullCheck(L_463);
		L_463->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_465, (int32_t)L_467)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_468 = ___z0;
		int32_t L_469 = V_3;
		NullCheck(L_468);
		L_468->set_next_in_index_2(L_469);
		int32_t L_470 = V_5;
		__this->set_write_17(L_470);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_471 = ___z0;
		int32_t L_472 = ___r1;
		int32_t L_473;
		L_473 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_471, L_472, /*hidden argument*/NULL);
		return L_473;
	}

IL_0946:
	{
		int32_t L_474 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_474, (int32_t)1));
		int32_t L_475 = V_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_476 = ___z0;
		NullCheck(L_476);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_477 = L_476->get_next_in_1();
		int32_t L_478 = V_3;
		int32_t L_479 = L_478;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_479, (int32_t)1));
		NullCheck(L_477);
		int32_t L_480 = L_479;
		uint8_t L_481 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		int32_t L_482 = V_2;
		V_1 = ((int32_t)((int32_t)L_475|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_482&(int32_t)((int32_t)31)))))));
		int32_t L_483 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_483, (int32_t)8));
	}

IL_096a:
	{
		int32_t L_484 = V_2;
		int32_t L_485 = V_0;
		int32_t L_486 = V_13;
		if ((((int32_t)L_484) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_485, (int32_t)L_486)))))
		{
			goto IL_08f9;
		}
	}
	{
		int32_t L_487 = V_1;
		int32_t L_488 = V_0;
		int32_t L_489;
		L_489 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_487, L_488, /*hidden argument*/NULL);
		V_1 = L_489;
		int32_t L_490 = V_2;
		int32_t L_491 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_490, (int32_t)L_491));
		int32_t L_492 = V_14;
		int32_t L_493 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_494 = ((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_495 = V_13;
		NullCheck(L_494);
		int32_t L_496 = L_495;
		int32_t L_497 = (L_494)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_492, (int32_t)((int32_t)((int32_t)L_493&(int32_t)L_497))));
		int32_t L_498 = V_1;
		int32_t L_499 = V_13;
		int32_t L_500;
		L_500 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_498, L_499, /*hidden argument*/NULL);
		V_1 = L_500;
		int32_t L_501 = V_2;
		int32_t L_502 = V_13;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_501, (int32_t)L_502));
		int32_t L_503 = __this->get_index_5();
		V_13 = L_503;
		int32_t L_504 = __this->get_table_4();
		V_0 = L_504;
		int32_t L_505 = V_13;
		int32_t L_506 = V_14;
		int32_t L_507 = V_0;
		int32_t L_508 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_505, (int32_t)L_506))) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_507&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_508>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_09cc;
		}
	}
	{
		int32_t L_509 = V_15;
		if ((!(((uint32_t)L_509) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0a2e;
		}
	}
	{
		int32_t L_510 = V_13;
		if ((((int32_t)L_510) >= ((int32_t)1)))
		{
			goto IL_0a2e;
		}
	}

IL_09cc:
	{
		__this->set_blens_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_2(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_511 = ___z0;
		NullCheck(L_511);
		L_511->set_msg_9(_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		___r1 = ((int32_t)-3);
		int32_t L_512 = V_1;
		__this->set_bitb_12(L_512);
		int32_t L_513 = V_2;
		__this->set_bitk_11(L_513);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_514 = ___z0;
		int32_t L_515 = V_4;
		NullCheck(L_514);
		L_514->set_avail_in_3(L_515);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_516 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_517 = L_516;
		NullCheck(L_517);
		int64_t L_518 = L_517->get_total_in_4();
		int32_t L_519 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_520 = ___z0;
		NullCheck(L_520);
		int32_t L_521 = L_520->get_next_in_index_2();
		NullCheck(L_517);
		L_517->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_518, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_519, (int32_t)L_521)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_522 = ___z0;
		int32_t L_523 = V_3;
		NullCheck(L_522);
		L_522->set_next_in_index_2(L_523);
		int32_t L_524 = V_5;
		__this->set_write_17(L_524);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_525 = ___z0;
		int32_t L_526 = ___r1;
		int32_t L_527;
		L_527 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_525, L_526, /*hidden argument*/NULL);
		return L_527;
	}

IL_0a2e:
	{
		int32_t L_528 = V_15;
		if ((((int32_t)L_528) == ((int32_t)((int32_t)16))))
		{
			goto IL_0a37;
		}
	}
	{
		G_B112_0 = 0;
		goto IL_0a42;
	}

IL_0a37:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_529 = __this->get_blens_6();
		int32_t L_530 = V_13;
		NullCheck(L_529);
		int32_t L_531 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_530, (int32_t)1));
		int32_t L_532 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		G_B112_0 = L_532;
	}

IL_0a42:
	{
		V_15 = G_B112_0;
	}

IL_0a44:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_533 = __this->get_blens_6();
		int32_t L_534 = V_13;
		int32_t L_535 = L_534;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_535, (int32_t)1));
		int32_t L_536 = V_15;
		NullCheck(L_533);
		(L_533)->SetAt(static_cast<il2cpp_array_size_t>(L_535), (int32_t)L_536);
		int32_t L_537 = V_14;
		int32_t L_538 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_537, (int32_t)1));
		V_14 = L_538;
		if (L_538)
		{
			goto IL_0a44;
		}
	}
	{
		int32_t L_539 = V_13;
		__this->set_index_5(L_539);
		goto IL_07bb;
	}

IL_0a6a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_540 = __this->get_tb_8();
		NullCheck(L_540);
		(L_540)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_541 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_16 = L_541;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_542 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_17 = L_542;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_543 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_543;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_544 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_544;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_545 = V_16;
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_546 = V_17;
		NullCheck(L_546);
		(L_546)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		int32_t L_547 = __this->get_table_4();
		V_0 = L_547;
		int32_t L_548 = V_0;
		int32_t L_549 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_550 = __this->get_blens_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_551 = V_16;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_552 = V_17;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_553 = V_18;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_554 = V_19;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_555 = __this->get_hufts_13();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_556 = ___z0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		int32_t L_557;
		L_557 = InfTree_inflate_trees_dynamic_m122BA0C5068F2F9687E458B23CD73AB06D791F1B(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)257), (int32_t)((int32_t)((int32_t)L_548&(int32_t)((int32_t)31))))), ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_549>>(int32_t)5))&(int32_t)((int32_t)31))))), L_550, L_551, L_552, L_553, L_554, L_555, L_556, /*hidden argument*/NULL);
		V_0 = L_557;
		int32_t L_558 = V_0;
		if (!L_558)
		{
			goto IL_0b30;
		}
	}
	{
		int32_t L_559 = V_0;
		if ((!(((uint32_t)L_559) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0ae9;
		}
	}
	{
		__this->set_blens_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_2(((int32_t)9));
	}

IL_0ae9:
	{
		int32_t L_560 = V_0;
		___r1 = L_560;
		int32_t L_561 = V_1;
		__this->set_bitb_12(L_561);
		int32_t L_562 = V_2;
		__this->set_bitk_11(L_562);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_563 = ___z0;
		int32_t L_564 = V_4;
		NullCheck(L_563);
		L_563->set_avail_in_3(L_564);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_565 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_566 = L_565;
		NullCheck(L_566);
		int64_t L_567 = L_566->get_total_in_4();
		int32_t L_568 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_569 = ___z0;
		NullCheck(L_569);
		int32_t L_570 = L_569->get_next_in_index_2();
		NullCheck(L_566);
		L_566->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_567, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_568, (int32_t)L_570)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_571 = ___z0;
		int32_t L_572 = V_3;
		NullCheck(L_571);
		L_571->set_next_in_index_2(L_572);
		int32_t L_573 = V_5;
		__this->set_write_17(L_573);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_574 = ___z0;
		int32_t L_575 = ___r1;
		int32_t L_576;
		L_576 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_574, L_575, /*hidden argument*/NULL);
		return L_576;
	}

IL_0b30:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_577 = V_16;
		NullCheck(L_577);
		int32_t L_578 = 0;
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_580 = V_17;
		NullCheck(L_580);
		int32_t L_581 = 0;
		int32_t L_582 = (L_580)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_583 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_584 = V_18;
		NullCheck(L_584);
		int32_t L_585 = 0;
		int32_t L_586 = (L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_585));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_587 = __this->get_hufts_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_588 = V_19;
		NullCheck(L_588);
		int32_t L_589 = 0;
		int32_t L_590 = (L_588)->GetAt(static_cast<il2cpp_array_size_t>(L_589));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_591 = ___z0;
		InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * L_592 = (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A *)il2cpp_codegen_object_new(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		InfCodes__ctor_mCC8A236794C243573E24D459981EAF0BC1F396E9(L_592, L_579, L_582, L_583, L_586, L_587, L_590, L_591, /*hidden argument*/NULL);
		__this->set_codes_9(L_592);
		__this->set_blens_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_2(6);
	}

IL_0b66:
	{
		int32_t L_593 = V_1;
		__this->set_bitb_12(L_593);
		int32_t L_594 = V_2;
		__this->set_bitk_11(L_594);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_595 = ___z0;
		int32_t L_596 = V_4;
		NullCheck(L_595);
		L_595->set_avail_in_3(L_596);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_597 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_598 = L_597;
		NullCheck(L_598);
		int64_t L_599 = L_598->get_total_in_4();
		int32_t L_600 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_601 = ___z0;
		NullCheck(L_601);
		int32_t L_602 = L_601->get_next_in_index_2();
		NullCheck(L_598);
		L_598->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_599, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_600, (int32_t)L_602)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_603 = ___z0;
		int32_t L_604 = V_3;
		NullCheck(L_603);
		L_603->set_next_in_index_2(L_604);
		int32_t L_605 = V_5;
		__this->set_write_17(L_605);
		InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * L_606 = __this->get_codes_9();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_607 = ___z0;
		int32_t L_608 = ___r1;
		NullCheck(L_606);
		int32_t L_609;
		L_609 = InfCodes_proc_m6BDFD30B1E6E548F530697A4942F63656217F2A0(L_606, __this, L_607, L_608, /*hidden argument*/NULL);
		int32_t L_610 = L_609;
		___r1 = L_610;
		if ((((int32_t)L_610) == ((int32_t)1)))
		{
			goto IL_0bbe;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_611 = ___z0;
		int32_t L_612 = ___r1;
		int32_t L_613;
		L_613 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_611, L_612, /*hidden argument*/NULL);
		return L_613;
	}

IL_0bbe:
	{
		___r1 = 0;
		InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * L_614 = __this->get_codes_9();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_615 = ___z0;
		NullCheck(L_614);
		InfCodes_free_m7D9FDE1833010B5396F62607225847809C4B699B(L_614, L_615, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_616 = ___z0;
		NullCheck(L_616);
		int32_t L_617 = L_616->get_next_in_index_2();
		V_3 = L_617;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_618 = ___z0;
		NullCheck(L_618);
		int32_t L_619 = L_618->get_avail_in_3();
		V_4 = L_619;
		int32_t L_620 = __this->get_bitb_12();
		V_1 = L_620;
		int32_t L_621 = __this->get_bitk_11();
		V_2 = L_621;
		int32_t L_622 = __this->get_write_17();
		V_5 = L_622;
		int32_t L_623 = V_5;
		int32_t L_624 = __this->get_read_16();
		if ((((int32_t)L_623) < ((int32_t)L_624)))
		{
			goto IL_0c07;
		}
	}
	{
		int32_t L_625 = __this->get_end_15();
		int32_t L_626 = V_5;
		G_B125_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_625, (int32_t)L_626));
		goto IL_0c12;
	}

IL_0c07:
	{
		int32_t L_627 = __this->get_read_16();
		int32_t L_628 = V_5;
		G_B125_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_627, (int32_t)L_628)), (int32_t)1));
	}

IL_0c12:
	{
		V_6 = G_B125_0;
		int32_t L_629 = __this->get_last_10();
		if (L_629)
		{
			goto IL_0c28;
		}
	}
	{
		__this->set_mode_2(0);
		goto IL_0047;
	}

IL_0c28:
	{
		__this->set_mode_2(7);
	}

IL_0c2f:
	{
		int32_t L_630 = V_5;
		__this->set_write_17(L_630);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_631 = ___z0;
		int32_t L_632 = ___r1;
		int32_t L_633;
		L_633 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_631, L_632, /*hidden argument*/NULL);
		___r1 = L_633;
		int32_t L_634 = __this->get_write_17();
		V_5 = L_634;
		int32_t L_635 = V_5;
		int32_t L_636 = __this->get_read_16();
		if ((((int32_t)L_635) < ((int32_t)L_636)))
		{
			goto IL_0c5e;
		}
	}
	{
		int32_t L_637 = __this->get_end_15();
		int32_t L_638 = V_5;
		G_B131_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_637, (int32_t)L_638));
		goto IL_0c69;
	}

IL_0c5e:
	{
		int32_t L_639 = __this->get_read_16();
		int32_t L_640 = V_5;
		G_B131_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_639, (int32_t)L_640)), (int32_t)1));
	}

IL_0c69:
	{
		V_6 = G_B131_0;
		int32_t L_641 = __this->get_read_16();
		int32_t L_642 = __this->get_write_17();
		if ((((int32_t)L_641) == ((int32_t)L_642)))
		{
			goto IL_0cbd;
		}
	}
	{
		int32_t L_643 = V_1;
		__this->set_bitb_12(L_643);
		int32_t L_644 = V_2;
		__this->set_bitk_11(L_644);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_645 = ___z0;
		int32_t L_646 = V_4;
		NullCheck(L_645);
		L_645->set_avail_in_3(L_646);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_647 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_648 = L_647;
		NullCheck(L_648);
		int64_t L_649 = L_648->get_total_in_4();
		int32_t L_650 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_651 = ___z0;
		NullCheck(L_651);
		int32_t L_652 = L_651->get_next_in_index_2();
		NullCheck(L_648);
		L_648->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_649, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_650, (int32_t)L_652)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_653 = ___z0;
		int32_t L_654 = V_3;
		NullCheck(L_653);
		L_653->set_next_in_index_2(L_654);
		int32_t L_655 = V_5;
		__this->set_write_17(L_655);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_656 = ___z0;
		int32_t L_657 = ___r1;
		int32_t L_658;
		L_658 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_656, L_657, /*hidden argument*/NULL);
		return L_658;
	}

IL_0cbd:
	{
		__this->set_mode_2(8);
	}

IL_0cc4:
	{
		___r1 = 1;
		int32_t L_659 = V_1;
		__this->set_bitb_12(L_659);
		int32_t L_660 = V_2;
		__this->set_bitk_11(L_660);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_661 = ___z0;
		int32_t L_662 = V_4;
		NullCheck(L_661);
		L_661->set_avail_in_3(L_662);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_663 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_664 = L_663;
		NullCheck(L_664);
		int64_t L_665 = L_664->get_total_in_4();
		int32_t L_666 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_667 = ___z0;
		NullCheck(L_667);
		int32_t L_668 = L_667->get_next_in_index_2();
		NullCheck(L_664);
		L_664->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_665, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_666, (int32_t)L_668)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_669 = ___z0;
		int32_t L_670 = V_3;
		NullCheck(L_669);
		L_669->set_next_in_index_2(L_670);
		int32_t L_671 = V_5;
		__this->set_write_17(L_671);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_672 = ___z0;
		int32_t L_673 = ___r1;
		int32_t L_674;
		L_674 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_672, L_673, /*hidden argument*/NULL);
		return L_674;
	}

IL_0d0b:
	{
		___r1 = ((int32_t)-3);
		int32_t L_675 = V_1;
		__this->set_bitb_12(L_675);
		int32_t L_676 = V_2;
		__this->set_bitk_11(L_676);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_677 = ___z0;
		int32_t L_678 = V_4;
		NullCheck(L_677);
		L_677->set_avail_in_3(L_678);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_679 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_680 = L_679;
		NullCheck(L_680);
		int64_t L_681 = L_680->get_total_in_4();
		int32_t L_682 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_683 = ___z0;
		NullCheck(L_683);
		int32_t L_684 = L_683->get_next_in_index_2();
		NullCheck(L_680);
		L_680->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_681, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_682, (int32_t)L_684)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_685 = ___z0;
		int32_t L_686 = V_3;
		NullCheck(L_685);
		L_685->set_next_in_index_2(L_686);
		int32_t L_687 = V_5;
		__this->set_write_17(L_687);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_688 = ___z0;
		int32_t L_689 = ___r1;
		int32_t L_690;
		L_690 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_688, L_689, /*hidden argument*/NULL);
		return L_690;
	}

IL_0d53:
	{
		___r1 = ((int32_t)-2);
		int32_t L_691 = V_1;
		__this->set_bitb_12(L_691);
		int32_t L_692 = V_2;
		__this->set_bitk_11(L_692);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_693 = ___z0;
		int32_t L_694 = V_4;
		NullCheck(L_693);
		L_693->set_avail_in_3(L_694);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_695 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_696 = L_695;
		NullCheck(L_696);
		int64_t L_697 = L_696->get_total_in_4();
		int32_t L_698 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_699 = ___z0;
		NullCheck(L_699);
		int32_t L_700 = L_699->get_next_in_index_2();
		NullCheck(L_696);
		L_696->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_697, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_698, (int32_t)L_700)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_701 = ___z0;
		int32_t L_702 = V_3;
		NullCheck(L_701);
		L_701->set_next_in_index_2(L_702);
		int32_t L_703 = V_5;
		__this->set_write_17(L_703);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_704 = ___z0;
		int32_t L_705 = ___r1;
		int32_t L_706;
		L_706 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(__this, L_704, L_705, /*hidden argument*/NULL);
		return L_706;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfBlocks::free(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_free_m3C6B1713D9EA9ED1C94E9E06BC0113E675ADAEFD (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method)
{
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z0;
		InfBlocks_reset_m4A71EBEF90F55E3D15CD90E74C8A7CF0C8B1E69F(__this, L_0, (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)NULL, /*hidden argument*/NULL);
		__this->set_window_14((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_hufts_13((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfBlocks::inflate_flush(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1 (InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___r1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_out_index_6();
		V_1 = L_1;
		int32_t L_2 = __this->get_read_16();
		V_2 = L_2;
		int32_t L_3 = V_2;
		int32_t L_4 = __this->get_write_17();
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = __this->get_end_15();
		G_B3_0 = L_5;
		goto IL_0025;
	}

IL_001f:
	{
		int32_t L_6 = __this->get_write_17();
		G_B3_0 = L_6;
	}

IL_0025:
	{
		int32_t L_7 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B3_0, (int32_t)L_7));
		int32_t L_8 = V_0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_9 = ___z0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_avail_out_7();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0038;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_11 = ___z0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_avail_out_7();
		V_0 = L_12;
	}

IL_0038:
	{
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_14 = ___r1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0043;
		}
	}
	{
		___r1 = 0;
	}

IL_0043:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_15 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_avail_out_7();
		int32_t L_18 = V_0;
		NullCheck(L_16);
		L_16->set_avail_out_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_19 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_20 = L_19;
		NullCheck(L_20);
		int64_t L_21 = L_20->get_total_out_8();
		int32_t L_22 = V_0;
		NullCheck(L_20);
		L_20->set_total_out_8(((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)((int64_t)((int64_t)L_22)))));
		RuntimeObject * L_23 = __this->get_checkfn_18();
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_24 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_25 = ___z0;
		NullCheck(L_25);
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_26 = L_25->get__adler_14();
		int64_t L_27 = __this->get_check_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_window_14();
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		NullCheck(L_26);
		int64_t L_31;
		L_31 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		int64_t L_32 = L_31;
		V_3 = L_32;
		__this->set_check_19(L_32);
		int64_t L_33 = V_3;
		NullCheck(L_24);
		L_24->set_adler_13(L_33);
	}

IL_0090:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_window_14();
		int32_t L_35 = V_2;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_36 = ___z0;
		NullCheck(L_36);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = L_36->get_next_out_5();
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_37, L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41));
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43));
		int32_t L_44 = V_2;
		int32_t L_45 = __this->get_end_15();
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_015c;
		}
	}
	{
		V_2 = 0;
		int32_t L_46 = __this->get_write_17();
		int32_t L_47 = __this->get_end_15();
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_write_17(0);
	}

IL_00cf:
	{
		int32_t L_48 = __this->get_write_17();
		int32_t L_49 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49));
		int32_t L_50 = V_0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_51 = ___z0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_avail_out_7();
		if ((((int32_t)L_50) <= ((int32_t)L_52)))
		{
			goto IL_00e8;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_53 = ___z0;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_avail_out_7();
		V_0 = L_54;
	}

IL_00e8:
	{
		int32_t L_55 = V_0;
		if (!L_55)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_56 = ___r1;
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00f3;
		}
	}
	{
		___r1 = 0;
	}

IL_00f3:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_57 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_avail_out_7();
		int32_t L_60 = V_0;
		NullCheck(L_58);
		L_58->set_avail_out_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)L_60)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_61 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_62 = L_61;
		NullCheck(L_62);
		int64_t L_63 = L_62->get_total_out_8();
		int32_t L_64 = V_0;
		NullCheck(L_62);
		L_62->set_total_out_8(((int64_t)il2cpp_codegen_add((int64_t)L_63, (int64_t)((int64_t)((int64_t)L_64)))));
		RuntimeObject * L_65 = __this->get_checkfn_18();
		if (!L_65)
		{
			goto IL_0140;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_66 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_67 = ___z0;
		NullCheck(L_67);
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_68 = L_67->get__adler_14();
		int64_t L_69 = __this->get_check_19();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = __this->get_window_14();
		int32_t L_71 = V_2;
		int32_t L_72 = V_0;
		NullCheck(L_68);
		int64_t L_73;
		L_73 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_68, L_69, L_70, L_71, L_72, /*hidden argument*/NULL);
		int64_t L_74 = L_73;
		V_3 = L_74;
		__this->set_check_19(L_74);
		int64_t L_75 = V_3;
		NullCheck(L_66);
		L_66->set_adler_13(L_75);
	}

IL_0140:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = __this->get_window_14();
		int32_t L_77 = V_2;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_78 = ___z0;
		NullCheck(L_78);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = L_78->get_next_out_5();
		int32_t L_80 = V_1;
		int32_t L_81 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_76, L_77, (RuntimeArray *)(RuntimeArray *)L_79, L_80, L_81, /*hidden argument*/NULL);
		int32_t L_82 = V_1;
		int32_t L_83 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_83));
		int32_t L_84 = V_2;
		int32_t L_85 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85));
	}

IL_015c:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_86 = ___z0;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		L_86->set_next_out_index_6(L_87);
		int32_t L_88 = V_2;
		__this->set_read_16(L_88);
		int32_t L_89 = ___r1;
		return L_89;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks__cctor_m40DDDB43FEA9D04F654EC1ACD7F463F65DCBC364 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->set_inflate_mask_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_StaticFields*)il2cpp_codegen_static_fields_for(InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2_il2cpp_TypeInfo_var))->set_border_1(L_4);
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
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_mCC8A236794C243573E24D459981EAF0BC1F396E9 (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z6, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_mode_1(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_9((uint8_t)((int32_t)((uint8_t)L_0)));
		int32_t L_1 = ___bd1;
		__this->set_dbits_10((uint8_t)((int32_t)((uint8_t)L_1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tl2;
		__this->set_ltree_11(L_2);
		int32_t L_3 = ___tl_index3;
		__this->set_ltree_index_12(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___td4;
		__this->set_dtree_13(L_4);
		int32_t L_5 = ___td_index5;
		__this->set_dtree_index_14(L_5);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_m6289B183FD15FF5A6EDA02136649282C1DF6FDFE (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_mode_1(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_9((uint8_t)((int32_t)((uint8_t)L_0)));
		int32_t L_1 = ___bd1;
		__this->set_dbits_10((uint8_t)((int32_t)((uint8_t)L_1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tl2;
		__this->set_ltree_11(L_2);
		__this->set_ltree_index_12(0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___td3;
		__this->set_dtree_13(L_3);
		__this->set_dtree_index_14(0);
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::proc(ComponentAce.Compression.Libs.zlib.InfBlocks,ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_proc_m6BDFD30B1E6E548F530697A4942F63656217F2A0 (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * ___s0, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z1, int32_t ___r2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * G_B14_0 = NULL;
	InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z1;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_in_index_2();
		V_5 = L_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = ___z1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_avail_in_3();
		V_6 = L_3;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_12();
		V_3 = L_5;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_11();
		V_4 = L_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_write_17();
		V_7 = L_9;
		int32_t L_10 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_11 = ___s0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_read_16();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_13 = ___s0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_end_15();
		int32_t L_15 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		goto IL_004f;
	}

IL_0044:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_16 = ___s0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_read_16();
		int32_t L_18 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), (int32_t)1));
	}

IL_004f:
	{
		V_8 = G_B3_0;
	}

IL_0051:
	{
		int32_t L_19 = __this->get_mode_1();
		V_10 = L_19;
		int32_t L_20 = V_10;
		switch (L_20)
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_0199;
			}
			case 2:
			{
				goto IL_033d;
			}
			case 3:
			{
				goto IL_0412;
			}
			case 4:
			{
				goto IL_0584;
			}
			case 5:
			{
				goto IL_0635;
			}
			case 6:
			{
				goto IL_07ae;
			}
			case 7:
			{
				goto IL_08db;
			}
			case 8:
			{
				goto IL_098a;
			}
			case 9:
			{
				goto IL_09d4;
			}
		}
	}
	{
		goto IL_0a1f;
	}

IL_008d:
	{
		int32_t L_21 = V_8;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)258))))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_016e;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_23 = ___s0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		L_23->set_bitb_12(L_24);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_25 = ___s0;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		L_25->set_bitk_11(L_26);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_27 = ___z1;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		L_27->set_avail_in_3(L_28);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_29 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_30 = L_29;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_total_in_4();
		int32_t L_32 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_33 = ___z1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_next_in_index_2();
		NullCheck(L_30);
		L_30->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_35 = ___z1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		L_35->set_next_in_index_2(L_36);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_37 = ___s0;
		int32_t L_38 = V_7;
		NullCheck(L_37);
		L_37->set_write_17(L_38);
		uint8_t L_39 = __this->get_lbits_9();
		uint8_t L_40 = __this->get_dbits_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = __this->get_ltree_11();
		int32_t L_42 = __this->get_ltree_index_12();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_dtree_13();
		int32_t L_44 = __this->get_dtree_index_14();
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_45 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_46 = ___z1;
		int32_t L_47;
		L_47 = InfCodes_inflate_fast_m2B40F404300D1B16485C53B8B839D4F82161DD6C(__this, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		___r2 = L_47;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_48 = ___z1;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_next_in_index_2();
		V_5 = L_49;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_50 = ___z1;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_avail_in_3();
		V_6 = L_51;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_52 = ___s0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_bitb_12();
		V_3 = L_53;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_54 = ___s0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_bitk_11();
		V_4 = L_55;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_56 = ___s0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_write_17();
		V_7 = L_57;
		int32_t L_58 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_59 = ___s0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_read_16();
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_014a;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_61 = ___s0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_end_15();
		int32_t L_63 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63));
		goto IL_0155;
	}

IL_014a:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_64 = ___s0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_read_16();
		int32_t L_66 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66)), (int32_t)1));
	}

IL_0155:
	{
		V_8 = G_B11_0;
		int32_t L_67 = ___r2;
		if (!L_67)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_68 = ___r2;
		G_B13_0 = __this;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_0163;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B13_0;
		goto IL_0164;
	}

IL_0163:
	{
		G_B15_0 = 7;
		G_B15_1 = G_B14_0;
	}

IL_0164:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_mode_1(G_B15_0);
		goto IL_0051;
	}

IL_016e:
	{
		uint8_t L_69 = __this->get_lbits_9();
		__this->set_need_5(L_69);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = __this->get_ltree_11();
		__this->set_tree_3(L_70);
		int32_t L_71 = __this->get_ltree_index_12();
		__this->set_tree_index_4(L_71);
		__this->set_mode_1(1);
	}

IL_0199:
	{
		int32_t L_72 = __this->get_need_5();
		V_0 = L_72;
		goto IL_021b;
	}

IL_01a2:
	{
		int32_t L_73 = V_6;
		if (!L_73)
		{
			goto IL_01ab;
		}
	}
	{
		___r2 = 0;
		goto IL_01f2;
	}

IL_01ab:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_74 = ___s0;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		L_74->set_bitb_12(L_75);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_76 = ___s0;
		int32_t L_77 = V_4;
		NullCheck(L_76);
		L_76->set_bitk_11(L_77);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_78 = ___z1;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		L_78->set_avail_in_3(L_79);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_80 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_81 = L_80;
		NullCheck(L_81);
		int64_t L_82 = L_81->get_total_in_4();
		int32_t L_83 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_84 = ___z1;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_next_in_index_2();
		NullCheck(L_81);
		L_81->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_82, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_85)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_86 = ___z1;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		L_86->set_next_in_index_2(L_87);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_88 = ___s0;
		int32_t L_89 = V_7;
		NullCheck(L_88);
		L_88->set_write_17(L_89);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_90 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_91 = ___z1;
		int32_t L_92 = ___r2;
		NullCheck(L_90);
		int32_t L_93;
		L_93 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_90, L_91, L_92, /*hidden argument*/NULL);
		return L_93;
	}

IL_01f2:
	{
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1));
		int32_t L_95 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_96 = ___z1;
		NullCheck(L_96);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = L_96->get_next_in_1();
		int32_t L_98 = V_5;
		int32_t L_99 = L_98;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_4;
		V_3 = ((int32_t)((int32_t)L_95|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)31)))))));
		int32_t L_103 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)8));
	}

IL_021b:
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_106 = __this->get_tree_index_4();
		int32_t L_107 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_108 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_109 = V_0;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		int32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)((int32_t)((int32_t)L_107&(int32_t)L_111)))), (int32_t)3));
		int32_t L_112 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_113 = __this->get_tree_3();
		int32_t L_114 = V_1;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117;
		L_117 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_112, L_116, /*hidden argument*/NULL);
		V_3 = L_117;
		int32_t L_118 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = __this->get_tree_3();
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_122));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_123 = __this->get_tree_3();
		int32_t L_124 = V_1;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_027b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_128 = __this->get_tree_3();
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2));
		int32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		__this->set_lit_6(L_131);
		__this->set_mode_1(6);
		goto IL_0051;
	}

IL_027b:
	{
		int32_t L_132 = V_2;
		if (!((int32_t)((int32_t)L_132&(int32_t)((int32_t)16))))
		{
			goto IL_02a7;
		}
	}
	{
		int32_t L_133 = V_2;
		__this->set_get_Renamed_7(((int32_t)((int32_t)L_133&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_134 = __this->get_tree_3();
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)2));
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->set_len_2(L_137);
		__this->set_mode_1(2);
		goto IL_0051;
	}

IL_02a7:
	{
		int32_t L_138 = V_2;
		if (((int32_t)((int32_t)L_138&(int32_t)((int32_t)64))))
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_139 = V_2;
		__this->set_need_5(L_139);
		int32_t L_140 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_141 = __this->get_tree_3();
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)2));
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		__this->set_tree_index_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_140/(int32_t)3)), (int32_t)L_144)));
		goto IL_0051;
	}

IL_02cd:
	{
		int32_t L_145 = V_2;
		if (!((int32_t)((int32_t)L_145&(int32_t)((int32_t)32))))
		{
			goto IL_02df;
		}
	}
	{
		__this->set_mode_1(7);
		goto IL_0051;
	}

IL_02df:
	{
		__this->set_mode_1(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_146 = ___z1;
		NullCheck(L_146);
		L_146->set_msg_9(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		___r2 = ((int32_t)-3);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_147 = ___s0;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		L_147->set_bitb_12(L_148);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_149 = ___s0;
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->set_bitk_11(L_150);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_151 = ___z1;
		int32_t L_152 = V_6;
		NullCheck(L_151);
		L_151->set_avail_in_3(L_152);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_153 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_154 = L_153;
		NullCheck(L_154);
		int64_t L_155 = L_154->get_total_in_4();
		int32_t L_156 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_157 = ___z1;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_next_in_index_2();
		NullCheck(L_154);
		L_154->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_158)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_159 = ___z1;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		L_159->set_next_in_index_2(L_160);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_161 = ___s0;
		int32_t L_162 = V_7;
		NullCheck(L_161);
		L_161->set_write_17(L_162);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_163 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_164 = ___z1;
		int32_t L_165 = ___r2;
		NullCheck(L_163);
		int32_t L_166;
		L_166 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_163, L_164, L_165, /*hidden argument*/NULL);
		return L_166;
	}

IL_033d:
	{
		int32_t L_167 = __this->get_get_Renamed_7();
		V_0 = L_167;
		goto IL_03bf;
	}

IL_0346:
	{
		int32_t L_168 = V_6;
		if (!L_168)
		{
			goto IL_034f;
		}
	}
	{
		___r2 = 0;
		goto IL_0396;
	}

IL_034f:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_169 = ___s0;
		int32_t L_170 = V_3;
		NullCheck(L_169);
		L_169->set_bitb_12(L_170);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_171 = ___s0;
		int32_t L_172 = V_4;
		NullCheck(L_171);
		L_171->set_bitk_11(L_172);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_173 = ___z1;
		int32_t L_174 = V_6;
		NullCheck(L_173);
		L_173->set_avail_in_3(L_174);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_175 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_176 = L_175;
		NullCheck(L_176);
		int64_t L_177 = L_176->get_total_in_4();
		int32_t L_178 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_179 = ___z1;
		NullCheck(L_179);
		int32_t L_180 = L_179->get_next_in_index_2();
		NullCheck(L_176);
		L_176->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_177, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)L_180)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_181 = ___z1;
		int32_t L_182 = V_5;
		NullCheck(L_181);
		L_181->set_next_in_index_2(L_182);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_183 = ___s0;
		int32_t L_184 = V_7;
		NullCheck(L_183);
		L_183->set_write_17(L_184);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_185 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_186 = ___z1;
		int32_t L_187 = ___r2;
		NullCheck(L_185);
		int32_t L_188;
		L_188 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_185, L_186, L_187, /*hidden argument*/NULL);
		return L_188;
	}

IL_0396:
	{
		int32_t L_189 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)1));
		int32_t L_190 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_191 = ___z1;
		NullCheck(L_191);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_192 = L_191->get_next_in_1();
		int32_t L_193 = V_5;
		int32_t L_194 = L_193;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
		NullCheck(L_192);
		int32_t L_195 = L_194;
		uint8_t L_196 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		int32_t L_197 = V_4;
		V_3 = ((int32_t)((int32_t)L_190|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_197&(int32_t)((int32_t)31)))))));
		int32_t L_198 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)8));
	}

IL_03bf:
	{
		int32_t L_199 = V_4;
		int32_t L_200 = V_0;
		if ((((int32_t)L_199) < ((int32_t)L_200)))
		{
			goto IL_0346;
		}
	}
	{
		int32_t L_201 = __this->get_len_2();
		int32_t L_202 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_203 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_204 = V_0;
		NullCheck(L_203);
		int32_t L_205 = L_204;
		int32_t L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		__this->set_len_2(((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)((int32_t)((int32_t)L_202&(int32_t)L_206)))));
		int32_t L_207 = V_3;
		int32_t L_208 = V_0;
		V_3 = ((int32_t)((int32_t)L_207>>(int32_t)((int32_t)((int32_t)L_208&(int32_t)((int32_t)31)))));
		int32_t L_209 = V_4;
		int32_t L_210 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_209, (int32_t)L_210));
		uint8_t L_211 = __this->get_dbits_10();
		__this->set_need_5(L_211);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_212 = __this->get_dtree_13();
		__this->set_tree_3(L_212);
		int32_t L_213 = __this->get_dtree_index_14();
		__this->set_tree_index_4(L_213);
		__this->set_mode_1(3);
	}

IL_0412:
	{
		int32_t L_214 = __this->get_need_5();
		V_0 = L_214;
		goto IL_0494;
	}

IL_041b:
	{
		int32_t L_215 = V_6;
		if (!L_215)
		{
			goto IL_0424;
		}
	}
	{
		___r2 = 0;
		goto IL_046b;
	}

IL_0424:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_216 = ___s0;
		int32_t L_217 = V_3;
		NullCheck(L_216);
		L_216->set_bitb_12(L_217);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_218 = ___s0;
		int32_t L_219 = V_4;
		NullCheck(L_218);
		L_218->set_bitk_11(L_219);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_220 = ___z1;
		int32_t L_221 = V_6;
		NullCheck(L_220);
		L_220->set_avail_in_3(L_221);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_222 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_223 = L_222;
		NullCheck(L_223);
		int64_t L_224 = L_223->get_total_in_4();
		int32_t L_225 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_226 = ___z1;
		NullCheck(L_226);
		int32_t L_227 = L_226->get_next_in_index_2();
		NullCheck(L_223);
		L_223->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_224, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_225, (int32_t)L_227)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_228 = ___z1;
		int32_t L_229 = V_5;
		NullCheck(L_228);
		L_228->set_next_in_index_2(L_229);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_230 = ___s0;
		int32_t L_231 = V_7;
		NullCheck(L_230);
		L_230->set_write_17(L_231);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_232 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_233 = ___z1;
		int32_t L_234 = ___r2;
		NullCheck(L_232);
		int32_t L_235;
		L_235 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_232, L_233, L_234, /*hidden argument*/NULL);
		return L_235;
	}

IL_046b:
	{
		int32_t L_236 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_236, (int32_t)1));
		int32_t L_237 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_238 = ___z1;
		NullCheck(L_238);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_239 = L_238->get_next_in_1();
		int32_t L_240 = V_5;
		int32_t L_241 = L_240;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)1));
		NullCheck(L_239);
		int32_t L_242 = L_241;
		uint8_t L_243 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		int32_t L_244 = V_4;
		V_3 = ((int32_t)((int32_t)L_237|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_243&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_244&(int32_t)((int32_t)31)))))));
		int32_t L_245 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)8));
	}

IL_0494:
	{
		int32_t L_246 = V_4;
		int32_t L_247 = V_0;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_041b;
		}
	}
	{
		int32_t L_248 = __this->get_tree_index_4();
		int32_t L_249 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_250 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_251 = V_0;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		int32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)((int32_t)((int32_t)L_249&(int32_t)L_253)))), (int32_t)3));
		int32_t L_254 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_255 = __this->get_tree_3();
		int32_t L_256 = V_1;
		NullCheck(L_255);
		int32_t L_257 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)1));
		int32_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		V_3 = ((int32_t)((int32_t)L_254>>(int32_t)((int32_t)((int32_t)L_258&(int32_t)((int32_t)31)))));
		int32_t L_259 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_260 = __this->get_tree_3();
		int32_t L_261 = V_1;
		NullCheck(L_260);
		int32_t L_262 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)1));
		int32_t L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_259, (int32_t)L_263));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_264 = __this->get_tree_3();
		int32_t L_265 = V_1;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		int32_t L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		V_2 = L_267;
		int32_t L_268 = V_2;
		if (!((int32_t)((int32_t)L_268&(int32_t)((int32_t)16))))
		{
			goto IL_0500;
		}
	}
	{
		int32_t L_269 = V_2;
		__this->set_get_Renamed_7(((int32_t)((int32_t)L_269&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_270 = __this->get_tree_3();
		int32_t L_271 = V_1;
		NullCheck(L_270);
		int32_t L_272 = ((int32_t)il2cpp_codegen_add((int32_t)L_271, (int32_t)2));
		int32_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		__this->set_dist_8(L_273);
		__this->set_mode_1(4);
		goto IL_0051;
	}

IL_0500:
	{
		int32_t L_274 = V_2;
		if (((int32_t)((int32_t)L_274&(int32_t)((int32_t)64))))
		{
			goto IL_0526;
		}
	}
	{
		int32_t L_275 = V_2;
		__this->set_need_5(L_275);
		int32_t L_276 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_277 = __this->get_tree_3();
		int32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = ((int32_t)il2cpp_codegen_add((int32_t)L_278, (int32_t)2));
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		__this->set_tree_index_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_276/(int32_t)3)), (int32_t)L_280)));
		goto IL_0051;
	}

IL_0526:
	{
		__this->set_mode_1(((int32_t)9));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_281 = ___z1;
		NullCheck(L_281);
		L_281->set_msg_9(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		___r2 = ((int32_t)-3);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_282 = ___s0;
		int32_t L_283 = V_3;
		NullCheck(L_282);
		L_282->set_bitb_12(L_283);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_284 = ___s0;
		int32_t L_285 = V_4;
		NullCheck(L_284);
		L_284->set_bitk_11(L_285);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_286 = ___z1;
		int32_t L_287 = V_6;
		NullCheck(L_286);
		L_286->set_avail_in_3(L_287);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_288 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_289 = L_288;
		NullCheck(L_289);
		int64_t L_290 = L_289->get_total_in_4();
		int32_t L_291 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_292 = ___z1;
		NullCheck(L_292);
		int32_t L_293 = L_292->get_next_in_index_2();
		NullCheck(L_289);
		L_289->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_291, (int32_t)L_293)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_294 = ___z1;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->set_next_in_index_2(L_295);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_296 = ___s0;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->set_write_17(L_297);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_298 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_299 = ___z1;
		int32_t L_300 = ___r2;
		NullCheck(L_298);
		int32_t L_301;
		L_301 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_298, L_299, L_300, /*hidden argument*/NULL);
		return L_301;
	}

IL_0584:
	{
		int32_t L_302 = __this->get_get_Renamed_7();
		V_0 = L_302;
		goto IL_0606;
	}

IL_058d:
	{
		int32_t L_303 = V_6;
		if (!L_303)
		{
			goto IL_0596;
		}
	}
	{
		___r2 = 0;
		goto IL_05dd;
	}

IL_0596:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_304 = ___s0;
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->set_bitb_12(L_305);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_306 = ___s0;
		int32_t L_307 = V_4;
		NullCheck(L_306);
		L_306->set_bitk_11(L_307);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_308 = ___z1;
		int32_t L_309 = V_6;
		NullCheck(L_308);
		L_308->set_avail_in_3(L_309);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_310 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_311 = L_310;
		NullCheck(L_311);
		int64_t L_312 = L_311->get_total_in_4();
		int32_t L_313 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_314 = ___z1;
		NullCheck(L_314);
		int32_t L_315 = L_314->get_next_in_index_2();
		NullCheck(L_311);
		L_311->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_312, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_313, (int32_t)L_315)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_316 = ___z1;
		int32_t L_317 = V_5;
		NullCheck(L_316);
		L_316->set_next_in_index_2(L_317);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_318 = ___s0;
		int32_t L_319 = V_7;
		NullCheck(L_318);
		L_318->set_write_17(L_319);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_320 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_321 = ___z1;
		int32_t L_322 = ___r2;
		NullCheck(L_320);
		int32_t L_323;
		L_323 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_320, L_321, L_322, /*hidden argument*/NULL);
		return L_323;
	}

IL_05dd:
	{
		int32_t L_324 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_324, (int32_t)1));
		int32_t L_325 = V_3;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_326 = ___z1;
		NullCheck(L_326);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_327 = L_326->get_next_in_1();
		int32_t L_328 = V_5;
		int32_t L_329 = L_328;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
		NullCheck(L_327);
		int32_t L_330 = L_329;
		uint8_t L_331 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		int32_t L_332 = V_4;
		V_3 = ((int32_t)((int32_t)L_325|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_332&(int32_t)((int32_t)31)))))));
		int32_t L_333 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_333, (int32_t)8));
	}

IL_0606:
	{
		int32_t L_334 = V_4;
		int32_t L_335 = V_0;
		if ((((int32_t)L_334) < ((int32_t)L_335)))
		{
			goto IL_058d;
		}
	}
	{
		int32_t L_336 = __this->get_dist_8();
		int32_t L_337 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_338 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_339 = V_0;
		NullCheck(L_338);
		int32_t L_340 = L_339;
		int32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		__this->set_dist_8(((int32_t)il2cpp_codegen_add((int32_t)L_336, (int32_t)((int32_t)((int32_t)L_337&(int32_t)L_341)))));
		int32_t L_342 = V_3;
		int32_t L_343 = V_0;
		V_3 = ((int32_t)((int32_t)L_342>>(int32_t)((int32_t)((int32_t)L_343&(int32_t)((int32_t)31)))));
		int32_t L_344 = V_4;
		int32_t L_345 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_344, (int32_t)L_345));
		__this->set_mode_1(5);
	}

IL_0635:
	{
		int32_t L_346 = V_7;
		int32_t L_347 = __this->get_dist_8();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_346, (int32_t)L_347));
		goto IL_064d;
	}

IL_0642:
	{
		int32_t L_348 = V_9;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_349 = ___s0;
		NullCheck(L_349);
		int32_t L_350 = L_349->get_end_15();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_348, (int32_t)L_350));
	}

IL_064d:
	{
		int32_t L_351 = V_9;
		if ((((int32_t)L_351) < ((int32_t)0)))
		{
			goto IL_0642;
		}
	}
	{
		goto IL_0797;
	}

IL_0657:
	{
		int32_t L_352 = V_8;
		if (L_352)
		{
			goto IL_075a;
		}
	}
	{
		int32_t L_353 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_354 = ___s0;
		NullCheck(L_354);
		int32_t L_355 = L_354->get_end_15();
		if ((!(((uint32_t)L_353) == ((uint32_t)L_355))))
		{
			goto IL_0695;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_356 = ___s0;
		NullCheck(L_356);
		int32_t L_357 = L_356->get_read_16();
		if (!L_357)
		{
			goto IL_0695;
		}
	}
	{
		V_7 = 0;
		int32_t L_358 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_359 = ___s0;
		NullCheck(L_359);
		int32_t L_360 = L_359->get_read_16();
		if ((((int32_t)L_358) < ((int32_t)L_360)))
		{
			goto IL_0688;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_361 = ___s0;
		NullCheck(L_361);
		int32_t L_362 = L_361->get_end_15();
		int32_t L_363 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_362, (int32_t)L_363));
		goto IL_0693;
	}

IL_0688:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_364 = ___s0;
		NullCheck(L_364);
		int32_t L_365 = L_364->get_read_16();
		int32_t L_366 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_365, (int32_t)L_366)), (int32_t)1));
	}

IL_0693:
	{
		V_8 = G_B67_0;
	}

IL_0695:
	{
		int32_t L_367 = V_8;
		if (L_367)
		{
			goto IL_075a;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_368 = ___s0;
		int32_t L_369 = V_7;
		NullCheck(L_368);
		L_368->set_write_17(L_369);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_370 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_371 = ___z1;
		int32_t L_372 = ___r2;
		NullCheck(L_370);
		int32_t L_373;
		L_373 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_370, L_371, L_372, /*hidden argument*/NULL);
		___r2 = L_373;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_374 = ___s0;
		NullCheck(L_374);
		int32_t L_375 = L_374->get_write_17();
		V_7 = L_375;
		int32_t L_376 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_377 = ___s0;
		NullCheck(L_377);
		int32_t L_378 = L_377->get_read_16();
		if ((((int32_t)L_376) < ((int32_t)L_378)))
		{
			goto IL_06cb;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_379 = ___s0;
		NullCheck(L_379);
		int32_t L_380 = L_379->get_end_15();
		int32_t L_381 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_381));
		goto IL_06d6;
	}

IL_06cb:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_382 = ___s0;
		NullCheck(L_382);
		int32_t L_383 = L_382->get_read_16();
		int32_t L_384 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_383, (int32_t)L_384)), (int32_t)1));
	}

IL_06d6:
	{
		V_8 = G_B72_0;
		int32_t L_385 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_386 = ___s0;
		NullCheck(L_386);
		int32_t L_387 = L_386->get_end_15();
		if ((!(((uint32_t)L_385) == ((uint32_t)L_387))))
		{
			goto IL_070f;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_388 = ___s0;
		NullCheck(L_388);
		int32_t L_389 = L_388->get_read_16();
		if (!L_389)
		{
			goto IL_070f;
		}
	}
	{
		V_7 = 0;
		int32_t L_390 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_391 = ___s0;
		NullCheck(L_391);
		int32_t L_392 = L_391->get_read_16();
		if ((((int32_t)L_390) < ((int32_t)L_392)))
		{
			goto IL_0702;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_393 = ___s0;
		NullCheck(L_393);
		int32_t L_394 = L_393->get_end_15();
		int32_t L_395 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_394, (int32_t)L_395));
		goto IL_070d;
	}

IL_0702:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_396 = ___s0;
		NullCheck(L_396);
		int32_t L_397 = L_396->get_read_16();
		int32_t L_398 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_397, (int32_t)L_398)), (int32_t)1));
	}

IL_070d:
	{
		V_8 = G_B77_0;
	}

IL_070f:
	{
		int32_t L_399 = V_8;
		if (L_399)
		{
			goto IL_075a;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_400 = ___s0;
		int32_t L_401 = V_3;
		NullCheck(L_400);
		L_400->set_bitb_12(L_401);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_402 = ___s0;
		int32_t L_403 = V_4;
		NullCheck(L_402);
		L_402->set_bitk_11(L_403);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_404 = ___z1;
		int32_t L_405 = V_6;
		NullCheck(L_404);
		L_404->set_avail_in_3(L_405);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_406 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_407 = L_406;
		NullCheck(L_407);
		int64_t L_408 = L_407->get_total_in_4();
		int32_t L_409 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_410 = ___z1;
		NullCheck(L_410);
		int32_t L_411 = L_410->get_next_in_index_2();
		NullCheck(L_407);
		L_407->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_408, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_409, (int32_t)L_411)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_412 = ___z1;
		int32_t L_413 = V_5;
		NullCheck(L_412);
		L_412->set_next_in_index_2(L_413);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_414 = ___s0;
		int32_t L_415 = V_7;
		NullCheck(L_414);
		L_414->set_write_17(L_415);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_416 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_417 = ___z1;
		int32_t L_418 = ___r2;
		NullCheck(L_416);
		int32_t L_419;
		L_419 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_416, L_417, L_418, /*hidden argument*/NULL);
		return L_419;
	}

IL_075a:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_420 = ___s0;
		NullCheck(L_420);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_421 = L_420->get_window_14();
		int32_t L_422 = V_7;
		int32_t L_423 = L_422;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_423, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_424 = ___s0;
		NullCheck(L_424);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_425 = L_424->get_window_14();
		int32_t L_426 = V_9;
		int32_t L_427 = L_426;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_427, (int32_t)1));
		NullCheck(L_425);
		int32_t L_428 = L_427;
		uint8_t L_429 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_428));
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(L_423), (uint8_t)L_429);
		int32_t L_430 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)1));
		int32_t L_431 = V_9;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_432 = ___s0;
		NullCheck(L_432);
		int32_t L_433 = L_432->get_end_15();
		if ((!(((uint32_t)L_431) == ((uint32_t)L_433))))
		{
			goto IL_0789;
		}
	}
	{
		V_9 = 0;
	}

IL_0789:
	{
		int32_t L_434 = __this->get_len_2();
		__this->set_len_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_434, (int32_t)1)));
	}

IL_0797:
	{
		int32_t L_435 = __this->get_len_2();
		if (L_435)
		{
			goto IL_0657;
		}
	}
	{
		__this->set_mode_1(0);
		goto IL_0051;
	}

IL_07ae:
	{
		int32_t L_436 = V_8;
		if (L_436)
		{
			goto IL_08b1;
		}
	}
	{
		int32_t L_437 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_438 = ___s0;
		NullCheck(L_438);
		int32_t L_439 = L_438->get_end_15();
		if ((!(((uint32_t)L_437) == ((uint32_t)L_439))))
		{
			goto IL_07ec;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_440 = ___s0;
		NullCheck(L_440);
		int32_t L_441 = L_440->get_read_16();
		if (!L_441)
		{
			goto IL_07ec;
		}
	}
	{
		V_7 = 0;
		int32_t L_442 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_443 = ___s0;
		NullCheck(L_443);
		int32_t L_444 = L_443->get_read_16();
		if ((((int32_t)L_442) < ((int32_t)L_444)))
		{
			goto IL_07df;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_445 = ___s0;
		NullCheck(L_445);
		int32_t L_446 = L_445->get_end_15();
		int32_t L_447 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_446, (int32_t)L_447));
		goto IL_07ea;
	}

IL_07df:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_448 = ___s0;
		NullCheck(L_448);
		int32_t L_449 = L_448->get_read_16();
		int32_t L_450 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_449, (int32_t)L_450)), (int32_t)1));
	}

IL_07ea:
	{
		V_8 = G_B91_0;
	}

IL_07ec:
	{
		int32_t L_451 = V_8;
		if (L_451)
		{
			goto IL_08b1;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_452 = ___s0;
		int32_t L_453 = V_7;
		NullCheck(L_452);
		L_452->set_write_17(L_453);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_454 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_455 = ___z1;
		int32_t L_456 = ___r2;
		NullCheck(L_454);
		int32_t L_457;
		L_457 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_454, L_455, L_456, /*hidden argument*/NULL);
		___r2 = L_457;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_458 = ___s0;
		NullCheck(L_458);
		int32_t L_459 = L_458->get_write_17();
		V_7 = L_459;
		int32_t L_460 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_461 = ___s0;
		NullCheck(L_461);
		int32_t L_462 = L_461->get_read_16();
		if ((((int32_t)L_460) < ((int32_t)L_462)))
		{
			goto IL_0822;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_463 = ___s0;
		NullCheck(L_463);
		int32_t L_464 = L_463->get_end_15();
		int32_t L_465 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_464, (int32_t)L_465));
		goto IL_082d;
	}

IL_0822:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_466 = ___s0;
		NullCheck(L_466);
		int32_t L_467 = L_466->get_read_16();
		int32_t L_468 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_467, (int32_t)L_468)), (int32_t)1));
	}

IL_082d:
	{
		V_8 = G_B96_0;
		int32_t L_469 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_470 = ___s0;
		NullCheck(L_470);
		int32_t L_471 = L_470->get_end_15();
		if ((!(((uint32_t)L_469) == ((uint32_t)L_471))))
		{
			goto IL_0866;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_472 = ___s0;
		NullCheck(L_472);
		int32_t L_473 = L_472->get_read_16();
		if (!L_473)
		{
			goto IL_0866;
		}
	}
	{
		V_7 = 0;
		int32_t L_474 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_475 = ___s0;
		NullCheck(L_475);
		int32_t L_476 = L_475->get_read_16();
		if ((((int32_t)L_474) < ((int32_t)L_476)))
		{
			goto IL_0859;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_477 = ___s0;
		NullCheck(L_477);
		int32_t L_478 = L_477->get_end_15();
		int32_t L_479 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_478, (int32_t)L_479));
		goto IL_0864;
	}

IL_0859:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_480 = ___s0;
		NullCheck(L_480);
		int32_t L_481 = L_480->get_read_16();
		int32_t L_482 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_481, (int32_t)L_482)), (int32_t)1));
	}

IL_0864:
	{
		V_8 = G_B101_0;
	}

IL_0866:
	{
		int32_t L_483 = V_8;
		if (L_483)
		{
			goto IL_08b1;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_484 = ___s0;
		int32_t L_485 = V_3;
		NullCheck(L_484);
		L_484->set_bitb_12(L_485);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_486 = ___s0;
		int32_t L_487 = V_4;
		NullCheck(L_486);
		L_486->set_bitk_11(L_487);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_488 = ___z1;
		int32_t L_489 = V_6;
		NullCheck(L_488);
		L_488->set_avail_in_3(L_489);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_490 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_491 = L_490;
		NullCheck(L_491);
		int64_t L_492 = L_491->get_total_in_4();
		int32_t L_493 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_494 = ___z1;
		NullCheck(L_494);
		int32_t L_495 = L_494->get_next_in_index_2();
		NullCheck(L_491);
		L_491->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_492, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_493, (int32_t)L_495)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_496 = ___z1;
		int32_t L_497 = V_5;
		NullCheck(L_496);
		L_496->set_next_in_index_2(L_497);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_498 = ___s0;
		int32_t L_499 = V_7;
		NullCheck(L_498);
		L_498->set_write_17(L_499);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_500 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_501 = ___z1;
		int32_t L_502 = ___r2;
		NullCheck(L_500);
		int32_t L_503;
		L_503 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_500, L_501, L_502, /*hidden argument*/NULL);
		return L_503;
	}

IL_08b1:
	{
		___r2 = 0;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_504 = ___s0;
		NullCheck(L_504);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_505 = L_504->get_window_14();
		int32_t L_506 = V_7;
		int32_t L_507 = L_506;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_507, (int32_t)1));
		int32_t L_508 = __this->get_lit_6();
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(L_507), (uint8_t)((int32_t)((uint8_t)L_508)));
		int32_t L_509 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_509, (int32_t)1));
		__this->set_mode_1(0);
		goto IL_0051;
	}

IL_08db:
	{
		int32_t L_510 = V_4;
		if ((((int32_t)L_510) <= ((int32_t)7)))
		{
			goto IL_08f2;
		}
	}
	{
		int32_t L_511 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_511, (int32_t)8));
		int32_t L_512 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_512, (int32_t)1));
		int32_t L_513 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_513, (int32_t)1));
	}

IL_08f2:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_514 = ___s0;
		int32_t L_515 = V_7;
		NullCheck(L_514);
		L_514->set_write_17(L_515);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_516 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_517 = ___z1;
		int32_t L_518 = ___r2;
		NullCheck(L_516);
		int32_t L_519;
		L_519 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_516, L_517, L_518, /*hidden argument*/NULL);
		___r2 = L_519;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_520 = ___s0;
		NullCheck(L_520);
		int32_t L_521 = L_520->get_write_17();
		V_7 = L_521;
		int32_t L_522 = V_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_523 = ___s0;
		NullCheck(L_523);
		int32_t L_524 = L_523->get_read_16();
		if ((((int32_t)L_522) < ((int32_t)L_524)))
		{
			goto IL_0921;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_525 = ___s0;
		NullCheck(L_525);
		int32_t L_526 = L_525->get_end_15();
		int32_t L_527 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_526, (int32_t)L_527));
		goto IL_092c;
	}

IL_0921:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_528 = ___s0;
		NullCheck(L_528);
		int32_t L_529 = L_528->get_read_16();
		int32_t L_530 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_529, (int32_t)L_530)), (int32_t)1));
	}

IL_092c:
	{
		V_8 = G_B110_0;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_531 = ___s0;
		NullCheck(L_531);
		int32_t L_532 = L_531->get_read_16();
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_533 = ___s0;
		NullCheck(L_533);
		int32_t L_534 = L_533->get_write_17();
		if ((((int32_t)L_532) == ((int32_t)L_534)))
		{
			goto IL_0983;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_535 = ___s0;
		int32_t L_536 = V_3;
		NullCheck(L_535);
		L_535->set_bitb_12(L_536);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_537 = ___s0;
		int32_t L_538 = V_4;
		NullCheck(L_537);
		L_537->set_bitk_11(L_538);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_539 = ___z1;
		int32_t L_540 = V_6;
		NullCheck(L_539);
		L_539->set_avail_in_3(L_540);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_541 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_542 = L_541;
		NullCheck(L_542);
		int64_t L_543 = L_542->get_total_in_4();
		int32_t L_544 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_545 = ___z1;
		NullCheck(L_545);
		int32_t L_546 = L_545->get_next_in_index_2();
		NullCheck(L_542);
		L_542->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_543, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_544, (int32_t)L_546)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_547 = ___z1;
		int32_t L_548 = V_5;
		NullCheck(L_547);
		L_547->set_next_in_index_2(L_548);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_549 = ___s0;
		int32_t L_550 = V_7;
		NullCheck(L_549);
		L_549->set_write_17(L_550);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_551 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_552 = ___z1;
		int32_t L_553 = ___r2;
		NullCheck(L_551);
		int32_t L_554;
		L_554 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_551, L_552, L_553, /*hidden argument*/NULL);
		return L_554;
	}

IL_0983:
	{
		__this->set_mode_1(8);
	}

IL_098a:
	{
		___r2 = 1;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_555 = ___s0;
		int32_t L_556 = V_3;
		NullCheck(L_555);
		L_555->set_bitb_12(L_556);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_557 = ___s0;
		int32_t L_558 = V_4;
		NullCheck(L_557);
		L_557->set_bitk_11(L_558);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_559 = ___z1;
		int32_t L_560 = V_6;
		NullCheck(L_559);
		L_559->set_avail_in_3(L_560);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_561 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_562 = L_561;
		NullCheck(L_562);
		int64_t L_563 = L_562->get_total_in_4();
		int32_t L_564 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_565 = ___z1;
		NullCheck(L_565);
		int32_t L_566 = L_565->get_next_in_index_2();
		NullCheck(L_562);
		L_562->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_563, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_564, (int32_t)L_566)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_567 = ___z1;
		int32_t L_568 = V_5;
		NullCheck(L_567);
		L_567->set_next_in_index_2(L_568);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_569 = ___s0;
		int32_t L_570 = V_7;
		NullCheck(L_569);
		L_569->set_write_17(L_570);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_571 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_572 = ___z1;
		int32_t L_573 = ___r2;
		NullCheck(L_571);
		int32_t L_574;
		L_574 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_571, L_572, L_573, /*hidden argument*/NULL);
		return L_574;
	}

IL_09d4:
	{
		___r2 = ((int32_t)-3);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_575 = ___s0;
		int32_t L_576 = V_3;
		NullCheck(L_575);
		L_575->set_bitb_12(L_576);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_577 = ___s0;
		int32_t L_578 = V_4;
		NullCheck(L_577);
		L_577->set_bitk_11(L_578);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_579 = ___z1;
		int32_t L_580 = V_6;
		NullCheck(L_579);
		L_579->set_avail_in_3(L_580);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_581 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_582 = L_581;
		NullCheck(L_582);
		int64_t L_583 = L_582->get_total_in_4();
		int32_t L_584 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_585 = ___z1;
		NullCheck(L_585);
		int32_t L_586 = L_585->get_next_in_index_2();
		NullCheck(L_582);
		L_582->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_583, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_584, (int32_t)L_586)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_587 = ___z1;
		int32_t L_588 = V_5;
		NullCheck(L_587);
		L_587->set_next_in_index_2(L_588);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_589 = ___s0;
		int32_t L_590 = V_7;
		NullCheck(L_589);
		L_589->set_write_17(L_590);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_591 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_592 = ___z1;
		int32_t L_593 = ___r2;
		NullCheck(L_591);
		int32_t L_594;
		L_594 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_591, L_592, L_593, /*hidden argument*/NULL);
		return L_594;
	}

IL_0a1f:
	{
		___r2 = ((int32_t)-2);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_595 = ___s0;
		int32_t L_596 = V_3;
		NullCheck(L_595);
		L_595->set_bitb_12(L_596);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_597 = ___s0;
		int32_t L_598 = V_4;
		NullCheck(L_597);
		L_597->set_bitk_11(L_598);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_599 = ___z1;
		int32_t L_600 = V_6;
		NullCheck(L_599);
		L_599->set_avail_in_3(L_600);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_601 = ___z1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_602 = L_601;
		NullCheck(L_602);
		int64_t L_603 = L_602->get_total_in_4();
		int32_t L_604 = V_5;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_605 = ___z1;
		NullCheck(L_605);
		int32_t L_606 = L_605->get_next_in_index_2();
		NullCheck(L_602);
		L_602->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_603, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_604, (int32_t)L_606)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_607 = ___z1;
		int32_t L_608 = V_5;
		NullCheck(L_607);
		L_607->set_next_in_index_2(L_608);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_609 = ___s0;
		int32_t L_610 = V_7;
		NullCheck(L_609);
		L_609->set_write_17(L_610);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_611 = ___s0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_612 = ___z1;
		int32_t L_613 = ___r2;
		NullCheck(L_611);
		int32_t L_614;
		L_614 = InfBlocks_inflate_flush_m0F8AAE11206730545994167A6A42954485A0B7B1(L_611, L_612, L_613, /*hidden argument*/NULL);
		return L_614;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::free(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_free_m7D9FDE1833010B5396F62607225847809C4B699B (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,ComponentAce.Compression.Libs.zlib.InfBlocks,ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_m2B40F404300D1B16485C53B8B839D4F82161DD6C (InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * ___s6, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_in_index_2();
		V_6 = L_1;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_avail_in_3();
		V_7 = L_3;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_12();
		V_4 = L_5;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_11();
		V_5 = L_7;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_write_17();
		V_8 = L_9;
		int32_t L_10 = V_8;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_read_16();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_end_15();
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		goto IL_0050;
	}

IL_0044:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_read_16();
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), (int32_t)1));
	}

IL_0050:
	{
		V_9 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
		goto IL_0092;
	}

IL_0066:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_4;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_next_in_1();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)8));
	}

IL_0092:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)((int32_t)L_38&(int32_t)L_39));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (int32_t)3));
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = L_46;
		V_3 = L_47;
		if (L_47)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_48 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = V_0;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51)), (int32_t)3)), (int32_t)1));
		int32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)((int32_t)L_48>>(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = V_1;
		int32_t L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)), (int32_t)3)), (int32_t)1));
		int32_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_59));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_60 = ___s6;
		NullCheck(L_60);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_61 = L_60->get_window_14();
		int32_t L_62 = V_8;
		int32_t L_63 = L_62;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_1;
		int32_t L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), (int32_t)3)), (int32_t)2));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint8_t)((int32_t)((uint8_t)L_68)));
		int32_t L_69 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		goto IL_05e0;
	}

IL_00f1:
	{
		int32_t L_70 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = V_1;
		int32_t L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_71);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)), (int32_t)3)), (int32_t)1));
		int32_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_4 = ((int32_t)((int32_t)L_70>>(int32_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)31)))));
		int32_t L_76 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = V_1;
		int32_t L_78 = V_2;
		int32_t L_79 = V_0;
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)L_79)), (int32_t)3)), (int32_t)1));
		int32_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)L_81));
		int32_t L_82 = V_3;
		if (!((int32_t)((int32_t)L_82&(int32_t)((int32_t)16))))
		{
			goto IL_0463;
		}
	}
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)((int32_t)L_83&(int32_t)((int32_t)15)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = V_1;
		int32_t L_85 = V_2;
		int32_t L_86 = V_0;
		NullCheck(L_84);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86)), (int32_t)3)), (int32_t)2));
		int32_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_91 = V_3;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)((int32_t)((int32_t)L_89&(int32_t)L_93))));
		int32_t L_94 = V_4;
		int32_t L_95 = V_3;
		V_4 = ((int32_t)((int32_t)L_94>>(int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)31)))));
		int32_t L_96 = V_5;
		int32_t L_97 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)L_97));
		goto IL_0171;
	}

IL_0145:
	{
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
		int32_t L_99 = V_4;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_100 = ___z7;
		NullCheck(L_100);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = L_100->get_next_in_1();
		int32_t L_102 = V_6;
		int32_t L_103 = L_102;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		NullCheck(L_101);
		int32_t L_104 = L_103;
		uint8_t L_105 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		int32_t L_106 = V_5;
		V_4 = ((int32_t)((int32_t)L_99|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_105&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)31)))))));
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)8));
	}

IL_0171:
	{
		int32_t L_108 = V_5;
		if ((((int32_t)L_108) < ((int32_t)((int32_t)15))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_109 = V_4;
		int32_t L_110 = V_11;
		V_0 = ((int32_t)((int32_t)L_109&(int32_t)L_110));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_111 = ___td4;
		V_1 = L_111;
		int32_t L_112 = ___td_index5;
		V_2 = L_112;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_113 = V_1;
		int32_t L_114 = V_2;
		int32_t L_115 = V_0;
		NullCheck(L_113);
		int32_t L_116 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115)), (int32_t)3));
		int32_t L_117 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = L_117;
	}

IL_018b:
	{
		int32_t L_118 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = V_1;
		int32_t L_120 = V_2;
		int32_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121)), (int32_t)3)), (int32_t)1));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_4 = ((int32_t)((int32_t)L_118>>(int32_t)((int32_t)((int32_t)L_123&(int32_t)((int32_t)31)))));
		int32_t L_124 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_125 = V_1;
		int32_t L_126 = V_2;
		int32_t L_127 = V_0;
		NullCheck(L_125);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)L_127)), (int32_t)3)), (int32_t)1));
		int32_t L_129 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)L_129));
		int32_t L_130 = V_3;
		if (!((int32_t)((int32_t)L_130&(int32_t)((int32_t)16))))
		{
			goto IL_03ad;
		}
	}
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131&(int32_t)((int32_t)15)));
		goto IL_01e6;
	}

IL_01ba:
	{
		int32_t L_132 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1));
		int32_t L_133 = V_4;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_134 = ___z7;
		NullCheck(L_134);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = L_134->get_next_in_1();
		int32_t L_136 = V_6;
		int32_t L_137 = L_136;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
		NullCheck(L_135);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = V_5;
		V_4 = ((int32_t)((int32_t)L_133|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_140&(int32_t)((int32_t)31)))))));
		int32_t L_141 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)8));
	}

IL_01e6:
	{
		int32_t L_142 = V_5;
		int32_t L_143 = V_3;
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_01ba;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = V_1;
		int32_t L_145 = V_2;
		int32_t L_146 = V_0;
		NullCheck(L_144);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), (int32_t)3)), (int32_t)2));
		int32_t L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t L_149 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_150 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_151 = V_3;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		int32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)((int32_t)((int32_t)L_149&(int32_t)L_153))));
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		V_4 = ((int32_t)((int32_t)L_154>>(int32_t)((int32_t)((int32_t)L_155&(int32_t)((int32_t)31)))));
		int32_t L_156 = V_5;
		int32_t L_157 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_157));
		int32_t L_158 = V_9;
		int32_t L_159 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_158, (int32_t)L_159));
		int32_t L_160 = V_8;
		int32_t L_161 = V_13;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_162 = V_8;
		int32_t L_163 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_162, (int32_t)L_163));
		int32_t L_164 = V_8;
		int32_t L_165 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)L_165))) <= ((int32_t)0)))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_166 = V_8;
		int32_t L_167 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_166, (int32_t)L_167)))))
		{
			goto IL_0284;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_168 = ___s6;
		NullCheck(L_168);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_169 = L_168->get_window_14();
		int32_t L_170 = V_8;
		int32_t L_171 = L_170;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_172 = ___s6;
		NullCheck(L_172);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_173 = L_172->get_window_14();
		int32_t L_174 = V_14;
		int32_t L_175 = L_174;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
		NullCheck(L_173);
		int32_t L_176 = L_175;
		uint8_t L_177 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(L_171), (uint8_t)L_177);
		int32_t L_178 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_179 = ___s6;
		NullCheck(L_179);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_180 = L_179->get_window_14();
		int32_t L_181 = V_8;
		int32_t L_182 = L_181;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_183 = ___s6;
		NullCheck(L_183);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_184 = L_183->get_window_14();
		int32_t L_185 = V_14;
		int32_t L_186 = L_185;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)1));
		NullCheck(L_184);
		int32_t L_187 = L_186;
		uint8_t L_188 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(L_182), (uint8_t)L_188);
		int32_t L_189 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)1));
		goto IL_0341;
	}

IL_0284:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_190 = ___s6;
		NullCheck(L_190);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_191 = L_190->get_window_14();
		int32_t L_192 = V_14;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_193 = ___s6;
		NullCheck(L_193);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_194 = L_193->get_window_14();
		int32_t L_195 = V_8;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_191, L_192, (RuntimeArray *)(RuntimeArray *)L_194, L_195, 2, /*hidden argument*/NULL);
		int32_t L_196 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)2));
		int32_t L_197 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)2));
		int32_t L_198 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)2));
		goto IL_0341;
	}

IL_02b3:
	{
		int32_t L_199 = V_8;
		int32_t L_200 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_199, (int32_t)L_200));
	}

IL_02ba:
	{
		int32_t L_201 = V_14;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_202 = ___s6;
		NullCheck(L_202);
		int32_t L_203 = L_202->get_end_15();
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)L_203));
		int32_t L_204 = V_14;
		if ((((int32_t)L_204) < ((int32_t)0)))
		{
			goto IL_02ba;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_205 = ___s6;
		NullCheck(L_205);
		int32_t L_206 = L_205->get_end_15();
		int32_t L_207 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_206, (int32_t)L_207));
		int32_t L_208 = V_12;
		int32_t L_209 = V_3;
		if ((((int32_t)L_208) <= ((int32_t)L_209)))
		{
			goto IL_0341;
		}
	}
	{
		int32_t L_210 = V_12;
		int32_t L_211 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_210, (int32_t)L_211));
		int32_t L_212 = V_8;
		int32_t L_213 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_212, (int32_t)L_213))) <= ((int32_t)0)))
		{
			goto IL_0318;
		}
	}
	{
		int32_t L_214 = V_3;
		int32_t L_215 = V_8;
		int32_t L_216 = V_14;
		if ((((int32_t)L_214) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_215, (int32_t)L_216)))))
		{
			goto IL_0318;
		}
	}

IL_02f1:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_217 = ___s6;
		NullCheck(L_217);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_218 = L_217->get_window_14();
		int32_t L_219 = V_8;
		int32_t L_220 = L_219;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_222 = L_221->get_window_14();
		int32_t L_223 = V_14;
		int32_t L_224 = L_223;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		uint8_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(L_220), (uint8_t)L_226);
		int32_t L_227 = V_3;
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_227, (int32_t)1));
		V_3 = L_228;
		if (L_228)
		{
			goto IL_02f1;
		}
	}
	{
		goto IL_033e;
	}

IL_0318:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_229 = ___s6;
		NullCheck(L_229);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_230 = L_229->get_window_14();
		int32_t L_231 = V_14;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_232 = ___s6;
		NullCheck(L_232);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_233 = L_232->get_window_14();
		int32_t L_234 = V_8;
		int32_t L_235 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_230, L_231, (RuntimeArray *)(RuntimeArray *)L_233, L_234, L_235, /*hidden argument*/NULL);
		int32_t L_236 = V_8;
		int32_t L_237 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)L_237));
		int32_t L_238 = V_14;
		int32_t L_239 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)L_239));
		V_3 = 0;
	}

IL_033e:
	{
		V_14 = 0;
	}

IL_0341:
	{
		int32_t L_240 = V_8;
		int32_t L_241 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_240, (int32_t)L_241))) <= ((int32_t)0)))
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_242 = V_12;
		int32_t L_243 = V_8;
		int32_t L_244 = V_14;
		if ((((int32_t)L_242) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)L_244)))))
		{
			goto IL_037e;
		}
	}

IL_0352:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_245 = ___s6;
		NullCheck(L_245);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_246 = L_245->get_window_14();
		int32_t L_247 = V_8;
		int32_t L_248 = L_247;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)1));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_250 = L_249->get_window_14();
		int32_t L_251 = V_14;
		int32_t L_252 = L_251;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1));
		NullCheck(L_250);
		int32_t L_253 = L_252;
		uint8_t L_254 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(L_248), (uint8_t)L_254);
		int32_t L_255 = V_12;
		int32_t L_256 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)1));
		V_12 = L_256;
		if (L_256)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_05e0;
	}

IL_037e:
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_257 = ___s6;
		NullCheck(L_257);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_258 = L_257->get_window_14();
		int32_t L_259 = V_14;
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_260 = ___s6;
		NullCheck(L_260);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_261 = L_260->get_window_14();
		int32_t L_262 = V_8;
		int32_t L_263 = V_12;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_258, L_259, (RuntimeArray *)(RuntimeArray *)L_261, L_262, L_263, /*hidden argument*/NULL);
		int32_t L_264 = V_8;
		int32_t L_265 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_264, (int32_t)L_265));
		int32_t L_266 = V_14;
		int32_t L_267 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)L_267));
		V_12 = 0;
		goto IL_05e0;
	}

IL_03ad:
	{
		int32_t L_268 = V_3;
		if (((int32_t)((int32_t)L_268&(int32_t)((int32_t)64))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_269 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_270 = V_1;
		int32_t L_271 = V_2;
		int32_t L_272 = V_0;
		NullCheck(L_270);
		int32_t L_273 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_271, (int32_t)L_272)), (int32_t)3)), (int32_t)2));
		int32_t L_274 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_269, (int32_t)L_274));
		int32_t L_275 = V_0;
		int32_t L_276 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_277 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_278 = V_3;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)((int32_t)((int32_t)L_276&(int32_t)L_280))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_281 = V_1;
		int32_t L_282 = V_2;
		int32_t L_283 = V_0;
		NullCheck(L_281);
		int32_t L_284 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_282, (int32_t)L_283)), (int32_t)3));
		int32_t L_285 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		V_3 = L_285;
		goto IL_018b;
	}

IL_03d9:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_286 = ___z7;
		NullCheck(L_286);
		L_286->set_msg_9(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_287 = ___z7;
		NullCheck(L_287);
		int32_t L_288 = L_287->get_avail_in_3();
		int32_t L_289 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_290>>(int32_t)3))) < ((int32_t)L_291)))
		{
			goto IL_03fd;
		}
	}
	{
		int32_t L_292 = V_12;
		G_B41_0 = L_292;
		goto IL_0401;
	}

IL_03fd:
	{
		int32_t L_293 = V_5;
		G_B41_0 = ((int32_t)((int32_t)L_293>>(int32_t)3));
	}

IL_0401:
	{
		V_12 = G_B41_0;
		int32_t L_294 = V_7;
		int32_t L_295 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)L_295));
		int32_t L_296 = V_6;
		int32_t L_297 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_296, (int32_t)L_297));
		int32_t L_298 = V_5;
		int32_t L_299 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_298, (int32_t)((int32_t)((int32_t)L_299<<(int32_t)3))));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_300 = ___s6;
		int32_t L_301 = V_4;
		NullCheck(L_300);
		L_300->set_bitb_12(L_301);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_302 = ___s6;
		int32_t L_303 = V_5;
		NullCheck(L_302);
		L_302->set_bitk_11(L_303);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_304 = ___z7;
		int32_t L_305 = V_7;
		NullCheck(L_304);
		L_304->set_avail_in_3(L_305);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_306 = ___z7;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_307 = L_306;
		NullCheck(L_307);
		int64_t L_308 = L_307->get_total_in_4();
		int32_t L_309 = V_6;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_310 = ___z7;
		NullCheck(L_310);
		int32_t L_311 = L_310->get_next_in_index_2();
		NullCheck(L_307);
		L_307->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_308, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)L_311)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_312 = ___z7;
		int32_t L_313 = V_6;
		NullCheck(L_312);
		L_312->set_next_in_index_2(L_313);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_314 = ___s6;
		int32_t L_315 = V_8;
		NullCheck(L_314);
		L_314->set_write_17(L_315);
		return ((int32_t)-3);
	}

IL_0463:
	{
		int32_t L_316 = V_3;
		if (((int32_t)((int32_t)L_316&(int32_t)((int32_t)64))))
		{
			goto IL_04d3;
		}
	}
	{
		int32_t L_317 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_318 = V_1;
		int32_t L_319 = V_2;
		int32_t L_320 = V_0;
		NullCheck(L_318);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)L_320)), (int32_t)3)), (int32_t)2));
		int32_t L_322 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)L_322));
		int32_t L_323 = V_0;
		int32_t L_324 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_325 = ((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_326 = V_3;
		NullCheck(L_325);
		int32_t L_327 = L_326;
		int32_t L_328 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)((int32_t)((int32_t)L_324&(int32_t)L_328))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_329 = V_1;
		int32_t L_330 = V_2;
		int32_t L_331 = V_0;
		NullCheck(L_329);
		int32_t L_332 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_330, (int32_t)L_331)), (int32_t)3));
		int32_t L_333 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		int32_t L_334 = L_333;
		V_3 = L_334;
		if (L_334)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_335 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_336 = V_1;
		int32_t L_337 = V_2;
		int32_t L_338 = V_0;
		NullCheck(L_336);
		int32_t L_339 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_337, (int32_t)L_338)), (int32_t)3)), (int32_t)1));
		int32_t L_340 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		V_4 = ((int32_t)((int32_t)L_335>>(int32_t)((int32_t)((int32_t)L_340&(int32_t)((int32_t)31)))));
		int32_t L_341 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_342 = V_1;
		int32_t L_343 = V_2;
		int32_t L_344 = V_0;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_344)), (int32_t)3)), (int32_t)1));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)L_346));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_347 = ___s6;
		NullCheck(L_347);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_348 = L_347->get_window_14();
		int32_t L_349 = V_8;
		int32_t L_350 = L_349;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_350, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_351 = V_1;
		int32_t L_352 = V_2;
		int32_t L_353 = V_0;
		NullCheck(L_351);
		int32_t L_354 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_352, (int32_t)L_353)), (int32_t)3)), (int32_t)2));
		int32_t L_355 = (L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(L_350), (uint8_t)((int32_t)((uint8_t)L_355)));
		int32_t L_356 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_356, (int32_t)1));
		goto IL_05e0;
	}

IL_04d3:
	{
		int32_t L_357 = V_3;
		if (!((int32_t)((int32_t)L_357&(int32_t)((int32_t)32))))
		{
			goto IL_0556;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_358 = ___z7;
		NullCheck(L_358);
		int32_t L_359 = L_358->get_avail_in_3();
		int32_t L_360 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_359, (int32_t)L_360));
		int32_t L_361 = V_5;
		int32_t L_362 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_361>>(int32_t)3))) < ((int32_t)L_362)))
		{
			goto IL_04f1;
		}
	}
	{
		int32_t L_363 = V_12;
		G_B49_0 = L_363;
		goto IL_04f5;
	}

IL_04f1:
	{
		int32_t L_364 = V_5;
		G_B49_0 = ((int32_t)((int32_t)L_364>>(int32_t)3));
	}

IL_04f5:
	{
		V_12 = G_B49_0;
		int32_t L_365 = V_7;
		int32_t L_366 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_365, (int32_t)L_366));
		int32_t L_367 = V_6;
		int32_t L_368 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_367, (int32_t)L_368));
		int32_t L_369 = V_5;
		int32_t L_370 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)((int32_t)((int32_t)L_370<<(int32_t)3))));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_371 = ___s6;
		int32_t L_372 = V_4;
		NullCheck(L_371);
		L_371->set_bitb_12(L_372);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_373 = ___s6;
		int32_t L_374 = V_5;
		NullCheck(L_373);
		L_373->set_bitk_11(L_374);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_375 = ___z7;
		int32_t L_376 = V_7;
		NullCheck(L_375);
		L_375->set_avail_in_3(L_376);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_377 = ___z7;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_378 = L_377;
		NullCheck(L_378);
		int64_t L_379 = L_378->get_total_in_4();
		int32_t L_380 = V_6;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_381 = ___z7;
		NullCheck(L_381);
		int32_t L_382 = L_381->get_next_in_index_2();
		NullCheck(L_378);
		L_378->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_379, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_382)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_383 = ___z7;
		int32_t L_384 = V_6;
		NullCheck(L_383);
		L_383->set_next_in_index_2(L_384);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_385 = ___s6;
		int32_t L_386 = V_8;
		NullCheck(L_385);
		L_385->set_write_17(L_386);
		return 1;
	}

IL_0556:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_387 = ___z7;
		NullCheck(L_387);
		L_387->set_msg_9(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_388 = ___z7;
		NullCheck(L_388);
		int32_t L_389 = L_388->get_avail_in_3();
		int32_t L_390 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_389, (int32_t)L_390));
		int32_t L_391 = V_5;
		int32_t L_392 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_391>>(int32_t)3))) < ((int32_t)L_392)))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_393 = V_12;
		G_B53_0 = L_393;
		goto IL_057e;
	}

IL_057a:
	{
		int32_t L_394 = V_5;
		G_B53_0 = ((int32_t)((int32_t)L_394>>(int32_t)3));
	}

IL_057e:
	{
		V_12 = G_B53_0;
		int32_t L_395 = V_7;
		int32_t L_396 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_395, (int32_t)L_396));
		int32_t L_397 = V_6;
		int32_t L_398 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_397, (int32_t)L_398));
		int32_t L_399 = V_5;
		int32_t L_400 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)((int32_t)((int32_t)L_400<<(int32_t)3))));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_401 = ___s6;
		int32_t L_402 = V_4;
		NullCheck(L_401);
		L_401->set_bitb_12(L_402);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_403 = ___s6;
		int32_t L_404 = V_5;
		NullCheck(L_403);
		L_403->set_bitk_11(L_404);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_405 = ___z7;
		int32_t L_406 = V_7;
		NullCheck(L_405);
		L_405->set_avail_in_3(L_406);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_407 = ___z7;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_408 = L_407;
		NullCheck(L_408);
		int64_t L_409 = L_408->get_total_in_4();
		int32_t L_410 = V_6;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_411 = ___z7;
		NullCheck(L_411);
		int32_t L_412 = L_411->get_next_in_index_2();
		NullCheck(L_408);
		L_408->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_410, (int32_t)L_412)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_413 = ___z7;
		int32_t L_414 = V_6;
		NullCheck(L_413);
		L_413->set_next_in_index_2(L_414);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_415 = ___s6;
		int32_t L_416 = V_8;
		NullCheck(L_415);
		L_415->set_write_17(L_416);
		return ((int32_t)-3);
	}

IL_05e0:
	{
		int32_t L_417 = V_9;
		if ((((int32_t)L_417) < ((int32_t)((int32_t)258))))
		{
			goto IL_05f2;
		}
	}
	{
		int32_t L_418 = V_7;
		if ((((int32_t)L_418) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0092;
		}
	}

IL_05f2:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_419 = ___z7;
		NullCheck(L_419);
		int32_t L_420 = L_419->get_avail_in_3();
		int32_t L_421 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_420, (int32_t)L_421));
		int32_t L_422 = V_5;
		int32_t L_423 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_422>>(int32_t)3))) < ((int32_t)L_423)))
		{
			goto IL_060a;
		}
	}
	{
		int32_t L_424 = V_12;
		G_B59_0 = L_424;
		goto IL_060e;
	}

IL_060a:
	{
		int32_t L_425 = V_5;
		G_B59_0 = ((int32_t)((int32_t)L_425>>(int32_t)3));
	}

IL_060e:
	{
		V_12 = G_B59_0;
		int32_t L_426 = V_7;
		int32_t L_427 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_426, (int32_t)L_427));
		int32_t L_428 = V_6;
		int32_t L_429 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_428, (int32_t)L_429));
		int32_t L_430 = V_5;
		int32_t L_431 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)((int32_t)((int32_t)L_431<<(int32_t)3))));
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_432 = ___s6;
		int32_t L_433 = V_4;
		NullCheck(L_432);
		L_432->set_bitb_12(L_433);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_434 = ___s6;
		int32_t L_435 = V_5;
		NullCheck(L_434);
		L_434->set_bitk_11(L_435);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_436 = ___z7;
		int32_t L_437 = V_7;
		NullCheck(L_436);
		L_436->set_avail_in_3(L_437);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_438 = ___z7;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_439 = L_438;
		NullCheck(L_439);
		int64_t L_440 = L_439->get_total_in_4();
		int32_t L_441 = V_6;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_442 = ___z7;
		NullCheck(L_442);
		int32_t L_443 = L_442->get_next_in_index_2();
		NullCheck(L_439);
		L_439->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_440, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_441, (int32_t)L_443)))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_444 = ___z7;
		int32_t L_445 = V_6;
		NullCheck(L_444);
		L_444->set_next_in_index_2(L_445);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_446 = ___s6;
		int32_t L_447 = V_8;
		NullCheck(L_446);
		L_446->set_write_17(L_447);
		return 0;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfCodes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__cctor_m1EEC9B1AE994B3E764CE36E8F09317A7B4DB1900 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t67307C7809A92AE80D316007C21BEFF819FBBD0A_il2cpp_TypeInfo_var))->set_inflate_mask_0(L_1);
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
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m5DC61DE09FEA8A0E70966CFB7F2D0132902D44C1 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_12 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_13 = NULL;
	int32_t V_14 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B52_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B51_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B53_2 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		V_12 = L_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		V_13 = L_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_15 = L_3;
		V_10 = 0;
		int32_t L_4 = ___n2;
		V_5 = L_4;
	}

IL_0028:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___b0;
		int32_t L_7 = ___bindex1;
		int32_t L_8 = V_10;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		int32_t* L_11 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_5;
		if (L_15)
		{
			goto IL_0028;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 0;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ___n2;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_005b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ___t6;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___m7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_005b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = ___m7;
		NullCheck(L_22);
		int32_t L_23 = 0;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		V_6 = 1;
		goto IL_0072;
	}

IL_0066:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = V_1;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (L_28)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0066;
		}
	}

IL_0078:
	{
		int32_t L_31 = V_6;
		V_7 = L_31;
		int32_t L_32 = V_8;
		int32_t L_33 = V_6;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_34 = V_6;
		V_8 = L_34;
	}

IL_0086:
	{
		V_5 = ((int32_t)15);
		goto IL_0098;
	}

IL_008c:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if (L_38)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_40 = V_5;
		if (L_40)
		{
			goto IL_008c;
		}
	}

IL_009c:
	{
		int32_t L_41 = V_5;
		V_3 = L_41;
		int32_t L_42 = V_8;
		int32_t L_43 = V_5;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_44 = V_5;
		V_8 = L_44;
	}

IL_00a9:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = ___m7;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_46);
		int32_t L_47 = V_6;
		V_17 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_47&(int32_t)((int32_t)31)))));
		goto IL_00d6;
	}

IL_00ba:
	{
		int32_t L_48 = V_17;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = V_1;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_52));
		V_17 = L_53;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00ca:
	{
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = V_17;
		V_17 = ((int32_t)((int32_t)L_55<<(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = V_5;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_58 = V_17;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = V_1;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_62));
		V_17 = L_63;
		if ((((int32_t)L_63) >= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00ec:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_1;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)));
		int32_t L_67 = *((int32_t*)L_66);
		int32_t L_68 = V_17;
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_68));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = V_15;
		int32_t L_70 = 0;
		V_6 = L_70;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_70);
		V_10 = 1;
		V_16 = 2;
		goto IL_0125;
	}

IL_010a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = V_15;
		int32_t L_72 = V_16;
		int32_t L_73 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_1;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_77));
		V_6 = L_78;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)L_78);
		int32_t L_79 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		int32_t L_80 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_0125:
	{
		int32_t L_81 = V_5;
		int32_t L_82 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		V_5 = L_82;
		if (L_82)
		{
			goto IL_010a;
		}
	}
	{
		V_5 = 0;
		V_10 = 0;
	}

IL_0134:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = ___b0;
		int32_t L_84 = ___bindex1;
		int32_t L_85 = V_10;
		NullCheck(L_83);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85));
		int32_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = L_87;
		V_6 = L_88;
		if (!L_88)
		{
			goto IL_0158;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_89 = ___v10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = V_15;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t* L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)));
		int32_t L_93 = *((int32_t*)L_92);
		V_19 = L_93;
		int32_t L_94 = V_19;
		*((int32_t*)L_92) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		int32_t L_95 = V_19;
		int32_t L_96 = V_5;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
	}

IL_0158:
	{
		int32_t L_97 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		int32_t L_98 = V_5;
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		V_5 = L_99;
		int32_t L_100 = ___n2;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_0134;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = V_15;
		int32_t L_102 = V_3;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		int32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		___n2 = L_104;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = V_15;
		int32_t L_106 = 0;
		V_5 = L_106;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_106);
		V_10 = 0;
		V_4 = (-1);
		int32_t L_107 = V_8;
		V_14 = ((-L_107));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_108 = V_13;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_11 = 0;
		V_18 = 0;
		goto IL_03ae;
	}

IL_0191:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_109 = V_1;
		int32_t L_110 = V_7;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_0 = L_112;
		goto IL_039e;
	}

IL_019b:
	{
		int32_t L_113 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
		int32_t L_114 = V_14;
		int32_t L_115 = V_8;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		int32_t L_116 = V_3;
		int32_t L_117 = V_14;
		V_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)L_117));
		int32_t L_118 = V_18;
		int32_t L_119 = V_8;
		if ((((int32_t)L_118) > ((int32_t)L_119)))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_120 = V_18;
		G_B35_0 = L_120;
		goto IL_01ba;
	}

IL_01b8:
	{
		int32_t L_121 = V_8;
		G_B35_0 = L_121;
	}

IL_01ba:
	{
		V_18 = G_B35_0;
		int32_t L_122 = V_7;
		int32_t L_123 = V_14;
		int32_t L_124 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)L_123));
		V_6 = L_124;
		int32_t L_125 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_124&(int32_t)((int32_t)31)))));
		V_2 = L_125;
		int32_t L_126 = V_0;
		if ((((int32_t)L_125) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1)))))
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_127 = V_2;
		int32_t L_128 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1))));
		int32_t L_129 = V_7;
		V_16 = L_129;
		int32_t L_130 = V_6;
		int32_t L_131 = V_18;
		if ((((int32_t)L_130) >= ((int32_t)L_131)))
		{
			goto IL_0204;
		}
	}
	{
		goto IL_01f9;
	}

IL_01e2:
	{
		int32_t L_132 = V_2;
		int32_t L_133 = ((int32_t)((int32_t)L_132<<(int32_t)1));
		V_2 = L_133;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_134 = V_1;
		int32_t L_135 = V_16;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		V_16 = L_136;
		NullCheck(L_134);
		int32_t L_137 = L_136;
		int32_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		if ((((int32_t)L_133) <= ((int32_t)L_138)))
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_139 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_140 = V_1;
		int32_t L_141 = V_16;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_143));
	}

IL_01f9:
	{
		int32_t L_144 = V_6;
		int32_t L_145 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
		V_6 = L_145;
		int32_t L_146 = V_18;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_01e2;
		}
	}

IL_0204:
	{
		int32_t L_147 = V_6;
		V_18 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_147&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = ___hn9;
		NullCheck(L_148);
		int32_t L_149 = 0;
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_18;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)L_151))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_021e;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_021e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = V_13;
		int32_t L_153 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t L_155 = 0;
		int32_t L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		int32_t L_157 = L_156;
		V_11 = L_157;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (int32_t)L_157);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_158 = ___hn9;
		NullCheck(L_158);
		int32_t* L_159 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_160 = *((int32_t*)L_159);
		int32_t L_161 = V_18;
		*((int32_t*)L_159) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)L_161));
		int32_t L_162 = V_4;
		if (!L_162)
		{
			goto IL_0289;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_163 = V_15;
		int32_t L_164 = V_4;
		int32_t L_165 = V_5;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (int32_t)L_165);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_166 = V_12;
		int32_t L_167 = V_6;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((uint8_t)L_167)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_168 = V_12;
		int32_t L_169 = V_8;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((uint8_t)L_169)));
		int32_t L_170 = V_5;
		int32_t L_171 = V_14;
		int32_t L_172 = V_8;
		int32_t L_173;
		L_173 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_170, ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_172)), /*hidden argument*/NULL);
		V_6 = L_173;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_174 = V_12;
		int32_t L_175 = V_11;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_176 = V_13;
		int32_t L_177 = V_4;
		NullCheck(L_176);
		int32_t L_178 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_177, (int32_t)1));
		int32_t L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_6;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_175, (int32_t)L_179)), (int32_t)L_180)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_181 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_182 = ___hp8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_183 = V_13;
		int32_t L_184 = V_4;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_184, (int32_t)1));
		int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_181, 0, (RuntimeArray *)(RuntimeArray *)L_182, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)L_187)), (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_028f;
	}

IL_0289:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_188 = ___t6;
		int32_t L_189 = V_11;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_189);
	}

IL_028f:
	{
		int32_t L_190 = V_7;
		int32_t L_191 = V_14;
		int32_t L_192 = V_8;
		if ((((int32_t)L_190) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)L_192)))))
		{
			goto IL_019b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_193 = V_12;
		int32_t L_194 = V_7;
		int32_t L_195 = V_14;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_194, (int32_t)L_195)))));
		int32_t L_196 = V_10;
		int32_t L_197 = ___n2;
		if ((((int32_t)L_196) < ((int32_t)L_197)))
		{
			goto IL_02b5;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_198 = V_12;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_030b;
	}

IL_02b5:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_199 = ___v10;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int32_t L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ___s3;
		if ((((int32_t)L_202) >= ((int32_t)L_203)))
		{
			goto IL_02e3;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_204 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_205 = ___v10;
		int32_t L_206 = V_10;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		int32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		G_B51_0 = 0;
		G_B51_1 = L_204;
		if ((((int32_t)L_208) < ((int32_t)((int32_t)256))))
		{
			G_B52_0 = 0;
			G_B52_1 = L_204;
			goto IL_02d0;
		}
	}
	{
		G_B53_0 = ((int32_t)96);
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_02d1;
	}

IL_02d0:
	{
		G_B53_0 = 0;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_02d1:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)((int32_t)((uint8_t)G_B53_0)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_209 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_210 = ___v10;
		int32_t L_211 = V_10;
		int32_t L_212 = L_211;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		NullCheck(L_210);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_214);
		goto IL_030b;
	}

IL_02e3:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_215 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_216 = ___e5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_217 = ___v10;
		int32_t L_218 = V_10;
		NullCheck(L_217);
		int32_t L_219 = L_218;
		int32_t L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		int32_t L_221 = ___s3;
		NullCheck(L_216);
		int32_t L_222 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_220, (int32_t)L_221));
		int32_t L_223 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)((int32_t)16))), (int32_t)((int32_t)64))))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_224 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_225 = ___d4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_226 = ___v10;
		int32_t L_227 = V_10;
		int32_t L_228 = L_227;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
		NullCheck(L_226);
		int32_t L_229 = L_228;
		int32_t L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ___s3;
		NullCheck(L_225);
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231));
		int32_t L_233 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_233);
	}

IL_030b:
	{
		int32_t L_234 = V_7;
		int32_t L_235 = V_14;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_234, (int32_t)L_235))&(int32_t)((int32_t)31)))));
		int32_t L_236 = V_5;
		int32_t L_237 = V_14;
		int32_t L_238;
		L_238 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_236, L_237, /*hidden argument*/NULL);
		V_6 = L_238;
		goto IL_033b;
	}

IL_0323:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_239 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_240 = ___hp8;
		int32_t L_241 = V_11;
		int32_t L_242 = V_6;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_239, 0, (RuntimeArray *)(RuntimeArray *)L_240, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)L_242)), (int32_t)3)), 3, /*hidden argument*/NULL);
		int32_t L_243 = V_6;
		int32_t L_244 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_243, (int32_t)L_244));
	}

IL_033b:
	{
		int32_t L_245 = V_6;
		int32_t L_246 = V_18;
		if ((((int32_t)L_245) < ((int32_t)L_246)))
		{
			goto IL_0323;
		}
	}
	{
		int32_t L_247 = V_7;
		V_6 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_247, (int32_t)1))&(int32_t)((int32_t)31)))));
		goto IL_035f;
	}

IL_034e:
	{
		int32_t L_248 = V_5;
		int32_t L_249 = V_6;
		V_5 = ((int32_t)((int32_t)L_248^(int32_t)L_249));
		int32_t L_250 = V_6;
		int32_t L_251;
		L_251 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_250, 1, /*hidden argument*/NULL);
		V_6 = L_251;
	}

IL_035f:
	{
		int32_t L_252 = V_5;
		int32_t L_253 = V_6;
		if (((int32_t)((int32_t)L_252&(int32_t)L_253)))
		{
			goto IL_034e;
		}
	}
	{
		int32_t L_254 = V_5;
		int32_t L_255 = V_6;
		V_5 = ((int32_t)((int32_t)L_254^(int32_t)L_255));
		int32_t L_256 = V_14;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_256&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_0392;
	}

IL_037a:
	{
		int32_t L_257 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_257, (int32_t)1));
		int32_t L_258 = V_14;
		int32_t L_259 = V_8;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_258, (int32_t)L_259));
		int32_t L_260 = V_14;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_260&(int32_t)((int32_t)31))))), (int32_t)1));
	}

IL_0392:
	{
		int32_t L_261 = V_5;
		int32_t L_262 = V_9;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_263 = V_15;
		int32_t L_264 = V_4;
		NullCheck(L_263);
		int32_t L_265 = L_264;
		int32_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		if ((!(((uint32_t)((int32_t)((int32_t)L_261&(int32_t)L_262))) == ((uint32_t)L_266))))
		{
			goto IL_037a;
		}
	}

IL_039e:
	{
		int32_t L_267 = V_0;
		int32_t L_268 = L_267;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_268, (int32_t)1));
		if (L_268)
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_269 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_269, (int32_t)1));
	}

IL_03ae:
	{
		int32_t L_270 = V_7;
		int32_t L_271 = V_3;
		if ((((int32_t)L_270) <= ((int32_t)L_271)))
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_272 = V_17;
		if (!L_272)
		{
			goto IL_03be;
		}
	}
	{
		int32_t L_273 = V_3;
		if ((!(((uint32_t)L_273) == ((uint32_t)1))))
		{
			goto IL_03c0;
		}
	}

IL_03be:
	{
		return 0;
	}

IL_03c0:
	{
		return ((int32_t)-5);
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_mA613382505106C7A36B855888F39D8532BC68941 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		V_2 = L_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___c0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___tb2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___bb1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___hp3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = InfTree_huft_build_m5DC61DE09FEA8A0E70966CFB7F2D0132902D44C1(L_2, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0035;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_10 = ___z4;
		NullCheck(L_10);
		L_10->set_msg_9(_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_004e;
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-5))))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = ___bb1;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_004e;
		}
	}

IL_003f:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_15 = ___z4;
		NullCheck(L_15);
		L_15->set_msg_9(_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		V_0 = ((int32_t)-3);
	}

IL_004e:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m122BA0C5068F2F9687E458B23CD73AB06D791F1B (int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_2 = L_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___c2;
		int32_t L_3 = ___nl0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_cplens_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_cplext_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___tl5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___bl3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_2;
		int32_t L_11;
		L_11 = InfTree_huft_build_m5DC61DE09FEA8A0E70966CFB7F2D0132902D44C1(L_2, 0, L_3, ((int32_t)257), L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = ___bl3;
		NullCheck(L_13);
		int32_t L_14 = 0;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (L_15)
		{
			goto IL_0062;
		}
	}

IL_0039:
	{
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_004c;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_17 = ___z8;
		NullCheck(L_17);
		L_17->set_msg_9(_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_0060;
	}

IL_004c:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0060;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_19 = ___z8;
		NullCheck(L_19);
		L_19->set_msg_9(_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		V_0 = ((int32_t)-3);
	}

IL_0060:
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0062:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___c2;
		int32_t L_22 = ___nl0;
		int32_t L_23 = ___nd1;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_cpdist_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_cpdext_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = ___td6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ___bd4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_2;
		int32_t L_31;
		L_31 = InfTree_huft_build_m5DC61DE09FEA8A0E70966CFB7F2D0132902D44C1(L_21, L_22, L_23, 0, L_24, L_25, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_008f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = ___bd4;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if (L_35)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_36 = ___nl0;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)257))))
		{
			goto IL_00ce;
		}
	}

IL_008f:
	{
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00a2;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_38 = ___z8;
		NullCheck(L_38);
		L_38->set_msg_9(_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_00cc;
	}

IL_00a2:
	{
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00b8;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_40 = ___z8;
		NullCheck(L_40);
		L_40->set_msg_9(_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		V_0 = ((int32_t)-3);
		goto IL_00cc;
	}

IL_00b8:
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-4))))
		{
			goto IL_00cc;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_42 = ___z8;
		NullCheck(L_42);
		L_42->set_msg_9(_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		V_0 = ((int32_t)-3);
	}

IL_00cc:
	{
		int32_t L_43 = V_0;
		return L_43;
	}

IL_00ce:
	{
		return 0;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mB1977DB03EB28D7F884870C0DD13EC6D1D9EFF96 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = ___tl2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_fixed_tl_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_4 = ___td3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->get_fixed_td_1();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_5);
		return 0;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_mB502C3683EEF4EB8F85F6640125E1D37DD22A6BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_fixed_tl_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_fixed_td_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_cplens_2(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_cplext_3(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_cpdist_4(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6E62871E079CCA5FDCEA08EEB40D272887EE1951_il2cpp_TypeInfo_var))->set_cpdext_5(L_16);
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
// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::inflateEnd(ComponentAce.Compression.Libs.zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_mF0DCA80DC9439C455755E4DCB12B570610D60783 (Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, const RuntimeMethod* method)
{
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_0 = __this->get_blocks_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_1 = __this->get_blocks_7();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = ___z0;
		NullCheck(L_1);
		InfBlocks_free_m3C6B1713D9EA9ED1C94E9E06BC0113E675ADAEFD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		__this->set_blocks_7((InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 *)NULL);
		return 0;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Inflate::inflate(ComponentAce.Compression.Libs.zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_m1EA6F328B08305EA06B72E53EB157C74D1A9AA1E (Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * __this, ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * ___z0, int32_t ___f1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B7_0 = 0;
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = ___z0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_1 = ___z0;
		NullCheck(L_1);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_2 = L_1->get_istate_11();
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_3 = ___z0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_next_in_1();
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0013:
	{
		return ((int32_t)-2);
	}

IL_0016:
	{
		int32_t L_5 = ___f1;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_001f;
	}

IL_001d:
	{
		G_B7_0 = ((int32_t)-5);
	}

IL_001f:
	{
		___f1 = G_B7_0;
		V_0 = ((int32_t)-5);
	}

IL_0024:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_6 = ___z0;
		NullCheck(L_6);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_7 = L_6->get_istate_11();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_mode_0();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_01ea;
			}
			case 3:
			{
				goto IL_0252;
			}
			case 4:
			{
				goto IL_02c2;
			}
			case 5:
			{
				goto IL_0331;
			}
			case 6:
			{
				goto IL_03ab;
			}
			case 7:
			{
				goto IL_03d2;
			}
			case 8:
			{
				goto IL_045c;
			}
			case 9:
			{
				goto IL_04c5;
			}
			case 10:
			{
				goto IL_0536;
			}
			case 11:
			{
				goto IL_05a6;
			}
			case 12:
			{
				goto IL_0653;
			}
			case 13:
			{
				goto IL_0655;
			}
		}
	}
	{
		goto IL_0658;
	}

IL_0073:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_10 = ___z0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_avail_in_3();
		if (L_11)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_007d:
	{
		int32_t L_13 = ___f1;
		V_0 = L_13;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_14 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_avail_in_3();
		NullCheck(L_15);
		L_15->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_17 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_18 = L_17;
		NullCheck(L_18);
		int64_t L_19 = L_18->get_total_in_4();
		NullCheck(L_18);
		L_18->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_20 = ___z0;
		NullCheck(L_20);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_21 = L_20->get_istate_11();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_22 = ___z0;
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = L_22->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_24 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_next_in_index_2();
		V_3 = L_26;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		L_25->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_3;
		NullCheck(L_23);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		uint8_t L_31 = L_30;
		V_3 = L_31;
		NullCheck(L_21);
		L_21->set_method_1(L_31);
		int32_t L_32 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_00f1;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_33 = ___z0;
		NullCheck(L_33);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_34 = L_33->get_istate_11();
		NullCheck(L_34);
		L_34->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_35 = ___z0;
		NullCheck(L_35);
		L_35->set_msg_9(_stringLiteralA840F25536BE8295D00B8780BF11900F5EE6774E);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_36 = ___z0;
		NullCheck(L_36);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_37 = L_36->get_istate_11();
		NullCheck(L_37);
		L_37->set_marker_4(5);
		goto IL_0024;
	}

IL_00f1:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_38 = ___z0;
		NullCheck(L_38);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_39 = L_38->get_istate_11();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_method_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_41 = ___z0;
		NullCheck(L_41);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_42 = L_41->get_istate_11();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_wbits_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_40>>(int32_t)4)), (int32_t)8))) <= ((int32_t)L_43)))
		{
			goto IL_0136;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_44 = ___z0;
		NullCheck(L_44);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_45 = L_44->get_istate_11();
		NullCheck(L_45);
		L_45->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_46 = ___z0;
		NullCheck(L_46);
		L_46->set_msg_9(_stringLiteralDA84EF263557F5F56FABA93B2A6EC89E8F3E0102);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_47 = ___z0;
		NullCheck(L_47);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_48 = L_47->get_istate_11();
		NullCheck(L_48);
		L_48->set_marker_4(5);
		goto IL_0024;
	}

IL_0136:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_49 = ___z0;
		NullCheck(L_49);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_50 = L_49->get_istate_11();
		NullCheck(L_50);
		L_50->set_mode_0(1);
	}

IL_0142:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_51 = ___z0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_avail_in_3();
		if (L_52)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_53 = V_0;
		return L_53;
	}

IL_014c:
	{
		int32_t L_54 = ___f1;
		V_0 = L_54;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_55 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_avail_in_3();
		NullCheck(L_56);
		L_56->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_58 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_59 = L_58;
		NullCheck(L_59);
		int64_t L_60 = L_59->get_total_in_4();
		NullCheck(L_59);
		L_59->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_60, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_61 = ___z0;
		NullCheck(L_61);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = L_61->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_63 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_64 = L_63;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_next_in_index_2();
		V_3 = L_65;
		int32_t L_66 = V_3;
		NullCheck(L_64);
		L_64->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
		int32_t L_67 = V_3;
		NullCheck(L_62);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)((int32_t)L_69&(int32_t)((int32_t)255)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_70 = ___z0;
		NullCheck(L_70);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_71 = L_70->get_istate_11();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_method_1();
		int32_t L_73 = V_1;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_72<<(int32_t)8)), (int32_t)L_73))%(int32_t)((int32_t)31))))
		{
			goto IL_01c7;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_74 = ___z0;
		NullCheck(L_74);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_75 = L_74->get_istate_11();
		NullCheck(L_75);
		L_75->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_76 = ___z0;
		NullCheck(L_76);
		L_76->set_msg_9(_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_77 = ___z0;
		NullCheck(L_77);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_78 = L_77->get_istate_11();
		NullCheck(L_78);
		L_78->set_marker_4(5);
		goto IL_0024;
	}

IL_01c7:
	{
		int32_t L_79 = V_1;
		if (((int32_t)((int32_t)L_79&(int32_t)((int32_t)32))))
		{
			goto IL_01de;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_80 = ___z0;
		NullCheck(L_80);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_81 = L_80->get_istate_11();
		NullCheck(L_81);
		L_81->set_mode_0(7);
		goto IL_0024;
	}

IL_01de:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_82 = ___z0;
		NullCheck(L_82);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_83 = L_82->get_istate_11();
		NullCheck(L_83);
		L_83->set_mode_0(2);
	}

IL_01ea:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_84 = ___z0;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_avail_in_3();
		if (L_85)
		{
			goto IL_01f4;
		}
	}
	{
		int32_t L_86 = V_0;
		return L_86;
	}

IL_01f4:
	{
		int32_t L_87 = ___f1;
		V_0 = L_87;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_88 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_89 = L_88;
		NullCheck(L_89);
		int32_t L_90 = L_89->get_avail_in_3();
		NullCheck(L_89);
		L_89->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_91 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_92 = L_91;
		NullCheck(L_92);
		int64_t L_93 = L_92->get_total_in_4();
		NullCheck(L_92);
		L_92->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_94 = ___z0;
		NullCheck(L_94);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_95 = L_94->get_istate_11();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_96 = ___z0;
		NullCheck(L_96);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = L_96->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_98 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_99 = L_98;
		NullCheck(L_99);
		int32_t L_100 = L_99->get_next_in_index_2();
		V_3 = L_100;
		int32_t L_101 = V_3;
		NullCheck(L_99);
		L_99->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		int32_t L_102 = V_3;
		NullCheck(L_97);
		int32_t L_103 = L_102;
		uint8_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		L_95->set_need_3(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_104&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))&(int32_t)((int32_t)-16777216))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_105 = ___z0;
		NullCheck(L_105);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_106 = L_105->get_istate_11();
		NullCheck(L_106);
		L_106->set_mode_0(3);
	}

IL_0252:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_107 = ___z0;
		NullCheck(L_107);
		int32_t L_108 = L_107->get_avail_in_3();
		if (L_108)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_109 = V_0;
		return L_109;
	}

IL_025c:
	{
		int32_t L_110 = ___f1;
		V_0 = L_110;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_111 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_112 = L_111;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_avail_in_3();
		NullCheck(L_112);
		L_112->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_114 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_115 = L_114;
		NullCheck(L_115);
		int64_t L_116 = L_115->get_total_in_4();
		NullCheck(L_115);
		L_115->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_116, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_117 = ___z0;
		NullCheck(L_117);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_118 = L_117->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_119 = L_118;
		NullCheck(L_119);
		int64_t L_120 = L_119->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_121 = ___z0;
		NullCheck(L_121);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = L_121->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_123 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_124 = L_123;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_next_in_index_2();
		V_3 = L_125;
		int32_t L_126 = V_3;
		NullCheck(L_124);
		L_124->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1)));
		int32_t L_127 = V_3;
		NullCheck(L_122);
		int32_t L_128 = L_127;
		uint8_t L_129 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_119);
		L_119->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_120, (int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_129&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16)))))&(int64_t)((int64_t)((int64_t)((int32_t)16711680))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_130 = ___z0;
		NullCheck(L_130);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_131 = L_130->get_istate_11();
		NullCheck(L_131);
		L_131->set_mode_0(4);
	}

IL_02c2:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_132 = ___z0;
		NullCheck(L_132);
		int32_t L_133 = L_132->get_avail_in_3();
		if (L_133)
		{
			goto IL_02cc;
		}
	}
	{
		int32_t L_134 = V_0;
		return L_134;
	}

IL_02cc:
	{
		int32_t L_135 = ___f1;
		V_0 = L_135;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_136 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_137 = L_136;
		NullCheck(L_137);
		int32_t L_138 = L_137->get_avail_in_3();
		NullCheck(L_137);
		L_137->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_138, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_139 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_140 = L_139;
		NullCheck(L_140);
		int64_t L_141 = L_140->get_total_in_4();
		NullCheck(L_140);
		L_140->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_141, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_142 = ___z0;
		NullCheck(L_142);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_143 = L_142->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_144 = L_143;
		NullCheck(L_144);
		int64_t L_145 = L_144->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_146 = ___z0;
		NullCheck(L_146);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_147 = L_146->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_148 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_149 = L_148;
		NullCheck(L_149);
		int32_t L_150 = L_149->get_next_in_index_2();
		V_3 = L_150;
		int32_t L_151 = V_3;
		NullCheck(L_149);
		L_149->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1)));
		int32_t L_152 = V_3;
		NullCheck(L_147);
		int32_t L_153 = L_152;
		uint8_t L_154 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_144);
		L_144->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_154&(int32_t)((int32_t)255)))<<(int32_t)8))))&(int64_t)((int64_t)((int64_t)((int32_t)65280))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_155 = ___z0;
		NullCheck(L_155);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_156 = L_155->get_istate_11();
		NullCheck(L_156);
		L_156->set_mode_0(5);
	}

IL_0331:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_157 = ___z0;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_avail_in_3();
		if (L_158)
		{
			goto IL_033b;
		}
	}
	{
		int32_t L_159 = V_0;
		return L_159;
	}

IL_033b:
	{
		int32_t L_160 = ___f1;
		V_0 = L_160;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_161 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_162 = L_161;
		NullCheck(L_162);
		int32_t L_163 = L_162->get_avail_in_3();
		NullCheck(L_162);
		L_162->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_163, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_164 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_165 = L_164;
		NullCheck(L_165);
		int64_t L_166 = L_165->get_total_in_4();
		NullCheck(L_165);
		L_165->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_166, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_167 = ___z0;
		NullCheck(L_167);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_168 = L_167->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_169 = L_168;
		NullCheck(L_169);
		int64_t L_170 = L_169->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_171 = ___z0;
		NullCheck(L_171);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = L_171->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_173 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_174 = L_173;
		NullCheck(L_174);
		int32_t L_175 = L_174->get_next_in_index_2();
		V_3 = L_175;
		int32_t L_176 = V_3;
		NullCheck(L_174);
		L_174->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1)));
		int32_t L_177 = V_3;
		NullCheck(L_172);
		int32_t L_178 = L_177;
		uint8_t L_179 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_169);
		L_169->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_179))&(int64_t)((int64_t)((int64_t)((int32_t)255))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_180 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_181 = ___z0;
		NullCheck(L_181);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_182 = L_181->get_istate_11();
		NullCheck(L_182);
		int64_t L_183 = L_182->get_need_3();
		NullCheck(L_180);
		L_180->set_adler_13(L_183);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_184 = ___z0;
		NullCheck(L_184);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_185 = L_184->get_istate_11();
		NullCheck(L_185);
		L_185->set_mode_0(6);
		return 2;
	}

IL_03ab:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_186 = ___z0;
		NullCheck(L_186);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_187 = L_186->get_istate_11();
		NullCheck(L_187);
		L_187->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_188 = ___z0;
		NullCheck(L_188);
		L_188->set_msg_9(_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_189 = ___z0;
		NullCheck(L_189);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_190 = L_189->get_istate_11();
		NullCheck(L_190);
		L_190->set_marker_4(0);
		return ((int32_t)-2);
	}

IL_03d2:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_191 = ___z0;
		NullCheck(L_191);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_192 = L_191->get_istate_11();
		NullCheck(L_192);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_193 = L_192->get_blocks_7();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_194 = ___z0;
		int32_t L_195 = V_0;
		NullCheck(L_193);
		int32_t L_196;
		L_196 = InfBlocks_proc_mE4503151D64C41E77412D9705D3EF30C937C1AE6(L_193, L_194, L_195, /*hidden argument*/NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0408;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_198 = ___z0;
		NullCheck(L_198);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_199 = L_198->get_istate_11();
		NullCheck(L_199);
		L_199->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_200 = ___z0;
		NullCheck(L_200);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_201 = L_200->get_istate_11();
		NullCheck(L_201);
		L_201->set_marker_4(0);
		goto IL_0024;
	}

IL_0408:
	{
		int32_t L_202 = V_0;
		if (L_202)
		{
			goto IL_040d;
		}
	}
	{
		int32_t L_203 = ___f1;
		V_0 = L_203;
	}

IL_040d:
	{
		int32_t L_204 = V_0;
		if ((((int32_t)L_204) == ((int32_t)1)))
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_205 = V_0;
		return L_205;
	}

IL_0413:
	{
		int32_t L_206 = ___f1;
		V_0 = L_206;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_207 = ___z0;
		NullCheck(L_207);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_208 = L_207->get_istate_11();
		NullCheck(L_208);
		InfBlocks_t7EA6A9D09DB240CDF86946F523C6C207BA760AE2 * L_209 = L_208->get_blocks_7();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_210 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_211 = ___z0;
		NullCheck(L_211);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_212 = L_211->get_istate_11();
		NullCheck(L_212);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_213 = L_212->get_was_2();
		NullCheck(L_209);
		InfBlocks_reset_m4A71EBEF90F55E3D15CD90E74C8A7CF0C8B1E69F(L_209, L_210, L_213, /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_214 = ___z0;
		NullCheck(L_214);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_215 = L_214->get_istate_11();
		NullCheck(L_215);
		int32_t L_216 = L_215->get_nowrap_5();
		if (!L_216)
		{
			goto IL_0450;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_217 = ___z0;
		NullCheck(L_217);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_218 = L_217->get_istate_11();
		NullCheck(L_218);
		L_218->set_mode_0(((int32_t)12));
		goto IL_0024;
	}

IL_0450:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_219 = ___z0;
		NullCheck(L_219);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_220 = L_219->get_istate_11();
		NullCheck(L_220);
		L_220->set_mode_0(8);
	}

IL_045c:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_221 = ___z0;
		NullCheck(L_221);
		int32_t L_222 = L_221->get_avail_in_3();
		if (L_222)
		{
			goto IL_0466;
		}
	}
	{
		int32_t L_223 = V_0;
		return L_223;
	}

IL_0466:
	{
		int32_t L_224 = ___f1;
		V_0 = L_224;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_225 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_226 = L_225;
		NullCheck(L_226);
		int32_t L_227 = L_226->get_avail_in_3();
		NullCheck(L_226);
		L_226->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_227, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_228 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_229 = L_228;
		NullCheck(L_229);
		int64_t L_230 = L_229->get_total_in_4();
		NullCheck(L_229);
		L_229->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_231 = ___z0;
		NullCheck(L_231);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_232 = L_231->get_istate_11();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_233 = ___z0;
		NullCheck(L_233);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_234 = L_233->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_235 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_236 = L_235;
		NullCheck(L_236);
		int32_t L_237 = L_236->get_next_in_index_2();
		V_3 = L_237;
		int32_t L_238 = V_3;
		NullCheck(L_236);
		L_236->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1)));
		int32_t L_239 = V_3;
		NullCheck(L_234);
		int32_t L_240 = L_239;
		uint8_t L_241 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_232);
		L_232->set_need_3(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_241&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))&(int32_t)((int32_t)-16777216))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_242 = ___z0;
		NullCheck(L_242);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_243 = L_242->get_istate_11();
		NullCheck(L_243);
		L_243->set_mode_0(((int32_t)9));
	}

IL_04c5:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_244 = ___z0;
		NullCheck(L_244);
		int32_t L_245 = L_244->get_avail_in_3();
		if (L_245)
		{
			goto IL_04cf;
		}
	}
	{
		int32_t L_246 = V_0;
		return L_246;
	}

IL_04cf:
	{
		int32_t L_247 = ___f1;
		V_0 = L_247;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_248 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_249 = L_248;
		NullCheck(L_249);
		int32_t L_250 = L_249->get_avail_in_3();
		NullCheck(L_249);
		L_249->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_250, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_251 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_252 = L_251;
		NullCheck(L_252);
		int64_t L_253 = L_252->get_total_in_4();
		NullCheck(L_252);
		L_252->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_254 = ___z0;
		NullCheck(L_254);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_255 = L_254->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_256 = L_255;
		NullCheck(L_256);
		int64_t L_257 = L_256->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_258 = ___z0;
		NullCheck(L_258);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_259 = L_258->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_260 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_261 = L_260;
		NullCheck(L_261);
		int32_t L_262 = L_261->get_next_in_index_2();
		V_3 = L_262;
		int32_t L_263 = V_3;
		NullCheck(L_261);
		L_261->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)1)));
		int32_t L_264 = V_3;
		NullCheck(L_259);
		int32_t L_265 = L_264;
		uint8_t L_266 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_256);
		L_256->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_257, (int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_266&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16)))))&(int64_t)((int64_t)((int64_t)((int32_t)16711680))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_267 = ___z0;
		NullCheck(L_267);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_268 = L_267->get_istate_11();
		NullCheck(L_268);
		L_268->set_mode_0(((int32_t)10));
	}

IL_0536:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_269 = ___z0;
		NullCheck(L_269);
		int32_t L_270 = L_269->get_avail_in_3();
		if (L_270)
		{
			goto IL_0540;
		}
	}
	{
		int32_t L_271 = V_0;
		return L_271;
	}

IL_0540:
	{
		int32_t L_272 = ___f1;
		V_0 = L_272;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_273 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_274 = L_273;
		NullCheck(L_274);
		int32_t L_275 = L_274->get_avail_in_3();
		NullCheck(L_274);
		L_274->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_275, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_276 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_277 = L_276;
		NullCheck(L_277);
		int64_t L_278 = L_277->get_total_in_4();
		NullCheck(L_277);
		L_277->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_279 = ___z0;
		NullCheck(L_279);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_280 = L_279->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_281 = L_280;
		NullCheck(L_281);
		int64_t L_282 = L_281->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_283 = ___z0;
		NullCheck(L_283);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_284 = L_283->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_285 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_286 = L_285;
		NullCheck(L_286);
		int32_t L_287 = L_286->get_next_in_index_2();
		V_3 = L_287;
		int32_t L_288 = V_3;
		NullCheck(L_286);
		L_286->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_288, (int32_t)1)));
		int32_t L_289 = V_3;
		NullCheck(L_284);
		int32_t L_290 = L_289;
		uint8_t L_291 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		NullCheck(L_281);
		L_281->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_282, (int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291&(int32_t)((int32_t)255)))<<(int32_t)8))))&(int64_t)((int64_t)((int64_t)((int32_t)65280))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_292 = ___z0;
		NullCheck(L_292);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_293 = L_292->get_istate_11();
		NullCheck(L_293);
		L_293->set_mode_0(((int32_t)11));
	}

IL_05a6:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_294 = ___z0;
		NullCheck(L_294);
		int32_t L_295 = L_294->get_avail_in_3();
		if (L_295)
		{
			goto IL_05b0;
		}
	}
	{
		int32_t L_296 = V_0;
		return L_296;
	}

IL_05b0:
	{
		int32_t L_297 = ___f1;
		V_0 = L_297;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_298 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_299 = L_298;
		NullCheck(L_299);
		int32_t L_300 = L_299->get_avail_in_3();
		NullCheck(L_299);
		L_299->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_300, (int32_t)1)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_301 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_302 = L_301;
		NullCheck(L_302);
		int64_t L_303 = L_302->get_total_in_4();
		NullCheck(L_302);
		L_302->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_303, (int64_t)((int64_t)((int64_t)1)))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_304 = ___z0;
		NullCheck(L_304);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_305 = L_304->get_istate_11();
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_306 = L_305;
		NullCheck(L_306);
		int64_t L_307 = L_306->get_need_3();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_308 = ___z0;
		NullCheck(L_308);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_309 = L_308->get_next_in_1();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_310 = ___z0;
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_311 = L_310;
		NullCheck(L_311);
		int32_t L_312 = L_311->get_next_in_index_2();
		V_3 = L_312;
		int32_t L_313 = V_3;
		NullCheck(L_311);
		L_311->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_313, (int32_t)1)));
		int32_t L_314 = V_3;
		NullCheck(L_309);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		NullCheck(L_306);
		L_306->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_307, (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_316))&(int64_t)((int64_t)((int64_t)((int32_t)255))))))));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_317 = ___z0;
		NullCheck(L_317);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_318 = L_317->get_istate_11();
		NullCheck(L_318);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_319 = L_318->get_was_2();
		NullCheck(L_319);
		int32_t L_320 = 0;
		int64_t L_321 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_322 = ___z0;
		NullCheck(L_322);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_323 = L_322->get_istate_11();
		NullCheck(L_323);
		int64_t L_324 = L_323->get_need_3();
		if ((((int32_t)((int32_t)((int32_t)L_321))) == ((int32_t)((int32_t)((int32_t)L_324)))))
		{
			goto IL_0646;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_325 = ___z0;
		NullCheck(L_325);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_326 = L_325->get_istate_11();
		NullCheck(L_326);
		L_326->set_mode_0(((int32_t)13));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_327 = ___z0;
		NullCheck(L_327);
		L_327->set_msg_9(_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_328 = ___z0;
		NullCheck(L_328);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_329 = L_328->get_istate_11();
		NullCheck(L_329);
		L_329->set_marker_4(5);
		goto IL_0024;
	}

IL_0646:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_330 = ___z0;
		NullCheck(L_330);
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_331 = L_330->get_istate_11();
		NullCheck(L_331);
		L_331->set_mode_0(((int32_t)12));
	}

IL_0653:
	{
		return 1;
	}

IL_0655:
	{
		return ((int32_t)-3);
	}

IL_0658:
	{
		return ((int32_t)-2);
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Inflate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__cctor_m7F5F2E16CBCFFB0BBBB94633348382FD321C7624 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		int64_t L_2;
		L_2 = SupportClass_Identity_m1803D8ECDFA9464117EB94A2883BAA7691C67FF3(((int64_t)((int64_t)((int32_t)255))), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)((uint8_t)L_2)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_1;
		int64_t L_4;
		L_4 = SupportClass_Identity_m1803D8ECDFA9464117EB94A2883BAA7691C67FF3(((int64_t)((int64_t)((int32_t)255))), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)((uint8_t)L_4)));
		((Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_StaticFields*)il2cpp_codegen_static_fields_for(Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE_il2cpp_TypeInfo_var))->set_mark_8(L_3);
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
// System.Void ComponentAce.Compression.Libs.zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_m2A40CFE885F4C7C313B9CD6DDB42A7756324EBD4 (StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___static_tree0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___static_tree0;
		__this->set_static_tree_6(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___extra_bits1;
		__this->set_extra_bits_7(L_1);
		int32_t L_2 = ___extra_base2;
		__this->set_extra_base_8(L_2);
		int32_t L_3 = ___elems3;
		__this->set_elems_9(L_3);
		int32_t L_4 = ___max_length4;
		__this->set_max_length_10(L_4);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.StaticTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__cctor_mB1716972094CF94806CADA4432FADF210521BAAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_L_CODES_0(((int32_t)286));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)576));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_static_ltree_1(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_static_dtree_2(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_ltree_1();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_lbits_2();
		int32_t L_8 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_L_CODES_0();
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_9 = (StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F *)il2cpp_codegen_object_new(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		StaticTree__ctor_m2A40CFE885F4C7C313B9CD6DDB42A7756324EBD4(L_9, L_6, L_7, ((int32_t)257), L_8, ((int32_t)15), /*hidden argument*/NULL);
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_static_l_desc_3(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = ((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->get_static_dtree_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_dbits_3();
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_12 = (StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F *)il2cpp_codegen_object_new(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		StaticTree__ctor_m2A40CFE885F4C7C313B9CD6DDB42A7756324EBD4(L_12, L_10, L_11, 0, ((int32_t)30), ((int32_t)15), /*hidden argument*/NULL);
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_static_d_desc_4(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_extra_blbits_4();
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_14 = (StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F *)il2cpp_codegen_object_new(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var);
		StaticTree__ctor_m2A40CFE885F4C7C313B9CD6DDB42A7756324EBD4(L_14, (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL, L_13, 0, ((int32_t)19), 7, /*hidden argument*/NULL);
		((StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F_il2cpp_TypeInfo_var))->set_static_bl_desc_5(L_14);
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
// System.Int64 ComponentAce.Compression.Libs.zlib.SupportClass::Identity(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_Identity_m1803D8ECDFA9464117EB94A2883BAA7691C67FF3 (int64_t ___literal0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___literal0;
		return L_0;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.SupportClass::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___number0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___number0;
		int32_t L_2 = ___bits1;
		return ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)))));
	}

IL_000b:
	{
		int32_t L_3 = ___number0;
		int32_t L_4 = ___bits1;
		int32_t L_5 = ___bits1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)2<<(int32_t)((int32_t)((int32_t)((~L_5))&(int32_t)((int32_t)31)))))));
	}
}
// System.Int64 ComponentAce.Compression.Libs.zlib.SupportClass::URShift(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_URShift_mC0BC764584FD96B1999D4858790BE5A794E6A45F (int64_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___number0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = ___number0;
		int32_t L_2 = ___bits1;
		return ((int64_t)((int64_t)L_1>>(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)63)))));
	}

IL_000c:
	{
		int64_t L_3 = ___number0;
		int32_t L_4 = ___bits1;
		int32_t L_5 = ___bits1;
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)63))))), (int64_t)((int64_t)((int64_t)((int64_t)((int64_t)2))<<(int32_t)((int32_t)((int32_t)((~L_5))&(int32_t)((int32_t)63)))))));
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
// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::d_code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_d_code_m0170777DABE6477AD30D425BE284A316BBD63087 (int32_t ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___dist0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get__dist_code_6();
		int32_t L_2 = ___dist0;
		int32_t L_3;
		L_3 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_2, 7, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get__dist_code_6();
		int32_t L_7 = ___dist0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Tree::gen_bitlen(ComponentAce.Compression.Libs.zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m40C122458BD0ADAAE863B6E6F1BC02F390084882 (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int16_t V_10 = 0;
	int32_t V_11 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_tree_10();
		V_0 = L_0;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_1 = __this->get_stat_desc_12();
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1->get_static_tree_6();
		V_1 = L_2;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_3 = __this->get_stat_desc_12();
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3->get_extra_bits_7();
		V_2 = L_4;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_5 = __this->get_stat_desc_12();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_extra_base_8();
		V_3 = L_6;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_7 = __this->get_stat_desc_12();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_max_length_10();
		V_4 = L_8;
		V_11 = 0;
		V_8 = 0;
		goto IL_0050;
	}

IL_0040:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_9 = ___s0;
		NullCheck(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = L_9->get_bl_count_47();
		int32_t L_11 = V_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)0);
		int32_t L_12 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_13 = V_8;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0040;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = V_0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_15 = ___s0;
		NullCheck(L_15);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_17 = ___s0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_heap_max_50();
		NullCheck(L_16);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)2)), (int32_t)1))), (int16_t)0);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_21 = ___s0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_heap_max_50();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		goto IL_011f;
	}

IL_0079:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_23 = ___s0;
		NullCheck(L_23);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = L_23->get_heap_48();
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = V_0;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)), (int32_t)1));
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)2)), (int32_t)1));
		int16_t L_34 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		int32_t L_35 = V_8;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_37 = V_4;
		V_8 = L_37;
		int32_t L_38 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00a6:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = V_0;
		int32_t L_40 = V_6;
		int32_t L_41 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2)), (int32_t)1))), (int16_t)((int16_t)((int16_t)L_41)));
		int32_t L_42 = V_6;
		int32_t L_43 = __this->get_max_code_11();
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_0119;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_44 = ___s0;
		NullCheck(L_44);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_45 = L_44->get_bl_count_47();
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int16_t* L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)));
		int32_t L_48 = *((int16_t*)L_47);
		*((int16_t*)L_47) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1))));
		V_9 = 0;
		int32_t L_49 = V_6;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_2;
		int32_t L_52 = V_6;
		int32_t L_53 = V_3;
		NullCheck(L_51);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53));
		int32_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_9 = L_55;
	}

IL_00de:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_56 = V_0;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)2));
		int16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_10 = L_59;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_60 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_61 = L_60;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_opt_len_56();
		int16_t L_63 = V_10;
		int32_t L_64 = V_8;
		int32_t L_65 = V_9;
		NullCheck(L_61);
		L_61->set_opt_len_56(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)))))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_66 = V_1;
		if (!L_66)
		{
			goto IL_0119;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_67 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_68 = L_67;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_static_len_57();
		int16_t L_70 = V_10;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_71 = V_1;
		int32_t L_72 = V_6;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)2)), (int32_t)1));
		int16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = V_9;
		NullCheck(L_68);
		L_68->set_static_len_57(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75)))))));
	}

IL_0119:
	{
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_011f:
	{
		int32_t L_77 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		int32_t L_78 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_HEAP_SIZE_1();
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_79 = V_11;
		if (L_79)
		{
			goto IL_0130;
		}
	}
	{
		return;
	}

IL_0130:
	{
		int32_t L_80 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1));
		goto IL_013e;
	}

IL_0138:
	{
		int32_t L_81 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
	}

IL_013e:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_82 = ___s0;
		NullCheck(L_82);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_83 = L_82->get_bl_count_47();
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int16_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if (!L_86)
		{
			goto IL_0138;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_87 = ___s0;
		NullCheck(L_87);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_88 = L_87->get_bl_count_47();
		int32_t L_89 = V_8;
		NullCheck(L_88);
		int16_t* L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)));
		int32_t L_91 = *((int16_t*)L_90);
		*((int16_t*)L_90) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1))));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_92 = ___s0;
		NullCheck(L_92);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_93 = L_92->get_bl_count_47();
		int32_t L_94 = V_8;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_95 = ___s0;
		NullCheck(L_95);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_96 = L_95->get_bl_count_47();
		int32_t L_97 = V_8;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		int16_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)2)))));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_100 = ___s0;
		NullCheck(L_100);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_101 = L_100->get_bl_count_47();
		int32_t L_102 = V_4;
		NullCheck(L_101);
		int16_t* L_103 = ((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)));
		int32_t L_104 = *((int16_t*)L_103);
		*((int16_t*)L_103) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1))));
		int32_t L_105 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)2));
		int32_t L_106 = V_11;
		if ((((int32_t)L_106) > ((int32_t)0)))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_107 = V_4;
		V_8 = L_107;
		goto IL_020b;
	}

IL_0199:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_108 = ___s0;
		NullCheck(L_108);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_109 = L_108->get_bl_count_47();
		int32_t L_110 = V_8;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int16_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_6 = L_112;
		goto IL_0201;
	}

IL_01a6:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_113 = ___s0;
		NullCheck(L_113);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_114 = L_113->get_heap_48();
		int32_t L_115 = V_5;
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)1));
		V_5 = L_116;
		NullCheck(L_114);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_7 = L_118;
		int32_t L_119 = V_7;
		int32_t L_120 = __this->get_max_code_11();
		if ((((int32_t)L_119) > ((int32_t)L_120)))
		{
			goto IL_0201;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_121 = V_0;
		int32_t L_122 = V_7;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_122, (int32_t)2)), (int32_t)1));
		int16_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_8;
		if ((((int32_t)L_124) == ((int32_t)L_125)))
		{
			goto IL_01fb;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_126 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_127 = ___s0;
		NullCheck(L_127);
		int32_t L_128 = L_127->get_opt_len_56();
		int32_t L_129 = V_8;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_130 = V_0;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_131, (int32_t)2)), (int32_t)1));
		int16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_134 = V_0;
		int32_t L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_135, (int32_t)2));
		int16_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_126);
		L_126->set_opt_len_56(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_128)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_129)), (int64_t)((int64_t)((int64_t)L_133)))), (int64_t)((int64_t)((int64_t)L_137)))))))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_138 = V_0;
		int32_t L_139 = V_7;
		int32_t L_140 = V_8;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_139, (int32_t)2)), (int32_t)1))), (int16_t)((int16_t)((int16_t)L_140)));
	}

IL_01fb:
	{
		int32_t L_141 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)1));
	}

IL_0201:
	{
		int32_t L_142 = V_6;
		if (L_142)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_143 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)1));
	}

IL_020b:
	{
		int32_t L_144 = V_8;
		if (L_144)
		{
			goto IL_0199;
		}
	}
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Tree::build_tree(ComponentAce.Compression.Libs.zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m785563FC52B4A8A398EB767AF4B4314DB2DB37EE (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B10_2 = NULL;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_tree_10();
		V_0 = L_0;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_1 = __this->get_stat_desc_12();
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1->get_static_tree_6();
		V_1 = L_2;
		StaticTree_t2BF1F8822D3D3659B84779ADE0B0CEB1569B4F4F * L_3 = __this->get_stat_desc_12();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_elems_9();
		V_2 = L_4;
		V_5 = (-1);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_5 = ___s0;
		NullCheck(L_5);
		L_5->set_heap_len_49(0);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_6 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_HEAP_SIZE_1();
		NullCheck(L_6);
		L_6->set_heap_max_50(L_7);
		V_3 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_12 = ___s0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_14 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_heap_len_49();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_7;
		NullCheck(L_15);
		L_15->set_heap_len_49(L_17);
		int32_t L_18 = V_7;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_5 = L_20;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_21 = ___s0;
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = L_21->get_depth_51();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)0);
		goto IL_0071;
	}

IL_0069:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)), (int32_t)1))), (int16_t)0);
	}

IL_0071:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0075:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00e3;
	}

IL_007b:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_29 = ___s0;
		NullCheck(L_29);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_31 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_32 = L_31;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_heap_len_49();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_34 = V_7;
		NullCheck(L_32);
		L_32->set_heap_len_49(L_34);
		int32_t L_35 = V_7;
		int32_t L_36 = V_5;
		G_B8_0 = L_35;
		G_B8_1 = L_30;
		if ((((int32_t)L_36) < ((int32_t)2)))
		{
			G_B9_0 = L_35;
			G_B9_1 = L_30;
			goto IL_009d;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00a4;
	}

IL_009d:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		V_5 = L_38;
		G_B10_0 = L_38;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00a4:
	{
		int32_t L_39 = G_B10_0;
		V_7 = L_39;
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (int32_t)L_39);
		int32_t L_40 = V_7;
		V_6 = L_40;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_41 = V_0;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2))), (int16_t)1);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_43 = ___s0;
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = L_43->get_depth_51();
		int32_t L_45 = V_6;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)0);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_46 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_opt_len_56();
		NullCheck(L_47);
		L_47->set_opt_len_56(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00e3;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_50 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_static_len_57();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_53 = V_1;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)2)), (int32_t)1));
		int16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		L_51->set_static_len_57(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_56)));
	}

IL_00e3:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_57 = ___s0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_heap_len_49();
		if ((((int32_t)L_58) < ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_59 = V_5;
		__this->set_max_code_11(L_59);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_60 = ___s0;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_heap_len_49();
		V_3 = ((int32_t)((int32_t)L_61/(int32_t)2));
		goto IL_010b;
	}

IL_00ff:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_62 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_63 = V_0;
		int32_t L_64 = V_3;
		NullCheck(L_62);
		Deflate_pqdownheap_mECA2F4629E9BDBA9C898FA8B7755602E46139CBE(L_62, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
	}

IL_010b:
	{
		int32_t L_66 = V_3;
		if ((((int32_t)L_66) >= ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_67 = V_2;
		V_6 = L_67;
	}

IL_0112:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_68 = ___s0;
		NullCheck(L_68);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_68->get_heap_48();
		NullCheck(L_69);
		int32_t L_70 = 1;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_3 = L_71;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_72 = ___s0;
		NullCheck(L_72);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = L_72->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_74 = ___s0;
		NullCheck(L_74);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = L_74->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_76 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_heap_len_49();
		V_7 = L_78;
		int32_t L_79 = V_7;
		NullCheck(L_77);
		L_77->set_heap_len_49(((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)));
		int32_t L_80 = V_7;
		NullCheck(L_75);
		int32_t L_81 = L_80;
		int32_t L_82 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_82);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_83 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_84 = V_0;
		NullCheck(L_83);
		Deflate_pqdownheap_mECA2F4629E9BDBA9C898FA8B7755602E46139CBE(L_83, L_84, 1, /*hidden argument*/NULL);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_85 = ___s0;
		NullCheck(L_85);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = L_85->get_heap_48();
		NullCheck(L_86);
		int32_t L_87 = 1;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_4 = L_88;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_89 = ___s0;
		NullCheck(L_89);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = L_89->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_91 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_92 = L_91;
		NullCheck(L_92);
		int32_t L_93 = L_92->get_heap_max_50();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_7;
		NullCheck(L_92);
		L_92->set_heap_max_50(L_94);
		int32_t L_95 = V_7;
		int32_t L_96 = V_3;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_97 = ___s0;
		NullCheck(L_97);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_98 = L_97->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_99 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_100 = L_99;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_heap_max_50();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1));
		int32_t L_102 = V_7;
		NullCheck(L_100);
		L_100->set_heap_max_50(L_102);
		int32_t L_103 = V_7;
		int32_t L_104 = V_4;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)L_104);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_105 = V_0;
		int32_t L_106 = V_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_107 = V_0;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_108, (int32_t)2));
		int16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_111 = V_0;
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_112, (int32_t)2));
		int16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)2))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_114)))));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_115 = ___s0;
		NullCheck(L_115);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_116 = L_115->get_depth_51();
		int32_t L_117 = V_6;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_118 = ___s0;
		NullCheck(L_118);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119 = L_118->get_depth_51();
		int32_t L_120 = V_3;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_123 = ___s0;
		NullCheck(L_123);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_124 = L_123->get_depth_51();
		int32_t L_125 = V_4;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint8_t L_128;
		L_128 = Math_Max_mCA27A75C0677CDAF214D29620E7F508A9C6FB30A(L_122, L_127, /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_129 = V_0;
		int32_t L_130 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = V_6;
		int16_t L_134 = ((int16_t)((int16_t)L_133));
		V_8 = L_134;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1))), (int16_t)L_134);
		int16_t L_135 = V_8;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_130, (int32_t)2)), (int32_t)1))), (int16_t)L_135);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_136 = ___s0;
		NullCheck(L_136);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_137 = L_136->get_heap_48();
		int32_t L_138 = V_6;
		int32_t L_139 = L_138;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_139);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_140 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_141 = V_0;
		NullCheck(L_140);
		Deflate_pqdownheap_mECA2F4629E9BDBA9C898FA8B7755602E46139CBE(L_140, L_141, 1, /*hidden argument*/NULL);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_142 = ___s0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_heap_len_49();
		if ((((int32_t)L_143) >= ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_144 = ___s0;
		NullCheck(L_144);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = L_144->get_heap_48();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_146 = ___s0;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = L_147->get_heap_max_50();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		int32_t L_149 = V_7;
		NullCheck(L_147);
		L_147->set_heap_max_50(L_149);
		int32_t L_150 = V_7;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_151 = ___s0;
		NullCheck(L_151);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = L_151->get_heap_48();
		NullCheck(L_152);
		int32_t L_153 = 1;
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (int32_t)L_154);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_155 = ___s0;
		Tree_gen_bitlen_m40C122458BD0ADAAE863B6E6F1BC02F390084882(__this, L_155, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_156 = V_0;
		int32_t L_157 = V_5;
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_158 = ___s0;
		NullCheck(L_158);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_159 = L_158->get_bl_count_47();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		Tree_gen_codes_mD795D4562454C33EE91583D588A0DB14E9C3C3BE(L_156, L_157, L_159, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_mD795D4562454C33EE91583D588A0DB14E9C3C3BE (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = (int16_t)0;
		V_2 = 1;
		goto IL_0021;
	}

IL_000e:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = V_0;
		int32_t L_2 = V_2;
		int16_t L_3 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___bl_count2;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int16_t L_8 = ((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7))<<(int32_t)1))));
		V_1 = L_8;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int16_t)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)15))))
		{
			goto IL_000e;
		}
	}
	{
		V_3 = 0;
		goto IL_005c;
	}

IL_002a:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_11 = ___tree0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)), (int32_t)1));
		int16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = ___tree0;
		int32_t L_17 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = V_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int16_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((int16_t*)L_20);
		V_5 = (int16_t)L_21;
		int16_t L_22 = V_5;
		*((int16_t*)L_20) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1))));
		int16_t L_23 = V_5;
		int32_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = Tree_bi_reverse_mB6EB1A392792A1D84BCDE5F01446694B7FF5E5D6(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2))), (int16_t)((int16_t)((int16_t)L_25)));
	}

IL_0058:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = ___max_code1;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mB6EB1A392792A1D84BCDE5F01446694B7FF5E5D6 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___code0;
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)1))));
		int32_t L_2 = ___code0;
		int32_t L_3;
		L_3 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_2, 1, /*hidden argument*/NULL);
		___code0 = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		int32_t L_5 = ___len1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		___len1 = L_6;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = SupportClass_URShift_m74742D6418C15C1CCCA26C48043BDCAA341B6FDE(L_7, 1, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_mC82A4E2F0B806436AA7FB77F65F12B2FA9C7F4EA (Tree_t41355ACB403457F46C8722BE5800B70589101E81 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.Tree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__cctor_mA404F2BA3EDA4BCBF8E56231B6DAC7C7BA5ECDE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_L_CODES_0(((int32_t)286));
		int32_t L_0 = ((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->get_L_CODES_0();
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_HEAP_SIZE_1(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_extra_lbits_2(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_extra_dbits_3(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_extra_blbits_4(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_bl_order_5(L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set__dist_code_6(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_17, L_18, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set__length_code_7(L_17);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = L_19;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_base_length_8(L_20);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = L_22;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1FFEB21932C8DBECC0FC6CF8959AB74BDBD19DD6____5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		((Tree_t41355ACB403457F46C8722BE5800B70589101E81_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t41355ACB403457F46C8722BE5800B70589101E81_il2cpp_TypeInfo_var))->set_base_dist_9(L_23);
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
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_InitBlock_m51BEC88ACCDE6C8FE5C35E13DF30083591A7FFB1 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_flush_Renamed_Field_6(0);
		int32_t L_0 = __this->get_bufsize_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_7(L_1);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m162D9E0228668E443327A393BB1FC040B9CC1EAE (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___out_Renamed0, int32_t ___level1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 *)il2cpp_codegen_object_new(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_il2cpp_TypeInfo_var);
		ZStream__ctor_mCC583FBAA01ED86605F51E70C716639915A8C0A9(L_0, /*hidden argument*/NULL);
		__this->set_z_4(L_0);
		__this->set_bufsize_5(((int32_t)4096));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_buf1_8(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		ZOutputStream_InitBlock_m51BEC88ACCDE6C8FE5C35E13DF30083591A7FFB1(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___out_Renamed0;
		__this->set_out_Renamed_10(L_2);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_3 = __this->get_z_4();
		int32_t L_4 = ___level1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = ZStream_deflateInit_mE94A552ED40C352E3317B05286081DECCEDAA02D(L_3, L_4, /*hidden argument*/NULL);
		__this->set_compress_9((bool)1);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::WriteByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_mEA8E26866218DE8F4A52DED3436CAD13FB97EA97 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, int32_t ___b0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buf1_8();
		int32_t L_1 = ___b0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_1)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buf1_8();
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, 1);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_m8FC489D6C3DAA5AA1B2F7E4853748FA8A73106B1 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___b0;
		ZOutputStream_WriteByte_mEA8E26866218DE8F4A52DED3436CAD13FB97EA97(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Write_mC770961C5BEA43F6B630F1770D38ACA0F2289BD2 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___b10, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	String_t* G_B11_0 = NULL;
	{
		int32_t L_0 = ___len2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___b10;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		V_1 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___b10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___b10;
		NullCheck(L_5);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_6 = __this->get_z_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
		NullCheck(L_6);
		L_6->set_next_in_1(L_7);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_8 = __this->get_z_4();
		int32_t L_9 = ___off1;
		NullCheck(L_8);
		L_8->set_next_in_index_2(L_9);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_10 = __this->get_z_4();
		int32_t L_11 = ___len2;
		NullCheck(L_10);
		L_10->set_avail_in_3(L_11);
	}

IL_003d:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_12 = __this->get_z_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = __this->get_buf_7();
		NullCheck(L_12);
		L_12->set_next_out_5(L_13);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_14 = __this->get_z_4();
		NullCheck(L_14);
		L_14->set_next_out_index_6(0);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_15 = __this->get_z_4();
		int32_t L_16 = __this->get_bufsize_5();
		NullCheck(L_15);
		L_15->set_avail_out_7(L_16);
		bool L_17 = __this->get_compress_9();
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_18 = __this->get_z_4();
		int32_t L_19 = __this->get_flush_Renamed_Field_6();
		NullCheck(L_18);
		int32_t L_20;
		L_20 = ZStream_deflate_mBFC342FE52280E8F36544C620BB5A894704CF128(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0099;
	}

IL_0087:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_21 = __this->get_z_4();
		int32_t L_22 = __this->get_flush_Renamed_Field_6();
		NullCheck(L_21);
		int32_t L_23;
		L_23 = ZStream_inflate_mE5065E56AC04A90EB1242A012854869A5C7AFFCD(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0099:
	{
		int32_t L_24 = V_0;
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00cf;
		}
	}
	{
		bool L_26 = __this->get_compress_9();
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		G_B11_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_00b4;
	}

IL_00af:
	{
		G_B11_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_00b4:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_27 = __this->get_z_4();
		NullCheck(L_27);
		String_t* L_28 = L_27->get_msg_9();
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B11_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_28, /*hidden argument*/NULL);
		ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 * L_30 = (ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22_il2cpp_TypeInfo_var)));
		ZStreamException__ctor_m398F2F46F47B77810C066A7AA49D4162BC9F6365(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZOutputStream_Write_mC770961C5BEA43F6B630F1770D38ACA0F2289BD2_RuntimeMethod_var)));
	}

IL_00cf:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31 = __this->get_out_Renamed_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_buf_7();
		int32_t L_33 = __this->get_bufsize_5();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_34 = __this->get_z_4();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_avail_out_7();
		NullCheck(L_31);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_35)));
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_36 = __this->get_z_4();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_avail_in_3();
		if ((((int32_t)L_37) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_38 = __this->get_z_4();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_avail_out_7();
		if (!L_39)
		{
			goto IL_003d;
		}
	}
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_finish_m0E96F16A7267AA4567BC8C4D135A6397EE07E180 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B8_0 = NULL;

IL_0000:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_0 = __this->get_z_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buf_7();
		NullCheck(L_0);
		L_0->set_next_out_5(L_1);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_2 = __this->get_z_4();
		NullCheck(L_2);
		L_2->set_next_out_index_6(0);
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_3 = __this->get_z_4();
		int32_t L_4 = __this->get_bufsize_5();
		NullCheck(L_3);
		L_3->set_avail_out_7(L_4);
		bool L_5 = __this->get_compress_9();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_6 = __this->get_z_4();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ZStream_deflate_mBFC342FE52280E8F36544C620BB5A894704CF128(L_6, 4, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0052;
	}

IL_0045:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_8 = __this->get_z_4();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ZStream_inflate_mE5065E56AC04A90EB1242A012854869A5C7AFFCD(L_8, 4, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0052:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		bool L_12 = __this->get_compress_9();
		if (L_12)
		{
			goto IL_0068;
		}
	}
	{
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_006d;
	}

IL_0068:
	{
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_006d:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_13 = __this->get_z_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_msg_9();
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B8_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_14, /*hidden argument*/NULL);
		ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 * L_16 = (ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22_il2cpp_TypeInfo_var)));
		ZStreamException__ctor_m398F2F46F47B77810C066A7AA49D4162BC9F6365(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZOutputStream_finish_m0E96F16A7267AA4567BC8C4D135A6397EE07E180_RuntimeMethod_var)));
	}

IL_0088:
	{
		int32_t L_17 = __this->get_bufsize_5();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_18 = __this->get_z_4();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_avail_out_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_19))) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = __this->get_out_Renamed_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_buf_7();
		int32_t L_22 = __this->get_bufsize_5();
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_23 = __this->get_z_4();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_avail_out_7();
		NullCheck(L_20);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_24)));
	}

IL_00c1:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_25 = __this->get_z_4();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_avail_in_3();
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_0000;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_27 = __this->get_z_4();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_avail_out_7();
		if (!L_28)
		{
			goto IL_0000;
		}
	}
	{
	}

IL_00e3:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, __this);
		goto IL_00ee;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00eb;
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Object)
		goto IL_00ee;
	} // end catch (depth: 1)

IL_00ee:
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::end()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_end_mCE38AE11B7795206BCD5662DFB00FAA4E619E192 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_compress_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_1 = __this->get_z_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZStream_deflateEnd_m4A0DA02A0B83AA69396E08EF0204A399DEA6BD9A(L_1, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0016:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_3 = __this->get_z_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ZStream_inflateEnd_mFAF89E1C1FEF24569BC3051AE757D630A143D9EF(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * L_5 = __this->get_z_4();
		NullCheck(L_5);
		ZStream_free_mCBD9AB383DF91D64CE2810AFB137285A7E4497CC(L_5, /*hidden argument*/NULL);
		__this->set_z_4((ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 *)NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Dispose_m2885A7A04E9605A3146D7567A9AD870DDA79B597 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			VirtActionInvoker0::Invoke(25 /* System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::finish() */, __this);
			IL2CPP_LEAVE(0x27, FINALLY_000e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_000b;
			throw e;
		}

CATCH_000b:
		{ // begin catch(System.Object)
			IL2CPP_LEAVE(0x27, FINALLY_000e);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000e;
	}

FINALLY_000e:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(26 /* System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::end() */, __this);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_out_Renamed_10();
		NullCheck(L_1);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_1, /*hidden argument*/NULL);
		__this->set_out_Renamed_10((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		IL2CPP_END_FINALLY(14)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(14)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27, IL_0027)
	}

IL_0027:
	{
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Flush_m2F6284F967720665CC75A99B3C4429FAFC40099C (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_out_Renamed_10();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZOutputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZOutputStream_Read_m0C43157ED5BA9180C5B44B502D9053F150D1B1FC (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Int64 ComponentAce.Compression.Libs.zlib.ZOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_Seek_mB533A929C78C3C2457B7EBEC0800821699A2C0CC (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Boolean ComponentAce.Compression.Libs.zlib.ZOutputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanRead_m45E86577786E314405C73781CA049703D3E6B7A7 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean ComponentAce.Compression.Libs.zlib.ZOutputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanSeek_m835D04F0F2CE6D2AF04790B9D927E1BE585E55B4 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean ComponentAce.Compression.Libs.zlib.ZOutputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanWrite_mC4C5F53A1402A66CCEB0DF299F58F8D0AFE33F3C (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int64 ComponentAce.Compression.Libs.zlib.ZOutputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_Length_m8D4E8B22CB29359D5B00BE396A8C5810ED570AA4 (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Int64 ComponentAce.Compression.Libs.zlib.ZOutputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_Position_mE074373AD5BC5801D78B1167961B61E4F8C82EBA (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, const RuntimeMethod* method)
{
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZOutputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_set_Position_mD4AB212839A2EC95A635502C553D29897D29B1DE (ZOutputStream_tA1961C8B8D3BB4A554876704A8AEB3EBD56D2CC4 * __this, int64_t ___value0, const RuntimeMethod* method)
{
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
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_mE5065E56AC04A90EB1242A012854869A5C7AFFCD (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___f0, const RuntimeMethod* method)
{
	{
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_0 = __this->get_istate_11();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_1 = __this->get_istate_11();
		int32_t L_2 = ___f0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Inflate_inflate_m1EA6F328B08305EA06B72E53EB157C74D1A9AA1E(L_1, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_mFAF89E1C1FEF24569BC3051AE757D630A143D9EF (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method)
{
	{
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_0 = __this->get_istate_11();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE * L_1 = __this->get_istate_11();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Inflate_inflateEnd_mF0DCA80DC9439C455755E4DCB12B570610D60783(L_1, __this, /*hidden argument*/NULL);
		__this->set_istate_11((Inflate_t79F78864DA5EA8F77553F08350071C4832F60CDE *)NULL);
		return L_2;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mE94A552ED40C352E3317B05286081DECCEDAA02D (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = ZStream_deflateInit_m239AC8B4409580BD731561D543D61F2C3F6A5AA5(__this, L_0, ((int32_t)15), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m239AC8B4409580BD731561D543D61F2C3F6A5AA5 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_0 = (Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 *)il2cpp_codegen_object_new(Deflate_t1E8313533D58AB84BF7166A0F45273505763C953_il2cpp_TypeInfo_var);
		Deflate__ctor_mED7B5E32F4FB97669977239FCD527F14AB1C0368(L_0, /*hidden argument*/NULL);
		__this->set_dstate_10(L_0);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_1 = __this->get_dstate_10();
		int32_t L_2 = ___level0;
		int32_t L_3 = ___bits1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Deflate_deflateInit_mDD25807DB36282975349F585D3AA8F9FB16FB9FF(L_1, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_mBFC342FE52280E8F36544C620BB5A894704CF128 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_0 = __this->get_dstate_10();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_1 = __this->get_dstate_10();
		int32_t L_2 = ___flush0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Deflate_deflate_mB8E67AB0475DCDFB67D43E9E88B79224BE92D72B(L_1, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m4A0DA02A0B83AA69396E08EF0204A399DEA6BD9A (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method)
{
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_0 = __this->get_dstate_10();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_1 = __this->get_dstate_10();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Deflate_deflateEnd_m40591DA2B91FE54846F5195D59E0FEF613ABEF4E(L_1, /*hidden argument*/NULL);
		__this->set_dstate_10((Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 *)NULL);
		return L_2;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_flush_pending_m2F253169130341DE2A6138F72E323FCC00AE88A3 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_0 = __this->get_dstate_10();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pending_10();
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_avail_out_7();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = __this->get_avail_out_7();
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_6 = __this->get_dstate_10();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6->get_pending_buf_7();
		NullCheck(L_7);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_8 = __this->get_dstate_10();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_pending_out_9();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)L_9)))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_next_out_5();
		NullCheck(L_10);
		int32_t L_11 = __this->get_next_out_index_6();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_12 = __this->get_dstate_10();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_pending_buf_7();
		NullCheck(L_13);
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_14 = __this->get_dstate_10();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_pending_out_9();
		int32_t L_16 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_next_out_5();
		NullCheck(L_17);
		int32_t L_18 = __this->get_next_out_index_6();
		int32_t L_19 = V_0;
	}

IL_0078:
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_20 = __this->get_dstate_10();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = L_20->get_pending_buf_7();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_22 = __this->get_dstate_10();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_pending_out_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_next_out_5();
		int32_t L_25 = __this->get_next_out_index_6();
		int32_t L_26 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_21, L_23, (RuntimeArray *)(RuntimeArray *)L_24, L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = __this->get_next_out_index_6();
		int32_t L_28 = V_0;
		__this->set_next_out_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_29 = __this->get_dstate_10();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_pending_out_9();
		int32_t L_32 = V_0;
		NullCheck(L_30);
		L_30->set_pending_out_9(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)));
		int64_t L_33 = __this->get_total_out_8();
		int32_t L_34 = V_0;
		__this->set_total_out_8(((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)((int64_t)((int64_t)L_34)))));
		int32_t L_35 = __this->get_avail_out_7();
		int32_t L_36 = V_0;
		__this->set_avail_out_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_37 = __this->get_dstate_10();
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_pending_10();
		int32_t L_40 = V_0;
		NullCheck(L_38);
		L_38->set_pending_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_41 = __this->get_dstate_10();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_pending_10();
		if (L_42)
		{
			goto IL_010a;
		}
	}
	{
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_43 = __this->get_dstate_10();
		NullCheck(L_43);
		L_43->set_pending_out_9(0);
	}

IL_010a:
	{
		return;
	}
}
// System.Int32 ComponentAce.Compression.Libs.zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_read_buf_mC5F146889D2E448DFCC3050CB18FE4ED2057CF8A (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_avail_in_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = __this->get_avail_in_3();
		int32_t L_6 = V_0;
		__this->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		Deflate_t1E8313533D58AB84BF7166A0F45273505763C953 * L_7 = __this->get_dstate_10();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_noheader_11();
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_9 = __this->get__adler_14();
		int64_t L_10 = __this->get_adler_13();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_next_in_1();
		int32_t L_12 = __this->get_next_in_index_2();
		int32_t L_13 = V_0;
		NullCheck(L_9);
		int64_t L_14;
		L_14 = Adler32_adler32_m87580CF1F836450805AE7EC37226D42B5721AC29(L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->set_adler_13(L_14);
	}

IL_0051:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_next_in_1();
		int32_t L_16 = __this->get_next_in_index_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___buf0;
		int32_t L_18 = ___start1;
		int32_t L_19 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_15, L_16, (RuntimeArray *)(RuntimeArray *)L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_next_in_index_2();
		int32_t L_21 = V_0;
		__this->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)));
		int64_t L_22 = __this->get_total_in_4();
		int32_t L_23 = V_0;
		__this->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)((int64_t)L_23)))));
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_mCBD9AB383DF91D64CE2810AFB137285A7E4497CC (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_next_in_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_next_out_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_msg_9((String_t*)NULL);
		__this->set__adler_14((Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC *)NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mCC583FBAA01ED86605F51E70C716639915A8C0A9 (ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC * L_0 = (Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC *)il2cpp_codegen_object_new(Adler32_t00D16535E59477DF2E347F8008698D65DF5F8CCC_il2cpp_TypeInfo_var);
		Adler32__ctor_m27FACD209599E6A1D0B81EFF9A5635D61227035C(L_0, /*hidden argument*/NULL);
		__this->set__adler_14(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ComponentAce.Compression.Libs.zlib.ZStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__cctor_m662A658208BE4FD33042565BD0879AC8B0BCB180 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_StaticFields*)il2cpp_codegen_static_fields_for(ZStream_tEEF235F59C78D94816ADE0DD810DD617C6ADA1E5_il2cpp_TypeInfo_var))->set_DEF_WBITS_0(((int32_t)15));
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
// System.Void ComponentAce.Compression.Libs.zlib.ZStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStreamException__ctor_m398F2F46F47B77810C066A7AA49D4162BC9F6365 (ZStreamException_t31AD5A3DAABDB59D5FDD87C6A92300C660082F22 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(__this, L_0, /*hidden argument*/NULL);
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
// System.Void ComponentAce.Compression.Libs.zlib.Deflate/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m76AA89CEC6FF8033F8B547AB4C1DF5EC065DBC01 (Config_t6E940392BEA75CF1FFCEFA37197F09B3C3AE5EBB * __this, int32_t ___good_length0, int32_t ___max_lazy1, int32_t ___nice_length2, int32_t ___max_chain3, int32_t ___func4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___good_length0;
		__this->set_good_length_0(L_0);
		int32_t L_1 = ___max_lazy1;
		__this->set_max_lazy_1(L_1);
		int32_t L_2 = ___nice_length2;
		__this->set_nice_length_2(L_2);
		int32_t L_3 = ___max_chain3;
		__this->set_max_chain_3(L_3);
		int32_t L_4 = ___func4;
		__this->set_func_4(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

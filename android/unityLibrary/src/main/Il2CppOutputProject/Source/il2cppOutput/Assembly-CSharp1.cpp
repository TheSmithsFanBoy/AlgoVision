#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
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

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[]
struct FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[]
struct FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.PostProcessing.ColorGradingCurve
struct ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.PostProcessing.MaterialFactory
struct MaterialFactory_tDA1EA5AC6DA15ACEAAFAB591ABF277B301D5CFEF;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511;
// UnityEngine.PostProcessing.PostProcessingProfile
struct PostProcessingProfile_t40876A4AEC07889C7A53D5BAF6EC4CBDF97294CA;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.PostProcessing.RenderTextureFactory
struct RenderTextureFactory_tC0F5415DC3D004841099F38EA561948A66391669;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A;
// UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6;
// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06;
// CharacterStats_SO/CharLevelUps
struct CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87;
// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05;
// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455;
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0;
IL2CPP_EXTERN_C String_t* _stringLiteral01EEFE10841B46CB6FB75BF604199224F4640C8D;
IL2CPP_EXTERN_C String_t* _stringLiteral08929B9ED7690C81F8839C7D7C9D227261D64D44;
IL2CPP_EXTERN_C String_t* _stringLiteral09B6A7A347CF016F5EAEBCCCA4B381E3872CAA25;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABC47E18BBBA62023AFCDC65FB373540EC6BF78;
IL2CPP_EXTERN_C String_t* _stringLiteral0C547D50C7657A3E74FC8F05ECB3A705BB16AF2C;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFFA37623A57E2A7D5D752E132154E4A0E611C5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13;
IL2CPP_EXTERN_C String_t* _stringLiteral1177AFB3FEC171E4C3D66CFA8A075871FE9E648D;
IL2CPP_EXTERN_C String_t* _stringLiteral168BE02F55BEC62F2CBB676FC5148C9030374A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral170A4AE79F1E4ADE325EA6DCA89AB7E5C651BA04;
IL2CPP_EXTERN_C String_t* _stringLiteral17F59F5DA049CA3DBBEDEBBFA1AFFD28ADF557EE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C8080E116C20514B2112FEEDD2DB6033035CD1F;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3B6D26C9FEAFD71C5EC58AA40937539812DDB4;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2BF2CBC6759AB5393720109E97F6283881047F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8F51CAB22E1669CF2F07CE05CA2FDE7ABC1428;
IL2CPP_EXTERN_C String_t* _stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0;
IL2CPP_EXTERN_C String_t* _stringLiteral26FADA9B1828B8A1F93B682B636D8F2C9A13D643;
IL2CPP_EXTERN_C String_t* _stringLiteral2C35A9E1D63BDFE31357BFFC1A07B829C42B1CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD5B1370CF2F8F43EC71C1073B2BF182AA03512;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8F3AB46F1B7810843A0661D45C8D513AACCEA5;
IL2CPP_EXTERN_C String_t* _stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF;
IL2CPP_EXTERN_C String_t* _stringLiteral2F80F1A560C9094CDF248E6F2A7711192360BA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral30E83E1ADF2EB17E393A95B8B12CB0F5EBFBEF02;
IL2CPP_EXTERN_C String_t* _stringLiteral32404EE0FBFFCF67870620BA76FD49CDC93A1ECC;
IL2CPP_EXTERN_C String_t* _stringLiteral3522B9AFA3A138B20B0C0E0D23B1DFBD6446CF30;
IL2CPP_EXTERN_C String_t* _stringLiteral363D39718A9D73FEF0B11D1441CAC167EAB94FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral37C66F1E07408490FD67264D63049F2127B2E5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral38C014502CF12F01EDD6067705C836D07CC34E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB1757516AA276FCFC0ECDF453B81D676A6D007;
IL2CPP_EXTERN_C String_t* _stringLiteral3C435E39DBD66EBDFEDEFCF4E7E22DEEC0DA7197;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral3E918502AC81EC5515FFE14D0A95F18A73D4E4A9;
IL2CPP_EXTERN_C String_t* _stringLiteral4120C63DF2CB5D10AF085F7BA79E9A5354CF4066;
IL2CPP_EXTERN_C String_t* _stringLiteral436900D1A2E39E7BD7D77DFEE81E6BC285533EEC;
IL2CPP_EXTERN_C String_t* _stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48;
IL2CPP_EXTERN_C String_t* _stringLiteral44791DE40F61E0BC6A155FA3183DBF85BC0502CA;
IL2CPP_EXTERN_C String_t* _stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral45A901D64EB16ED9C959A32FE9177F77B130D3D5;
IL2CPP_EXTERN_C String_t* _stringLiteral4806A9FC9543F6C5064C7C074AB56C935831001D;
IL2CPP_EXTERN_C String_t* _stringLiteral4960C2A15E11FC607D4B2467D451CF7957F327F1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4C5FEFA9274E21330B518F9DA28B2307A0201AD3;
IL2CPP_EXTERN_C String_t* _stringLiteral517E163132B54A00BCCA2092E103F1E35498D10A;
IL2CPP_EXTERN_C String_t* _stringLiteral51E7EA98EF27D0C177A501478F6A636D57A19261;
IL2CPP_EXTERN_C String_t* _stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C;
IL2CPP_EXTERN_C String_t* _stringLiteral580FF00AF39241FCC52DE178197DF1D0E156D501;
IL2CPP_EXTERN_C String_t* _stringLiteral5923A6AD0A568F96C8D42C5DA7943F72B98F51B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5930AFD1ACD024B267F90D4A56FAA0AB673A7AD6;
IL2CPP_EXTERN_C String_t* _stringLiteral5A636D3474E30D21279F6316BB7FC73A911D7056;
IL2CPP_EXTERN_C String_t* _stringLiteral5AB39677552FCD6558823F660419D8B2162C026D;
IL2CPP_EXTERN_C String_t* _stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE6B345EE118A688CADF5446F3418831F408C73;
IL2CPP_EXTERN_C String_t* _stringLiteral63E247A491FEB5DF5D6FD7ECFCFA3CB28312BC2B;
IL2CPP_EXTERN_C String_t* _stringLiteral645AE095F7A4B844B8CED6F24B9C81ECE9092B80;
IL2CPP_EXTERN_C String_t* _stringLiteral64BE48282DCEB20CE541FEB37C063004F8924884;
IL2CPP_EXTERN_C String_t* _stringLiteral65B9E8C3DC871457E7A11CA58A18EA660E8C9336;
IL2CPP_EXTERN_C String_t* _stringLiteral69EFC967936800473A4F9876FAAA3EEADC9362FE;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABD4FFEDAE015BEB98F08C6F72586CCBF47BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9D82938DF6CE81F4157543EF9CCB9BBBDA048D;
IL2CPP_EXTERN_C String_t* _stringLiteral71917F24ABD74D7747692EA68997AE987848F27E;
IL2CPP_EXTERN_C String_t* _stringLiteral7232BE36BC5BA84B22E04DF99D31E36D781390EF;
IL2CPP_EXTERN_C String_t* _stringLiteral72A81BBC1B10C50354AAFBEACD5309BF11A88AD5;
IL2CPP_EXTERN_C String_t* _stringLiteral73B6A2E24AE83D812DC1B1BF55242CAD0B69628F;
IL2CPP_EXTERN_C String_t* _stringLiteral7708E3CFCAC428CAD92AA2C5021283430C7A9820;
IL2CPP_EXTERN_C String_t* _stringLiteral78C67E2A4385F588BA2DCEE159691DCE1EC544D1;
IL2CPP_EXTERN_C String_t* _stringLiteral80CD72054E38949B8214054B414EFCC7B81F4ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral80FC6F37250B72E4F2D73E1B70CEFFE0305C6E4C;
IL2CPP_EXTERN_C String_t* _stringLiteral8213E4C3B6E9445B00E7EB6FF56FAFEC78C820CC;
IL2CPP_EXTERN_C String_t* _stringLiteral82CC48F8FF2BF0BD5A479EE5B8AA3D122619F884;
IL2CPP_EXTERN_C String_t* _stringLiteral875A4C409EA727D1AAD538D85FE6E95841B1F090;
IL2CPP_EXTERN_C String_t* _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F;
IL2CPP_EXTERN_C String_t* _stringLiteral8851B3E0459D17FA369D489800766E9D5AC4718B;
IL2CPP_EXTERN_C String_t* _stringLiteral888F402019BA6B7B75F107FF277905FC91B7D4A5;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1F9317F0F6CD38539297951AC9FF62130D82D9;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC8A664CEEC38294CB2CC344E1CC69CCE793597;
IL2CPP_EXTERN_C String_t* _stringLiteral90E32CA8EA0B33AF3444AFE2F6F95A408894E0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral92215799B6EAE69660277473BDAC8B35E5597CC3;
IL2CPP_EXTERN_C String_t* _stringLiteral967A14D121BCDCE22BBAA9460E1984A8C2BA54D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9816ED2080A13CA34D8670BA331F36D7E9D236A7;
IL2CPP_EXTERN_C String_t* _stringLiteral99332D0DDE495E198DAFA6F42593F9CF853BEFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A40B4185AFBAEAF3AD2EFA2E287528701084237;
IL2CPP_EXTERN_C String_t* _stringLiteral9A4EE4E33E42F3010D2A9873935C9783ECADE8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral9DA0A315BE47865976FE7CF074D6F4A38130F4DA;
IL2CPP_EXTERN_C String_t* _stringLiteralA644CFCDC761C02EE7CD0F858CC48B407494EE37;
IL2CPP_EXTERN_C String_t* _stringLiteralA740F42C17C48D9FD7DD896C9566DF29AC4B00D5;
IL2CPP_EXTERN_C String_t* _stringLiteralAD8876816F840CDD275978547DCA00605F5521FA;
IL2CPP_EXTERN_C String_t* _stringLiteralADB4946937FF50DEDE7552C1FE6C1C3B42EFF4CC;
IL2CPP_EXTERN_C String_t* _stringLiteralAF36E86D40711923E33EA393EE72A226EF89C214;
IL2CPP_EXTERN_C String_t* _stringLiteralAF91128346A6C796D320264FE049EEB6AABA1D52;
IL2CPP_EXTERN_C String_t* _stringLiteralB1686B1D4F1DABA2E11DB6A18D2C9B0888CFCF91;
IL2CPP_EXTERN_C String_t* _stringLiteralB1931BA76AAE15ECD5D70E47A3C9AE9DD9216FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B;
IL2CPP_EXTERN_C String_t* _stringLiteralB41868DE0B663EE64B8FEC63B64C634F6B1DE0A9;
IL2CPP_EXTERN_C String_t* _stringLiteralB66B94135F244801384D5D55B97E532E620721F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB724369565C1DE3B2FBE4F47E70CDE185992B40B;
IL2CPP_EXTERN_C String_t* _stringLiteralB7313CC4A1FC7E8F730433FE31FA8B6C42C2F617;
IL2CPP_EXTERN_C String_t* _stringLiteralC04965E7E214172621D32A1D48FB54A8D4F5E42B;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FF7CAF7281B443F7CFAA8E50B3449BC1C101CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC27247C19E767FA5A71651454878BEB32E3E617F;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EE06363A208F4A08D7EEA39B55DD710EE70E21;
IL2CPP_EXTERN_C String_t* _stringLiteralCB975EC60CA64FBBC935CBC1DED3EAF288D6169E;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9B3BBCDEAFAC8751CDC467F112622A7B4D9736;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCCDFD0FD87AF785EA1C4D01856BD41EEEBD803;
IL2CPP_EXTERN_C String_t* _stringLiteralCC90D1F945AC7169737EB4D29A9935C14E0C85F0;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE9A5CE2C99B1ACB29F60F54B0FB33100BB8DA9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0586360AB261793FDF503A973AA97C72BFAF11;
IL2CPP_EXTERN_C String_t* _stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04;
IL2CPP_EXTERN_C String_t* _stringLiteralD236D27ACEF2604264B8A2F7F835C87D1A6FF1A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD398317BD410E0D8E961C79BEFCA413D1319061E;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CE73B943237AB82CF2ABEA9C3BF5A626D9AA00;
IL2CPP_EXTERN_C String_t* _stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A4C2DB3F4A9C9AE986D605D4A96E7BBAB4F217;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC2492AA14F902D97F136C20B73300275F6560A;
IL2CPP_EXTERN_C String_t* _stringLiteralDC73355093113F68938856DACBF596E2617A941D;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4;
IL2CPP_EXTERN_C String_t* _stringLiteralDE2DD33BCD541DA280E529743F65CB84C9541BC9;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9;
IL2CPP_EXTERN_C String_t* _stringLiteralDFA3C32D986FA726AB906F6A0F99A10C36F8040B;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC3BEF2346FC5A8C53D272817D3864538D149C5;
IL2CPP_EXTERN_C String_t* _stringLiteralE3895F9D6464D185DA12AFB889C2CF2E53106C53;
IL2CPP_EXTERN_C String_t* _stringLiteralE3BD05C2AFC91245A5AE228DDB7ACA7D7C3A60B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE6DC779CA7A83F68E12B3C88B9BF10CE4B6FB9CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE77469616D4D7BD322020C5FFC7F7A69CB5FA8F5;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD6E22139663C73C0C6884324B2DC3558437849;
IL2CPP_EXTERN_C String_t* _stringLiteralECA8E122E21A6B494C7B9655F3E14C5BA9168D52;
IL2CPP_EXTERN_C String_t* _stringLiteralECC09AD850EE1E71743BBDFCC5AFCC175627DD0F;
IL2CPP_EXTERN_C String_t* _stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF97F9F56A4C265AADFF5D9DDC3853E65DA6C256;
IL2CPP_EXTERN_C String_t* _stringLiteralF47CBC696D1A835CC7CD16A07DC80D05D07E5CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF4BBF7E58261647FB88A64625BD31BB282C98067;
IL2CPP_EXTERN_C String_t* _stringLiteralF78A9418B4D33DBFF17F335D0669B42522E6D392;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_RuntimeMethod_var;
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A;;
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com;
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com;;
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke;
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke;;
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6;;
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com;
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com;;
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke;
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6;;
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com;
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com;;
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke;
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke;;
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081;;
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com;
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com;;
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke;
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke;;
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 ;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
struct RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD;
struct FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.PostProcessing.ColorGradingCurve
struct ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve UnityEngine.PostProcessing.ColorGradingCurve::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_0;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingCurve::m_Loop
	bool ___m_Loop_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingCurve::m_ZeroValue
	float ___m_ZeroValue_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingCurve::m_Range
	float ___m_Range_3;
	// UnityEngine.AnimationCurve UnityEngine.PostProcessing.ColorGradingCurve::m_InternalLoopingCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_InternalLoopingCurve_4;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332, ___curve_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_0() const { return ___curve_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Loop_1() { return static_cast<int32_t>(offsetof(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332, ___m_Loop_1)); }
	inline bool get_m_Loop_1() const { return ___m_Loop_1; }
	inline bool* get_address_of_m_Loop_1() { return &___m_Loop_1; }
	inline void set_m_Loop_1(bool value)
	{
		___m_Loop_1 = value;
	}

	inline static int32_t get_offset_of_m_ZeroValue_2() { return static_cast<int32_t>(offsetof(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332, ___m_ZeroValue_2)); }
	inline float get_m_ZeroValue_2() const { return ___m_ZeroValue_2; }
	inline float* get_address_of_m_ZeroValue_2() { return &___m_ZeroValue_2; }
	inline void set_m_ZeroValue_2(float value)
	{
		___m_ZeroValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Range_3() { return static_cast<int32_t>(offsetof(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332, ___m_Range_3)); }
	inline float get_m_Range_3() const { return ___m_Range_3; }
	inline float* get_address_of_m_Range_3() { return &___m_Range_3; }
	inline void set_m_Range_3(float value)
	{
		___m_Range_3 = value;
	}

	inline static int32_t get_offset_of_m_InternalLoopingCurve_4() { return static_cast<int32_t>(offsetof(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332, ___m_InternalLoopingCurve_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_InternalLoopingCurve_4() const { return ___m_InternalLoopingCurve_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_InternalLoopingCurve_4() { return &___m_InternalLoopingCurve_4; }
	inline void set_m_InternalLoopingCurve_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_InternalLoopingCurve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalLoopingCurve_4), (void*)value);
	}
};


// MessageHandler
struct MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7  : public RuntimeObject
{
public:
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7, ___data_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_data_3() const { return ___data_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511  : public RuntimeObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingProfile UnityEngine.PostProcessing.PostProcessingContext::profile
	PostProcessingProfile_t40876A4AEC07889C7A53D5BAF6EC4CBDF97294CA * ___profile_0;
	// UnityEngine.Camera UnityEngine.PostProcessing.PostProcessingContext::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_1;
	// UnityEngine.PostProcessing.MaterialFactory UnityEngine.PostProcessing.PostProcessingContext::materialFactory
	MaterialFactory_tDA1EA5AC6DA15ACEAAFAB591ABF277B301D5CFEF * ___materialFactory_2;
	// UnityEngine.PostProcessing.RenderTextureFactory UnityEngine.PostProcessing.PostProcessingContext::renderTextureFactory
	RenderTextureFactory_tC0F5415DC3D004841099F38EA561948A66391669 * ___renderTextureFactory_3;
	// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::<interrupted>k__BackingField
	bool ___U3CinterruptedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511, ___profile_0)); }
	inline PostProcessingProfile_t40876A4AEC07889C7A53D5BAF6EC4CBDF97294CA * get_profile_0() const { return ___profile_0; }
	inline PostProcessingProfile_t40876A4AEC07889C7A53D5BAF6EC4CBDF97294CA ** get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(PostProcessingProfile_t40876A4AEC07889C7A53D5BAF6EC4CBDF97294CA * value)
	{
		___profile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_0), (void*)value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511, ___camera_1)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_1() const { return ___camera_1; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_1), (void*)value);
	}

	inline static int32_t get_offset_of_materialFactory_2() { return static_cast<int32_t>(offsetof(PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511, ___materialFactory_2)); }
	inline MaterialFactory_tDA1EA5AC6DA15ACEAAFAB591ABF277B301D5CFEF * get_materialFactory_2() const { return ___materialFactory_2; }
	inline MaterialFactory_tDA1EA5AC6DA15ACEAAFAB591ABF277B301D5CFEF ** get_address_of_materialFactory_2() { return &___materialFactory_2; }
	inline void set_materialFactory_2(MaterialFactory_tDA1EA5AC6DA15ACEAAFAB591ABF277B301D5CFEF * value)
	{
		___materialFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_renderTextureFactory_3() { return static_cast<int32_t>(offsetof(PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511, ___renderTextureFactory_3)); }
	inline RenderTextureFactory_tC0F5415DC3D004841099F38EA561948A66391669 * get_renderTextureFactory_3() const { return ___renderTextureFactory_3; }
	inline RenderTextureFactory_tC0F5415DC3D004841099F38EA561948A66391669 ** get_address_of_renderTextureFactory_3() { return &___renderTextureFactory_3; }
	inline void set_renderTextureFactory_3(RenderTextureFactory_tC0F5415DC3D004841099F38EA561948A66391669 * value)
	{
		___renderTextureFactory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTextureFactory_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinterruptedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511, ___U3CinterruptedU3Ek__BackingField_4)); }
	inline bool get_U3CinterruptedU3Ek__BackingField_4() const { return ___U3CinterruptedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CinterruptedU3Ek__BackingField_4() { return &___U3CinterruptedU3Ek__BackingField_4; }
	inline void set_U3CinterruptedU3Ek__BackingField_4(bool value)
	{
		___U3CinterruptedU3Ek__BackingField_4 = value;
	}
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

// UnityEngine.PostProcessing.BloomComponent/Uniforms
struct Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_0;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Threshold
	int32_t ____Threshold_1;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Curve
	int32_t ____Curve_2;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_PrefilterOffs
	int32_t ____PrefilterOffs_3;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_SampleScale
	int32_t ____SampleScale_4;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BaseTex
	int32_t ____BaseTex_5;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_BloomTex
	int32_t ____BloomTex_6;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_Settings
	int32_t ____Bloom_Settings_7;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtTex
	int32_t ____Bloom_DirtTex_8;
	// System.Int32 UnityEngine.PostProcessing.BloomComponent/Uniforms::_Bloom_DirtIntensity
	int32_t ____Bloom_DirtIntensity_9;

public:
	inline static int32_t get_offset_of__AutoExposure_0() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____AutoExposure_0)); }
	inline int32_t get__AutoExposure_0() const { return ____AutoExposure_0; }
	inline int32_t* get_address_of__AutoExposure_0() { return &____AutoExposure_0; }
	inline void set__AutoExposure_0(int32_t value)
	{
		____AutoExposure_0 = value;
	}

	inline static int32_t get_offset_of__Threshold_1() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____Threshold_1)); }
	inline int32_t get__Threshold_1() const { return ____Threshold_1; }
	inline int32_t* get_address_of__Threshold_1() { return &____Threshold_1; }
	inline void set__Threshold_1(int32_t value)
	{
		____Threshold_1 = value;
	}

	inline static int32_t get_offset_of__Curve_2() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____Curve_2)); }
	inline int32_t get__Curve_2() const { return ____Curve_2; }
	inline int32_t* get_address_of__Curve_2() { return &____Curve_2; }
	inline void set__Curve_2(int32_t value)
	{
		____Curve_2 = value;
	}

	inline static int32_t get_offset_of__PrefilterOffs_3() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____PrefilterOffs_3)); }
	inline int32_t get__PrefilterOffs_3() const { return ____PrefilterOffs_3; }
	inline int32_t* get_address_of__PrefilterOffs_3() { return &____PrefilterOffs_3; }
	inline void set__PrefilterOffs_3(int32_t value)
	{
		____PrefilterOffs_3 = value;
	}

	inline static int32_t get_offset_of__SampleScale_4() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____SampleScale_4)); }
	inline int32_t get__SampleScale_4() const { return ____SampleScale_4; }
	inline int32_t* get_address_of__SampleScale_4() { return &____SampleScale_4; }
	inline void set__SampleScale_4(int32_t value)
	{
		____SampleScale_4 = value;
	}

	inline static int32_t get_offset_of__BaseTex_5() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____BaseTex_5)); }
	inline int32_t get__BaseTex_5() const { return ____BaseTex_5; }
	inline int32_t* get_address_of__BaseTex_5() { return &____BaseTex_5; }
	inline void set__BaseTex_5(int32_t value)
	{
		____BaseTex_5 = value;
	}

	inline static int32_t get_offset_of__BloomTex_6() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____BloomTex_6)); }
	inline int32_t get__BloomTex_6() const { return ____BloomTex_6; }
	inline int32_t* get_address_of__BloomTex_6() { return &____BloomTex_6; }
	inline void set__BloomTex_6(int32_t value)
	{
		____BloomTex_6 = value;
	}

	inline static int32_t get_offset_of__Bloom_Settings_7() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____Bloom_Settings_7)); }
	inline int32_t get__Bloom_Settings_7() const { return ____Bloom_Settings_7; }
	inline int32_t* get_address_of__Bloom_Settings_7() { return &____Bloom_Settings_7; }
	inline void set__Bloom_Settings_7(int32_t value)
	{
		____Bloom_Settings_7 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtTex_8() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____Bloom_DirtTex_8)); }
	inline int32_t get__Bloom_DirtTex_8() const { return ____Bloom_DirtTex_8; }
	inline int32_t* get_address_of__Bloom_DirtTex_8() { return &____Bloom_DirtTex_8; }
	inline void set__Bloom_DirtTex_8(int32_t value)
	{
		____Bloom_DirtTex_8 = value;
	}

	inline static int32_t get_offset_of__Bloom_DirtIntensity_9() { return static_cast<int32_t>(offsetof(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields, ____Bloom_DirtIntensity_9)); }
	inline int32_t get__Bloom_DirtIntensity_9() const { return ____Bloom_DirtIntensity_9; }
	inline int32_t* get_address_of__Bloom_DirtIntensity_9() { return &____Bloom_DirtIntensity_9; }
	inline void set__Bloom_DirtIntensity_9(int32_t value)
	{
		____Bloom_DirtIntensity_9 = value;
	}
};


// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<mesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CmeshU3Ek__BackingField_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<columnCount>k__BackingField
	int32_t ___U3CcolumnCountU3Ek__BackingField_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::<rowCount>k__BackingField
	int32_t ___U3CrowCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06, ___U3CmeshU3Ek__BackingField_0)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CmeshU3Ek__BackingField_0() const { return ___U3CmeshU3Ek__BackingField_0; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CmeshU3Ek__BackingField_0() { return &___U3CmeshU3Ek__BackingField_0; }
	inline void set_U3CmeshU3Ek__BackingField_0(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CmeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcolumnCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06, ___U3CcolumnCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CcolumnCountU3Ek__BackingField_1() const { return ___U3CcolumnCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CcolumnCountU3Ek__BackingField_1() { return &___U3CcolumnCountU3Ek__BackingField_1; }
	inline void set_U3CcolumnCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CcolumnCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrowCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06, ___U3CrowCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CrowCountU3Ek__BackingField_2() const { return ___U3CrowCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CrowCountU3Ek__BackingField_2() { return &___U3CrowCountU3Ek__BackingField_2; }
	inline void set_U3CrowCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CrowCountU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms
struct Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_DepthScale
	int32_t ____DepthScale_0;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT
	int32_t ____TempRT_1;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Opacity
	int32_t ____Opacity_2;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_MainTex
	int32_t ____MainTex_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_TempRT2
	int32_t ____TempRT2_4;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Amplitude
	int32_t ____Amplitude_5;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::_Scale
	int32_t ____Scale_6;

public:
	inline static int32_t get_offset_of__DepthScale_0() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____DepthScale_0)); }
	inline int32_t get__DepthScale_0() const { return ____DepthScale_0; }
	inline int32_t* get_address_of__DepthScale_0() { return &____DepthScale_0; }
	inline void set__DepthScale_0(int32_t value)
	{
		____DepthScale_0 = value;
	}

	inline static int32_t get_offset_of__TempRT_1() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____TempRT_1)); }
	inline int32_t get__TempRT_1() const { return ____TempRT_1; }
	inline int32_t* get_address_of__TempRT_1() { return &____TempRT_1; }
	inline void set__TempRT_1(int32_t value)
	{
		____TempRT_1 = value;
	}

	inline static int32_t get_offset_of__Opacity_2() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____Opacity_2)); }
	inline int32_t get__Opacity_2() const { return ____Opacity_2; }
	inline int32_t* get_address_of__Opacity_2() { return &____Opacity_2; }
	inline void set__Opacity_2(int32_t value)
	{
		____Opacity_2 = value;
	}

	inline static int32_t get_offset_of__MainTex_3() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____MainTex_3)); }
	inline int32_t get__MainTex_3() const { return ____MainTex_3; }
	inline int32_t* get_address_of__MainTex_3() { return &____MainTex_3; }
	inline void set__MainTex_3(int32_t value)
	{
		____MainTex_3 = value;
	}

	inline static int32_t get_offset_of__TempRT2_4() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____TempRT2_4)); }
	inline int32_t get__TempRT2_4() const { return ____TempRT2_4; }
	inline int32_t* get_address_of__TempRT2_4() { return &____TempRT2_4; }
	inline void set__TempRT2_4(int32_t value)
	{
		____TempRT2_4 = value;
	}

	inline static int32_t get_offset_of__Amplitude_5() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____Amplitude_5)); }
	inline int32_t get__Amplitude_5() const { return ____Amplitude_5; }
	inline int32_t* get_address_of__Amplitude_5() { return &____Amplitude_5; }
	inline void set__Amplitude_5(int32_t value)
	{
		____Amplitude_5 = value;
	}

	inline static int32_t get_offset_of__Scale_6() { return static_cast<int32_t>(offsetof(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields, ____Scale_6)); }
	inline int32_t get__Scale_6() const { return ____Scale_6; }
	inline int32_t* get_address_of__Scale_6() { return &____Scale_6; }
	inline void set__Scale_6(int32_t value)
	{
		____Scale_6 = value;
	}
};


// CharacterStats_SO/CharLevelUps
struct CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87  : public RuntimeObject
{
public:
	// System.Int32 CharacterStats_SO/CharLevelUps::maxHealth
	int32_t ___maxHealth_0;
	// System.Int32 CharacterStats_SO/CharLevelUps::maxMana
	int32_t ___maxMana_1;
	// System.Int32 CharacterStats_SO/CharLevelUps::maxWealth
	int32_t ___maxWealth_2;
	// System.Int32 CharacterStats_SO/CharLevelUps::baseDamage
	int32_t ___baseDamage_3;
	// System.Single CharacterStats_SO/CharLevelUps::baseResistance
	float ___baseResistance_4;
	// System.Single CharacterStats_SO/CharLevelUps::maxEncumbrance
	float ___maxEncumbrance_5;

public:
	inline static int32_t get_offset_of_maxHealth_0() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___maxHealth_0)); }
	inline int32_t get_maxHealth_0() const { return ___maxHealth_0; }
	inline int32_t* get_address_of_maxHealth_0() { return &___maxHealth_0; }
	inline void set_maxHealth_0(int32_t value)
	{
		___maxHealth_0 = value;
	}

	inline static int32_t get_offset_of_maxMana_1() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___maxMana_1)); }
	inline int32_t get_maxMana_1() const { return ___maxMana_1; }
	inline int32_t* get_address_of_maxMana_1() { return &___maxMana_1; }
	inline void set_maxMana_1(int32_t value)
	{
		___maxMana_1 = value;
	}

	inline static int32_t get_offset_of_maxWealth_2() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___maxWealth_2)); }
	inline int32_t get_maxWealth_2() const { return ___maxWealth_2; }
	inline int32_t* get_address_of_maxWealth_2() { return &___maxWealth_2; }
	inline void set_maxWealth_2(int32_t value)
	{
		___maxWealth_2 = value;
	}

	inline static int32_t get_offset_of_baseDamage_3() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___baseDamage_3)); }
	inline int32_t get_baseDamage_3() const { return ___baseDamage_3; }
	inline int32_t* get_address_of_baseDamage_3() { return &___baseDamage_3; }
	inline void set_baseDamage_3(int32_t value)
	{
		___baseDamage_3 = value;
	}

	inline static int32_t get_offset_of_baseResistance_4() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___baseResistance_4)); }
	inline float get_baseResistance_4() const { return ___baseResistance_4; }
	inline float* get_address_of_baseResistance_4() { return &___baseResistance_4; }
	inline void set_baseResistance_4(float value)
	{
		___baseResistance_4 = value;
	}

	inline static int32_t get_offset_of_maxEncumbrance_5() { return static_cast<int32_t>(offsetof(CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87, ___maxEncumbrance_5)); }
	inline float get_maxEncumbrance_5() const { return ___maxEncumbrance_5; }
	inline float* get_address_of_maxEncumbrance_5() { return &___maxEncumbrance_5; }
	inline void set_maxEncumbrance_5(float value)
	{
		___maxEncumbrance_5 = value;
	}
};


// UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms
struct Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Amount
	int32_t ____ChromaticAberration_Amount_0;
	// System.Int32 UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::_ChromaticAberration_Spectrum
	int32_t ____ChromaticAberration_Spectrum_1;

public:
	inline static int32_t get_offset_of__ChromaticAberration_Amount_0() { return static_cast<int32_t>(offsetof(Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_StaticFields, ____ChromaticAberration_Amount_0)); }
	inline int32_t get__ChromaticAberration_Amount_0() const { return ____ChromaticAberration_Amount_0; }
	inline int32_t* get_address_of__ChromaticAberration_Amount_0() { return &____ChromaticAberration_Amount_0; }
	inline void set__ChromaticAberration_Amount_0(int32_t value)
	{
		____ChromaticAberration_Amount_0 = value;
	}

	inline static int32_t get_offset_of__ChromaticAberration_Spectrum_1() { return static_cast<int32_t>(offsetof(Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_StaticFields, ____ChromaticAberration_Spectrum_1)); }
	inline int32_t get__ChromaticAberration_Spectrum_1() const { return ____ChromaticAberration_Spectrum_1; }
	inline int32_t* get_address_of__ChromaticAberration_Spectrum_1() { return &____ChromaticAberration_Spectrum_1; }
	inline void set__ChromaticAberration_Spectrum_1(int32_t value)
	{
		____ChromaticAberration_Spectrum_1 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingComponent/Uniforms
struct Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LutParams
	int32_t ____LutParams_0;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams1
	int32_t ____NeutralTonemapperParams1_1;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_NeutralTonemapperParams2
	int32_t ____NeutralTonemapperParams2_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_HueShift
	int32_t ____HueShift_3;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Saturation
	int32_t ____Saturation_4;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Contrast
	int32_t ____Contrast_5;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Balance
	int32_t ____Balance_6;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Lift
	int32_t ____Lift_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_InvGamma
	int32_t ____InvGamma_8;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Gain
	int32_t ____Gain_9;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Slope
	int32_t ____Slope_10;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Power
	int32_t ____Power_11;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Offset
	int32_t ____Offset_12;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerRed
	int32_t ____ChannelMixerRed_13;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerGreen
	int32_t ____ChannelMixerGreen_14;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ChannelMixerBlue
	int32_t ____ChannelMixerBlue_15;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_Curves
	int32_t ____Curves_16;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut
	int32_t ____LogLut_17;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_LogLut_Params
	int32_t ____LogLut_Params_18;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::_ExposureEV
	int32_t ____ExposureEV_19;

public:
	inline static int32_t get_offset_of__LutParams_0() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____LutParams_0)); }
	inline int32_t get__LutParams_0() const { return ____LutParams_0; }
	inline int32_t* get_address_of__LutParams_0() { return &____LutParams_0; }
	inline void set__LutParams_0(int32_t value)
	{
		____LutParams_0 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams1_1() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____NeutralTonemapperParams1_1)); }
	inline int32_t get__NeutralTonemapperParams1_1() const { return ____NeutralTonemapperParams1_1; }
	inline int32_t* get_address_of__NeutralTonemapperParams1_1() { return &____NeutralTonemapperParams1_1; }
	inline void set__NeutralTonemapperParams1_1(int32_t value)
	{
		____NeutralTonemapperParams1_1 = value;
	}

	inline static int32_t get_offset_of__NeutralTonemapperParams2_2() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____NeutralTonemapperParams2_2)); }
	inline int32_t get__NeutralTonemapperParams2_2() const { return ____NeutralTonemapperParams2_2; }
	inline int32_t* get_address_of__NeutralTonemapperParams2_2() { return &____NeutralTonemapperParams2_2; }
	inline void set__NeutralTonemapperParams2_2(int32_t value)
	{
		____NeutralTonemapperParams2_2 = value;
	}

	inline static int32_t get_offset_of__HueShift_3() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____HueShift_3)); }
	inline int32_t get__HueShift_3() const { return ____HueShift_3; }
	inline int32_t* get_address_of__HueShift_3() { return &____HueShift_3; }
	inline void set__HueShift_3(int32_t value)
	{
		____HueShift_3 = value;
	}

	inline static int32_t get_offset_of__Saturation_4() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Saturation_4)); }
	inline int32_t get__Saturation_4() const { return ____Saturation_4; }
	inline int32_t* get_address_of__Saturation_4() { return &____Saturation_4; }
	inline void set__Saturation_4(int32_t value)
	{
		____Saturation_4 = value;
	}

	inline static int32_t get_offset_of__Contrast_5() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Contrast_5)); }
	inline int32_t get__Contrast_5() const { return ____Contrast_5; }
	inline int32_t* get_address_of__Contrast_5() { return &____Contrast_5; }
	inline void set__Contrast_5(int32_t value)
	{
		____Contrast_5 = value;
	}

	inline static int32_t get_offset_of__Balance_6() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Balance_6)); }
	inline int32_t get__Balance_6() const { return ____Balance_6; }
	inline int32_t* get_address_of__Balance_6() { return &____Balance_6; }
	inline void set__Balance_6(int32_t value)
	{
		____Balance_6 = value;
	}

	inline static int32_t get_offset_of__Lift_7() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Lift_7)); }
	inline int32_t get__Lift_7() const { return ____Lift_7; }
	inline int32_t* get_address_of__Lift_7() { return &____Lift_7; }
	inline void set__Lift_7(int32_t value)
	{
		____Lift_7 = value;
	}

	inline static int32_t get_offset_of__InvGamma_8() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____InvGamma_8)); }
	inline int32_t get__InvGamma_8() const { return ____InvGamma_8; }
	inline int32_t* get_address_of__InvGamma_8() { return &____InvGamma_8; }
	inline void set__InvGamma_8(int32_t value)
	{
		____InvGamma_8 = value;
	}

	inline static int32_t get_offset_of__Gain_9() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Gain_9)); }
	inline int32_t get__Gain_9() const { return ____Gain_9; }
	inline int32_t* get_address_of__Gain_9() { return &____Gain_9; }
	inline void set__Gain_9(int32_t value)
	{
		____Gain_9 = value;
	}

	inline static int32_t get_offset_of__Slope_10() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Slope_10)); }
	inline int32_t get__Slope_10() const { return ____Slope_10; }
	inline int32_t* get_address_of__Slope_10() { return &____Slope_10; }
	inline void set__Slope_10(int32_t value)
	{
		____Slope_10 = value;
	}

	inline static int32_t get_offset_of__Power_11() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Power_11)); }
	inline int32_t get__Power_11() const { return ____Power_11; }
	inline int32_t* get_address_of__Power_11() { return &____Power_11; }
	inline void set__Power_11(int32_t value)
	{
		____Power_11 = value;
	}

	inline static int32_t get_offset_of__Offset_12() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Offset_12)); }
	inline int32_t get__Offset_12() const { return ____Offset_12; }
	inline int32_t* get_address_of__Offset_12() { return &____Offset_12; }
	inline void set__Offset_12(int32_t value)
	{
		____Offset_12 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerRed_13() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____ChannelMixerRed_13)); }
	inline int32_t get__ChannelMixerRed_13() const { return ____ChannelMixerRed_13; }
	inline int32_t* get_address_of__ChannelMixerRed_13() { return &____ChannelMixerRed_13; }
	inline void set__ChannelMixerRed_13(int32_t value)
	{
		____ChannelMixerRed_13 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerGreen_14() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____ChannelMixerGreen_14)); }
	inline int32_t get__ChannelMixerGreen_14() const { return ____ChannelMixerGreen_14; }
	inline int32_t* get_address_of__ChannelMixerGreen_14() { return &____ChannelMixerGreen_14; }
	inline void set__ChannelMixerGreen_14(int32_t value)
	{
		____ChannelMixerGreen_14 = value;
	}

	inline static int32_t get_offset_of__ChannelMixerBlue_15() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____ChannelMixerBlue_15)); }
	inline int32_t get__ChannelMixerBlue_15() const { return ____ChannelMixerBlue_15; }
	inline int32_t* get_address_of__ChannelMixerBlue_15() { return &____ChannelMixerBlue_15; }
	inline void set__ChannelMixerBlue_15(int32_t value)
	{
		____ChannelMixerBlue_15 = value;
	}

	inline static int32_t get_offset_of__Curves_16() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____Curves_16)); }
	inline int32_t get__Curves_16() const { return ____Curves_16; }
	inline int32_t* get_address_of__Curves_16() { return &____Curves_16; }
	inline void set__Curves_16(int32_t value)
	{
		____Curves_16 = value;
	}

	inline static int32_t get_offset_of__LogLut_17() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____LogLut_17)); }
	inline int32_t get__LogLut_17() const { return ____LogLut_17; }
	inline int32_t* get_address_of__LogLut_17() { return &____LogLut_17; }
	inline void set__LogLut_17(int32_t value)
	{
		____LogLut_17 = value;
	}

	inline static int32_t get_offset_of__LogLut_Params_18() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____LogLut_Params_18)); }
	inline int32_t get__LogLut_Params_18() const { return ____LogLut_Params_18; }
	inline int32_t* get_address_of__LogLut_Params_18() { return &____LogLut_Params_18; }
	inline void set__LogLut_Params_18(int32_t value)
	{
		____LogLut_Params_18 = value;
	}

	inline static int32_t get_offset_of__ExposureEV_19() { return static_cast<int32_t>(offsetof(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields, ____ExposureEV_19)); }
	inline int32_t get__ExposureEV_19() const { return ____ExposureEV_19; }
	inline int32_t* get_address_of__ExposureEV_19() { return &____ExposureEV_19; }
	inline void set__ExposureEV_19(int32_t value)
	{
		____ExposureEV_19 = value;
	}
};


// UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms
struct Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldTex
	int32_t ____DepthOfFieldTex_0;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldCoCTex
	int32_t ____DepthOfFieldCoCTex_1;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_Distance
	int32_t ____Distance_2;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_LensCoeff
	int32_t ____LensCoeff_3;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MaxCoC
	int32_t ____MaxCoC_4;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpMaxCoC
	int32_t ____RcpMaxCoC_5;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_RcpAspect
	int32_t ____RcpAspect_6;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_MainTex
	int32_t ____MainTex_7;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_CoCTex
	int32_t ____CoCTex_8;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_TaaParams
	int32_t ____TaaParams_9;
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::_DepthOfFieldParams
	int32_t ____DepthOfFieldParams_10;

public:
	inline static int32_t get_offset_of__DepthOfFieldTex_0() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____DepthOfFieldTex_0)); }
	inline int32_t get__DepthOfFieldTex_0() const { return ____DepthOfFieldTex_0; }
	inline int32_t* get_address_of__DepthOfFieldTex_0() { return &____DepthOfFieldTex_0; }
	inline void set__DepthOfFieldTex_0(int32_t value)
	{
		____DepthOfFieldTex_0 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldCoCTex_1() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____DepthOfFieldCoCTex_1)); }
	inline int32_t get__DepthOfFieldCoCTex_1() const { return ____DepthOfFieldCoCTex_1; }
	inline int32_t* get_address_of__DepthOfFieldCoCTex_1() { return &____DepthOfFieldCoCTex_1; }
	inline void set__DepthOfFieldCoCTex_1(int32_t value)
	{
		____DepthOfFieldCoCTex_1 = value;
	}

	inline static int32_t get_offset_of__Distance_2() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____Distance_2)); }
	inline int32_t get__Distance_2() const { return ____Distance_2; }
	inline int32_t* get_address_of__Distance_2() { return &____Distance_2; }
	inline void set__Distance_2(int32_t value)
	{
		____Distance_2 = value;
	}

	inline static int32_t get_offset_of__LensCoeff_3() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____LensCoeff_3)); }
	inline int32_t get__LensCoeff_3() const { return ____LensCoeff_3; }
	inline int32_t* get_address_of__LensCoeff_3() { return &____LensCoeff_3; }
	inline void set__LensCoeff_3(int32_t value)
	{
		____LensCoeff_3 = value;
	}

	inline static int32_t get_offset_of__MaxCoC_4() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____MaxCoC_4)); }
	inline int32_t get__MaxCoC_4() const { return ____MaxCoC_4; }
	inline int32_t* get_address_of__MaxCoC_4() { return &____MaxCoC_4; }
	inline void set__MaxCoC_4(int32_t value)
	{
		____MaxCoC_4 = value;
	}

	inline static int32_t get_offset_of__RcpMaxCoC_5() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____RcpMaxCoC_5)); }
	inline int32_t get__RcpMaxCoC_5() const { return ____RcpMaxCoC_5; }
	inline int32_t* get_address_of__RcpMaxCoC_5() { return &____RcpMaxCoC_5; }
	inline void set__RcpMaxCoC_5(int32_t value)
	{
		____RcpMaxCoC_5 = value;
	}

	inline static int32_t get_offset_of__RcpAspect_6() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____RcpAspect_6)); }
	inline int32_t get__RcpAspect_6() const { return ____RcpAspect_6; }
	inline int32_t* get_address_of__RcpAspect_6() { return &____RcpAspect_6; }
	inline void set__RcpAspect_6(int32_t value)
	{
		____RcpAspect_6 = value;
	}

	inline static int32_t get_offset_of__MainTex_7() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____MainTex_7)); }
	inline int32_t get__MainTex_7() const { return ____MainTex_7; }
	inline int32_t* get_address_of__MainTex_7() { return &____MainTex_7; }
	inline void set__MainTex_7(int32_t value)
	{
		____MainTex_7 = value;
	}

	inline static int32_t get_offset_of__CoCTex_8() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____CoCTex_8)); }
	inline int32_t get__CoCTex_8() const { return ____CoCTex_8; }
	inline int32_t* get_address_of__CoCTex_8() { return &____CoCTex_8; }
	inline void set__CoCTex_8(int32_t value)
	{
		____CoCTex_8 = value;
	}

	inline static int32_t get_offset_of__TaaParams_9() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____TaaParams_9)); }
	inline int32_t get__TaaParams_9() const { return ____TaaParams_9; }
	inline int32_t* get_address_of__TaaParams_9() { return &____TaaParams_9; }
	inline void set__TaaParams_9(int32_t value)
	{
		____TaaParams_9 = value;
	}

	inline static int32_t get_offset_of__DepthOfFieldParams_10() { return static_cast<int32_t>(offsetof(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields, ____DepthOfFieldParams_10)); }
	inline int32_t get__DepthOfFieldParams_10() const { return ____DepthOfFieldParams_10; }
	inline int32_t* get_address_of__DepthOfFieldParams_10() { return &____DepthOfFieldParams_10; }
	inline void set__DepthOfFieldParams_10(int32_t value)
	{
		____DepthOfFieldParams_10 = value;
	}
};


// UnityEngine.PostProcessing.DitheringComponent/Uniforms
struct Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringTex
	int32_t ____DitheringTex_0;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent/Uniforms::_DitheringCoords
	int32_t ____DitheringCoords_1;

public:
	inline static int32_t get_offset_of__DitheringTex_0() { return static_cast<int32_t>(offsetof(Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_StaticFields, ____DitheringTex_0)); }
	inline int32_t get__DitheringTex_0() const { return ____DitheringTex_0; }
	inline int32_t* get_address_of__DitheringTex_0() { return &____DitheringTex_0; }
	inline void set__DitheringTex_0(int32_t value)
	{
		____DitheringTex_0 = value;
	}

	inline static int32_t get_offset_of__DitheringCoords_1() { return static_cast<int32_t>(offsetof(Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_StaticFields, ____DitheringCoords_1)); }
	inline int32_t get__DitheringCoords_1() const { return ____DitheringCoords_1; }
	inline int32_t* get_address_of__DitheringCoords_1() { return &____DitheringCoords_1; }
	inline void set__DitheringCoords_1(int32_t value)
	{
		____DitheringCoords_1 = value;
	}
};


// ExampleWheelController/Uniforms
struct Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_StaticFields
{
public:
	// System.Int32 ExampleWheelController/Uniforms::_MotionAmount
	int32_t ____MotionAmount_0;

public:
	inline static int32_t get_offset_of__MotionAmount_0() { return static_cast<int32_t>(offsetof(Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_StaticFields, ____MotionAmount_0)); }
	inline int32_t get__MotionAmount_0() const { return ____MotionAmount_0; }
	inline int32_t* get_address_of__MotionAmount_0() { return &____MotionAmount_0; }
	inline void set__MotionAmount_0(int32_t value)
	{
		____MotionAmount_0 = value;
	}
};


// UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms
struct Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Params
	int32_t ____Params_0;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_Speed
	int32_t ____Speed_1;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ScaleOffsetRes
	int32_t ____ScaleOffsetRes_2;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_ExposureCompensation
	int32_t ____ExposureCompensation_3;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_AutoExposure
	int32_t ____AutoExposure_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::_DebugWidth
	int32_t ____DebugWidth_5;

public:
	inline static int32_t get_offset_of__Params_0() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____Params_0)); }
	inline int32_t get__Params_0() const { return ____Params_0; }
	inline int32_t* get_address_of__Params_0() { return &____Params_0; }
	inline void set__Params_0(int32_t value)
	{
		____Params_0 = value;
	}

	inline static int32_t get_offset_of__Speed_1() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____Speed_1)); }
	inline int32_t get__Speed_1() const { return ____Speed_1; }
	inline int32_t* get_address_of__Speed_1() { return &____Speed_1; }
	inline void set__Speed_1(int32_t value)
	{
		____Speed_1 = value;
	}

	inline static int32_t get_offset_of__ScaleOffsetRes_2() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____ScaleOffsetRes_2)); }
	inline int32_t get__ScaleOffsetRes_2() const { return ____ScaleOffsetRes_2; }
	inline int32_t* get_address_of__ScaleOffsetRes_2() { return &____ScaleOffsetRes_2; }
	inline void set__ScaleOffsetRes_2(int32_t value)
	{
		____ScaleOffsetRes_2 = value;
	}

	inline static int32_t get_offset_of__ExposureCompensation_3() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____ExposureCompensation_3)); }
	inline int32_t get__ExposureCompensation_3() const { return ____ExposureCompensation_3; }
	inline int32_t* get_address_of__ExposureCompensation_3() { return &____ExposureCompensation_3; }
	inline void set__ExposureCompensation_3(int32_t value)
	{
		____ExposureCompensation_3 = value;
	}

	inline static int32_t get_offset_of__AutoExposure_4() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____AutoExposure_4)); }
	inline int32_t get__AutoExposure_4() const { return ____AutoExposure_4; }
	inline int32_t* get_address_of__AutoExposure_4() { return &____AutoExposure_4; }
	inline void set__AutoExposure_4(int32_t value)
	{
		____AutoExposure_4 = value;
	}

	inline static int32_t get_offset_of__DebugWidth_5() { return static_cast<int32_t>(offsetof(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields, ____DebugWidth_5)); }
	inline int32_t get__DebugWidth_5() const { return ____DebugWidth_5; }
	inline int32_t* get_address_of__DebugWidth_5() { return &____DebugWidth_5; }
	inline void set__DebugWidth_5(int32_t value)
	{
		____DebugWidth_5 = value;
	}
};


// UnityEngine.PostProcessing.FogComponent/Uniforms
struct Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_FogColor
	int32_t ____FogColor_0;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Density
	int32_t ____Density_1;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_Start
	int32_t ____Start_2;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_End
	int32_t ____End_3;
	// System.Int32 UnityEngine.PostProcessing.FogComponent/Uniforms::_TempRT
	int32_t ____TempRT_4;

public:
	inline static int32_t get_offset_of__FogColor_0() { return static_cast<int32_t>(offsetof(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields, ____FogColor_0)); }
	inline int32_t get__FogColor_0() const { return ____FogColor_0; }
	inline int32_t* get_address_of__FogColor_0() { return &____FogColor_0; }
	inline void set__FogColor_0(int32_t value)
	{
		____FogColor_0 = value;
	}

	inline static int32_t get_offset_of__Density_1() { return static_cast<int32_t>(offsetof(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields, ____Density_1)); }
	inline int32_t get__Density_1() const { return ____Density_1; }
	inline int32_t* get_address_of__Density_1() { return &____Density_1; }
	inline void set__Density_1(int32_t value)
	{
		____Density_1 = value;
	}

	inline static int32_t get_offset_of__Start_2() { return static_cast<int32_t>(offsetof(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields, ____Start_2)); }
	inline int32_t get__Start_2() const { return ____Start_2; }
	inline int32_t* get_address_of__Start_2() { return &____Start_2; }
	inline void set__Start_2(int32_t value)
	{
		____Start_2 = value;
	}

	inline static int32_t get_offset_of__End_3() { return static_cast<int32_t>(offsetof(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields, ____End_3)); }
	inline int32_t get__End_3() const { return ____End_3; }
	inline int32_t* get_address_of__End_3() { return &____End_3; }
	inline void set__End_3(int32_t value)
	{
		____End_3 = value;
	}

	inline static int32_t get_offset_of__TempRT_4() { return static_cast<int32_t>(offsetof(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields, ____TempRT_4)); }
	inline int32_t get__TempRT_4() const { return ____TempRT_4; }
	inline int32_t* get_address_of__TempRT_4() { return &____TempRT_4; }
	inline void set__TempRT_4(int32_t value)
	{
		____TempRT_4 = value;
	}
};


// UnityEngine.PostProcessing.FxaaComponent/Uniforms
struct Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_QualitySettings
	int32_t ____QualitySettings_0;
	// System.Int32 UnityEngine.PostProcessing.FxaaComponent/Uniforms::_ConsoleSettings
	int32_t ____ConsoleSettings_1;

public:
	inline static int32_t get_offset_of__QualitySettings_0() { return static_cast<int32_t>(offsetof(Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_StaticFields, ____QualitySettings_0)); }
	inline int32_t get__QualitySettings_0() const { return ____QualitySettings_0; }
	inline int32_t* get_address_of__QualitySettings_0() { return &____QualitySettings_0; }
	inline void set__QualitySettings_0(int32_t value)
	{
		____QualitySettings_0 = value;
	}

	inline static int32_t get_offset_of__ConsoleSettings_1() { return static_cast<int32_t>(offsetof(Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_StaticFields, ____ConsoleSettings_1)); }
	inline int32_t get__ConsoleSettings_1() const { return ____ConsoleSettings_1; }
	inline int32_t* get_address_of__ConsoleSettings_1() { return &____ConsoleSettings_1; }
	inline void set__ConsoleSettings_1(int32_t value)
	{
		____ConsoleSettings_1 = value;
	}
};


// UnityEngine.PostProcessing.GrainComponent/Uniforms
struct Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params1
	int32_t ____Grain_Params1_0;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Grain_Params2
	int32_t ____Grain_Params2_1;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_GrainTex
	int32_t ____GrainTex_2;
	// System.Int32 UnityEngine.PostProcessing.GrainComponent/Uniforms::_Phase
	int32_t ____Phase_3;

public:
	inline static int32_t get_offset_of__Grain_Params1_0() { return static_cast<int32_t>(offsetof(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields, ____Grain_Params1_0)); }
	inline int32_t get__Grain_Params1_0() const { return ____Grain_Params1_0; }
	inline int32_t* get_address_of__Grain_Params1_0() { return &____Grain_Params1_0; }
	inline void set__Grain_Params1_0(int32_t value)
	{
		____Grain_Params1_0 = value;
	}

	inline static int32_t get_offset_of__Grain_Params2_1() { return static_cast<int32_t>(offsetof(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields, ____Grain_Params2_1)); }
	inline int32_t get__Grain_Params2_1() const { return ____Grain_Params2_1; }
	inline int32_t* get_address_of__Grain_Params2_1() { return &____Grain_Params2_1; }
	inline void set__Grain_Params2_1(int32_t value)
	{
		____Grain_Params2_1 = value;
	}

	inline static int32_t get_offset_of__GrainTex_2() { return static_cast<int32_t>(offsetof(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields, ____GrainTex_2)); }
	inline int32_t get__GrainTex_2() const { return ____GrainTex_2; }
	inline int32_t* get_address_of__GrainTex_2() { return &____GrainTex_2; }
	inline void set__GrainTex_2(int32_t value)
	{
		____GrainTex_2 = value;
	}

	inline static int32_t get_offset_of__Phase_3() { return static_cast<int32_t>(offsetof(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields, ____Phase_3)); }
	inline int32_t get__Phase_3() const { return ____Phase_3; }
	inline int32_t* get_address_of__Phase_3() { return &____Phase_3; }
	inline void set__Phase_3(int32_t value)
	{
		____Phase_3 = value;
	}
};


// UnityEngine.PostProcessing.MotionBlurComponent/Uniforms
struct Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityScale
	int32_t ____VelocityScale_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MaxBlurRadius
	int32_t ____MaxBlurRadius_1;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_RcpMaxBlurRadius
	int32_t ____RcpMaxBlurRadius_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_VelocityTex
	int32_t ____VelocityTex_3;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile2RT
	int32_t ____Tile2RT_5;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile4RT
	int32_t ____Tile4RT_6;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_Tile8RT
	int32_t ____Tile8RT_7;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxOffs
	int32_t ____TileMaxOffs_8;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileMaxLoop
	int32_t ____TileMaxLoop_9;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TileVRT
	int32_t ____TileVRT_10;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_NeighborMaxTex
	int32_t ____NeighborMaxTex_11;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_LoopCount
	int32_t ____LoopCount_12;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_TempRT
	int32_t ____TempRT_13;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1LumaTex
	int32_t ____History1LumaTex_14;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2LumaTex
	int32_t ____History2LumaTex_15;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3LumaTex
	int32_t ____History3LumaTex_16;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4LumaTex
	int32_t ____History4LumaTex_17;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1ChromaTex
	int32_t ____History1ChromaTex_18;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2ChromaTex
	int32_t ____History2ChromaTex_19;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3ChromaTex
	int32_t ____History3ChromaTex_20;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4ChromaTex
	int32_t ____History4ChromaTex_21;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History1Weight
	int32_t ____History1Weight_22;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History2Weight
	int32_t ____History2Weight_23;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History3Weight
	int32_t ____History3Weight_24;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::_History4Weight
	int32_t ____History4Weight_25;

public:
	inline static int32_t get_offset_of__VelocityScale_0() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____VelocityScale_0)); }
	inline int32_t get__VelocityScale_0() const { return ____VelocityScale_0; }
	inline int32_t* get_address_of__VelocityScale_0() { return &____VelocityScale_0; }
	inline void set__VelocityScale_0(int32_t value)
	{
		____VelocityScale_0 = value;
	}

	inline static int32_t get_offset_of__MaxBlurRadius_1() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____MaxBlurRadius_1)); }
	inline int32_t get__MaxBlurRadius_1() const { return ____MaxBlurRadius_1; }
	inline int32_t* get_address_of__MaxBlurRadius_1() { return &____MaxBlurRadius_1; }
	inline void set__MaxBlurRadius_1(int32_t value)
	{
		____MaxBlurRadius_1 = value;
	}

	inline static int32_t get_offset_of__RcpMaxBlurRadius_2() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____RcpMaxBlurRadius_2)); }
	inline int32_t get__RcpMaxBlurRadius_2() const { return ____RcpMaxBlurRadius_2; }
	inline int32_t* get_address_of__RcpMaxBlurRadius_2() { return &____RcpMaxBlurRadius_2; }
	inline void set__RcpMaxBlurRadius_2(int32_t value)
	{
		____RcpMaxBlurRadius_2 = value;
	}

	inline static int32_t get_offset_of__VelocityTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____VelocityTex_3)); }
	inline int32_t get__VelocityTex_3() const { return ____VelocityTex_3; }
	inline int32_t* get_address_of__VelocityTex_3() { return &____VelocityTex_3; }
	inline void set__VelocityTex_3(int32_t value)
	{
		____VelocityTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}

	inline static int32_t get_offset_of__Tile2RT_5() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____Tile2RT_5)); }
	inline int32_t get__Tile2RT_5() const { return ____Tile2RT_5; }
	inline int32_t* get_address_of__Tile2RT_5() { return &____Tile2RT_5; }
	inline void set__Tile2RT_5(int32_t value)
	{
		____Tile2RT_5 = value;
	}

	inline static int32_t get_offset_of__Tile4RT_6() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____Tile4RT_6)); }
	inline int32_t get__Tile4RT_6() const { return ____Tile4RT_6; }
	inline int32_t* get_address_of__Tile4RT_6() { return &____Tile4RT_6; }
	inline void set__Tile4RT_6(int32_t value)
	{
		____Tile4RT_6 = value;
	}

	inline static int32_t get_offset_of__Tile8RT_7() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____Tile8RT_7)); }
	inline int32_t get__Tile8RT_7() const { return ____Tile8RT_7; }
	inline int32_t* get_address_of__Tile8RT_7() { return &____Tile8RT_7; }
	inline void set__Tile8RT_7(int32_t value)
	{
		____Tile8RT_7 = value;
	}

	inline static int32_t get_offset_of__TileMaxOffs_8() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____TileMaxOffs_8)); }
	inline int32_t get__TileMaxOffs_8() const { return ____TileMaxOffs_8; }
	inline int32_t* get_address_of__TileMaxOffs_8() { return &____TileMaxOffs_8; }
	inline void set__TileMaxOffs_8(int32_t value)
	{
		____TileMaxOffs_8 = value;
	}

	inline static int32_t get_offset_of__TileMaxLoop_9() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____TileMaxLoop_9)); }
	inline int32_t get__TileMaxLoop_9() const { return ____TileMaxLoop_9; }
	inline int32_t* get_address_of__TileMaxLoop_9() { return &____TileMaxLoop_9; }
	inline void set__TileMaxLoop_9(int32_t value)
	{
		____TileMaxLoop_9 = value;
	}

	inline static int32_t get_offset_of__TileVRT_10() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____TileVRT_10)); }
	inline int32_t get__TileVRT_10() const { return ____TileVRT_10; }
	inline int32_t* get_address_of__TileVRT_10() { return &____TileVRT_10; }
	inline void set__TileVRT_10(int32_t value)
	{
		____TileVRT_10 = value;
	}

	inline static int32_t get_offset_of__NeighborMaxTex_11() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____NeighborMaxTex_11)); }
	inline int32_t get__NeighborMaxTex_11() const { return ____NeighborMaxTex_11; }
	inline int32_t* get_address_of__NeighborMaxTex_11() { return &____NeighborMaxTex_11; }
	inline void set__NeighborMaxTex_11(int32_t value)
	{
		____NeighborMaxTex_11 = value;
	}

	inline static int32_t get_offset_of__LoopCount_12() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____LoopCount_12)); }
	inline int32_t get__LoopCount_12() const { return ____LoopCount_12; }
	inline int32_t* get_address_of__LoopCount_12() { return &____LoopCount_12; }
	inline void set__LoopCount_12(int32_t value)
	{
		____LoopCount_12 = value;
	}

	inline static int32_t get_offset_of__TempRT_13() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____TempRT_13)); }
	inline int32_t get__TempRT_13() const { return ____TempRT_13; }
	inline int32_t* get_address_of__TempRT_13() { return &____TempRT_13; }
	inline void set__TempRT_13(int32_t value)
	{
		____TempRT_13 = value;
	}

	inline static int32_t get_offset_of__History1LumaTex_14() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History1LumaTex_14)); }
	inline int32_t get__History1LumaTex_14() const { return ____History1LumaTex_14; }
	inline int32_t* get_address_of__History1LumaTex_14() { return &____History1LumaTex_14; }
	inline void set__History1LumaTex_14(int32_t value)
	{
		____History1LumaTex_14 = value;
	}

	inline static int32_t get_offset_of__History2LumaTex_15() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History2LumaTex_15)); }
	inline int32_t get__History2LumaTex_15() const { return ____History2LumaTex_15; }
	inline int32_t* get_address_of__History2LumaTex_15() { return &____History2LumaTex_15; }
	inline void set__History2LumaTex_15(int32_t value)
	{
		____History2LumaTex_15 = value;
	}

	inline static int32_t get_offset_of__History3LumaTex_16() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History3LumaTex_16)); }
	inline int32_t get__History3LumaTex_16() const { return ____History3LumaTex_16; }
	inline int32_t* get_address_of__History3LumaTex_16() { return &____History3LumaTex_16; }
	inline void set__History3LumaTex_16(int32_t value)
	{
		____History3LumaTex_16 = value;
	}

	inline static int32_t get_offset_of__History4LumaTex_17() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History4LumaTex_17)); }
	inline int32_t get__History4LumaTex_17() const { return ____History4LumaTex_17; }
	inline int32_t* get_address_of__History4LumaTex_17() { return &____History4LumaTex_17; }
	inline void set__History4LumaTex_17(int32_t value)
	{
		____History4LumaTex_17 = value;
	}

	inline static int32_t get_offset_of__History1ChromaTex_18() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History1ChromaTex_18)); }
	inline int32_t get__History1ChromaTex_18() const { return ____History1ChromaTex_18; }
	inline int32_t* get_address_of__History1ChromaTex_18() { return &____History1ChromaTex_18; }
	inline void set__History1ChromaTex_18(int32_t value)
	{
		____History1ChromaTex_18 = value;
	}

	inline static int32_t get_offset_of__History2ChromaTex_19() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History2ChromaTex_19)); }
	inline int32_t get__History2ChromaTex_19() const { return ____History2ChromaTex_19; }
	inline int32_t* get_address_of__History2ChromaTex_19() { return &____History2ChromaTex_19; }
	inline void set__History2ChromaTex_19(int32_t value)
	{
		____History2ChromaTex_19 = value;
	}

	inline static int32_t get_offset_of__History3ChromaTex_20() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History3ChromaTex_20)); }
	inline int32_t get__History3ChromaTex_20() const { return ____History3ChromaTex_20; }
	inline int32_t* get_address_of__History3ChromaTex_20() { return &____History3ChromaTex_20; }
	inline void set__History3ChromaTex_20(int32_t value)
	{
		____History3ChromaTex_20 = value;
	}

	inline static int32_t get_offset_of__History4ChromaTex_21() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History4ChromaTex_21)); }
	inline int32_t get__History4ChromaTex_21() const { return ____History4ChromaTex_21; }
	inline int32_t* get_address_of__History4ChromaTex_21() { return &____History4ChromaTex_21; }
	inline void set__History4ChromaTex_21(int32_t value)
	{
		____History4ChromaTex_21 = value;
	}

	inline static int32_t get_offset_of__History1Weight_22() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History1Weight_22)); }
	inline int32_t get__History1Weight_22() const { return ____History1Weight_22; }
	inline int32_t* get_address_of__History1Weight_22() { return &____History1Weight_22; }
	inline void set__History1Weight_22(int32_t value)
	{
		____History1Weight_22 = value;
	}

	inline static int32_t get_offset_of__History2Weight_23() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History2Weight_23)); }
	inline int32_t get__History2Weight_23() const { return ____History2Weight_23; }
	inline int32_t* get_address_of__History2Weight_23() { return &____History2Weight_23; }
	inline void set__History2Weight_23(int32_t value)
	{
		____History2Weight_23 = value;
	}

	inline static int32_t get_offset_of__History3Weight_24() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History3Weight_24)); }
	inline int32_t get__History3Weight_24() const { return ____History3Weight_24; }
	inline int32_t* get_address_of__History3Weight_24() { return &____History3Weight_24; }
	inline void set__History3Weight_24(int32_t value)
	{
		____History3Weight_24 = value;
	}

	inline static int32_t get_offset_of__History4Weight_25() { return static_cast<int32_t>(offsetof(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields, ____History4Weight_25)); }
	inline int32_t get__History4Weight_25() const { return ____History4Weight_25; }
	inline int32_t* get_address_of__History4Weight_25() { return &____History4Weight_25; }
	inline void set__History4Weight_25(int32_t value)
	{
		____History4Weight_25 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms
struct Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000  : public RuntimeObject
{
public:

public:
};

struct Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_RayStepSize
	int32_t ____RayStepSize_0;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AdditiveReflection
	int32_t ____AdditiveReflection_1;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BilateralUpsampling
	int32_t ____BilateralUpsampling_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TreatBackfaceHitAsMiss
	int32_t ____TreatBackfaceHitAsMiss_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_AllowBackwardsRays
	int32_t ____AllowBackwardsRays_4;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TraceBehindObjects
	int32_t ____TraceBehindObjects_5;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxSteps
	int32_t ____MaxSteps_6;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FullResolutionFiltering
	int32_t ____FullResolutionFiltering_7;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HalfResolution
	int32_t ____HalfResolution_8;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HighlightSuppression
	int32_t ____HighlightSuppression_9;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_PixelsPerMeterAtOneMeter
	int32_t ____PixelsPerMeterAtOneMeter_10;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenEdgeFading
	int32_t ____ScreenEdgeFading_11;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBlur
	int32_t ____ReflectionBlur_12;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_MaxRayTraceDistance
	int32_t ____MaxRayTraceDistance_13;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FadeDistance
	int32_t ____FadeDistance_14;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_LayerThickness
	int32_t ____LayerThickness_15;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_SSRMultiplier
	int32_t ____SSRMultiplier_16;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFade
	int32_t ____FresnelFade_17;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FresnelFadePower
	int32_t ____FresnelFadePower_18;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ReflectionBufferSize
	int32_t ____ReflectionBufferSize_19;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ScreenSize
	int32_t ____ScreenSize_20;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_InvScreenSize
	int32_t ____InvScreenSize_21;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjInfo
	int32_t ____ProjInfo_22;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraClipInfo
	int32_t ____CameraClipInfo_23;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_ProjectToPixelMatrix
	int32_t ____ProjectToPixelMatrix_24;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_WorldToCameraMatrix
	int32_t ____WorldToCameraMatrix_25;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CameraToWorldMatrix
	int32_t ____CameraToWorldMatrix_26;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_Axis
	int32_t ____Axis_27;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_CurrentMipLevel
	int32_t ____CurrentMipLevel_28;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_NormalAndRoughnessTexture
	int32_t ____NormalAndRoughnessTexture_29;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_HitPointTexture
	int32_t ____HitPointTexture_30;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_BlurTexture
	int32_t ____BlurTexture_31;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FilteredReflections
	int32_t ____FilteredReflections_32;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_FinalReflectionTexture
	int32_t ____FinalReflectionTexture_33;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::_TempTexture
	int32_t ____TempTexture_34;

public:
	inline static int32_t get_offset_of__RayStepSize_0() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____RayStepSize_0)); }
	inline int32_t get__RayStepSize_0() const { return ____RayStepSize_0; }
	inline int32_t* get_address_of__RayStepSize_0() { return &____RayStepSize_0; }
	inline void set__RayStepSize_0(int32_t value)
	{
		____RayStepSize_0 = value;
	}

	inline static int32_t get_offset_of__AdditiveReflection_1() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____AdditiveReflection_1)); }
	inline int32_t get__AdditiveReflection_1() const { return ____AdditiveReflection_1; }
	inline int32_t* get_address_of__AdditiveReflection_1() { return &____AdditiveReflection_1; }
	inline void set__AdditiveReflection_1(int32_t value)
	{
		____AdditiveReflection_1 = value;
	}

	inline static int32_t get_offset_of__BilateralUpsampling_2() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____BilateralUpsampling_2)); }
	inline int32_t get__BilateralUpsampling_2() const { return ____BilateralUpsampling_2; }
	inline int32_t* get_address_of__BilateralUpsampling_2() { return &____BilateralUpsampling_2; }
	inline void set__BilateralUpsampling_2(int32_t value)
	{
		____BilateralUpsampling_2 = value;
	}

	inline static int32_t get_offset_of__TreatBackfaceHitAsMiss_3() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____TreatBackfaceHitAsMiss_3)); }
	inline int32_t get__TreatBackfaceHitAsMiss_3() const { return ____TreatBackfaceHitAsMiss_3; }
	inline int32_t* get_address_of__TreatBackfaceHitAsMiss_3() { return &____TreatBackfaceHitAsMiss_3; }
	inline void set__TreatBackfaceHitAsMiss_3(int32_t value)
	{
		____TreatBackfaceHitAsMiss_3 = value;
	}

	inline static int32_t get_offset_of__AllowBackwardsRays_4() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____AllowBackwardsRays_4)); }
	inline int32_t get__AllowBackwardsRays_4() const { return ____AllowBackwardsRays_4; }
	inline int32_t* get_address_of__AllowBackwardsRays_4() { return &____AllowBackwardsRays_4; }
	inline void set__AllowBackwardsRays_4(int32_t value)
	{
		____AllowBackwardsRays_4 = value;
	}

	inline static int32_t get_offset_of__TraceBehindObjects_5() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____TraceBehindObjects_5)); }
	inline int32_t get__TraceBehindObjects_5() const { return ____TraceBehindObjects_5; }
	inline int32_t* get_address_of__TraceBehindObjects_5() { return &____TraceBehindObjects_5; }
	inline void set__TraceBehindObjects_5(int32_t value)
	{
		____TraceBehindObjects_5 = value;
	}

	inline static int32_t get_offset_of__MaxSteps_6() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____MaxSteps_6)); }
	inline int32_t get__MaxSteps_6() const { return ____MaxSteps_6; }
	inline int32_t* get_address_of__MaxSteps_6() { return &____MaxSteps_6; }
	inline void set__MaxSteps_6(int32_t value)
	{
		____MaxSteps_6 = value;
	}

	inline static int32_t get_offset_of__FullResolutionFiltering_7() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FullResolutionFiltering_7)); }
	inline int32_t get__FullResolutionFiltering_7() const { return ____FullResolutionFiltering_7; }
	inline int32_t* get_address_of__FullResolutionFiltering_7() { return &____FullResolutionFiltering_7; }
	inline void set__FullResolutionFiltering_7(int32_t value)
	{
		____FullResolutionFiltering_7 = value;
	}

	inline static int32_t get_offset_of__HalfResolution_8() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____HalfResolution_8)); }
	inline int32_t get__HalfResolution_8() const { return ____HalfResolution_8; }
	inline int32_t* get_address_of__HalfResolution_8() { return &____HalfResolution_8; }
	inline void set__HalfResolution_8(int32_t value)
	{
		____HalfResolution_8 = value;
	}

	inline static int32_t get_offset_of__HighlightSuppression_9() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____HighlightSuppression_9)); }
	inline int32_t get__HighlightSuppression_9() const { return ____HighlightSuppression_9; }
	inline int32_t* get_address_of__HighlightSuppression_9() { return &____HighlightSuppression_9; }
	inline void set__HighlightSuppression_9(int32_t value)
	{
		____HighlightSuppression_9 = value;
	}

	inline static int32_t get_offset_of__PixelsPerMeterAtOneMeter_10() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____PixelsPerMeterAtOneMeter_10)); }
	inline int32_t get__PixelsPerMeterAtOneMeter_10() const { return ____PixelsPerMeterAtOneMeter_10; }
	inline int32_t* get_address_of__PixelsPerMeterAtOneMeter_10() { return &____PixelsPerMeterAtOneMeter_10; }
	inline void set__PixelsPerMeterAtOneMeter_10(int32_t value)
	{
		____PixelsPerMeterAtOneMeter_10 = value;
	}

	inline static int32_t get_offset_of__ScreenEdgeFading_11() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ScreenEdgeFading_11)); }
	inline int32_t get__ScreenEdgeFading_11() const { return ____ScreenEdgeFading_11; }
	inline int32_t* get_address_of__ScreenEdgeFading_11() { return &____ScreenEdgeFading_11; }
	inline void set__ScreenEdgeFading_11(int32_t value)
	{
		____ScreenEdgeFading_11 = value;
	}

	inline static int32_t get_offset_of__ReflectionBlur_12() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ReflectionBlur_12)); }
	inline int32_t get__ReflectionBlur_12() const { return ____ReflectionBlur_12; }
	inline int32_t* get_address_of__ReflectionBlur_12() { return &____ReflectionBlur_12; }
	inline void set__ReflectionBlur_12(int32_t value)
	{
		____ReflectionBlur_12 = value;
	}

	inline static int32_t get_offset_of__MaxRayTraceDistance_13() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____MaxRayTraceDistance_13)); }
	inline int32_t get__MaxRayTraceDistance_13() const { return ____MaxRayTraceDistance_13; }
	inline int32_t* get_address_of__MaxRayTraceDistance_13() { return &____MaxRayTraceDistance_13; }
	inline void set__MaxRayTraceDistance_13(int32_t value)
	{
		____MaxRayTraceDistance_13 = value;
	}

	inline static int32_t get_offset_of__FadeDistance_14() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FadeDistance_14)); }
	inline int32_t get__FadeDistance_14() const { return ____FadeDistance_14; }
	inline int32_t* get_address_of__FadeDistance_14() { return &____FadeDistance_14; }
	inline void set__FadeDistance_14(int32_t value)
	{
		____FadeDistance_14 = value;
	}

	inline static int32_t get_offset_of__LayerThickness_15() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____LayerThickness_15)); }
	inline int32_t get__LayerThickness_15() const { return ____LayerThickness_15; }
	inline int32_t* get_address_of__LayerThickness_15() { return &____LayerThickness_15; }
	inline void set__LayerThickness_15(int32_t value)
	{
		____LayerThickness_15 = value;
	}

	inline static int32_t get_offset_of__SSRMultiplier_16() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____SSRMultiplier_16)); }
	inline int32_t get__SSRMultiplier_16() const { return ____SSRMultiplier_16; }
	inline int32_t* get_address_of__SSRMultiplier_16() { return &____SSRMultiplier_16; }
	inline void set__SSRMultiplier_16(int32_t value)
	{
		____SSRMultiplier_16 = value;
	}

	inline static int32_t get_offset_of__FresnelFade_17() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FresnelFade_17)); }
	inline int32_t get__FresnelFade_17() const { return ____FresnelFade_17; }
	inline int32_t* get_address_of__FresnelFade_17() { return &____FresnelFade_17; }
	inline void set__FresnelFade_17(int32_t value)
	{
		____FresnelFade_17 = value;
	}

	inline static int32_t get_offset_of__FresnelFadePower_18() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FresnelFadePower_18)); }
	inline int32_t get__FresnelFadePower_18() const { return ____FresnelFadePower_18; }
	inline int32_t* get_address_of__FresnelFadePower_18() { return &____FresnelFadePower_18; }
	inline void set__FresnelFadePower_18(int32_t value)
	{
		____FresnelFadePower_18 = value;
	}

	inline static int32_t get_offset_of__ReflectionBufferSize_19() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ReflectionBufferSize_19)); }
	inline int32_t get__ReflectionBufferSize_19() const { return ____ReflectionBufferSize_19; }
	inline int32_t* get_address_of__ReflectionBufferSize_19() { return &____ReflectionBufferSize_19; }
	inline void set__ReflectionBufferSize_19(int32_t value)
	{
		____ReflectionBufferSize_19 = value;
	}

	inline static int32_t get_offset_of__ScreenSize_20() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ScreenSize_20)); }
	inline int32_t get__ScreenSize_20() const { return ____ScreenSize_20; }
	inline int32_t* get_address_of__ScreenSize_20() { return &____ScreenSize_20; }
	inline void set__ScreenSize_20(int32_t value)
	{
		____ScreenSize_20 = value;
	}

	inline static int32_t get_offset_of__InvScreenSize_21() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____InvScreenSize_21)); }
	inline int32_t get__InvScreenSize_21() const { return ____InvScreenSize_21; }
	inline int32_t* get_address_of__InvScreenSize_21() { return &____InvScreenSize_21; }
	inline void set__InvScreenSize_21(int32_t value)
	{
		____InvScreenSize_21 = value;
	}

	inline static int32_t get_offset_of__ProjInfo_22() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ProjInfo_22)); }
	inline int32_t get__ProjInfo_22() const { return ____ProjInfo_22; }
	inline int32_t* get_address_of__ProjInfo_22() { return &____ProjInfo_22; }
	inline void set__ProjInfo_22(int32_t value)
	{
		____ProjInfo_22 = value;
	}

	inline static int32_t get_offset_of__CameraClipInfo_23() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____CameraClipInfo_23)); }
	inline int32_t get__CameraClipInfo_23() const { return ____CameraClipInfo_23; }
	inline int32_t* get_address_of__CameraClipInfo_23() { return &____CameraClipInfo_23; }
	inline void set__CameraClipInfo_23(int32_t value)
	{
		____CameraClipInfo_23 = value;
	}

	inline static int32_t get_offset_of__ProjectToPixelMatrix_24() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____ProjectToPixelMatrix_24)); }
	inline int32_t get__ProjectToPixelMatrix_24() const { return ____ProjectToPixelMatrix_24; }
	inline int32_t* get_address_of__ProjectToPixelMatrix_24() { return &____ProjectToPixelMatrix_24; }
	inline void set__ProjectToPixelMatrix_24(int32_t value)
	{
		____ProjectToPixelMatrix_24 = value;
	}

	inline static int32_t get_offset_of__WorldToCameraMatrix_25() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____WorldToCameraMatrix_25)); }
	inline int32_t get__WorldToCameraMatrix_25() const { return ____WorldToCameraMatrix_25; }
	inline int32_t* get_address_of__WorldToCameraMatrix_25() { return &____WorldToCameraMatrix_25; }
	inline void set__WorldToCameraMatrix_25(int32_t value)
	{
		____WorldToCameraMatrix_25 = value;
	}

	inline static int32_t get_offset_of__CameraToWorldMatrix_26() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____CameraToWorldMatrix_26)); }
	inline int32_t get__CameraToWorldMatrix_26() const { return ____CameraToWorldMatrix_26; }
	inline int32_t* get_address_of__CameraToWorldMatrix_26() { return &____CameraToWorldMatrix_26; }
	inline void set__CameraToWorldMatrix_26(int32_t value)
	{
		____CameraToWorldMatrix_26 = value;
	}

	inline static int32_t get_offset_of__Axis_27() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____Axis_27)); }
	inline int32_t get__Axis_27() const { return ____Axis_27; }
	inline int32_t* get_address_of__Axis_27() { return &____Axis_27; }
	inline void set__Axis_27(int32_t value)
	{
		____Axis_27 = value;
	}

	inline static int32_t get_offset_of__CurrentMipLevel_28() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____CurrentMipLevel_28)); }
	inline int32_t get__CurrentMipLevel_28() const { return ____CurrentMipLevel_28; }
	inline int32_t* get_address_of__CurrentMipLevel_28() { return &____CurrentMipLevel_28; }
	inline void set__CurrentMipLevel_28(int32_t value)
	{
		____CurrentMipLevel_28 = value;
	}

	inline static int32_t get_offset_of__NormalAndRoughnessTexture_29() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____NormalAndRoughnessTexture_29)); }
	inline int32_t get__NormalAndRoughnessTexture_29() const { return ____NormalAndRoughnessTexture_29; }
	inline int32_t* get_address_of__NormalAndRoughnessTexture_29() { return &____NormalAndRoughnessTexture_29; }
	inline void set__NormalAndRoughnessTexture_29(int32_t value)
	{
		____NormalAndRoughnessTexture_29 = value;
	}

	inline static int32_t get_offset_of__HitPointTexture_30() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____HitPointTexture_30)); }
	inline int32_t get__HitPointTexture_30() const { return ____HitPointTexture_30; }
	inline int32_t* get_address_of__HitPointTexture_30() { return &____HitPointTexture_30; }
	inline void set__HitPointTexture_30(int32_t value)
	{
		____HitPointTexture_30 = value;
	}

	inline static int32_t get_offset_of__BlurTexture_31() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____BlurTexture_31)); }
	inline int32_t get__BlurTexture_31() const { return ____BlurTexture_31; }
	inline int32_t* get_address_of__BlurTexture_31() { return &____BlurTexture_31; }
	inline void set__BlurTexture_31(int32_t value)
	{
		____BlurTexture_31 = value;
	}

	inline static int32_t get_offset_of__FilteredReflections_32() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FilteredReflections_32)); }
	inline int32_t get__FilteredReflections_32() const { return ____FilteredReflections_32; }
	inline int32_t* get_address_of__FilteredReflections_32() { return &____FilteredReflections_32; }
	inline void set__FilteredReflections_32(int32_t value)
	{
		____FilteredReflections_32 = value;
	}

	inline static int32_t get_offset_of__FinalReflectionTexture_33() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____FinalReflectionTexture_33)); }
	inline int32_t get__FinalReflectionTexture_33() const { return ____FinalReflectionTexture_33; }
	inline int32_t* get_address_of__FinalReflectionTexture_33() { return &____FinalReflectionTexture_33; }
	inline void set__FinalReflectionTexture_33(int32_t value)
	{
		____FinalReflectionTexture_33 = value;
	}

	inline static int32_t get_offset_of__TempTexture_34() { return static_cast<int32_t>(offsetof(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields, ____TempTexture_34)); }
	inline int32_t get__TempTexture_34() const { return ____TempTexture_34; }
	inline int32_t* get_address_of__TempTexture_34() { return &____TempTexture_34; }
	inline void set__TempTexture_34(int32_t value)
	{
		____TempTexture_34 = value;
	}
};


// UnityEngine.PostProcessing.TaaComponent/Uniforms
struct Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_Jitter
	int32_t ____Jitter_0;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_SharpenParameters
	int32_t ____SharpenParameters_1;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_FinalBlendParameters
	int32_t ____FinalBlendParameters_2;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_HistoryTex
	int32_t ____HistoryTex_3;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent/Uniforms::_MainTex
	int32_t ____MainTex_4;

public:
	inline static int32_t get_offset_of__Jitter_0() { return static_cast<int32_t>(offsetof(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields, ____Jitter_0)); }
	inline int32_t get__Jitter_0() const { return ____Jitter_0; }
	inline int32_t* get_address_of__Jitter_0() { return &____Jitter_0; }
	inline void set__Jitter_0(int32_t value)
	{
		____Jitter_0 = value;
	}

	inline static int32_t get_offset_of__SharpenParameters_1() { return static_cast<int32_t>(offsetof(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields, ____SharpenParameters_1)); }
	inline int32_t get__SharpenParameters_1() const { return ____SharpenParameters_1; }
	inline int32_t* get_address_of__SharpenParameters_1() { return &____SharpenParameters_1; }
	inline void set__SharpenParameters_1(int32_t value)
	{
		____SharpenParameters_1 = value;
	}

	inline static int32_t get_offset_of__FinalBlendParameters_2() { return static_cast<int32_t>(offsetof(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields, ____FinalBlendParameters_2)); }
	inline int32_t get__FinalBlendParameters_2() const { return ____FinalBlendParameters_2; }
	inline int32_t* get_address_of__FinalBlendParameters_2() { return &____FinalBlendParameters_2; }
	inline void set__FinalBlendParameters_2(int32_t value)
	{
		____FinalBlendParameters_2 = value;
	}

	inline static int32_t get_offset_of__HistoryTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields, ____HistoryTex_3)); }
	inline int32_t get__HistoryTex_3() const { return ____HistoryTex_3; }
	inline int32_t* get_address_of__HistoryTex_3() { return &____HistoryTex_3; }
	inline void set__HistoryTex_3(int32_t value)
	{
		____HistoryTex_3 = value;
	}

	inline static int32_t get_offset_of__MainTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields, ____MainTex_4)); }
	inline int32_t get__MainTex_4() const { return ____MainTex_4; }
	inline int32_t* get_address_of__MainTex_4() { return &____MainTex_4; }
	inline void set__MainTex_4(int32_t value)
	{
		____MainTex_4 = value;
	}
};


// UnityEngine.PostProcessing.UserLutComponent/Uniforms
struct Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut
	int32_t ____UserLut_0;
	// System.Int32 UnityEngine.PostProcessing.UserLutComponent/Uniforms::_UserLut_Params
	int32_t ____UserLut_Params_1;

public:
	inline static int32_t get_offset_of__UserLut_0() { return static_cast<int32_t>(offsetof(Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_StaticFields, ____UserLut_0)); }
	inline int32_t get__UserLut_0() const { return ____UserLut_0; }
	inline int32_t* get_address_of__UserLut_0() { return &____UserLut_0; }
	inline void set__UserLut_0(int32_t value)
	{
		____UserLut_0 = value;
	}

	inline static int32_t get_offset_of__UserLut_Params_1() { return static_cast<int32_t>(offsetof(Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_StaticFields, ____UserLut_Params_1)); }
	inline int32_t get__UserLut_Params_1() const { return ____UserLut_Params_1; }
	inline int32_t* get_address_of__UserLut_Params_1() { return &____UserLut_Params_1; }
	inline void set__UserLut_Params_1(int32_t value)
	{
		____UserLut_Params_1 = value;
	}
};


// UnityEngine.PostProcessing.VignetteComponent/Uniforms
struct Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Color
	int32_t ____Vignette_Color_0;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Center
	int32_t ____Vignette_Center_1;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Settings
	int32_t ____Vignette_Settings_2;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Mask
	int32_t ____Vignette_Mask_3;
	// System.Int32 UnityEngine.PostProcessing.VignetteComponent/Uniforms::_Vignette_Opacity
	int32_t ____Vignette_Opacity_4;

public:
	inline static int32_t get_offset_of__Vignette_Color_0() { return static_cast<int32_t>(offsetof(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields, ____Vignette_Color_0)); }
	inline int32_t get__Vignette_Color_0() const { return ____Vignette_Color_0; }
	inline int32_t* get_address_of__Vignette_Color_0() { return &____Vignette_Color_0; }
	inline void set__Vignette_Color_0(int32_t value)
	{
		____Vignette_Color_0 = value;
	}

	inline static int32_t get_offset_of__Vignette_Center_1() { return static_cast<int32_t>(offsetof(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields, ____Vignette_Center_1)); }
	inline int32_t get__Vignette_Center_1() const { return ____Vignette_Center_1; }
	inline int32_t* get_address_of__Vignette_Center_1() { return &____Vignette_Center_1; }
	inline void set__Vignette_Center_1(int32_t value)
	{
		____Vignette_Center_1 = value;
	}

	inline static int32_t get_offset_of__Vignette_Settings_2() { return static_cast<int32_t>(offsetof(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields, ____Vignette_Settings_2)); }
	inline int32_t get__Vignette_Settings_2() const { return ____Vignette_Settings_2; }
	inline int32_t* get_address_of__Vignette_Settings_2() { return &____Vignette_Settings_2; }
	inline void set__Vignette_Settings_2(int32_t value)
	{
		____Vignette_Settings_2 = value;
	}

	inline static int32_t get_offset_of__Vignette_Mask_3() { return static_cast<int32_t>(offsetof(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields, ____Vignette_Mask_3)); }
	inline int32_t get__Vignette_Mask_3() const { return ____Vignette_Mask_3; }
	inline int32_t* get_address_of__Vignette_Mask_3() { return &____Vignette_Mask_3; }
	inline void set__Vignette_Mask_3(int32_t value)
	{
		____Vignette_Mask_3 = value;
	}

	inline static int32_t get_offset_of__Vignette_Opacity_4() { return static_cast<int32_t>(offsetof(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields, ____Vignette_Opacity_4)); }
	inline int32_t get__Vignette_Opacity_4() const { return ____Vignette_Opacity_4; }
	inline int32_t* get_address_of__Vignette_Opacity_4() { return &____Vignette_Opacity_4; }
	inline void set__Vignette_Opacity_4(int32_t value)
	{
		____Vignette_Opacity_4 = value;
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_7 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 
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
		uint8_t __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2__padding[24];
	};

public:
};


// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings
struct FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::subpixelAliasingRemovalAmount
	float ___subpixelAliasingRemovalAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_2;

public:
	inline static int32_t get_offset_of_subpixelAliasingRemovalAmount_0() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7, ___subpixelAliasingRemovalAmount_0)); }
	inline float get_subpixelAliasingRemovalAmount_0() const { return ___subpixelAliasingRemovalAmount_0; }
	inline float* get_address_of_subpixelAliasingRemovalAmount_0() { return &___subpixelAliasingRemovalAmount_0; }
	inline void set_subpixelAliasingRemovalAmount_0(float value)
	{
		___subpixelAliasingRemovalAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_1() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7, ___edgeDetectionThreshold_1)); }
	inline float get_edgeDetectionThreshold_1() const { return ___edgeDetectionThreshold_1; }
	inline float* get_address_of_edgeDetectionThreshold_1() { return &___edgeDetectionThreshold_1; }
	inline void set_edgeDetectionThreshold_1(float value)
	{
		___edgeDetectionThreshold_1 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_2() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7, ___minimumRequiredLuminance_2)); }
	inline float get_minimumRequiredLuminance_2() const { return ___minimumRequiredLuminance_2; }
	inline float* get_address_of_minimumRequiredLuminance_2() { return &___minimumRequiredLuminance_2; }
	inline void set_minimumRequiredLuminance_2(float value)
	{
		___minimumRequiredLuminance_2 = value;
	}
};

struct FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::presets
	FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* ___presets_3;

public:
	inline static int32_t get_offset_of_presets_3() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_StaticFields, ___presets_3)); }
	inline FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* get_presets_3() const { return ___presets_3; }
	inline FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD** get_address_of_presets_3() { return &___presets_3; }
	inline void set_presets_3(FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* value)
	{
		___presets_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presets_3), (void*)value);
	}
};


// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings
struct TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::sharpen
	float ___sharpen_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::motionBlending
	float ___motionBlending_3;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpen_1() { return static_cast<int32_t>(offsetof(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963, ___sharpen_1)); }
	inline float get_sharpen_1() const { return ___sharpen_1; }
	inline float* get_address_of_sharpen_1() { return &___sharpen_1; }
	inline void set_sharpen_1(float value)
	{
		___sharpen_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}
};


// UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A 
{
public:
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::threshold
	float ___threshold_1;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::softKnee
	float ___softKnee_2;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::radius
	float ___radius_3;
	// System.Boolean UnityEngine.PostProcessing.BloomModel/BloomSettings::antiFlicker
	bool ___antiFlicker_4;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_softKnee_2() { return static_cast<int32_t>(offsetof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A, ___softKnee_2)); }
	inline float get_softKnee_2() const { return ___softKnee_2; }
	inline float* get_address_of_softKnee_2() { return &___softKnee_2; }
	inline void set_softKnee_2(float value)
	{
		___softKnee_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_antiFlicker_4() { return static_cast<int32_t>(offsetof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A, ___antiFlicker_4)); }
	inline bool get_antiFlicker_4() const { return ___antiFlicker_4; }
	inline bool* get_address_of_antiFlicker_4() { return &___antiFlicker_4; }
	inline void set_antiFlicker_4(bool value)
	{
		___antiFlicker_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};

// UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6 
{
public:
	// UnityEngine.Texture UnityEngine.PostProcessing.BloomModel/LensDirtSettings::texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/LensDirtSettings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6, ___texture_0)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_texture_0() const { return ___texture_0; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com
{
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_0;
	float ___intensity_1;
};

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings
struct DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings::scale
	float ___scale_0;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}
};


// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings
struct MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E 
{
public:
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::sourceOpacity
	float ___sourceOpacity_0;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageOpacity
	float ___motionImageOpacity_1;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionImageAmplitude
	float ___motionImageAmplitude_2;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsOpacity
	float ___motionVectorsOpacity_3;
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsResolution
	int32_t ___motionVectorsResolution_4;
	// System.Single UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::motionVectorsAmplitude
	float ___motionVectorsAmplitude_5;

public:
	inline static int32_t get_offset_of_sourceOpacity_0() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___sourceOpacity_0)); }
	inline float get_sourceOpacity_0() const { return ___sourceOpacity_0; }
	inline float* get_address_of_sourceOpacity_0() { return &___sourceOpacity_0; }
	inline void set_sourceOpacity_0(float value)
	{
		___sourceOpacity_0 = value;
	}

	inline static int32_t get_offset_of_motionImageOpacity_1() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___motionImageOpacity_1)); }
	inline float get_motionImageOpacity_1() const { return ___motionImageOpacity_1; }
	inline float* get_address_of_motionImageOpacity_1() { return &___motionImageOpacity_1; }
	inline void set_motionImageOpacity_1(float value)
	{
		___motionImageOpacity_1 = value;
	}

	inline static int32_t get_offset_of_motionImageAmplitude_2() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___motionImageAmplitude_2)); }
	inline float get_motionImageAmplitude_2() const { return ___motionImageAmplitude_2; }
	inline float* get_address_of_motionImageAmplitude_2() { return &___motionImageAmplitude_2; }
	inline void set_motionImageAmplitude_2(float value)
	{
		___motionImageAmplitude_2 = value;
	}

	inline static int32_t get_offset_of_motionVectorsOpacity_3() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___motionVectorsOpacity_3)); }
	inline float get_motionVectorsOpacity_3() const { return ___motionVectorsOpacity_3; }
	inline float* get_address_of_motionVectorsOpacity_3() { return &___motionVectorsOpacity_3; }
	inline void set_motionVectorsOpacity_3(float value)
	{
		___motionVectorsOpacity_3 = value;
	}

	inline static int32_t get_offset_of_motionVectorsResolution_4() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___motionVectorsResolution_4)); }
	inline int32_t get_motionVectorsResolution_4() const { return ___motionVectorsResolution_4; }
	inline int32_t* get_address_of_motionVectorsResolution_4() { return &___motionVectorsResolution_4; }
	inline void set_motionVectorsResolution_4(int32_t value)
	{
		___motionVectorsResolution_4 = value;
	}

	inline static int32_t get_offset_of_motionVectorsAmplitude_5() { return static_cast<int32_t>(offsetof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E, ___motionVectorsAmplitude_5)); }
	inline float get_motionVectorsAmplitude_5() const { return ___motionVectorsAmplitude_5; }
	inline float* get_address_of_motionVectorsAmplitude_5() { return &___motionVectorsAmplitude_5; }
	inline void set_motionVectorsAmplitude_5(float value)
	{
		___motionVectorsAmplitude_5 = value;
	}
};


// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::spectralTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___spectralTexture_0;
	// System.Single UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_spectralTexture_0() { return static_cast<int32_t>(offsetof(Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35, ___spectralTexture_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_spectralTexture_0() const { return ___spectralTexture_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_spectralTexture_0() { return &___spectralTexture_0; }
	inline void set_spectralTexture_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___spectralTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spectralTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___spectralTexture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___spectralTexture_0;
	float ___intensity_1;
};

// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings
struct BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C 
{
public:
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::postExposure
	float ___postExposure_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::temperature
	float ___temperature_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::tint
	float ___tint_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::hueShift
	float ___hueShift_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::saturation
	float ___saturation_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::contrast
	float ___contrast_5;

public:
	inline static int32_t get_offset_of_postExposure_0() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___postExposure_0)); }
	inline float get_postExposure_0() const { return ___postExposure_0; }
	inline float* get_address_of_postExposure_0() { return &___postExposure_0; }
	inline void set_postExposure_0(float value)
	{
		___postExposure_0 = value;
	}

	inline static int32_t get_offset_of_temperature_1() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___temperature_1)); }
	inline float get_temperature_1() const { return ___temperature_1; }
	inline float* get_address_of_temperature_1() { return &___temperature_1; }
	inline void set_temperature_1(float value)
	{
		___temperature_1 = value;
	}

	inline static int32_t get_offset_of_tint_2() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___tint_2)); }
	inline float get_tint_2() const { return ___tint_2; }
	inline float* get_address_of_tint_2() { return &___tint_2; }
	inline void set_tint_2(float value)
	{
		___tint_2 = value;
	}

	inline static int32_t get_offset_of_hueShift_3() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___hueShift_3)); }
	inline float get_hueShift_3() const { return ___hueShift_3; }
	inline float* get_address_of_hueShift_3() { return &___hueShift_3; }
	inline void set_hueShift_3(float value)
	{
		___hueShift_3 = value;
	}

	inline static int32_t get_offset_of_saturation_4() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___saturation_4)); }
	inline float get_saturation_4() const { return ___saturation_4; }
	inline float* get_address_of_saturation_4() { return &___saturation_4; }
	inline void set_saturation_4(float value)
	{
		___saturation_4 = value;
	}

	inline static int32_t get_offset_of_contrast_5() { return static_cast<int32_t>(offsetof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C, ___contrast_5)); }
	inline float get_contrast_5() const { return ___contrast_5; }
	inline float* get_address_of_contrast_5() { return &___contrast_5; }
	inline void set_contrast_5(float value)
	{
		___contrast_5 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6 
{
public:
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::master
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___master_0;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::red
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___red_1;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::green
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___green_2;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::blue
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___blue_3;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVShue
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVShue_4;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVSsat
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVSsat_5;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::satVSsat
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___satVSsat_6;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::lumVSsat
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___lumVSsat_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurrentEditingCurve
	int32_t ___e_CurrentEditingCurve_8;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveY
	bool ___e_CurveY_9;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveR
	bool ___e_CurveR_10;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveG
	bool ___e_CurveG_11;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveB
	bool ___e_CurveB_12;

public:
	inline static int32_t get_offset_of_master_0() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___master_0)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_master_0() const { return ___master_0; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_master_0() { return &___master_0; }
	inline void set_master_0(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___master_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___master_0), (void*)value);
	}

	inline static int32_t get_offset_of_red_1() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___red_1)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_red_1() const { return ___red_1; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_red_1() { return &___red_1; }
	inline void set_red_1(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___red_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___red_1), (void*)value);
	}

	inline static int32_t get_offset_of_green_2() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___green_2)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_green_2() const { return ___green_2; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_green_2() { return &___green_2; }
	inline void set_green_2(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___green_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___green_2), (void*)value);
	}

	inline static int32_t get_offset_of_blue_3() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___blue_3)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_blue_3() const { return ___blue_3; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_blue_3() { return &___blue_3; }
	inline void set_blue_3(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___blue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blue_3), (void*)value);
	}

	inline static int32_t get_offset_of_hueVShue_4() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___hueVShue_4)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_hueVShue_4() const { return ___hueVShue_4; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_hueVShue_4() { return &___hueVShue_4; }
	inline void set_hueVShue_4(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___hueVShue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hueVShue_4), (void*)value);
	}

	inline static int32_t get_offset_of_hueVSsat_5() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___hueVSsat_5)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_hueVSsat_5() const { return ___hueVSsat_5; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_hueVSsat_5() { return &___hueVSsat_5; }
	inline void set_hueVSsat_5(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___hueVSsat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hueVSsat_5), (void*)value);
	}

	inline static int32_t get_offset_of_satVSsat_6() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___satVSsat_6)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_satVSsat_6() const { return ___satVSsat_6; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_satVSsat_6() { return &___satVSsat_6; }
	inline void set_satVSsat_6(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___satVSsat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___satVSsat_6), (void*)value);
	}

	inline static int32_t get_offset_of_lumVSsat_7() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___lumVSsat_7)); }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * get_lumVSsat_7() const { return ___lumVSsat_7; }
	inline ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 ** get_address_of_lumVSsat_7() { return &___lumVSsat_7; }
	inline void set_lumVSsat_7(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * value)
	{
		___lumVSsat_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lumVSsat_7), (void*)value);
	}

	inline static int32_t get_offset_of_e_CurrentEditingCurve_8() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___e_CurrentEditingCurve_8)); }
	inline int32_t get_e_CurrentEditingCurve_8() const { return ___e_CurrentEditingCurve_8; }
	inline int32_t* get_address_of_e_CurrentEditingCurve_8() { return &___e_CurrentEditingCurve_8; }
	inline void set_e_CurrentEditingCurve_8(int32_t value)
	{
		___e_CurrentEditingCurve_8 = value;
	}

	inline static int32_t get_offset_of_e_CurveY_9() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___e_CurveY_9)); }
	inline bool get_e_CurveY_9() const { return ___e_CurveY_9; }
	inline bool* get_address_of_e_CurveY_9() { return &___e_CurveY_9; }
	inline void set_e_CurveY_9(bool value)
	{
		___e_CurveY_9 = value;
	}

	inline static int32_t get_offset_of_e_CurveR_10() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___e_CurveR_10)); }
	inline bool get_e_CurveR_10() const { return ___e_CurveR_10; }
	inline bool* get_address_of_e_CurveR_10() { return &___e_CurveR_10; }
	inline void set_e_CurveR_10(bool value)
	{
		___e_CurveR_10 = value;
	}

	inline static int32_t get_offset_of_e_CurveG_11() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___e_CurveG_11)); }
	inline bool get_e_CurveG_11() const { return ___e_CurveG_11; }
	inline bool* get_address_of_e_CurveG_11() { return &___e_CurveG_11; }
	inline void set_e_CurveG_11(bool value)
	{
		___e_CurveG_11 = value;
	}

	inline static int32_t get_offset_of_e_CurveB_12() { return static_cast<int32_t>(offsetof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6, ___e_CurveB_12)); }
	inline bool get_e_CurveB_12() const { return ___e_CurveB_12; }
	inline bool* get_address_of_e_CurveB_12() { return &___e_CurveB_12; }
	inline void set_e_CurveB_12(bool value)
	{
		___e_CurveB_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke
{
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___master_0;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___red_1;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___green_2;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___blue_3;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVShue_4;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVSsat_5;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___satVSsat_6;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com
{
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___master_0;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___red_1;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___green_2;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___blue_3;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVShue_4;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___hueVSsat_5;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___satVSsat_6;
	ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};

// UnityEngine.PostProcessing.DitheringModel/Settings
struct Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68__padding[1];
	};

public:
};


// UnityEngine.PostProcessing.FogModel/Settings
struct Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88 
{
public:
	// System.Boolean UnityEngine.PostProcessing.FogModel/Settings::excludeSkybox
	bool ___excludeSkybox_0;

public:
	inline static int32_t get_offset_of_excludeSkybox_0() { return static_cast<int32_t>(offsetof(Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88, ___excludeSkybox_0)); }
	inline bool get_excludeSkybox_0() const { return ___excludeSkybox_0; }
	inline bool* get_address_of_excludeSkybox_0() { return &___excludeSkybox_0; }
	inline void set_excludeSkybox_0(bool value)
	{
		___excludeSkybox_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.FogModel/Settings
struct Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_pinvoke
{
	int32_t ___excludeSkybox_0;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.FogModel/Settings
struct Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_com
{
	int32_t ___excludeSkybox_0;
};

// UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1 
{
public:
	// System.Boolean UnityEngine.PostProcessing.GrainModel/Settings::colored
	bool ___colored_0;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::intensity
	float ___intensity_1;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::size
	float ___size_2;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::luminanceContribution
	float ___luminanceContribution_3;

public:
	inline static int32_t get_offset_of_colored_0() { return static_cast<int32_t>(offsetof(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1, ___colored_0)); }
	inline bool get_colored_0() const { return ___colored_0; }
	inline bool* get_address_of_colored_0() { return &___colored_0; }
	inline void set_colored_0(bool value)
	{
		___colored_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_luminanceContribution_3() { return static_cast<int32_t>(offsetof(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1, ___luminanceContribution_3)); }
	inline float get_luminanceContribution_3() const { return ___luminanceContribution_3; }
	inline float* get_address_of_luminanceContribution_3() { return &___luminanceContribution_3; }
	inline void set_luminanceContribution_3(float value)
	{
		___luminanceContribution_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_pinvoke
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_com
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};

// UnityEngine.PostProcessing.MotionBlurModel/Settings
struct Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5 
{
public:
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::shutterAngle
	float ___shutterAngle_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurModel/Settings::sampleCount
	int32_t ___sampleCount_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::frameBlending
	float ___frameBlending_2;

public:
	inline static int32_t get_offset_of_shutterAngle_0() { return static_cast<int32_t>(offsetof(Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5, ___shutterAngle_0)); }
	inline float get_shutterAngle_0() const { return ___shutterAngle_0; }
	inline float* get_address_of_shutterAngle_0() { return &___shutterAngle_0; }
	inline void set_shutterAngle_0(float value)
	{
		___shutterAngle_0 = value;
	}

	inline static int32_t get_offset_of_sampleCount_1() { return static_cast<int32_t>(offsetof(Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5, ___sampleCount_1)); }
	inline int32_t get_sampleCount_1() const { return ___sampleCount_1; }
	inline int32_t* get_address_of_sampleCount_1() { return &___sampleCount_1; }
	inline void set_sampleCount_1(int32_t value)
	{
		___sampleCount_1 = value;
	}

	inline static int32_t get_offset_of_frameBlending_2() { return static_cast<int32_t>(offsetof(Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5, ___frameBlending_2)); }
	inline float get_frameBlending_2() const { return ___frameBlending_2; }
	inline float* get_address_of_frameBlending_2() { return &___frameBlending_2; }
	inline void set_frameBlending_2(float value)
	{
		___frameBlending_2 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings
struct IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::reflectionMultiplier
	float ___reflectionMultiplier_0;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fadeDistance
	float ___fadeDistance_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFade
	float ___fresnelFade_2;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings::fresnelFadePower
	float ___fresnelFadePower_3;

public:
	inline static int32_t get_offset_of_reflectionMultiplier_0() { return static_cast<int32_t>(offsetof(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C, ___reflectionMultiplier_0)); }
	inline float get_reflectionMultiplier_0() const { return ___reflectionMultiplier_0; }
	inline float* get_address_of_reflectionMultiplier_0() { return &___reflectionMultiplier_0; }
	inline void set_reflectionMultiplier_0(float value)
	{
		___reflectionMultiplier_0 = value;
	}

	inline static int32_t get_offset_of_fadeDistance_1() { return static_cast<int32_t>(offsetof(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C, ___fadeDistance_1)); }
	inline float get_fadeDistance_1() const { return ___fadeDistance_1; }
	inline float* get_address_of_fadeDistance_1() { return &___fadeDistance_1; }
	inline void set_fadeDistance_1(float value)
	{
		___fadeDistance_1 = value;
	}

	inline static int32_t get_offset_of_fresnelFade_2() { return static_cast<int32_t>(offsetof(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C, ___fresnelFade_2)); }
	inline float get_fresnelFade_2() const { return ___fresnelFade_2; }
	inline float* get_address_of_fresnelFade_2() { return &___fresnelFade_2; }
	inline void set_fresnelFade_2(float value)
	{
		___fresnelFade_2 = value;
	}

	inline static int32_t get_offset_of_fresnelFadePower_3() { return static_cast<int32_t>(offsetof(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C, ___fresnelFadePower_3)); }
	inline float get_fresnelFadePower_3() const { return ___fresnelFadePower_3; }
	inline float* get_address_of_fresnelFadePower_3() { return &___fresnelFadePower_3; }
	inline void set_fresnelFadePower_3(float value)
	{
		___fresnelFadePower_3 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask
struct ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A 
{
public:
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask::intensity
	float ___intensity_0;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}
};


// UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.UserLutModel/Settings::lut
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lut_0;
	// System.Single UnityEngine.PostProcessing.UserLutModel/Settings::contribution
	float ___contribution_1;

public:
	inline static int32_t get_offset_of_lut_0() { return static_cast<int32_t>(offsetof(Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D, ___lut_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_lut_0() const { return ___lut_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_lut_0() { return &___lut_0; }
	inline void set_lut_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___lut_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lut_0), (void*)value);
	}

	inline static int32_t get_offset_of_contribution_1() { return static_cast<int32_t>(offsetof(Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D, ___contribution_1)); }
	inline float get_contribution_1() const { return ___contribution_1; }
	inline float* get_address_of_contribution_1() { return &___contribution_1; }
	inline void set_contribution_1(float value)
	{
		___contribution_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lut_0;
	float ___contribution_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___lut_0;
	float ___contribution_1;
};

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::lumaTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___lumaTexture_0;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::chromaTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___chromaTexture_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_Time
	float ___m_Time_2;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_MRT
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_MRT_3;

public:
	inline static int32_t get_offset_of_lumaTexture_0() { return static_cast<int32_t>(offsetof(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629, ___lumaTexture_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_lumaTexture_0() const { return ___lumaTexture_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_lumaTexture_0() { return &___lumaTexture_0; }
	inline void set_lumaTexture_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___lumaTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lumaTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_chromaTexture_1() { return static_cast<int32_t>(offsetof(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629, ___chromaTexture_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_chromaTexture_1() const { return ___chromaTexture_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_chromaTexture_1() { return &___chromaTexture_1; }
	inline void set_chromaTexture_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___chromaTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chromaTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Time_2() { return static_cast<int32_t>(offsetof(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629, ___m_Time_2)); }
	inline float get_m_Time_2() const { return ___m_Time_2; }
	inline float* get_address_of_m_Time_2() { return &___m_Time_2; }
	inline void set_m_Time_2(float value)
	{
		___m_Time_2 = value;
	}

	inline static int32_t get_offset_of_m_MRT_3() { return static_cast<int32_t>(offsetof(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629, ___m_MRT_3)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_MRT_3() const { return ___m_MRT_3; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_MRT_3() { return &___m_MRT_3; }
	inline void set_m_MRT_3(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_MRT_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MRT_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_pinvoke
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___lumaTexture_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * ___m_MRT_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_com
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___lumaTexture_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * ___m_MRT_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53
	__StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  ___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1;

public:
	inline static int32_t get_offset_of_U304841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U304841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0() const { return ___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U304841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0() { return &___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0; }
	inline void set_U304841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0 = value;
	}

	inline static int32_t get_offset_of_DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1)); }
	inline __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  get_DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1() const { return ___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1; }
	inline __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 * get_address_of_DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1() { return &___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1; }
	inline void set_DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1(__StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2  value)
	{
		___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1 = value;
	}
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

// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
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


// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
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
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
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

// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
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


// UnityEngine.MeshTopology
struct MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
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


// UnityEngine.RenderTextureReadWrite
struct RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t4F64C0CC7097707282602ADD52760C1A86552580, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
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


// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset
struct FxaaPreset_tBFC14091E7A0DCA4819198293A7AA7B4881F8F89 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FxaaPreset_tBFC14091E7A0DCA4819198293A7AA7B4881F8F89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.AntialiasingModel/Method
struct Method_tA0C73719D73D772073CB32FC8D99053954B83BD8 
{
public:
	// System.Int32 UnityEngine.PostProcessing.AntialiasingModel/Method::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Method_tA0C73719D73D772073CB32FC8D99053954B83BD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05 
{
public:
	// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/Settings::bloom
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  ___bloom_0;
	// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/Settings::lensDirt
	LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  ___lensDirt_1;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05, ___bloom_0)); }
	inline BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  get_bloom_0() const { return ___bloom_0; }
	inline BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  value)
	{
		___bloom_0 = value;
	}

	inline static int32_t get_offset_of_lensDirt_1() { return static_cast<int32_t>(offsetof(Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05, ___lensDirt_1)); }
	inline LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  get_lensDirt_1() const { return ___lensDirt_1; }
	inline LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6 * get_address_of_lensDirt_1() { return &___lensDirt_1; }
	inline void set_lensDirt_1(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  value)
	{
		___lensDirt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lensDirt_1))->___texture_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_pinvoke
{
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke ___bloom_0;
	LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke ___lensDirt_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_com
{
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com ___bloom_0;
	LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com ___lensDirt_1;
};

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass
struct Pass_t31B0FA4E666F74CC9D513CF66A4F3A28234505A6 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t31B0FA4E666F74CC9D513CF66A4F3A28234505A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode
struct Mode_tD8ABB513EC88B0FB3B0FBE974FC938AEDAC3290F 
{
public:
	// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tD8ABB513EC88B0FB3B0FBE974FC938AEDAC3290F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings
struct ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E 
{
public:
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::red
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___red_0;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::green
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___green_1;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::blue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___blue_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::currentEditingChannel
	int32_t ___currentEditingChannel_3;

public:
	inline static int32_t get_offset_of_red_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E, ___red_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_red_0() const { return ___red_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_red_0() { return &___red_0; }
	inline void set_red_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___red_0 = value;
	}

	inline static int32_t get_offset_of_green_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E, ___green_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_green_1() const { return ___green_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_green_1() { return &___green_1; }
	inline void set_green_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___green_1 = value;
	}

	inline static int32_t get_offset_of_blue_2() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E, ___blue_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_blue_2() const { return ___blue_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_blue_2() { return &___blue_2; }
	inline void set_blue_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___blue_2 = value;
	}

	inline static int32_t get_offset_of_currentEditingChannel_3() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E, ___currentEditingChannel_3)); }
	inline int32_t get_currentEditingChannel_3() const { return ___currentEditingChannel_3; }
	inline int32_t* get_address_of_currentEditingChannel_3() { return &___currentEditingChannel_3; }
	inline void set_currentEditingChannel_3(int32_t value)
	{
		___currentEditingChannel_3 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode
struct ColorWheelMode_t072B298FE2A67FF946C35BDB11B536D14F267287 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorWheelMode_t072B298FE2A67FF946C35BDB11B536D14F267287, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings
struct LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::lift
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lift_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gamma
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___gamma_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gain
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___gain_2;

public:
	inline static int32_t get_offset_of_lift_0() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24, ___lift_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lift_0() const { return ___lift_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lift_0() { return &___lift_0; }
	inline void set_lift_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lift_0 = value;
	}

	inline static int32_t get_offset_of_gamma_1() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24, ___gamma_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_gamma_1() const { return ___gamma_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_gamma_1() { return &___gamma_1; }
	inline void set_gamma_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___gamma_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24, ___gain_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_gain_2() const { return ___gain_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___gain_2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings
struct LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::slope
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___slope_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::power
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___power_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::offset
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___offset_2;

public:
	inline static int32_t get_offset_of_slope_0() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59, ___slope_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_slope_0() const { return ___slope_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_slope_0() { return &___slope_0; }
	inline void set_slope_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___slope_0 = value;
	}

	inline static int32_t get_offset_of_power_1() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59, ___power_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_power_1() const { return ___power_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_power_1() { return &___power_1; }
	inline void set_power_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___power_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59, ___offset_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_offset_2() const { return ___offset_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___offset_2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper
struct Tonemapper_tA21C56115584176421C4D32F71D255F973DC8BBE 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/Tonemapper::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tonemapper_tA21C56115584176421C4D32F71D255F973DC8BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize
struct KernelSize_tDAEBD16AAEDFB796DF7574342F63143411B109C8 
{
public:
	// System.Int32 UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KernelSize_tDAEBD16AAEDFB796DF7574342F63143411B109C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType
struct EyeAdaptationType_t8D35B8EA106897E62581C4DBBB9895C182B9F6B5 
{
public:
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyeAdaptationType_t8D35B8EA106897E62581C4DBBB9895C182B9F6B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LightFlicker/LightSource
struct LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B 
{
public:
	// UnityEngine.Light LightFlicker/LightSource::source
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source_0;
	// System.Single LightFlicker/LightSource::intensity
	float ___intensity_1;
	// System.Single LightFlicker/LightSource::targetIntensity
	float ___targetIntensity_2;
	// UnityEngine.Vector3 LightFlicker/LightSource::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Vector3 LightFlicker/LightSource::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_4;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B, ___source_0)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_source_0() const { return ___source_0; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_0), (void*)value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_targetIntensity_2() { return static_cast<int32_t>(offsetof(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B, ___targetIntensity_2)); }
	inline float get_targetIntensity_2() const { return ___targetIntensity_2; }
	inline float* get_address_of_targetIntensity_2() { return &___targetIntensity_2; }
	inline void set_targetIntensity_2(float value)
	{
		___targetIntensity_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_targetPosition_4() { return static_cast<int32_t>(offsetof(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B, ___targetPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_4() const { return ___targetPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_4() { return &___targetPosition_4; }
	inline void set_targetPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_4 = value;
	}
};

// Native definition for P/Invoke marshalling of LightFlicker/LightSource
struct LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_pinvoke
{
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source_0;
	float ___intensity_1;
	float ___targetIntensity_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_4;
};
// Native definition for COM marshalling of LightFlicker/LightSource
struct LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_com
{
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source_0;
	float ___intensity_1;
	float ___targetIntensity_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_4;
};

// UnityEngine.PostProcessing.MotionBlurComponent/Pass
struct Pass_t04B59D1311E8F447B80557532E6011A532BB5CA5 
{
public:
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_t04B59D1311E8F447B80557532E6011A532BB5CA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex
struct PassIndex_tDA6FC5B00429A5F4D18B9E10BFFA35F7DB20B02D 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/PassIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PassIndex_tDA6FC5B00429A5F4D18B9E10BFFA35F7DB20B02D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType
struct SSRReflectionBlendType_t7ACB028DB5724EF99E71A6891459E0EAD26C42B0 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSRReflectionBlendType_t7ACB028DB5724EF99E71A6891459E0EAD26C42B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution
struct SSRResolution_t3B2FB3257250C5CBE380AF31BC0B21ECB2D8AE67 
{
public:
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSRResolution_t3B2FB3257250C5CBE380AF31BC0B21ECB2D8AE67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.PostProcessing.VignetteModel/Mode
struct Mode_tFE7FA5CD66ABF7D12D92E606E189543ECB6D5568 
{
public:
	// System.Int32 UnityEngine.PostProcessing.VignetteModel/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tFE7FA5CD66ABF7D12D92E606E189543ECB6D5568, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
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


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings
struct FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaPreset UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::preset
	int32_t ___preset_0;

public:
	inline static int32_t get_offset_of_preset_0() { return static_cast<int32_t>(offsetof(FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD, ___preset_0)); }
	inline int32_t get_preset_0() const { return ___preset_0; }
	inline int32_t* get_address_of_preset_0() { return &___preset_0; }
	inline void set_preset_0(int32_t value)
	{
		___preset_0 = value;
	}
};


// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings
struct Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA 
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::depth
	DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  ___depth_1;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::motionVectors
	MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  ___motionVectors_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA, ___depth_1)); }
	inline DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  get_depth_1() const { return ___depth_1; }
	inline DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E * get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_motionVectors_2() { return static_cast<int32_t>(offsetof(Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA, ___motionVectors_2)); }
	inline MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  get_motionVectors_2() const { return ___motionVectors_2; }
	inline MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E * get_address_of_motionVectors_2() { return &___motionVectors_2; }
	inline void set_motionVectors_2(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  value)
	{
		___motionVectors_2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings
struct ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::log
	LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  ___log_1;
	// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::linear
	LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  ___linear_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B, ___log_1)); }
	inline LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  get_log_1() const { return ___log_1; }
	inline LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59 * get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  value)
	{
		___log_1 = value;
	}

	inline static int32_t get_offset_of_linear_2() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B, ___linear_2)); }
	inline LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  get_linear_2() const { return ___linear_2; }
	inline LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24 * get_address_of_linear_2() { return &___linear_2; }
	inline void set_linear_2(LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  value)
	{
		___linear_2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings
struct TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Tonemapper UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::tonemapper
	int32_t ___tonemapper_0;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackIn
	float ___neutralBlackIn_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteIn
	float ___neutralWhiteIn_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralBlackOut
	float ___neutralBlackOut_3;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteOut
	float ___neutralWhiteOut_4;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteLevel
	float ___neutralWhiteLevel_5;
	// System.Single UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::neutralWhiteClip
	float ___neutralWhiteClip_6;

public:
	inline static int32_t get_offset_of_tonemapper_0() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___tonemapper_0)); }
	inline int32_t get_tonemapper_0() const { return ___tonemapper_0; }
	inline int32_t* get_address_of_tonemapper_0() { return &___tonemapper_0; }
	inline void set_tonemapper_0(int32_t value)
	{
		___tonemapper_0 = value;
	}

	inline static int32_t get_offset_of_neutralBlackIn_1() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralBlackIn_1)); }
	inline float get_neutralBlackIn_1() const { return ___neutralBlackIn_1; }
	inline float* get_address_of_neutralBlackIn_1() { return &___neutralBlackIn_1; }
	inline void set_neutralBlackIn_1(float value)
	{
		___neutralBlackIn_1 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteIn_2() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralWhiteIn_2)); }
	inline float get_neutralWhiteIn_2() const { return ___neutralWhiteIn_2; }
	inline float* get_address_of_neutralWhiteIn_2() { return &___neutralWhiteIn_2; }
	inline void set_neutralWhiteIn_2(float value)
	{
		___neutralWhiteIn_2 = value;
	}

	inline static int32_t get_offset_of_neutralBlackOut_3() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralBlackOut_3)); }
	inline float get_neutralBlackOut_3() const { return ___neutralBlackOut_3; }
	inline float* get_address_of_neutralBlackOut_3() { return &___neutralBlackOut_3; }
	inline void set_neutralBlackOut_3(float value)
	{
		___neutralBlackOut_3 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteOut_4() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralWhiteOut_4)); }
	inline float get_neutralWhiteOut_4() const { return ___neutralWhiteOut_4; }
	inline float* get_address_of_neutralWhiteOut_4() { return &___neutralWhiteOut_4; }
	inline void set_neutralWhiteOut_4(float value)
	{
		___neutralWhiteOut_4 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteLevel_5() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralWhiteLevel_5)); }
	inline float get_neutralWhiteLevel_5() const { return ___neutralWhiteLevel_5; }
	inline float* get_address_of_neutralWhiteLevel_5() { return &___neutralWhiteLevel_5; }
	inline void set_neutralWhiteLevel_5(float value)
	{
		___neutralWhiteLevel_5 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteClip_6() { return static_cast<int32_t>(offsetof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D, ___neutralWhiteClip_6)); }
	inline float get_neutralWhiteClip_6() const { return ___neutralWhiteClip_6; }
	inline float* get_address_of_neutralWhiteClip_6() { return &___neutralWhiteClip_6; }
	inline void set_neutralWhiteClip_6(float value)
	{
		___neutralWhiteClip_6 = value;
	}
};


// UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664 
{
public:
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focusDistance
	float ___focusDistance_0;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::aperture
	float ___aperture_1;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focalLength
	float ___focalLength_2;
	// System.Boolean UnityEngine.PostProcessing.DepthOfFieldModel/Settings::useCameraFov
	bool ___useCameraFov_3;
	// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize UnityEngine.PostProcessing.DepthOfFieldModel/Settings::kernelSize
	int32_t ___kernelSize_4;

public:
	inline static int32_t get_offset_of_focusDistance_0() { return static_cast<int32_t>(offsetof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664, ___focusDistance_0)); }
	inline float get_focusDistance_0() const { return ___focusDistance_0; }
	inline float* get_address_of_focusDistance_0() { return &___focusDistance_0; }
	inline void set_focusDistance_0(float value)
	{
		___focusDistance_0 = value;
	}

	inline static int32_t get_offset_of_aperture_1() { return static_cast<int32_t>(offsetof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664, ___aperture_1)); }
	inline float get_aperture_1() const { return ___aperture_1; }
	inline float* get_address_of_aperture_1() { return &___aperture_1; }
	inline void set_aperture_1(float value)
	{
		___aperture_1 = value;
	}

	inline static int32_t get_offset_of_focalLength_2() { return static_cast<int32_t>(offsetof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664, ___focalLength_2)); }
	inline float get_focalLength_2() const { return ___focalLength_2; }
	inline float* get_address_of_focalLength_2() { return &___focalLength_2; }
	inline void set_focalLength_2(float value)
	{
		___focalLength_2 = value;
	}

	inline static int32_t get_offset_of_useCameraFov_3() { return static_cast<int32_t>(offsetof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664, ___useCameraFov_3)); }
	inline bool get_useCameraFov_3() const { return ___useCameraFov_3; }
	inline bool* get_address_of_useCameraFov_3() { return &___useCameraFov_3; }
	inline void set_useCameraFov_3(bool value)
	{
		___useCameraFov_3 = value;
	}

	inline static int32_t get_offset_of_kernelSize_4() { return static_cast<int32_t>(offsetof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664, ___kernelSize_4)); }
	inline int32_t get_kernelSize_4() const { return ___kernelSize_4; }
	inline int32_t* get_address_of_kernelSize_4() { return &___kernelSize_4; }
	inline void set_kernelSize_4(int32_t value)
	{
		___kernelSize_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_pinvoke
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_com
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};

// UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235 
{
public:
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::lowPercent
	float ___lowPercent_0;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::highPercent
	float ___highPercent_1;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::minLuminance
	float ___minLuminance_2;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::maxLuminance
	float ___maxLuminance_3;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::keyValue
	float ___keyValue_4;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationModel/Settings::dynamicKeyValue
	bool ___dynamicKeyValue_5;
	// UnityEngine.PostProcessing.EyeAdaptationModel/EyeAdaptationType UnityEngine.PostProcessing.EyeAdaptationModel/Settings::adaptationType
	int32_t ___adaptationType_6;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedUp
	float ___speedUp_7;
	// System.Single UnityEngine.PostProcessing.EyeAdaptationModel/Settings::speedDown
	float ___speedDown_8;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMin
	int32_t ___logMin_9;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationModel/Settings::logMax
	int32_t ___logMax_10;

public:
	inline static int32_t get_offset_of_lowPercent_0() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___lowPercent_0)); }
	inline float get_lowPercent_0() const { return ___lowPercent_0; }
	inline float* get_address_of_lowPercent_0() { return &___lowPercent_0; }
	inline void set_lowPercent_0(float value)
	{
		___lowPercent_0 = value;
	}

	inline static int32_t get_offset_of_highPercent_1() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___highPercent_1)); }
	inline float get_highPercent_1() const { return ___highPercent_1; }
	inline float* get_address_of_highPercent_1() { return &___highPercent_1; }
	inline void set_highPercent_1(float value)
	{
		___highPercent_1 = value;
	}

	inline static int32_t get_offset_of_minLuminance_2() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___minLuminance_2)); }
	inline float get_minLuminance_2() const { return ___minLuminance_2; }
	inline float* get_address_of_minLuminance_2() { return &___minLuminance_2; }
	inline void set_minLuminance_2(float value)
	{
		___minLuminance_2 = value;
	}

	inline static int32_t get_offset_of_maxLuminance_3() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___maxLuminance_3)); }
	inline float get_maxLuminance_3() const { return ___maxLuminance_3; }
	inline float* get_address_of_maxLuminance_3() { return &___maxLuminance_3; }
	inline void set_maxLuminance_3(float value)
	{
		___maxLuminance_3 = value;
	}

	inline static int32_t get_offset_of_keyValue_4() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___keyValue_4)); }
	inline float get_keyValue_4() const { return ___keyValue_4; }
	inline float* get_address_of_keyValue_4() { return &___keyValue_4; }
	inline void set_keyValue_4(float value)
	{
		___keyValue_4 = value;
	}

	inline static int32_t get_offset_of_dynamicKeyValue_5() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___dynamicKeyValue_5)); }
	inline bool get_dynamicKeyValue_5() const { return ___dynamicKeyValue_5; }
	inline bool* get_address_of_dynamicKeyValue_5() { return &___dynamicKeyValue_5; }
	inline void set_dynamicKeyValue_5(bool value)
	{
		___dynamicKeyValue_5 = value;
	}

	inline static int32_t get_offset_of_adaptationType_6() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___adaptationType_6)); }
	inline int32_t get_adaptationType_6() const { return ___adaptationType_6; }
	inline int32_t* get_address_of_adaptationType_6() { return &___adaptationType_6; }
	inline void set_adaptationType_6(int32_t value)
	{
		___adaptationType_6 = value;
	}

	inline static int32_t get_offset_of_speedUp_7() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___speedUp_7)); }
	inline float get_speedUp_7() const { return ___speedUp_7; }
	inline float* get_address_of_speedUp_7() { return &___speedUp_7; }
	inline void set_speedUp_7(float value)
	{
		___speedUp_7 = value;
	}

	inline static int32_t get_offset_of_speedDown_8() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___speedDown_8)); }
	inline float get_speedDown_8() const { return ___speedDown_8; }
	inline float* get_address_of_speedDown_8() { return &___speedDown_8; }
	inline void set_speedDown_8(float value)
	{
		___speedDown_8 = value;
	}

	inline static int32_t get_offset_of_logMin_9() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___logMin_9)); }
	inline int32_t get_logMin_9() const { return ___logMin_9; }
	inline int32_t* get_address_of_logMin_9() { return &___logMin_9; }
	inline void set_logMin_9(int32_t value)
	{
		___logMin_9 = value;
	}

	inline static int32_t get_offset_of_logMax_10() { return static_cast<int32_t>(offsetof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235, ___logMax_10)); }
	inline int32_t get_logMax_10() const { return ___logMax_10; }
	inline int32_t* get_address_of_logMax_10() { return &___logMax_10; }
	inline void set_logMax_10(int32_t value)
	{
		___logMax_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_pinvoke
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.EyeAdaptationModel/Settings
struct Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_com
{
	float ___lowPercent_0;
	float ___highPercent_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
	float ___keyValue_4;
	int32_t ___dynamicKeyValue_5;
	int32_t ___adaptationType_6;
	float ___speedUp_7;
	float ___speedDown_8;
	int32_t ___logMin_9;
	int32_t ___logMax_10;
};

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_UseCompression
	bool ___m_UseCompression_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_RawTextureFormat
	int32_t ___m_RawTextureFormat_1;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_FrameList
	FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* ___m_FrameList_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_LastFrameCount
	int32_t ___m_LastFrameCount_3;

public:
	inline static int32_t get_offset_of_m_UseCompression_0() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05, ___m_UseCompression_0)); }
	inline bool get_m_UseCompression_0() const { return ___m_UseCompression_0; }
	inline bool* get_address_of_m_UseCompression_0() { return &___m_UseCompression_0; }
	inline void set_m_UseCompression_0(bool value)
	{
		___m_UseCompression_0 = value;
	}

	inline static int32_t get_offset_of_m_RawTextureFormat_1() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05, ___m_RawTextureFormat_1)); }
	inline int32_t get_m_RawTextureFormat_1() const { return ___m_RawTextureFormat_1; }
	inline int32_t* get_address_of_m_RawTextureFormat_1() { return &___m_RawTextureFormat_1; }
	inline void set_m_RawTextureFormat_1(int32_t value)
	{
		___m_RawTextureFormat_1 = value;
	}

	inline static int32_t get_offset_of_m_FrameList_2() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05, ___m_FrameList_2)); }
	inline FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* get_m_FrameList_2() const { return ___m_FrameList_2; }
	inline FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9** get_address_of_m_FrameList_2() { return &___m_FrameList_2; }
	inline void set_m_FrameList_2(FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* value)
	{
		___m_FrameList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FrameList_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameCount_3() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05, ___m_LastFrameCount_3)); }
	inline int32_t get_m_LastFrameCount_3() const { return ___m_LastFrameCount_3; }
	inline int32_t* get_address_of_m_LastFrameCount_3() { return &___m_LastFrameCount_3; }
	inline void set_m_LastFrameCount_3(int32_t value)
	{
		___m_LastFrameCount_3 = value;
	}
};


// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455  : public RuntimeObject
{
public:
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_VectorRTFormat
	int32_t ___m_VectorRTFormat_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::m_PackedRTFormat
	int32_t ___m_PackedRTFormat_1;

public:
	inline static int32_t get_offset_of_m_VectorRTFormat_0() { return static_cast<int32_t>(offsetof(ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455, ___m_VectorRTFormat_0)); }
	inline int32_t get_m_VectorRTFormat_0() const { return ___m_VectorRTFormat_0; }
	inline int32_t* get_address_of_m_VectorRTFormat_0() { return &___m_VectorRTFormat_0; }
	inline void set_m_VectorRTFormat_0(int32_t value)
	{
		___m_VectorRTFormat_0 = value;
	}

	inline static int32_t get_offset_of_m_PackedRTFormat_1() { return static_cast<int32_t>(offsetof(ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455, ___m_PackedRTFormat_1)); }
	inline int32_t get_m_PackedRTFormat_1() const { return ___m_PackedRTFormat_1; }
	inline int32_t* get_address_of_m_PackedRTFormat_1() { return &___m_PackedRTFormat_1; }
	inline void set_m_PackedRTFormat_1(int32_t value)
	{
		___m_PackedRTFormat_1 = value;
	}
};


// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRReflectionBlendType UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::blendType
	int32_t ___blendType_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/SSRResolution UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionQuality
	int32_t ___reflectionQuality_1;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::maxDistance
	float ___maxDistance_2;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::iterationCount
	int32_t ___iterationCount_3;
	// System.Int32 UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::stepSize
	int32_t ___stepSize_4;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::widthModifier
	float ___widthModifier_5;
	// System.Single UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectionBlur
	float ___reflectionBlur_6;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings::reflectBackfaces
	bool ___reflectBackfaces_7;

public:
	inline static int32_t get_offset_of_blendType_0() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___blendType_0)); }
	inline int32_t get_blendType_0() const { return ___blendType_0; }
	inline int32_t* get_address_of_blendType_0() { return &___blendType_0; }
	inline void set_blendType_0(int32_t value)
	{
		___blendType_0 = value;
	}

	inline static int32_t get_offset_of_reflectionQuality_1() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___reflectionQuality_1)); }
	inline int32_t get_reflectionQuality_1() const { return ___reflectionQuality_1; }
	inline int32_t* get_address_of_reflectionQuality_1() { return &___reflectionQuality_1; }
	inline void set_reflectionQuality_1(int32_t value)
	{
		___reflectionQuality_1 = value;
	}

	inline static int32_t get_offset_of_maxDistance_2() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___maxDistance_2)); }
	inline float get_maxDistance_2() const { return ___maxDistance_2; }
	inline float* get_address_of_maxDistance_2() { return &___maxDistance_2; }
	inline void set_maxDistance_2(float value)
	{
		___maxDistance_2 = value;
	}

	inline static int32_t get_offset_of_iterationCount_3() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___iterationCount_3)); }
	inline int32_t get_iterationCount_3() const { return ___iterationCount_3; }
	inline int32_t* get_address_of_iterationCount_3() { return &___iterationCount_3; }
	inline void set_iterationCount_3(int32_t value)
	{
		___iterationCount_3 = value;
	}

	inline static int32_t get_offset_of_stepSize_4() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___stepSize_4)); }
	inline int32_t get_stepSize_4() const { return ___stepSize_4; }
	inline int32_t* get_address_of_stepSize_4() { return &___stepSize_4; }
	inline void set_stepSize_4(int32_t value)
	{
		___stepSize_4 = value;
	}

	inline static int32_t get_offset_of_widthModifier_5() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___widthModifier_5)); }
	inline float get_widthModifier_5() const { return ___widthModifier_5; }
	inline float* get_address_of_widthModifier_5() { return &___widthModifier_5; }
	inline void set_widthModifier_5(float value)
	{
		___widthModifier_5 = value;
	}

	inline static int32_t get_offset_of_reflectionBlur_6() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___reflectionBlur_6)); }
	inline float get_reflectionBlur_6() const { return ___reflectionBlur_6; }
	inline float* get_address_of_reflectionBlur_6() { return &___reflectionBlur_6; }
	inline void set_reflectionBlur_6(float value)
	{
		___reflectionBlur_6 = value;
	}

	inline static int32_t get_offset_of_reflectBackfaces_7() { return static_cast<int32_t>(offsetof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081, ___reflectBackfaces_7)); }
	inline bool get_reflectBackfaces_7() const { return ___reflectBackfaces_7; }
	inline bool* get_address_of_reflectBackfaces_7() { return &___reflectBackfaces_7; }
	inline void set_reflectBackfaces_7(bool value)
	{
		___reflectBackfaces_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
struct ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};

// UnityEngine.PostProcessing.VignetteModel/Settings
struct Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40 
{
public:
	// UnityEngine.PostProcessing.VignetteModel/Mode UnityEngine.PostProcessing.VignetteModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.Color UnityEngine.PostProcessing.VignetteModel/Settings::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Vector2 UnityEngine.PostProcessing.VignetteModel/Settings::center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_2;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::intensity
	float ___intensity_3;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::smoothness
	float ___smoothness_4;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::roundness
	float ___roundness_5;
	// UnityEngine.Texture UnityEngine.PostProcessing.VignetteModel/Settings::mask
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___mask_6;
	// System.Single UnityEngine.PostProcessing.VignetteModel/Settings::opacity
	float ___opacity_7;
	// System.Boolean UnityEngine.PostProcessing.VignetteModel/Settings::rounded
	bool ___rounded_8;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___center_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_center_2() const { return ___center_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___center_2 = value;
	}

	inline static int32_t get_offset_of_intensity_3() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___intensity_3)); }
	inline float get_intensity_3() const { return ___intensity_3; }
	inline float* get_address_of_intensity_3() { return &___intensity_3; }
	inline void set_intensity_3(float value)
	{
		___intensity_3 = value;
	}

	inline static int32_t get_offset_of_smoothness_4() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___smoothness_4)); }
	inline float get_smoothness_4() const { return ___smoothness_4; }
	inline float* get_address_of_smoothness_4() { return &___smoothness_4; }
	inline void set_smoothness_4(float value)
	{
		___smoothness_4 = value;
	}

	inline static int32_t get_offset_of_roundness_5() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___roundness_5)); }
	inline float get_roundness_5() const { return ___roundness_5; }
	inline float* get_address_of_roundness_5() { return &___roundness_5; }
	inline void set_roundness_5(float value)
	{
		___roundness_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___mask_6)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_mask_6() const { return ___mask_6; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___mask_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mask_6), (void*)value);
	}

	inline static int32_t get_offset_of_opacity_7() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___opacity_7)); }
	inline float get_opacity_7() const { return ___opacity_7; }
	inline float* get_address_of_opacity_7() { return &___opacity_7; }
	inline void set_opacity_7(float value)
	{
		___opacity_7 = value;
	}

	inline static int32_t get_offset_of_rounded_8() { return static_cast<int32_t>(offsetof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40, ___rounded_8)); }
	inline bool get_rounded_8() const { return ___rounded_8; }
	inline bool* get_address_of_rounded_8() { return &___rounded_8; }
	inline void set_rounded_8(bool value)
	{
		___rounded_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.VignetteModel/Settings
struct Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_pinvoke
{
	int32_t ___mode_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_2;
	float ___intensity_3;
	float ___smoothness_4;
	float ___roundness_5;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___mask_6;
	float ___opacity_7;
	int32_t ___rounded_8;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.VignetteModel/Settings
struct Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_com
{
	int32_t ___mode_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_2;
	float ___intensity_3;
	float ___smoothness_4;
	float ___roundness_5;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___mask_6;
	float ___opacity_7;
	int32_t ___rounded_8;
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.PostProcessing.AntialiasingModel/Settings
struct Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Method UnityEngine.PostProcessing.AntialiasingModel/Settings::method
	int32_t ___method_0;
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::fxaaSettings
	FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  ___fxaaSettings_1;
	// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::taaSettings
	TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  ___taaSettings_2;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987, ___method_0)); }
	inline int32_t get_method_0() const { return ___method_0; }
	inline int32_t* get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(int32_t value)
	{
		___method_0 = value;
	}

	inline static int32_t get_offset_of_fxaaSettings_1() { return static_cast<int32_t>(offsetof(Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987, ___fxaaSettings_1)); }
	inline FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  get_fxaaSettings_1() const { return ___fxaaSettings_1; }
	inline FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD * get_address_of_fxaaSettings_1() { return &___fxaaSettings_1; }
	inline void set_fxaaSettings_1(FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  value)
	{
		___fxaaSettings_1 = value;
	}

	inline static int32_t get_offset_of_taaSettings_2() { return static_cast<int32_t>(offsetof(Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987, ___taaSettings_2)); }
	inline TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  get_taaSettings_2() const { return ___taaSettings_2; }
	inline TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963 * get_address_of_taaSettings_2() { return &___taaSettings_2; }
	inline void set_taaSettings_2(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  value)
	{
		___taaSettings_2 = value;
	}
};


// UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_tE78638ED5511B6BB368524329D832E5A63355741 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::tonemapping
	TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  ___tonemapping_0;
	// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::basic
	BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  ___basic_1;
	// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::channelMixer
	ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  ___channelMixer_2;
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::colorWheels
	ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  ___colorWheels_3;
	// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::curves
	CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  ___curves_4;

public:
	inline static int32_t get_offset_of_tonemapping_0() { return static_cast<int32_t>(offsetof(Settings_tE78638ED5511B6BB368524329D832E5A63355741, ___tonemapping_0)); }
	inline TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  get_tonemapping_0() const { return ___tonemapping_0; }
	inline TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D * get_address_of_tonemapping_0() { return &___tonemapping_0; }
	inline void set_tonemapping_0(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  value)
	{
		___tonemapping_0 = value;
	}

	inline static int32_t get_offset_of_basic_1() { return static_cast<int32_t>(offsetof(Settings_tE78638ED5511B6BB368524329D832E5A63355741, ___basic_1)); }
	inline BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  get_basic_1() const { return ___basic_1; }
	inline BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C * get_address_of_basic_1() { return &___basic_1; }
	inline void set_basic_1(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  value)
	{
		___basic_1 = value;
	}

	inline static int32_t get_offset_of_channelMixer_2() { return static_cast<int32_t>(offsetof(Settings_tE78638ED5511B6BB368524329D832E5A63355741, ___channelMixer_2)); }
	inline ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  get_channelMixer_2() const { return ___channelMixer_2; }
	inline ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E * get_address_of_channelMixer_2() { return &___channelMixer_2; }
	inline void set_channelMixer_2(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  value)
	{
		___channelMixer_2 = value;
	}

	inline static int32_t get_offset_of_colorWheels_3() { return static_cast<int32_t>(offsetof(Settings_tE78638ED5511B6BB368524329D832E5A63355741, ___colorWheels_3)); }
	inline ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  get_colorWheels_3() const { return ___colorWheels_3; }
	inline ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B * get_address_of_colorWheels_3() { return &___colorWheels_3; }
	inline void set_colorWheels_3(ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  value)
	{
		___colorWheels_3 = value;
	}

	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(Settings_tE78638ED5511B6BB368524329D832E5A63355741, ___curves_4)); }
	inline CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  get_curves_4() const { return ___curves_4; }
	inline CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6 * get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  value)
	{
		___curves_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___master_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___red_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___green_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___blue_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___hueVShue_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___hueVSsat_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___satVSsat_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_4))->___lumVSsat_7), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_pinvoke
{
	TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  ___tonemapping_0;
	BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  ___basic_1;
	ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  ___channelMixer_2;
	ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  ___colorWheels_3;
	CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke ___curves_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_com
{
	TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  ___tonemapping_0;
	BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  ___basic_1;
	ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  ___channelMixer_2;
	ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  ___colorWheels_3;
	CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com ___curves_4;
};

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::reflection
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  ___reflection_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::intensity
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  ___intensity_1;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::screenEdgeMask
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflection_0() { return static_cast<int32_t>(offsetof(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07, ___reflection_0)); }
	inline ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  get_reflection_0() const { return ___reflection_0; }
	inline ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081 * get_address_of_reflection_0() { return &___reflection_0; }
	inline void set_reflection_0(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  value)
	{
		___reflection_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07, ___intensity_1)); }
	inline IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  get_intensity_1() const { return ___intensity_1; }
	inline IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C * get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  value)
	{
		___screenEdgeMask_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_pinvoke
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke ___reflection_0;
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  ___intensity_1;
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  ___screenEdgeMask_2;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_com
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com ___reflection_0;
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  ___intensity_1;
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  ___screenEdgeMask_2;
};

// UnityMessageManager/MessageDelegate
struct MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[]
struct FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  m_Items[1];

public:
	inline FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[]
struct FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  m_Items[1];

public:
	inline Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lumaTexture_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___chromaTexture_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_MRT_3), (void*)NULL);
		#endif
	}
	inline Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lumaTexture_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___chromaTexture_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_MRT_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.RenderTextureFormat[]
struct RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E  : public RuntimeArray
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
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  m_Items[1];

public:
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke_back(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled);
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke_cleanup(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke_back(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke_cleanup(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com_back(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled);
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com_cleanup(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com_back(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled);
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com_cleanup(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke_back(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke_cleanup(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com_back(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled);
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com_cleanup(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_back(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_cleanup(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_back(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_cleanup(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);

// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  FxaaSettings_get_defaultSettings_mCC499F9BC608EB8943C846C838A5DA4811B74852 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  TaaSettings_get_defaultSettings_m69113DF076C4FD27988E02EF1FD1C87EA1AB60D6 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LinearToGammaSpace_m5F74DEC2B3A7B45A75AC199284A22D92839118F3 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.BloomModel/BloomSettings::set_thresholdLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomSettings_set_thresholdLinear_m5D681343998DD1370FF502B96D0CD7990A8843BA (BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_mD7A738810039778B4592535A1DB5767C4CAD68FB (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::get_thresholdLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BloomSettings_get_thresholdLinear_mAF02ADBEE0AA8D764116FFCA6E02317C44191C55 (BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * __this, const RuntimeMethod* method);
// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/BloomSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  BloomSettings_get_defaultSettings_m85CFAD9DD7D5157D8F4BB6DD441C2B28A8D55004 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/LensDirtSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  LensDirtSettings_get_defaultSettings_m3417152CB106AD18C874F023EB672FBECD9EF475 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
inline void List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, const RuntimeMethod*))List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_mesh(UnityEngine.Mesh)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_mesh_mC3E00DD3EC2EBB9ABC145AB25262CE34FB47EA53_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___inVertices0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___uvs1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, bool ___markNoLongerReadable0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_columnCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_columnCount_m93B0297CF16BB02FCBB8FD401A27A5C9C05771E3_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_rowCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_rowCount_m2B86B6790CEA32DE1C0B8A740764506E085C009C_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.GraphicsUtils::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsUtils_Destroy_mC81DD13284816A2F5F2D10CE9D6850E197DAC550 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  DepthSettings_get_defaultSettings_mBE9E2BBBF99432BED7B8E3A11C6B0DB891B438FC (const RuntimeMethod* method);
// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  MotionVectorsSettings_get_defaultSettings_mCF968C1FFA44375D6B6D7049096F59F3F3E4D2B6 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  LogWheelsSettings_get_defaultSettings_m145CBBD7D33AD3D97304172C23B418BE37393C2E (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  LinearWheelsSettings_get_defaultSettings_mD917AC276172EFD4831502D72B8825CAA4F698C4 (const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.ColorGradingCurve::.ctor(UnityEngine.AnimationCurve,System.Single,System.Boolean,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383 (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve0, float ___zeroValue1, bool ___loop2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___bounds3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  TonemappingSettings_get_defaultSettings_m020E6A42A1677C1396D70795E85C1A69E47BA6B6 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  BasicSettings_get_defaultSettings_m24138DA6AD05E42A0F4FFD778F19162240398986 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  ChannelMixerSettings_get_defaultSettings_m7A8E8EB1A356EF330B897AC1FDD12554484C0A61 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  ColorWheelsSettings_get_defaultSettings_m826EE33BD2BFD73210D8950D645031157013FE31 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  CurvesSettings_get_defaultSettings_mE69800F815D69BA509C8FF03ADEAB1C3CFF582A4 (const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void LightFlicker/LightSource::.ctor(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSource__ctor_m2A6C35CB4F135533FB9FEF1565D0A2FA7926ABB3 (LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B * __this, Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::CheckSupportCompression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameBlendingFilter_CheckSupportCompression_m8B4682F8535091B8CFE59E98D0637F801FDC8958 (const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::GetPreferredRenderTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameBlendingFilter_GetPreferredRenderTextureFormat_mC6E3869191968D568B48B17F4D6D20ED50364B88 (const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74 (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::MakeRecord(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_MakeRecord_m76C2721EA40FE50536656F9CDCEB46FA9ED9FEAE (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::MakeRecordRaw(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_MakeRecordRaw_m99E90CFFDF04BA32505153D2A005A5AF23ADD9AB (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, int32_t ___format4, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::GetFrameRelative(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4 (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, int32_t ___offset0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::CalculateWeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077 (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, float ___strength0, float ___currentTime1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, int32_t ___pass3, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B (int32_t ___format0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_mF1878047AAED7BE6839958B61C0CC7E2FB204B44 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::CheckTextureFormatSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconstructionFilter_CheckTextureFormatSupport_m1825CA06223703C26B85AF769A244A466FAB9D99 (ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsMotionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsMotionVectors_mC53D082851F990A59130D6C1B462D709B85E98DC (const RuntimeMethod* method);
// System.Int32 UnityEngine.PostProcessing.PostProcessingContext::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC (PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PostProcessing.PostProcessingContext::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F (PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B (int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m57FADAE57CE78D6E45D78A212905332B70560A2B (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, int32_t ___pass3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalVector_m26AD5F4AF0ABDD9F7DA61583606824526A58ABEF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___readWrite4, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m4F4A1974C1BC9F3849D54B5141EF296F37B4E7E3 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___colors0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___depth1, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.PostProcessing.GraphicsUtils::get_quad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GraphicsUtils_get_quad_m759AD9D70DDD5FEFB815926855C749FF1D954377 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m1045759BE3456DC0CE14E6E372E13FF6625D1A83 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_mDDA4CCEA9460315B9CEA882E52B7734F4033C362 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___dest1, const RuntimeMethod* method);
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
// System.Void UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FxaaQualitySettings__cctor_mAAC1546B619A2307C84E1A1F861A52BA5BFEA4C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static FxaaQualitySettings[] presets =
		// {
		//     // ExtremePerformance
		//     new FxaaQualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0f,
		//         edgeDetectionThreshold = 0.333f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     // Performance
		//     new FxaaQualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0.25f,
		//         edgeDetectionThreshold = 0.25f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     // Default
		//     new FxaaQualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 0.75f,
		//         edgeDetectionThreshold = 0.166f,
		//         minimumRequiredLuminance = 0.0833f
		//     },
		// 
		//     // Quality
		//     new FxaaQualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 1f,
		//         edgeDetectionThreshold = 0.125f,
		//         minimumRequiredLuminance = 0.0625f
		//     },
		// 
		//     // ExtremeQuality
		//     new FxaaQualitySettings
		//     {
		//         subpixelAliasingRemovalAmount = 1f,
		//         edgeDetectionThreshold = 0.063f,
		//         minimumRequiredLuminance = 0.0312f
		//     }
		// };
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_0 = (FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD*)(FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD*)SZArrayNew(FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD_il2cpp_TypeInfo_var, (uint32_t)5);
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 ));
		(&V_0)->set_subpixelAliasingRemovalAmount_0((0.0f));
		(&V_0)->set_edgeDetectionThreshold_1((0.333000004f));
		(&V_0)->set_minimumRequiredLuminance_2((0.0833000019f));
		FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 )L_2);
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 ));
		(&V_0)->set_subpixelAliasingRemovalAmount_0((0.25f));
		(&V_0)->set_edgeDetectionThreshold_1((0.25f));
		(&V_0)->set_minimumRequiredLuminance_2((0.0833000019f));
		FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 )L_4);
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_5 = L_3;
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 ));
		(&V_0)->set_subpixelAliasingRemovalAmount_0((0.75f));
		(&V_0)->set_edgeDetectionThreshold_1((0.165999994f));
		(&V_0)->set_minimumRequiredLuminance_2((0.0833000019f));
		FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 )L_6);
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_7 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 ));
		(&V_0)->set_subpixelAliasingRemovalAmount_0((1.0f));
		(&V_0)->set_edgeDetectionThreshold_1((0.125f));
		(&V_0)->set_minimumRequiredLuminance_2((0.0625f));
		FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 )L_8);
		FxaaQualitySettingsU5BU5D_t3EF74008D53BB66301B1E710EA4094051EF300DD* L_9 = L_7;
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 ));
		(&V_0)->set_subpixelAliasingRemovalAmount_0((1.0f));
		(&V_0)->set_edgeDetectionThreshold_1((0.063000001f));
		(&V_0)->set_minimumRequiredLuminance_2((0.0311999992f));
		FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7  L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7 )L_10);
		((FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_StaticFields*)il2cpp_codegen_static_fields_for(FxaaQualitySettings_tE3A04EA2EA0C0232FFFCD9A8DE5DA2278E9C41D7_il2cpp_TypeInfo_var))->set_presets_3(L_9);
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
// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  FxaaSettings_get_defaultSettings_mCC499F9BC608EB8943C846C838A5DA4811B74852 (const RuntimeMethod* method)
{
	FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new FxaaSettings
		// {
		//     preset = FxaaPreset.Default
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD ));
		(&V_0)->set_preset_0(2);
		FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.PostProcessing.AntialiasingModel/Settings UnityEngine.PostProcessing.AntialiasingModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987  Settings_get_defaultSettings_m187BEA1D08AA74B7F2AAC6AC0000F6B19DADE248 (const RuntimeMethod* method)
{
	Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     method = Method.Fxaa,
		//     fxaaSettings = FxaaSettings.defaultSettings,
		//     taaSettings = TaaSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987 ));
		(&V_0)->set_method_0(0);
		FxaaSettings_t207FF35B1CFF1A8E5E5CE53053C6D8FD5C8433DD  L_0;
		L_0 = FxaaSettings_get_defaultSettings_mCC499F9BC608EB8943C846C838A5DA4811B74852(/*hidden argument*/NULL);
		(&V_0)->set_fxaaSettings_1(L_0);
		TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  L_1;
		L_1 = TaaSettings_get_defaultSettings_m69113DF076C4FD27988E02EF1FD1C87EA1AB60D6(/*hidden argument*/NULL);
		(&V_0)->set_taaSettings_2(L_1);
		Settings_t4F0B6ACEBD22796DDBB3BA91167CCA1A813EB987  L_2 = V_0;
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
// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  TaaSettings_get_defaultSettings_m69113DF076C4FD27988E02EF1FD1C87EA1AB60D6 (const RuntimeMethod* method)
{
	TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TaaSettings
		// {
		//     jitterSpread = 0.75f,
		//     sharpen = 0.3f,
		//     stationaryBlending = 0.95f,
		//     motionBlending = 0.85f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963 ));
		(&V_0)->set_jitterSpread_0((0.75f));
		(&V_0)->set_sharpen_1((0.300000012f));
		(&V_0)->set_stationaryBlending_2((0.949999988f));
		(&V_0)->set_motionBlending_3((0.850000024f));
		TaaSettings_t07ED06CFB7C0294E03A3278FB0EF5CFE0A515963  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.BloomComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m215A49821B9DBA3B81F09CEE54AF47791B5C8BAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3522B9AFA3A138B20B0C0E0D23B1DFBD6446CF30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E247A491FEB5DF5D6FD7ECFCFA3CB28312BC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80FC6F37250B72E4F2D73E1B70CEFFE0305C6E4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66B94135F244801384D5D55B97E532E620721F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC90D1F945AC7169737EB4D29A9935C14E0C85F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _AutoExposure        = Shader.PropertyToID("_AutoExposure");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB66B94135F244801384D5D55B97E532E620721F6, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__AutoExposure_0(L_0);
		// internal static readonly int _Threshold           = Shader.PropertyToID("_Threshold");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__Threshold_1(L_1);
		// internal static readonly int _Curve               = Shader.PropertyToID("_Curve");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__Curve_2(L_2);
		// internal static readonly int _PrefilterOffs       = Shader.PropertyToID("_PrefilterOffs");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__PrefilterOffs_3(L_3);
		// internal static readonly int _SampleScale         = Shader.PropertyToID("_SampleScale");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__SampleScale_4(L_4);
		// internal static readonly int _BaseTex             = Shader.PropertyToID("_BaseTex");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__BaseTex_5(L_5);
		// internal static readonly int _BloomTex            = Shader.PropertyToID("_BloomTex");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCC90D1F945AC7169737EB4D29A9935C14E0C85F0, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__BloomTex_6(L_6);
		// internal static readonly int _Bloom_Settings      = Shader.PropertyToID("_Bloom_Settings");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3522B9AFA3A138B20B0C0E0D23B1DFBD6446CF30, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__Bloom_Settings_7(L_7);
		// internal static readonly int _Bloom_DirtTex       = Shader.PropertyToID("_Bloom_DirtTex");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral63E247A491FEB5DF5D6FD7ECFCFA3CB28312BC2B, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__Bloom_DirtTex_8(L_8);
		// internal static readonly int _Bloom_DirtIntensity = Shader.PropertyToID("_Bloom_DirtIntensity");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral80FC6F37250B72E4F2D73E1B70CEFFE0305C6E4C, /*hidden argument*/NULL);
		((Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t09293D87D45E149B3D9A1544D9069D573B06108C_il2cpp_TypeInfo_var))->set__Bloom_DirtIntensity_9(L_9);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/BloomSettings
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled)
{
	marshaled.___intensity_0 = unmarshaled.get_intensity_0();
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___softKnee_2 = unmarshaled.get_softKnee_2();
	marshaled.___radius_3 = unmarshaled.get_radius_3();
	marshaled.___antiFlicker_4 = static_cast<int32_t>(unmarshaled.get_antiFlicker_4());
}
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke_back(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled)
{
	float unmarshaled_intensity_temp_0 = 0.0f;
	unmarshaled_intensity_temp_0 = marshaled.___intensity_0;
	unmarshaled.set_intensity_0(unmarshaled_intensity_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_softKnee_temp_2 = 0.0f;
	unmarshaled_softKnee_temp_2 = marshaled.___softKnee_2;
	unmarshaled.set_softKnee_2(unmarshaled_softKnee_temp_2);
	float unmarshaled_radius_temp_3 = 0.0f;
	unmarshaled_radius_temp_3 = marshaled.___radius_3;
	unmarshaled.set_radius_3(unmarshaled_radius_temp_3);
	bool unmarshaled_antiFlicker_temp_4 = false;
	unmarshaled_antiFlicker_temp_4 = static_cast<bool>(marshaled.___antiFlicker_4);
	unmarshaled.set_antiFlicker_4(unmarshaled_antiFlicker_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/BloomSettings
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_pinvoke_cleanup(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/BloomSettings
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled)
{
	marshaled.___intensity_0 = unmarshaled.get_intensity_0();
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___softKnee_2 = unmarshaled.get_softKnee_2();
	marshaled.___radius_3 = unmarshaled.get_radius_3();
	marshaled.___antiFlicker_4 = static_cast<int32_t>(unmarshaled.get_antiFlicker_4());
}
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com_back(const BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled, BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A& unmarshaled)
{
	float unmarshaled_intensity_temp_0 = 0.0f;
	unmarshaled_intensity_temp_0 = marshaled.___intensity_0;
	unmarshaled.set_intensity_0(unmarshaled_intensity_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_softKnee_temp_2 = 0.0f;
	unmarshaled_softKnee_temp_2 = marshaled.___softKnee_2;
	unmarshaled.set_softKnee_2(unmarshaled_softKnee_temp_2);
	float unmarshaled_radius_temp_3 = 0.0f;
	unmarshaled_radius_temp_3 = marshaled.___radius_3;
	unmarshaled.set_radius_3(unmarshaled_radius_temp_3);
	bool unmarshaled_antiFlicker_temp_4 = false;
	unmarshaled_antiFlicker_temp_4 = static_cast<bool>(marshaled.___antiFlicker_4);
	unmarshaled.set_antiFlicker_4(unmarshaled_antiFlicker_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/BloomSettings
IL2CPP_EXTERN_C void BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshal_com_cleanup(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.PostProcessing.BloomModel/BloomSettings::set_thresholdLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BloomSettings_set_thresholdLinear_m5D681343998DD1370FF502B96D0CD7990A8843BA (BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { threshold = Mathf.LinearToGammaSpace(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_LinearToGammaSpace_m5F74DEC2B3A7B45A75AC199284A22D92839118F3(L_0, /*hidden argument*/NULL);
		__this->set_threshold_1(L_1);
		// set { threshold = Mathf.LinearToGammaSpace(value); }
		return;
	}
}
IL2CPP_EXTERN_C  void BloomSettings_set_thresholdLinear_m5D681343998DD1370FF502B96D0CD7990A8843BA_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * _thisAdjusted = reinterpret_cast<BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A *>(__this + _offset);
	BloomSettings_set_thresholdLinear_m5D681343998DD1370FF502B96D0CD7990A8843BA(_thisAdjusted, ___value0, method);
}
// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::get_thresholdLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BloomSettings_get_thresholdLinear_mAF02ADBEE0AA8D764116FFCA6E02317C44191C55 (BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * __this, const RuntimeMethod* method)
{
	{
		// get { return Mathf.GammaToLinearSpace(threshold); }
		float L_0 = __this->get_threshold_1();
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_mD7A738810039778B4592535A1DB5767C4CAD68FB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float BloomSettings_get_thresholdLinear_mAF02ADBEE0AA8D764116FFCA6E02317C44191C55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A * _thisAdjusted = reinterpret_cast<BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A *>(__this + _offset);
	float _returnValue;
	_returnValue = BloomSettings_get_thresholdLinear_mAF02ADBEE0AA8D764116FFCA6E02317C44191C55(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/BloomSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  BloomSettings_get_defaultSettings_m85CFAD9DD7D5157D8F4BB6DD441C2B28A8D55004 (const RuntimeMethod* method)
{
	BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new BloomSettings
		// {
		//     intensity = 0.5f,
		//     threshold = 1.1f,
		//     softKnee = 0.5f,
		//     radius = 4f,
		//     antiFlicker = false,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A ));
		(&V_0)->set_intensity_0((0.5f));
		(&V_0)->set_threshold_1((1.10000002f));
		(&V_0)->set_softKnee_2((0.5f));
		(&V_0)->set_radius_3((4.0f));
		(&V_0)->set_antiFlicker_4((bool)0);
		BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  L_0 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/LensDirtSettings
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LensDirtSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_0Exception, NULL);
}
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke_back(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled)
{
	Exception_t* ___texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LensDirtSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/LensDirtSettings
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_pinvoke_cleanup(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/LensDirtSettings
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled)
{
	Exception_t* ___texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LensDirtSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_0Exception, NULL);
}
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com_back(const LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled, LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6& unmarshaled)
{
	Exception_t* ___texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LensDirtSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/LensDirtSettings
IL2CPP_EXTERN_C void LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshal_com_cleanup(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/LensDirtSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  LensDirtSettings_get_defaultSettings_m3417152CB106AD18C874F023EB672FBECD9EF475 (const RuntimeMethod* method)
{
	LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new LensDirtSettings
		// {
		//     texture = null,
		//     intensity = 3f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6 ));
		(&V_0)->set_texture_0((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		(&V_0)->set_intensity_1((3.0f));
		LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  L_0 = V_0;
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




// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/Settings
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_pinvoke(const Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05& unmarshaled, Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_pinvoke& marshaled)
{
	Exception_t* ___lensDirt_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lensDirt' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lensDirt_1Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_pinvoke_back(const Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_pinvoke& marshaled, Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05& unmarshaled)
{
	Exception_t* ___lensDirt_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lensDirt' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lensDirt_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/Settings
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_pinvoke_cleanup(Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: UnityEngine.PostProcessing.BloomModel/Settings
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_com(const Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05& unmarshaled, Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_com& marshaled)
{
	Exception_t* ___lensDirt_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lensDirt' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lensDirt_1Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_com_back(const Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_com& marshaled, Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05& unmarshaled)
{
	Exception_t* ___lensDirt_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lensDirt' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lensDirt_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.BloomModel/Settings
IL2CPP_EXTERN_C void Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshal_com_cleanup(Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.BloomModel/Settings UnityEngine.PostProcessing.BloomModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05  Settings_get_defaultSettings_mF7B09DA4EC2CFA21A7CE5519F7D147A3154F2DC3 (const RuntimeMethod* method)
{
	Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     bloom = BloomSettings.defaultSettings,
		//     lensDirt = LensDirtSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05 ));
		BloomSettings_tE893FE6BCF0778359F284E9EEF1F122694EF8D3A  L_0;
		L_0 = BloomSettings_get_defaultSettings_m85CFAD9DD7D5157D8F4BB6DD441C2B28A8D55004(/*hidden argument*/NULL);
		(&V_0)->set_bloom_0(L_0);
		LensDirtSettings_t508B652688930E01D2BB8B77749400E163E02FB6  L_1;
		L_1 = LensDirtSettings_get_defaultSettings_m3417152CB106AD18C874F023EB672FBECD9EF475(/*hidden argument*/NULL);
		(&V_0)->set_lensDirt_1(L_1);
		Settings_t0001436FC7E74CF7F181A61A2BED5B42594E4C05  L_2 = V_0;
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
// UnityEngine.Mesh UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_U3CmeshU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray_set_mesh_mC3E00DD3EC2EBB9ABC145AB25262CE34FB47EA53 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___value0;
		__this->set_U3CmeshU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::get_columnCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrowArray_get_columnCount_mB2CE9D04ED4F52E6EB3270467EB6E9E7EC99DDF7 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
{
	{
		// public int columnCount { get; private set; }
		int32_t L_0 = __this->get_U3CcolumnCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_columnCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray_set_columnCount_m93B0297CF16BB02FCBB8FD401A27A5C9C05771E3 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int columnCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcolumnCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::get_rowCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrowArray_get_rowCount_m880F3F390ECA0958C345F986ED41AF4118B77FBD (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
{
	{
		// public int rowCount { get; private set; }
		int32_t L_0 = __this->get_U3CrowCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::set_rowCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray_set_rowCount_m2B86B6790CEA32DE1C0B8A740764506E085C009C (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int rowCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrowCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::BuildMesh(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray_BuildMesh_mD099690ED8AAB42CBFF3AEB8A2BF30C02789D31A (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___columns0, int32_t ___rows1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_2 = NULL;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_3 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// var arrow = new Vector3[6]
		// {
		//     new Vector3(0f, 0f, 0f),
		//     new Vector3(0f, 1f, 0f),
		//     new Vector3(0f, 1f, 0f),
		//     new Vector3(-1f, 1f, 0f),
		//     new Vector3(0f, 1f, 0f),
		//     new Vector3(1f, 1f, 0f)
		// };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)6);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (-1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_10);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12);
		V_0 = L_11;
		// int vcount = 6 * columns * rows;
		int32_t L_13 = ___columns0;
		int32_t L_14 = ___rows1;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_13)), (int32_t)L_14));
		// var vertices = new List<Vector3>(vcount);
		int32_t L_15 = V_1;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82(L_16, L_15, /*hidden argument*/List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		V_2 = L_16;
		// var uvs = new List<Vector2>(vcount);
		int32_t L_17 = V_1;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_18 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C(L_18, L_17, /*hidden argument*/List_1__ctor_mDC4D7DF8F916E24A027C06B4401638A5E5E9A28C_RuntimeMethod_var);
		V_3 = L_18;
		// for (int iy = 0; iy < rows; iy++)
		V_5 = 0;
		goto IL_011d;
	}

IL_00c2:
	{
		// for (int ix = 0; ix < columns; ix++)
		V_6 = 0;
		goto IL_0112;
	}

IL_00c7:
	{
		// var uv = new Vector2(
		//         (0.5f + ix) / columns,
		//         (0.5f + iy) / rows
		//         );
		int32_t L_19 = V_6;
		int32_t L_20 = ___columns0;
		int32_t L_21 = V_5;
		int32_t L_22 = ___rows1;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_7), ((float)((float)((float)il2cpp_codegen_add((float)(0.5f), (float)((float)((float)L_19))))/(float)((float)((float)L_20)))), ((float)((float)((float)il2cpp_codegen_add((float)(0.5f), (float)((float)((float)L_21))))/(float)((float)((float)L_22)))), /*hidden argument*/NULL);
		// for (int i = 0; i < 6; i++)
		V_8 = 0;
		goto IL_0107;
	}

IL_00eb:
	{
		// vertices.Add(arrow[i]);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_23 = V_2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = V_0;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_23, L_27, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// uvs.Add(uv);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_28 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_7;
		NullCheck(L_28);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_28, L_29, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// for (int i = 0; i < 6; i++)
		int32_t L_30 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0107:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) < ((int32_t)6)))
		{
			goto IL_00eb;
		}
	}
	{
		// for (int ix = 0; ix < columns; ix++)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0112:
	{
		// for (int ix = 0; ix < columns; ix++)
		int32_t L_33 = V_6;
		int32_t L_34 = ___columns0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00c7;
		}
	}
	{
		// for (int iy = 0; iy < rows; iy++)
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_011d:
	{
		// for (int iy = 0; iy < rows; iy++)
		int32_t L_36 = V_5;
		int32_t L_37 = ___rows1;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00c2;
		}
	}
	{
		// var indices = new int[vcount];
		int32_t L_38 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_4 = L_39;
		// for (int i = 0; i < vcount; i++)
		V_9 = 0;
		goto IL_013c;
	}

IL_012f:
	{
		// indices[i] = i;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_4;
		int32_t L_41 = V_9;
		int32_t L_42 = V_9;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)L_42);
		// for (int i = 0; i < vcount; i++)
		int32_t L_43 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_013c:
	{
		// for (int i = 0; i < vcount; i++)
		int32_t L_44 = V_9;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_012f;
		}
	}
	{
		// mesh = new Mesh { hideFlags = HideFlags.DontSave };
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_46 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_46, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_47 = L_46;
		NullCheck(L_47);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_47, ((int32_t)52), /*hidden argument*/NULL);
		ArrowArray_set_mesh_mC3E00DD3EC2EBB9ABC145AB25262CE34FB47EA53_inline(__this, L_47, /*hidden argument*/NULL);
		// mesh.SetVertices(vertices);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_48;
		L_48 = ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline(__this, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_49 = V_2;
		NullCheck(L_48);
		Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD(L_48, L_49, /*hidden argument*/NULL);
		// mesh.SetUVs(0, uvs);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_50;
		L_50 = ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline(__this, /*hidden argument*/NULL);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_51 = V_3;
		NullCheck(L_50);
		Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE(L_50, 0, L_51, /*hidden argument*/NULL);
		// mesh.SetIndices(indices, MeshTopology.Lines, 0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_52;
		L_52 = ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_4;
		NullCheck(L_52);
		Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD(L_52, L_53, 3, 0, /*hidden argument*/NULL);
		// mesh.UploadMeshData(true);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_54;
		L_54 = ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07(L_54, (bool)1, /*hidden argument*/NULL);
		// columnCount = columns;
		int32_t L_55 = ___columns0;
		ArrowArray_set_columnCount_m93B0297CF16BB02FCBB8FD401A27A5C9C05771E3_inline(__this, L_55, /*hidden argument*/NULL);
		// rowCount = rows;
		int32_t L_56 = ___rows1;
		ArrowArray_set_rowCount_m2B86B6790CEA32DE1C0B8A740764506E085C009C_inline(__this, L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray_Release_m9093FA5C7964D9CFD460953693E4493F9DEC8412 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
{
	{
		// GraphicsUtils.Destroy(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0;
		L_0 = ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline(__this, /*hidden argument*/NULL);
		GraphicsUtils_Destroy_mC81DD13284816A2F5F2D10CE9D6850E197DAC550(L_0, /*hidden argument*/NULL);
		// mesh = null;
		ArrowArray_set_mesh_mC3E00DD3EC2EBB9ABC145AB25262CE34FB47EA53_inline(__this, (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowArray__ctor_mD7C99DB45967E3591400E99E778D38AB6DD1AA00 (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PostProcessing.BuiltinDebugViewsComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m9BBD20D226C673614BA222D689A0F7231D06E54D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4960C2A15E11FC607D4B2467D451CF7957F327F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC09AD850EE1E71743BBDFCC5AFCC175627DD0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _DepthScale = Shader.PropertyToID("_DepthScale");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4960C2A15E11FC607D4B2467D451CF7957F327F1, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__DepthScale_0(L_0);
		// internal static readonly int _TempRT     = Shader.PropertyToID("_TempRT");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__TempRT_1(L_1);
		// internal static readonly int _Opacity    = Shader.PropertyToID("_Opacity");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__Opacity_2(L_2);
		// internal static readonly int _MainTex    = Shader.PropertyToID("_MainTex");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__MainTex_3(L_3);
		// internal static readonly int _TempRT2    = Shader.PropertyToID("_TempRT2");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralECC09AD850EE1E71743BBDFCC5AFCC175627DD0F, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__TempRT2_4(L_4);
		// internal static readonly int _Amplitude  = Shader.PropertyToID("_Amplitude");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralEE06B53F9B6FDDA6A65F38986E1BA6B03495562F, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__Amplitude_5(L_5);
		// internal static readonly int _Scale      = Shader.PropertyToID("_Scale");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB2A2A23C0F95CC4BF23BDB0980D559F59E054C4B, /*hidden argument*/NULL);
		((Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tB15A7CD880A38AD55D5495DA53DB64E37ACBD5AE_il2cpp_TypeInfo_var))->set__Scale_6(L_6);
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
// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  DepthSettings_get_defaultSettings_mBE9E2BBBF99432BED7B8E3A11C6B0DB891B438FC (const RuntimeMethod* method)
{
	DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new DepthSettings
		// {
		//     scale = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E ));
		(&V_0)->set_scale_0((1.0f));
		DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  MotionVectorsSettings_get_defaultSettings_mCF968C1FFA44375D6B6D7049096F59F3F3E4D2B6 (const RuntimeMethod* method)
{
	MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new MotionVectorsSettings
		// {
		//     sourceOpacity = 1f,
		// 
		//     motionImageOpacity = 0f,
		//     motionImageAmplitude = 16f,
		// 
		//     motionVectorsOpacity = 1f,
		//     motionVectorsResolution = 24,
		//     motionVectorsAmplitude = 64f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E ));
		(&V_0)->set_sourceOpacity_0((1.0f));
		(&V_0)->set_motionImageOpacity_1((0.0f));
		(&V_0)->set_motionImageAmplitude_2((16.0f));
		(&V_0)->set_motionVectorsOpacity_3((1.0f));
		(&V_0)->set_motionVectorsResolution_4(((int32_t)24));
		(&V_0)->set_motionVectorsAmplitude_5((64.0f));
		MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  L_0 = V_0;
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
// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA  Settings_get_defaultSettings_m0B1672C6368B880D4817C6AEDCD3EE009E6EAB14 (const RuntimeMethod* method)
{
	Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     mode = Mode.None,
		//     depth = DepthSettings.defaultSettings,
		//     motionVectors = MotionVectorsSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA ));
		(&V_0)->set_mode_0(0);
		DepthSettings_tEBB0AD6C8B4D9EFF845939B44FBB7410E13C762E  L_0;
		L_0 = DepthSettings_get_defaultSettings_mBE9E2BBBF99432BED7B8E3A11C6B0DB891B438FC(/*hidden argument*/NULL);
		(&V_0)->set_depth_1(L_0);
		MotionVectorsSettings_t5471AE554DB4CEAE4177BAA0FF4CC9724557331E  L_1;
		L_1 = MotionVectorsSettings_get_defaultSettings_mCF968C1FFA44375D6B6D7049096F59F3F3E4D2B6(/*hidden argument*/NULL);
		(&V_0)->set_motionVectors_2(L_1);
		Settings_tA0CF254581D928F6F0785E058B3BAC177B5019FA  L_2 = V_0;
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
// System.Void CharacterStats_SO/CharLevelUps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharLevelUps__ctor_m54D55674DAE7CFF8CF3318D54BFE08117604E40A (CharLevelUps_t6D5EACDB3E85C1FC174A9F36F72A1B5975342B87 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.PostProcessing.ChromaticAberrationComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mECD80BABCE4BF5D9439FCFFC0DA6292F8AD02F1A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C8080E116C20514B2112FEEDD2DB6033035CD1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4EE4E33E42F3010D2A9873935C9783ECADE8D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _ChromaticAberration_Amount   = Shader.PropertyToID("_ChromaticAberration_Amount");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1C8080E116C20514B2112FEEDD2DB6033035CD1F, /*hidden argument*/NULL);
		((Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_il2cpp_TypeInfo_var))->set__ChromaticAberration_Amount_0(L_0);
		// internal static readonly int _ChromaticAberration_Spectrum = Shader.PropertyToID("_ChromaticAberration_Spectrum");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9A4EE4E33E42F3010D2A9873935C9783ECADE8D9, /*hidden argument*/NULL);
		((Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tA4156B895443919034127F8F55CBD0CA9C59A8C1_il2cpp_TypeInfo_var))->set__ChromaticAberration_Spectrum_1(L_1);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_pinvoke(const Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35& unmarshaled, Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_pinvoke& marshaled)
{
	Exception_t* ___spectralTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spectralTexture' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spectralTexture_0Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_pinvoke_back(const Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_pinvoke& marshaled, Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35& unmarshaled)
{
	Exception_t* ___spectralTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spectralTexture' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spectralTexture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_pinvoke_cleanup(Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_com(const Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35& unmarshaled, Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_com& marshaled)
{
	Exception_t* ___spectralTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spectralTexture' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spectralTexture_0Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_com_back(const Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_com& marshaled, Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35& unmarshaled)
{
	Exception_t* ___spectralTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spectralTexture' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spectralTexture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
IL2CPP_EXTERN_C void Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshal_com_cleanup(Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35  Settings_get_defaultSettings_m791BDC0A3BA6328ADB04192E41FE897BBA646B37 (const RuntimeMethod* method)
{
	Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     spectralTexture = null,
		//     intensity = 0.1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35 ));
		(&V_0)->set_spectralTexture_0((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
		(&V_0)->set_intensity_1((0.100000001f));
		Settings_tEF438ECC6DDB2F2A76E9CAFC3DFC9CB71A783E35  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.ColorGradingComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mE12551BB740B4F63B39B02596ADBD4F2CC6CC678 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01EEFE10841B46CB6FB75BF604199224F4640C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08929B9ED7690C81F8839C7D7C9D227261D64D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B6A7A347CF016F5EAEBCCCA4B381E3872CAA25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170A4AE79F1E4ADE325EA6DCA89AB7E5C651BA04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F59F5DA049CA3DBBEDEBBFA1AFFD28ADF557EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363D39718A9D73FEF0B11D1441CAC167EAB94FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral436900D1A2E39E7BD7D77DFEE81E6BC285533EEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A901D64EB16ED9C959A32FE9177F77B130D3D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C5FEFA9274E21330B518F9DA28B2307A0201AD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78C67E2A4385F588BA2DCEE159691DCE1EC544D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral888F402019BA6B7B75F107FF277905FC91B7D4A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1F9317F0F6CD38539297951AC9FF62130D82D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9816ED2080A13CA34D8670BA331F36D7E9D236A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7313CC4A1FC7E8F730433FE31FA8B6C42C2F617);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0586360AB261793FDF503A973AA97C72BFAF11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CE73B943237AB82CF2ABEA9C3BF5A626D9AA00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE2DD33BCD541DA280E529743F65CB84C9541BC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _LutParams                = Shader.PropertyToID("_LutParams");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD3CE73B943237AB82CF2ABEA9C3BF5A626D9AA00, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__LutParams_0(L_0);
		// internal static readonly int _NeutralTonemapperParams1 = Shader.PropertyToID("_NeutralTonemapperParams1");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCF0586360AB261793FDF503A973AA97C72BFAF11, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__NeutralTonemapperParams1_1(L_1);
		// internal static readonly int _NeutralTonemapperParams2 = Shader.PropertyToID("_NeutralTonemapperParams2");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4C5FEFA9274E21330B518F9DA28B2307A0201AD3, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__NeutralTonemapperParams2_2(L_2);
		// internal static readonly int _HueShift                 = Shader.PropertyToID("_HueShift");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0009BF01CFB4657E9EC895B1FBB478831AD13CA0, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__HueShift_3(L_3);
		// internal static readonly int _Saturation               = Shader.PropertyToID("_Saturation");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDE9FAF482EBF07DB48E259D5B8D2B04A5EF5EFA9, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Saturation_4(L_4);
		// internal static readonly int _Contrast                 = Shader.PropertyToID("_Contrast");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDE2DD33BCD541DA280E529743F65CB84C9541BC9, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Contrast_5(L_5);
		// internal static readonly int _Balance                  = Shader.PropertyToID("_Balance");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral01EEFE10841B46CB6FB75BF604199224F4640C8D, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Balance_6(L_6);
		// internal static readonly int _Lift                     = Shader.PropertyToID("_Lift");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral170A4AE79F1E4ADE325EA6DCA89AB7E5C651BA04, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Lift_7(L_7);
		// internal static readonly int _InvGamma                 = Shader.PropertyToID("_InvGamma");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral8C1F9317F0F6CD38539297951AC9FF62130D82D9, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__InvGamma_8(L_8);
		// internal static readonly int _Gain                     = Shader.PropertyToID("_Gain");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB7313CC4A1FC7E8F730433FE31FA8B6C42C2F617, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Gain_9(L_9);
		// internal static readonly int _Slope                    = Shader.PropertyToID("_Slope");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral45A901D64EB16ED9C959A32FE9177F77B130D3D5, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Slope_10(L_10);
		// internal static readonly int _Power                    = Shader.PropertyToID("_Power");
		int32_t L_11;
		L_11 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9816ED2080A13CA34D8670BA331F36D7E9D236A7, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Power_11(L_11);
		// internal static readonly int _Offset                   = Shader.PropertyToID("_Offset");
		int32_t L_12;
		L_12 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDAAF1BB950C2A85FFD7A0F9DB6E7FC849321BBDF, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Offset_12(L_12);
		// internal static readonly int _ChannelMixerRed          = Shader.PropertyToID("_ChannelMixerRed");
		int32_t L_13;
		L_13 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral78C67E2A4385F588BA2DCEE159691DCE1EC544D1, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__ChannelMixerRed_13(L_13);
		// internal static readonly int _ChannelMixerGreen        = Shader.PropertyToID("_ChannelMixerGreen");
		int32_t L_14;
		L_14 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral08929B9ED7690C81F8839C7D7C9D227261D64D44, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__ChannelMixerGreen_14(L_14);
		// internal static readonly int _ChannelMixerBlue         = Shader.PropertyToID("_ChannelMixerBlue");
		int32_t L_15;
		L_15 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral09B6A7A347CF016F5EAEBCCCA4B381E3872CAA25, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__ChannelMixerBlue_15(L_15);
		// internal static readonly int _Curves                   = Shader.PropertyToID("_Curves");
		int32_t L_16;
		L_16 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral888F402019BA6B7B75F107FF277905FC91B7D4A5, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__Curves_16(L_16);
		// internal static readonly int _LogLut                   = Shader.PropertyToID("_LogLut");
		int32_t L_17;
		L_17 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral363D39718A9D73FEF0B11D1441CAC167EAB94FA6, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__LogLut_17(L_17);
		// internal static readonly int _LogLut_Params            = Shader.PropertyToID("_LogLut_Params");
		int32_t L_18;
		L_18 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral17F59F5DA049CA3DBBEDEBBFA1AFFD28ADF557EE, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__LogLut_Params_18(L_18);
		// internal static readonly int _ExposureEV               = Shader.PropertyToID("_ExposureEV");
		int32_t L_19;
		L_19 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral436900D1A2E39E7BD7D77DFEE81E6BC285533EEC, /*hidden argument*/NULL);
		((Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tE545B223569432E596E0EDD26C75F70752D05C32_il2cpp_TypeInfo_var))->set__ExposureEV_19(L_19);
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
// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/BasicSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  BasicSettings_get_defaultSettings_m24138DA6AD05E42A0F4FFD778F19162240398986 (const RuntimeMethod* method)
{
	BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new BasicSettings
		// {
		//     postExposure = 0f,
		// 
		//     temperature = 0f,
		//     tint = 0f,
		// 
		//     hueShift = 0f,
		//     saturation = 1f,
		//     contrast = 1f,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C ));
		(&V_0)->set_postExposure_0((0.0f));
		(&V_0)->set_temperature_1((0.0f));
		(&V_0)->set_tint_2((0.0f));
		(&V_0)->set_hueShift_3((0.0f));
		(&V_0)->set_saturation_4((1.0f));
		(&V_0)->set_contrast_5((1.0f));
		BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  L_0 = V_0;
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
// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  ChannelMixerSettings_get_defaultSettings_m7A8E8EB1A356EF330B897AC1FDD12554484C0A61 (const RuntimeMethod* method)
{
	ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ChannelMixerSettings
		// {
		//     red = new Vector3(1f, 0f, 0f),
		//     green = new Vector3(0f, 1f, 0f),
		//     blue = new Vector3(0f, 0f, 1f),
		//     currentEditingChannel = 0
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(&V_0)->set_red_0(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		(&V_0)->set_green_1(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_blue_2(L_2);
		(&V_0)->set_currentEditingChannel_3(0);
		ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  L_3 = V_0;
		return L_3;
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
// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  ColorWheelsSettings_get_defaultSettings_m826EE33BD2BFD73210D8950D645031157013FE31 (const RuntimeMethod* method)
{
	ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ColorWheelsSettings
		// {
		//     mode = ColorWheelMode.Log,
		//     log = LogWheelsSettings.defaultSettings,
		//     linear = LinearWheelsSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B ));
		(&V_0)->set_mode_0(1);
		LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  L_0;
		L_0 = LogWheelsSettings_get_defaultSettings_m145CBBD7D33AD3D97304172C23B418BE37393C2E(/*hidden argument*/NULL);
		(&V_0)->set_log_1(L_0);
		LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  L_1;
		L_1 = LinearWheelsSettings_get_defaultSettings_mD917AC276172EFD4831502D72B8825CAA4F698C4(/*hidden argument*/NULL);
		(&V_0)->set_linear_2(L_1);
		ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  L_2 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___master_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'master' of type 'CurvesSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___master_0Exception, NULL);
}
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke_back(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled)
{
	Exception_t* ___master_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'master' of type 'CurvesSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___master_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_pinvoke_cleanup(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled)
{
	Exception_t* ___master_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'master' of type 'CurvesSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___master_0Exception, NULL);
}
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com_back(const CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled, CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6& unmarshaled)
{
	Exception_t* ___master_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'master' of type 'CurvesSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___master_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
IL2CPP_EXTERN_C void CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshal_com_cleanup(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  CurvesSettings_get_defaultSettings_mE69800F815D69BA509C8FF03ADEAB1C3CFF582A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new CurvesSettings
		// {
		//     master = new ColorGradingCurve(new AnimationCurve(new Keyframe(0f, 0f, 1f, 1f), new Keyframe(1f, 1f, 1f, 1f)), 0f, false, new Vector2(0f, 1f)),
		//     red    = new ColorGradingCurve(new AnimationCurve(new Keyframe(0f, 0f, 1f, 1f), new Keyframe(1f, 1f, 1f, 1f)), 0f, false, new Vector2(0f, 1f)),
		//     green  = new ColorGradingCurve(new AnimationCurve(new Keyframe(0f, 0f, 1f, 1f), new Keyframe(1f, 1f, 1f, 1f)), 0f, false, new Vector2(0f, 1f)),
		//     blue   = new ColorGradingCurve(new AnimationCurve(new Keyframe(0f, 0f, 1f, 1f), new Keyframe(1f, 1f, 1f, 1f)), 0f, false, new Vector2(0f, 1f)),
		// 
		//     hueVShue = new ColorGradingCurve(new AnimationCurve(), 0.5f, true,  new Vector2(0f, 1f)),
		//     hueVSsat = new ColorGradingCurve(new AnimationCurve(), 0.5f, true,  new Vector2(0f, 1f)),
		//     satVSsat = new ColorGradingCurve(new AnimationCurve(), 0.5f, false, new Vector2(0f, 1f)),
		//     lumVSsat = new ColorGradingCurve(new AnimationCurve(), 0.5f, false, new Vector2(0f, 1f)),
		// 
		//     e_CurrentEditingCurve = 0,
		//     e_CurveY = true,
		//     e_CurveR = false,
		//     e_CurveG = false,
		//     e_CurveB = false
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6 ));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_2), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_4), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_7 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_7, L_5, (0.0f), (bool)0, L_6, /*hidden argument*/NULL);
		(&V_0)->set_master_0(L_7);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_8;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_10), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_12), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_12);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_13, L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_15 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_15, L_13, (0.0f), (bool)0, L_14, /*hidden argument*/NULL);
		(&V_0)->set_red_1(L_15);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_16 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_17 = L_16;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_18), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_18);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_19 = L_17;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_20), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_20);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_21 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_21, L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_23 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_23, L_21, (0.0f), (bool)0, L_22, /*hidden argument*/NULL);
		(&V_0)->set_green_2(L_23);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_24 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_25 = L_24;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_26), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_26);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_27 = L_25;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_28), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_28);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_29 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_29, L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_31 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_31, L_29, (0.0f), (bool)0, L_30, /*hidden argument*/NULL);
		(&V_0)->set_blue_3(L_31);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_32 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_32, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_33), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_34 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_34, L_32, (0.5f), (bool)1, L_33, /*hidden argument*/NULL);
		(&V_0)->set_hueVShue_4(L_34);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_35 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_36), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_37 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_37, L_35, (0.5f), (bool)1, L_36, /*hidden argument*/NULL);
		(&V_0)->set_hueVSsat_5(L_37);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_38 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_38, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_40 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_40, L_38, (0.5f), (bool)0, L_39, /*hidden argument*/NULL);
		(&V_0)->set_satVSsat_6(L_40);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_41 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_41, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_42), (0.0f), (1.0f), /*hidden argument*/NULL);
		ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 * L_43 = (ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332 *)il2cpp_codegen_object_new(ColorGradingCurve_tFB8A14D79A097C02528CD1D5942A60C56CE26332_il2cpp_TypeInfo_var);
		ColorGradingCurve__ctor_m1F50481353D7421A25F249B584E0901FD7E92383(L_43, L_41, (0.5f), (bool)0, L_42, /*hidden argument*/NULL);
		(&V_0)->set_lumVSsat_7(L_43);
		(&V_0)->set_e_CurrentEditingCurve_8(0);
		(&V_0)->set_e_CurveY_9((bool)1);
		(&V_0)->set_e_CurveR_10((bool)0);
		(&V_0)->set_e_CurveG_11((bool)0);
		(&V_0)->set_e_CurveB_12((bool)0);
		CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  L_44 = V_0;
		return L_44;
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
// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  LinearWheelsSettings_get_defaultSettings_mD917AC276172EFD4831502D72B8825CAA4F698C4 (const RuntimeMethod* method)
{
	LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new LinearWheelsSettings
		// {
		//     lift = Color.clear,
		//     gamma = Color.clear,
		//     gain = Color.clear
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24 ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_lift_0(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_gamma_1(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_gain_2(L_2);
		LinearWheelsSettings_tA790A3A4EF83FE42AFF236B7A9D14E558DAB4E24  L_3 = V_0;
		return L_3;
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
// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  LogWheelsSettings_get_defaultSettings_m145CBBD7D33AD3D97304172C23B418BE37393C2E (const RuntimeMethod* method)
{
	LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new LogWheelsSettings
		// {
		//     slope = Color.clear,
		//     power = Color.clear,
		//     offset = Color.clear
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59 ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_slope_0(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_power_1(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		(&V_0)->set_offset_2(L_2);
		LogWheelsSettings_t53AC4AE89C7E51DE25743B510FB18C5DA68EFE59  L_3 = V_0;
		return L_3;
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


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ColorGradingModel/Settings
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_pinvoke(const Settings_tE78638ED5511B6BB368524329D832E5A63355741& unmarshaled, Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_pinvoke& marshaled)
{
	Exception_t* ___curves_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'curves' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___curves_4Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_pinvoke_back(const Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_pinvoke& marshaled, Settings_tE78638ED5511B6BB368524329D832E5A63355741& unmarshaled)
{
	Exception_t* ___curves_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'curves' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___curves_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ColorGradingModel/Settings
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_pinvoke_cleanup(Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ColorGradingModel/Settings
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_com(const Settings_tE78638ED5511B6BB368524329D832E5A63355741& unmarshaled, Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_com& marshaled)
{
	Exception_t* ___curves_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'curves' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___curves_4Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_com_back(const Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_com& marshaled, Settings_tE78638ED5511B6BB368524329D832E5A63355741& unmarshaled)
{
	Exception_t* ___curves_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'curves' of type 'Settings'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___curves_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ColorGradingModel/Settings
IL2CPP_EXTERN_C void Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshal_com_cleanup(Settings_tE78638ED5511B6BB368524329D832E5A63355741_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.ColorGradingModel/Settings UnityEngine.PostProcessing.ColorGradingModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_tE78638ED5511B6BB368524329D832E5A63355741  Settings_get_defaultSettings_m8A9FD147177C9F669E8149E0BEF03201C449FEF1 (const RuntimeMethod* method)
{
	Settings_tE78638ED5511B6BB368524329D832E5A63355741  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     tonemapping = TonemappingSettings.defaultSettings,
		//     basic = BasicSettings.defaultSettings,
		//     channelMixer = ChannelMixerSettings.defaultSettings,
		//     colorWheels = ColorWheelsSettings.defaultSettings,
		//     curves = CurvesSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_tE78638ED5511B6BB368524329D832E5A63355741 ));
		TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  L_0;
		L_0 = TonemappingSettings_get_defaultSettings_m020E6A42A1677C1396D70795E85C1A69E47BA6B6(/*hidden argument*/NULL);
		(&V_0)->set_tonemapping_0(L_0);
		BasicSettings_t3E9F0BE0A3774CDA8F13786B27AD3BD5E00FBD0C  L_1;
		L_1 = BasicSettings_get_defaultSettings_m24138DA6AD05E42A0F4FFD778F19162240398986(/*hidden argument*/NULL);
		(&V_0)->set_basic_1(L_1);
		ChannelMixerSettings_t7927145D6A2808EF21FDC306B2A1766A83F3205E  L_2;
		L_2 = ChannelMixerSettings_get_defaultSettings_m7A8E8EB1A356EF330B897AC1FDD12554484C0A61(/*hidden argument*/NULL);
		(&V_0)->set_channelMixer_2(L_2);
		ColorWheelsSettings_tE04727F59C85ED312A14FBA60FB7B22568505D8B  L_3;
		L_3 = ColorWheelsSettings_get_defaultSettings_m826EE33BD2BFD73210D8950D645031157013FE31(/*hidden argument*/NULL);
		(&V_0)->set_colorWheels_3(L_3);
		CurvesSettings_tECC417941386072A4E3B56CA59EF5F94CF30C5F6  L_4;
		L_4 = CurvesSettings_get_defaultSettings_mE69800F815D69BA509C8FF03ADEAB1C3CFF582A4(/*hidden argument*/NULL);
		(&V_0)->set_curves_4(L_4);
		Settings_tE78638ED5511B6BB368524329D832E5A63355741  L_5 = V_0;
		return L_5;
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
// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  TonemappingSettings_get_defaultSettings_m020E6A42A1677C1396D70795E85C1A69E47BA6B6 (const RuntimeMethod* method)
{
	TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TonemappingSettings
		// {
		//     tonemapper = Tonemapper.Neutral,
		// 
		//     neutralBlackIn = 0.02f,
		//     neutralWhiteIn = 10f,
		//     neutralBlackOut = 0f,
		//     neutralWhiteOut = 10f,
		//     neutralWhiteLevel = 5.3f,
		//     neutralWhiteClip = 10f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D ));
		(&V_0)->set_tonemapper_0(2);
		(&V_0)->set_neutralBlackIn_1((0.0199999996f));
		(&V_0)->set_neutralWhiteIn_2((10.0f));
		(&V_0)->set_neutralBlackOut_3((0.0f));
		(&V_0)->set_neutralWhiteOut_4((10.0f));
		(&V_0)->set_neutralWhiteLevel_5((5.30000019f));
		(&V_0)->set_neutralWhiteClip_6((10.0f));
		TonemappingSettings_tB222C1F5CB711840F43EEF745669EFE49548197D  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.DepthOfFieldComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m87771E6C48E0FBFF2BA6EDCB6CB158700214A7D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C547D50C7657A3E74FC8F05ECB3A705BB16AF2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFFA37623A57E2A7D5D752E132154E4A0E611C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E7EA98EF27D0C177A501478F6A636D57A19261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5923A6AD0A568F96C8D42C5DA7943F72B98F51B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF36E86D40711923E33EA393EE72A226EF89C214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6EE06363A208F4A08D7EEA39B55DD710EE70E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB975EC60CA64FBBC935CBC1DED3EAF288D6169E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC2492AA14F902D97F136C20B73300275F6560A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF78A9418B4D33DBFF17F335D0669B42522E6D392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _DepthOfFieldTex    = Shader.PropertyToID("_DepthOfFieldTex");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0DFFA37623A57E2A7D5D752E132154E4A0E611C5, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__DepthOfFieldTex_0(L_0);
		// internal static readonly int _DepthOfFieldCoCTex = Shader.PropertyToID("_DepthOfFieldCoCTex");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCB975EC60CA64FBBC935CBC1DED3EAF288D6169E, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__DepthOfFieldCoCTex_1(L_1);
		// internal static readonly int _Distance           = Shader.PropertyToID("_Distance");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral2F27F2E70D75C32B101C2B5B83AF222261FD3DAF, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__Distance_2(L_2);
		// internal static readonly int _LensCoeff          = Shader.PropertyToID("_LensCoeff");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDAC2492AA14F902D97F136C20B73300275F6560A, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__LensCoeff_3(L_3);
		// internal static readonly int _MaxCoC             = Shader.PropertyToID("_MaxCoC");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC6EE06363A208F4A08D7EEA39B55DD710EE70E21, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__MaxCoC_4(L_4);
		// internal static readonly int _RcpMaxCoC          = Shader.PropertyToID("_RcpMaxCoC");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0C547D50C7657A3E74FC8F05ECB3A705BB16AF2C, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__RcpMaxCoC_5(L_5);
		// internal static readonly int _RcpAspect          = Shader.PropertyToID("_RcpAspect");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral51E7EA98EF27D0C177A501478F6A636D57A19261, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__RcpAspect_6(L_6);
		// internal static readonly int _MainTex            = Shader.PropertyToID("_MainTex");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__MainTex_7(L_7);
		// internal static readonly int _CoCTex             = Shader.PropertyToID("_CoCTex");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5923A6AD0A568F96C8D42C5DA7943F72B98F51B2, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__CoCTex_8(L_8);
		// internal static readonly int _TaaParams          = Shader.PropertyToID("_TaaParams");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF78A9418B4D33DBFF17F335D0669B42522E6D392, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__TaaParams_9(L_9);
		// internal static readonly int _DepthOfFieldParams = Shader.PropertyToID("_DepthOfFieldParams");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralAF36E86D40711923E33EA393EE72A226EF89C214, /*hidden argument*/NULL);
		((Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tF8C7BB35B9E579DB213C05E1C7036F5583A8F7A7_il2cpp_TypeInfo_var))->set__DepthOfFieldParams_10(L_10);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.DepthOfFieldModel/Settings
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_pinvoke(const Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664& unmarshaled, Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_pinvoke& marshaled)
{
	marshaled.___focusDistance_0 = unmarshaled.get_focusDistance_0();
	marshaled.___aperture_1 = unmarshaled.get_aperture_1();
	marshaled.___focalLength_2 = unmarshaled.get_focalLength_2();
	marshaled.___useCameraFov_3 = static_cast<int32_t>(unmarshaled.get_useCameraFov_3());
	marshaled.___kernelSize_4 = unmarshaled.get_kernelSize_4();
}
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_pinvoke_back(const Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_pinvoke& marshaled, Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664& unmarshaled)
{
	float unmarshaled_focusDistance_temp_0 = 0.0f;
	unmarshaled_focusDistance_temp_0 = marshaled.___focusDistance_0;
	unmarshaled.set_focusDistance_0(unmarshaled_focusDistance_temp_0);
	float unmarshaled_aperture_temp_1 = 0.0f;
	unmarshaled_aperture_temp_1 = marshaled.___aperture_1;
	unmarshaled.set_aperture_1(unmarshaled_aperture_temp_1);
	float unmarshaled_focalLength_temp_2 = 0.0f;
	unmarshaled_focalLength_temp_2 = marshaled.___focalLength_2;
	unmarshaled.set_focalLength_2(unmarshaled_focalLength_temp_2);
	bool unmarshaled_useCameraFov_temp_3 = false;
	unmarshaled_useCameraFov_temp_3 = static_cast<bool>(marshaled.___useCameraFov_3);
	unmarshaled.set_useCameraFov_3(unmarshaled_useCameraFov_temp_3);
	int32_t unmarshaled_kernelSize_temp_4 = 0;
	unmarshaled_kernelSize_temp_4 = marshaled.___kernelSize_4;
	unmarshaled.set_kernelSize_4(unmarshaled_kernelSize_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.DepthOfFieldModel/Settings
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_pinvoke_cleanup(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.DepthOfFieldModel/Settings
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_com(const Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664& unmarshaled, Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_com& marshaled)
{
	marshaled.___focusDistance_0 = unmarshaled.get_focusDistance_0();
	marshaled.___aperture_1 = unmarshaled.get_aperture_1();
	marshaled.___focalLength_2 = unmarshaled.get_focalLength_2();
	marshaled.___useCameraFov_3 = static_cast<int32_t>(unmarshaled.get_useCameraFov_3());
	marshaled.___kernelSize_4 = unmarshaled.get_kernelSize_4();
}
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_com_back(const Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_com& marshaled, Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664& unmarshaled)
{
	float unmarshaled_focusDistance_temp_0 = 0.0f;
	unmarshaled_focusDistance_temp_0 = marshaled.___focusDistance_0;
	unmarshaled.set_focusDistance_0(unmarshaled_focusDistance_temp_0);
	float unmarshaled_aperture_temp_1 = 0.0f;
	unmarshaled_aperture_temp_1 = marshaled.___aperture_1;
	unmarshaled.set_aperture_1(unmarshaled_aperture_temp_1);
	float unmarshaled_focalLength_temp_2 = 0.0f;
	unmarshaled_focalLength_temp_2 = marshaled.___focalLength_2;
	unmarshaled.set_focalLength_2(unmarshaled_focalLength_temp_2);
	bool unmarshaled_useCameraFov_temp_3 = false;
	unmarshaled_useCameraFov_temp_3 = static_cast<bool>(marshaled.___useCameraFov_3);
	unmarshaled.set_useCameraFov_3(unmarshaled_useCameraFov_temp_3);
	int32_t unmarshaled_kernelSize_temp_4 = 0;
	unmarshaled_kernelSize_temp_4 = marshaled.___kernelSize_4;
	unmarshaled.set_kernelSize_4(unmarshaled_kernelSize_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.DepthOfFieldModel/Settings
IL2CPP_EXTERN_C void Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshal_com_cleanup(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.DepthOfFieldModel/Settings UnityEngine.PostProcessing.DepthOfFieldModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664  Settings_get_defaultSettings_mABFD370ECDB30AF177A0D98B27D76BCFD38E9B47 (const RuntimeMethod* method)
{
	Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     focusDistance = 10f,
		//     aperture = 5.6f,
		//     focalLength = 50f,
		//     useCameraFov = false,
		//     kernelSize = KernelSize.Medium
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664 ));
		(&V_0)->set_focusDistance_0((10.0f));
		(&V_0)->set_aperture_1((5.5999999f));
		(&V_0)->set_focalLength_2((50.0f));
		(&V_0)->set_useCameraFov_3((bool)0);
		(&V_0)->set_kernelSize_4(1);
		Settings_t47C2BF11E803A54E9720EB17A694C598B0EA3664  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.DitheringComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mF9C28E0D67C284374071F66F847932B8ADEFE184 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32404EE0FBFFCF67870620BA76FD49CDC93A1ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64BE48282DCEB20CE541FEB37C063004F8924884);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _DitheringTex = Shader.PropertyToID("_DitheringTex");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral32404EE0FBFFCF67870620BA76FD49CDC93A1ECC, /*hidden argument*/NULL);
		((Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_il2cpp_TypeInfo_var))->set__DitheringTex_0(L_0);
		// internal static readonly int _DitheringCoords = Shader.PropertyToID("_DitheringCoords");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral64BE48282DCEB20CE541FEB37C063004F8924884, /*hidden argument*/NULL);
		((Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t739126429CE9A5CF95E4EFBB34D8FD27682A43D2_il2cpp_TypeInfo_var))->set__DitheringCoords_1(L_1);
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
// UnityEngine.PostProcessing.DitheringModel/Settings UnityEngine.PostProcessing.DitheringModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68  Settings_get_defaultSettings_mBDFB1447E0EDB6E476EB51D2A5EC758749A4D4C8 (const RuntimeMethod* method)
{
	Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return new Settings(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68 ));
		Settings_t45586C640CE3712ED5ED6DEB91D3B2BD34908F68  L_0 = V_0;
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
// System.Void ExampleWheelController/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m718B59E42C2DEAF29E07EC5506DACBE52FCB5746 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37C66F1E07408490FD67264D63049F2127B2E5D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _MotionAmount = Shader.PropertyToID("_MotionAmount");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral37C66F1E07408490FD67264D63049F2127B2E5D7, /*hidden argument*/NULL);
		((Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t470ABA0BCAE676CFCFB531FE90C8A474E3A01A96_il2cpp_TypeInfo_var))->set__MotionAmount_0(L_0);
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
// System.Void UnityEngine.PostProcessing.EyeAdaptationComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mCB841BE0F9AF1A2E32E94B3B7E5424BC37B0DA0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF91128346A6C796D320264FE049EEB6AABA1D52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41868DE0B663EE64B8FEC63B64C634F6B1DE0A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66B94135F244801384D5D55B97E532E620721F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6DC779CA7A83F68E12B3C88B9BF10CE4B6FB9CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _Params               = Shader.PropertyToID("_Params");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__Params_0(L_0);
		// internal static readonly int _Speed                = Shader.PropertyToID("_Speed");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__Speed_1(L_1);
		// internal static readonly int _ScaleOffsetRes       = Shader.PropertyToID("_ScaleOffsetRes");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB41868DE0B663EE64B8FEC63B64C634F6B1DE0A9, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__ScaleOffsetRes_2(L_2);
		// internal static readonly int _ExposureCompensation = Shader.PropertyToID("_ExposureCompensation");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralAF91128346A6C796D320264FE049EEB6AABA1D52, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__ExposureCompensation_3(L_3);
		// internal static readonly int _AutoExposure         = Shader.PropertyToID("_AutoExposure");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB66B94135F244801384D5D55B97E532E620721F6, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__AutoExposure_4(L_4);
		// internal static readonly int _DebugWidth           = Shader.PropertyToID("_DebugWidth");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE6DC779CA7A83F68E12B3C88B9BF10CE4B6FB9CA, /*hidden argument*/NULL);
		((Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t0267B7C6CAE5677CC5407735E79E7DC8A8732BB2_il2cpp_TypeInfo_var))->set__DebugWidth_5(L_5);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.EyeAdaptationModel/Settings
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_pinvoke(const Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235& unmarshaled, Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_pinvoke& marshaled)
{
	marshaled.___lowPercent_0 = unmarshaled.get_lowPercent_0();
	marshaled.___highPercent_1 = unmarshaled.get_highPercent_1();
	marshaled.___minLuminance_2 = unmarshaled.get_minLuminance_2();
	marshaled.___maxLuminance_3 = unmarshaled.get_maxLuminance_3();
	marshaled.___keyValue_4 = unmarshaled.get_keyValue_4();
	marshaled.___dynamicKeyValue_5 = static_cast<int32_t>(unmarshaled.get_dynamicKeyValue_5());
	marshaled.___adaptationType_6 = unmarshaled.get_adaptationType_6();
	marshaled.___speedUp_7 = unmarshaled.get_speedUp_7();
	marshaled.___speedDown_8 = unmarshaled.get_speedDown_8();
	marshaled.___logMin_9 = unmarshaled.get_logMin_9();
	marshaled.___logMax_10 = unmarshaled.get_logMax_10();
}
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_pinvoke_back(const Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_pinvoke& marshaled, Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235& unmarshaled)
{
	float unmarshaled_lowPercent_temp_0 = 0.0f;
	unmarshaled_lowPercent_temp_0 = marshaled.___lowPercent_0;
	unmarshaled.set_lowPercent_0(unmarshaled_lowPercent_temp_0);
	float unmarshaled_highPercent_temp_1 = 0.0f;
	unmarshaled_highPercent_temp_1 = marshaled.___highPercent_1;
	unmarshaled.set_highPercent_1(unmarshaled_highPercent_temp_1);
	float unmarshaled_minLuminance_temp_2 = 0.0f;
	unmarshaled_minLuminance_temp_2 = marshaled.___minLuminance_2;
	unmarshaled.set_minLuminance_2(unmarshaled_minLuminance_temp_2);
	float unmarshaled_maxLuminance_temp_3 = 0.0f;
	unmarshaled_maxLuminance_temp_3 = marshaled.___maxLuminance_3;
	unmarshaled.set_maxLuminance_3(unmarshaled_maxLuminance_temp_3);
	float unmarshaled_keyValue_temp_4 = 0.0f;
	unmarshaled_keyValue_temp_4 = marshaled.___keyValue_4;
	unmarshaled.set_keyValue_4(unmarshaled_keyValue_temp_4);
	bool unmarshaled_dynamicKeyValue_temp_5 = false;
	unmarshaled_dynamicKeyValue_temp_5 = static_cast<bool>(marshaled.___dynamicKeyValue_5);
	unmarshaled.set_dynamicKeyValue_5(unmarshaled_dynamicKeyValue_temp_5);
	int32_t unmarshaled_adaptationType_temp_6 = 0;
	unmarshaled_adaptationType_temp_6 = marshaled.___adaptationType_6;
	unmarshaled.set_adaptationType_6(unmarshaled_adaptationType_temp_6);
	float unmarshaled_speedUp_temp_7 = 0.0f;
	unmarshaled_speedUp_temp_7 = marshaled.___speedUp_7;
	unmarshaled.set_speedUp_7(unmarshaled_speedUp_temp_7);
	float unmarshaled_speedDown_temp_8 = 0.0f;
	unmarshaled_speedDown_temp_8 = marshaled.___speedDown_8;
	unmarshaled.set_speedDown_8(unmarshaled_speedDown_temp_8);
	int32_t unmarshaled_logMin_temp_9 = 0;
	unmarshaled_logMin_temp_9 = marshaled.___logMin_9;
	unmarshaled.set_logMin_9(unmarshaled_logMin_temp_9);
	int32_t unmarshaled_logMax_temp_10 = 0;
	unmarshaled_logMax_temp_10 = marshaled.___logMax_10;
	unmarshaled.set_logMax_10(unmarshaled_logMax_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.EyeAdaptationModel/Settings
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_pinvoke_cleanup(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.EyeAdaptationModel/Settings
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_com(const Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235& unmarshaled, Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_com& marshaled)
{
	marshaled.___lowPercent_0 = unmarshaled.get_lowPercent_0();
	marshaled.___highPercent_1 = unmarshaled.get_highPercent_1();
	marshaled.___minLuminance_2 = unmarshaled.get_minLuminance_2();
	marshaled.___maxLuminance_3 = unmarshaled.get_maxLuminance_3();
	marshaled.___keyValue_4 = unmarshaled.get_keyValue_4();
	marshaled.___dynamicKeyValue_5 = static_cast<int32_t>(unmarshaled.get_dynamicKeyValue_5());
	marshaled.___adaptationType_6 = unmarshaled.get_adaptationType_6();
	marshaled.___speedUp_7 = unmarshaled.get_speedUp_7();
	marshaled.___speedDown_8 = unmarshaled.get_speedDown_8();
	marshaled.___logMin_9 = unmarshaled.get_logMin_9();
	marshaled.___logMax_10 = unmarshaled.get_logMax_10();
}
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_com_back(const Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_com& marshaled, Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235& unmarshaled)
{
	float unmarshaled_lowPercent_temp_0 = 0.0f;
	unmarshaled_lowPercent_temp_0 = marshaled.___lowPercent_0;
	unmarshaled.set_lowPercent_0(unmarshaled_lowPercent_temp_0);
	float unmarshaled_highPercent_temp_1 = 0.0f;
	unmarshaled_highPercent_temp_1 = marshaled.___highPercent_1;
	unmarshaled.set_highPercent_1(unmarshaled_highPercent_temp_1);
	float unmarshaled_minLuminance_temp_2 = 0.0f;
	unmarshaled_minLuminance_temp_2 = marshaled.___minLuminance_2;
	unmarshaled.set_minLuminance_2(unmarshaled_minLuminance_temp_2);
	float unmarshaled_maxLuminance_temp_3 = 0.0f;
	unmarshaled_maxLuminance_temp_3 = marshaled.___maxLuminance_3;
	unmarshaled.set_maxLuminance_3(unmarshaled_maxLuminance_temp_3);
	float unmarshaled_keyValue_temp_4 = 0.0f;
	unmarshaled_keyValue_temp_4 = marshaled.___keyValue_4;
	unmarshaled.set_keyValue_4(unmarshaled_keyValue_temp_4);
	bool unmarshaled_dynamicKeyValue_temp_5 = false;
	unmarshaled_dynamicKeyValue_temp_5 = static_cast<bool>(marshaled.___dynamicKeyValue_5);
	unmarshaled.set_dynamicKeyValue_5(unmarshaled_dynamicKeyValue_temp_5);
	int32_t unmarshaled_adaptationType_temp_6 = 0;
	unmarshaled_adaptationType_temp_6 = marshaled.___adaptationType_6;
	unmarshaled.set_adaptationType_6(unmarshaled_adaptationType_temp_6);
	float unmarshaled_speedUp_temp_7 = 0.0f;
	unmarshaled_speedUp_temp_7 = marshaled.___speedUp_7;
	unmarshaled.set_speedUp_7(unmarshaled_speedUp_temp_7);
	float unmarshaled_speedDown_temp_8 = 0.0f;
	unmarshaled_speedDown_temp_8 = marshaled.___speedDown_8;
	unmarshaled.set_speedDown_8(unmarshaled_speedDown_temp_8);
	int32_t unmarshaled_logMin_temp_9 = 0;
	unmarshaled_logMin_temp_9 = marshaled.___logMin_9;
	unmarshaled.set_logMin_9(unmarshaled_logMin_temp_9);
	int32_t unmarshaled_logMax_temp_10 = 0;
	unmarshaled_logMax_temp_10 = marshaled.___logMax_10;
	unmarshaled.set_logMax_10(unmarshaled_logMax_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.EyeAdaptationModel/Settings
IL2CPP_EXTERN_C void Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshal_com_cleanup(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.EyeAdaptationModel/Settings UnityEngine.PostProcessing.EyeAdaptationModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235  Settings_get_defaultSettings_m2344CFBEAD562CEBC2691DF2F31544D2D1AECBAB (const RuntimeMethod* method)
{
	Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     lowPercent = 45f,
		//     highPercent = 95f,
		// 
		//     minLuminance = -5f,
		//     maxLuminance = 1f,
		//     keyValue = 0.25f,
		//     dynamicKeyValue = true,
		// 
		//     adaptationType = EyeAdaptationType.Progressive,
		//     speedUp = 2f,
		//     speedDown = 1f,
		// 
		//     logMin = -8,
		//     logMax = 4
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235 ));
		(&V_0)->set_lowPercent_0((45.0f));
		(&V_0)->set_highPercent_1((95.0f));
		(&V_0)->set_minLuminance_2((-5.0f));
		(&V_0)->set_maxLuminance_3((1.0f));
		(&V_0)->set_keyValue_4((0.25f));
		(&V_0)->set_dynamicKeyValue_5((bool)1);
		(&V_0)->set_adaptationType_6(0);
		(&V_0)->set_speedUp_7((2.0f));
		(&V_0)->set_speedDown_8((1.0f));
		(&V_0)->set_logMin_9(((int32_t)-8));
		(&V_0)->set_logMax_10(4);
		Settings_t7907B376DFAB0AA2732EA62831EFD13F12FFA235  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.FogComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mFF3DEA013808C7E86DCEA731A1040FB75B3718AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26FADA9B1828B8A1F93B682B636D8F2C9A13D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E918502AC81EC5515FFE14D0A95F18A73D4E4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44791DE40F61E0BC6A155FA3183DBF85BC0502CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC3BEF2346FC5A8C53D272817D3864538D149C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _FogColor = Shader.PropertyToID("_FogColor");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3E918502AC81EC5515FFE14D0A95F18A73D4E4A9, /*hidden argument*/NULL);
		((Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var))->set__FogColor_0(L_0);
		// internal static readonly int _Density  = Shader.PropertyToID("_Density");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral26FADA9B1828B8A1F93B682B636D8F2C9A13D643, /*hidden argument*/NULL);
		((Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var))->set__Density_1(L_1);
		// internal static readonly int _Start    = Shader.PropertyToID("_Start");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDFC3BEF2346FC5A8C53D272817D3864538D149C5, /*hidden argument*/NULL);
		((Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var))->set__Start_2(L_2);
		// internal static readonly int _End      = Shader.PropertyToID("_End");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral44791DE40F61E0BC6A155FA3183DBF85BC0502CA, /*hidden argument*/NULL);
		((Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var))->set__End_3(L_3);
		// internal static readonly int _TempRT   = Shader.PropertyToID("_TempRT");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6, /*hidden argument*/NULL);
		((Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3CD948AC6577025EFEC84429FA859F5A0511D6DC_il2cpp_TypeInfo_var))->set__TempRT_4(L_4);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.FogModel/Settings
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_pinvoke(const Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88& unmarshaled, Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_pinvoke& marshaled)
{
	marshaled.___excludeSkybox_0 = static_cast<int32_t>(unmarshaled.get_excludeSkybox_0());
}
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_pinvoke_back(const Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_pinvoke& marshaled, Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88& unmarshaled)
{
	bool unmarshaled_excludeSkybox_temp_0 = false;
	unmarshaled_excludeSkybox_temp_0 = static_cast<bool>(marshaled.___excludeSkybox_0);
	unmarshaled.set_excludeSkybox_0(unmarshaled_excludeSkybox_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.FogModel/Settings
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_pinvoke_cleanup(Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.FogModel/Settings
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_com(const Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88& unmarshaled, Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_com& marshaled)
{
	marshaled.___excludeSkybox_0 = static_cast<int32_t>(unmarshaled.get_excludeSkybox_0());
}
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_com_back(const Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_com& marshaled, Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88& unmarshaled)
{
	bool unmarshaled_excludeSkybox_temp_0 = false;
	unmarshaled_excludeSkybox_temp_0 = static_cast<bool>(marshaled.___excludeSkybox_0);
	unmarshaled.set_excludeSkybox_0(unmarshaled_excludeSkybox_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.FogModel/Settings
IL2CPP_EXTERN_C void Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshal_com_cleanup(Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.FogModel/Settings UnityEngine.PostProcessing.FogModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88  Settings_get_defaultSettings_m3F80C1208F2B493034B966175DA19D8BCE3B9001 (const RuntimeMethod* method)
{
	Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     excludeSkybox = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88 ));
		(&V_0)->set_excludeSkybox_0((bool)1);
		Settings_tB602113EBE45D812F02BDA2E69E0F9E0081D0F88  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.FxaaComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m9BBFBBF482F4984B56BA50885F227F07ED63ADCC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _QualitySettings = Shader.PropertyToID("_QualitySettings");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralFF3810C5340407168CC4D530ED9AD54E66D780CE, /*hidden argument*/NULL);
		((Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_il2cpp_TypeInfo_var))->set__QualitySettings_0(L_0);
		// internal static readonly int _ConsoleSettings = Shader.PropertyToID("_ConsoleSettings");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4537C260B9EF77926B9C25D5FD8AB57178FA5E0F, /*hidden argument*/NULL);
		((Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tBF220A6735CCBF5C78068F9481FBDADF7596AA2D_il2cpp_TypeInfo_var))->set__ConsoleSettings_1(L_1);
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
// System.Void UnityEngine.PostProcessing.GrainComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mC7ABD16006C393A6C02C2E638E251B28E97CBC22 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69EFC967936800473A4F9876FAAA3EEADC9362FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD8876816F840CDD275978547DCA00605F5521FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE9A5CE2C99B1ACB29F60F54B0FB33100BB8DA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD236D27ACEF2604264B8A2F7F835C87D1A6FF1A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _Grain_Params1 = Shader.PropertyToID("_Grain_Params1");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCEE9A5CE2C99B1ACB29F60F54B0FB33100BB8DA9, /*hidden argument*/NULL);
		((Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var))->set__Grain_Params1_0(L_0);
		// internal static readonly int _Grain_Params2 = Shader.PropertyToID("_Grain_Params2");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD236D27ACEF2604264B8A2F7F835C87D1A6FF1A3, /*hidden argument*/NULL);
		((Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var))->set__Grain_Params2_1(L_1);
		// internal static readonly int _GrainTex      = Shader.PropertyToID("_GrainTex");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralAD8876816F840CDD275978547DCA00605F5521FA, /*hidden argument*/NULL);
		((Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var))->set__GrainTex_2(L_2);
		// internal static readonly int _Phase         = Shader.PropertyToID("_Phase");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral69EFC967936800473A4F9876FAAA3EEADC9362FE, /*hidden argument*/NULL);
		((Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t51F5BEDBD53815A62985FC2D855BF37CE5385189_il2cpp_TypeInfo_var))->set__Phase_3(L_3);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.GrainModel/Settings
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_pinvoke(const Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1& unmarshaled, Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_pinvoke& marshaled)
{
	marshaled.___colored_0 = static_cast<int32_t>(unmarshaled.get_colored_0());
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___size_2 = unmarshaled.get_size_2();
	marshaled.___luminanceContribution_3 = unmarshaled.get_luminanceContribution_3();
}
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_pinvoke_back(const Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_pinvoke& marshaled, Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1& unmarshaled)
{
	bool unmarshaled_colored_temp_0 = false;
	unmarshaled_colored_temp_0 = static_cast<bool>(marshaled.___colored_0);
	unmarshaled.set_colored_0(unmarshaled_colored_temp_0);
	float unmarshaled_intensity_temp_1 = 0.0f;
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	float unmarshaled_size_temp_2 = 0.0f;
	unmarshaled_size_temp_2 = marshaled.___size_2;
	unmarshaled.set_size_2(unmarshaled_size_temp_2);
	float unmarshaled_luminanceContribution_temp_3 = 0.0f;
	unmarshaled_luminanceContribution_temp_3 = marshaled.___luminanceContribution_3;
	unmarshaled.set_luminanceContribution_3(unmarshaled_luminanceContribution_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.GrainModel/Settings
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_pinvoke_cleanup(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.GrainModel/Settings
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_com(const Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1& unmarshaled, Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_com& marshaled)
{
	marshaled.___colored_0 = static_cast<int32_t>(unmarshaled.get_colored_0());
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___size_2 = unmarshaled.get_size_2();
	marshaled.___luminanceContribution_3 = unmarshaled.get_luminanceContribution_3();
}
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_com_back(const Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_com& marshaled, Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1& unmarshaled)
{
	bool unmarshaled_colored_temp_0 = false;
	unmarshaled_colored_temp_0 = static_cast<bool>(marshaled.___colored_0);
	unmarshaled.set_colored_0(unmarshaled_colored_temp_0);
	float unmarshaled_intensity_temp_1 = 0.0f;
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	float unmarshaled_size_temp_2 = 0.0f;
	unmarshaled_size_temp_2 = marshaled.___size_2;
	unmarshaled.set_size_2(unmarshaled_size_temp_2);
	float unmarshaled_luminanceContribution_temp_3 = 0.0f;
	unmarshaled_luminanceContribution_temp_3 = marshaled.___luminanceContribution_3;
	unmarshaled.set_luminanceContribution_3(unmarshaled_luminanceContribution_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.GrainModel/Settings
IL2CPP_EXTERN_C void Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshal_com_cleanup(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.GrainModel/Settings UnityEngine.PostProcessing.GrainModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1  Settings_get_defaultSettings_mE53750093B8A4A26FF705D456758ACC6AD7EEA56 (const RuntimeMethod* method)
{
	Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     colored = true,
		//     intensity = 0.5f,
		//     size = 1f,
		//     luminanceContribution = 0.8f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1 ));
		(&V_0)->set_colored_0((bool)1);
		(&V_0)->set_intensity_1((0.5f));
		(&V_0)->set_size_2((1.0f));
		(&V_0)->set_luminanceContribution_3((0.800000012f));
		Settings_t55653ADD3EB1DCAB4C392AB989E52CC6810A4CA1  L_0 = V_0;
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
// Conversion methods for marshalling of: LightFlicker/LightSource
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_pinvoke(const LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B& unmarshaled, LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'LightSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_pinvoke_back(const LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_pinvoke& marshaled, LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'LightSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LightFlicker/LightSource
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_pinvoke_cleanup(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LightFlicker/LightSource
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_com(const LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B& unmarshaled, LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_com& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'LightSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_com_back(const LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_com& marshaled, LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'LightSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LightFlicker/LightSource
IL2CPP_EXTERN_C void LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshal_com_cleanup(LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B_marshaled_com& marshaled)
{
}
// System.Void LightFlicker/LightSource::.ctor(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSource__ctor_m2A6C35CB4F135533FB9FEF1565D0A2FA7926ABB3 (LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B * __this, Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source0, const RuntimeMethod* method)
{
	{
		// this.source = source;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = ___source0;
		__this->set_source_0(L_0);
		// this.intensity = source.intensity;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1 = ___source0;
		NullCheck(L_1);
		float L_2;
		L_2 = Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326(L_1, /*hidden argument*/NULL);
		__this->set_intensity_1(L_2);
		// this.targetIntensity = source.intensity;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_3 = ___source0;
		NullCheck(L_3);
		float L_4;
		L_4 = Light_get_intensity_mFABC9E1EA23E954E1072233C33C2211D64262326(L_3, /*hidden argument*/NULL);
		__this->set_targetIntensity_2(L_4);
		// this.position = source.transform.position;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_5 = ___source0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_position_3(L_7);
		// this.targetPosition = source.transform.position;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = ___source0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		__this->set_targetPosition_4(L_10);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void LightSource__ctor_m2A6C35CB4F135533FB9FEF1565D0A2FA7926ABB3_AdjustorThunk (RuntimeObject * __this, Light_tA2F349FE839781469A0344CF6039B51512394275 * ___source0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B * _thisAdjusted = reinterpret_cast<LightSource_tCD0C4AB47A702A17DEDEEB9284BDD5820F2CE87B *>(__this + _offset);
	LightSource__ctor_m2A6C35CB4F135533FB9FEF1565D0A2FA7926ABB3(_thisAdjusted, ___source0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBlendingFilter__ctor_m3364D401CAFA1CBF2CF6640FAA055BA2F668A5FF (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FrameBlendingFilter()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_UseCompression = CheckSupportCompression();
		bool L_0;
		L_0 = FrameBlendingFilter_CheckSupportCompression_m8B4682F8535091B8CFE59E98D0637F801FDC8958(/*hidden argument*/NULL);
		__this->set_m_UseCompression_0(L_0);
		// m_RawTextureFormat = GetPreferredRenderTextureFormat();
		int32_t L_1;
		L_1 = FrameBlendingFilter_GetPreferredRenderTextureFormat_mC6E3869191968D568B48B17F4D6D20ED50364B88(/*hidden argument*/NULL);
		__this->set_m_RawTextureFormat_1(L_1);
		// m_FrameList = new Frame[4];
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_2 = (FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9*)(FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9*)SZArrayNew(FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_m_FrameList_2(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBlendingFilter_Dispose_mF4FE203027B3F40753941C07564936DEC7339D7D (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, const RuntimeMethod* method)
{
	FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* V_0 = NULL;
	int32_t V_1 = 0;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var frame in m_FrameList)
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_0 = __this->get_m_FrameList_2();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		// foreach (var frame in m_FrameList)
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// frame.Release();
		Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		// foreach (var frame in m_FrameList)
		int32_t L_6 = V_1;
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::PushFrame(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBlendingFilter_PushFrame_m58435E2ADBE0ED73A3667FC7587594D00ED7BD8F (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var frameCount = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (frameCount == m_LastFrameCount) return;
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_m_LastFrameCount_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0010;
		}
	}
	{
		// if (frameCount == m_LastFrameCount) return;
		return;
	}

IL_0010:
	{
		// var index = frameCount % m_FrameList.Length;
		int32_t L_3 = V_0;
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_4 = __this->get_m_FrameList_2();
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)L_3%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		// if (m_UseCompression)
		bool L_5 = __this->get_m_UseCompression_0();
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// m_FrameList[index].MakeRecord(cb, source, width, height, material);
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_6 = __this->get_m_FrameList_2();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_8 = ___cb0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_9 = ___source1;
		int32_t L_10 = ___width2;
		int32_t L_11 = ___height3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___material4;
		Frame_MakeRecord_m76C2721EA40FE50536656F9CDCEB46FA9ED9FEAE((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_003d:
	{
		// m_FrameList[index].MakeRecordRaw(cb, source, width, height, m_RawTextureFormat);
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_13 = __this->get_m_FrameList_2();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_15 = ___cb0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_16 = ___source1;
		int32_t L_17 = ___width2;
		int32_t L_18 = ___height3;
		int32_t L_19 = __this->get_m_RawTextureFormat_1();
		Frame_MakeRecordRaw_m99E90CFFDF04BA32505153D2A005A5AF23ADD9AB((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// m_LastFrameCount = frameCount;
		int32_t L_20 = V_0;
		__this->set_m_LastFrameCount_3(L_20);
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::BlendFrames(UnityEngine.Rendering.CommandBuffer,System.Single,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBlendingFilter_BlendFrames_m04F1245F52C29DE197C961C1B92ED33A23DA752E (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, float ___strength1, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source2, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___destination3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_0 = NULL;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B2_3 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_0 = NULL;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_1 = NULL;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B3_4 = NULL;
	{
		// var t = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_0;
		// var f1 = GetFrameRelative(-1);
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_1;
		L_1 = FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4(__this, (-1), /*hidden argument*/NULL);
		V_1 = L_1;
		// var f2 = GetFrameRelative(-2);
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_2;
		L_2 = FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4(__this, ((int32_t)-2), /*hidden argument*/NULL);
		V_2 = L_2;
		// var f3 = GetFrameRelative(-3);
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_3;
		L_3 = FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4(__this, ((int32_t)-3), /*hidden argument*/NULL);
		V_3 = L_3;
		// var f4 = GetFrameRelative(-4);
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_4;
		L_4 = FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4(__this, ((int32_t)-4), /*hidden argument*/NULL);
		V_4 = L_4;
		// cb.SetGlobalTexture(Uniforms._History1LumaTex, f1.lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_5 = ___cb0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History1LumaTex_14();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_7 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = L_7.get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_9;
		L_9 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_5, L_6, L_9, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History2LumaTex, f2.lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_10 = ___cb0;
		int32_t L_11 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History2LumaTex_15();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_12 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = L_12.get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_14;
		L_14 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_10, L_11, L_14, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History3LumaTex, f3.lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_15 = ___cb0;
		int32_t L_16 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History3LumaTex_16();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_17 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = L_17.get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_19;
		L_19 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_15, L_16, L_19, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History4LumaTex, f4.lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_20 = ___cb0;
		int32_t L_21 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History4LumaTex_17();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_22 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = L_22.get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_24;
		L_24 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_20, L_21, L_24, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History1ChromaTex, f1.chromaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_25 = ___cb0;
		int32_t L_26 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History1ChromaTex_18();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_27 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_28 = L_27.get_chromaTexture_1();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_29;
		L_29 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_25, L_26, L_29, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History2ChromaTex, f2.chromaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_30 = ___cb0;
		int32_t L_31 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History2ChromaTex_19();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_32 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_33 = L_32.get_chromaTexture_1();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_34;
		L_34 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_30, L_31, L_34, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History3ChromaTex, f3.chromaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_35 = ___cb0;
		int32_t L_36 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History3ChromaTex_20();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_37 = V_3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_38 = L_37.get_chromaTexture_1();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_39;
		L_39 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_35, L_36, L_39, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._History4ChromaTex, f4.chromaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_40 = ___cb0;
		int32_t L_41 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History4ChromaTex_21();
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_42 = V_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_43 = L_42.get_chromaTexture_1();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_44;
		L_44 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_40, L_41, L_44, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._History1Weight, f1.CalculateWeight(strength, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_45 = ___cb0;
		int32_t L_46 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History1Weight_22();
		float L_47 = ___strength1;
		float L_48 = V_0;
		float L_49;
		L_49 = Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)(&V_1), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_45, L_46, L_49, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._History2Weight, f2.CalculateWeight(strength, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_50 = ___cb0;
		int32_t L_51 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History2Weight_23();
		float L_52 = ___strength1;
		float L_53 = V_0;
		float L_54;
		L_54 = Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)(&V_2), L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_50, L_51, L_54, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._History3Weight, f3.CalculateWeight(strength, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_55 = ___cb0;
		int32_t L_56 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History3Weight_24();
		float L_57 = ___strength1;
		float L_58 = V_0;
		float L_59;
		L_59 = Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)(&V_3), L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_55, L_56, L_59, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._History4Weight, f4.CalculateWeight(strength, t));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_60 = ___cb0;
		int32_t L_61 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__History4Weight_25();
		float L_62 = ___strength1;
		float L_63 = V_0;
		float L_64;
		L_64 = Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)(&V_4), L_62, L_63, /*hidden argument*/NULL);
		NullCheck(L_60);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_60, L_61, L_64, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, source);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_65 = ___cb0;
		int32_t L_66 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_67 = ___source2;
		NullCheck(L_65);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_65, L_66, L_67, /*hidden argument*/NULL);
		// cb.Blit(source, destination, material, m_UseCompression ? (int)Pass.FrameBlendingChroma : (int)Pass.FrameBlendingRaw);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_68 = ___cb0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_69 = ___source2;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_70 = ___destination3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_71 = ___material4;
		bool L_72 = __this->get_m_UseCompression_0();
		G_B1_0 = L_71;
		G_B1_1 = L_70;
		G_B1_2 = L_69;
		G_B1_3 = L_68;
		if (L_72)
		{
			G_B2_0 = L_71;
			G_B2_1 = L_70;
			G_B2_2 = L_69;
			G_B2_3 = L_68;
			goto IL_0149;
		}
	}
	{
		G_B3_0 = 8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_014a;
	}

IL_0149:
	{
		G_B3_0 = 7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_014a:
	{
		NullCheck(G_B3_4);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::CheckSupportCompression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameBlendingFilter_CheckSupportCompression_m8B4682F8535091B8CFE59E98D0637F801FDC8958 (const RuntimeMethod* method)
{
	{
		// return
		//     SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.R8) &&
		//     SystemInfo.supportedRenderTargetCount > 1;
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(((int32_t)16), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = SystemInfo_get_supportedRenderTargetCount_mF1878047AAED7BE6839958B61C0CC7E2FB204B44(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::GetPreferredRenderTextureFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameBlendingFilter_GetPreferredRenderTextureFormat_mC6E3869191968D568B48B17F4D6D20ED50364B88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// RenderTextureFormat[] formats =
		// {
		//     RenderTextureFormat.RGB565,
		//     RenderTextureFormat.ARGB1555,
		//     RenderTextureFormat.ARGB4444
		// };
		RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E* L_0 = (RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E*)(RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E*)SZArrayNew(RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E_il2cpp_TypeInfo_var, (uint32_t)3);
		RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		// foreach (var f in formats)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0028;
	}

IL_0016:
	{
		// foreach (var f in formats)
		RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (SystemInfo.SupportsRenderTextureFormat(f)) return f;
		int32_t L_7 = V_2;
		bool L_8;
		L_8 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (SystemInfo.SupportsRenderTextureFormat(f)) return f;
		int32_t L_9 = V_2;
		return L_9;
	}

IL_0024:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0028:
	{
		// foreach (var f in formats)
		int32_t L_11 = V_1;
		RenderTextureFormatU5BU5D_t6473A73CF576D1004631F0755494CC38813DD36E* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// return RenderTextureFormat.Default;
		return (int32_t)(7);
	}
}
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::GetFrameRelative(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  FrameBlendingFilter_GetFrameRelative_m41534F912EDEF6872D5976D4152C62AA07CAA4D4 (FrameBlendingFilter_t536D4F6778F80A210C63B5FBCDE8C50AB6E3AE05 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var index = (Time.frameCount + m_FrameList.Length + offset) % m_FrameList.Length;
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_1 = __this->get_m_FrameList_2();
		NullCheck(L_1);
		int32_t L_2 = ___offset0;
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_3 = __this->get_m_FrameList_2();
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))), (int32_t)L_2))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))));
		// return m_FrameList[index];
		FrameU5BU5D_tB1014603C06135E678FC1A47B80137AFA91ABBC9* L_4 = __this->get_m_FrameList_2();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
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
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconstructionFilter__ctor_m3079740618840383340D431A8059BCF18A18EE7A (ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455 * __this, const RuntimeMethod* method)
{
	{
		// RenderTextureFormat m_VectorRTFormat = RenderTextureFormat.RGHalf;
		__this->set_m_VectorRTFormat_0(((int32_t)13));
		// RenderTextureFormat m_PackedRTFormat = RenderTextureFormat.ARGB2101010;
		__this->set_m_PackedRTFormat_1(8);
		// public ReconstructionFilter()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// CheckTextureFormatSupport();
		ReconstructionFilter_CheckTextureFormatSupport_m1825CA06223703C26B85AF769A244A466FAB9D99(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::CheckTextureFormatSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconstructionFilter_CheckTextureFormatSupport_m1825CA06223703C26B85AF769A244A466FAB9D99 (ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455 * __this, const RuntimeMethod* method)
{
	{
		// if (!SystemInfo.SupportsRenderTextureFormat(m_PackedRTFormat))
		int32_t L_0 = __this->get_m_PackedRTFormat_1();
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// m_PackedRTFormat = RenderTextureFormat.ARGB32;
		__this->set_m_PackedRTFormat_1(0);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReconstructionFilter_IsSupported_mB6E6FCF099F4EF11910C0F20CF7F9912B747F595 (ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455 * __this, const RuntimeMethod* method)
{
	{
		// return SystemInfo.supportsMotionVectors;
		bool L_0;
		L_0 = SystemInfo_get_supportsMotionVectors_mC53D082851F990A59130D6C1B462D709B85E98DC(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter::ProcessImage(UnityEngine.PostProcessing.PostProcessingContext,UnityEngine.Rendering.CommandBuffer,UnityEngine.PostProcessing.MotionBlurModel/Settings&,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconstructionFilter_ProcessImage_mDB83D5078ED2A115849DC99D52A425BA2DF8EAA5 (ReconstructionFilter_tEFDB82A636A3467B1304264CA14345140E343455 * __this, PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * ___context0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb1, Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5 * ___settings2, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source3, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___destination4, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// int maxBlurPixels = (int)(kMaxBlurRadius * context.height / 100);
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_0 = ___context0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_0, /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)((float)((float)L_1))))/(float)(100.0f))));
		// int tileSize = ((maxBlurPixels - 1) / 8 + 1) * 8;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))/(int32_t)8)), (int32_t)1)), (int32_t)8));
		// var velocityScale = settings.shutterAngle / 360f;
		Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5 * L_3 = ___settings2;
		float L_4 = L_3->get_shutterAngle_0();
		V_2 = ((float)((float)L_4/(float)(360.0f)));
		// cb.SetGlobalFloat(Uniforms._VelocityScale, velocityScale);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_5 = ___cb1;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__VelocityScale_0();
		float L_7 = V_2;
		NullCheck(L_5);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_5, L_6, L_7, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._MaxBlurRadius, maxBlurPixels);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_8 = ___cb1;
		int32_t L_9 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MaxBlurRadius_1();
		int32_t L_10 = V_0;
		NullCheck(L_8);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_8, L_9, ((float)((float)L_10)), /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._RcpMaxBlurRadius, 1f / maxBlurPixels);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_11 = ___cb1;
		int32_t L_12 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__RcpMaxBlurRadius_2();
		int32_t L_13 = V_0;
		NullCheck(L_11);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_11, L_12, ((float)((float)(1.0f)/(float)((float)((float)L_13)))), /*hidden argument*/NULL);
		// int vbuffer = Uniforms._VelocityTex;
		int32_t L_14 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__VelocityTex_3();
		V_3 = L_14;
		// cb.GetTemporaryRT(vbuffer, context.width, context.height, 0, FilterMode.Point, m_PackedRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_15 = ___cb1;
		int32_t L_16 = V_3;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_17 = ___context0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_17, /*hidden argument*/NULL);
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_19 = ___context0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_19, /*hidden argument*/NULL);
		int32_t L_21 = __this->get_m_PackedRTFormat_1();
		NullCheck(L_15);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_15, L_16, L_18, L_20, 0, 0, L_21, 1, /*hidden argument*/NULL);
		// cb.Blit((Texture)null, vbuffer, material, (int)Pass.VelocitySetup);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_22 = ___cb1;
		int32_t L_23 = V_3;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_24;
		L_24 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_23, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = ___material5;
		NullCheck(L_22);
		CommandBuffer_Blit_m57FADAE57CE78D6E45D78A212905332B70560A2B(L_22, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, L_24, L_25, 0, /*hidden argument*/NULL);
		// int tile2 = Uniforms._Tile2RT;
		int32_t L_26 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__Tile2RT_5();
		V_4 = L_26;
		// cb.GetTemporaryRT(tile2, context.width / 2, context.height / 2, 0, FilterMode.Point, m_VectorRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_27 = ___cb1;
		int32_t L_28 = V_4;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_29 = ___context0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_29, /*hidden argument*/NULL);
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_31 = ___context0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_31, /*hidden argument*/NULL);
		int32_t L_33 = __this->get_m_VectorRTFormat_0();
		NullCheck(L_27);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_27, L_28, ((int32_t)((int32_t)L_30/(int32_t)2)), ((int32_t)((int32_t)L_32/(int32_t)2)), 0, 0, L_33, 1, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, vbuffer);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_34 = ___cb1;
		int32_t L_35 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		int32_t L_36 = V_3;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_37;
		L_37 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_34, L_35, L_37, /*hidden argument*/NULL);
		// cb.Blit(vbuffer, tile2, material, (int)Pass.TileMax1);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_38 = ___cb1;
		int32_t L_39 = V_3;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_40;
		L_40 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_4;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_42;
		L_42 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_41, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = ___material5;
		NullCheck(L_38);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_38, L_40, L_42, L_43, 1, /*hidden argument*/NULL);
		// int tile4 = Uniforms._Tile4RT;
		int32_t L_44 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__Tile4RT_6();
		V_5 = L_44;
		// cb.GetTemporaryRT(tile4, context.width / 4, context.height / 4, 0, FilterMode.Point, m_VectorRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_45 = ___cb1;
		int32_t L_46 = V_5;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_47 = ___context0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_47, /*hidden argument*/NULL);
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_49 = ___context0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_49, /*hidden argument*/NULL);
		int32_t L_51 = __this->get_m_VectorRTFormat_0();
		NullCheck(L_45);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_45, L_46, ((int32_t)((int32_t)L_48/(int32_t)4)), ((int32_t)((int32_t)L_50/(int32_t)4)), 0, 0, L_51, 1, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, tile2);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_52 = ___cb1;
		int32_t L_53 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		int32_t L_54 = V_4;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_55;
		L_55 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_52, L_53, L_55, /*hidden argument*/NULL);
		// cb.Blit(tile2, tile4, material, (int)Pass.TileMax2);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_56 = ___cb1;
		int32_t L_57 = V_4;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_58;
		L_58 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_57, /*hidden argument*/NULL);
		int32_t L_59 = V_5;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_60;
		L_60 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_59, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_61 = ___material5;
		NullCheck(L_56);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_56, L_58, L_60, L_61, 2, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(tile2);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_62 = ___cb1;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_62, L_63, /*hidden argument*/NULL);
		// int tile8 = Uniforms._Tile8RT;
		int32_t L_64 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__Tile8RT_7();
		V_6 = L_64;
		// cb.GetTemporaryRT(tile8, context.width / 8, context.height / 8, 0, FilterMode.Point, m_VectorRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_65 = ___cb1;
		int32_t L_66 = V_6;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_67 = ___context0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_67, /*hidden argument*/NULL);
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_69 = ___context0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_69, /*hidden argument*/NULL);
		int32_t L_71 = __this->get_m_VectorRTFormat_0();
		NullCheck(L_65);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_65, L_66, ((int32_t)((int32_t)L_68/(int32_t)8)), ((int32_t)((int32_t)L_70/(int32_t)8)), 0, 0, L_71, 1, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, tile4);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_72 = ___cb1;
		int32_t L_73 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		int32_t L_74 = V_5;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_75;
		L_75 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_74, /*hidden argument*/NULL);
		NullCheck(L_72);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_72, L_73, L_75, /*hidden argument*/NULL);
		// cb.Blit(tile4, tile8, material, (int)Pass.TileMax2);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_76 = ___cb1;
		int32_t L_77 = V_5;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_78;
		L_78 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_77, /*hidden argument*/NULL);
		int32_t L_79 = V_6;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_80;
		L_80 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_79, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_81 = ___material5;
		NullCheck(L_76);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_76, L_78, L_80, L_81, 2, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(tile4);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_82 = ___cb1;
		int32_t L_83 = V_5;
		NullCheck(L_82);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_82, L_83, /*hidden argument*/NULL);
		// var tileMaxOffs = Vector2.one * (tileSize / 8f - 1f) * -0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84;
		L_84 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		int32_t L_85 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86;
		L_86 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_84, ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)L_85))/(float)(8.0f))), (float)(1.0f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_87;
		L_87 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_86, (-0.5f), /*hidden argument*/NULL);
		V_7 = L_87;
		// cb.SetGlobalVector(Uniforms._TileMaxOffs, tileMaxOffs);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_88 = ___cb1;
		int32_t L_89 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__TileMaxOffs_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90 = V_7;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_91;
		L_91 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_90, /*hidden argument*/NULL);
		NullCheck(L_88);
		CommandBuffer_SetGlobalVector_m26AD5F4AF0ABDD9F7DA61583606824526A58ABEF(L_88, L_89, L_91, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._TileMaxLoop, (int)(tileSize / 8f));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_92 = ___cb1;
		int32_t L_93 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__TileMaxLoop_9();
		int32_t L_94 = V_1;
		NullCheck(L_92);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_92, L_93, ((float)((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)((float)L_94))/(float)(8.0f)))))), /*hidden argument*/NULL);
		// int tile = Uniforms._TileVRT;
		int32_t L_95 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__TileVRT_10();
		V_8 = L_95;
		// cb.GetTemporaryRT(tile, context.width / tileSize, context.height / tileSize, 0, FilterMode.Point, m_VectorRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_96 = ___cb1;
		int32_t L_97 = V_8;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_98 = ___context0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_98, /*hidden argument*/NULL);
		int32_t L_100 = V_1;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_101 = ___context0;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_101, /*hidden argument*/NULL);
		int32_t L_103 = V_1;
		int32_t L_104 = __this->get_m_VectorRTFormat_0();
		NullCheck(L_96);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_96, L_97, ((int32_t)((int32_t)L_99/(int32_t)L_100)), ((int32_t)((int32_t)L_102/(int32_t)L_103)), 0, 0, L_104, 1, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, tile8);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_105 = ___cb1;
		int32_t L_106 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		int32_t L_107 = V_6;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_108;
		L_108 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_107, /*hidden argument*/NULL);
		NullCheck(L_105);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_105, L_106, L_108, /*hidden argument*/NULL);
		// cb.Blit(tile8, tile, material, (int)Pass.TileMaxV);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_109 = ___cb1;
		int32_t L_110 = V_6;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_111;
		L_111 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_110, /*hidden argument*/NULL);
		int32_t L_112 = V_8;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_113;
		L_113 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_112, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_114 = ___material5;
		NullCheck(L_109);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_109, L_111, L_113, L_114, 3, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(tile8);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_115 = ___cb1;
		int32_t L_116 = V_6;
		NullCheck(L_115);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_115, L_116, /*hidden argument*/NULL);
		// int neighborMax = Uniforms._NeighborMaxTex;
		int32_t L_117 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__NeighborMaxTex_11();
		V_9 = L_117;
		// int neighborMaxWidth = context.width / tileSize;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_118 = ___context0;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = PostProcessingContext_get_width_m47E8EC1F6D88E4DB9713328878FAD8B315E60E4F(L_118, /*hidden argument*/NULL);
		int32_t L_120 = V_1;
		V_10 = ((int32_t)((int32_t)L_119/(int32_t)L_120));
		// int neighborMaxHeight = context.height / tileSize;
		PostProcessingContext_tB1A986957C41C32ED8692892CE7BF546FEFEA511 * L_121 = ___context0;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = PostProcessingContext_get_height_m9D76FBA46F89929C331939910D5EFA5C11720CEC(L_121, /*hidden argument*/NULL);
		int32_t L_123 = V_1;
		V_11 = ((int32_t)((int32_t)L_122/(int32_t)L_123));
		// cb.GetTemporaryRT(neighborMax, neighborMaxWidth, neighborMaxHeight, 0, FilterMode.Point, m_VectorRTFormat, RenderTextureReadWrite.Linear);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_124 = ___cb1;
		int32_t L_125 = V_9;
		int32_t L_126 = V_10;
		int32_t L_127 = V_11;
		int32_t L_128 = __this->get_m_VectorRTFormat_0();
		NullCheck(L_124);
		CommandBuffer_GetTemporaryRT_m010AFBFF063C2ADC5A27A3642E55B9000EB1B7A4(L_124, L_125, L_126, L_127, 0, 0, L_128, 1, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, tile);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_129 = ___cb1;
		int32_t L_130 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		int32_t L_131 = V_8;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_132;
		L_132 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_131, /*hidden argument*/NULL);
		NullCheck(L_129);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_129, L_130, L_132, /*hidden argument*/NULL);
		// cb.Blit(tile, neighborMax, material, (int)Pass.NeighborMax);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_133 = ___cb1;
		int32_t L_134 = V_8;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_135;
		L_135 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_134, /*hidden argument*/NULL);
		int32_t L_136 = V_9;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_137;
		L_137 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(L_136, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_138 = ___material5;
		NullCheck(L_133);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_133, L_135, L_137, L_138, 4, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(tile);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_139 = ___cb1;
		int32_t L_140 = V_8;
		NullCheck(L_139);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_139, L_140, /*hidden argument*/NULL);
		// cb.SetGlobalFloat(Uniforms._LoopCount, Mathf.Clamp(settings.sampleCount / 2, 1, 64));
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_141 = ___cb1;
		int32_t L_142 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__LoopCount_12();
		Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5 * L_143 = ___settings2;
		int32_t L_144 = L_143->get_sampleCount_1();
		int32_t L_145;
		L_145 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)((int32_t)L_144/(int32_t)2)), 1, ((int32_t)64), /*hidden argument*/NULL);
		NullCheck(L_141);
		CommandBuffer_SetGlobalFloat_mE7B8587FABBF52E7DC1981E9676BBBD4D1E838BF(L_141, L_142, ((float)((float)L_145)), /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, source);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_146 = ___cb1;
		int32_t L_147 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_148 = ___source3;
		NullCheck(L_146);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_146, L_147, L_148, /*hidden argument*/NULL);
		// cb.Blit(source, destination, material, (int)Pass.Reconstruction);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_149 = ___cb1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_150 = ___source3;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_151 = ___destination4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_152 = ___material5;
		NullCheck(L_149);
		CommandBuffer_Blit_m50AB7CE0D68B2B2DED83FFE9331504382FA2AB9A(L_149, L_150, L_151, L_152, 5, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(vbuffer);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_153 = ___cb1;
		int32_t L_154 = V_3;
		NullCheck(L_153);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_153, L_154, /*hidden argument*/NULL);
		// cb.ReleaseTemporaryRT(neighborMax);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_155 = ___cb1;
		int32_t L_156 = V_9;
		NullCheck(L_155);
		CommandBuffer_ReleaseTemporaryRT_mE4A4A8DE6B315956BEAB66915FF720F1C61BCDC5(L_155, L_156, /*hidden argument*/NULL);
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
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m3EE474D5E17F24D24155C55C631FB6D8FFFA6DDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E2BF2CBC6759AB5393720109E97F6283881047F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8F51CAB22E1669CF2F07CE05CA2FDE7ABC1428);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C35A9E1D63BDFE31357BFFC1A07B829C42B1CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E83E1ADF2EB17E393A95B8B12CB0F5EBFBEF02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C014502CF12F01EDD6067705C836D07CC34E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB1757516AA276FCFC0ECDF453B81D676A6D007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A636D3474E30D21279F6316BB7FC73A911D7056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE6B345EE118A688CADF5446F3418831F408C73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ABD4FFEDAE015BEB98F08C6F72586CCBF47BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80CD72054E38949B8214054B414EFCC7B81F4ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82CC48F8FF2BF0BD5A479EE5B8AA3D122619F884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC8A664CEEC38294CB2CC344E1CC69CCE793597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90E32CA8EA0B33AF3444AFE2F6F95A408894E0C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral967A14D121BCDCE22BBAA9460E1984A8C2BA54D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99332D0DDE495E198DAFA6F42593F9CF853BEFB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA644CFCDC761C02EE7CD0F858CC48B407494EE37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA740F42C17C48D9FD7DD896C9566DF29AC4B00D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FF7CAF7281B443F7CFAA8E50B3449BC1C101CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9B3BBCDEAFAC8751CDC467F112622A7B4D9736);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCCDFD0FD87AF785EA1C4D01856BD41EEEBD803);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD398317BD410E0D8E961C79BEFCA413D1319061E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFA3C32D986FA726AB906F6A0F99A10C36F8040B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77469616D4D7BD322020C5FFC7F7A69CB5FA8F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF97F9F56A4C265AADFF5D9DDC3853E65DA6C256);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _VelocityScale     = Shader.PropertyToID("_VelocityScale");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralA740F42C17C48D9FD7DD896C9566DF29AC4B00D5, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__VelocityScale_0(L_0);
		// internal static readonly int _MaxBlurRadius     = Shader.PropertyToID("_MaxBlurRadius");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3AB1757516AA276FCFC0ECDF453B81D676A6D007, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__MaxBlurRadius_1(L_1);
		// internal static readonly int _RcpMaxBlurRadius  = Shader.PropertyToID("_RcpMaxBlurRadius");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC0FF7CAF7281B443F7CFAA8E50B3449BC1C101CC, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__RcpMaxBlurRadius_2(L_2);
		// internal static readonly int _VelocityTex       = Shader.PropertyToID("_VelocityTex");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralEF97F9F56A4C265AADFF5D9DDC3853E65DA6C256, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__VelocityTex_3(L_3);
		// internal static readonly int _MainTex           = Shader.PropertyToID("_MainTex");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__MainTex_4(L_4);
		// internal static readonly int _Tile2RT           = Shader.PropertyToID("_Tile2RT");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral99332D0DDE495E198DAFA6F42593F9CF853BEFB8, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__Tile2RT_5(L_5);
		// internal static readonly int _Tile4RT           = Shader.PropertyToID("_Tile4RT");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral82CC48F8FF2BF0BD5A479EE5B8AA3D122619F884, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__Tile4RT_6(L_6);
		// internal static readonly int _Tile8RT           = Shader.PropertyToID("_Tile8RT");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1E8F51CAB22E1669CF2F07CE05CA2FDE7ABC1428, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__Tile8RT_7(L_7);
		// internal static readonly int _TileMaxOffs       = Shader.PropertyToID("_TileMaxOffs");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE77469616D4D7BD322020C5FFC7F7A69CB5FA8F5, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__TileMaxOffs_8(L_8);
		// internal static readonly int _TileMaxLoop       = Shader.PropertyToID("_TileMaxLoop");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral90E32CA8EA0B33AF3444AFE2F6F95A408894E0C0, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__TileMaxLoop_9(L_9);
		// internal static readonly int _TileVRT           = Shader.PropertyToID("_TileVRT");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5EE6B345EE118A688CADF5446F3418831F408C73, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__TileVRT_10(L_10);
		// internal static readonly int _NeighborMaxTex    = Shader.PropertyToID("_NeighborMaxTex");
		int32_t L_11;
		L_11 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral30E83E1ADF2EB17E393A95B8B12CB0F5EBFBEF02, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__NeighborMaxTex_11(L_11);
		// internal static readonly int _LoopCount         = Shader.PropertyToID("_LoopCount");
		int32_t L_12;
		L_12 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral967A14D121BCDCE22BBAA9460E1984A8C2BA54D8, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__LoopCount_12(L_12);
		// internal static readonly int _TempRT            = Shader.PropertyToID("_TempRT");
		int32_t L_13;
		L_13 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5EA2935DAC07F13B25A53A9955FD2087541FFCE6, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__TempRT_13(L_13);
		// internal static readonly int _History1LumaTex   = Shader.PropertyToID("_History1LumaTex");
		int32_t L_14;
		L_14 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral38C014502CF12F01EDD6067705C836D07CC34E6E, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History1LumaTex_14(L_14);
		// internal static readonly int _History2LumaTex   = Shader.PropertyToID("_History2LumaTex");
		int32_t L_15;
		L_15 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral6ABD4FFEDAE015BEB98F08C6F72586CCBF47BFF1, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History2LumaTex_15(L_15);
		// internal static readonly int _History3LumaTex   = Shader.PropertyToID("_History3LumaTex");
		int32_t L_16;
		L_16 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCB9B3BBCDEAFAC8751CDC467F112622A7B4D9736, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History3LumaTex_16(L_16);
		// internal static readonly int _History4LumaTex   = Shader.PropertyToID("_History4LumaTex");
		int32_t L_17;
		L_17 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral2C35A9E1D63BDFE31357BFFC1A07B829C42B1CD0, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History4LumaTex_17(L_17);
		// internal static readonly int _History1ChromaTex = Shader.PropertyToID("_History1ChromaTex");
		int32_t L_18;
		L_18 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCBCCDFD0FD87AF785EA1C4D01856BD41EEEBD803, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History1ChromaTex_18(L_18);
		// internal static readonly int _History2ChromaTex = Shader.PropertyToID("_History2ChromaTex");
		int32_t L_19;
		L_19 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD398317BD410E0D8E961C79BEFCA413D1319061E, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History2ChromaTex_19(L_19);
		// internal static readonly int _History3ChromaTex = Shader.PropertyToID("_History3ChromaTex");
		int32_t L_20;
		L_20 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral8DC8A664CEEC38294CB2CC344E1CC69CCE793597, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History3ChromaTex_20(L_20);
		// internal static readonly int _History4ChromaTex = Shader.PropertyToID("_History4ChromaTex");
		int32_t L_21;
		L_21 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralA644CFCDC761C02EE7CD0F858CC48B407494EE37, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History4ChromaTex_21(L_21);
		// internal static readonly int _History1Weight    = Shader.PropertyToID("_History1Weight");
		int32_t L_22;
		L_22 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral80CD72054E38949B8214054B414EFCC7B81F4ABA, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History1Weight_22(L_22);
		// internal static readonly int _History2Weight    = Shader.PropertyToID("_History2Weight");
		int32_t L_23;
		L_23 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5A636D3474E30D21279F6316BB7FC73A911D7056, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History2Weight_23(L_23);
		// internal static readonly int _History3Weight    = Shader.PropertyToID("_History3Weight");
		int32_t L_24;
		L_24 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDFA3C32D986FA726AB906F6A0F99A10C36F8040B, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History3Weight_24(L_24);
		// internal static readonly int _History4Weight    = Shader.PropertyToID("_History4Weight");
		int32_t L_25;
		L_25 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1E2BF2CBC6759AB5393720109E97F6283881047F, /*hidden argument*/NULL);
		((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->set__History4Weight_25(L_25);
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
// UnityEngine.PostProcessing.MotionBlurModel/Settings UnityEngine.PostProcessing.MotionBlurModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5  Settings_get_defaultSettings_mD3A95AF0C716D2864CE8EB106FE41F08289841C1 (const RuntimeMethod* method)
{
	Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     shutterAngle = 270f,
		//     sampleCount = 10,
		//     frameBlending = 0f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5 ));
		(&V_0)->set_shutterAngle_0((270.0f));
		(&V_0)->set_sampleCount_1(((int32_t)10));
		(&V_0)->set_frameBlending_2((0.0f));
		Settings_t2C68EAB0B4D23A0BD0A5C81AA78C461D008D6BA5  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PostProcessing.ScreenSpaceReflectionComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m0392FF620FE602B3A304DAC3C489D30D16F81323 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABC47E18BBBA62023AFCDC65FB373540EC6BF78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1177AFB3FEC171E4C3D66CFA8A075871FE9E648D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168BE02F55BEC62F2CBB676FC5148C9030374A2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3B6D26C9FEAFD71C5EC58AA40937539812DDB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD5B1370CF2F8F43EC71C1073B2BF182AA03512);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D8F3AB46F1B7810843A0661D45C8D513AACCEA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4120C63DF2CB5D10AF085F7BA79E9A5354CF4066);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4806A9FC9543F6C5064C7C074AB56C935831001D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral517E163132B54A00BCCA2092E103F1E35498D10A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral580FF00AF39241FCC52DE178197DF1D0E156D501);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5930AFD1ACD024B267F90D4A56FAA0AB673A7AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral645AE095F7A4B844B8CED6F24B9C81ECE9092B80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B9E8C3DC871457E7A11CA58A18EA660E8C9336);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9D82938DF6CE81F4157543EF9CCB9BBBDA048D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71917F24ABD74D7747692EA68997AE987848F27E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7232BE36BC5BA84B22E04DF99D31E36D781390EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B6A2E24AE83D812DC1B1BF55242CAD0B69628F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8213E4C3B6E9445B00E7EB6FF56FAFEC78C820CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8851B3E0459D17FA369D489800766E9D5AC4718B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92215799B6EAE69660277473BDAC8B35E5597CC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A40B4185AFBAEAF3AD2EFA2E287528701084237);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB4946937FF50DEDE7552C1FE6C1C3B42EFF4CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1686B1D4F1DABA2E11DB6A18D2C9B0888CFCF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1931BA76AAE15ECD5D70E47A3C9AE9DD9216FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB724369565C1DE3B2FBE4F47E70CDE185992B40B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A4C2DB3F4A9C9AE986D605D4A96E7BBAB4F217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC73355093113F68938856DACBF596E2617A941D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3895F9D6464D185DA12AFB889C2CF2E53106C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3BD05C2AFC91245A5AE228DDB7ACA7D7C3A60B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD6E22139663C73C0C6884324B2DC3558437849);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA8E122E21A6B494C7B9655F3E14C5BA9168D52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF47CBC696D1A835CC7CD16A07DC80D05D07E5CB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BBF7E58261647FB88A64625BD31BB282C98067);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _RayStepSize                = Shader.PropertyToID("_RayStepSize");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral8213E4C3B6E9445B00E7EB6FF56FAFEC78C820CC, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__RayStepSize_0(L_0);
		// internal static readonly int _AdditiveReflection         = Shader.PropertyToID("_AdditiveReflection");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB724369565C1DE3B2FBE4F47E70CDE185992B40B, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__AdditiveReflection_1(L_1);
		// internal static readonly int _BilateralUpsampling        = Shader.PropertyToID("_BilateralUpsampling");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0ABC47E18BBBA62023AFCDC65FB373540EC6BF78, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__BilateralUpsampling_2(L_2);
		// internal static readonly int _TreatBackfaceHitAsMiss     = Shader.PropertyToID("_TreatBackfaceHitAsMiss");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE3895F9D6464D185DA12AFB889C2CF2E53106C53, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__TreatBackfaceHitAsMiss_3(L_3);
		// internal static readonly int _AllowBackwardsRays         = Shader.PropertyToID("_AllowBackwardsRays");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4806A9FC9543F6C5064C7C074AB56C935831001D, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__AllowBackwardsRays_4(L_4);
		// internal static readonly int _TraceBehindObjects         = Shader.PropertyToID("_TraceBehindObjects");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral645AE095F7A4B844B8CED6F24B9C81ECE9092B80, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__TraceBehindObjects_5(L_5);
		// internal static readonly int _MaxSteps                   = Shader.PropertyToID("_MaxSteps");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9A40B4185AFBAEAF3AD2EFA2E287528701084237, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__MaxSteps_6(L_6);
		// internal static readonly int _FullResolutionFiltering    = Shader.PropertyToID("_FullResolutionFiltering");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1177AFB3FEC171E4C3D66CFA8A075871FE9E648D, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FullResolutionFiltering_7(L_7);
		// internal static readonly int _HalfResolution             = Shader.PropertyToID("_HalfResolution");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF4BBF7E58261647FB88A64625BD31BB282C98067, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__HalfResolution_8(L_8);
		// internal static readonly int _HighlightSuppression       = Shader.PropertyToID("_HighlightSuppression");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral2D8F3AB46F1B7810843A0661D45C8D513AACCEA5, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__HighlightSuppression_9(L_9);
		// internal static readonly int _PixelsPerMeterAtOneMeter   = Shader.PropertyToID("_PixelsPerMeterAtOneMeter");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral92215799B6EAE69660277473BDAC8B35E5597CC3, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__PixelsPerMeterAtOneMeter_10(L_10);
		// internal static readonly int _ScreenEdgeFading           = Shader.PropertyToID("_ScreenEdgeFading");
		int32_t L_11;
		L_11 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralDC73355093113F68938856DACBF596E2617A941D, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ScreenEdgeFading_11(L_11);
		// internal static readonly int _ReflectionBlur             = Shader.PropertyToID("_ReflectionBlur");
		int32_t L_12;
		L_12 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral2CD5B1370CF2F8F43EC71C1073B2BF182AA03512, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ReflectionBlur_12(L_12);
		// internal static readonly int _MaxRayTraceDistance        = Shader.PropertyToID("_MaxRayTraceDistance");
		int32_t L_13;
		L_13 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral6E9D82938DF6CE81F4157543EF9CCB9BBBDA048D, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__MaxRayTraceDistance_13(L_13);
		// internal static readonly int _FadeDistance               = Shader.PropertyToID("_FadeDistance");
		int32_t L_14;
		L_14 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB1686B1D4F1DABA2E11DB6A18D2C9B0888CFCF91, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FadeDistance_14(L_14);
		// internal static readonly int _LayerThickness             = Shader.PropertyToID("_LayerThickness");
		int32_t L_15;
		L_15 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF47CBC696D1A835CC7CD16A07DC80D05D07E5CB8, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__LayerThickness_15(L_15);
		// internal static readonly int _SSRMultiplier              = Shader.PropertyToID("_SSRMultiplier");
		int32_t L_16;
		L_16 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral517E163132B54A00BCCA2092E103F1E35498D10A, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__SSRMultiplier_16(L_16);
		// internal static readonly int _FresnelFade                = Shader.PropertyToID("_FresnelFade");
		int32_t L_17;
		L_17 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral71917F24ABD74D7747692EA68997AE987848F27E, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FresnelFade_17(L_17);
		// internal static readonly int _FresnelFadePower           = Shader.PropertyToID("_FresnelFadePower");
		int32_t L_18;
		L_18 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD6A4C2DB3F4A9C9AE986D605D4A96E7BBAB4F217, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FresnelFadePower_18(L_18);
		// internal static readonly int _ReflectionBufferSize       = Shader.PropertyToID("_ReflectionBufferSize");
		int32_t L_19;
		L_19 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5930AFD1ACD024B267F90D4A56FAA0AB673A7AD6, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ReflectionBufferSize_19(L_19);
		// internal static readonly int _ScreenSize                 = Shader.PropertyToID("_ScreenSize");
		int32_t L_20;
		L_20 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1D3B6D26C9FEAFD71C5EC58AA40937539812DDB4, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ScreenSize_20(L_20);
		// internal static readonly int _InvScreenSize              = Shader.PropertyToID("_InvScreenSize");
		int32_t L_21;
		L_21 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralEBD6E22139663C73C0C6884324B2DC3558437849, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__InvScreenSize_21(L_21);
		// internal static readonly int _ProjInfo                   = Shader.PropertyToID("_ProjInfo");
		int32_t L_22;
		L_22 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0F78241FF6E78ADA6D1FB6DAA00F25817203ED13, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ProjInfo_22(L_22);
		// internal static readonly int _CameraClipInfo             = Shader.PropertyToID("_CameraClipInfo");
		int32_t L_23;
		L_23 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralADB4946937FF50DEDE7552C1FE6C1C3B42EFF4CC, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__CameraClipInfo_23(L_23);
		// internal static readonly int _ProjectToPixelMatrix       = Shader.PropertyToID("_ProjectToPixelMatrix");
		int32_t L_24;
		L_24 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral73B6A2E24AE83D812DC1B1BF55242CAD0B69628F, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__ProjectToPixelMatrix_24(L_24);
		// internal static readonly int _WorldToCameraMatrix        = Shader.PropertyToID("_WorldToCameraMatrix");
		int32_t L_25;
		L_25 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral65B9E8C3DC871457E7A11CA58A18EA660E8C9336, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__WorldToCameraMatrix_25(L_25);
		// internal static readonly int _CameraToWorldMatrix        = Shader.PropertyToID("_CameraToWorldMatrix");
		int32_t L_26;
		L_26 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4120C63DF2CB5D10AF085F7BA79E9A5354CF4066, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__CameraToWorldMatrix_26(L_26);
		// internal static readonly int _Axis                       = Shader.PropertyToID("_Axis");
		int32_t L_27;
		L_27 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral43996BC36588CCD5051D9CC5DA131DFBF9706B48, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__Axis_27(L_27);
		// internal static readonly int _CurrentMipLevel            = Shader.PropertyToID("_CurrentMipLevel");
		int32_t L_28;
		L_28 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral168BE02F55BEC62F2CBB676FC5148C9030374A2A, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__CurrentMipLevel_28(L_28);
		// internal static readonly int _NormalAndRoughnessTexture  = Shader.PropertyToID("_NormalAndRoughnessTexture");
		int32_t L_29;
		L_29 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral8851B3E0459D17FA369D489800766E9D5AC4718B, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__NormalAndRoughnessTexture_29(L_29);
		// internal static readonly int _HitPointTexture            = Shader.PropertyToID("_HitPointTexture");
		int32_t L_30;
		L_30 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral580FF00AF39241FCC52DE178197DF1D0E156D501, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__HitPointTexture_30(L_30);
		// internal static readonly int _BlurTexture                = Shader.PropertyToID("_BlurTexture");
		int32_t L_31;
		L_31 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralECA8E122E21A6B494C7B9655F3E14C5BA9168D52, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__BlurTexture_31(L_31);
		// internal static readonly int _FilteredReflections        = Shader.PropertyToID("_FilteredReflections");
		int32_t L_32;
		L_32 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE3BD05C2AFC91245A5AE228DDB7ACA7D7C3A60B3, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FilteredReflections_32(L_32);
		// internal static readonly int _FinalReflectionTexture     = Shader.PropertyToID("_FinalReflectionTexture");
		int32_t L_33;
		L_33 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral7232BE36BC5BA84B22E04DF99D31E36D781390EF, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__FinalReflectionTexture_33(L_33);
		// internal static readonly int _TempTexture                = Shader.PropertyToID("_TempTexture");
		int32_t L_34;
		L_34 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB1931BA76AAE15ECD5D70E47A3C9AE9DD9216FBF, /*hidden argument*/NULL);
		((Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_tFFB828DB8F7640222C29BF68EBF77487348DE000_il2cpp_TypeInfo_var))->set__TempTexture_34(L_34);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_back(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_cleanup(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_back(const ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled, ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_cleanup(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshaled_com& marshaled)
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


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_pinvoke(const Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07& unmarshaled, Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke(unmarshaled.get_reflection_0(), marshaled.___reflection_0);
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_pinvoke_back(const Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_pinvoke& marshaled, Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07& unmarshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  unmarshaled_reflection_temp_0;
	memset((&unmarshaled_reflection_temp_0), 0, sizeof(unmarshaled_reflection_temp_0));
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_back(marshaled.___reflection_0, unmarshaled_reflection_temp_0);
	unmarshaled.set_reflection_0(unmarshaled_reflection_temp_0);
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  unmarshaled_intensity_temp_1;
	memset((&unmarshaled_intensity_temp_1), 0, sizeof(unmarshaled_intensity_temp_1));
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  unmarshaled_screenEdgeMask_temp_2;
	memset((&unmarshaled_screenEdgeMask_temp_2), 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_pinvoke_cleanup(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_pinvoke_cleanup(marshaled.___reflection_0);
}


// Conversion methods for marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_com(const Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07& unmarshaled, Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_com& marshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com(unmarshaled.get_reflection_0(), marshaled.___reflection_0);
	marshaled.___intensity_1 = unmarshaled.get_intensity_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_com_back(const Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_com& marshaled, Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07& unmarshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  unmarshaled_reflection_temp_0;
	memset((&unmarshaled_reflection_temp_0), 0, sizeof(unmarshaled_reflection_temp_0));
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_back(marshaled.___reflection_0, unmarshaled_reflection_temp_0);
	unmarshaled.set_reflection_0(unmarshaled_reflection_temp_0);
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  unmarshaled_intensity_temp_1;
	memset((&unmarshaled_intensity_temp_1), 0, sizeof(unmarshaled_intensity_temp_1));
	unmarshaled_intensity_temp_1 = marshaled.___intensity_1;
	unmarshaled.set_intensity_1(unmarshaled_intensity_temp_1);
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  unmarshaled_screenEdgeMask_temp_2;
	memset((&unmarshaled_screenEdgeMask_temp_2), 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
IL2CPP_EXTERN_C void Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshal_com_cleanup(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07_marshaled_com& marshaled)
{
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081_marshal_com_cleanup(marshaled.___reflection_0);
}
// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07  Settings_get_defaultSettings_m13216005F7A1ACB0998EBED272CA93D400CB3BCC (const RuntimeMethod* method)
{
	Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// return new Settings
		// {
		//     reflection = new ReflectionSettings
		//     {
		//         blendType = SSRReflectionBlendType.PhysicallyBased,
		//         reflectionQuality = SSRResolution.Low,
		//         maxDistance = 100f,
		//         iterationCount = 256,
		//         stepSize = 3,
		//         widthModifier = 0.5f,
		//         reflectionBlur = 1f,
		//         reflectBackfaces = false
		//     },
		// 
		//     intensity = new IntensitySettings
		//     {
		//         reflectionMultiplier = 1f,
		//         fadeDistance = 100f,
		// 
		//         fresnelFade = 1f,
		//         fresnelFadePower = 1f,
		//     },
		// 
		//     screenEdgeMask = new ScreenEdgeMask
		//     {
		//         intensity = 0.03f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07 ));
		il2cpp_codegen_initobj((&V_1), sizeof(ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081 ));
		(&V_1)->set_blendType_0(0);
		(&V_1)->set_reflectionQuality_1(2);
		(&V_1)->set_maxDistance_2((100.0f));
		(&V_1)->set_iterationCount_3(((int32_t)256));
		(&V_1)->set_stepSize_4(3);
		(&V_1)->set_widthModifier_5((0.5f));
		(&V_1)->set_reflectionBlur_6((1.0f));
		(&V_1)->set_reflectBackfaces_7((bool)0);
		ReflectionSettings_t0A148B332D1D8BE746E51B7F655FA160AC650081  L_0 = V_1;
		(&V_0)->set_reflection_0(L_0);
		il2cpp_codegen_initobj((&V_2), sizeof(IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C ));
		(&V_2)->set_reflectionMultiplier_0((1.0f));
		(&V_2)->set_fadeDistance_1((100.0f));
		(&V_2)->set_fresnelFade_2((1.0f));
		(&V_2)->set_fresnelFadePower_3((1.0f));
		IntensitySettings_tCE0C582EE4750277888109117C80D5828AE7DD9C  L_1 = V_2;
		(&V_0)->set_intensity_1(L_1);
		il2cpp_codegen_initobj((&V_3), sizeof(ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A ));
		(&V_3)->set_intensity_0((0.0299999993f));
		ScreenEdgeMask_tDE56AF71320A3CDEA70FE673B1B6535CABE2340A  L_2 = V_3;
		(&V_0)->set_screenEdgeMask_2(L_2);
		Settings_tA0544B3492B554AA56DEB1B8A2874E4D85278D07  L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.PostProcessing.TaaComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m5F2E7221A556E2585D1E296269A93552CA10ABBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C435E39DBD66EBDFEDEFCF4E7E22DEEC0DA7197);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A81BBC1B10C50354AAFBEACD5309BF11A88AD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875A4C409EA727D1AAD538D85FE6E95841B1F090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC04965E7E214172621D32A1D48FB54A8D4F5E42B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static int _Jitter               = Shader.PropertyToID("_Jitter");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3C435E39DBD66EBDFEDEFCF4E7E22DEEC0DA7197, /*hidden argument*/NULL);
		((Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var))->set__Jitter_0(L_0);
		// internal static int _SharpenParameters    = Shader.PropertyToID("_SharpenParameters");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral72A81BBC1B10C50354AAFBEACD5309BF11A88AD5, /*hidden argument*/NULL);
		((Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var))->set__SharpenParameters_1(L_1);
		// internal static int _FinalBlendParameters = Shader.PropertyToID("_FinalBlendParameters");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral875A4C409EA727D1AAD538D85FE6E95841B1F090, /*hidden argument*/NULL);
		((Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var))->set__FinalBlendParameters_2(L_2);
		// internal static int _HistoryTex           = Shader.PropertyToID("_HistoryTex");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC04965E7E214172621D32A1D48FB54A8D4F5E42B, /*hidden argument*/NULL);
		((Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var))->set__HistoryTex_3(L_3);
		// internal static int _MainTex              = Shader.PropertyToID("_MainTex");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t1B0ACF316733740F2F96E3434077CE5D6FBE2AC8_il2cpp_TypeInfo_var))->set__MainTex_4(L_4);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mABBBB0720CEC9ADB6560700A2EE640194D040EF8 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m38A45D4D87F60621AB4E4B6A68DDDE146B332DDD (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m5FD705274B59AF179AE22FF30A248A4A24B4BECA (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m8EB1088C4795F088A729524E99334E63ED48E6B7 (MessageDelegate_tDCF734AA37209CBABC24AB82639DC96812A92CD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m27BFC33CA6935FF169ED735C704019CD4DF0E8C1 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_m001CCB602D2B55DD220BF06E2AA4828575197FFE (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
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
						GenericInterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m6F3C7C037B912D8BD1CB2FAB6CF0E8D8CB3825BA (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, MessageHandler_t61D3A022CD7E59124898915FB6A1EB56ACBF19B7 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE67B6A56FC2D25FC6BAE72DF3DDA9A01260DF3D2 (MessageHandlerDelegate_tC9B2C089EAB4A237AFE9F84E05D5D7B196643F28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.PostProcessing.UserLutComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_mE574B2AF3734357100C3A22818DE21E309D427F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _UserLut        = Shader.PropertyToID("_UserLut");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04, /*hidden argument*/NULL);
		((Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_il2cpp_TypeInfo_var))->set__UserLut_0(L_0);
		// internal static readonly int _UserLut_Params = Shader.PropertyToID("_UserLut_Params");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B, /*hidden argument*/NULL);
		((Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t5394F715BCA8C0C8811FB8EDB94DE2B1FA3BE699_il2cpp_TypeInfo_var))->set__UserLut_Params_1(L_1);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_pinvoke(const Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D& unmarshaled, Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_pinvoke_back(const Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_pinvoke& marshaled, Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D& unmarshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_pinvoke_cleanup(Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_com(const Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D& unmarshaled, Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_com& marshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_com_back(const Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_com& marshaled, Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D& unmarshaled)
{
	Exception_t* ___lut_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lut' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lut_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.UserLutModel/Settings
IL2CPP_EXTERN_C void Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshal_com_cleanup(Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.UserLutModel/Settings UnityEngine.PostProcessing.UserLutModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D  Settings_get_defaultSettings_m49DC2107075E1ECC4561EC906DBF69B5FA87980A (const RuntimeMethod* method)
{
	Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     lut = null,
		//     contribution = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D ));
		(&V_0)->set_lut_0((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
		(&V_0)->set_contribution_1((1.0f));
		Settings_t9F04F151B5EB51565F381202DEC263918D5DD01D  L_0 = V_0;
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
// System.Void UnityEngine.PostProcessing.VignetteComponent/Uniforms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uniforms__cctor_m240E30AFE4A52ECDF8B50B89C787F6AEE08BF923 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F80F1A560C9094CDF248E6F2A7711192360BA6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AB39677552FCD6558823F660419D8B2162C026D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7708E3CFCAC428CAD92AA2C5021283430C7A9820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DA0A315BE47865976FE7CF074D6F4A38130F4DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC27247C19E767FA5A71651454878BEB32E3E617F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly int _Vignette_Color    = Shader.PropertyToID("_Vignette_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral2F80F1A560C9094CDF248E6F2A7711192360BA6D, /*hidden argument*/NULL);
		((Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var))->set__Vignette_Color_0(L_0);
		// internal static readonly int _Vignette_Center   = Shader.PropertyToID("_Vignette_Center");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral5AB39677552FCD6558823F660419D8B2162C026D, /*hidden argument*/NULL);
		((Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var))->set__Vignette_Center_1(L_1);
		// internal static readonly int _Vignette_Settings = Shader.PropertyToID("_Vignette_Settings");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC27247C19E767FA5A71651454878BEB32E3E617F, /*hidden argument*/NULL);
		((Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var))->set__Vignette_Settings_2(L_2);
		// internal static readonly int _Vignette_Mask     = Shader.PropertyToID("_Vignette_Mask");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral7708E3CFCAC428CAD92AA2C5021283430C7A9820, /*hidden argument*/NULL);
		((Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var))->set__Vignette_Mask_3(L_3);
		// internal static readonly int _Vignette_Opacity  = Shader.PropertyToID("_Vignette_Opacity");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral9DA0A315BE47865976FE7CF074D6F4A38130F4DA, /*hidden argument*/NULL);
		((Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t3DB238EAE76286627075811FE072DDD6E57B5D5A_il2cpp_TypeInfo_var))->set__Vignette_Opacity_4(L_4);
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_pinvoke(const Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40& unmarshaled, Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_pinvoke_back(const Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_pinvoke& marshaled, Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40& unmarshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_pinvoke_cleanup(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_com(const Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40& unmarshaled, Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_com& marshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception, NULL);
}
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_com_back(const Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_com& marshaled, Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40& unmarshaled)
{
	Exception_t* ___mask_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mask' of type 'Settings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mask_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.VignetteModel/Settings
IL2CPP_EXTERN_C void Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshal_com_cleanup(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40_marshaled_com& marshaled)
{
}
// UnityEngine.PostProcessing.VignetteModel/Settings UnityEngine.PostProcessing.VignetteModel/Settings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40  Settings_get_defaultSettings_mA0F09C1FA146892325FF02BE1859A7E117BDA9C7 (const RuntimeMethod* method)
{
	Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Settings
		// {
		//     mode = Mode.Classic,
		//     color = new Color(0f, 0f, 0f, 1f),
		//     center = new Vector2(0.5f, 0.5f),
		//     intensity = 0.45f,
		//     smoothness = 0.2f,
		//     roundness = 1f,
		//     mask = null,
		//     opacity = 1f,
		//     rounded = false
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40 ));
		(&V_0)->set_mode_0(0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		(&V_0)->set_center_2(L_1);
		(&V_0)->set_intensity_3((0.449999988f));
		(&V_0)->set_smoothness_4((0.200000003f));
		(&V_0)->set_roundness_5((1.0f));
		(&V_0)->set_mask_6((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		(&V_0)->set_opacity_7((1.0f));
		(&V_0)->set_rounded_8((bool)0);
		Settings_t088D9510C307A8D81A35D1BC9E310BDD52F36F40  L_2 = V_0;
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
// Conversion methods for marshalling of: UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_pinvoke(const Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629& unmarshaled, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_pinvoke& marshaled)
{
	Exception_t* ___lumaTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lumaTexture' of type 'Frame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lumaTexture_0Exception, NULL);
}
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_pinvoke_back(const Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_pinvoke& marshaled, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629& unmarshaled)
{
	Exception_t* ___lumaTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lumaTexture' of type 'Frame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lumaTexture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_pinvoke_cleanup(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_com(const Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629& unmarshaled, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_com& marshaled)
{
	Exception_t* ___lumaTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lumaTexture' of type 'Frame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lumaTexture_0Exception, NULL);
}
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_com_back(const Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_com& marshaled, Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629& unmarshaled)
{
	Exception_t* ___lumaTexture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'lumaTexture' of type 'Frame': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___lumaTexture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
IL2CPP_EXTERN_C void Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshal_com_cleanup(Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629_marshaled_com& marshaled)
{
}
// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::CalculateWeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077 (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, float ___strength0, float ___currentTime1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (Mathf.Approximately(m_Time, 0f))
		float L_0 = __this->get_m_Time_2();
		bool L_1;
		L_1 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_0, (0.0f), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0018:
	{
		// var coeff = Mathf.Lerp(80f, 16f, strength);
		float L_2 = ___strength0;
		float L_3;
		L_3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((80.0f), (16.0f), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return Mathf.Exp((m_Time - currentTime) * coeff);
		float L_4 = __this->get_m_Time_2();
		float L_5 = ___currentTime1;
		float L_6 = V_0;
		float L_7;
		L_7 = expf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)L_6)));
		return L_7;
	}
}
IL2CPP_EXTERN_C  float Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077_AdjustorThunk (RuntimeObject * __this, float ___strength0, float ___currentTime1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * _thisAdjusted = reinterpret_cast<Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *>(__this + _offset);
	float _returnValue;
	_returnValue = Frame_CalculateWeight_mB09982C3C7BCBBB4235ADE144EF1BB1AB31DE077(_thisAdjusted, ___strength0, ___currentTime1, method);
	return _returnValue;
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74 (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lumaTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_lumaTexture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(lumaTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = __this->get_lumaTexture_0();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (chromaTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_chromaTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(chromaTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_chromaTexture_1();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// lumaTexture = null;
		__this->set_lumaTexture_0((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// chromaTexture = null;
		__this->set_chromaTexture_1((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * _thisAdjusted = reinterpret_cast<Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *>(__this + _offset);
	Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74(_thisAdjusted, method);
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::MakeRecord(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_MakeRecord_m76C2721EA40FE50536656F9CDCEB46FA9ED9FEAE (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Release();
		Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)__this, /*hidden argument*/NULL);
		// lumaTexture = RenderTexture.GetTemporary(width, height, 0, RenderTextureFormat.R8, RenderTextureReadWrite.Linear);
		int32_t L_0 = ___width2;
		int32_t L_1 = ___height3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2;
		L_2 = RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1(L_0, L_1, 0, ((int32_t)16), 1, /*hidden argument*/NULL);
		__this->set_lumaTexture_0(L_2);
		// chromaTexture = RenderTexture.GetTemporary(width, height, 0, RenderTextureFormat.R8, RenderTextureReadWrite.Linear);
		int32_t L_3 = ___width2;
		int32_t L_4 = ___height3;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_GetTemporary_mFDF23E91A85221C7EF61B0A5D46AAC858816E5F1(L_3, L_4, 0, ((int32_t)16), 1, /*hidden argument*/NULL);
		__this->set_chromaTexture_1(L_5);
		// lumaTexture.filterMode = FilterMode.Point;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = __this->get_lumaTexture_0();
		NullCheck(L_6);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_6, 0, /*hidden argument*/NULL);
		// chromaTexture.filterMode = FilterMode.Point;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = __this->get_chromaTexture_1();
		NullCheck(L_7);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_7, 0, /*hidden argument*/NULL);
		// if (m_MRT == null)
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_8 = __this->get_m_MRT_3();
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		// m_MRT = new RenderTargetIdentifier[2];
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_9 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_MRT_3(L_9);
	}

IL_0056:
	{
		// m_MRT[0] = lumaTexture;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_10 = __this->get_m_MRT_3();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = __this->get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_12;
		L_12 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_12);
		// m_MRT[1] = chromaTexture;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_13 = __this->get_m_MRT_3();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = __this->get_chromaTexture_1();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_15;
		L_15 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_15);
		// cb.SetGlobalTexture(Uniforms._MainTex, source);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_16 = ___cb0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		int32_t L_17 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_18 = ___source1;
		NullCheck(L_16);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_16, L_17, L_18, /*hidden argument*/NULL);
		// cb.SetRenderTarget(m_MRT, lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_19 = ___cb0;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_20 = __this->get_m_MRT_3();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_21 = __this->get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_22;
		L_22 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		CommandBuffer_SetRenderTarget_m4F4A1974C1BC9F3849D54B5141EF296F37B4E7E3(L_19, L_20, L_22, /*hidden argument*/NULL);
		// cb.DrawMesh(GraphicsUtils.quad, Matrix4x4.identity, material, 0, (int)Pass.FrameCompression);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_23 = ___cb0;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_24;
		L_24 = GraphicsUtils_get_quad_m759AD9D70DDD5FEFB815926855C749FF1D954377(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25;
		L_25 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = ___material4;
		NullCheck(L_23);
		CommandBuffer_DrawMesh_m1045759BE3456DC0CE14E6E372E13FF6625D1A83(L_23, L_24, L_25, L_26, 0, 6, /*hidden argument*/NULL);
		// m_Time = Time.time;
		float L_27;
		L_27 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_m_Time_2(L_27);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Frame_MakeRecord_m76C2721EA40FE50536656F9CDCEB46FA9ED9FEAE_AdjustorThunk (RuntimeObject * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * _thisAdjusted = reinterpret_cast<Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *>(__this + _offset);
	Frame_MakeRecord_m76C2721EA40FE50536656F9CDCEB46FA9ED9FEAE(_thisAdjusted, ___cb0, ___source1, ___width2, ___height3, ___material4, method);
}
// System.Void UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::MakeRecordRaw(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_MakeRecordRaw_m99E90CFFDF04BA32505153D2A005A5AF23ADD9AB (Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, int32_t ___format4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Release();
		Frame_Release_mC179B110B1D26F0A5B7EEED6AE18661F88695A74((Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *)__this, /*hidden argument*/NULL);
		// lumaTexture = RenderTexture.GetTemporary(width, height, 0, format);
		int32_t L_0 = ___width2;
		int32_t L_1 = ___height3;
		int32_t L_2 = ___format4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3;
		L_3 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		__this->set_lumaTexture_0(L_3);
		// lumaTexture.filterMode = FilterMode.Point;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = __this->get_lumaTexture_0();
		NullCheck(L_4);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_4, 0, /*hidden argument*/NULL);
		// cb.SetGlobalTexture(Uniforms._MainTex, source);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_5 = ___cb0;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t4894B12EC450D7231B9BAB4117666DBBD03CAAB5_il2cpp_TypeInfo_var))->get__MainTex_4();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_7 = ___source1;
		NullCheck(L_5);
		CommandBuffer_SetGlobalTexture_mED69F96D6790798BFE82C22AFF2A065E5EDA41CF(L_5, L_6, L_7, /*hidden argument*/NULL);
		// cb.Blit(source, lumaTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_8 = ___cb0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_9 = ___source1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = __this->get_lumaTexture_0();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_11;
		L_11 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		CommandBuffer_Blit_mDDA4CCEA9460315B9CEA882E52B7734F4033C362(L_8, L_9, L_11, /*hidden argument*/NULL);
		// m_Time = Time.time;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_m_Time_2(L_12);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Frame_MakeRecordRaw_m99E90CFFDF04BA32505153D2A005A5AF23ADD9AB_AdjustorThunk (RuntimeObject * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cb0, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___source1, int32_t ___width2, int32_t ___height3, int32_t ___format4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 * _thisAdjusted = reinterpret_cast<Frame_t29A9D7C408D5208D30575F3E666B5AA1EF5CA629 *>(__this + _offset);
	Frame_MakeRecordRaw_m99E90CFFDF04BA32505153D2A005A5AF23ADD9AB(_thisAdjusted, ___cb0, ___source1, ___width2, ___height3, ___format4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_mesh_mC3E00DD3EC2EBB9ABC145AB25262CE34FB47EA53_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___value0;
		__this->set_U3CmeshU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ArrowArray_get_mesh_m159E0A6065671A721BF4F38F67796DFBF6A39A87_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, const RuntimeMethod* method)
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_U3CmeshU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_columnCount_m93B0297CF16BB02FCBB8FD401A27A5C9C05771E3_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int columnCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcolumnCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowArray_set_rowCount_m2B86B6790CEA32DE1C0B8A740764506E085C009C_inline (ArrowArray_tE201C5051B6F99E8B581C8BC1855945A3210DC06 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int rowCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrowCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}

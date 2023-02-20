#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<VivoxUnity.IChannelSession>
struct IEnumerable_1_t7447999AE08C57D5E927EB3FBFEC81E653DCE7AA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>
struct IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<PlanetObject>
struct List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0;
// System.Collections.Generic.List`1<StarObject>
struct List_1_tF18E3804C6FF779D386A454E30754050B368137D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PlanetObject[]
struct PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// StarObject[]
struct StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// Unity.Services.Vivox.Account
struct Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CelestialManager
struct CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284;
// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA;
// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E;
// ChatActivator
struct ChatActivator_tA27C4749AEB0A01929870AF095DFFC3FA14911A4;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F;
// UnityEngine.XR.ARFoundation.Compass
struct Compass_t6F666C540C04CA4407F7974E416AB7B4300C10C6;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// VivoxUnity.IChannelSession
struct IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614;
// VivoxUnity.ILoginSession
struct ILoginSession_tE63A7140B4474EC44F1D8542D1003E0ED78E9152;
// VivoxUnity.IParticipant
struct IParticipant_tB42F46CF7796CCAD2FA592BDD37B7ABCD2166AFD;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LobbyScreenUI
struct LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlanetDetection
struct PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VivoxVoiceManager
struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// LobbyScreenUI/<>c
struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// VivoxVoiceManager/ChannelTextMessageChangedHandler
struct ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB;
// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A;
// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D;
// VivoxVoiceManager/ParticipantValueChangedHandler
struct ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B;
// VivoxVoiceManager/ParticipantValueUpdatedHandler
struct ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56;
// VivoxVoiceManager/RecoveryStateChangedHandler
struct RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF18E3804C6FF779D386A454E30754050B368137D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanetName_t6AE437CB5602F8A99CA3F67AAF7BF56332265303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral209D6C95315F539F036E51E085C33C40C40878D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC84494ED7EA6A11A382EDCD293D61E93D05123;
IL2CPP_EXTERN_C String_t* _stringLiteral36229813EE5C92527E3EF4305B6538FED41F3247;
IL2CPP_EXTERN_C String_t* _stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2;
IL2CPP_EXTERN_C String_t* _stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFC65145EDC266851229A0DA06A43A6351D2172;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8A55703E55C22A353FFF3C8B12B0C08277433D78;
IL2CPP_EXTERN_C String_t* _stringLiteral8E6DB84B2BE626DB3F8E3C48D6E7E7254F18B830;
IL2CPP_EXTERN_C String_t* _stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralD6993F3D3BFAB0C4E44B460A9E8933E925F926AB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF9B43701579E77946D0F964BC716ADAC70E5DF5D;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3CAwakeU3Eb__9_0_m6B60262BDE570DF2352B03DB596D5745893DBA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m82928E34266601118B4704E22D045B98D1581087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_m7BED814AA57670214D8B9334885115FCE04E484A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9;
struct StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<PlanetObject>
struct List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StarObject>
struct List_1_tF18E3804C6FF779D386A454E30754050B368137D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF18E3804C6FF779D386A454E30754050B368137D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// CelestialCoordinates
struct CelestialCoordinates_t083A98B741B245BEE350C85EFB6C73E2392AEFE9  : public RuntimeObject
{
};

// VivoxUnity.Channel3DProperties
struct Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA  : public RuntimeObject
{
	// System.Int32 VivoxUnity.Channel3DProperties::_audibleDistance
	int32_t ____audibleDistance_0;
	// System.Int32 VivoxUnity.Channel3DProperties::_conversationalDistance
	int32_t ____conversationalDistance_1;
	// System.Single VivoxUnity.Channel3DProperties::_audioFadeIntensityByDistance
	float ____audioFadeIntensityByDistance_2;
	// VivoxUnity.AudioFadeModel VivoxUnity.Channel3DProperties::_audioFadeModel
	int32_t ____audioFadeModel_3;
};

// VivoxUnity.ChannelId
struct ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E  : public RuntimeObject
{
	// System.String VivoxUnity.ChannelId::_domain
	String_t* ____domain_0;
	// System.String VivoxUnity.ChannelId::_name
	String_t* ____name_1;
	// System.String VivoxUnity.ChannelId::_issuer
	String_t* ____issuer_2;
	// System.String VivoxUnity.ChannelId::_environmentId
	String_t* ____environmentId_3;
	// VivoxUnity.ChannelType VivoxUnity.ChannelId::_type
	int32_t ____type_4;
	// VivoxUnity.Channel3DProperties VivoxUnity.ChannelId::_properties
	Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ____properties_5;
};

// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F  : public RuntimeObject
{
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LobbyScreenUI/<>c
struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178  : public RuntimeObject
{
};

struct U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields
{
	// LobbyScreenUI/<>c LobbyScreenUI/<>c::<>9
	U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* ___U3CU3E9_0;
	// System.AsyncCallback LobbyScreenUI/<>c::<>9__14_1
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___U3CU3E9__14_1_1;
};

// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD  : public RuntimeObject
{
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::z
	float ___z_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
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
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// PlanetObject
struct PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 
{
	// UnityEngine.GameObject PlanetObject::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	// PlanetName PlanetObject::name
	int32_t ___name_1;
};
// Native definition for P/Invoke marshalling of PlanetObject
struct PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	int32_t ___name_1;
};
// Native definition for COM marshalling of PlanetObject
struct PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	int32_t ___name_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// StarObject
struct StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 
{
	// UnityEngine.GameObject StarObject::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	// System.String StarObject::name
	String_t* ___name_1;
	// System.Single StarObject::ra
	float ___ra_2;
	// System.Single StarObject::dec
	float ___dec_3;
};
// Native definition for P/Invoke marshalling of StarObject
struct StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	char* ___name_1;
	float ___ra_2;
	float ___dec_3;
};
// Native definition for COM marshalling of StarObject
struct StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_0;
	Il2CppChar* ___name_1;
	float ___ra_2;
	float ___dec_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.List`1/Enumerator<PlanetObject>
struct Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Func`2<VivoxUnity.IChannelSession,System.Boolean>
struct Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// VivoxVoiceManager/LoginStatusChangedHandler
struct LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/ParticipantStatusChangedHandler
struct ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D  : public MulticastDelegate_t
{
};

// VivoxVoiceManager/RecoveryStateChangedHandler
struct RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// CelestialManager
struct CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CelestialManager::latitude
	float ___latitude_4;
	// System.Single CelestialManager::longitude
	float ___longitude_5;
	// UnityEngine.Vector2 CelestialManager::planetsMinMaxRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___planetsMinMaxRadius_6;
	// System.Single CelestialManager::timeSpeedHours
	float ___timeSpeedHours_7;
	// System.Int32 CelestialManager::timeGMTOffset
	int32_t ___timeGMTOffset_8;
	// System.Int32 CelestialManager::numberOfDaysFromNow
	int32_t ___numberOfDaysFromNow_9;
	// TMPro.TextMeshProUGUI CelestialManager::dateText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___dateText_10;
	// UnityEngine.GameObject CelestialManager::moonPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moonPrefab_11;
	// UnityEngine.GameObject CelestialManager::sunPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sunPrefab_12;
	// UnityEngine.GameObject CelestialManager::marsPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___marsPrefab_13;
	// UnityEngine.GameObject CelestialManager::jupiterPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jupiterPrefab_14;
	// UnityEngine.GameObject CelestialManager::mercuryPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mercuryPrefab_15;
	// UnityEngine.GameObject CelestialManager::neptunePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___neptunePrefab_16;
	// UnityEngine.GameObject CelestialManager::plutoPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plutoPrefab_17;
	// UnityEngine.GameObject CelestialManager::saturnPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___saturnPrefab_18;
	// UnityEngine.GameObject CelestialManager::uranusPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___uranusPrefab_19;
	// UnityEngine.GameObject CelestialManager::venusPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___venusPrefab_20;
	// UnityEngine.GameObject CelestialManager::starPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___starPrefab_21;
	// System.Collections.Generic.List`1<PlanetObject> CelestialManager::planets
	List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* ___planets_22;
	// System.Collections.Generic.List`1<StarObject> CelestialManager::stars
	List_1_tF18E3804C6FF779D386A454E30754050B368137D* ___stars_23;
	// System.DateTime CelestialManager::currentDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___currentDate_24;
	// UnityEngine.TextAsset CelestialManager::starsDatabase
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___starsDatabase_25;
	// UnityEngine.GameObject CelestialManager::starsParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___starsParent_26;
	// UnityEngine.GameObject CelestialManager::polaris
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___polaris_27;
};

// ChatActivator
struct ChatActivator_tA27C4749AEB0A01929870AF095DFFC3FA14911A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.Compass
struct Compass_t6F666C540C04CA4407F7974E416AB7B4300C10C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Compass::aRSessionOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___aRSessionOrigin_4;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Compass::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_5;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.Compass::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Compass::sign2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sign2_7;
};

// LobbyScreenUI
struct LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager LobbyScreenUI::_vivoxVoiceManager
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ____vivoxVoiceManager_4;
	// TMPro.TMP_Text LobbyScreenUI::LobbyChannelName
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___LobbyChannelName_5;
	// UnityEngine.EventSystems.EventSystem LobbyScreenUI::_evtSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____evtSystem_6;
	// UnityEngine.UI.Button LobbyScreenUI::LogoutButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LogoutButton_7;
	// UnityEngine.GameObject LobbyScreenUI::LobbyScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LobbyScreen_8;
	// UnityEngine.GameObject LobbyScreenUI::ConnectionIndicatorDot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectionIndicatorDot_9;
	// UnityEngine.GameObject LobbyScreenUI::ConnectionIndicatorText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectionIndicatorText_10;
	// UnityEngine.UI.Image LobbyScreenUI::_connectionIndicatorDotImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____connectionIndicatorDotImage_11;
	// UnityEngine.UI.Text LobbyScreenUI::_connectionIndicatorDotText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____connectionIndicatorDotText_12;
};

// PlanetDetection
struct PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PlanetDetection::planetName
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___planetName_4;
	// UnityEngine.UI.Toggle PlanetDetection::chatButton
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___chatButton_5;
	// UnityEngine.Camera PlanetDetection::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_6;
};

// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VivoxVoiceManager
struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VivoxVoiceManager/ParticipantValueChangedHandler VivoxVoiceManager::OnSpeechDetectedEvent
	ParticipantValueChangedHandler_tDC402A792FE534AE9FA0CF46E127DC9903B0271B* ___OnSpeechDetectedEvent_4;
	// VivoxVoiceManager/ParticipantValueUpdatedHandler VivoxVoiceManager::OnAudioEnergyChangedEvent
	ParticipantValueUpdatedHandler_tFC39774F03FF767349B6648C8839271896636F56* ___OnAudioEnergyChangedEvent_5;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantAddedEvent
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___OnParticipantAddedEvent_6;
	// VivoxVoiceManager/ParticipantStatusChangedHandler VivoxVoiceManager::OnParticipantRemovedEvent
	ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___OnParticipantRemovedEvent_7;
	// VivoxVoiceManager/ChannelTextMessageChangedHandler VivoxVoiceManager::OnTextMessageLogReceivedEvent
	ChannelTextMessageChangedHandler_t8050FD5B0F2FCED39C5A12A3B5A851FF2225D1FB* ___OnTextMessageLogReceivedEvent_8;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedInEvent
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___OnUserLoggedInEvent_9;
	// VivoxVoiceManager/LoginStatusChangedHandler VivoxVoiceManager::OnUserLoggedOutEvent
	LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___OnUserLoggedOutEvent_10;
	// VivoxVoiceManager/RecoveryStateChangedHandler VivoxVoiceManager::OnRecoveryStateChangedEvent
	RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___OnRecoveryStateChangedEvent_11;
	// Unity.Services.Vivox.Account VivoxVoiceManager::m_Account
	Account_t04121FA1742B1C5A064EFDB5A4BD8C1604153F9B* ___m_Account_12;
	// System.String VivoxVoiceManager::_key
	String_t* ____key_15;
	// System.String VivoxVoiceManager::_issuer
	String_t* ____issuer_16;
	// System.String VivoxVoiceManager::_domain
	String_t* ____domain_17;
	// System.String VivoxVoiceManager::_server
	String_t* ____server_18;
	// VivoxUnity.LoginState VivoxVoiceManager::<LoginState>k__BackingField
	int32_t ___U3CLoginStateU3Ek__BackingField_19;
	// VivoxUnity.ILoginSession VivoxVoiceManager::LoginSession
	RuntimeObject* ___LoginSession_20;
};

struct VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_StaticFields
{
	// System.Object VivoxVoiceManager::m_Lock
	RuntimeObject* ___m_Lock_13;
	// VivoxVoiceManager VivoxVoiceManager::m_Instance
	VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* ___m_Instance_14;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// PlanetObject[]
struct PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9  : public RuntimeArray
{
	ALIGN_FIELD (8) PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 m_Items[1];

	inline PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
	inline PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
	}
};
// StarObject[]
struct StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72  : public RuntimeArray
{
	ALIGN_FIELD (8) StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 m_Items[1];

	inline StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_1), (void*)NULL);
		#endif
	}
	inline StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___gameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_1), (void*)NULL);
		#endif
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlanetObject>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C_gshared (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<PlanetObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF_gshared (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<PlanetObject>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_gshared_inline (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<PlanetObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E_gshared (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlanetObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981_gshared (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789_gshared (List_1_tF18E3804C6FF779D386A454E30754050B368137D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlanetObject>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_gshared_inline (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarObject>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_gshared_inline (List_1_tF18E3804C6FF779D386A454E30754050B368137D* __this, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;

// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalDays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Double CelestialCoordinates::Mod2Pi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E (double ____angle0, const RuntimeMethod* method) ;
// System.Double CelestialCoordinates::TrueAnomaly(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CelestialCoordinates_TrueAnomaly_mB0E6392B8906DA77141DC4250F83231D72399990 (double ___M0, double ___e1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void CelestialManager::SetupPlanets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_SetupPlanets_m34CC4D5ED16C9AEF2DCE1C9F343D5178EA32A724 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) ;
// System.Void CelestialManager::SetupStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_SetupStars_mA56BF61D6DDDDD946143544E7313C746817F2D6D (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddHours(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlanetObject>::GetEnumerator()
inline Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 (*) (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0*, const RuntimeMethod*))List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PlanetObject>::Dispose()
inline void Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14*, const RuntimeMethod*))Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PlanetObject>::get_Current()
inline PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_inline (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method)
{
	return ((  PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 (*) (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14*, const RuntimeMethod*))Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 CelestialCoordinates::CalculateHorizontalCoordinatesMoon(System.Double,System.Double,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialCoordinates_CalculateHorizontalCoordinatesMoon_m2C8DB69AFC1EFEC7915ECF456D3D2FE15F562F1D (double ____longitude0, double ____latitude1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CelestialManager::GetPlanetsGamePositionFromAltAz(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialManager_GetPlanetsGamePositionFromAltAz_m52B495F553295E122ACEC4BA6E8E0F2571302945 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____altAz0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CelestialCoordinates::CalculateHorizontalCoordinatesPlanets(System.Double,System.Double,PlanetName,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialCoordinates_CalculateHorizontalCoordinatesPlanets_mDF70000AC3B4C75ACEFCA60C0BD6A60B1A178592 (double ____longitude0, double ____latitude1, int32_t ____name2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<PlanetObject>::MoveNext()
inline bool Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14*, const RuntimeMethod*))Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E_gshared)(__this, method);
}
// System.Double System.TimeSpan::get_TotalHours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlanetObject>::.ctor()
inline void List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981 (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0*, const RuntimeMethod*))List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981_gshared)(__this, method);
}
// System.Void CelestialManager::InstantiatePlanet(UnityEngine.GameObject,PlanetName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab0, int32_t ____name1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarObject>::.ctor()
inline void List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789 (List_1_tF18E3804C6FF779D386A454E30754050B368137D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF18E3804C6FF779D386A454E30754050B368137D*, const RuntimeMethod*))List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789_gshared)(__this, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void CelestialManager::InstantiateStar(System.Single,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_InstantiateStar_m395823FC3D30F0E6C78B4626E6CD63C4CDBAD8F6 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, float ____ra0, float ____dec1, float ____mag2, String_t* ____name3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlanetObject>::Add(T)
inline void List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_inline (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0*, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2, const RuntimeMethod*))List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector2 CelestialCoordinates::CalculateHorizontalCoordinatesStar(System.Double,System.Double,System.Double,System.Double,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CelestialCoordinates_CalculateHorizontalCoordinatesStar_mA7189BE08BF334512D5D52F717AD3CBAF17A31FF (double ____longitude0, double ____latitude1, double ____ra2, double ____dec3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StarObject>::Add(T)
inline void List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_inline (List_1_tF18E3804C6FF779D386A454E30754050B368137D* __this, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF18E3804C6FF779D386A454E30754050B368137D*, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19, const RuntimeMethod*))List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single CelestialManager::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CelestialManager_Map_m9772DCEFD7D37203BFBC3F0A7784A8FC6B4E7516 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, float ___s0, float ___a11, float ___a22, float ___b13, float ___b24, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// VivoxVoiceManager VivoxVoiceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B (const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/LoginStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93 (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/RecoveryStateChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnRecoveryStateChangedEvent_m7670B4C1B64E81428DE4CA1640051535223143BF (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// VivoxUnity.LoginState VivoxVoiceManager::get_LoginState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedInEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnUserLoggedOutEvent(VivoxVoiceManager/LoginStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager/ParticipantStatusChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382 (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::remove_OnRecoveryStateChangedEvent(VivoxVoiceManager/RecoveryStateChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_remove_OnRecoveryStateChangedEvent_mEFB931AC3E545A929368715AC967B339CF2FEB2F (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::add_OnParticipantAddedEvent(VivoxVoiceManager/ParticipantStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::JoinChannel(System.String,VivoxUnity.ChannelType,VivoxVoiceManager/ChatCapability,System.Boolean,VivoxUnity.Channel3DProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_JoinChannel_m3484C2A5717B0EF776AEFFBF3DDEB22F5ED58278 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, String_t* ___channelName0, int32_t ___channelType1, int32_t ___chatCapability2, bool ___transmissionSwitch3, Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA* ___properties4, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::DisconnectAllChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7 (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void VivoxVoiceManager::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VivoxVoiceManager_Logout_m33F0A5F36923650407DAEA2AEC5D7204880175DC (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.String VivoxUnity.ChannelId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointer1, const RuntimeMethod* method) ;
// VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession> VivoxVoiceManager::get_ActiveChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<VivoxUnity.IChannelSession,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133 (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<VivoxUnity.IChannelSession>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F (RuntimeObject* ___source0, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) ;
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266 (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) ;
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Compass UnityEngine.Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Compass::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Compass::get_trueHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m1820213D5130A4831D01AA2085D7C23F28F0707D (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___content0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Double CelestialCoordinates::Mod2Pi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E (double ____angle0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	double V_3 = 0.0;
	{
		// double b = _angle / (2.0f * Mathf.PI);
		double L_0 = ____angle0;
		V_0 = ((double)(L_0/(6.2831854820251465)));
		// double a = (2.0f * Mathf.PI) * (b - Mathf.Floor((float)b));
		double L_1 = V_0;
		double L_2 = V_0;
		float L_3;
		L_3 = floorf(((float)L_2));
		V_1 = ((double)il2cpp_codegen_multiply((6.2831854820251465), ((double)il2cpp_codegen_subtract(L_1, ((double)L_3)))));
		// if (a < 0) a = (2.0f * Mathf.PI) + a;
		double L_4 = V_1;
		V_2 = (bool)((((double)L_4) < ((double)(0.0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// if (a < 0) a = (2.0f * Mathf.PI) + a;
		double L_6 = V_1;
		V_1 = ((double)il2cpp_codegen_add((6.2831854820251465), L_6));
	}

IL_003e:
	{
		// return a;
		double L_7 = V_1;
		V_3 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		double L_8 = V_3;
		return L_8;
	}
}
// System.Double CelestialCoordinates::TrueAnomaly(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CelestialCoordinates_TrueAnomaly_mB0E6392B8906DA77141DC4250F83231D72399990 (double ___M0, double ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	double V_3 = 0.0;
	{
		// var E = M + e*Math.Sin(M)*(1.0f + e*Math.Cos(M));
		double L_0 = ___M0;
		double L_1 = ___e1;
		double L_2 = ___M0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sin(L_2);
		double L_4 = ___e1;
		double L_5 = ___M0;
		double L_6;
		L_6 = cos(L_5);
		V_1 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_4, L_6))))))));
		// V = 2f * Math.Atan(Math.Sqrt((1f + e)/(1f - e))*Math.Tan(0.5f*E));
		double L_7 = ___e1;
		double L_8 = ___e1;
		double L_9;
		L_9 = sqrt(((double)(((double)il2cpp_codegen_add((1.0), L_7))/((double)il2cpp_codegen_subtract((1.0), L_8)))));
		double L_10 = V_1;
		double L_11;
		L_11 = tan(((double)il2cpp_codegen_multiply((0.5), L_10)));
		double L_12;
		L_12 = atan(((double)il2cpp_codegen_multiply(L_9, L_11)));
		V_0 = ((double)il2cpp_codegen_multiply((2.0), L_12));
		// if (V < 0) V = V + (2f * Mathf.PI);
		double L_13 = V_0;
		V_2 = (bool)((((double)L_13) < ((double)(0.0)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		// if (V < 0) V = V + (2f * Mathf.PI);
		double L_15 = V_0;
		V_0 = ((double)il2cpp_codegen_add(L_15, (6.2831854820251465)));
	}

IL_0078:
	{
		// return V;
		double L_16 = V_0;
		V_3 = L_16;
		goto IL_007c;
	}

IL_007c:
	{
		// }
		double L_17 = V_3;
		return L_17;
	}
}
// UnityEngine.Vector3 CelestialCoordinates::CalculateHorizontalCoordinatesMoon(System.Double,System.Double,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialCoordinates_CalculateHorizontalCoordinatesMoon_m2C8DB69AFC1EFEC7915ECF456D3D2FE15F562F1D (double ____longitude0, double ____latitude1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	bool V_16 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	{
		// _latitude *= Mathf.Deg2Rad;
		double L_0 = ____latitude1;
		____latitude1 = ((double)il2cpp_codegen_multiply(L_0, (0.01745329238474369)));
		// double lw = Mathf.Deg2Rad * _longitude * -1;
		double L_1 = ____longitude0;
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.01745329238474369), L_1)), (-1.0)));
		// DateTime epoch = new DateTime(2000, 1, 1, 12, 0, 0);
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&V_1), ((int32_t)2000), 1, 1, ((int32_t)12), 0, 0, NULL);
		// TimeSpan j2000TS = _time - epoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ____time2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_2, L_3, NULL);
		V_2 = L_4;
		// double j2000 = j2000TS.TotalDays;
		double L_5;
		L_5 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_2), NULL);
		V_3 = L_5;
		// double L = Mathf.Deg2Rad * (218.316f + 13.176396f * j2000), // ecliptic longitude
		double L_6 = V_3;
		V_4 = ((double)il2cpp_codegen_multiply((0.01745329238474369), ((double)il2cpp_codegen_add((218.31599426269531), ((double)il2cpp_codegen_multiply((13.176396369934082), L_6))))));
		// M = Mathf.Deg2Rad * (134.963f + 13.064993f * j2000), // mean anomaly
		double L_7 = V_3;
		V_5 = ((double)il2cpp_codegen_multiply((0.01745329238474369), ((double)il2cpp_codegen_add((134.96299743652344), ((double)il2cpp_codegen_multiply((13.064992904663086), L_7))))));
		// F = Mathf.Deg2Rad * (93.272f + 13.229350f * j2000),  // mean distance
		double L_8 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply((0.01745329238474369), ((double)il2cpp_codegen_add((93.272003173828125), ((double)il2cpp_codegen_multiply((13.229350090026855), L_8))))));
		// l  = L + Mathf.Deg2Rad * 6.289f * Math.Sin(M), // longitude
		double L_9 = V_4;
		double L_10 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = sin(L_10);
		V_7 = ((double)il2cpp_codegen_add(L_9, ((double)il2cpp_codegen_multiply((0.10976375639438629), L_11))));
		// b  = Mathf.Deg2Rad * 5.128f * Math.Sin(F),     // latitude
		double L_12 = V_6;
		double L_13;
		L_13 = sin(L_12);
		V_8 = ((double)il2cpp_codegen_multiply((0.089500479400157928), L_13));
		// dt = 385001f - 20905f * Math.Cos(M);  // distance to the moon in km
		double L_14 = V_5;
		double L_15;
		L_15 = cos(L_14);
		V_9 = ((double)il2cpp_codegen_subtract((385001.0), ((double)il2cpp_codegen_multiply((20905.0), L_15))));
		// double e = Mathf.Deg2Rad * 23.4397f;
		V_10 = (0.40909993648529053);
		// double ra = Math.Atan2(Math.Sin(l) * Math.Cos(e) - Math.Tan(b) * Math.Sin(e), Math.Cos(l));
		double L_16 = V_7;
		double L_17;
		L_17 = sin(L_16);
		double L_18 = V_10;
		double L_19;
		L_19 = cos(L_18);
		double L_20 = V_8;
		double L_21;
		L_21 = tan(L_20);
		double L_22 = V_10;
		double L_23;
		L_23 = sin(L_22);
		double L_24 = V_7;
		double L_25;
		L_25 = cos(L_24);
		double L_26;
		L_26 = atan2(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_17, L_19)), ((double)il2cpp_codegen_multiply(L_21, L_23)))), L_25);
		V_11 = L_26;
		// double dec = Math.Asin(Math.Sin(b) * Math.Cos(e) + Math.Cos(b) * Math.Sin(e) * Math.Sin(l));
		double L_27 = V_8;
		double L_28;
		L_28 = sin(L_27);
		double L_29 = V_10;
		double L_30;
		L_30 = cos(L_29);
		double L_31 = V_8;
		double L_32;
		L_32 = cos(L_31);
		double L_33 = V_10;
		double L_34;
		L_34 = sin(L_33);
		double L_35 = V_7;
		double L_36;
		L_36 = sin(L_35);
		double L_37;
		L_37 = asin(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_28, L_30)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_32, L_34)), L_36)))));
		V_12 = L_37;
		// double HA = (Mathf.Deg2Rad * (280.16f + 360.9856235f * j2000) - lw) - ra;
		double L_38 = V_3;
		double L_39 = V_0;
		double L_40 = V_11;
		V_13 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.01745329238474369), ((double)il2cpp_codegen_add((280.16000366210938), ((double)il2cpp_codegen_multiply((360.98562622070312), L_38)))))), L_39)), L_40));
		// double altitude = Math.Asin(Math.Sin(dec) * Math.Sin(_latitude) + Math.Cos(dec) * Math.Cos(_latitude) * Math.Cos(HA));
		double L_41 = V_12;
		double L_42;
		L_42 = sin(L_41);
		double L_43 = ____latitude1;
		double L_44;
		L_44 = sin(L_43);
		double L_45 = V_12;
		double L_46;
		L_46 = cos(L_45);
		double L_47 = ____latitude1;
		double L_48;
		L_48 = cos(L_47);
		double L_49 = V_13;
		double L_50;
		L_50 = cos(L_49);
		double L_51;
		L_51 = asin(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_42, L_44)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_46, L_48)), L_50)))));
		V_14 = L_51;
		// double azimuth = Math.Acos((Math.Sin(dec) - Math.Sin(altitude) * Math.Sin(_latitude)) / (Math.Cos(altitude)*Math.Cos(_latitude)));
		double L_52 = V_12;
		double L_53;
		L_53 = sin(L_52);
		double L_54 = V_14;
		double L_55;
		L_55 = sin(L_54);
		double L_56 = ____latitude1;
		double L_57;
		L_57 = sin(L_56);
		double L_58 = V_14;
		double L_59;
		L_59 = cos(L_58);
		double L_60 = ____latitude1;
		double L_61;
		L_61 = cos(L_60);
		double L_62;
		L_62 = acos(((double)(((double)il2cpp_codegen_subtract(L_53, ((double)il2cpp_codegen_multiply(L_55, L_57))))/((double)il2cpp_codegen_multiply(L_59, L_61)))));
		V_15 = L_62;
		// altitude *= Mathf.Rad2Deg;
		double L_63 = V_14;
		V_14 = ((double)il2cpp_codegen_multiply(L_63, (57.295780181884766)));
		// azimuth *= Mathf.Rad2Deg;
		double L_64 = V_15;
		V_15 = ((double)il2cpp_codegen_multiply(L_64, (57.295780181884766)));
		// if (Math.Sin (HA) > 0f)
		double L_65 = V_13;
		double L_66;
		L_66 = sin(L_65);
		V_16 = (bool)((((double)L_66) > ((double)(0.0)))? 1 : 0);
		bool L_67 = V_16;
		if (!L_67)
		{
			goto IL_0215;
		}
	}
	{
		// azimuth = 360f - azimuth;
		double L_68 = V_15;
		V_15 = ((double)il2cpp_codegen_subtract((360.0), L_68));
	}

IL_0215:
	{
		// return new Vector3 ((float)altitude, (float)azimuth, (float)dt / 149597870.7f); //For dt, convert KM to AU
		double L_69 = V_14;
		double L_70 = V_15;
		double L_71 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_72), ((float)L_69), ((float)L_70), ((float)(((float)L_71)/(149597872.0f))), /*hidden argument*/NULL);
		V_17 = L_72;
		goto IL_022d;
	}

IL_022d:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_17;
		return L_73;
	}
}
// UnityEngine.Vector3 CelestialCoordinates::CalculateHorizontalCoordinatesPlanets(System.Double,System.Double,PlanetName,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialCoordinates_CalculateHorizontalCoordinatesPlanets_mDF70000AC3B4C75ACEFCA60C0BD6A60B1A178592 (double ____longitude0, double ____latitude1, int32_t ____name2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	double V_20 = 0.0;
	double V_21 = 0.0;
	double V_22 = 0.0;
	double V_23 = 0.0;
	double V_24 = 0.0;
	double V_25 = 0.0;
	double V_26 = 0.0;
	double V_27 = 0.0;
	double V_28 = 0.0;
	double V_29 = 0.0;
	double V_30 = 0.0;
	double V_31 = 0.0;
	double V_32 = 0.0;
	double V_33 = 0.0;
	double V_34 = 0.0;
	double V_35 = 0.0;
	double V_36 = 0.0;
	double V_37 = 0.0;
	double V_38 = 0.0;
	double V_39 = 0.0;
	double V_40 = 0.0;
	double V_41 = 0.0;
	double V_42 = 0.0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	bool V_45 = false;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_51;
	memset((&V_51), 0, sizeof(V_51));
	{
		// _latitude *= Mathf.Deg2Rad;
		double L_0 = ____latitude1;
		____latitude1 = ((double)il2cpp_codegen_multiply(L_0, (0.01745329238474369)));
		// Vector3 coordinates = new Vector3(0,0,0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), (0.0f), NULL);
		// DateTime epoch = new DateTime(2000, 1, 1, 12, 0, 0);
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&V_1), ((int32_t)2000), 1, 1, ((int32_t)12), 0, 0, NULL);
		// TimeSpan j2000TS = _time - epoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ____time3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_2 = L_3;
		// double j2000 = j2000TS.TotalDays;
		double L_4;
		L_4 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_2), NULL);
		V_3 = L_4;
		// double cJ2000 = j2000 / 36525.0f;
		double L_5 = V_3;
		V_4 = ((double)(L_5/(36525.0)));
		// double inclination = 0f;    //angle between the plane of the ecliptic (the plane of Earth's orbit about the Sun) and the plane of the planets orbit
		V_5 = (0.0);
		// double longNode = 0f;        //longitude of ascending node (degrees), the position in the orbit where the elliptical path of the planet passes through the plane of the ecliptic, from below the plane to above the plane
		V_6 = (0.0);
		// double longPeri = 0f;        //longitude of perihelion (degrees), the position in the orbit where the planet is closest to the Sun
		V_7 = (0.0);
		// double meanDist = 0f;        //mean distance (AU), the value of the semi-major axis of the orbit (AU - Astronomical Unit - average Sun to Earth distance)
		V_8 = (0.0);
		// double eccentricity = 0f;    //eccentricity of the ellipse which describes the orbit (dimensionless)
		V_9 = (0.0);
		// double meanLong = 0f;        //mean longitude (degrees), the position of the planet in the orbit
		V_10 = (0.0);
		// double inclinationE = (0.00005f - 46.94f * cJ2000 / 3600.0f) * Mathf.Deg2Rad;;
		double L_6 = V_4;
		V_11 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((4.9999998736893758E-05), ((double)(((double)il2cpp_codegen_multiply((46.939998626708984), L_6))/(3600.0))))), (0.01745329238474369)));
		// double longNodeE = (-11.26064f - 18228.25f * cJ2000 / 3600.0f) * Mathf.Deg2Rad;;
		double L_7 = V_4;
		V_12 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((-11.260640144348145), ((double)(((double)il2cpp_codegen_multiply((18228.25), L_7))/(3600.0))))), (0.01745329238474369)));
		// double longPeriE = (102.94719f + 1198.28f * cJ2000 / 3600.0f) * Mathf.Deg2Rad;
		double L_8 = V_4;
		V_13 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((102.94718933105469), ((double)(((double)il2cpp_codegen_multiply((1198.280029296875), L_8))/(3600.0))))), (0.01745329238474369)));
		// double meanDistE = 1.00000011f - 0.00000005f * cJ2000;
		double L_9 = V_4;
		V_14 = ((double)il2cpp_codegen_subtract((1.0000001192092896), ((double)il2cpp_codegen_multiply((5.0000000584304871E-08), L_9))));
		// double eccenctricityE = 0.01671022f - 0.00003804f * cJ2000;
		double L_10 = V_4;
		V_15 = ((double)il2cpp_codegen_subtract((0.016710219904780388), ((double)il2cpp_codegen_multiply((3.8040001527406275E-05), L_10))));
		// double meanLongE = Mod2Pi ((100.46435f + 129597740.63f * cJ2000 / 3600.0f) * Mathf.Deg2Rad);
		double L_11 = V_4;
		double L_12;
		L_12 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((100.46434783935547), ((double)(((double)il2cpp_codegen_multiply((129597744.0), L_11))/(3600.0))))), (0.01745329238474369))), NULL);
		V_16 = L_12;
		// switch(_name){
		int32_t L_13 = ____name2;
		V_44 = L_13;
		int32_t L_14 = V_44;
		V_43 = L_14;
		int32_t L_15 = V_43;
		switch (L_15)
		{
			case 0:
			{
				goto IL_01b3;
			}
			case 1:
			{
				goto IL_01d0;
			}
			case 2:
			{
				goto IL_02ba;
			}
			case 3:
			{
				goto IL_03a4;
			}
			case 4:
			{
				goto IL_048e;
			}
			case 5:
			{
				goto IL_0578;
			}
			case 6:
			{
				goto IL_0662;
			}
			case 7:
			{
				goto IL_074c;
			}
			case 8:
			{
				goto IL_0836;
			}
		}
	}
	{
		goto IL_091d;
	}

IL_01b3:
	{
		// inclination = inclinationE;
		double L_16 = V_11;
		V_5 = L_16;
		// longNode = longNodeE;
		double L_17 = V_12;
		V_6 = L_17;
		// longPeri = longPeriE;
		double L_18 = V_13;
		V_7 = L_18;
		// meanDist = meanDistE;
		double L_19 = V_14;
		V_8 = L_19;
		// eccentricity = eccenctricityE;
		double L_20 = V_15;
		V_9 = L_20;
		// meanLong = meanLongE;
		double L_21 = V_16;
		V_10 = L_21;
		// break;
		goto IL_091d;
	}

IL_01d0:
	{
		// inclination = (7.00487f - 23.51f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_22 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((7.0048699378967285), ((double)(((double)il2cpp_codegen_multiply((23.510000228881836), L_22))/(3600.0))))), (0.01745329238474369)));
		// longNode = (48.33167f - 446.30f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_23 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((48.331668853759766), ((double)(((double)il2cpp_codegen_multiply((446.29998779296875), L_23))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (77.45645f + 573.57f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_24 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((77.456451416015625), ((double)(((double)il2cpp_codegen_multiply((573.57000732421875), L_24))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 0.38709893f + 0.00000066f * cJ2000;
		double L_25 = V_4;
		V_8 = ((double)il2cpp_codegen_add((0.38709893822669983), ((double)il2cpp_codegen_multiply((6.6000001197608071E-07), L_25))));
		// eccentricity = 0.20563069f + 0.00002527f * cJ2000;
		double L_26 = V_4;
		V_9 = ((double)il2cpp_codegen_add((0.20563068985939026), ((double)il2cpp_codegen_multiply((2.5269999241572805E-05), L_26))));
		// meanLong = Mod2Pi ((252.25084f + 538101628.29f * cJ2000 / 3600.0f) * Mathf.Deg2Rad);
		double L_27 = V_4;
		double L_28;
		L_28 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((252.25083923339844), ((double)(((double)il2cpp_codegen_multiply((538101632.0), L_27))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_28;
		// break;
		goto IL_091d;
	}

IL_02ba:
	{
		// inclination = (3.39471f -   2.86f * cJ2000 / 3600.0f) * Mathf.Deg2Rad;
		double L_29 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((3.3947100639343262), ((double)(((double)il2cpp_codegen_multiply((2.8599998950958252), L_29))/(3600.0))))), (0.01745329238474369)));
		// longNode = (76.68069f - 996.89f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_30 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((76.680686950683594), ((double)(((double)il2cpp_codegen_multiply((996.8900146484375), L_30))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (131.53298f - 108.80f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_31 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((131.53297424316406), ((double)(((double)il2cpp_codegen_multiply((108.80000305175781), L_31))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 0.72333199f + 0.00000092f * cJ2000;
		double L_32 = V_4;
		V_8 = ((double)il2cpp_codegen_add((0.7233319878578186), ((double)il2cpp_codegen_multiply((9.1999999085601303E-07), L_32))));
		// eccentricity = 0.00677323f - 0.00004938f * cJ2000;
		double L_33 = V_4;
		V_9 = ((double)il2cpp_codegen_subtract((0.0067732301540672779), ((double)il2cpp_codegen_multiply((4.937999983667396E-05), L_33))));
		// meanLong = Mod2Pi ((181.97973f + 210664136.06f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_34 = V_4;
		double L_35;
		L_35 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((181.979736328125), ((double)(((double)il2cpp_codegen_multiply((210664144.0), L_34))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_35;
		// break;
		goto IL_091d;
	}

IL_03a4:
	{
		// inclination = (1.85061f - 25.47f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_36 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.8506100177764893), ((double)(((double)il2cpp_codegen_multiply((25.469999313354492), L_36))/(3600.0))))), (0.01745329238474369)));
		// longNode = (49.57854f - 1020.19f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_37 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((49.578540802001953), ((double)(((double)il2cpp_codegen_multiply((1020.1900024414062), L_37))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (336.04084f + 1560.78f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_38 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((336.04083251953125), ((double)(((double)il2cpp_codegen_multiply((1560.780029296875), L_38))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 1.52366231f - 0.00007221f * cJ2000;
		double L_39 = V_4;
		V_8 = ((double)il2cpp_codegen_subtract((1.5236623287200928), ((double)il2cpp_codegen_multiply((7.2210001235362142E-05), L_39))));
		// eccentricity = 0.09341233f + 0.00011902f * cJ2000;
		double L_40 = V_4;
		V_9 = ((double)il2cpp_codegen_add((0.093412332236766815), ((double)il2cpp_codegen_multiply((0.00011901999823749065), L_40))));
		// meanLong = Mod2Pi ((355.45332f + 68905103.78f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_41 = V_4;
		double L_42;
		L_42 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((355.45330810546875), ((double)(((double)il2cpp_codegen_multiply((68905104.0), L_41))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_42;
		// break;
		goto IL_091d;
	}

IL_048e:
	{
		// inclination = (1.30530f - 4.15f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_43 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.3052999973297119), ((double)(((double)il2cpp_codegen_multiply((4.1500000953674316), L_43))/(3600.0))))), (0.01745329238474369)));
		// longNode = (100.55615f + 1217.17f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_44 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((100.55615234375), ((double)(((double)il2cpp_codegen_multiply((1217.1700439453125), L_44))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (14.75385f +  839.93f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_45 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((14.753849983215332), ((double)(((double)il2cpp_codegen_multiply((839.92999267578125), L_45))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 5.20336301f + 0.00060737f * cJ2000;
		double L_46 = V_4;
		V_8 = ((double)il2cpp_codegen_add((5.2033629417419434), ((double)il2cpp_codegen_multiply((0.00060736999148502946), L_46))));
		// eccentricity = 0.04839266f - 0.00012880f * cJ2000;
		double L_47 = V_4;
		V_9 = ((double)il2cpp_codegen_subtract((0.048392660915851593), ((double)il2cpp_codegen_multiply((0.00012880000576842576), L_47))));
		// meanLong = Mod2Pi ((34.40438f + 10925078.35f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_48 = V_4;
		double L_49;
		L_49 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((34.404380798339844), ((double)(((double)il2cpp_codegen_multiply((10925078.0), L_48))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_49;
		// break;
		goto IL_091d;
	}

IL_0578:
	{
		// inclination = (2.48446f + 6.11f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_50 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((2.4844601154327393), ((double)(((double)il2cpp_codegen_multiply((6.1100001335144043), L_50))/(3600.0))))), (0.01745329238474369)));
		// longNode = (113.71504f - 1591.05f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_51 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((113.71504211425781), ((double)(((double)il2cpp_codegen_multiply((1591.050048828125), L_51))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (92.43194f - 1948.89f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_52 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((92.431938171386719), ((double)(((double)il2cpp_codegen_multiply((1948.8900146484375), L_52))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 9.53707032f - 0.00301530f * cJ2000;
		double L_53 = V_4;
		V_8 = ((double)il2cpp_codegen_subtract((9.5370702743530273), ((double)il2cpp_codegen_multiply((0.0030153000261634588), L_53))));
		// eccentricity = 0.05415060f - 0.00036762f * cJ2000;
		double L_54 = V_4;
		V_9 = ((double)il2cpp_codegen_subtract((0.054150599986314774), ((double)il2cpp_codegen_multiply((0.00036761999945156276), L_54))));
		// meanLong = Mod2Pi ((49.94432f + 4401052.95f * cJ2000/3600f) * Mathf.Deg2Rad);
		double L_55 = V_4;
		double L_56;
		L_56 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((49.944320678710938), ((double)(((double)il2cpp_codegen_multiply((4401053.0), L_55))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_56;
		// break;
		goto IL_091d;
	}

IL_0662:
	{
		// inclination = (0.76986f - 2.09f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_57 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((0.76986002922058105), ((double)(((double)il2cpp_codegen_multiply((2.0899999141693115), L_57))/(3600.0))))), (0.01745329238474369)));
		// longNode = (74.22988f - 1681.40f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_58 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((74.229881286621094), ((double)(((double)il2cpp_codegen_multiply((1681.4000244140625), L_58))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (170.96424f  + 1312.56f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_59 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((170.9642333984375), ((double)(((double)il2cpp_codegen_multiply((1312.56005859375), L_59))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 19.19126393f + 0.00152025f * cJ2000;
		double L_60 = V_4;
		V_8 = ((double)il2cpp_codegen_add((19.191263198852539), ((double)il2cpp_codegen_multiply((0.001520249992609024), L_60))));
		// eccentricity = 0.04716771f - 0.00019150f * cJ2000;
		double L_61 = V_4;
		V_9 = ((double)il2cpp_codegen_subtract((0.047167710959911346), ((double)il2cpp_codegen_multiply((0.00019150000298395753), L_61))));
		// meanLong = Mod2Pi ((313.23218f + 1542547.79f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_62 = V_4;
		double L_63;
		L_63 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((313.232177734375), ((double)(((double)il2cpp_codegen_multiply((1542547.75), L_62))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_63;
		// break;
		goto IL_091d;
	}

IL_074c:
	{
		// inclination = (1.76917f - 3.64f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_64 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.7691700458526611), ((double)(((double)il2cpp_codegen_multiply((3.6400001049041748), L_64))/(3600.0))))), (0.01745329238474369)));
		// longNode = (131.72169f - 151.25f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_65 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((131.72169494628906), ((double)(((double)il2cpp_codegen_multiply((151.25), L_65))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (44.97135f - 844.43f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_66 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((44.971351623535156), ((double)(((double)il2cpp_codegen_multiply((844.42999267578125), L_66))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 30.06896348f - 0.00125196f * cJ2000;
		double L_67 = V_4;
		V_8 = ((double)il2cpp_codegen_subtract((30.068964004516602), ((double)il2cpp_codegen_multiply((0.0012519600568339229), L_67))));
		// eccentricity = 0.00858587f + 0.00002510f * cJ2000;
		double L_68 = V_4;
		V_9 = ((double)il2cpp_codegen_add((0.0085858702659606934), ((double)il2cpp_codegen_multiply((2.5100000129896216E-05), L_68))));
		// meanLong = Mod2Pi ((304.88003f + 786449.21f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_69 = V_4;
		double L_70;
		L_70 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((304.88003540039062), ((double)(((double)il2cpp_codegen_multiply((786449.1875), L_69))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_70;
		// break;
		goto IL_091d;
	}

IL_0836:
	{
		// inclination = (17.14175f + 11.07f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_71 = V_4;
		V_5 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((17.141750335693359), ((double)(((double)il2cpp_codegen_multiply((11.069999694824219), L_71))/(3600.0))))), (0.01745329238474369)));
		// longNode = (110.30347f - 37.33f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_72 = V_4;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((110.303466796875), ((double)(((double)il2cpp_codegen_multiply((37.330001831054688), L_72))/(3600.0))))), (0.01745329238474369)));
		// longPeri = (224.06676f - 132.25f * cJ2000 / 3600f) * Mathf.Deg2Rad;
		double L_73 = V_4;
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((224.06675720214844), ((double)(((double)il2cpp_codegen_multiply((132.25), L_73))/(3600.0))))), (0.01745329238474369)));
		// meanDist = 39.48168677f - 0.00076912f * cJ2000;
		double L_74 = V_4;
		V_8 = ((double)il2cpp_codegen_subtract((39.481685638427734), ((double)il2cpp_codegen_multiply((0.00076912000076845288), L_74))));
		// eccentricity = 0.24880766f + 0.00006465f * cJ2000;
		double L_75 = V_4;
		V_9 = ((double)il2cpp_codegen_add((0.24880765378475189), ((double)il2cpp_codegen_multiply((6.464999751187861E-05), L_75))));
		// meanLong = Mod2Pi ((238.92881f + 522747.90f * cJ2000 / 3600f) * Mathf.Deg2Rad);
		double L_76 = V_4;
		double L_77;
		L_77 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add((238.92880249023438), ((double)(((double)il2cpp_codegen_multiply((522747.90625), L_76))/(3600.0))))), (0.01745329238474369))), NULL);
		V_10 = L_77;
		// break;
		goto IL_091d;
	}

IL_091d:
	{
		// double me = Mod2Pi(meanLongE - longPeriE);
		double L_78 = V_16;
		double L_79 = V_13;
		double L_80;
		L_80 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_subtract(L_78, L_79)), NULL);
		V_17 = L_80;
		// double ve = TrueAnomaly (me, eccenctricityE);
		double L_81 = V_17;
		double L_82 = V_15;
		double L_83;
		L_83 = CelestialCoordinates_TrueAnomaly_mB0E6392B8906DA77141DC4250F83231D72399990(L_81, L_82, NULL);
		V_18 = L_83;
		// double pEarthOrbit = meanDistE*(1-eccenctricityE*eccenctricityE)/(1 + eccenctricityE*Math.Cos(ve));
		double L_84 = V_14;
		double L_85 = V_15;
		double L_86 = V_15;
		double L_87 = V_15;
		double L_88 = V_18;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_89;
		L_89 = cos(L_88);
		V_19 = ((double)(((double)il2cpp_codegen_multiply(L_84, ((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_85, L_86))))))/((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_87, L_89))))));
		// double xe = pEarthOrbit * Math.Cos(ve + longPeriE);
		double L_90 = V_19;
		double L_91 = V_18;
		double L_92 = V_13;
		double L_93;
		L_93 = cos(((double)il2cpp_codegen_add(L_91, L_92)));
		V_20 = ((double)il2cpp_codegen_multiply(L_90, L_93));
		// double ye = pEarthOrbit * Math.Sin(ve + longPeriE);
		double L_94 = V_19;
		double L_95 = V_18;
		double L_96 = V_13;
		double L_97;
		L_97 = sin(((double)il2cpp_codegen_add(L_95, L_96)));
		V_21 = ((double)il2cpp_codegen_multiply(L_94, L_97));
		// double ze = 0.0f;
		V_22 = (0.0);
		// double mp = Mod2Pi(meanLong - longPeri);
		double L_98 = V_10;
		double L_99 = V_7;
		double L_100;
		L_100 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(((double)il2cpp_codegen_subtract(L_98, L_99)), NULL);
		V_23 = L_100;
		// double vp = TrueAnomaly(mp, eccentricity);
		double L_101 = V_23;
		double L_102 = V_9;
		double L_103;
		L_103 = CelestialCoordinates_TrueAnomaly_mB0E6392B8906DA77141DC4250F83231D72399990(L_101, L_102, NULL);
		V_24 = L_103;
		// double pPlanetOrbit = meanDist * (1 - eccentricity * eccentricity) / (1 + eccentricity * Math.Cos (vp));
		double L_104 = V_8;
		double L_105 = V_9;
		double L_106 = V_9;
		double L_107 = V_9;
		double L_108 = V_24;
		double L_109;
		L_109 = cos(L_108);
		V_25 = ((double)(((double)il2cpp_codegen_multiply(L_104, ((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_105, L_106))))))/((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_107, L_109))))));
		// double xh = pPlanetOrbit * (Math.Cos(longNode) * Math.Cos(vp + longPeri - longNode) - Math.Sin(longNode) * Math.Sin(vp + longPeri - longNode) * Math.Cos(inclination));
		double L_110 = V_25;
		double L_111 = V_6;
		double L_112;
		L_112 = cos(L_111);
		double L_113 = V_24;
		double L_114 = V_7;
		double L_115 = V_6;
		double L_116;
		L_116 = cos(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_113, L_114)), L_115)));
		double L_117 = V_6;
		double L_118;
		L_118 = sin(L_117);
		double L_119 = V_24;
		double L_120 = V_7;
		double L_121 = V_6;
		double L_122;
		L_122 = sin(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_119, L_120)), L_121)));
		double L_123 = V_5;
		double L_124;
		L_124 = cos(L_123);
		V_26 = ((double)il2cpp_codegen_multiply(L_110, ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_112, L_116)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_118, L_122)), L_124))))));
		// double yh = pPlanetOrbit * (Math.Sin(longNode) * Math.Cos(vp + longPeri - longNode) + Math.Cos(longNode) * Math.Sin(vp + longPeri - longNode) * Math.Cos(inclination));
		double L_125 = V_25;
		double L_126 = V_6;
		double L_127;
		L_127 = sin(L_126);
		double L_128 = V_24;
		double L_129 = V_7;
		double L_130 = V_6;
		double L_131;
		L_131 = cos(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_128, L_129)), L_130)));
		double L_132 = V_6;
		double L_133;
		L_133 = cos(L_132);
		double L_134 = V_24;
		double L_135 = V_7;
		double L_136 = V_6;
		double L_137;
		L_137 = sin(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_134, L_135)), L_136)));
		double L_138 = V_5;
		double L_139;
		L_139 = cos(L_138);
		V_27 = ((double)il2cpp_codegen_multiply(L_125, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_127, L_131)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_133, L_137)), L_139))))));
		// double zh = pPlanetOrbit * (Math.Sin (vp + longPeri - longNode) * Math.Sin (inclination));
		double L_140 = V_25;
		double L_141 = V_24;
		double L_142 = V_7;
		double L_143 = V_6;
		double L_144;
		L_144 = sin(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_141, L_142)), L_143)));
		double L_145 = V_5;
		double L_146;
		L_146 = sin(L_145);
		V_28 = ((double)il2cpp_codegen_multiply(L_140, ((double)il2cpp_codegen_multiply(L_144, L_146))));
		// if (_name == PlanetName.SUN) {
		int32_t L_147 = ____name2;
		V_45 = (bool)((((int32_t)L_147) == ((int32_t)0))? 1 : 0);
		bool L_148 = V_45;
		if (!L_148)
		{
			goto IL_0a7d;
		}
	}
	{
		// xh = 0f;
		V_26 = (0.0);
		// yh = 0f;
		V_27 = (0.0);
		// zh = 0f;
		V_28 = (0.0);
	}

IL_0a7d:
	{
		// double xg = xh - xe;
		double L_149 = V_26;
		double L_150 = V_20;
		V_29 = ((double)il2cpp_codegen_subtract(L_149, L_150));
		// double yg = yh - ye;
		double L_151 = V_27;
		double L_152 = V_21;
		V_30 = ((double)il2cpp_codegen_subtract(L_151, L_152));
		// double zg = zh - ze;
		double L_153 = V_28;
		double L_154 = V_22;
		V_31 = ((double)il2cpp_codegen_subtract(L_153, L_154));
		// double ecl = 23.439281f*Mathf.Deg2Rad;
		V_32 = (0.40909263491630554);
		// double xeq = xg;
		double L_155 = V_29;
		V_33 = L_155;
		// double yeq = yg * Math.Cos(ecl) - zg * Math.Sin(ecl);
		double L_156 = V_30;
		double L_157 = V_32;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_158;
		L_158 = cos(L_157);
		double L_159 = V_31;
		double L_160 = V_32;
		double L_161;
		L_161 = sin(L_160);
		V_34 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_156, L_158)), ((double)il2cpp_codegen_multiply(L_159, L_161))));
		// double zeq = yg * Math.Sin(ecl) + zg * Math.Cos(ecl);
		double L_162 = V_30;
		double L_163 = V_32;
		double L_164;
		L_164 = sin(L_163);
		double L_165 = V_31;
		double L_166 = V_32;
		double L_167;
		L_167 = cos(L_166);
		V_35 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_162, L_164)), ((double)il2cpp_codegen_multiply(L_165, L_167))));
		// double ra = Mod2Pi(Math.Atan2(yeq, xeq))*Mathf.Rad2Deg;
		double L_168 = V_34;
		double L_169 = V_33;
		double L_170;
		L_170 = atan2(L_168, L_169);
		double L_171;
		L_171 = CelestialCoordinates_Mod2Pi_m93A9944B7531773C396F2049A0E0A37779380F0E(L_170, NULL);
		V_36 = ((double)il2cpp_codegen_multiply(L_171, (57.295780181884766)));
		// double dec = Math.Atan(zeq/Math.Sqrt(xeq * xeq + yeq * yeq))*Mathf.Rad2Deg;
		double L_172 = V_35;
		double L_173 = V_33;
		double L_174 = V_33;
		double L_175 = V_34;
		double L_176 = V_34;
		double L_177;
		L_177 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_173, L_174)), ((double)il2cpp_codegen_multiply(L_175, L_176)))));
		double L_178;
		L_178 = atan(((double)(L_172/L_177)));
		V_37 = ((double)il2cpp_codegen_multiply(L_178, (57.295780181884766)));
		// double distance = Math.Sqrt(xeq * xeq + yeq * yeq + zeq * zeq);
		double L_179 = V_33;
		double L_180 = V_33;
		double L_181 = V_34;
		double L_182 = V_34;
		double L_183 = V_35;
		double L_184 = V_35;
		double L_185;
		L_185 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_179, L_180)), ((double)il2cpp_codegen_multiply(L_181, L_182)))), ((double)il2cpp_codegen_multiply(L_183, L_184)))));
		V_38 = L_185;
		// double MST = 280.46061837f + 360.98564736629f * j2000 + 0.000387933f * cJ2000 * cJ2000 - cJ2000 * cJ2000 * cJ2000 / 38710000f + _longitude;
		double L_186 = V_3;
		double L_187 = V_4;
		double L_188 = V_4;
		double L_189 = V_4;
		double L_190 = V_4;
		double L_191 = V_4;
		double L_192 = ____longitude0;
		V_39 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add((280.46063232421875), ((double)il2cpp_codegen_multiply((360.98565673828125), L_186)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.00038793298881500959), L_187)), L_188)))), ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_189, L_190)), L_191))/(38710000.0))))), L_192));
		// if (MST > 0.0f){
		double L_193 = V_39;
		V_46 = (bool)((((double)L_193) > ((double)(0.0)))? 1 : 0);
		bool L_194 = V_46;
		if (!L_194)
		{
			goto IL_0b9b;
		}
	}
	{
		goto IL_0b85;
	}

IL_0b77:
	{
		// MST -= 360.0f;
		double L_195 = V_39;
		V_39 = ((double)il2cpp_codegen_subtract(L_195, (360.0)));
	}

IL_0b85:
	{
		// while (MST > 360.0f)
		double L_196 = V_39;
		V_47 = (bool)((((double)L_196) > ((double)(360.0)))? 1 : 0);
		bool L_197 = V_47;
		if (L_197)
		{
			goto IL_0b77;
		}
	}
	{
		goto IL_0bc0;
	}

IL_0b9b:
	{
		goto IL_0bac;
	}

IL_0b9e:
	{
		// MST = MST + 360.0;
		double L_198 = V_39;
		V_39 = ((double)il2cpp_codegen_add(L_198, (360.0)));
	}

IL_0bac:
	{
		// while (MST < 0.0f)
		double L_199 = V_39;
		V_48 = (bool)((((double)L_199) < ((double)(0.0)))? 1 : 0);
		bool L_200 = V_48;
		if (L_200)
		{
			goto IL_0b9e;
		}
	}
	{
	}

IL_0bc0:
	{
		// double HA = MST - ra;
		double L_201 = V_39;
		double L_202 = V_36;
		V_40 = ((double)il2cpp_codegen_subtract(L_201, L_202));
		// if (HA < 0) HA = HA + 360;
		double L_203 = V_40;
		V_49 = (bool)((((double)L_203) < ((double)(0.0)))? 1 : 0);
		bool L_204 = V_49;
		if (!L_204)
		{
			goto IL_0be8;
		}
	}
	{
		// if (HA < 0) HA = HA + 360;
		double L_205 = V_40;
		V_40 = ((double)il2cpp_codegen_add(L_205, (360.0)));
	}

IL_0be8:
	{
		// HA *= Mathf.Deg2Rad;
		double L_206 = V_40;
		V_40 = ((double)il2cpp_codegen_multiply(L_206, (0.01745329238474369)));
		// dec *= Mathf.Deg2Rad;
		double L_207 = V_37;
		V_37 = ((double)il2cpp_codegen_multiply(L_207, (0.01745329238474369)));
		// double altitude = Math.Asin(Math.Sin(dec) * Math.Sin(_latitude) + Math.Cos(dec) * Math.Cos(_latitude) * Math.Cos(HA));
		double L_208 = V_37;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_209;
		L_209 = sin(L_208);
		double L_210 = ____latitude1;
		double L_211;
		L_211 = sin(L_210);
		double L_212 = V_37;
		double L_213;
		L_213 = cos(L_212);
		double L_214 = ____latitude1;
		double L_215;
		L_215 = cos(L_214);
		double L_216 = V_40;
		double L_217;
		L_217 = cos(L_216);
		double L_218;
		L_218 = asin(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_209, L_211)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_213, L_215)), L_217)))));
		V_41 = L_218;
		// double azimuth = Math.Acos((Math.Sin(dec) - Math.Sin(altitude) * Math.Sin(_latitude)) / (Math.Cos(altitude)*Math.Cos(_latitude)));
		double L_219 = V_37;
		double L_220;
		L_220 = sin(L_219);
		double L_221 = V_41;
		double L_222;
		L_222 = sin(L_221);
		double L_223 = ____latitude1;
		double L_224;
		L_224 = sin(L_223);
		double L_225 = V_41;
		double L_226;
		L_226 = cos(L_225);
		double L_227 = ____latitude1;
		double L_228;
		L_228 = cos(L_227);
		double L_229;
		L_229 = acos(((double)(((double)il2cpp_codegen_subtract(L_220, ((double)il2cpp_codegen_multiply(L_222, L_224))))/((double)il2cpp_codegen_multiply(L_226, L_228)))));
		V_42 = L_229;
		// altitude *= Mathf.Rad2Deg;
		double L_230 = V_41;
		V_41 = ((double)il2cpp_codegen_multiply(L_230, (57.295780181884766)));
		// azimuth *= Mathf.Rad2Deg;
		double L_231 = V_42;
		V_42 = ((double)il2cpp_codegen_multiply(L_231, (57.295780181884766)));
		// if (Math.Sin (HA) > 0f)
		double L_232 = V_40;
		double L_233;
		L_233 = sin(L_232);
		V_50 = (bool)((((double)L_233) > ((double)(0.0)))? 1 : 0);
		bool L_234 = V_50;
		if (!L_234)
		{
			goto IL_0c9e;
		}
	}
	{
		// azimuth = 360f - azimuth;
		double L_235 = V_42;
		V_42 = ((double)il2cpp_codegen_subtract((360.0), L_235));
	}

IL_0c9e:
	{
		// coordinates.x = (float) altitude;
		double L_236 = V_41;
		(&V_0)->___x_2 = ((float)L_236);
		// coordinates.y = (float) azimuth;
		double L_237 = V_42;
		(&V_0)->___y_3 = ((float)L_237);
		// coordinates.z = (float) distance;
		double L_238 = V_38;
		(&V_0)->___z_4 = ((float)L_238);
		// return coordinates;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239 = V_0;
		V_51 = L_239;
		goto IL_0cc1;
	}

IL_0cc1:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_240 = V_51;
		return L_240;
	}
}
// UnityEngine.Vector2 CelestialCoordinates::CalculateHorizontalCoordinatesStar(System.Double,System.Double,System.Double,System.Double,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CelestialCoordinates_CalculateHorizontalCoordinatesStar_mA7189BE08BF334512D5D52F717AD3CBAF17A31FF (double ____longitude0, double ____latitude1, double ____ra2, double ____dec3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____time4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		// _latitude *= Mathf.Deg2Rad;
		double L_0 = ____latitude1;
		____latitude1 = ((double)il2cpp_codegen_multiply(L_0, (0.01745329238474369)));
		// _ra *= 15; //RA is usually in hours (at least in HYG) so convert it to degrees
		double L_1 = ____ra2;
		____ra2 = ((double)il2cpp_codegen_multiply(L_1, (15.0)));
		// Vector2 coordinates = new Vector2 (0, 0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.0f), (0.0f), NULL);
		// DateTime epoch = new DateTime(2000, 1, 1, 12, 0, 0);
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&V_1), ((int32_t)2000), 1, 1, ((int32_t)12), 0, 0, NULL);
		// TimeSpan j2000TS = _time - epoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ____time4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_2, L_3, NULL);
		V_2 = L_4;
		// double j2000 = j2000TS.TotalDays;
		double L_5;
		L_5 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_2), NULL);
		V_3 = L_5;
		// double cJ2000 = j2000 / 36525.0f;
		double L_6 = V_3;
		V_4 = ((double)(L_6/(36525.0)));
		// double MST = 280.46061837f + 360.98564736629f * j2000 + 0.000387933f * cJ2000 * cJ2000 - cJ2000 * cJ2000 * cJ2000 / 38710000f + _longitude;
		double L_7 = V_3;
		double L_8 = V_4;
		double L_9 = V_4;
		double L_10 = V_4;
		double L_11 = V_4;
		double L_12 = V_4;
		double L_13 = ____longitude0;
		V_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add((280.46063232421875), ((double)il2cpp_codegen_multiply((360.98565673828125), L_7)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.00038793298881500959), L_8)), L_9)))), ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_10, L_11)), L_12))/(38710000.0))))), L_13));
		// if (MST > 0.0f){
		double L_14 = V_5;
		V_9 = (bool)((((double)L_14) > ((double)(0.0)))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_00bc;
	}

IL_00ae:
	{
		// MST -= 360.0f;
		double L_16 = V_5;
		V_5 = ((double)il2cpp_codegen_subtract(L_16, (360.0)));
	}

IL_00bc:
	{
		// while (MST > 360.0f)
		double L_17 = V_5;
		V_10 = (bool)((((double)L_17) > ((double)(360.0)))? 1 : 0);
		bool L_18 = V_10;
		if (L_18)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_00f7;
	}

IL_00d2:
	{
		goto IL_00e3;
	}

IL_00d5:
	{
		// MST = MST + 360.0;
		double L_19 = V_5;
		V_5 = ((double)il2cpp_codegen_add(L_19, (360.0)));
	}

IL_00e3:
	{
		// while (MST < 0.0f)
		double L_20 = V_5;
		V_11 = (bool)((((double)L_20) < ((double)(0.0)))? 1 : 0);
		bool L_21 = V_11;
		if (L_21)
		{
			goto IL_00d5;
		}
	}
	{
	}

IL_00f7:
	{
		// double HA = MST - _ra;
		double L_22 = V_5;
		double L_23 = ____ra2;
		V_6 = ((double)il2cpp_codegen_subtract(L_22, L_23));
		// if (HA < 0) HA = HA + 360;
		double L_24 = V_6;
		V_12 = (bool)((((double)L_24) < ((double)(0.0)))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_011e;
		}
	}
	{
		// if (HA < 0) HA = HA + 360;
		double L_26 = V_6;
		V_6 = ((double)il2cpp_codegen_add(L_26, (360.0)));
	}

IL_011e:
	{
		// HA *= Mathf.Deg2Rad;
		double L_27 = V_6;
		V_6 = ((double)il2cpp_codegen_multiply(L_27, (0.01745329238474369)));
		// _dec *= Mathf.Deg2Rad;
		double L_28 = ____dec3;
		____dec3 = ((double)il2cpp_codegen_multiply(L_28, (0.01745329238474369)));
		// double altitude = Math.Asin(Math.Sin(_dec) * Math.Sin(_latitude) + Math.Cos(_dec) * Math.Cos(_latitude) * Math.Cos(HA));
		double L_29 = ____dec3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = sin(L_29);
		double L_31 = ____latitude1;
		double L_32;
		L_32 = sin(L_31);
		double L_33 = ____dec3;
		double L_34;
		L_34 = cos(L_33);
		double L_35 = ____latitude1;
		double L_36;
		L_36 = cos(L_35);
		double L_37 = V_6;
		double L_38;
		L_38 = cos(L_37);
		double L_39;
		L_39 = asin(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_30, L_32)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_34, L_36)), L_38)))));
		V_7 = L_39;
		// double azimuth = Math.Acos((Math.Sin(_dec) - Math.Sin(altitude) * Math.Sin(_latitude)) / (Math.Cos(altitude)*Math.Cos(_latitude)));
		double L_40 = ____dec3;
		double L_41;
		L_41 = sin(L_40);
		double L_42 = V_7;
		double L_43;
		L_43 = sin(L_42);
		double L_44 = ____latitude1;
		double L_45;
		L_45 = sin(L_44);
		double L_46 = V_7;
		double L_47;
		L_47 = cos(L_46);
		double L_48 = ____latitude1;
		double L_49;
		L_49 = cos(L_48);
		double L_50;
		L_50 = acos(((double)(((double)il2cpp_codegen_subtract(L_41, ((double)il2cpp_codegen_multiply(L_43, L_45))))/((double)il2cpp_codegen_multiply(L_47, L_49)))));
		V_8 = L_50;
		// altitude *= Mathf.Rad2Deg;
		double L_51 = V_7;
		V_7 = ((double)il2cpp_codegen_multiply(L_51, (57.295780181884766)));
		// azimuth *= Mathf.Rad2Deg;
		double L_52 = V_8;
		V_8 = ((double)il2cpp_codegen_multiply(L_52, (57.295780181884766)));
		// if (Math.Sin (HA) > 0f)
		double L_53 = V_6;
		double L_54;
		L_54 = sin(L_53);
		V_13 = (bool)((((double)L_54) > ((double)(0.0)))? 1 : 0);
		bool L_55 = V_13;
		if (!L_55)
		{
			goto IL_01d0;
		}
	}
	{
		// azimuth = 360f - azimuth;
		double L_56 = V_8;
		V_8 = ((double)il2cpp_codegen_subtract((360.0), L_56));
	}

IL_01d0:
	{
		// coordinates.x = (float) altitude;
		double L_57 = V_7;
		(&V_0)->___x_0 = ((float)L_57);
		// coordinates.y = (float) azimuth;
		double L_58 = V_8;
		(&V_0)->___y_1 = ((float)L_58);
		// return coordinates;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_0;
		V_14 = L_59;
		goto IL_01e9;
	}

IL_01e9:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_14;
		return L_60;
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
// Conversion methods for marshalling of: PlanetObject
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_pinvoke(const PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2& unmarshaled, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'PlanetObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_pinvoke_back(const PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_pinvoke& marshaled, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'PlanetObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlanetObject
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_pinvoke_cleanup(PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlanetObject
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_com(const PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2& unmarshaled, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'PlanetObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_com_back(const PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_com& marshaled, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'PlanetObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlanetObject
IL2CPP_EXTERN_C void PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshal_com_cleanup(PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: StarObject
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_pinvoke(const StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19& unmarshaled, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'StarObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_pinvoke_back(const StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_pinvoke& marshaled, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'StarObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: StarObject
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_pinvoke_cleanup(StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: StarObject
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_com(const StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19& unmarshaled, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'StarObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_com_back(const StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_com& marshaled, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19& unmarshaled)
{
	Exception_t* ___gameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'StarObject': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: StarObject
IL2CPP_EXTERN_C void StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshal_com_cleanup(StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19_marshaled_com& marshaled)
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
// System.Void CelestialManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_Start_mC5093F1213413123702CA972EAAF95A25BBFF398 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC84494ED7EA6A11A382EDCD293D61E93D05123);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// starsParent = GameObject.Find("Stars");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral14CE35AEE7E6C85576616A5851117B295A2343C1, NULL);
		__this->___starsParent_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___starsParent_26), (void*)L_0);
		// starsDatabase = Resources.Load<TextAsset>("hyg_small") as TextAsset;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1;
		L_1 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteral2BC84494ED7EA6A11A382EDCD293D61E93D05123, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		__this->___starsDatabase_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___starsDatabase_25), (void*)L_1);
		// currentDate = DateTime.UtcNow.AddDays(numberOfDaysFromNow);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_2;
		int32_t L_3 = __this->___numberOfDaysFromNow_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_0), ((double)L_3), NULL);
		__this->___currentDate_24 = L_4;
		// SetupPlanets();
		CelestialManager_SetupPlanets_m34CC4D5ED16C9AEF2DCE1C9F343D5178EA32A724(__this, NULL);
		// SetupStars();
		CelestialManager_SetupStars_mA56BF61D6DDDDD946143544E7313C746817F2D6D(__this, NULL);
		// }
		return;
	}
}
// System.Void CelestialManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_Update_m3CC5D58E3783369C6A2E3BA490CBD6E87E5DB658 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 V_3;
	memset((&V_3), 0, sizeof(V_3));
	PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// DateTime pastDate = currentDate;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___currentDate_24;
		V_0 = L_0;
		// currentDate = currentDate.AddHours(timeSpeedHours * Time.deltaTime);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&__this->___currentDate_24);
		float L_2 = __this->___timeSpeedHours_7;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_1, ((double)((float)il2cpp_codegen_multiply(L_2, L_3))), NULL);
		__this->___currentDate_24 = L_4;
		// dateText.text = currentDate.AddHours(timeGMTOffset).ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___dateText_10;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = (&__this->___currentDate_24);
		int32_t L_7 = __this->___timeGMTOffset_8;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = DateTime_AddHours_m99C41C078F2F480BF9965F8A4BAB8C8B75C39C02(L_6, ((double)L_7), NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_2), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_9);
		// foreach(PlanetObject planet in planets){
		List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* L_10 = __this->___planets_22;
		NullCheck(L_10);
		Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14 L_11;
		L_11 = List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C(L_10, List_1_GetEnumerator_m3361205C840874A2AB0119D827272C0DC699E18C_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ff:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF((&V_3), Enumerator_Dispose_mB76E95AE8EEB43B26E74590C0F9F16F597E566BF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_005e_1:
			{
				// foreach(PlanetObject planet in planets){
				PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_12;
				L_12 = Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_inline((&V_3), Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_RuntimeMethod_var);
				V_4 = L_12;
				// if(planet.name == PlanetName.MOON){
				PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_13 = V_4;
				int32_t L_14 = L_13.___name_1;
				V_5 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)9)))? 1 : 0);
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_00b2_1;
				}
			}
			{
				// Vector3 moonAltAz = CelestialCoordinates.CalculateHorizontalCoordinatesMoon(longitude, latitude, currentDate);
				float L_16 = __this->___longitude_5;
				float L_17 = __this->___latitude_4;
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_18 = __this->___currentDate_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = CelestialCoordinates_CalculateHorizontalCoordinatesMoon_m2C8DB69AFC1EFEC7915ECF456D3D2FE15F562F1D(((double)L_16), ((double)L_17), L_18, NULL);
				V_6 = L_19;
				// planet.gameObject.transform.position = GetPlanetsGamePositionFromAltAz(moonAltAz);
				PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_20 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20.___gameObject_0;
				NullCheck(L_21);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
				L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = CelestialManager_GetPlanetsGamePositionFromAltAz_m52B495F553295E122ACEC4BA6E8E0F2571302945(__this, L_23, NULL);
				NullCheck(L_22);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_24, NULL);
				goto IL_00f0_1;
			}

IL_00b2_1:
			{
				// Vector3 coAltAz = CelestialCoordinates.CalculateHorizontalCoordinatesPlanets(longitude, latitude, planet.name, currentDate);
				float L_25 = __this->___longitude_5;
				float L_26 = __this->___latitude_4;
				PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_27 = V_4;
				int32_t L_28 = L_27.___name_1;
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = __this->___currentDate_24;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = CelestialCoordinates_CalculateHorizontalCoordinatesPlanets_mDF70000AC3B4C75ACEFCA60C0BD6A60B1A178592(((double)L_25), ((double)L_26), L_28, L_29, NULL);
				V_7 = L_30;
				// planet.gameObject.transform.position = GetPlanetsGamePositionFromAltAz(coAltAz);
				PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_31 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = L_31.___gameObject_0;
				NullCheck(L_32);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
				L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = CelestialManager_GetPlanetsGamePositionFromAltAz_m52B495F553295E122ACEC4BA6E8E0F2571302945(__this, L_34, NULL);
				NullCheck(L_33);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_35, NULL);
			}

IL_00f0_1:
			{
			}

IL_00f1_1:
			{
				// foreach(PlanetObject planet in planets){
				bool L_36;
				L_36 = Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E((&V_3), Enumerator_MoveNext_mC8A0A9DA85F70050142BF593B8E8531D70C1BB4E_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_010e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010e:
	{
		// float ellapsedH = (float)(currentDate - pastDate).TotalHours;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37 = __this->___currentDate_24;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_39;
		L_39 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_37, L_38, NULL);
		V_8 = L_39;
		double L_40;
		L_40 = TimeSpan_get_TotalHours_m753DFC812CEC8F9214EF5F9839C5B4A4DB0D2883((&V_8), NULL);
		V_1 = ((float)L_40);
		// if(latitude >= 0f) starsParent.transform.Rotate(polaris.transform.position, 15f * ellapsedH);
		float L_41 = __this->___latitude_4;
		V_9 = (bool)((((int32_t)((!(((float)L_41) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0165;
		}
	}
	{
		// if(latitude >= 0f) starsParent.transform.Rotate(polaris.transform.position, 15f * ellapsedH);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___starsParent_26;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___polaris_27;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = V_1;
		NullCheck(L_44);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_44, L_47, ((float)il2cpp_codegen_multiply((15.0f), L_48)), NULL);
		goto IL_018d;
	}

IL_0165:
	{
		// else starsParent.transform.Rotate(polaris.transform.position, -15f * ellapsedH);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___starsParent_26;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___polaris_27;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = V_1;
		NullCheck(L_50);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_50, L_53, ((float)il2cpp_codegen_multiply((-15.0f), L_54)), NULL);
	}

IL_018d:
	{
		// }
		return;
	}
}
// System.Void CelestialManager::SetupPlanets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_SetupPlanets_m34CC4D5ED16C9AEF2DCE1C9F343D5178EA32A724 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// planets = new List<PlanetObject>();
		List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* L_0 = (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0*)il2cpp_codegen_object_new(List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981(L_0, List_1__ctor_m3EC26FAA15485D81C3832EA8A46369E261A6F981_RuntimeMethod_var);
		__this->___planets_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planets_22), (void*)L_0);
		// InstantiatePlanet(moonPrefab, PlanetName.MOON);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___moonPrefab_11;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_1, ((int32_t)9), NULL);
		// InstantiatePlanet(sunPrefab, PlanetName.SUN);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___sunPrefab_12;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_2, 0, NULL);
		// InstantiatePlanet(marsPrefab, PlanetName.MARS);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___marsPrefab_13;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_3, 3, NULL);
		// InstantiatePlanet(mercuryPrefab, PlanetName.MERCURY);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___mercuryPrefab_15;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_4, 1, NULL);
		// InstantiatePlanet(venusPrefab, PlanetName.VENUS);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___venusPrefab_20;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_5, 2, NULL);
		// InstantiatePlanet(jupiterPrefab, PlanetName.JUPITER);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___jupiterPrefab_14;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_6, 4, NULL);
		// InstantiatePlanet(saturnPrefab, PlanetName.SATURN);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___saturnPrefab_18;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_7, 5, NULL);
		// InstantiatePlanet(uranusPrefab, PlanetName.URANUS);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___uranusPrefab_19;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_8, 6, NULL);
		// InstantiatePlanet(neptunePrefab, PlanetName.NEPTUNE);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___neptunePrefab_16;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_9, 7, NULL);
		// InstantiatePlanet(plutoPrefab, PlanetName.PLUTO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___plutoPrefab_17;
		CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7(__this, L_10, 8, NULL);
		// }
		return;
	}
}
// System.Void CelestialManager::SetupStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_SetupStars_mA56BF61D6DDDDD946143544E7313C746817F2D6D (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF18E3804C6FF779D386A454E30754050B368137D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	{
		// stars = new List<StarObject>();
		List_1_tF18E3804C6FF779D386A454E30754050B368137D* L_0 = (List_1_tF18E3804C6FF779D386A454E30754050B368137D*)il2cpp_codegen_object_new(List_1_tF18E3804C6FF779D386A454E30754050B368137D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789(L_0, List_1__ctor_m4396CA557BF7BDAFD234E0DB2970175C2CEAD789_RuntimeMethod_var);
		__this->___stars_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stars_23), (void*)L_0);
		// string[] starsLine = starsDatabase.text.Split('\n');
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1 = __this->___starsDatabase_25;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_1, NULL);
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)10), 0, NULL);
		V_0 = L_3;
		// foreach(string str in starsLine){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0063;
	}

IL_0027:
	{
		// foreach(string str in starsLine){
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// string[] data = str.Split(',');
		String_t* L_9 = V_3;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)44), 0, NULL);
		V_4 = L_10;
		// InstantiateStar(float.Parse(data[7]), float.Parse(data[8]), float.Parse(data[13]), data[6]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_4;
		NullCheck(L_11);
		int32_t L_12 = 7;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		float L_14;
		L_14 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_13, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_4;
		NullCheck(L_15);
		int32_t L_16 = 8;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18;
		L_18 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_17, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = ((int32_t)13);
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22;
		L_22 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_21, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_4;
		NullCheck(L_23);
		int32_t L_24 = 6;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		CelestialManager_InstantiateStar_m395823FC3D30F0E6C78B4626E6CD63C4CDBAD8F6(__this, L_14, L_18, L_22, L_25, NULL);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0063:
	{
		// foreach(string str in starsLine){
		int32_t L_27 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CelestialManager::InstantiatePlanet(UnityEngine.GameObject,PlanetName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_InstantiatePlanet_m61B9DA2F3E3DB066FE83836AE4C3F5563E871EF7 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab0, int32_t ____name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetName_t6AE437CB5602F8A99CA3F67AAF7BF56332265303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A55703E55C22A353FFF3C8B12B0C08277433D78);
		s_Il2CppMethodInitialized = true;
	}
	PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	{
		// Vector3 altAzDist = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_0;
		// GameObject planetsParent = GameObject.Find("Planets");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral8A55703E55C22A353FFF3C8B12B0C08277433D78, NULL);
		V_2 = L_1;
		// if(_name == PlanetName.MOON)
		int32_t L_2 = ____name1;
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// altAzDist = CelestialCoordinates.CalculateHorizontalCoordinatesMoon(longitude, latitude, currentDate);
		float L_4 = __this->___longitude_5;
		float L_5 = __this->___latitude_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = __this->___currentDate_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CelestialCoordinates_CalculateHorizontalCoordinatesMoon_m2C8DB69AFC1EFEC7915ECF456D3D2FE15F562F1D(((double)L_4), ((double)L_5), L_6, NULL);
		V_1 = L_7;
		goto IL_0052;
	}

IL_0037:
	{
		// altAzDist = CelestialCoordinates.CalculateHorizontalCoordinatesPlanets(longitude, latitude, _name, currentDate);
		float L_8 = __this->___longitude_5;
		float L_9 = __this->___latitude_4;
		int32_t L_10 = ____name1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = __this->___currentDate_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CelestialCoordinates_CalculateHorizontalCoordinatesPlanets_mDF70000AC3B4C75ACEFCA60C0BD6A60B1A178592(((double)L_8), ((double)L_9), L_10, L_11, NULL);
		V_1 = L_12;
	}

IL_0052:
	{
		// co.gameObject = Instantiate(_prefab, GetPlanetsGamePositionFromAltAz(altAzDist), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ____prefab0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = CelestialManager_GetPlanetsGamePositionFromAltAz_m52B495F553295E122ACEC4BA6E8E0F2571302945(__this, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		(&V_0)->___gameObject_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___gameObject_0), (void*)L_17);
		// co.gameObject.name = _name.ToString();
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_18 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18.___gameObject_0;
		Il2CppFakeBox<int32_t> L_20(PlanetName_t6AE437CB5602F8A99CA3F67AAF7BF56332265303_il2cpp_TypeInfo_var, (&____name1));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_19);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_19, L_21, NULL);
		// co.name = _name;
		int32_t L_22 = ____name1;
		(&V_0)->___name_1 = L_22;
		// co.gameObject.transform.SetParent(planetsParent.transform);
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_23 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23.___gameObject_0;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_25);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_25, L_27, NULL);
		// planets.Add(co);
		List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* L_28 = __this->___planets_22;
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_29 = V_0;
		NullCheck(L_28);
		List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_inline(L_28, L_29, List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CelestialManager::InstantiateStar(System.Single,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager_InstantiateStar_m395823FC3D30F0E6C78B4626E6CD63C4CDBAD8F6 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, float ____ra0, float ____dec1, float ____mag2, String_t* ____name3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AFC65145EDC266851229A0DA06A43A6351D2172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B43701579E77946D0F964BC716ADAC70E5DF5D);
		s_Il2CppMethodInitialized = true;
	}
	StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// Vector2 altAz =  CelestialCoordinates.CalculateHorizontalCoordinatesStar(longitude, latitude, _ra, _dec, currentDate);
		float L_0 = __this->___longitude_5;
		float L_1 = __this->___latitude_4;
		float L_2 = ____ra0;
		float L_3 = ____dec1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = __this->___currentDate_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = CelestialCoordinates_CalculateHorizontalCoordinatesStar_mA7189BE08BF334512D5D52F717AD3CBAF17A31FF(((double)L_0), ((double)L_1), ((double)L_2), ((double)L_3), L_4, NULL);
		V_1 = L_5;
		// Vector3 pos = Quaternion.Euler(-altAz.x, altAz.y, 0) * new Vector3(0, 0, 1000);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_7)), L_9, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), (0.0f), (1000.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		V_2 = L_12;
		// so.gameObject = Instantiate(starPrefab, pos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___starPrefab_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		(&V_0)->___gameObject_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___gameObject_0), (void*)L_16);
		// so.name = _name;
		String_t* L_17 = ____name3;
		(&V_0)->___name_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_1), (void*)L_17);
		// so.ra = _ra;
		float L_18 = ____ra0;
		(&V_0)->___ra_2 = L_18;
		// so.dec = _dec;
		float L_19 = ____dec1;
		(&V_0)->___dec_3 = L_19;
		// if(_name != "") so.gameObject.name = _name;
		String_t* L_20 = ____name3;
		bool L_21;
		L_21 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00a1;
		}
	}
	{
		// if(_name != "") so.gameObject.name = _name;
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_23 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23.___gameObject_0;
		String_t* L_25 = ____name3;
		NullCheck(L_24);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_24, L_25, NULL);
	}

IL_00a1:
	{
		// so.gameObject.transform.SetParent(starsParent.transform);
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_26 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26.___gameObject_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___starsParent_26;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_28);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_28, L_30, NULL);
		// Material mat = so.gameObject.GetComponent<Renderer>().material;
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_31 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = L_31.___gameObject_0;
		NullCheck(L_32);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_32, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_33, NULL);
		V_3 = L_34;
		// mat.SetColor("_EmissionColor", Color.white * Mathf.Max(7 - _mag, 1));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		float L_37 = ____mag2;
		float L_38;
		L_38 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract((7.0f), L_37)), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_36, L_38, NULL);
		NullCheck(L_35);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_35, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_39, NULL);
		// stars.Add(so);
		List_1_tF18E3804C6FF779D386A454E30754050B368137D* L_40 = __this->___stars_23;
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_41 = V_0;
		NullCheck(L_40);
		List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_inline(L_40, L_41, List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_RuntimeMethod_var);
		// if((_name == "Polaris" && latitude >= 0f) || (_name == "Polaris Octantis" && latitude < 0f))
		String_t* L_42 = ____name3;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralF9B43701579E77946D0F964BC716ADAC70E5DF5D, NULL);
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		float L_44 = __this->___latitude_4;
		if ((((float)L_44) >= ((float)(0.0f))))
		{
			goto IL_013d;
		}
	}

IL_011d:
	{
		String_t* L_45 = ____name3;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral7AFC65145EDC266851229A0DA06A43A6351D2172, NULL);
		if (!L_46)
		{
			goto IL_013a;
		}
	}
	{
		float L_47 = __this->___latitude_4;
		G_B7_0 = ((((float)L_47) < ((float)(0.0f)))? 1 : 0);
		goto IL_013b;
	}

IL_013a:
	{
		G_B7_0 = 0;
	}

IL_013b:
	{
		G_B9_0 = G_B7_0;
		goto IL_013e;
	}

IL_013d:
	{
		G_B9_0 = 1;
	}

IL_013e:
	{
		V_5 = (bool)G_B9_0;
		bool L_48 = V_5;
		if (!L_48)
		{
			goto IL_0150;
		}
	}
	{
		// polaris = so.gameObject;
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_49 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = L_49.___gameObject_0;
		__this->___polaris_27 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___polaris_27), (void*)L_50);
	}

IL_0150:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CelestialManager::GetPlanetsGamePositionFromAltAz(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CelestialManager_GetPlanetsGamePositionFromAltAz_m52B495F553295E122ACEC4BA6E8E0F2571302945 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____altAz0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float distance = Map(_altAz.z, 0, 40, 2f, 50f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ____altAz0;
		float L_1 = L_0.___z_4;
		float L_2;
		L_2 = CelestialManager_Map_m9772DCEFD7D37203BFBC3F0A7784A8FC6B4E7516(__this, L_1, (0.0f), (40.0f), (2.0f), (50.0f), NULL);
		V_0 = L_2;
		// Vector3 altAzDist = Quaternion.Euler(-_altAz.x, _altAz.y, 0) * new Vector3(0, 0, distance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ____altAz0;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ____altAz0;
		float L_6 = L_5.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_4)), L_6, (0.0f), NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_9, NULL);
		V_1 = L_10;
		// return altAzDist;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		V_2 = L_11;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		return L_12;
	}
}
// System.Single CelestialManager::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CelestialManager_Map_m9772DCEFD7D37203BFBC3F0A7784A8FC6B4E7516 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, float ___s0, float ___a11, float ___a22, float ___b13, float ___b24, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (a1 == a2)
		float L_0 = ___a11;
		float L_1 = ___a22;
		V_0 = (bool)((((float)L_0) == ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return b1;
		float L_3 = ___b13;
		V_1 = L_3;
		goto IL_0021;
	}

IL_000e:
	{
		// return b1 + (s-a1)*(b2-b1)/(a2-a1);
		float L_4 = ___b13;
		float L_5 = ___s0;
		float L_6 = ___a11;
		float L_7 = ___b24;
		float L_8 = ___b13;
		float L_9 = ___a22;
		float L_10 = ___a11;
		V_1 = ((float)il2cpp_codegen_add(L_4, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)il2cpp_codegen_subtract(L_7, L_8))))/((float)il2cpp_codegen_subtract(L_9, L_10))))));
		goto IL_0021;
	}

IL_0021:
	{
		// }
		float L_11 = V_1;
		return L_11;
	}
}
// System.Void CelestialManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CelestialManager__ctor_mABC6234F6D9E1CF330D9F43F316411433F388EB7 (CelestialManager_tF017F0ED1B6E8805AD40BBED7711C93B7BA25284* __this, const RuntimeMethod* method) 
{
	{
		// public float timeSpeedHours = 5f;     //Speed at which the planets move around Earth
		__this->___timeSpeedHours_7 = (5.0f);
		// public int timeGMTOffset = 0;         //GMT offset...in this example we have the lat/long of Beijing so GMT should be set to 8
		__this->___timeGMTOffset_8 = 0;
		// public int numberOfDaysFromNow = 0;   //If you want to start from another than today
		__this->___numberOfDaysFromNow_9 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ChatActivator::activateChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatActivator_activateChat_m280E9D1D395262200D5DB93EDC8E6C43D286D6BE (ChatActivator_tA27C4749AEB0A01929870AF095DFFC3FA14911A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36229813EE5C92527E3EF4305B6538FED41F3247);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject chat = GameObject.Find("Chat");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D, NULL);
		V_0 = L_0;
		// chat.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// Debug.Log("JO");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral36229813EE5C92527E3EF4305B6538FED41F3247, NULL);
		// }
		return;
	}
}
// System.Void ChatActivator::deactivateChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatActivator_deactivateChat_m4E973BE7E9587263260F9449DD3925FDFF8D6677 (ChatActivator_tA27C4749AEB0A01929870AF095DFFC3FA14911A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E6DB84B2BE626DB3F8E3C48D6E7E7254F18B830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject chat = GameObject.Find("Chat");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9B9DBDE000089729E9EBE7911DC8B650A3DF2C1D, NULL);
		V_0 = L_0;
		// chat.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// Debug.Log("J2O");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8E6DB84B2BE626DB3F8E3C48D6E7E7254F18B830, NULL);
		// }
		return;
	}
}
// System.Void ChatActivator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatActivator__ctor_mBAD4596BCC642CB0E4505AC949C1ECC045B2CB67 (ChatActivator_tA27C4749AEB0A01929870AF095DFFC3FA14911A4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LobbyScreenUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_Awake_m50252EB5903C8903BEA5C326A16110BB47FFF805 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3CAwakeU3Eb__9_0_m6B60262BDE570DF2352B03DB596D5745893DBA28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// _evtSystem = EventSystem.current;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		__this->____evtSystem_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____evtSystem_6), (void*)L_0);
		// if (!_evtSystem)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = __this->____evtSystem_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError("Unable to find EventSystem object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9642B44EBCCC7FCFC1D79B11E62750696304CB81, NULL);
	}

IL_002b:
	{
		// _connectionIndicatorDotImage = ConnectionIndicatorDot.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___ConnectionIndicatorDot_9;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->____connectionIndicatorDotImage_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionIndicatorDotImage_11), (void*)L_5);
		// if (!_connectionIndicatorDotImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->____connectionIndicatorDotImage_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.LogError("Unable to find ConnectionIndicatorDot Image object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7A5BC02F1D1CB47F566CF7BDA2F8B9269E32B73A, NULL);
	}

IL_005b:
	{
		// _connectionIndicatorDotText = ConnectionIndicatorText.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___ConnectionIndicatorText_10;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10;
		L_10 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_9, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->____connectionIndicatorDotText_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionIndicatorDotText_12), (void*)L_10);
		// if (!_connectionIndicatorDotText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____connectionIndicatorDotText_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// Debug.LogError("Unable to find ConnectionIndicatorText Text object.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFC7505A1CB0C67064B665F5E18561565AE8EADF3, NULL);
	}

IL_008b:
	{
		// _vivoxVoiceManager = VivoxVoiceManager.Instance;
		il2cpp_codegen_runtime_class_init_inline(VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A_il2cpp_TypeInfo_var);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_14;
		L_14 = VivoxVoiceManager_get_Instance_m230B9EE62C069CFCBFA55B54A97DE4C7AEC3FE1B(NULL);
		__this->____vivoxVoiceManager_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vivoxVoiceManager_4), (void*)L_14);
		// _vivoxVoiceManager.OnUserLoggedInEvent += OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_15 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_16 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_16, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		VivoxVoiceManager_add_OnUserLoggedInEvent_m122BC18E88C658CA3E2A567C2F6F63376A6226DA(L_15, L_16, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent += OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_17 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_18 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_18, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		VivoxVoiceManager_add_OnUserLoggedOutEvent_m7B4C5C147E0C3CE56ED83FC221725EFBE3A985EE(L_17, L_18, NULL);
		// _vivoxVoiceManager.OnRecoveryStateChangedEvent += OnRecoveryStateChanged;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_19 = __this->____vivoxVoiceManager_4;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_20 = (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)il2cpp_codegen_object_new(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A(L_20, __this, (intptr_t)((void*)LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		VivoxVoiceManager_add_OnRecoveryStateChangedEvent_m7670B4C1B64E81428DE4CA1640051535223143BF(L_19, L_20, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___LogoutButton_7;
		NullCheck(L_21);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_22;
		L_22 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_21, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, __this, (intptr_t)((void*)LobbyScreenUI_U3CAwakeU3Eb__9_0_m6B60262BDE570DF2352B03DB596D5745893DBA28_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_22, L_23, NULL);
		// if (_vivoxVoiceManager.LoginState == LoginState.LoggedIn)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_24 = __this->____vivoxVoiceManager_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline(L_24, NULL);
		V_3 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_0118;
		}
	}
	{
		// OnUserLoggedIn();
		LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3(__this, NULL);
		goto IL_0121;
	}

IL_0118:
	{
		// OnUserLoggedOut();
		LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A(__this, NULL);
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnDestroy_m7250665A952B73BD383AD150934C317FC580B6DE (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnUserLoggedInEvent -= OnUserLoggedIn;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_1 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_1, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_remove_OnUserLoggedInEvent_m4768F3A7333950D81B3F391FEB774916F8521DC0(L_0, L_1, NULL);
		// _vivoxVoiceManager.OnUserLoggedOutEvent -= OnUserLoggedOut;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A* L_3 = (LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A*)il2cpp_codegen_object_new(LoginStatusChangedHandler_tC1D89F70A34D4DA40D201335A76EFE3D22EE984A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoginStatusChangedHandler__ctor_mDFEB59ADA35B80CAC45232A3E8846E2494D0FD93(L_3, __this, (intptr_t)((void*)LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VivoxVoiceManager_remove_OnUserLoggedOutEvent_m86E7F2338ED713C773A8312A45424F7FAF2014D6(L_2, L_3, NULL);
		// _vivoxVoiceManager.OnParticipantAddedEvent -= VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_4 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_5 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_5, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VivoxVoiceManager_remove_OnParticipantAddedEvent_mC785A9129D168B94236E2FFD6B16612989850835(L_4, L_5, NULL);
		// _vivoxVoiceManager.OnRecoveryStateChangedEvent -= OnRecoveryStateChanged;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_6 = __this->____vivoxVoiceManager_4;
		RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C* L_7 = (RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C*)il2cpp_codegen_object_new(RecoveryStateChangedHandler_t796D107ADE236EB4706216DA5FB2A28D0C48027C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RecoveryStateChangedHandler__ctor_m9D0CB80AB3E1A4BE1CEEF59C1D8D91CF02A4077A(L_7, __this, (intptr_t)((void*)LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		VivoxVoiceManager_remove_OnRecoveryStateChangedEvent_mEFB931AC3E545A929368715AC967B339CF2FEB2F(L_6, L_7, NULL);
		// LogoutButton.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___LogoutButton_7;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		NullCheck(L_9);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_9, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::JoinLobbyChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vivoxVoiceManager.OnParticipantAddedEvent += VivoxVoiceManager_OnParticipantAddedEvent;
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D* L_1 = (ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D*)il2cpp_codegen_object_new(ParticipantStatusChangedHandler_tBD1DC1AB8925192896E212465F6B5902238C171D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ParticipantStatusChangedHandler__ctor_mB89AE8D4AB1A11184270F199B78E6443F2BFD382(L_1, __this, (intptr_t)((void*)LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VivoxVoiceManager_add_OnParticipantAddedEvent_mDC497D3B47DF4B7005942B12C9BD2E5B2FFCDC54(L_0, L_1, NULL);
		// _vivoxVoiceManager.JoinChannel(LobbyChannelName.text, ChannelType.NonPositional, VivoxVoiceManager.ChatCapability.TextAndAudio);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___LobbyChannelName_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_3);
		NullCheck(L_2);
		VivoxVoiceManager_JoinChannel_m3484C2A5717B0EF776AEFFBF3DDEB22F5ED58278(L_2, L_4, 0, 2, (bool)1, (Channel3DProperties_tC30478839F54BB3EFA7C375C311A3E42BE07C3BA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::LogoutOfVivoxService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___LogoutButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_1 = __this->____vivoxVoiceManager_4;
		NullCheck(L_1);
		VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7(L_1, NULL);
		// _vivoxVoiceManager.Logout();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_2 = __this->____vivoxVoiceManager_4;
		NullCheck(L_2);
		VivoxVoiceManager_Logout_m33F0A5F36923650407DAEA2AEC5D7204880175DC(L_2, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::VivoxVoiceManager_OnParticipantAddedEvent(System.String,VivoxUnity.ChannelId,VivoxUnity.IParticipant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_VivoxVoiceManager_OnParticipantAddedEvent_m220FFD39028D9F1EF5F4CB598A9058A29AACE656 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, String_t* ___username0, ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* ___channel1, RuntimeObject* ___participant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (channel.Name == LobbyChannelName.text && participant.IsSelf)
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_0 = ___channel1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_0, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___LobbyChannelName_5;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_5 = ___participant2;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean VivoxUnity.IParticipantProperties::get_IsSelf() */, IParticipantProperties_tCDC60208AAFC0A8080C9CFD062DA76FE8D5DFF05_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedIn_m8E74161C7CE2545AEAB1F1A4676550D546C291F3 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m82928E34266601118B4704E22D045B98D1581087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_m7BED814AA57670214D8B9334885115FCE04E484A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	{
		// LobbyScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LobbyScreen_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LogoutButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___LogoutButton_7;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _evtSystem.SetSelectedGameObject(LogoutButton.gameObject, null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2 = __this->____evtSystem_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LogoutButton_7;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_2, L_4, (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*)NULL, NULL);
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName.text);
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_5 = __this->____vivoxVoiceManager_4;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_5, NULL);
		Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560* L_7 = (Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560*)il2cpp_codegen_object_new(Func_2_t1F4D60AB57E89CC59C7D88C3E71FC8E672E53560_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m101B7620B8EA3B794E931D69D1397EF9938EB133(L_7, __this, (intptr_t)((void*)LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m82928E34266601118B4704E22D045B98D1581087_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F(L_6, L_7, Enumerable_FirstOrDefault_TisIChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_m7C5B3A40BE513C367F800DEC386AEC461AB2BF8F_RuntimeMethod_var);
		V_0 = L_8;
		// if ((_vivoxVoiceManager && _vivoxVoiceManager.ActiveChannels.Count == 0)
		//     || lobbychannel == null)
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_9 = __this->____vivoxVoiceManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_11 = __this->____vivoxVoiceManager_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VivoxVoiceManager_get_ActiveChannels_m494155F3A507A4B45E3D72603B863196F7FA12EB(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 VivoxUnity.IReadOnlyDictionary`2<VivoxUnity.ChannelId,VivoxUnity.IChannelSession>::get_Count() */, IReadOnlyDictionary_2_t3A0433B76C87A88E9A423930A6EA9F2AC0BC70E7_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0075;
		}
	}

IL_006f:
	{
		RuntimeObject* L_14 = V_0;
		G_B4_0 = ((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B4_0 = 1;
	}

IL_0076:
	{
		V_1 = (bool)G_B4_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		// JoinLobbyChannel();
		LobbyScreenUI_JoinLobbyChannel_m4D0C4BEEF4FBD6A9E397756AA916AE94A2BD4C4C(__this, NULL);
		goto IL_00be;
	}

IL_0085:
	{
		// if (lobbychannel.AudioState == ConnectionState.Disconnected)
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* VivoxUnity.ConnectionState VivoxUnity.IChannelSession::get_AudioState() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_16);
		V_2 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00bd;
		}
	}
	{
		// lobbychannel.BeginSetAudioConnected(true, true, ar =>
		// {
		//     Debug.Log("Now transmitting into lobby channel");
		// });
		RuntimeObject* L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_21 = L_20;
		G_B8_0 = L_21;
		G_B8_1 = 1;
		G_B8_2 = 1;
		G_B8_3 = L_19;
		if (L_21)
		{
			G_B9_0 = L_21;
			G_B9_1 = 1;
			G_B9_2 = 1;
			G_B9_3 = L_19;
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* L_22 = ((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_23 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_m7BED814AA57670214D8B9334885115FCE04E484A_RuntimeMethod_var), NULL);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_24 = L_23;
		((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_1), (void*)L_24);
		G_B9_0 = L_24;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_00b6:
	{
		NullCheck(G_B9_3);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, bool, bool, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* >::Invoke(17 /* System.IAsyncResult VivoxUnity.IChannelSession::BeginSetAudioConnected(System.Boolean,System.Boolean,System.AsyncCallback) */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, G_B9_3, (bool)G_B9_2, (bool)G_B9_1, G_B9_0);
	}

IL_00bd:
	{
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnUserLoggedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnUserLoggedOut_m19E81974BCD993974DFFDAFC6357A42386ABCB3A (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// _vivoxVoiceManager.DisconnectAllChannels();
		VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* L_0 = __this->____vivoxVoiceManager_4;
		NullCheck(L_0);
		VivoxVoiceManager_DisconnectAllChannels_mC9A5113DEEFA5C1428E73AF0C907170440AA55E7(L_0, NULL);
		// LobbyScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LobbyScreen_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::OnRecoveryStateChanged(VivoxUnity.ConnectionRecoveryState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_OnRecoveryStateChanged_mDCE5B8FE422FC857E2C6C0C2212BB8DE2B34E24B (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, int32_t ___recoveryState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (recoveryState)
		int32_t L_0 = ___recoveryState0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0035;
			}
			case 5:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// indicatorColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_0 = L_3;
		// break;
		goto IL_0055;
	}

IL_002d:
	{
		// indicatorColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		V_0 = L_4;
		// break;
		goto IL_0055;
	}

IL_0035:
	{
		// indicatorColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		V_0 = L_5;
		// break;
		goto IL_0055;
	}

IL_003d:
	{
		// indicatorColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_0 = L_6;
		// break;
		goto IL_0055;
	}

IL_0045:
	{
		// indicatorColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_7;
		// break;
		goto IL_0055;
	}

IL_004d:
	{
		// indicatorColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_8;
		// break;
		goto IL_0055;
	}

IL_0055:
	{
		// _connectionIndicatorDotImage.color = indicatorColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->____connectionIndicatorDotImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// _connectionIndicatorDotText.text = recoveryState.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->____connectionIndicatorDotText_12;
		Il2CppFakeBox<int32_t> L_12(ConnectionRecoveryState_tC35647D67DBA7EE1ED0EDB3E93D41043C4FC8AE0_il2cpp_TypeInfo_var, (&___recoveryState0));
		String_t* L_13;
		L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void LobbyScreenUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI__ctor_m273F2B1472AE37E67E1491DBD3227111B201A159 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI::<Awake>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyScreenUI_U3CAwakeU3Eb__9_0_m6B60262BDE570DF2352B03DB596D5745893DBA28 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, const RuntimeMethod* method) 
{
	{
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		LobbyScreenUI_LogoutOfVivoxService_m7CD38D88C9C91A31EB6277BB9CA427632621AE12(__this, NULL);
		// LogoutButton.onClick.AddListener(() => { LogoutOfVivoxService(); });
		return;
	}
}
// System.Boolean LobbyScreenUI::<OnUserLoggedIn>b__14_0(VivoxUnity.IChannelSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LobbyScreenUI_U3COnUserLoggedInU3Eb__14_0_m82928E34266601118B4704E22D045B98D1581087 (LobbyScreenUI_tB6A1694BA964CE8EB277FD80657CC8EC09182FE8* __this, RuntimeObject* ___ac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var lobbychannel = _vivoxVoiceManager.ActiveChannels.FirstOrDefault(ac => ac.Channel.Name == LobbyChannelName.text);
		RuntimeObject* L_0 = ___ac0;
		NullCheck(L_0);
		ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* L_1;
		L_1 = InterfaceFuncInvoker0< ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* >::Invoke(12 /* VivoxUnity.ChannelId VivoxUnity.IChannelSession::get_Channel() */, IChannelSession_tB6A6720AC641F3A39F6469C6ED0DD0F300C6D614_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline(L_1, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___LobbyChannelName_5;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
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
// System.Void LobbyScreenUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3A8B9809EC53263FD4D9394899C8F06C1CBAB4A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* L_0 = (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178*)il2cpp_codegen_object_new(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266(L_0, NULL);
		((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC919B10095C7D3C55FBAFE3F5F0E3239C5CB266 (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LobbyScreenUI/<>c::<OnUserLoggedIn>b__14_1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnUserLoggedInU3Eb__14_1_m7BED814AA57670214D8B9334885115FCE04E484A (U3CU3Ec_tF60739323013E1CDA96C36F37770DDAA0F000178* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Now transmitting into lobby channel");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral209D6C95315F539F036E51E085C33C40C40878D0, NULL);
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
// System.Void PlanetDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetDetection_Start_m9FEC45FCD994AD9B818B43F2E4E3361362F5DE04 (PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229* __this, const RuntimeMethod* method) 
{
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlanetDetection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetDetection_OnEnable_m7C4F06B8AED2CAAB01A42D645E88111CD1B77427 (PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// planetName.text = "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___planetName_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// chatButton.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___chatButton_5;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlanetDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetDetection_Update_mA49F7E5CCC14146FB1C044E9297A17E9D09C4E0F (PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// Ray ray = new Ray(mainCamera.transform.position, mainCamera.transform.forward);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___mainCamera_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___mainCamera_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_0), L_2, L_5, NULL);
		// if (Physics.Raycast(ray, out hit, Mathf.Infinity))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6 = V_0;
		bool L_7;
		L_7 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_6, (&V_1), (std::numeric_limits<float>::infinity()), NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// GameObject planet = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		V_3 = L_10;
		// planetName.text = planet.name;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___planetName_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
		// chatButton.interactable = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_14 = __this->___chatButton_5;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)1, NULL);
		goto IL_0089;
	}

IL_0069:
	{
		// planetName.text = "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15 = __this->___planetName_4;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// chatButton.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_16 = __this->___chatButton_5;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void PlanetDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetDetection__ctor_mB1D09670EF5B17F3B9BF7C3644704EC5F22CCE5B (PlanetDetection_t5C1E9D7AFA0BB693170F935EB04ADFFAB4E10229* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_mD5E060BED4E0C5C0D40AA39C0DA7AE44CAAB217D (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_0 = __this->___m_TargetCameraState_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360(L_0, L_1, NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_2 = __this->___m_InterpolatingCameraState_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleCameraController_GetInputTranslationDirection_m62C42A7966EF22CB95BB847225D2BE2441A3CE0C (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		V_0 = L_4;
	}

IL_0022:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_5;
		L_5 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_003b:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		V_0 = L_19;
	}

IL_006f:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_20;
		L_20 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_23, NULL);
		V_0 = L_24;
	}

IL_008a:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_25;
		L_25 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00a5;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		V_0 = L_29;
	}

IL_00a5:
	{
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		V_7 = L_30;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		return L_31;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_mDB9A4DA6CC1C82A704D3575DC196F44F17E5E0B5 (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	bool V_7 = false;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B5_2 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B6_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)27), NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_001a:
	{
		// if (Input.GetMouseButton(0))
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_009d;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6;
		L_6 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		bool L_7 = __this->___invertY_10;
		G_B4_0 = L_6;
		G_B4_1 = L_5;
		G_B4_2 = (&V_5);
		if (L_7)
		{
			G_B5_0 = L_6;
			G_B5_1 = L_5;
			G_B5_2 = (&V_5);
			goto IL_0048;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0049;
	}

IL_0048:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0049:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline(G_B6_3, G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, ((float)G_B6_0))), NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___mouseSensitivityCurve_8;
		float L_9;
		L_9 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		NullCheck(L_8);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		V_6 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_11 = __this->___m_TargetCameraState_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_12 = L_11;
		NullCheck(L_12);
		float L_13 = L_12->___yaw_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_5;
		float L_15 = L_14.___x_0;
		float L_16 = V_6;
		NullCheck(L_12);
		L_12->___yaw_0 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_15, L_16))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_17 = __this->___m_TargetCameraState_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->___pitch_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_5;
		float L_21 = L_20.___y_1;
		float L_22 = V_6;
		NullCheck(L_18);
		L_18->___pitch_1 = ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_21, L_22))));
	}

IL_009d:
	{
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_23;
		L_23 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00bb;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (10.0f), NULL);
		V_0 = L_26;
	}

IL_00bb:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_27 = __this->___boost_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_29 = L_28.___y_1;
		__this->___boost_6 = ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(L_29, (0.200000003f)))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = __this->___boost_6;
		float L_32;
		L_32 = powf((2.0f), L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_32, NULL);
		V_0 = L_33;
		// m_TargetCameraState.Translate(translation);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_34 = __this->___m_TargetCameraState_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		NullCheck(L_34);
		CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9(L_34, L_35, NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_36;
		L_36 = logf((0.00999999046f));
		float L_37 = __this->___positionLerpTime_7;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39;
		L_39 = expf(((float)il2cpp_codegen_multiply(((float)(L_36/L_37)), L_38)));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_39));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_40;
		L_40 = logf((0.00999999046f));
		float L_41 = __this->___rotationLerpTime_9;
		float L_42;
		L_42 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_43;
		L_43 = expf(((float)il2cpp_codegen_multiply(((float)(L_40/L_41)), L_42)));
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_43));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_44 = __this->___m_InterpolatingCameraState_5;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_45 = __this->___m_TargetCameraState_4;
		float L_46 = V_1;
		float L_47 = V_2;
		NullCheck(L_44);
		CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9(L_44, L_45, L_46, L_47, NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_48 = __this->___m_InterpolatingCameraState_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E(L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_m224B705F449A3DA440346B08A6237479A91D7136 (SimpleCameraController_t17AF9A37DB0C95045C639A9A74B1D80500082020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_0 = (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD*)il2cpp_codegen_object_new(CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504(L_0, NULL);
		__this->___m_TargetCameraState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetCameraState_4), (void*)L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_1 = (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD*)il2cpp_codegen_object_new(CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504(L_1, NULL);
		__this->___m_InterpolatingCameraState_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InterpolatingCameraState_5), (void*)L_1);
		// public float boost = 3.5f;
		__this->___boost_6 = (3.5f);
		// public float positionLerpTime = 0.2f;
		__this->___positionLerpTime_7 = (0.200000003f);
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___mouseSensitivityCurve_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseSensitivityCurve_8), (void*)L_7);
		// public float rotationLerpTime = 0.01f;
		__this->___rotationLerpTime_9 = (0.00999999978f);
		// public bool invertY = false;
		__this->___invertY_10 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_m3A7302F4586F37F7C78EDA2F0C476BAA22672360 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___pitch_1 = L_2;
		// yaw = t.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___t0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___yaw_0 = L_5;
		// roll = t.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___t0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___roll_2 = L_8;
		// x = t.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___t0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->___x_3 = L_11;
		// y = t.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___t0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___y_4 = L_14;
		// z = t.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___t0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___z_5 = L_17;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_m561F6D92E99F13444FBAC8D5B1A40762A26219F9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->___pitch_1;
		float L_1 = __this->___yaw_0;
		float L_2 = __this->___roll_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___translation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->___x_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		__this->___x_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		// y += rotatedTranslation.y;
		float L_9 = __this->___y_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		__this->___y_4 = ((float)il2cpp_codegen_add(L_9, L_11));
		// z += rotatedTranslation.z;
		float L_12 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		__this->___z_5 = ((float)il2cpp_codegen_add(L_12, L_14));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mFDC0E1CA19B6791CDB6EE8AC262944DC1143FCF9 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method) 
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->___yaw_0;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->___yaw_0;
		float L_3 = ___rotationLerpPct2;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_2, L_3, NULL);
		__this->___yaw_0 = L_4;
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->___pitch_1;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->___pitch_1;
		float L_8 = ___rotationLerpPct2;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_7, L_8, NULL);
		__this->___pitch_1 = L_9;
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->___roll_2;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->___roll_2;
		float L_13 = ___rotationLerpPct2;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_10, L_12, L_13, NULL);
		__this->___roll_2 = L_14;
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->___x_3;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->___x_3;
		float L_18 = ___positionLerpPct1;
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_17, L_18, NULL);
		__this->___x_3 = L_19;
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->___y_4;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->___y_4;
		float L_23 = ___positionLerpPct1;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_22, L_23, NULL);
		__this->___y_4 = L_24;
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->___z_5;
		CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->___z_5;
		float L_28 = ___positionLerpPct1;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_27, L_28, NULL);
		__this->___z_5 = L_29;
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_m03320D760E52E809272776B58C7E741B2EE1D73E (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		float L_1 = __this->___pitch_1;
		float L_2 = __this->___yaw_0;
		float L_3 = __this->___roll_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_4, NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___t0;
		float L_6 = __this->___x_3;
		float L_7 = __this->___y_4;
		float L_8 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m33568E59E39C953BDE6CD28D35A34BE52AE25504 (CameraState_t651BB85BE37498E7EB48448787624DC29D403FBD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.XR.ARFoundation.Compass::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_Start_m71934FFC221D904B24BFA3AC7F1A9FD89F26642E (Compass_t6F666C540C04CA4407F7974E416AB7B4300C10C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* V_0 = NULL;
	{
		// Input.compass.enabled = true;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_0;
		L_0 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_0);
		Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9(L_0, (bool)1, NULL);
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_1;
		L_1 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_1);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_1, NULL);
		// aRSessionOrigin = GameObject.Find("AR Session Origin");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2, NULL);
		__this->___aRSessionOrigin_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRSessionOrigin_4), (void*)L_2);
		// var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___aRSessionOrigin_4;
		NullCheck(L_3);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_4;
		L_4 = GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063(L_3, GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		V_0 = L_4;
		// aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_5 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___targetTransform_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___targetTransform_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_9;
		L_9 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_9);
		float L_10;
		L_10 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((-L_10)), (0.0f), NULL);
		NullCheck(L_5);
		ARSessionOrigin_MakeContentAppearAt_m1820213D5130A4831D01AA2085D7C23F28F0707D(L_5, L_6, L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Compass::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_Update_mA5099C03DF7CD057EBBA37CAE4A24C6B4E42368F (Compass_t6F666C540C04CA4407F7974E416AB7B4300C10C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6993F3D3BFAB0C4E44B460A9E8933E925F926AB);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// aRSessionOrigin = GameObject.Find("AR Session Origin");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral773C10AC7B2C7AFBFDA64607526E4F567D903BA2, NULL);
		__this->___aRSessionOrigin_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRSessionOrigin_4), (void*)L_0);
		// var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___aRSessionOrigin_4;
		NullCheck(L_1);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2;
		L_2 = GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063(L_1, GameObject_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mA461184B582538A8CE6E7F49465C522CC4311063_RuntimeMethod_var);
		V_0 = L_2;
		// aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___targetTransform_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___targetTransform_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_7;
		L_7 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((-L_8)), (0.0f), NULL);
		NullCheck(L_3);
		ARSessionOrigin_MakeContentAppearAt_m1820213D5130A4831D01AA2085D7C23F28F0707D(L_3, L_4, L_6, L_9, NULL);
		// Debug.Log("North : " + Input.compass.trueHeading.ToString());
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_10;
		L_10 = Input_get_compass_m7DA4657286F9B24D55BB120C9CF761A50B13899B(NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = Compass_get_trueHeading_m5546F74294A5CC2B4A731ECE1E02F0BE7085582C(L_10, NULL);
		V_1 = L_11;
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD6993F3D3BFAB0C4E44B460A9E8933E925F926AB, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Compass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass__ctor_mA94B717C0905A04DBA648667BA8EACCEC00F454C (Compass_t6F666C540C04CA4407F7974E416AB7B4300C10C6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VivoxVoiceManager_get_LoginState_mCC9E5A4E6AE3F3AE8AF34D63A729DB9C32E1F051_inline (VivoxVoiceManager_tE0C7A787542587FD252947C08B0152C5334A479A* __this, const RuntimeMethod* method) 
{
	{
		// public LoginState LoginState { get; private set; }
		int32_t L_0 = __this->___U3CLoginStateU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChannelId_get_Name_mAE192BC4A609B21DEEE36FAE042B3B3B063E2F5C_inline (ChannelId_t11619EA895547B811FEE2C30640F3EB50903D11E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => _name;
		String_t* L_0 = __this->____name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 Enumerator_get_Current_m550050F4D85242159FEBF60B30F23DB9275A1AD1_gshared_inline (Enumerator_t1205FF4707559F6EA2849E547C9642EAFC645D14* __this, const RuntimeMethod* method) 
{
	{
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_0 = (PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC5DA61B54C21FE57744C6A6767FE647F6A5886CF_gshared_inline (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0* __this, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 ___item0, const RuntimeMethod* method) 
{
	PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* L_1 = (PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PlanetObjectU5BU5D_tEAF84393216FF2785E2748E707BF07ACA44E83A9* L_6 = V_0;
		int32_t L_7 = V_1;
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2)L_8);
		return;
	}

IL_0034:
	{
		PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2 L_9 = ___item0;
		((  void (*) (List_1_t235045FEE5206F8F1DFB283009CD9D296EAFBCD0*, PlanetObject_t2497CE0F06BA8BA44E627D54FF45741D21EF47D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD406D6BDD771054442F56A04E69DE5FB84A6A888_gshared_inline (List_1_tF18E3804C6FF779D386A454E30754050B368137D* __this, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 ___item0, const RuntimeMethod* method) 
{
	StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* L_1 = (StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		StarObjectU5BU5D_t47F727E255E005851631455837E0A13578F9FA72* L_6 = V_0;
		int32_t L_7 = V_1;
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19)L_8);
		return;
	}

IL_0034:
	{
		StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19 L_9 = ___item0;
		((  void (*) (List_1_tF18E3804C6FF779D386A454E30754050B368137D*, StarObject_t950E4D28224DB698EE3E7D96764C243AD9FC1E19, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

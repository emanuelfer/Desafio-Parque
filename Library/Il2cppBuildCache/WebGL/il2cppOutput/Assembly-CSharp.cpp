#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Vector3Int>
struct Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD;
// System.Collections.Generic.Dictionary`2<Point,Point>
struct Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130;
// System.Collections.Generic.Dictionary`2<Point,System.Single>
struct Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>
struct Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>
struct Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392;
// System.Func`2<CellType,System.Boolean>
struct Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<StructurePrefabWeighted,System.Single>
struct Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7;
// System.Collections.Generic.IEnumerable`1<CellType>
struct IEnumerable_1_t5356FBBB6CFDC690BBC0E2C3318990F7FDD11D5D;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<StructurePrefabWeighted>
struct IEnumerable_1_tFC452C5CE7DA18E9A293FD6FD5B4C766EC8B6118;
// System.Collections.Generic.IEqualityComparer`1<Point>
struct IEqualityComparer_1_tAB8E4F1B2D9D3E14DD9ACDD4EA430D70EA10D916;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tEBF21F776A48B7F61078A377E017CCF584C46F0C;
// System.Collections.Generic.Dictionary`2/KeyCollection<Point,Point>
struct KeyCollection_tF1134193C2F3C9EEBD3A1CF031149400C297EE12;
// System.Collections.Generic.Dictionary`2/KeyCollection<Point,System.Single>
struct KeyCollection_t4056E29A5BC4FEB19C611A0D360B7D791D265C42;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,StructureModel>
struct KeyCollection_tD57F50BCF19C7C4722CF5430BE5BBC7E3F0906F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002;
// System.Collections.Generic.List`1<UnityEngine.Vector3Int>
struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Point,Point>
struct ValueCollection_t9C6B3D66DE342EA507A4EDE0B34DE175F6C7AE56;
// System.Collections.Generic.Dictionary`2/ValueCollection<Point,System.Single>
struct ValueCollection_t56C2C302D1EEE006E07259297B81E1BAD000D32D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,System.Object>
struct ValueCollection_tB2E1AEF30FA43411E64E9D0A05A753DA6EC3BECF;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,StructureModel>
struct ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46;
// System.Collections.Generic.Dictionary`2/Entry<Point,Point>[]
struct EntryU5BU5D_t1BDF59E6AF168EE5ABC8387657B91348DF634F9F;
// System.Collections.Generic.Dictionary`2/Entry<Point,System.Single>[]
struct EntryU5BU5D_tA92B85DF347771CF8695E3394ACBE9714ED52343;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector3Int,StructureModel>[]
struct EntryU5BU5D_tEF559615BAC9CE81AAAC81BB3913B68683F032DA;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// CellType[]
struct CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Point[]
struct PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// StructurePrefabWeighted[]
struct StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC;
// UnityEngine.Vector3Int[]
struct Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D;
// Readme/Section[]
struct SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659;
// CellType[0...,0...]
struct CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// SVS.AudioPlayer
struct AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// SVS.CameraMovement
struct CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Grid
struct Grid_t29032245F31DA66818E4D18285FF79A63F6496DF;
// GridSearch
struct GridSearch_tF2269CDFC0720AE440E7365F8B845102BB0E8E51;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlacementManager
struct PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4;
// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7;
// RoadFixer
struct RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0;
// RoadManager
struct RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// StructureManager
struct StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5;
// StructureModel
struct StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// RoadFixer/<>c
struct U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C;
// StructureManager/<>c
struct U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grid_t29032245F31DA66818E4D18285FF79A63F6496DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28702D4296187A26F7069914F5A25BAAA9D5C4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral488F947A46D295D05E45001DC9193FBD32A219D7;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral946F0D7C4D6705BB1BB6D6438AC41A287405DE0B;
IL2CPP_EXTERN_C String_t* _stringLiteral9813499D6918B17D4A59FC2F18D8EACF31B239AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC824568226F3494A7EBD25CB05446AECA1A9E16;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0_mD1F270E6BA531EBC572A629ACD59A19930C8D41E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD9A2958AB4CC0634FFA3318EBF98FCEC6FECC5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m8F0780E2076DBA6C34AF7555D4CD6F06AAC910FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF26B53CDEA5319BA32AA18A6FB5B2445B604B6AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m42116A950F66B784E169DBBE00032E08A704868A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF28B86EC88E1DDEFC2E37F2CF4657F68B5E2B5C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF401D2D713A273E29430D1574BD702DBF5B3BE90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mB640653DE886DA72C32445F417CE1AC5675B9707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5619E8BB496683A10142E500135EBC98BF21C437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m1601B3378044B52B7C0E7719F056413F6DBFB313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m0C3E343D027F17AA04CB0A65CA6913D330650390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9764E374F71287769E7EB41E9EE00912F95A4FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9B483C6A791D9E283DBD0EFBEBA445FA2040D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8C6871B04EEF1AA36B782502B66DA734455B20B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDA8D8EFF7F3B023F0DAACC7C74E6CDBD2CE9DC21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m34A2FEF109786F79DF34C2F212384E53265ACB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA808C1912871824F07571EBBC030CC8B8A4944C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA75C670956105463E8880AB8FABEB99969088D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_BigStructurePlacementHandler_mECB6F25CF17F86BA71C156156ECB0BECF3D62435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_HousePlacementHandler_m88C777D169F402321E94CEE24F917E3F9CDF60E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_RoadPlacementHandler_mB89F3858EB561736385399678514E380624ABD21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_SpecialPlacementHandler_mBBD5E39CEC434DFDBBC5E08638A56CBC1E9BBDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44_m6ED7F845B57D8DF3D63D327DC89AA2239AC4067F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m56BF886233B0AD8C44123444DDF4F52113637DC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoadManager_FinishPlacingRoad_m18C6E2D2F5562269D8A64229D20CA486DFBC9837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StructureManager_PlaceBigStructure_m7A55F80EF69C7BBBA5EE71A776B4696212AB47DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StructureManager_PlaceHouse_m3B227003DEBF1C9060C9C288579AC22A92F4530A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StructureManager_PlaceSpecial_mB6A2B0E69B3754471E0A176966653FF58DA6BCF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFixRoadAtPositionU3Eb__5_0_mC8922F367DAB6A90D7AE9C018F9FDA40C2B17922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__7_0_m3BBAB41C97CD5A1BFF0576FCC36358FDC1090A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__7_1_m1DF52836BAB9F4939B0295641B93E1A97FC4B1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__7_2_m110B36DF7DED72EBB0A1ADCB177480365BBFBE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_U3CStartU3Eb__10_0_m00ACD2D7BBAD9F999901C9874455E00374279A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_U3CStartU3Eb__10_1_mA5678320D63C06FD192D34B22FD018CF5530305A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_U3CStartU3Eb__10_2_m8BEC412CF8F2AD179CDC4B73C0181985E19D565F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIController_U3CStartU3Eb__10_3_m3C42FE9EF6901E048E7CE56A5542EB1B3668CC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m97E2C0A5BFED4AD62CFE4BF3F656672D5EEF19C7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC;
struct CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Point,Point>
struct Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1BDF59E6AF168EE5ABC8387657B91348DF634F9F* ___entries_1;
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
	KeyCollection_tF1134193C2F3C9EEBD3A1CF031149400C297EE12 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9C6B3D66DE342EA507A4EDE0B34DE175F6C7AE56 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___entries_1)); }
	inline EntryU5BU5D_t1BDF59E6AF168EE5ABC8387657B91348DF634F9F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1BDF59E6AF168EE5ABC8387657B91348DF634F9F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1BDF59E6AF168EE5ABC8387657B91348DF634F9F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___keys_7)); }
	inline KeyCollection_tF1134193C2F3C9EEBD3A1CF031149400C297EE12 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF1134193C2F3C9EEBD3A1CF031149400C297EE12 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF1134193C2F3C9EEBD3A1CF031149400C297EE12 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ___values_8)); }
	inline ValueCollection_t9C6B3D66DE342EA507A4EDE0B34DE175F6C7AE56 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9C6B3D66DE342EA507A4EDE0B34DE175F6C7AE56 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9C6B3D66DE342EA507A4EDE0B34DE175F6C7AE56 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Point,System.Single>
struct Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA92B85DF347771CF8695E3394ACBE9714ED52343* ___entries_1;
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
	KeyCollection_t4056E29A5BC4FEB19C611A0D360B7D791D265C42 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t56C2C302D1EEE006E07259297B81E1BAD000D32D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___entries_1)); }
	inline EntryU5BU5D_tA92B85DF347771CF8695E3394ACBE9714ED52343* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA92B85DF347771CF8695E3394ACBE9714ED52343** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA92B85DF347771CF8695E3394ACBE9714ED52343* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___keys_7)); }
	inline KeyCollection_t4056E29A5BC4FEB19C611A0D360B7D791D265C42 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4056E29A5BC4FEB19C611A0D360B7D791D265C42 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4056E29A5BC4FEB19C611A0D360B7D791D265C42 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ___values_8)); }
	inline ValueCollection_t56C2C302D1EEE006E07259297B81E1BAD000D32D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t56C2C302D1EEE006E07259297B81E1BAD000D32D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t56C2C302D1EEE006E07259297B81E1BAD000D32D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>
struct Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEF559615BAC9CE81AAAC81BB3913B68683F032DA* ___entries_1;
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
	KeyCollection_tD57F50BCF19C7C4722CF5430BE5BBC7E3F0906F5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___entries_1)); }
	inline EntryU5BU5D_tEF559615BAC9CE81AAAC81BB3913B68683F032DA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEF559615BAC9CE81AAAC81BB3913B68683F032DA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEF559615BAC9CE81AAAC81BB3913B68683F032DA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___keys_7)); }
	inline KeyCollection_tD57F50BCF19C7C4722CF5430BE5BBC7E3F0906F5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD57F50BCF19C7C4722CF5430BE5BBC7E3F0906F5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD57F50BCF19C7C4722CF5430BE5BBC7E3F0906F5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ___values_8)); }
	inline ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
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


// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____items_1)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields, ____emptyArray_5)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3Int>
struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____items_1)); }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* get__items_1() const { return ____items_1; }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_StaticFields, ____emptyArray_5)); }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,StructureModel>
struct ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46, ___dictionary_0)); }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
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


// Grid
struct Grid_t29032245F31DA66818E4D18285FF79A63F6496DF  : public RuntimeObject
{
public:
	// CellType[0...,0...] Grid::_grid
	CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* ____grid_0;
	// System.Int32 Grid::_width
	int32_t ____width_1;
	// System.Int32 Grid::_height
	int32_t ____height_2;
	// System.Collections.Generic.List`1<Point> Grid::_roadList
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ____roadList_3;
	// System.Collections.Generic.List`1<Point> Grid::_specialStructure
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ____specialStructure_4;

public:
	inline static int32_t get_offset_of__grid_0() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ____grid_0)); }
	inline CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* get__grid_0() const { return ____grid_0; }
	inline CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5** get_address_of__grid_0() { return &____grid_0; }
	inline void set__grid_0(CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* value)
	{
		____grid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grid_0), (void*)value);
	}

	inline static int32_t get_offset_of__width_1() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ____width_1)); }
	inline int32_t get__width_1() const { return ____width_1; }
	inline int32_t* get_address_of__width_1() { return &____width_1; }
	inline void set__width_1(int32_t value)
	{
		____width_1 = value;
	}

	inline static int32_t get_offset_of__height_2() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ____height_2)); }
	inline int32_t get__height_2() const { return ____height_2; }
	inline int32_t* get_address_of__height_2() { return &____height_2; }
	inline void set__height_2(int32_t value)
	{
		____height_2 = value;
	}

	inline static int32_t get_offset_of__roadList_3() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ____roadList_3)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get__roadList_3() const { return ____roadList_3; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of__roadList_3() { return &____roadList_3; }
	inline void set__roadList_3(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		____roadList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____roadList_3), (void*)value);
	}

	inline static int32_t get_offset_of__specialStructure_4() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ____specialStructure_4)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get__specialStructure_4() const { return ____specialStructure_4; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of__specialStructure_4() { return &____specialStructure_4; }
	inline void set__specialStructure_4(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		____specialStructure_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____specialStructure_4), (void*)value);
	}
};


// GridSearch
struct GridSearch_tF2269CDFC0720AE440E7365F8B845102BB0E8E51  : public RuntimeObject
{
public:

public:
};


// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28  : public RuntimeObject
{
public:
	// System.Int32 Point::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 Point::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___U3CXU3Ek__BackingField_0)); }
	inline int32_t get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(int32_t value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___U3CYU3Ek__BackingField_1)); }
	inline int32_t get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(int32_t value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
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

// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// RoadFixer/<>c
struct U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields
{
public:
	// RoadFixer/<>c RoadFixer/<>c::<>9
	U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * ___U3CU3E9_0;
	// System.Func`2<CellType,System.Boolean> RoadFixer/<>c::<>9__5_0
	Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C  : public RuntimeObject
{
public:
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

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// StructureManager/<>c
struct U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields
{
public:
	// StructureManager/<>c StructureManager/<>c::<>9
	U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * ___U3CU3E9_0;
	// System.Func`2<StructurePrefabWeighted,System.Single> StructureManager/<>c::<>9__7_0
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * ___U3CU3E9__7_0_1;
	// System.Func`2<StructurePrefabWeighted,System.Single> StructureManager/<>c::<>9__7_1
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * ___U3CU3E9__7_1_2;
	// System.Func`2<StructurePrefabWeighted,System.Single> StructureManager/<>c::<>9__7_2
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * ___U3CU3E9__7_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields, ___U3CU3E9__7_2_3)); }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * get_U3CU3E9__7_2_3() const { return ___U3CU3E9__7_2_3; }
	inline Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 ** get_address_of_U3CU3E9__7_2_3() { return &___U3CU3E9__7_2_3; }
	inline void set_U3CU3E9__7_2_3(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * value)
	{
		___U3CU3E9__7_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_2_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___list_0)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_list_0() const { return ___list_0; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___current_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_current_3() const { return ___current_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<Point>
struct Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___list_0)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get_list_0() const { return ___list_0; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___current_3)); }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * get_current_3() const { return ___current_3; }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,System.Object>
struct Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B, ___dictionary_0)); }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,StructureModel>
struct Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3, ___dictionary_0)); }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3, ___currentValue_3)); }
	inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * get_currentValue_3() const { return ___currentValue_3; }
	inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
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


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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
struct IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// StructurePrefabWeighted
struct StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB 
{
public:
	// UnityEngine.GameObject StructurePrefabWeighted::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	// System.Single StructurePrefabWeighted::weight
	float ___weight_1;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB, ___prefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}
};

// Native definition for P/Invoke marshalling of StructurePrefabWeighted
struct StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	float ___weight_1;
};
// Native definition for COM marshalling of StructurePrefabWeighted
struct StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	float ___weight_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// GridSearch/SearchResult
struct SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 
{
public:
	// System.Collections.Generic.List`1<Point> GridSearch/SearchResult::<Path>k__BackingField
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___U3CPathU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986, ___U3CPathU3Ek__BackingField_0)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get_U3CPathU3Ek__BackingField_0() const { return ___U3CPathU3Ek__BackingField_0; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of_U3CPathU3Ek__BackingField_0() { return &___U3CPathU3Ek__BackingField_0; }
	inline void set_U3CPathU3Ek__BackingField_0(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		___U3CPathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GridSearch/SearchResult
struct SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_pinvoke
{
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___U3CPathU3Ek__BackingField_0;
};
// Native definition for COM marshalling of GridSearch/SearchResult
struct SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_com
{
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___U3CPathU3Ek__BackingField_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>
struct Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___list_0)); }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * get_list_0() const { return ___list_0; }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___current_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_current_3() const { return ___current_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>
struct KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE, ___key_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_key_0() const { return ___key_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,StructureModel>
struct KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6, ___key_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_key_0() const { return ___key_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6, ___value_1)); }
	inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * get_value_1() const { return ___value_1; }
	inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Vector3Int>
struct Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF 
{
public:
	// T System.Nullable`1::value
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF, ___value_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_value_0() const { return ___value_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0;

public:
	inline static int32_t get_offset_of_E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0() const { return ___E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0() { return &___E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0; }
	inline void set_E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0 = value;
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

// CellType
struct CellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB 
{
public:
	// System.Int32 CellType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
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


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>
struct Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___dictionary_0)); }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___current_3)); }
	inline KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,StructureModel>
struct Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08, ___dictionary_0)); }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08, ___current_3)); }
	inline KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
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

// System.Action`1<UnityEngine.Vector3Int>
struct Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<CellType,System.Boolean>
struct Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<StructurePrefabWeighted,System.Single>
struct Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___sections_6)); }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
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


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// SVS.AudioPlayer
struct AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip SVS.AudioPlayer::placementSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___placementSound_4;
	// UnityEngine.AudioSource SVS.AudioPlayer::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;

public:
	inline static int32_t get_offset_of_placementSound_4() { return static_cast<int32_t>(offsetof(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3, ___placementSound_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_placementSound_4() const { return ___placementSound_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_placementSound_4() { return &___placementSound_4; }
	inline void set_placementSound_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___placementSound_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementSound_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}
};

struct AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields
{
public:
	// SVS.AudioPlayer SVS.AudioPlayer::instance
	AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields, ___instance_6)); }
	inline AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * get_instance_6() const { return ___instance_6; }
	inline AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// SVS.CameraMovement
struct CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera SVS.CameraMovement::gameCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___gameCamera_4;
	// System.Single SVS.CameraMovement::cameraMovementSpeed
	float ___cameraMovementSpeed_5;

public:
	inline static int32_t get_offset_of_gameCamera_4() { return static_cast<int32_t>(offsetof(CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01, ___gameCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_gameCamera_4() const { return ___gameCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_gameCamera_4() { return &___gameCamera_4; }
	inline void set_gameCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___gameCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraMovementSpeed_5() { return static_cast<int32_t>(offsetof(CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01, ___cameraMovementSpeed_5)); }
	inline float get_cameraMovementSpeed_5() const { return ___cameraMovementSpeed_5; }
	inline float* get_address_of_cameraMovementSpeed_5() { return &___cameraMovementSpeed_5; }
	inline void set_cameraMovementSpeed_5(float value)
	{
		___cameraMovementSpeed_5 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SVS.CameraMovement GameManager::cameraMovement
	CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * ___cameraMovement_4;
	// RoadManager GameManager::roadManager
	RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * ___roadManager_5;
	// InputManager GameManager::inputManager
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___inputManager_6;
	// UIController GameManager::uiController
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ___uiController_7;
	// StructureManager GameManager::structureManager
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * ___structureManager_8;

public:
	inline static int32_t get_offset_of_cameraMovement_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___cameraMovement_4)); }
	inline CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * get_cameraMovement_4() const { return ___cameraMovement_4; }
	inline CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 ** get_address_of_cameraMovement_4() { return &___cameraMovement_4; }
	inline void set_cameraMovement_4(CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * value)
	{
		___cameraMovement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraMovement_4), (void*)value);
	}

	inline static int32_t get_offset_of_roadManager_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___roadManager_5)); }
	inline RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * get_roadManager_5() const { return ___roadManager_5; }
	inline RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 ** get_address_of_roadManager_5() { return &___roadManager_5; }
	inline void set_roadManager_5(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * value)
	{
		___roadManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roadManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___inputManager_6)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_inputManager_6() const { return ___inputManager_6; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_inputManager_6() { return &___inputManager_6; }
	inline void set_inputManager_6(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___inputManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_uiController_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___uiController_7)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get_uiController_7() const { return ___uiController_7; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of_uiController_7() { return &___uiController_7; }
	inline void set_uiController_7(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		___uiController_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiController_7), (void*)value);
	}

	inline static int32_t get_offset_of_structureManager_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___structureManager_8)); }
	inline StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * get_structureManager_8() const { return ___structureManager_8; }
	inline StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 ** get_address_of_structureManager_8() { return &___structureManager_8; }
	inline void set_structureManager_8(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * value)
	{
		___structureManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___structureManager_8), (void*)value);
	}
};


// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.Vector3Int> InputManager::OnMouseClick
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * ___OnMouseClick_4;
	// System.Action`1<UnityEngine.Vector3Int> InputManager::OnMouseHold
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * ___OnMouseHold_5;
	// System.Action InputManager::OnMouseUp
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnMouseUp_6;
	// UnityEngine.Vector2 InputManager::cameraMovementVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cameraMovementVector_7;
	// UnityEngine.Camera InputManager::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_8;
	// UnityEngine.LayerMask InputManager::groundMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundMask_9;

public:
	inline static int32_t get_offset_of_OnMouseClick_4() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnMouseClick_4)); }
	inline Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * get_OnMouseClick_4() const { return ___OnMouseClick_4; }
	inline Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B ** get_address_of_OnMouseClick_4() { return &___OnMouseClick_4; }
	inline void set_OnMouseClick_4(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * value)
	{
		___OnMouseClick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMouseClick_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnMouseHold_5() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnMouseHold_5)); }
	inline Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * get_OnMouseHold_5() const { return ___OnMouseHold_5; }
	inline Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B ** get_address_of_OnMouseHold_5() { return &___OnMouseHold_5; }
	inline void set_OnMouseHold_5(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * value)
	{
		___OnMouseHold_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMouseHold_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnMouseUp_6() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___OnMouseUp_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnMouseUp_6() const { return ___OnMouseUp_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnMouseUp_6() { return &___OnMouseUp_6; }
	inline void set_OnMouseUp_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnMouseUp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMouseUp_6), (void*)value);
	}

	inline static int32_t get_offset_of_cameraMovementVector_7() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___cameraMovementVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cameraMovementVector_7() const { return ___cameraMovementVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cameraMovementVector_7() { return &___cameraMovementVector_7; }
	inline void set_cameraMovementVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cameraMovementVector_7 = value;
	}

	inline static int32_t get_offset_of_mainCamera_8() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___mainCamera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_8() const { return ___mainCamera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_8() { return &___mainCamera_8; }
	inline void set_mainCamera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_8), (void*)value);
	}

	inline static int32_t get_offset_of_groundMask_9() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___groundMask_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundMask_9() const { return ___groundMask_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundMask_9() { return &___groundMask_9; }
	inline void set_groundMask_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundMask_9 = value;
	}
};


// PlacementManager
struct PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PlacementManager::width
	int32_t ___width_4;
	// System.Int32 PlacementManager::height
	int32_t ___height_5;
	// Grid PlacementManager::placementGrid
	Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * ___placementGrid_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel> PlacementManager::temporaryRoadobjects
	Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * ___temporaryRoadobjects_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel> PlacementManager::structureDictionary
	Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * ___structureDictionary_8;

public:
	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_placementGrid_6() { return static_cast<int32_t>(offsetof(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4, ___placementGrid_6)); }
	inline Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * get_placementGrid_6() const { return ___placementGrid_6; }
	inline Grid_t29032245F31DA66818E4D18285FF79A63F6496DF ** get_address_of_placementGrid_6() { return &___placementGrid_6; }
	inline void set_placementGrid_6(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * value)
	{
		___placementGrid_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementGrid_6), (void*)value);
	}

	inline static int32_t get_offset_of_temporaryRoadobjects_7() { return static_cast<int32_t>(offsetof(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4, ___temporaryRoadobjects_7)); }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * get_temporaryRoadobjects_7() const { return ___temporaryRoadobjects_7; }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 ** get_address_of_temporaryRoadobjects_7() { return &___temporaryRoadobjects_7; }
	inline void set_temporaryRoadobjects_7(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * value)
	{
		___temporaryRoadobjects_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporaryRoadobjects_7), (void*)value);
	}

	inline static int32_t get_offset_of_structureDictionary_8() { return static_cast<int32_t>(offsetof(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4, ___structureDictionary_8)); }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * get_structureDictionary_8() const { return ___structureDictionary_8; }
	inline Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 ** get_address_of_structureDictionary_8() { return &___structureDictionary_8; }
	inline void set_structureDictionary_8(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * value)
	{
		___structureDictionary_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___structureDictionary_8), (void*)value);
	}
};


// RoadFixer
struct RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject RoadFixer::deadEnd
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deadEnd_4;
	// UnityEngine.GameObject RoadFixer::roadStraight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___roadStraight_5;
	// UnityEngine.GameObject RoadFixer::corner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___corner_6;
	// UnityEngine.GameObject RoadFixer::threeWay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___threeWay_7;
	// UnityEngine.GameObject RoadFixer::fourWay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fourWay_8;

public:
	inline static int32_t get_offset_of_deadEnd_4() { return static_cast<int32_t>(offsetof(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0, ___deadEnd_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deadEnd_4() const { return ___deadEnd_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deadEnd_4() { return &___deadEnd_4; }
	inline void set_deadEnd_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deadEnd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deadEnd_4), (void*)value);
	}

	inline static int32_t get_offset_of_roadStraight_5() { return static_cast<int32_t>(offsetof(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0, ___roadStraight_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_roadStraight_5() const { return ___roadStraight_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_roadStraight_5() { return &___roadStraight_5; }
	inline void set_roadStraight_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___roadStraight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roadStraight_5), (void*)value);
	}

	inline static int32_t get_offset_of_corner_6() { return static_cast<int32_t>(offsetof(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0, ___corner_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_corner_6() const { return ___corner_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_corner_6() { return &___corner_6; }
	inline void set_corner_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___corner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___corner_6), (void*)value);
	}

	inline static int32_t get_offset_of_threeWay_7() { return static_cast<int32_t>(offsetof(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0, ___threeWay_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_threeWay_7() const { return ___threeWay_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_threeWay_7() { return &___threeWay_7; }
	inline void set_threeWay_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___threeWay_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threeWay_7), (void*)value);
	}

	inline static int32_t get_offset_of_fourWay_8() { return static_cast<int32_t>(offsetof(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0, ___fourWay_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fourWay_8() const { return ___fourWay_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fourWay_8() { return &___fourWay_8; }
	inline void set_fourWay_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fourWay_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fourWay_8), (void*)value);
	}
};


// RoadManager
struct RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlacementManager RoadManager::placementManager
	PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3Int> RoadManager::temporaryPlacementPositions
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * ___temporaryPlacementPositions_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3Int> RoadManager::roadPositionsToRecheck
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * ___roadPositionsToRecheck_6;
	// UnityEngine.Vector3Int RoadManager::startPosition
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___startPosition_7;
	// System.Boolean RoadManager::placementNode
	bool ___placementNode_8;
	// RoadFixer RoadManager::roadFixer
	RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * ___roadFixer_9;

public:
	inline static int32_t get_offset_of_placementManager_4() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___placementManager_4)); }
	inline PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * get_placementManager_4() const { return ___placementManager_4; }
	inline PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 ** get_address_of_placementManager_4() { return &___placementManager_4; }
	inline void set_placementManager_4(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * value)
	{
		___placementManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_temporaryPlacementPositions_5() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___temporaryPlacementPositions_5)); }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * get_temporaryPlacementPositions_5() const { return ___temporaryPlacementPositions_5; }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D ** get_address_of_temporaryPlacementPositions_5() { return &___temporaryPlacementPositions_5; }
	inline void set_temporaryPlacementPositions_5(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * value)
	{
		___temporaryPlacementPositions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temporaryPlacementPositions_5), (void*)value);
	}

	inline static int32_t get_offset_of_roadPositionsToRecheck_6() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___roadPositionsToRecheck_6)); }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * get_roadPositionsToRecheck_6() const { return ___roadPositionsToRecheck_6; }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D ** get_address_of_roadPositionsToRecheck_6() { return &___roadPositionsToRecheck_6; }
	inline void set_roadPositionsToRecheck_6(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * value)
	{
		___roadPositionsToRecheck_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roadPositionsToRecheck_6), (void*)value);
	}

	inline static int32_t get_offset_of_startPosition_7() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___startPosition_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_startPosition_7() const { return ___startPosition_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_startPosition_7() { return &___startPosition_7; }
	inline void set_startPosition_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___startPosition_7 = value;
	}

	inline static int32_t get_offset_of_placementNode_8() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___placementNode_8)); }
	inline bool get_placementNode_8() const { return ___placementNode_8; }
	inline bool* get_address_of_placementNode_8() { return &___placementNode_8; }
	inline void set_placementNode_8(bool value)
	{
		___placementNode_8 = value;
	}

	inline static int32_t get_offset_of_roadFixer_9() { return static_cast<int32_t>(offsetof(RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085, ___roadFixer_9)); }
	inline RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * get_roadFixer_9() const { return ___roadFixer_9; }
	inline RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 ** get_address_of_roadFixer_9() { return &___roadFixer_9; }
	inline void set_roadFixer_9(RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * value)
	{
		___roadFixer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roadFixer_9), (void*)value);
	}
};


// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController/CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___m_TargetCameraState_4)); }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};


// StructureManager
struct StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// StructurePrefabWeighted[] StructureManager::housePrefabs
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* ___housePrefabs_4;
	// StructurePrefabWeighted[] StructureManager::specialPrefabs
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* ___specialPrefabs_5;
	// StructurePrefabWeighted[] StructureManager::bigStructuresPrefabs
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* ___bigStructuresPrefabs_6;
	// PlacementManager StructureManager::placementManeger
	PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManeger_7;
	// System.Single[] StructureManager::houseWeights
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___houseWeights_8;
	// System.Single[] StructureManager::specialWeights
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___specialWeights_9;
	// System.Single[] StructureManager::bigStructuresWeights
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___bigStructuresWeights_10;

public:
	inline static int32_t get_offset_of_housePrefabs_4() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___housePrefabs_4)); }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* get_housePrefabs_4() const { return ___housePrefabs_4; }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC** get_address_of_housePrefabs_4() { return &___housePrefabs_4; }
	inline void set_housePrefabs_4(StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* value)
	{
		___housePrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___housePrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_specialPrefabs_5() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___specialPrefabs_5)); }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* get_specialPrefabs_5() const { return ___specialPrefabs_5; }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC** get_address_of_specialPrefabs_5() { return &___specialPrefabs_5; }
	inline void set_specialPrefabs_5(StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* value)
	{
		___specialPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specialPrefabs_5), (void*)value);
	}

	inline static int32_t get_offset_of_bigStructuresPrefabs_6() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___bigStructuresPrefabs_6)); }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* get_bigStructuresPrefabs_6() const { return ___bigStructuresPrefabs_6; }
	inline StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC** get_address_of_bigStructuresPrefabs_6() { return &___bigStructuresPrefabs_6; }
	inline void set_bigStructuresPrefabs_6(StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* value)
	{
		___bigStructuresPrefabs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigStructuresPrefabs_6), (void*)value);
	}

	inline static int32_t get_offset_of_placementManeger_7() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___placementManeger_7)); }
	inline PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * get_placementManeger_7() const { return ___placementManeger_7; }
	inline PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 ** get_address_of_placementManeger_7() { return &___placementManeger_7; }
	inline void set_placementManeger_7(PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * value)
	{
		___placementManeger_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementManeger_7), (void*)value);
	}

	inline static int32_t get_offset_of_houseWeights_8() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___houseWeights_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_houseWeights_8() const { return ___houseWeights_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_houseWeights_8() { return &___houseWeights_8; }
	inline void set_houseWeights_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___houseWeights_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___houseWeights_8), (void*)value);
	}

	inline static int32_t get_offset_of_specialWeights_9() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___specialWeights_9)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_specialWeights_9() const { return ___specialWeights_9; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_specialWeights_9() { return &___specialWeights_9; }
	inline void set_specialWeights_9(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___specialWeights_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specialWeights_9), (void*)value);
	}

	inline static int32_t get_offset_of_bigStructuresWeights_10() { return static_cast<int32_t>(offsetof(StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5, ___bigStructuresWeights_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_bigStructuresWeights_10() const { return ___bigStructuresWeights_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_bigStructuresWeights_10() { return &___bigStructuresWeights_10; }
	inline void set_bigStructuresWeights_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___bigStructuresWeights_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigStructuresWeights_10), (void*)value);
	}
};


// StructureModel
struct StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single StructureModel::yHeight
	float ___yHeight_4;

public:
	inline static int32_t get_offset_of_yHeight_4() { return static_cast<int32_t>(offsetof(StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44, ___yHeight_4)); }
	inline float get_yHeight_4() const { return ___yHeight_4; }
	inline float* get_address_of_yHeight_4() { return &___yHeight_4; }
	inline void set_yHeight_4(float value)
	{
		___yHeight_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action UIController::OnRoadPlacement
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRoadPlacement_4;
	// System.Action UIController::OnHousePlacement
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnHousePlacement_5;
	// System.Action UIController::OnSpecialPlacement
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSpecialPlacement_6;
	// System.Action UIController::OnBigStructurePlacement
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnBigStructurePlacement_7;
	// UnityEngine.UI.Button UIController::placeRoadButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___placeRoadButton_8;
	// UnityEngine.UI.Button UIController::placeHouseButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___placeHouseButton_9;
	// UnityEngine.UI.Button UIController::placeSpecialButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___placeSpecialButton_10;
	// UnityEngine.UI.Button UIController::placeBigStructureButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___placeBigStructureButton_11;
	// UnityEngine.Color UIController::outlineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___outlineColor_12;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> UIController::buttonList
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___buttonList_13;

public:
	inline static int32_t get_offset_of_OnRoadPlacement_4() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___OnRoadPlacement_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRoadPlacement_4() const { return ___OnRoadPlacement_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRoadPlacement_4() { return &___OnRoadPlacement_4; }
	inline void set_OnRoadPlacement_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRoadPlacement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRoadPlacement_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnHousePlacement_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___OnHousePlacement_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnHousePlacement_5() const { return ___OnHousePlacement_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnHousePlacement_5() { return &___OnHousePlacement_5; }
	inline void set_OnHousePlacement_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnHousePlacement_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHousePlacement_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpecialPlacement_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___OnSpecialPlacement_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSpecialPlacement_6() const { return ___OnSpecialPlacement_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSpecialPlacement_6() { return &___OnSpecialPlacement_6; }
	inline void set_OnSpecialPlacement_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSpecialPlacement_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpecialPlacement_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnBigStructurePlacement_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___OnBigStructurePlacement_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnBigStructurePlacement_7() const { return ___OnBigStructurePlacement_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnBigStructurePlacement_7() { return &___OnBigStructurePlacement_7; }
	inline void set_OnBigStructurePlacement_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnBigStructurePlacement_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBigStructurePlacement_7), (void*)value);
	}

	inline static int32_t get_offset_of_placeRoadButton_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___placeRoadButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_placeRoadButton_8() const { return ___placeRoadButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_placeRoadButton_8() { return &___placeRoadButton_8; }
	inline void set_placeRoadButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___placeRoadButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeRoadButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_placeHouseButton_9() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___placeHouseButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_placeHouseButton_9() const { return ___placeHouseButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_placeHouseButton_9() { return &___placeHouseButton_9; }
	inline void set_placeHouseButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___placeHouseButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeHouseButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_placeSpecialButton_10() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___placeSpecialButton_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_placeSpecialButton_10() const { return ___placeSpecialButton_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_placeSpecialButton_10() { return &___placeSpecialButton_10; }
	inline void set_placeSpecialButton_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___placeSpecialButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeSpecialButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_placeBigStructureButton_11() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___placeBigStructureButton_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_placeBigStructureButton_11() const { return ___placeBigStructureButton_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_placeBigStructureButton_11() { return &___placeBigStructureButton_11; }
	inline void set_placeBigStructureButton_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___placeBigStructureButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeBigStructureButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_outlineColor_12() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___outlineColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_outlineColor_12() const { return ___outlineColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_outlineColor_12() { return &___outlineColor_12; }
	inline void set_outlineColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___outlineColor_12 = value;
	}

	inline static int32_t get_offset_of_buttonList_13() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___buttonList_13)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_buttonList_13() const { return ___buttonList_13; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_buttonList_13() { return &___buttonList_13; }
	inline void set_buttonList_13(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___buttonList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonList_13), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;

public:
	inline static int32_t get_offset_of_m_EffectColor_5() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_EffectColor_5() const { return ___m_EffectColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_EffectColor_5() { return &___m_EffectColor_5; }
	inline void set_m_EffectColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_EffectColor_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_6() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectDistance_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_EffectDistance_6() const { return ___m_EffectDistance_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_EffectDistance_6() { return &___m_EffectDistance_6; }
	inline void set_m_EffectDistance_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_EffectDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_7() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_UseGraphicAlpha_7)); }
	inline bool get_m_UseGraphicAlpha_7() const { return ___m_UseGraphicAlpha_7; }
	inline bool* get_address_of_m_UseGraphicAlpha_7() { return &___m_UseGraphicAlpha_7; }
	inline void set_m_UseGraphicAlpha_7(bool value)
	{
		___m_UseGraphicAlpha_7 = value;
	}
};


// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2  : public Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CellType[0...,0...]
struct CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// CellType[]
struct CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D  : public RuntimeArray
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
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
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
// StructurePrefabWeighted[]
struct StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  m_Items[1];

public:
	inline StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefab_0), (void*)NULL);
	}
	inline StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefab_0), (void*)NULL);
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_gshared (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m83CEA3188B95CE961794B865E3D34575815841D0_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_mDA1DF0A63C6EBE16AAB34B08523B52D408EF3790_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9F6FE66133303B8D8BD726B882F6C72F05708805_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, RuntimeObject * ___key0, float ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3Int>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D_gshared (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3Int>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_gshared_inline (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3Int>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_gshared (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3Int>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_gshared (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93B04621288D2320063526D57E63C5828AC91356_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB2E1AEF30FA43411E64E9D0A05A753DA6EC3BECF * Dictionary_2_get_Values_mDDDFB1EA0B56D5587C5A1047E797A16A310B4E42_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B  ValueCollection_GetEnumerator_mDADBBB24E84C22DCC31AC642438175B7CA4FFD67_gshared (ValueCollection_tB2E1AEF30FA43411E64E9D0A05A753DA6EC3BECF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m8D5866462B373A731D788E432470B67998AD2D73_gshared_inline (Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m494D9E0692F7AE3883548EBF221FE1DA2ED61B77_gshared (Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD60E28BCBF61A46C7D10EA2C74E7B2E3081D5019_gshared (Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mDA54F9EF5CFEEEB88DD6F78C7447070AB786DB40_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE  Dictionary_2_GetEnumerator_mBCC98892BE6E1FB46BB14AEEC8625CB1E2F5A88F_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m62FD7D5DCF9787848BE010285625E3BF4B1A6D5F_gshared (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8CBD299F4694FBF338D5B9EF0BC6CCEA2BD81B85_gshared (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A767B1A8772CFAD962C8F70BAF4D03D79112F8B_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m7016424392EA506B0D2D8B84F85C1ED0CEC24881_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9C3273981F42B6D2E10C45DE98A87F523A7092AC_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m65EA70FC36AE05F395E036FE07698256E09C6339_gshared (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m258F4113BC9194792B0ECFA36D650EC018FEC6C9_gshared (RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDBE7CDEF0C76303B9F2A7DDDDEBABB7C6CD27560_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3Int>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_gshared (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_gshared (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3Int>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_gshared_inline (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// System.Void System.Func`2<StructurePrefabWeighted,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_gshared (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<StructurePrefabWeighted,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_gshared (RuntimeObject* ___source0, Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void GameManager::ClearInputActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261 (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void RoadManager::PlaceRoad(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 InputManager::get_CameraMovementVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputManager_get_CameraMovementVector_m904FDD0C7BC27FF44F6BA2979A802598D6C673E5_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void SVS.CameraMovement::MoveCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_MoveCamera_mA216C78834D4DB3FE3DC68A8FDA1BCC6A25E1977 (CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inputVector0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Point>::.ctor()
inline void List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Point>::Add(!0)
inline void List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Point>::Remove(!0)
inline bool List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Point>::get_Count()
inline int32_t List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32)
inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 Point::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method);
// System.Int32 Point::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> Grid::GetWakableAdjacentCells(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetWakableAdjacentCells_mFE42CA14E025873834E0CCE42118C9A7BA8B9412 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, bool ___isAgent2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> Grid::GetAllAdjacentCells(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAllAdjacentCells_mBD04B3B7FE1A00F7550064B37FC417A231477BD1 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Boolean Grid::IsCellWakable(CellType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Grid_IsCellWakable_mBD312C97C9AB4C51CC39DCA7EE41A01A2E37D71E (int32_t ___cellType0, bool ___aiAgent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Point>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Point,System.Single>::.ctor()
inline void Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0 (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *, const RuntimeMethod*))Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Point,Point>::.ctor()
inline void Dictionary_2__ctor_mF28B86EC88E1DDEFC2E37F2CF4657F68B5E2B5C5 (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Point,System.Single>::Add(!0,!1)
inline void Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, float, const RuntimeMethod*))Dictionary_2_Add_m83CEA3188B95CE961794B865E3D34575815841D0_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Point,Point>::Add(!0,!1)
inline void Dictionary_2_Add_mD9A2958AB4CC0634FFA3318EBF98FCEC6FECC5F4 (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// Point GridSearch::GetClosestVertex(System.Collections.Generic.List`1<Point>,System.Collections.Generic.Dictionary`2<Point,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * GridSearch_GetClosestVertex_m8CA5FA90104A64BFEC8BB1666A71B3591722CDAA (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___list0, Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * ___distanceMap1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> GridSearch::GeneratePath(System.Collections.Generic.Dictionary`2<Point,Point>,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * GridSearch_GeneratePath_m8F5E50AB428C604197DDCE9F8923E65B5FB6546F (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * ___parentMap0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endState1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> Grid::GetAdjacentCells(Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAdjacentCells_m70604C49C63338A38D7345D94AE46D589A71FB68 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___cell0, bool ___isAgent1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Point>::GetEnumerator()
inline Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Point>::get_Current()
inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	return ((  Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<Point,System.Single>::get_Item(!0)
inline float Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9 (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_get_Item_mDA1DF0A63C6EBE16AAB34B08523B52D408EF3790_gshared)(__this, ___key0, method);
}
// System.Single Grid::GetCostOfEnteringCell(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Grid_GetCostOfEnteringCell_m0D33CFDD5CF84819713E74B4707ADB2694E67978 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___cell0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Point,System.Single>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m8F0780E2076DBA6C34AF7555D4CD6F06AAC910FE (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m9F6FE66133303B8D8BD726B882F6C72F05708805_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Point,System.Single>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8 (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, float, const RuntimeMethod*))Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared)(__this, ___key0, ___value1, method);
}
// System.Single GridSearch::ManhattanDiscance(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridSearch_ManhattanDiscance_m9FD4329388EB13F00AB4C2765A57FB3FB8EEB223 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endPos0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___point1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Point,Point>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5619E8BB496683A10142E500135EBC98BF21C437 (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Point>::MoveNext()
inline bool Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591 (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Point>::Dispose()
inline void Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137 (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<Point,Point>::get_Item(!0)
inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Dictionary_2_get_Item_mF401D2D713A273E29430D1574BD702DBF5B3BE90 (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, const RuntimeMethod* method)
{
	return ((  Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * (*) (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Point,Point>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF26B53CDEA5319BA32AA18A6FB5B2445B604B6AB (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void InputManager::CheckClickDownEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickDownEvent_m5883A5488EAC0DA675911BB2A0B6044110D6D32C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void InputManager::CheckClickUpEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickUpEvent_m827D25FB80E7B0AD8A449722AD30A7B7CA953153 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void InputManager::CheckClickHoldEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickHoldEvent_mF4CD612D0A7E12AA5E3D9320089D3116A1D2E17C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Void InputManager::CheckArrowInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckArrowInput_m3A2391B6309F223823E9F1B975EC3B3A3FA411F4 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m46E12070D6996F4C8C91D49ADC27C74AC1D6A3D8 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.Vector3Int::RoundToInt(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3Int>::.ctor(!0)
inline void Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D_gshared)(__this, ___value0, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Vector3Int> InputManager::RaycastGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  InputManager_RaycastGround_m17AA155F0D811E5798007C662064BB2A5E4D1800 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3Int>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_inline (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *, const RuntimeMethod*))Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3Int>::get_Value()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89 (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *, const RuntimeMethod*))Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.Vector3Int>::Invoke(!0)
inline void Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9 (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Void Grid::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_mA2DAD1911BAC78C551142BDAB4B67C1E7132591C (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// CellType[] Grid::GetAllAdjacentCellTypes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* Grid_GetAllAdjacentCellTypes_m6E6A651804F98885136E5477C457EF0C5625168E (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// StructureModel PlacementManager::CreateANewStructureModel(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * PlacementManager_CreateANewStructureModel_m64942AE2A0B93D900DCC24D242B592C66BE9DEEC (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.Vector3Int::op_Addition(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_op_Addition_m8BC205CBD8491E7F5F4B13501C81714FF0959308_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___a0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___b1, const RuntimeMethod* method);
// System.Void Grid::set_Item(System.Int32,System.Int32,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_set_Item_m4F90BFBBEC04EFBCAD28A89824941A24E960F264 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___i0, int32_t ___j1, int32_t ___value2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::Add(!0,!1)
inline void Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 *, const RuntimeMethod*))Dictionary_2_Add_m93B04621288D2320063526D57E63C5828AC91356_gshared)(__this, ___key0, ___value1, method);
}
// System.Void PlacementManager::DestroyNatureAt(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_DestroyNatureAt_m5AC8A820951036E7351E4049979538BA66893C78 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3Int::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::BoxCastAll(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* Physics_BoxCastAll_m78CB1766D481BAFBB683DA2FF742C3C40BC99A9A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___halfExtents1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation3, float ___maxDistance4, int32_t ___layerMask5, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean PlacementManager::CheckIfPositionIsOfType(UnityEngine.Vector3Int,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionIsOfType_m0D6442B033CC62404D3A100902FD4292C0C4FAA4 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, int32_t ___type1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::get_Values()
inline ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * Dictionary_2_get_Values_mB640653DE886DA72C32445F417CE1AC5675B9707 (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, const RuntimeMethod*))Dictionary_2_get_Values_mDDDFB1EA0B56D5587C5A1047E797A16A310B4E42_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,StructureModel>::GetEnumerator()
inline Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3  ValueCollection_GetEnumerator_m97E2C0A5BFED4AD62CFE4BF3F656672D5EEF19C7 (ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3  (*) (ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 *, const RuntimeMethod*))ValueCollection_GetEnumerator_mDADBBB24E84C22DCC31AC642438175B7CA4FFD67_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,StructureModel>::get_Current()
inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * Enumerator_get_Current_mA808C1912871824F07571EBBC030CC8B8A4944C2_inline (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 * __this, const RuntimeMethod* method)
{
	return ((  StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * (*) (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *, const RuntimeMethod*))Enumerator_get_Current_m8D5866462B373A731D788E432470B67998AD2D73_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,StructureModel>::MoveNext()
inline bool Enumerator_MoveNext_mDA8D8EFF7F3B023F0DAACC7C74E6CDBD2CE9DC21 (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *, const RuntimeMethod*))Enumerator_MoveNext_m494D9E0692F7AE3883548EBF221FE1DA2ED61B77_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Vector3Int,StructureModel>::Dispose()
inline void Enumerator_Dispose_m9764E374F71287769E7EB41E9EE00912F95A4FA6 (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *, const RuntimeMethod*))Enumerator_Dispose_mD60E28BCBF61A46C7D10EA2C74E7B2E3081D5019_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::Clear()
inline void Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4 (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, const RuntimeMethod*))Dictionary_2_Clear_mDA54F9EF5CFEEEB88DD6F78C7447070AB786DB40_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Point> Grid::GetAdjacentCellsOfType(System.Int32,System.Int32,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAdjacentCellsOfType_mCAEF76AB53E5AD6EB4923CA2562DEF931685FF15 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, int32_t ___type2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::.ctor()
inline void List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Add(!0)
inline void List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<Point> GridSearch::AStarSearch(Grid,Point,Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * GridSearch_AStarSearch_m8797C0D0D3E0A4B5993C62193C148257031483A9 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * ___grid0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___startPosition1, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endPosition2, bool ___isAgent3, const RuntimeMethod* method);
// CellType Grid::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Grid_get_Item_m266904317C953BE3D81CC16CC59B390044805E59 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<StructureModel>()
inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * GameObject_AddComponent_TisStructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44_m6ED7F845B57D8DF3D63D327DC89AA2239AC4067F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void StructureModel::CreateModel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureModel_CreateModel_m7F544C3ED4D8CCCA782D21D59FAE740DD239BFDD (StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::GetEnumerator()
inline Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08  Dictionary_2_GetEnumerator_m42116A950F66B784E169DBBE00032E08A704868A (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08  (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mBCC98892BE6E1FB46BB14AEEC8625CB1E2F5A88F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,StructureModel>::get_Current()
inline KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  Enumerator_get_Current_m34A2FEF109786F79DF34C2F212384E53265ACB04_inline (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  (*) (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *, const RuntimeMethod*))Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,StructureModel>::get_Key()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_inline (KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,StructureModel>::get_Value()
inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * KeyValuePair_2_get_Value_m56BF886233B0AD8C44123444DDF4F52113637DC3_inline (KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 * __this, const RuntimeMethod* method)
{
	return ((  StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * (*) (KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,StructureModel>::MoveNext()
inline bool Enumerator_MoveNext_m8C6871B04EEF1AA36B782502B66DA734455B20B1 (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *, const RuntimeMethod*))Enumerator_MoveNext_m62FD7D5DCF9787848BE010285625E3BF4B1A6D5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,StructureModel>::Dispose()
inline void Enumerator_Dispose_mA9B483C6A791D9E283DBD0EFBEBA445FA2040D06 (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *, const RuntimeMethod*))Enumerator_Dispose_m8CBD299F4694FBF338D5B9EF0BC6CCEA2BD81B85_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591 (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))Dictionary_2_ContainsKey_m5A767B1A8772CFAD962C8F70BAF4D03D79112F8B_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::get_Item(!0)
inline StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31 (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method)
{
	return ((  StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))Dictionary_2_get_Item_m7016424392EA506B0D2D8B84F85C1ED0CEC24881_gshared)(__this, ___key0, method);
}
// System.Void StructureModel::SwapModel(UnityEngine.GameObject,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureModel_SwapModel_mFAF0A5C6355B005762FE3F9601B95B8B34820A47 (StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,StructureModel>::.ctor()
inline void Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *, const RuntimeMethod*))Dictionary_2__ctor_m9C3273981F42B6D2E10C45DE98A87F523A7092AC_gshared)(__this, method);
}
// System.Void Point::set_X(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_m24CE6466C5F811ED459C56E8E40E7CBE184E6FF9_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Point::set_Y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m9FDBF519C61AC5E20F1E10F2054BDBC61B5E3EED_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// CellType[] PlacementManager::GetNeighbourTypesFor(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* PlacementManager_GetNeighbourTypesFor_m10933F7C6024EDBB9F7B4D317098AA4885972087 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// System.Void System.Func`2<CellType,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA75C670956105463E8880AB8FABEB99969088D33 (Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m65EA70FC36AE05F395E036FE07698256E09C6339_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CellType>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m0C3E343D027F17AA04CB0A65CA6913D330650390 (RuntimeObject* ___source0, Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF *, const RuntimeMethod*))Enumerable_Where_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m258F4113BC9194792B0ECFA36D650EC018FEC6C9_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.Linq.Enumerable::Count<CellType>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m1601B3378044B52B7C0E7719F056413F6DBFB313 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mDBE7CDEF0C76303B9F2A7DDDDEBABB7C6CD27560_gshared)(___source0, method);
}
// System.Void RoadFixer::CreateDeadEnd(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateDeadEnd_mBDB5C5F7824EDE171001B00FC82C60ACD4FD7F93 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method);
// System.Boolean RoadFixer::CreateStraightRoad(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoadFixer_CreateStraightRoad_mF1E3B484DB43E6D85D4F9A58799F51C89D26EA5B (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method);
// System.Void RoadFixer::CreateCorner(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateCorner_m2B5D53BE0B50646783CC6429F07C6A13C3E6F825 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method);
// System.Void RoadFixer::CreateThreeWay(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateThreeWay_m8728842F2B10897A29DE3281943894BC42CFA098 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method);
// System.Void RoadFixer::CreateFourWay(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateFourWay_mB583427B6B267F5381996C019E605CC19F9B14DD (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method);
// System.Void PlacementManager::ModifyStructureModel(UnityEngine.Vector3Int,UnityEngine.GameObject,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newModel1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<RoadFixer>()
inline RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * Component_GetComponent_TisRoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0_mD1F270E6BA531EBC572A629ACD59A19930C8D41E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean PlacementManager::CheckIfPositionInBound(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionInBound_m04FE03EC70C1F41FBD581CF0EABF3B7CE9DBED9A (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, const RuntimeMethod* method);
// System.Boolean PlacementManager::CheckIfPositionIsFree(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionIsFree_m18378018FCCE58FA7C708C63394390A1366DF201 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Clear()
inline void List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816 (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_gshared)(__this, method);
}
// System.Void PlacementManager::PlaceTemporaryStructure(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceTemporaryStructure_m7E1C273E5A2C246F02FDB41994FD9EF9388C61C7 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, const RuntimeMethod* method);
// System.Void PlacementManager::RemoveAllTemporaryStructures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_RemoveAllTemporaryStructures_mEA86443116758DB2A2B4D631ED9CFDBBD4B97EDD (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3Int>::GetEnumerator()
inline Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::get_Current()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline)(__this, method);
}
// System.Void RoadFixer::FixRoadAtPosition(PlacementManager,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_FixRoadAtPosition_m1CD935E47E3DE0C10E2B7C11F5DFF9ECE1ADCD6B (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::MoveNext()
inline bool Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2 (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::Dispose()
inline void Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3Int> PlacementManager::GetPathBetween(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * PlacementManager_GetPathBetween_mDC6B31249749D6C08F04D6A5A682EC958D4318CB (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___startPosition0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___endPosition1, const RuntimeMethod* method);
// System.Void RoadManager::FixRoadPrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_FixRoadPrefabs_mC8C7FACE6C4EC73715595ADF754B9EA359CE9AA1 (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Vector3Int> PlacementManager::GetNeighboursOfTypeFor(UnityEngine.Vector3Int,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * PlacementManager_GetNeighboursOfTypeFor_m9CDDA50236A532CF729602A5A5FA4FBC822D5C7D (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, int32_t ___type1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Contains(!0)
inline bool List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF_gshared)(__this, ___item0, method);
}
// System.Void PlacementManager::AddTemporaryStructuresToStructureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_AddTemporaryStructuresToStructureDictionary_mE852FD7837FB1505C3AE0E16C143D42B80463BF9 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3Int>::get_Count()
inline int32_t List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_inline (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_gshared_inline)(__this, method);
}
// System.Void SVS.AudioPlayer::PlayPlacementSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA (AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.Vector3Int::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_get_zero_m9B7E460F38F93CC56871571709EA8EFC58DD3B58 (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsEscapePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsEscapePressed_mC694179281D2F4B20E831995751C70A26806488D (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsRightMouseButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsRightMouseButtonDown_m0DE4F75C0A0AE963F333712F226000E0AE2DC32A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsRightMouseButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsRightMouseButtonUp_mEDE93C76DE7120043B15F390865340D1C5165CE5 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsCameraRotationAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsCameraRotationAllowed_mABB9E26C1CC5C5643B305685F046B4B8493C7AFA (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityTemplateProjects.SimpleCameraController::GetInputLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleCameraController_GetInputLookRotation_m4F945850C9036FAF5C3436AA42A1C3CB918E1BB9 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsBoostPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsBoostPressed_m26120B18155EBB68597EA52F392AD1E59F9A71E0 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Single UnityTemplateProjects.SimpleCameraController::GetBoostFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleCameraController_GetBoostFactor_m42B667ADEACC6F9CF0E4B6549A501609A15716AE (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void System.Func`2<StructurePrefabWeighted,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673 (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<StructurePrefabWeighted,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD (RuntimeObject* ___source0, Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 *, const RuntimeMethod*))Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<!!0>)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_gshared)(___source0, method);
}
// System.Boolean StructureManager::ChekPoistionBeforePlacement(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_ChekPoistionBeforePlacement_m14E604408EE9A7736E583FA012CEC68369C8E6D2 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// System.Int32 StructureManager::GetRandomWeightedIndex(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StructureManager_GetRandomWeightedIndex_m94166FACC2BCFC494BAC7BC4C2C2FF704F90BF8C (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___weights0, const RuntimeMethod* method);
// System.Void PlacementManager::PlaceObjectOnTheMap(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceObjectOnTheMap_mC0881375943A0BD9ADE32E7521882AC930E281FF (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Boolean StructureManager::CheckBigStructure(UnityEngine.Vector3Int,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_CheckBigStructure_mF575781E6893637A1E8093BE070ACACB0F612729 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Boolean StructureManager::DefaultCheck(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_DefaultCheck_m97FA5F516721AF7AED0167DD8A9E98AE44E0B9ED (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// System.Boolean StructureManager::RoadCheck(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_RoadCheck_mD791189A3F58879E0336EE9B9D2E736410F8D003 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(!0)
inline void List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Outline>()
inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UIController::ResetButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method);
// System.Void UIController::ModifyOutline(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> GridSearch/SearchResult::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * SearchResult_get_Path_m3254D74077703401CFB054886E80763FAB6F6A6E_inline (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, const RuntimeMethod* method);
// System.Void GridSearch/SearchResult::set_Path(System.Collections.Generic.List`1<Point>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SearchResult_set_Path_m7954076DC1ED6A0B36F1B8EF019B530BFAB8E7C0_inline (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___value0, const RuntimeMethod* method);
// System.Void RoadFixer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AC4627111AE13CE7C4F488D1160C0ED80D39C61 (U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void StructureManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F7C6E2E253FCA5594102BA7CF11572FDAF9A1D3 (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SVS.AudioPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_Awake_m5ACC398361FF11C76C14F33556FBA47EDAD6501C (AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_0 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->set_instance_6(__this);
		return;
	}

IL_0014:
	{
		// else if (instance != this)
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_2 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void SVS.AudioPlayer::PlayPlacementSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA (AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(placementSound != null)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_placementSound_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// audioSource.PlayOneShot(placementSound);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_audioSource_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_placementSound_4();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SVS.AudioPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer__ctor_m9DF63792240E0DE857492365F33D60B6E60D467C (AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void SVS.CameraMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Start_m6C8CA7CFA86663B9A131941186539DF46F344315 (CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameCamera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_gameCamera_4(L_0);
		// }
		return;
	}
}
// System.Void SVS.CameraMovement::MoveCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_MoveCamera_mA216C78834D4DB3FE3DC68A8FDA1BCC6A25E1977 (CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inputVector0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var movementVector = Quaternion.Euler(0,30,0) * inputVector;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (30.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___inputVector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// gameCamera.transform.position += movementVector * Time.deltaTime * cameraMovementSpeed;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_gameCamera_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_cameraMovementSpeed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_11, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SVS.CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m92D6357B25A2E55CDE3EA2AAB2CEFF3B6F54C305 (CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * __this, const RuntimeMethod* method)
{
	{
		// public float cameraMovementSpeed = 5;
		__this->set_cameraMovementSpeed_5((5.0f));
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m90D0B6DEB625101355554D49B2EE2FB67C875860 (EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_BigStructurePlacementHandler_mECB6F25CF17F86BA71C156156ECB0BECF3D62435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_HousePlacementHandler_m88C777D169F402321E94CEE24F917E3F9CDF60E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_RoadPlacementHandler_mB89F3858EB561736385399678514E380624ABD21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_SpecialPlacementHandler_mBBD5E39CEC434DFDBBC5E08638A56CBC1E9BBDF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uiController.OnRoadPlacement += RoadPlacementHandler;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_0 = __this->get_uiController_7();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_1 = L_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1->get_OnRoadPlacement_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)GameManager_RoadPlacementHandler_mB89F3858EB561736385399678514E380624ABD21_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		L_1->set_OnRoadPlacement_4(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// uiController.OnHousePlacement += HousePlacementHandler;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_5 = __this->get_uiController_7();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_6 = L_5;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6->get_OnHousePlacement_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)GameManager_HousePlacementHandler_m88C777D169F402321E94CEE24F917E3F9CDF60E4_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_9;
		L_9 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_7, L_8, /*hidden argument*/NULL);
		L_6->set_OnHousePlacement_5(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_9, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// uiController.OnSpecialPlacement += SpecialPlacementHandler;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_10 = __this->get_uiController_7();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_11 = L_10;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = L_11->get_OnSpecialPlacement_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, __this, (intptr_t)((intptr_t)GameManager_SpecialPlacementHandler_mBBD5E39CEC434DFDBBC5E08638A56CBC1E9BBDF3_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_14;
		L_14 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_12, L_13, /*hidden argument*/NULL);
		L_11->set_OnSpecialPlacement_6(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_14, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// uiController.OnBigStructurePlacement += BigStructurePlacementHandler;
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_15 = __this->get_uiController_7();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_16 = L_15;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = L_16->get_OnBigStructurePlacement_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_18, __this, (intptr_t)((intptr_t)GameManager_BigStructurePlacementHandler_mECB6F25CF17F86BA71C156156ECB0BECF3D62435_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_19;
		L_19 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_17, L_18, /*hidden argument*/NULL);
		L_16->set_OnBigStructurePlacement_7(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_19, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameManager::BigStructurePlacementHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_BigStructurePlacementHandler_mECB6F25CF17F86BA71C156156ECB0BECF3D62435 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructureManager_PlaceBigStructure_m7A55F80EF69C7BBBA5EE71A776B4696212AB47DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearInputActions();
		GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266(__this, /*hidden argument*/NULL);
		// inputManager.OnMouseClick += structureManager.PlaceBigStructure;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = L_0;
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_2 = L_1->get_OnMouseClick_4();
		StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * L_3 = __this->get_structureManager_8();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_4 = (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)il2cpp_codegen_object_new(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261(L_4, L_3, (intptr_t)((intptr_t)StructureManager_PlaceBigStructure_m7A55F80EF69C7BBBA5EE71A776B4696212AB47DF_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_4, /*hidden argument*/NULL);
		L_1->set_OnMouseClick_4(((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)CastclassSealed((RuntimeObject*)L_5, Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameManager::SpecialPlacementHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpecialPlacementHandler_mBBD5E39CEC434DFDBBC5E08638A56CBC1E9BBDF3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructureManager_PlaceSpecial_mB6A2B0E69B3754471E0A176966653FF58DA6BCF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearInputActions();
		GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266(__this, /*hidden argument*/NULL);
		// inputManager.OnMouseClick += structureManager.PlaceSpecial;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = L_0;
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_2 = L_1->get_OnMouseClick_4();
		StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * L_3 = __this->get_structureManager_8();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_4 = (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)il2cpp_codegen_object_new(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261(L_4, L_3, (intptr_t)((intptr_t)StructureManager_PlaceSpecial_mB6A2B0E69B3754471E0A176966653FF58DA6BCF4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_4, /*hidden argument*/NULL);
		L_1->set_OnMouseClick_4(((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)CastclassSealed((RuntimeObject*)L_5, Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameManager::HousePlacementHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HousePlacementHandler_m88C777D169F402321E94CEE24F917E3F9CDF60E4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructureManager_PlaceHouse_m3B227003DEBF1C9060C9C288579AC22A92F4530A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearInputActions();
		GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266(__this, /*hidden argument*/NULL);
		// inputManager.OnMouseClick += structureManager.PlaceHouse;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = L_0;
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_2 = L_1->get_OnMouseClick_4();
		StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * L_3 = __this->get_structureManager_8();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_4 = (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)il2cpp_codegen_object_new(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261(L_4, L_3, (intptr_t)((intptr_t)StructureManager_PlaceHouse_m3B227003DEBF1C9060C9C288579AC22A92F4530A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_4, /*hidden argument*/NULL);
		L_1->set_OnMouseClick_4(((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)CastclassSealed((RuntimeObject*)L_5, Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameManager::RoadPlacementHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RoadPlacementHandler_mB89F3858EB561736385399678514E380624ABD21 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoadManager_FinishPlacingRoad_m18C6E2D2F5562269D8A64229D20CA486DFBC9837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearInputActions();
		GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266(__this, /*hidden argument*/NULL);
		// inputManager.OnMouseHold += roadManager.PlaceRoad;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = L_0;
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_2 = L_1->get_OnMouseHold_5();
		RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * L_3 = __this->get_roadManager_5();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_4 = (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)il2cpp_codegen_object_new(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261(L_4, L_3, (intptr_t)((intptr_t)RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_4, /*hidden argument*/NULL);
		L_1->set_OnMouseHold_5(((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)CastclassSealed((RuntimeObject*)L_5, Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var)));
		// inputManager.OnMouseUp += roadManager.FinishPlacingRoad;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_6 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_7 = L_6;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = L_7->get_OnMouseUp_6();
		RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * L_9 = __this->get_roadManager_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)RoadManager_FinishPlacingRoad_m18C6E2D2F5562269D8A64229D20CA486DFBC9837_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_11;
		L_11 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_8, L_10, /*hidden argument*/NULL);
		L_7->set_OnMouseUp_6(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_11, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// inputManager.OnMouseClick += roadManager.PlaceRoad;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_12 = __this->get_inputManager_6();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_13 = L_12;
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_14 = L_13->get_OnMouseClick_4();
		RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * L_15 = __this->get_roadManager_5();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_16 = (Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)il2cpp_codegen_object_new(Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var);
		Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261(L_16, L_15, (intptr_t)((intptr_t)RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m98D88688A5D8D25C8A8E77D44B28B0580AC4B261_RuntimeMethod_var);
		Delegate_t * L_17;
		L_17 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_14, L_16, /*hidden argument*/NULL);
		L_13->set_OnMouseClick_4(((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)CastclassSealed((RuntimeObject*)L_17, Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameManager::ClearInputActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearInputActions_m3FF188D4E6AE327861B364165569511B50E25266 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// inputManager.OnMouseHold = null;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_6();
		L_0->set_OnMouseHold_5((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)NULL);
		// inputManager.OnMouseUp = null;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_6();
		L_1->set_OnMouseUp_6((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL);
		// inputManager.OnMouseClick = null;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = __this->get_inputManager_6();
		L_2->set_OnMouseClick_4((Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B *)NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleMouseClick(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleMouseClick_mCB0840F7506695A33E963C04E5A77597EAC5C99D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___poisition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(poisition);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___poisition0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// roadManager.PlaceRoad(poisition);
		RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * L_3 = __this->get_roadManager_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___poisition0;
		RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// cameraMovement.MoveCamera(new Vector3(inputManager.CameraMovementVector.x, 0, inputManager.CameraMovementVector.y));
		CameraMovement_t1AED5A735D2991740B0C3FB416DDE8016B7F5A01 * L_0 = __this->get_cameraMovement_4();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = InputManager_get_CameraMovementVector_m904FDD0C7BC27FF44F6BA2979A802598D6C673E5_inline(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_4 = __this->get_inputManager_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = InputManager_get_CameraMovementVector_m904FDD0C7BC27FF44F6BA2979A802598D6C673E5_inline(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_3, (0.0f), L_6, /*hidden argument*/NULL);
		CameraMovement_MoveCamera_mA216C78834D4DB3FE3DC68A8FDA1BCC6A25E1977(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
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
// System.Int32 Grid::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Grid_get_Width_mFEF561B7C7045403D3412F097398338CD747D0C1 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	{
		// public int Width { get { return _width; } }
		int32_t L_0 = __this->get__width_1();
		return L_0;
	}
}
// System.Int32 Grid::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Grid_get_Height_m66DAC199D91D3EEB45D152AB89AF518E204AB66D (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	{
		// public int Height { get { return _height; } }
		int32_t L_0 = __this->get__height_2();
		return L_0;
	}
}
// System.Void Grid::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_mA2DAD1911BAC78C551142BDAB4B67C1E7132591C (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Point> _roadList = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_0, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		__this->set__roadList_3(L_0);
		// private List<Point> _specialStructure = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_1 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_1, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		__this->set__specialStructure_4(L_1);
		// public Grid(int width, int height)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _width = width;
		int32_t L_2 = ___width0;
		__this->set__width_1(L_2);
		// _height = height;
		int32_t L_3 = ___height1;
		__this->set__height_2(L_3);
		// _grid = new CellType[width, height];
		int32_t L_4 = ___width0;
		int32_t L_5 = ___height1;
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_4, (il2cpp_array_size_t)L_5 };
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_6 = (CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5*)GenArrayNew(CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5_il2cpp_TypeInfo_var, L_7);
		__this->set__grid_0(L_6);
		// }
		return;
	}
}
// CellType Grid::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Grid_get_Item_m266904317C953BE3D81CC16CC59B390044805E59 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		// return _grid[i, j];
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_0 = __this->get__grid_0();
		int32_t L_1 = ___i0;
		int32_t L_2 = ___j1;
		int32_t L_3;
		L_3 = (L_0)->GetAtUnchecked(L_1, L_2);
		return L_3;
	}
}
// System.Void Grid::set_Item(System.Int32,System.Int32,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_set_Item_m4F90BFBBEC04EFBCAD28A89824941A24E960F264 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___i0, int32_t ___j1, int32_t ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == CellType.Road)
		int32_t L_0 = ___value2;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// _roadList.Add(new Point(i, j));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_1 = __this->get__roadList_3();
		int32_t L_2 = ___i0;
		int32_t L_3 = ___j1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_4, L_2, L_3, /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_1, L_4, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// }
		goto IL_002b;
	}

IL_0018:
	{
		// _roadList.Remove(new Point(i, j));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_5 = __this->get__roadList_3();
		int32_t L_6 = ___i0;
		int32_t L_7 = ___j1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_8, L_6, L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2(L_5, L_8, /*hidden argument*/List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (value == CellType.SpecialStructure)
		int32_t L_10 = ___value2;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0043;
		}
	}
	{
		// _specialStructure.Add(new Point(i, j));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_11 = __this->get__specialStructure_4();
		int32_t L_12 = ___i0;
		int32_t L_13 = ___j1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_14 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_14, L_12, L_13, /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_11, L_14, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// }
		goto IL_0056;
	}

IL_0043:
	{
		// _specialStructure.Remove(new Point(i, j));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_15 = __this->get__specialStructure_4();
		int32_t L_16 = ___i0;
		int32_t L_17 = ___j1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_18 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_18, L_16, L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2(L_15, L_18, /*hidden argument*/List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var);
	}

IL_0056:
	{
		// _grid[i, j] = value;
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_20 = __this->get__grid_0();
		int32_t L_21 = ___i0;
		int32_t L_22 = ___j1;
		int32_t L_23 = ___value2;
		(L_20)->SetAtUnchecked(L_21, L_22, L_23);
		// }
		return;
	}
}
// System.Boolean Grid::IsCellWakable(CellType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Grid_IsCellWakable_mBD312C97C9AB4C51CC39DCA7EE41A01A2E37D71E (int32_t ___cellType0, bool ___aiAgent1, const RuntimeMethod* method)
{
	{
		// if (aiAgent)
		bool L_0 = ___aiAgent1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return cellType == CellType.Road;
		int32_t L_1 = ___cellType0;
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}

IL_0008:
	{
		// return cellType == CellType.Empty || cellType == CellType.Road;
		int32_t L_2 = ___cellType0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = ___cellType0;
		return (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}

IL_0010:
	{
		return (bool)1;
	}
}
// Point Grid::GetRandomRoadPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Grid_GetRandomRoadPoint_m5779D72447B215E1305EEFFB5F601C2B1633385F (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	{
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// return _roadList[rand.Next(0, _roadList.Count - 1)];
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_1 = __this->get__roadList_3();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = V_0;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_3 = __this->get__roadList_3();
		int32_t L_4;
		L_4 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_3, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6;
		L_6 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_1, L_5, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		return L_6;
	}
}
// Point Grid::GetRandomSpecialStructurePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Grid_GetRandomSpecialStructurePoint_m44A1F73C8B1D3550A28E1A34BFA67F0F0E3A2F6F (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	{
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// return _roadList[rand.Next(0, _roadList.Count - 1)];
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_1 = __this->get__roadList_3();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = V_0;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_3 = __this->get__roadList_3();
		int32_t L_4;
		L_4 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_3, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		int32_t L_5;
		L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6;
		L_6 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_1, L_5, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.List`1<Point> Grid::GetAdjacentCells(Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAdjacentCells_m70604C49C63338A38D7345D94AE46D589A71FB68 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___cell0, bool ___isAgent1, const RuntimeMethod* method)
{
	{
		// return GetWakableAdjacentCells((int)cell.X, (int)cell.Y, isAgent);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___cell0;
		int32_t L_1;
		L_1 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_0, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___cell0;
		int32_t L_3;
		L_3 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_2, /*hidden argument*/NULL);
		bool L_4 = ___isAgent1;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_5;
		L_5 = Grid_GetWakableAdjacentCells_mFE42CA14E025873834E0CCE42118C9A7BA8B9412(__this, L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Grid::GetCostOfEnteringCell(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Grid_GetCostOfEnteringCell_m0D33CFDD5CF84819713E74B4707ADB2694E67978 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___cell0, const RuntimeMethod* method)
{
	{
		// return 1;
		return (1.0f);
	}
}
// System.Collections.Generic.List`1<Point> Grid::GetAllAdjacentCells(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAllAdjacentCells_mBD04B3B7FE1A00F7550064B37FC417A231477BD1 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	{
		// List<Point> adjacentCells = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_0, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_0 = L_0;
		// if (x > 0)
		int32_t L_1 = ___x0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// adjacentCells.Add(new Point(x - 1, y));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_2 = V_0;
		int32_t L_3 = ___x0;
		int32_t L_4 = ___y1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_5 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), L_4, /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_2, L_5, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (x < _width - 1)
		int32_t L_6 = ___x0;
		int32_t L_7 = __this->get__width_1();
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0033;
		}
	}
	{
		// adjacentCells.Add(new Point(x + 1, y));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_8 = V_0;
		int32_t L_9 = ___x0;
		int32_t L_10 = ___y1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), L_10, /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_8, L_11, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
	}

IL_0033:
	{
		// if (y > 0)
		int32_t L_12 = ___y1;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// adjacentCells.Add(new Point(x, y - 1));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_13 = V_0;
		int32_t L_14 = ___x0;
		int32_t L_15 = ___y1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_16 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_16, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_13, L_16, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
	}

IL_0046:
	{
		// if (y < _height - 1)
		int32_t L_17 = ___y1;
		int32_t L_18 = __this->get__height_2();
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)))))
		{
			goto IL_0060;
		}
	}
	{
		// adjacentCells.Add(new Point(x, y + 1));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_19 = V_0;
		int32_t L_20 = ___x0;
		int32_t L_21 = ___y1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_22 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_22, L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_19, L_22, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
	}

IL_0060:
	{
		// return adjacentCells;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.Generic.List`1<Point> Grid::GetWakableAdjacentCells(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetWakableAdjacentCells_mFE42CA14E025873834E0CCE42118C9A7BA8B9412 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, bool ___isAgent2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<Point> adjacentCells = GetAllAdjacentCells(x, y);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_2;
		L_2 = Grid_GetAllAdjacentCells_mBD04B3B7FE1A00F7550064B37FC417A231477BD1(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_3 = V_0;
		int32_t L_4;
		L_4 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_3, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_004a;
	}

IL_0014:
	{
		// if(IsCellWakable(_grid[adjacentCells[i].X, adjacentCells[i].Y], isAgent)==false)
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_5 = __this->get__grid_0();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_6 = V_0;
		int32_t L_7 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8;
		L_8 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		int32_t L_9;
		L_9 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_8, /*hidden argument*/NULL);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_10 = V_0;
		int32_t L_11 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_12;
		L_12 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = (L_5)->GetAtUnchecked(L_9, L_13);
		bool L_15 = ___isAgent2;
		bool L_16;
		L_16 = Grid_IsCellWakable_mBD312C97C9AB4C51CC39DCA7EE41A01A2E37D71E(L_14, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0046;
		}
	}
	{
		// adjacentCells.RemoveAt(i);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_17 = V_0;
		int32_t L_18 = V_1;
		List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017(L_17, L_18, /*hidden argument*/List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017_RuntimeMethod_var);
	}

IL_0046:
	{
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// return adjacentCells;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_21 = V_0;
		return L_21;
	}
}
// System.Collections.Generic.List`1<Point> Grid::GetAdjacentCellsOfType(System.Int32,System.Int32,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Grid_GetAdjacentCellsOfType_mCAEF76AB53E5AD6EB4923CA2562DEF931685FF15 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<Point> adjacentCells = GetAllAdjacentCells(x, y);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_2;
		L_2 = Grid_GetAllAdjacentCells_mBD04B3B7FE1A00F7550064B37FC417A231477BD1(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_3 = V_0;
		int32_t L_4;
		L_4 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_3, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_0045;
	}

IL_0014:
	{
		// if (_grid[adjacentCells[i].X, adjacentCells[i].Y] != type)
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_5 = __this->get__grid_0();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_6 = V_0;
		int32_t L_7 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8;
		L_8 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		int32_t L_9;
		L_9 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_8, /*hidden argument*/NULL);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_10 = V_0;
		int32_t L_11 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_12;
		L_12 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = (L_5)->GetAtUnchecked(L_9, L_13);
		int32_t L_15 = ___type2;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		// adjacentCells.RemoveAt(i);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_16 = V_0;
		int32_t L_17 = V_1;
		List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017(L_16, L_17, /*hidden argument*/List_1_RemoveAt_mF92A507C903CF37B4E819F812B27581009FB2017_RuntimeMethod_var);
	}

IL_0041:
	{
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = adjacentCells.Count - 1; i >= 0; i--)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// return adjacentCells;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_20 = V_0;
		return L_20;
	}
}
// CellType[] Grid::GetAllAdjacentCellTypes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* Grid_GetAllAdjacentCellTypes_m6E6A651804F98885136E5477C457EF0C5625168E (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* V_0 = NULL;
	{
		// CellType[] neighbours = { CellType.None, CellType.None, CellType.None, CellType.None };
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_0 = (CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D*)(CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D*)SZArrayNew(CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D_il2cpp_TypeInfo_var, (uint32_t)4);
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____E55F704330DD9C3CBC2CFED14EFDE2376F64EC3C9985B7758E934DDAEBBCE20C_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (x > 0)
		int32_t L_3 = ___x0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// neighbours[0] = _grid[x - 1, y];
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_4 = V_0;
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_5 = __this->get__grid_0();
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		int32_t L_8;
		L_8 = (L_5)->GetAtUnchecked(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_8);
	}

IL_0028:
	{
		// if (x < _width - 1)
		int32_t L_9 = ___x0;
		int32_t L_10 = __this->get__width_1();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0045;
		}
	}
	{
		// neighbours[2] = _grid[x + 1, y];
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_11 = V_0;
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_12 = __this->get__grid_0();
		int32_t L_13 = ___x0;
		int32_t L_14 = ___y1;
		int32_t L_15;
		L_15 = (L_12)->GetAtUnchecked(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_15);
	}

IL_0045:
	{
		// if (y > 0)
		int32_t L_16 = ___y1;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// neighbours[3] = _grid[x, y - 1];
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_17 = V_0;
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_18 = __this->get__grid_0();
		int32_t L_19 = ___x0;
		int32_t L_20 = ___y1;
		int32_t L_21;
		L_21 = (L_18)->GetAtUnchecked(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)L_21);
	}

IL_005b:
	{
		// if (y < _height - 1)
		int32_t L_22 = ___y1;
		int32_t L_23 = __this->get__height_2();
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)))))
		{
			goto IL_0078;
		}
	}
	{
		// neighbours[1] = _grid[x, y + 1];
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_24 = V_0;
		CellTypeU5BU2CU5D_tEEB28A2B9EA0F108C2638A99B6B5D442779F06A5* L_25 = __this->get__grid_0();
		int32_t L_26 = ___x0;
		int32_t L_27 = ___y1;
		int32_t L_28;
		L_28 = (L_25)->GetAtUnchecked(L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_28);
	}

IL_0078:
	{
		// return neighbours;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_29 = V_0;
		return L_29;
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
// System.Collections.Generic.List`1<Point> GridSearch::AStarSearch(Grid,Point,Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * GridSearch_AStarSearch_m8797C0D0D3E0A4B5993C62193C148257031483A9 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * ___grid0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___startPosition1, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endPosition2, bool ___isAgent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD9A2958AB4CC0634FFA3318EBF98FCEC6FECC5F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8F0780E2076DBA6C34AF7555D4CD6F06AAC910FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF28B86EC88E1DDEFC2E37F2CF4657F68B5E2B5C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5619E8BB496683A10142E500135EBC98BF21C437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_1 = NULL;
	Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * V_2 = NULL;
	Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * V_3 = NULL;
	Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * V_4 = NULL;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_5 = NULL;
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Point> path = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_0, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_0 = L_0;
		// List<Point> positionsTocheck = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_1 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_1, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_1 = L_1;
		// Dictionary<Point, float> costDictionary = new Dictionary<Point, float>();
		Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_2 = (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *)il2cpp_codegen_object_new(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0(L_2, /*hidden argument*/Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0_RuntimeMethod_var);
		V_2 = L_2;
		// Dictionary<Point, float> priorityDictionary = new Dictionary<Point, float>();
		Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_3 = (Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 *)il2cpp_codegen_object_new(Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0(L_3, /*hidden argument*/Dictionary_2__ctor_m79FCA68E60008DD9C364D35DAE2CBF0F49AAB9B0_RuntimeMethod_var);
		V_3 = L_3;
		// Dictionary<Point, Point> parentsDictionary = new Dictionary<Point, Point>();
		Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_4 = (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 *)il2cpp_codegen_object_new(Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF28B86EC88E1DDEFC2E37F2CF4657F68B5E2B5C5(L_4, /*hidden argument*/Dictionary_2__ctor_mF28B86EC88E1DDEFC2E37F2CF4657F68B5E2B5C5_RuntimeMethod_var);
		V_4 = L_4;
		// positionsTocheck.Add(startPosition);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_5 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = ___startPosition1;
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_5, L_6, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// priorityDictionary.Add(startPosition, 0);
		Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_7 = V_3;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = ___startPosition1;
		Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B(L_7, L_8, (0.0f), /*hidden argument*/Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B_RuntimeMethod_var);
		// costDictionary.Add(startPosition, 0);
		Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_9 = V_2;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_10 = ___startPosition1;
		Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B(L_9, L_10, (0.0f), /*hidden argument*/Dictionary_2_Add_m97250C6F782FAA52E5855BC48B841E2687C27A7B_RuntimeMethod_var);
		// parentsDictionary.Add(startPosition, null);
		Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_11 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_12 = ___startPosition1;
		Dictionary_2_Add_mD9A2958AB4CC0634FFA3318EBF98FCEC6FECC5F4(L_11, L_12, (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)NULL, /*hidden argument*/Dictionary_2_Add_mD9A2958AB4CC0634FFA3318EBF98FCEC6FECC5F4_RuntimeMethod_var);
		goto IL_0105;
	}

IL_004c:
	{
		// Point current = GetClosestVertex(positionsTocheck, priorityDictionary);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_13 = V_1;
		Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_14 = V_3;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_15;
		L_15 = GridSearch_GetClosestVertex_m8CA5FA90104A64BFEC8BB1666A71B3591722CDAA(L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// positionsTocheck.Remove(current);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_16 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_17 = V_5;
		bool L_18;
		L_18 = List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2(L_16, L_17, /*hidden argument*/List_1_Remove_m1870181EC527F320C356A59F7C0D263660FE06B2_RuntimeMethod_var);
		// if (current.Equals(endPosition))
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_19 = V_5;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_20 = ___endPosition2;
		bool L_21;
		L_21 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_19, L_20);
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		// path = GeneratePath(parentsDictionary, current);
		Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_22 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_23 = V_5;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_24;
		L_24 = GridSearch_GeneratePath_m8F5E50AB428C604197DDCE9F8923E65B5FB6546F(L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		// return path;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_25 = V_0;
		return L_25;
	}

IL_0074:
	{
		// foreach (Point neighbour in grid.GetAdjacentCells(current, isAgent))
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_26 = ___grid0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_27 = V_5;
		bool L_28 = ___isAgent3;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_29;
		L_29 = Grid_GetAdjacentCells_m70604C49C63338A38D7345D94AE46D589A71FB68(L_26, L_27, L_28, /*hidden argument*/NULL);
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_30;
		L_30 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_29, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_6 = L_30;
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ec;
		}

IL_0086:
		{
			// foreach (Point neighbour in grid.GetAdjacentCells(current, isAgent))
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_31;
			L_31 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_6), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_7 = L_31;
			// float newCost = costDictionary[current] + grid.GetCostOfEnteringCell(neighbour);
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_32 = V_2;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_33 = V_5;
			float L_34;
			L_34 = Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9(L_32, L_33, /*hidden argument*/Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
			Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_35 = ___grid0;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_36 = V_7;
			float L_37;
			L_37 = Grid_GetCostOfEnteringCell_m0D33CFDD5CF84819713E74B4707ADB2694E67978(L_35, L_36, /*hidden argument*/NULL);
			V_8 = ((float)il2cpp_codegen_add((float)L_34, (float)L_37));
			// if (!costDictionary.ContainsKey(neighbour) || newCost < costDictionary[neighbour])
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_38 = V_2;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_39 = V_7;
			bool L_40;
			L_40 = Dictionary_2_ContainsKey_m8F0780E2076DBA6C34AF7555D4CD6F06AAC910FE(L_38, L_39, /*hidden argument*/Dictionary_2_ContainsKey_m8F0780E2076DBA6C34AF7555D4CD6F06AAC910FE_RuntimeMethod_var);
			if (!L_40)
			{
				goto IL_00b8;
			}
		}

IL_00ac:
		{
			float L_41 = V_8;
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_42 = V_2;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_43 = V_7;
			float L_44;
			L_44 = Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9(L_42, L_43, /*hidden argument*/Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
			if ((!(((float)L_41) < ((float)L_44))))
			{
				goto IL_00ec;
			}
		}

IL_00b8:
		{
			// costDictionary[neighbour] = newCost;
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_45 = V_2;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_46 = V_7;
			float L_47 = V_8;
			Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8(L_45, L_46, L_47, /*hidden argument*/Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8_RuntimeMethod_var);
			// float priority = newCost + ManhattanDiscance(endPosition, neighbour);
			float L_48 = V_8;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_49 = ___endPosition2;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_50 = V_7;
			float L_51;
			L_51 = GridSearch_ManhattanDiscance_m9FD4329388EB13F00AB4C2765A57FB3FB8EEB223(L_49, L_50, /*hidden argument*/NULL);
			V_9 = ((float)il2cpp_codegen_add((float)L_48, (float)L_51));
			// positionsTocheck.Add(neighbour);
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_52 = V_1;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_53 = V_7;
			List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_52, L_53, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
			// priorityDictionary[neighbour] = priority;
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_54 = V_3;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_55 = V_7;
			float L_56 = V_9;
			Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8(L_54, L_55, L_56, /*hidden argument*/Dictionary_2_set_Item_m8284B037FEC98D8DD00FA157110668891007D0C8_RuntimeMethod_var);
			// parentsDictionary[neighbour] = current;
			Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_57 = V_4;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_58 = V_7;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_59 = V_5;
			Dictionary_2_set_Item_m5619E8BB496683A10142E500135EBC98BF21C437(L_57, L_58, L_59, /*hidden argument*/Dictionary_2_set_Item_m5619E8BB496683A10142E500135EBC98BF21C437_RuntimeMethod_var);
		}

IL_00ec:
		{
			// foreach (Point neighbour in grid.GetAdjacentCells(current, isAgent))
			bool L_60;
			L_60 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_60)
			{
				goto IL_0086;
			}
		}

IL_00f5:
		{
			IL2CPP_LEAVE(0x105, FINALLY_00f7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f7;
	}

FINALLY_00f7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_6), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(247)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(247)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x105, IL_0105)
	}

IL_0105:
	{
		// while (positionsTocheck.Count > 0)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_61 = V_1;
		int32_t L_62;
		L_62 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_61, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		if ((((int32_t)L_62) > ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// return path;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_63 = V_0;
		return L_63;
	}
}
// Point GridSearch::GetClosestVertex(System.Collections.Generic.List`1<Point>,System.Collections.Generic.Dictionary`2<Point,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * GridSearch_GetClosestVertex_m8CA5FA90104A64BFEC8BB1666A71B3591722CDAA (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___list0, Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * ___distanceMap1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_0 = NULL;
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Point candidate = list[0];
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = ___list0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1;
		L_1 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_0, 0, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (Point vertex in list)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_2 = ___list0;
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_3;
		L_3 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_2, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0011:
		{
			// foreach (Point vertex in list)
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4;
			L_4 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_2 = L_4;
			// if (distanceMap[vertex] < distanceMap[candidate])
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_5 = ___distanceMap1;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = V_2;
			float L_7;
			L_7 = Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
			Dictionary_2_t366FE985DEFF6390B32998CE773E49B761744EC7 * L_8 = ___distanceMap1;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_9 = V_0;
			float L_10;
			L_10 = Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mB2868AF2A501FCB453A0DB644633E45F3C5A09F9_RuntimeMethod_var);
			if ((!(((float)L_7) < ((float)L_10))))
			{
				goto IL_002b;
			}
		}

IL_0029:
		{
			// candidate = vertex;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11 = V_2;
			V_0 = L_11;
		}

IL_002b:
		{
			// foreach (Point vertex in list)
			bool L_12;
			L_12 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0011;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// return candidate;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_13 = V_0;
		return L_13;
	}
}
// System.Single GridSearch::ManhattanDiscance(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridSearch_ManhattanDiscance_m9FD4329388EB13F00AB4C2765A57FB3FB8EEB223 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endPos0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(endPos.X - point.X) + Math.Abs(endPos.Y - point.Y);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___endPos0;
		int32_t L_1;
		L_1 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_0, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___point1;
		int32_t L_3;
		L_3 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3)));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_5 = ___endPos0;
		int32_t L_6;
		L_6 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_5, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = ___point1;
		int32_t L_8;
		L_8 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)));
		return ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_9))));
	}
}
// System.Collections.Generic.List`1<Point> GridSearch::GeneratePath(System.Collections.Generic.Dictionary`2<Point,Point>,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * GridSearch_GeneratePath_m8F5E50AB428C604197DDCE9F8923E65B5FB6546F (Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * ___parentMap0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___endState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF26B53CDEA5319BA32AA18A6FB5B2445B604B6AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF401D2D713A273E29430D1574BD702DBF5B3BE90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_1 = NULL;
	{
		// List<Point> path = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_0, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_0 = L_0;
		// Point parent = endState;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___endState1;
		V_1 = L_1;
		goto IL_0019;
	}

IL_000a:
	{
		// path.Add(parent);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_2 = V_0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = V_1;
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_2, L_3, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// parent = parentMap[parent];
		Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_4 = ___parentMap0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_5 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6;
		L_6 = Dictionary_2_get_Item_mF401D2D713A273E29430D1574BD702DBF5B3BE90(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mF401D2D713A273E29430D1574BD702DBF5B3BE90_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0019:
	{
		// while (parent != null && parentMap.ContainsKey(parent))
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t48D90E28C43B5FDF726C2BE1993BC4EEA2179130 * L_8 = ___parentMap0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_9 = V_1;
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_mF26B53CDEA5319BA32AA18A6FB5B2445B604B6AB(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_mF26B53CDEA5319BA32AA18A6FB5B2445B604B6AB_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_000a;
		}
	}

IL_0025:
	{
		// return path;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_11 = V_0;
		return L_11;
	}
}
// System.Void GridSearch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridSearch__ctor_m4F20EFB6F2FF1446E019F1402AC3E8F6430D0738 (GridSearch_tF2269CDFC0720AE440E7365F8B845102BB0E8E51 * __this, const RuntimeMethod* method)
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
// UnityEngine.Vector2 InputManager::get_CameraMovementVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputManager_get_CameraMovementVector_m904FDD0C7BC27FF44F6BA2979A802598D6C673E5 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// get { return cameraMovementVector; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_cameraMovementVector_7();
		return L_0;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_mE17FD2A03E0E1BE94DFE0B0AB4B5B9C5F3EA285B (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// CheckClickDownEvent();
		InputManager_CheckClickDownEvent_m5883A5488EAC0DA675911BB2A0B6044110D6D32C(__this, /*hidden argument*/NULL);
		// CheckClickUpEvent();
		InputManager_CheckClickUpEvent_m827D25FB80E7B0AD8A449722AD30A7B7CA953153(__this, /*hidden argument*/NULL);
		// CheckClickHoldEvent();
		InputManager_CheckClickHoldEvent_mF4CD612D0A7E12AA5E3D9320089D3116A1D2E17C(__this, /*hidden argument*/NULL);
		// CheckArrowInput();
		InputManager_CheckArrowInput_m3A2391B6309F223823E9F1B975EC3B3A3FA411F4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.Vector3Int> InputManager::RaycastGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  InputManager_RaycastGround_m17AA155F0D811E5798007C662064BB2A5E4D1800 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_mainCamera_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_2;
		L_2 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_1, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit, Mathf.Infinity, groundMask))
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_groundMask_9();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_Raycast_m46E12070D6996F4C8C91D49ADC27C74AC1D6A3D8(L_2, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (std::numeric_limits<float>::infinity()), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Vector3Int poistionInt = Vector3Int.RoundToInt(hit.point);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		L_7 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_6, /*hidden argument*/NULL);
		// return poistionInt;
		Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_m2FCEA2C0E5AEBB505111C5906B12A02617BA2D8D_RuntimeMethod_var);
		return L_8;
	}

IL_003b:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF ));
		Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  L_9 = V_1;
		return L_9;
	}
}
// System.Void InputManager::CheckArrowInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckArrowInput_m3A2391B6309F223823E9F1B975EC3B3A3FA411F4 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraMovementVector = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set_cameraMovementVector_7(L_2);
		// }
		return;
	}
}
// System.Void InputManager::CheckClickHoldEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickHoldEvent_mF4CD612D0A7E12AA5E3D9320089D3116A1D2E17C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * G_B5_0 = NULL;
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * G_B4_0 = NULL;
	{
		// if (Input.GetMouseButton(0) && EventSystem.current.IsPointerOverGameObject() == false)
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// var position = RaycastGround();
		Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  L_3;
		L_3 = InputManager_RaycastGround_m17AA155F0D811E5798007C662064BB2A5E4D1800(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (position != null)
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_inline((Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// OnMouseHold?.Invoke(position.Value);
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_5 = __this->get_OnMouseHold_5();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		L_7 = Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89((Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_RuntimeMethod_var);
		Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_RuntimeMethod_var);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void InputManager::CheckClickUpEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickUpEvent_m827D25FB80E7B0AD8A449722AD30A7B7CA953153 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// if (Input.GetMouseButtonUp(0) && EventSystem.current.IsPointerOverGameObject() == false)
		bool L_0;
		L_0 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// OnMouseUp?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = __this->get_OnMouseUp_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void InputManager::CheckClickDownEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CheckClickDownEvent_m5883A5488EAC0DA675911BB2A0B6044110D6D32C (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * G_B5_0 = NULL;
	Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * G_B4_0 = NULL;
	{
		// if (Input.GetMouseButtonDown(0) && EventSystem.current.IsPointerOverGameObject() == false)
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_003b;
		}
	}
	{
		// var position = RaycastGround();
		Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF  L_3;
		L_3 = InputManager_RaycastGround_m17AA155F0D811E5798007C662064BB2A5E4D1800(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (position != null)
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_inline((Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// OnMouseClick?.Invoke(position.Value);
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_5 = __this->get_OnMouseClick_4();
		Action_1_tDE8D095E1D3AF02839A55B4382C861064ACCDE2B * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		L_7 = Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89((Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC7F5256CCFADB22DDC41245E2D30D3616D087D89_RuntimeMethod_var);
		Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m614F2AF0A4F2C6430BD9257773180CC28909D5F9_RuntimeMethod_var);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mF1843241F60B2240CFAE651F1FD8A7AE17E32ECD (IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914 * __this, const RuntimeMethod* method)
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
// System.Void PlacementManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_Start_m0A781D786887344242A733242B978464620B622B (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Grid_t29032245F31DA66818E4D18285FF79A63F6496DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placementGrid = new Grid(width, height);
		int32_t L_0 = __this->get_width_4();
		int32_t L_1 = __this->get_height_5();
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_2 = (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF *)il2cpp_codegen_object_new(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF_il2cpp_TypeInfo_var);
		Grid__ctor_mA2DAD1911BAC78C551142BDAB4B67C1E7132591C(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_placementGrid_6(L_2);
		// }
		return;
	}
}
// CellType[] PlacementManager::GetNeighbourTypesFor(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* PlacementManager_GetNeighbourTypesFor_m10933F7C6024EDBB9F7B4D317098AA4885972087 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	{
		// return placementGrid.GetAllAdjacentCellTypes(position.x, position.z);
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_0 = __this->get_placementGrid_6();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_3;
		L_3 = Grid_GetAllAdjacentCellTypes_m6E6A651804F98885136E5477C457EF0C5625168E(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean PlacementManager::CheckIfPositionInBound(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionInBound_m04FE03EC70C1F41FBD581CF0EABF3B7CE9DBED9A (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, const RuntimeMethod* method)
{
	{
		// if (posistion.x >= 0 && posistion.x < width && posistion.z >= 0 && posistion.z < height)
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_width_4();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		int32_t L_5 = __this->get_height_5();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PlacementManager::PlaceObjectOnTheMap(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceObjectOnTheMap_mC0881375943A0BD9ADE32E7521882AC930E281FF (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// StructureModel structure = CreateANewStructureModel(position, structurePrefab, type);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___structurePrefab1;
		int32_t L_2 = ___type2;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_3;
		L_3 = PlacementManager_CreateANewStructureModel_m64942AE2A0B93D900DCC24D242B592C66BE9DEEC(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// for (int x = 0; x < width; x++)
		V_1 = 0;
		goto IL_005c;
	}

IL_000e:
	{
		// for (int z = 0; z < height; z++)
		V_2 = 0;
		goto IL_0053;
	}

IL_0012:
	{
		// var newPosition = position + new Vector3Int(x, 0, z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_7), L_5, 0, L_6, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8;
		L_8 = Vector3Int_op_Addition_m8BC205CBD8491E7F5F4B13501C81714FF0959308_inline(L_4, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// placementGrid[newPosition.x, newPosition.z] = type;
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_9 = __this->get_placementGrid_6();
		int32_t L_10;
		L_10 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_3), /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_3), /*hidden argument*/NULL);
		int32_t L_12 = ___type2;
		Grid_set_Item_m4F90BFBBEC04EFBCAD28A89824941A24E960F264(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		// structureDictionary.Add(newPosition, structure);
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_13 = __this->get_structureDictionary_8();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_14 = V_3;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_15 = V_0;
		Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
		// DestroyNatureAt(newPosition);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_16 = V_3;
		PlacementManager_DestroyNatureAt_m5AC8A820951036E7351E4049979538BA66893C78(__this, L_16, /*hidden argument*/NULL);
		// for (int z = 0; z < height; z++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0053:
	{
		// for (int z = 0; z < height; z++)
		int32_t L_18 = V_2;
		int32_t L_19 = ___height4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0012;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005c:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_21 = V_1;
		int32_t L_22 = ___width3;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlacementManager::DestroyNatureAt(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_DestroyNatureAt_m5AC8A820951036E7351E4049979538BA66893C78 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral488F947A46D295D05E45001DC9193FBD32A219D7);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* V_0 = NULL;
	int32_t V_1 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RaycastHit[] hits = Physics.BoxCastAll(position + new Vector3(0,0.5f,0),new Vector3(0.5f,0.5f, 0.5f), transform.up, Quaternion.identity, 1f, 1 << LayerMask.NameToLayer("Nature"));
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral488F947A46D295D05E45001DC9193FBD32A219D7, /*hidden argument*/NULL);
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_9;
		L_9 = Physics_BoxCastAll_m78CB1766D481BAFBB683DA2FF742C3C40BC99A9A(L_3, L_4, L_6, L_7, (1.0f), ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		// foreach (var item in hits)
		V_0 = L_9;
		V_1 = 0;
		goto IL_007e;
	}

IL_0061:
	{
		// foreach (var item in hits)
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// Destroy(item.collider.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14;
		L_14 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007e:
	{
		// foreach (var item in hits)
		int32_t L_17 = V_1;
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean PlacementManager::CheckIfPositionIsFree(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionIsFree_m18378018FCCE58FA7C708C63394390A1366DF201 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, const RuntimeMethod* method)
{
	{
		// return CheckIfPositionIsOfType(posistion, CellType.Empty);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___posistion0;
		bool L_1;
		L_1 = PlacementManager_CheckIfPositionIsOfType_m0D6442B033CC62404D3A100902FD4292C0C4FAA4(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void PlacementManager::PlaceTemporaryStructure(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_PlaceTemporaryStructure_m7E1C273E5A2C246F02FDB41994FD9EF9388C61C7 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * V_0 = NULL;
	{
		// placementGrid[position.x, position.z] = type;
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_0 = __this->get_placementGrid_6();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		int32_t L_3 = ___type2;
		Grid_set_Item_m4F90BFBBEC04EFBCAD28A89824941A24E960F264(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// StructureModel structure = CreateANewStructureModel(position, structurePrefab, type);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___structurePrefab1;
		int32_t L_6 = ___type2;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_7;
		L_7 = PlacementManager_CreateANewStructureModel_m64942AE2A0B93D900DCC24D242B592C66BE9DEEC(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// temporaryRoadobjects.Add(position, structure);
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_8 = __this->get_temporaryRoadobjects_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___position0;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_10 = V_0;
		Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlacementManager::RemoveAllTemporaryStructures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_RemoveAllTemporaryStructures_mEA86443116758DB2A2B4D631ED9CFDBBD4B97EDD (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mB640653DE886DA72C32445F417CE1AC5675B9707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9764E374F71287769E7EB41E9EE00912F95A4FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDA8D8EFF7F3B023F0DAACC7C74E6CDBD2CE9DC21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA808C1912871824F07571EBBC030CC8B8A4944C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m97E2C0A5BFED4AD62CFE4BF3F656672D5EEF19C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(var structure in temporaryRoadobjects.Values)
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_0 = __this->get_temporaryRoadobjects_7();
		ValueCollection_t0F40BAE8ADCAFC199D7636E184D8A58AEE824D46 * L_1;
		L_1 = Dictionary_2_get_Values_mB640653DE886DA72C32445F417CE1AC5675B9707(L_0, /*hidden argument*/Dictionary_2_get_Values_mB640653DE886DA72C32445F417CE1AC5675B9707_RuntimeMethod_var);
		Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3  L_2;
		L_2 = ValueCollection_GetEnumerator_m97E2C0A5BFED4AD62CFE4BF3F656672D5EEF19C7(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m97E2C0A5BFED4AD62CFE4BF3F656672D5EEF19C7_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_0013:
		{
			// foreach(var structure in temporaryRoadobjects.Values)
			StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_3;
			L_3 = Enumerator_get_Current_mA808C1912871824F07571EBBC030CC8B8A4944C2_inline((Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA808C1912871824F07571EBBC030CC8B8A4944C2_RuntimeMethod_var);
			// var position = Vector3Int.RoundToInt(structure.transform.position);
			StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_4 = L_3;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
			L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
			L_7 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			// placementGrid[position.x, position.z] = CellType.Empty;
			Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_8 = __this->get_placementGrid_6();
			int32_t L_9;
			L_9 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_1), /*hidden argument*/NULL);
			int32_t L_10;
			L_10 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_1), /*hidden argument*/NULL);
			Grid_set_Item_m4F90BFBBEC04EFBCAD28A89824941A24E960F264(L_8, L_9, L_10, 0, /*hidden argument*/NULL);
			// Destroy(structure.gameObject);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
			L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		}

IL_004f:
		{
			// foreach(var structure in temporaryRoadobjects.Values)
			bool L_12;
			L_12 = Enumerator_MoveNext_mDA8D8EFF7F3B023F0DAACC7C74E6CDBD2CE9DC21((Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mDA8D8EFF7F3B023F0DAACC7C74E6CDBD2CE9DC21_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0013;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9764E374F71287769E7EB41E9EE00912F95A4FA6((Enumerator_tEBF0A109A46E8329EDC134A728271F81773D8CC3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9764E374F71287769E7EB41E9EE00912F95A4FA6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// temporaryRoadobjects.Clear();
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_13 = __this->get_temporaryRoadobjects_7();
		Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4(L_13, /*hidden argument*/Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3Int> PlacementManager::GetNeighboursOfTypeFor(UnityEngine.Vector3Int,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * PlacementManager_GetNeighboursOfTypeFor_m9CDDA50236A532CF729602A5A5FA4FBC822D5C7D (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * V_0 = NULL;
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var neighbourVertices = placementGrid.GetAdjacentCellsOfType(position.x, position.z, type);
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_0 = __this->get_placementGrid_6();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___position0), /*hidden argument*/NULL);
		int32_t L_3 = ___type1;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_4;
		L_4 = Grid_GetAdjacentCellsOfType_mCAEF76AB53E5AD6EB4923CA2562DEF931685FF15(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// List<Vector3Int> neighbours = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_5 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_5, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		V_0 = L_5;
		// foreach(var point in neighbourVertices)
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_6;
		L_6 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_4, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0028:
		{
			// foreach(var point in neighbourVertices)
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7;
			L_7 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_2 = L_7;
			// neighbours.Add(new Vector3Int(point.X, 0, point.Y));
			List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_8 = V_0;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_9 = V_2;
			int32_t L_10;
			L_10 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_9, /*hidden argument*/NULL);
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11 = V_2;
			int32_t L_12;
			L_12 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_11, /*hidden argument*/NULL);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_13;
			memset((&L_13), 0, sizeof(L_13));
			Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_13), L_10, 0, L_12, /*hidden argument*/NULL);
			List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_8, L_13, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		}

IL_0048:
		{
			// foreach(var point in neighbourVertices)
			bool L_14;
			L_14 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0028;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// return neighbours;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3Int> PlacementManager::GetPathBetween(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * PlacementManager_GetPathBetween_mDC6B31249749D6C08F04D6A5A682EC958D4318CB (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___startPosition0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___endPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * V_0 = NULL;
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var resultPath = GridSearch.AStarSearch(placementGrid, new Point(startPosition.x, startPosition.z), new Point(endPosition.x, endPosition.z));
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_0 = __this->get_placementGrid_6();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___startPosition0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___startPosition0), /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_3, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___endPosition1), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___endPosition1), /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_6, L_4, L_5, /*hidden argument*/NULL);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_7;
		L_7 = GridSearch_AStarSearch_m8797C0D0D3E0A4B5993C62193C148257031483A9(L_0, L_3, L_6, (bool)0, /*hidden argument*/NULL);
		// List<Vector3Int> path = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_8 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_8, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		V_0 = L_8;
		// foreach(Point point in resultPath)
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_9;
		L_9 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_7, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0040:
		{
			// foreach(Point point in resultPath)
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_10;
			L_10 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_2 = L_10;
			// path.Add(new Vector3Int(point.X, 0, point.Y));
			List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_11 = V_0;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_12 = V_2;
			int32_t L_13;
			L_13 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_12, /*hidden argument*/NULL);
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_14 = V_2;
			int32_t L_15;
			L_15 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_14, /*hidden argument*/NULL);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_16;
			memset((&L_16), 0, sizeof(L_16));
			Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_16), L_13, 0, L_15, /*hidden argument*/NULL);
			List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_11, L_16, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		}

IL_0060:
		{
			// foreach(Point point in resultPath)
			bool L_17;
			L_17 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0040;
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
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_1), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(107)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// return path;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_18 = V_0;
		return L_18;
	}
}
// System.Boolean PlacementManager::CheckIfPositionIsOfType(UnityEngine.Vector3Int,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlacementManager_CheckIfPositionIsOfType_m0D6442B033CC62404D3A100902FD4292C0C4FAA4 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___posistion0, int32_t ___type1, const RuntimeMethod* method)
{
	{
		// return placementGrid[posistion.x, posistion.z] == type;
		Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * L_0 = __this->get_placementGrid_6();
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___posistion0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Grid_get_Item_m266904317C953BE3D81CC16CC59B390044805E59(L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___type1;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// StructureModel PlacementManager::CreateANewStructureModel(UnityEngine.Vector3Int,UnityEngine.GameObject,CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * PlacementManager_CreateANewStructureModel_m64942AE2A0B93D900DCC24D242B592C66BE9DEEC (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___structurePrefab1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44_m6ED7F845B57D8DF3D63D327DC89AA2239AC4067F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject structure = new GameObject(type.ToString());
		RuntimeObject * L_0 = Box(CellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_il2cpp_TypeInfo_var, (&___type2));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___type2 = *(int32_t*)UnBox(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, L_1, /*hidden argument*/NULL);
		// structure.transform.SetParent(transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_4, L_5, /*hidden argument*/NULL);
		// structure.transform.localPosition = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline(L_8, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_9, /*hidden argument*/NULL);
		// var structureModel = structure.AddComponent<StructureModel>();
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_10;
		L_10 = GameObject_AddComponent_TisStructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44_m6ED7F845B57D8DF3D63D327DC89AA2239AC4067F(L_6, /*hidden argument*/GameObject_AddComponent_TisStructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44_m6ED7F845B57D8DF3D63D327DC89AA2239AC4067F_RuntimeMethod_var);
		// structureModel.CreateModel(structurePrefab);
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = ___structurePrefab1;
		StructureModel_CreateModel_m7F544C3ED4D8CCCA782D21D59FAE740DD239BFDD(L_11, L_12, /*hidden argument*/NULL);
		// return structureModel;
		return L_11;
	}
}
// System.Void PlacementManager::AddTemporaryStructuresToStructureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_AddTemporaryStructuresToStructureDictionary_mE852FD7837FB1505C3AE0E16C143D42B80463BF9 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m42116A950F66B784E169DBBE00032E08A704868A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA9B483C6A791D9E283DBD0EFBEBA445FA2040D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8C6871B04EEF1AA36B782502B66DA734455B20B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m34A2FEF109786F79DF34C2F212384E53265ACB04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m56BF886233B0AD8C44123444DDF4F52113637DC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(var structure in temporaryRoadobjects)
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_0 = __this->get_temporaryRoadobjects_7();
		Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08  L_1;
		L_1 = Dictionary_2_GetEnumerator_m42116A950F66B784E169DBBE00032E08A704868A(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m42116A950F66B784E169DBBE00032E08A704868A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_000e:
		{
			// foreach(var structure in temporaryRoadobjects)
			KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6  L_2;
			L_2 = Enumerator_get_Current_m34A2FEF109786F79DF34C2F212384E53265ACB04_inline((Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m34A2FEF109786F79DF34C2F212384E53265ACB04_RuntimeMethod_var);
			V_1 = L_2;
			// structureDictionary.Add(structure.Key, structure.Value);
			Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_3 = __this->get_structureDictionary_8();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4;
			L_4 = KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_inline((KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_RuntimeMethod_var);
			StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_5;
			L_5 = KeyValuePair_2_get_Value_m56BF886233B0AD8C44123444DDF4F52113637DC3_inline((KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m56BF886233B0AD8C44123444DDF4F52113637DC3_RuntimeMethod_var);
			Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_mFBC6BB815EA469107F8E2C1BE392DB258C6E515E_RuntimeMethod_var);
			// DestroyNatureAt(structure.Key);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
			L_6 = KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_inline((KeyValuePair_2_tC2F9F42CEAFACE92A9E967CD8AD1BE0B729B97F6 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mA9D441EF26911A4A934C811366D6DEF79B563DFC_RuntimeMethod_var);
			PlacementManager_DestroyNatureAt_m5AC8A820951036E7351E4049979538BA66893C78(__this, L_6, /*hidden argument*/NULL);
		}

IL_003c:
		{
			// foreach(var structure in temporaryRoadobjects)
			bool L_7;
			L_7 = Enumerator_MoveNext_m8C6871B04EEF1AA36B782502B66DA734455B20B1((Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C6871B04EEF1AA36B782502B66DA734455B20B1_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA9B483C6A791D9E283DBD0EFBEBA445FA2040D06((Enumerator_t7BC55B2FB4BFC95D0272B249F99B62047647FD08 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA9B483C6A791D9E283DBD0EFBEBA445FA2040D06_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// temporaryRoadobjects.Clear();
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_8 = __this->get_temporaryRoadobjects_7();
		Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4(L_8, /*hidden argument*/Dictionary_2_Clear_mA169081F859AD59D6B6424171F5D8BCF74CEEAE4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlacementManager::ModifyStructureModel(UnityEngine.Vector3Int,UnityEngine.GameObject,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newModel1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (temporaryRoadobjects.ContainsKey(position))
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_0 = __this->get_temporaryRoadobjects_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___position0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// temporaryRoadobjects[position].SwapModel(newModel, rotation);
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_3 = __this->get_temporaryRoadobjects_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_5;
		L_5 = Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___newModel1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___rotation2;
		StructureModel_SwapModel_mFAF0A5C6355B005762FE3F9601B95B8B34820A47(L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0022:
	{
		// else if(structureDictionary.ContainsKey(position))
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_8 = __this->get_structureDictionary_8();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___position0;
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m534499B459388235A575A932EFDD4C949FEE2591_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// structureDictionary[position].SwapModel(newModel, rotation);
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_11 = __this->get_structureDictionary_8();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12 = ___position0;
		StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * L_13;
		L_13 = Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_mA02A00B0AAF4199D28C0BC33E4A4D23A22AC8B31_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ___newModel1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = ___rotation2;
		StructureModel_SwapModel_mFAF0A5C6355B005762FE3F9601B95B8B34820A47(L_13, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager__ctor_mB8D1E23CEF8771B4AB2FBC04ED6BBFB139E1DA60 (PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Vector3Int, StructureModel> temporaryRoadobjects = new Dictionary<Vector3Int, StructureModel>();
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_0 = (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *)il2cpp_codegen_object_new(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA(L_0, /*hidden argument*/Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA_RuntimeMethod_var);
		__this->set_temporaryRoadobjects_7(L_0);
		// private Dictionary<Vector3Int, StructureModel> structureDictionary = new Dictionary<Vector3Int, StructureModel>();
		Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 * L_1 = (Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392 *)il2cpp_codegen_object_new(Dictionary_2_tA26FC2D52D8556A04A95086F8BF8F6201A600392_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA(L_1, /*hidden argument*/Dictionary_2__ctor_m5628DE2D895971CB76CCB36685F7165EC0FFD9AA_RuntimeMethod_var);
		__this->set_structureDictionary_8(L_1);
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
// System.Int32 Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// public int X { get; set; }
		int32_t L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Point::set_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_m24CE6466C5F811ED459C56E8E40E7CBE184E6FF9 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int X { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// public int Y { get; set; }
		int32_t L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Point::set_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m9FDBF519C61AC5E20F1E10F2054BDBC61B5E3EED (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Y { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// public Point(int x, int y)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.X = x;
		int32_t L_0 = ___x0;
		Point_set_X_m24CE6466C5F811ED459C56E8E40E7CBE184E6FF9_inline(__this, L_0, /*hidden argument*/NULL);
		// this.Y = y;
		int32_t L_1 = ___y1;
		Point_set_Y_m9FDBF519C61AC5E20F1E10F2054BDBC61B5E3EED_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m3A914336FD90E0308772AA8E5A8B3863031124B8 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_0 = NULL;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
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
		// if (obj is Point)
		RuntimeObject * L_1 = ___obj0;
		if (!((Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)IsInstClass((RuntimeObject*)L_1, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		// Point p = obj as Point;
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)IsInstClass((RuntimeObject*)L_2, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var));
		// return this.X == p.X && this.Y == p.Y;
		int32_t L_3;
		L_3 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(__this, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = V_0;
		int32_t L_5;
		L_5 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6;
		L_6 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(__this, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = V_0;
		int32_t L_8;
		L_8 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(L_7, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_0031:
	{
		return (bool)0;
	}

IL_0033:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m5D84A029F775A1352106814A2B3C296DD5533824 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 6949;
		// hash = hash * 7907 + X.GetHashCode();
		int32_t L_0;
		L_0 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 7907 + Y.GetHashCode();
		int32_t L_2;
		L_2 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)6949), (int32_t)((int32_t)7907))), (int32_t)L_1)), (int32_t)((int32_t)7907))), (int32_t)L_3));
	}
}
// System.String Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m373BDA332667E6DB4083B8BF03C639C457225F57 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9813499D6918B17D4A59FC2F18D8EACF31B239AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return "P(" + this.X + ", " + this.Y + ")";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral9813499D6918B17D4A59FC2F18D8EACF31B239AA);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9813499D6918B17D4A59FC2F18D8EACF31B239AA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t L_3;
		L_3 = Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		int32_t L_7;
		L_7 = Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		return L_10;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_mF465410C5B2E598F2685E82CFCE1F42186AFF448 (Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void RoadFixer::FixRoadAtPosition(PlacementManager,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_FixRoadAtPosition_m1CD935E47E3DE0C10E2B7C11F5DFF9ECE1ADCD6B (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m1601B3378044B52B7C0E7719F056413F6DBFB313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m0C3E343D027F17AA04CB0A65CA6913D330650390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA75C670956105463E8880AB8FABEB99969088D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFixRoadAtPositionU3Eb__5_0_mC8922F367DAB6A90D7AE9C018F9FDA40C2B17922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* V_0 = NULL;
	int32_t V_1 = 0;
	Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * G_B2_0 = NULL;
	CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* G_B2_1 = NULL;
	Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * G_B1_0 = NULL;
	CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* G_B1_1 = NULL;
	{
		// var result = placementManager.GetNeighbourTypesFor(temporaryPosition);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___temporaryPosition1;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_2;
		L_2 = PlacementManager_GetNeighbourTypesFor_m10933F7C6024EDBB9F7B4D317098AA4885972087(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int roadCount = 0;
		V_1 = 0;
		// roadCount = result.Where(x => x == CellType.Road).Count();
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var);
		Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * L_4 = ((U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var);
		U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * L_6 = ((U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * L_7 = (Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF *)il2cpp_codegen_object_new(Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF_il2cpp_TypeInfo_var);
		Func_2__ctor_mA75C670956105463E8880AB8FABEB99969088D33(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CFixRoadAtPositionU3Eb__5_0_mC8922F367DAB6A90D7AE9C018F9FDA40C2B17922_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA75C670956105463E8880AB8FABEB99969088D33_RuntimeMethod_var);
		Func_2_t3256C0BDF907683FF59B23DCCE64291E8DAD77AF * L_8 = L_7;
		((U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m0C3E343D027F17AA04CB0A65CA6913D330650390((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m0C3E343D027F17AA04CB0A65CA6913D330650390_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Enumerable_Count_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m1601B3378044B52B7C0E7719F056413F6DBFB313(L_9, /*hidden argument*/Enumerable_Count_TisCellType_t7650A70E2AB9993EA9EE23424AD917DB2CFB72DB_m1601B3378044B52B7C0E7719F056413F6DBFB313_RuntimeMethod_var);
		V_1 = L_10;
		// if (roadCount == 0 || roadCount == 1)
		int32_t L_11 = V_1;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}

IL_003c:
	{
		// CreateDeadEnd(placementManager, result, temporaryPosition);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_13 = ___placementManager0;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_14 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_15 = ___temporaryPosition1;
		RoadFixer_CreateDeadEnd_mBDB5C5F7824EDE171001B00FC82C60ACD4FD7F93(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// else if (roadCount == 2)
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// if (CreateStraightRoad(placementManager, result, temporaryPosition))
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_17 = ___placementManager0;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_18 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_19 = ___temporaryPosition1;
		bool L_20;
		L_20 = RoadFixer_CreateStraightRoad_mF1E3B484DB43E6D85D4F9A58799F51C89D26EA5B(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		return;
	}

IL_0056:
	{
		// CreateCorner(placementManager, result, temporaryPosition);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_21 = ___placementManager0;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_22 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_23 = ___temporaryPosition1;
		RoadFixer_CreateCorner_m2B5D53BE0B50646783CC6429F07C6A13C3E6F825(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0060:
	{
		// else if (roadCount == 3)
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_006e;
		}
	}
	{
		// CreateThreeWay(placementManager, result, temporaryPosition);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_25 = ___placementManager0;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_26 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_27 = ___temporaryPosition1;
		RoadFixer_CreateThreeWay_m8728842F2B10897A29DE3281943894BC42CFA098(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006e:
	{
		// CreateFourWay(placementManager, result, temporaryPosition);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_28 = ___placementManager0;
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_29 = V_0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_30 = ___temporaryPosition1;
		RoadFixer_CreateFourWay_mB583427B6B267F5381996C019E605CC19F9B14DD(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoadFixer::CreateFourWay(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateFourWay_mB583427B6B267F5381996C019E605CC19F9B14DD (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method)
{
	{
		// placementManager.ModifyStructureModel(temporaryPosition, fourWay, Quaternion.identity);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_fourWay_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoadFixer::CreateThreeWay(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateThreeWay_m8728842F2B10897A29DE3281943894BC42CFA098 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method)
{
	{
		// if (result[1] == CellType.Road && result[2] == CellType.Road && result[3] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_0 = ___result1;
		int32_t L_1 = 1;
		int32_t L_2 = (int32_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_3 = ___result1;
		int32_t L_4 = 2;
		int32_t L_5 = (int32_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_6 = ___result1;
		int32_t L_7 = 3;
		int32_t L_8 = (int32_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, threeWay, Quaternion.identity);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_9 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_10 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_threeWay_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// else if (result[2] == CellType.Road && result[3] == CellType.Road && result[0] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_13 = ___result1;
		int32_t L_14 = 2;
		int32_t L_15 = (int32_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_16 = ___result1;
		int32_t L_17 = 3;
		int32_t L_18 = (int32_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_19 = ___result1;
		int32_t L_20 = 0;
		int32_t L_21 = (int32_t)(L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, threeWay, Quaternion.Euler(0, 90, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_22 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_23 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_threeWay_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// else if (result[3] == CellType.Road && result[0] == CellType.Road && result[1] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_26 = ___result1;
		int32_t L_27 = 3;
		int32_t L_28 = (int32_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_29 = ___result1;
		int32_t L_30 = 0;
		int32_t L_31 = (int32_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_32 = ___result1;
		int32_t L_33 = 1;
		int32_t L_34 = (int32_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, threeWay, Quaternion.Euler(0, 180, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_35 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_36 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_threeWay_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008d:
	{
		// else if (result[0] == CellType.Road && result[1] == CellType.Road && result[2] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_39 = ___result1;
		int32_t L_40 = 0;
		int32_t L_41 = (int32_t)(L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_42 = ___result1;
		int32_t L_43 = 1;
		int32_t L_44 = (int32_t)(L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_45 = ___result1;
		int32_t L_46 = 2;
		int32_t L_47 = (int32_t)(L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_00c0;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, threeWay, Quaternion.Euler(0, 270, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_48 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_49 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_threeWay_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void RoadFixer::CreateCorner(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateCorner_m2B5D53BE0B50646783CC6429F07C6A13C3E6F825 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method)
{
	{
		// if (result[1] == CellType.Road && result[2] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_0 = ___result1;
		int32_t L_1 = 1;
		int32_t L_2 = (int32_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_3 = ___result1;
		int32_t L_4 = 2;
		int32_t L_5 = (int32_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, corner, Quaternion.Euler(0, 90, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_6 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_corner_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// else if (result[2] == CellType.Road && result[3] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_10 = ___result1;
		int32_t L_11 = 2;
		int32_t L_12 = (int32_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_13 = ___result1;
		int32_t L_14 = 3;
		int32_t L_15 = (int32_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, corner, Quaternion.Euler(0, 180, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_16 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_17 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_corner_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005c:
	{
		// else if (result[3] == CellType.Road && result[0] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_20 = ___result1;
		int32_t L_21 = 3;
		int32_t L_22 = (int32_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_23 = ___result1;
		int32_t L_24 = 0;
		int32_t L_25 = (int32_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, corner, Quaternion.Euler(0, 270, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_26 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_27 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_corner_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// else if (result[0] == CellType.Road && result[1] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_30 = ___result1;
		int32_t L_31 = 0;
		int32_t L_32 = (int32_t)(L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00a8;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_33 = ___result1;
		int32_t L_34 = 1;
		int32_t L_35 = (int32_t)(L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00a8;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, corner, Quaternion.identity);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_36 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_37 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_corner_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Boolean RoadFixer::CreateStraightRoad(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoadFixer_CreateStraightRoad_mF1E3B484DB43E6D85D4F9A58799F51C89D26EA5B (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method)
{
	{
		// if (result[0] == CellType.Road && result[2] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_0 = ___result1;
		int32_t L_1 = 0;
		int32_t L_2 = (int32_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_3 = ___result1;
		int32_t L_4 = 2;
		int32_t L_5 = (int32_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, roadStraight, Quaternion.identity);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_6 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_roadStraight_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0020:
	{
		// else if (result[1] == CellType.Road && result[3] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_10 = ___result1;
		int32_t L_11 = 1;
		int32_t L_12 = (int32_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_13 = ___result1;
		int32_t L_14 = 3;
		int32_t L_15 = (int32_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, roadStraight, Quaternion.Euler(0, 90, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_16 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_17 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_roadStraight_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RoadFixer::CreateDeadEnd(PlacementManager,CellType[],UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer_CreateDeadEnd_mBDB5C5F7824EDE171001B00FC82C60ACD4FD7F93 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * ___placementManager0, CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* ___result1, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___temporaryPosition2, const RuntimeMethod* method)
{
	{
		// if (result[1] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_0 = ___result1;
		int32_t L_1 = 1;
		int32_t L_2 = (int32_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, deadEnd, Quaternion.Euler(0, 270, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_3 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_deadEnd_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// else if (result[2] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_7 = ___result1;
		int32_t L_8 = 2;
		int32_t L_9 = (int32_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, deadEnd, Quaternion.identity);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_10 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_deadEnd_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// else if (result[3] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_14 = ___result1;
		int32_t L_15 = 3;
		int32_t L_16 = (int32_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, deadEnd, Quaternion.Euler(0, 90, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_17 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_18 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_deadEnd_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0069:
	{
		// else if (result[0] == CellType.Road)
		CellTypeU5BU5D_tDD972377E7EA4E0B8AE97BFBB4FD01BDFE07C86D* L_21 = ___result1;
		int32_t L_22 = 0;
		int32_t L_23 = (int32_t)(L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_0090;
		}
	}
	{
		// placementManager.ModifyStructureModel(temporaryPosition, deadEnd, Quaternion.Euler(0, 180, 0));
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_24 = ___placementManager0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_25 = ___temporaryPosition2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_deadEnd_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		PlacementManager_ModifyStructureModel_m49C07FCF9E504AD3AC4D4FE45E5034A206BC875B(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void RoadFixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadFixer__ctor_mDA15C31DE9820BD898726A99BDDBF66E7320E384 (RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void RoadManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_Start_m9033B409BB58142823D5142E85A21958E258EA8E (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0_mD1F270E6BA531EBC572A629ACD59A19930C8D41E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// roadFixer = GetComponent<RoadFixer>();
		RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_0;
		L_0 = Component_GetComponent_TisRoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0_mD1F270E6BA531EBC572A629ACD59A19930C8D41E(__this, /*hidden argument*/Component_GetComponent_TisRoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0_mD1F270E6BA531EBC572A629ACD59A19930C8D41E_RuntimeMethod_var);
		__this->set_roadFixer_9(L_0);
		// }
		return;
	}
}
// System.Void RoadManager::PlaceRoad(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_PlaceRoad_m721A445945D56B87DA3056876411A937B0D285CB (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (placementManager.CheckIfPositionInBound(position) == false)
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = __this->get_placementManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___position0;
		bool L_2;
		L_2 = PlacementManager_CheckIfPositionInBound_m04FE03EC70C1F41FBD581CF0EABF3B7CE9DBED9A(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (placementManager.CheckIfPositionIsFree(position) == false)
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_3 = __this->get_placementManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		bool L_5;
		L_5 = PlacementManager_CheckIfPositionIsFree_m18378018FCCE58FA7C708C63394390A1366DF201(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if(placementNode == false)
		bool L_6 = __this->get_placementNode_8();
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		// placementNode = true;
		__this->set_placementNode_8((bool)1);
		// startPosition = position;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___position0;
		__this->set_startPosition_7(L_7);
		// temporaryPlacementPositions.Clear();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_8 = __this->get_temporaryPlacementPositions_5();
		List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816(L_8, /*hidden argument*/List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		// roadPositionsToRecheck.Clear();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_9 = __this->get_roadPositionsToRecheck_6();
		List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816(L_9, /*hidden argument*/List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		// temporaryPlacementPositions.Add(position);
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_10 = __this->get_temporaryPlacementPositions_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___position0;
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_10, L_11, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		// placementManager.PlaceTemporaryStructure(position, roadFixer.deadEnd, CellType.Road);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_12 = __this->get_placementManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_13 = ___position0;
		RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_14 = __this->get_roadFixer_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_deadEnd_4();
		PlacementManager_PlaceTemporaryStructure_m7E1C273E5A2C246F02FDB41994FD9EF9388C61C7(L_12, L_13, L_15, 1, /*hidden argument*/NULL);
		// }
		goto IL_0142;
	}

IL_0073:
	{
		// placementManager.RemoveAllTemporaryStructures();
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_16 = __this->get_placementManager_4();
		PlacementManager_RemoveAllTemporaryStructures_mEA86443116758DB2A2B4D631ED9CFDBBD4B97EDD(L_16, /*hidden argument*/NULL);
		// temporaryPlacementPositions.Clear();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_17 = __this->get_temporaryPlacementPositions_5();
		List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816(L_17, /*hidden argument*/List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		// foreach(var positionToFix in roadPositionsToRecheck)
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_18 = __this->get_roadPositionsToRecheck_6();
		Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_19;
		L_19 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_18, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		V_0 = L_19;
	}

IL_0095:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b1;
		}

IL_0097:
		{
			// foreach(var positionToFix in roadPositionsToRecheck)
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_20;
			L_20 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
			V_1 = L_20;
			// roadFixer.FixRoadAtPosition(placementManager, positionToFix);
			RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_21 = __this->get_roadFixer_9();
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_22 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_23 = V_1;
			RoadFixer_FixRoadAtPosition_m1CD935E47E3DE0C10E2B7C11F5DFF9ECE1ADCD6B(L_21, L_22, L_23, /*hidden argument*/NULL);
		}

IL_00b1:
		{
			// foreach(var positionToFix in roadPositionsToRecheck)
			bool L_24;
			L_24 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0097;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCA, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(188)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
	}

IL_00ca:
	{
		// roadPositionsToRecheck.Clear();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_25 = __this->get_roadPositionsToRecheck_6();
		List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816(L_25, /*hidden argument*/List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		// temporaryPlacementPositions = placementManager.GetPathBetween(startPosition, position);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_26 = __this->get_placementManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_27 = __this->get_startPosition_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_28 = ___position0;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_29;
		L_29 = PlacementManager_GetPathBetween_mDC6B31249749D6C08F04D6A5A682EC958D4318CB(L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->set_temporaryPlacementPositions_5(L_29);
		// foreach(var temporaryPosition in temporaryPlacementPositions)
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_30 = __this->get_temporaryPlacementPositions_5();
		Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_31;
		L_31 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_30, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		V_0 = L_31;
	}

IL_00f9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_00fb:
		{
			// foreach(var temporaryPosition in temporaryPlacementPositions)
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_32;
			L_32 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
			V_2 = L_32;
			// if (placementManager.CheckIfPositionIsFree(temporaryPosition) == false)
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_33 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_34 = V_2;
			bool L_35;
			L_35 = PlacementManager_CheckIfPositionIsFree_m18378018FCCE58FA7C708C63394390A1366DF201(L_33, L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_0129;
			}
		}

IL_0111:
		{
			// placementManager.PlaceTemporaryStructure(temporaryPosition, roadFixer.deadEnd, CellType.Road);
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_36 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_37 = V_2;
			RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_38 = __this->get_roadFixer_9();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = L_38->get_deadEnd_4();
			PlacementManager_PlaceTemporaryStructure_m7E1C273E5A2C246F02FDB41994FD9EF9388C61C7(L_36, L_37, L_39, 1, /*hidden argument*/NULL);
		}

IL_0129:
		{
			// foreach(var temporaryPosition in temporaryPlacementPositions)
			bool L_40;
			L_40 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_00fb;
			}
		}

IL_0132:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0134);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0134;
	}

FINALLY_0134:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(308)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(308)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x142, IL_0142)
	}

IL_0142:
	{
		// FixRoadPrefabs();
		RoadManager_FixRoadPrefabs_mC8C7FACE6C4EC73715595ADF754B9EA359CE9AA1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoadManager::FixRoadPrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_FixRoadPrefabs_mC8C7FACE6C4EC73715595ADF754B9EA359CE9AA1 (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// foreach (var temporaryPosition in temporaryPlacementPositions)
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_0 = __this->get_temporaryPlacementPositions_5();
		Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_1;
		L_1 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_0, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0078;
		}

IL_000e:
		{
			// foreach (var temporaryPosition in temporaryPlacementPositions)
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2;
			L_2 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
			V_1 = L_2;
			// roadFixer.FixRoadAtPosition(placementManager, temporaryPosition);
			RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_3 = __this->get_roadFixer_9();
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_4 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5 = V_1;
			RoadFixer_FixRoadAtPosition_m1CD935E47E3DE0C10E2B7C11F5DFF9ECE1ADCD6B(L_3, L_4, L_5, /*hidden argument*/NULL);
			// var neighbours = placementManager.GetNeighboursOfTypeFor(temporaryPosition, CellType.Road);
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_6 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = V_1;
			List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_8;
			L_8 = PlacementManager_GetNeighboursOfTypeFor_m9CDDA50236A532CF729602A5A5FA4FBC822D5C7D(L_6, L_7, 1, /*hidden argument*/NULL);
			// foreach(var roadposition in neighbours)
			Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_9;
			L_9 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_8, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
			V_2 = L_9;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_005f;
			}

IL_003d:
			{
				// foreach(var roadposition in neighbours)
				Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_10;
				L_10 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
				V_3 = L_10;
				// if(roadPositionsToRecheck.Contains(roadposition) == false)
				List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_11 = __this->get_roadPositionsToRecheck_6();
				Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12 = V_3;
				bool L_13;
				L_13 = List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF(L_11, L_12, /*hidden argument*/List_1_Contains_m117EF3002418A7298B8BDB874365D0E6A536C5AF_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_005f;
				}
			}

IL_0053:
			{
				// roadPositionsToRecheck.Add(roadposition);
				List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_14 = __this->get_roadPositionsToRecheck_6();
				Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_15 = V_3;
				List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_14, L_15, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
			}

IL_005f:
			{
				// foreach(var roadposition in neighbours)
				bool L_16;
				L_16 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_003d;
				}
			}

IL_0068:
			{
				IL2CPP_LEAVE(0x78, FINALLY_006a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006a;
		}

FINALLY_006a:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
			IL2CPP_END_FINALLY(106)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(106)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x78, IL_0078)
		}

IL_0078:
		{
			// foreach (var temporaryPosition in temporaryPlacementPositions)
			bool L_17;
			L_17 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// foreach(var positionToFix in roadPositionsToRecheck)
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_18 = __this->get_roadPositionsToRecheck_6();
		Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_19;
		L_19 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_18, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		V_0 = L_19;
	}

IL_009d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bb;
		}

IL_009f:
		{
			// foreach(var positionToFix in roadPositionsToRecheck)
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_20;
			L_20 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
			V_4 = L_20;
			// roadFixer.FixRoadAtPosition(placementManager, positionToFix);
			RoadFixer_t8831308ED28588AAC233A56C8757B20037E3DFB0 * L_21 = __this->get_roadFixer_9();
			PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_22 = __this->get_placementManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_23 = V_4;
			RoadFixer_FixRoadAtPosition_m1CD935E47E3DE0C10E2B7C11F5DFF9ECE1ADCD6B(L_21, L_22, L_23, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			// foreach(var positionToFix in roadPositionsToRecheck)
			bool L_24;
			L_24 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_009f;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(198)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void RoadManager::FinishPlacingRoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager_FinishPlacingRoad_m18C6E2D2F5562269D8A64229D20CA486DFBC9837 (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placementNode = false;
		__this->set_placementNode_8((bool)0);
		// placementManager.AddTemporaryStructuresToStructureDictionary();
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = __this->get_placementManager_4();
		PlacementManager_AddTemporaryStructuresToStructureDictionary_mE852FD7837FB1505C3AE0E16C143D42B80463BF9(L_0, /*hidden argument*/NULL);
		// if(temporaryPlacementPositions.Count > 0)
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_1 = __this->get_temporaryPlacementPositions_5();
		int32_t L_2;
		L_2 = List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_inline(L_1, /*hidden argument*/List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// AudioPlayer.instance.PlayPlacementSound();
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_3 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA(L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// temporaryPlacementPositions.Clear();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_4 = __this->get_temporaryPlacementPositions_5();
		List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816(L_4, /*hidden argument*/List_1_Clear_m8158CD14EE38CF84C368668E48932D09A503B816_RuntimeMethod_var);
		// startPosition = Vector3Int.zero;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5;
		L_5 = Vector3Int_get_zero_m9B7E460F38F93CC56871571709EA8EFC58DD3B58(/*hidden argument*/NULL);
		__this->set_startPosition_7(L_5);
		// }
		return;
	}
}
// System.Void RoadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoadManager__ctor_mF0A74AAE04FF1D650A1321216CF67435DFCD3399 (RoadManager_t9321A2844B3BC6288C39A96CECA23FB6F2B7B085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Vector3Int> temporaryPlacementPositions = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_0 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_0, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		__this->set_temporaryPlacementPositions_5(L_0);
		// public List<Vector3Int> roadPositionsToRecheck = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_1 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_1, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		__this->set_roadPositionsToRecheck_6(L_1);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_m2BA1F31BEDE84695933E86CF731059D6FAC2111C (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_5;
		L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0030:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_9;
		L_9 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0045:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_13;
		L_13 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_005a:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_17;
		L_17 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)113), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_006f:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_21;
		L_21 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)101), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0084;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
	}

IL_0084:
	{
		// return direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_0;
		return L_25;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_m0E587F33074BE72C54BA835B2217B0E8EC94F24A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// if (IsEscapePressed())
		bool L_0;
		L_0 = SimpleCameraController_IsEscapePressed_mC694179281D2F4B20E831995751C70A26806488D(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// if (IsRightMouseButtonDown())
		bool L_1;
		L_1 = SimpleCameraController_IsRightMouseButtonDown_m0DE4F75C0A0AE963F333712F226000E0AE2DC32A(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (IsRightMouseButtonUp())
		bool L_2;
		L_2 = SimpleCameraController_IsRightMouseButtonUp_mEDE93C76DE7120043B15F390865340D1C5165CE5(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// if (IsCameraRotationAllowed())
		bool L_3;
		L_3 = SimpleCameraController_IsCameraRotationAllowed_mABB9E26C1CC5C5643B305685F046B4B8493C7AFA(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		// var mouseMovement = GetInputLookRotation() * Time.deltaTime * 5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = SimpleCameraController_GetInputLookRotation_m4F945850C9036FAF5C3436AA42A1C3CB918E1BB9(__this, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_6, (5.0f), /*hidden argument*/NULL);
		V_3 = L_7;
		// if (invertY)
		bool L_8 = __this->get_invertY_10();
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// mouseMovement.y = -mouseMovement.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_3;
		float L_10 = L_9.get_y_1();
		(&V_3)->set_y_1(((-L_10)));
	}

IL_0068:
	{
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_mouseSensitivityCurve_8();
		float L_12;
		L_12 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
		float L_13;
		L_13 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_14 = __this->get_m_TargetCameraState_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_15 = L_14;
		float L_16 = L_15->get_yaw_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_3;
		float L_18 = L_17.get_x_0();
		float L_19 = V_4;
		L_15->set_yaw_0(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_20 = __this->get_m_TargetCameraState_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_21 = L_20;
		float L_22 = L_21->get_pitch_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_3;
		float L_24 = L_23.get_y_1();
		float L_25 = V_4;
		L_21->set_pitch_1(((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)))));
	}

IL_00b2:
	{
		// var translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A(__this, /*hidden argument*/NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// if (IsBoostPressed())
		bool L_29;
		L_29 = SimpleCameraController_IsBoostPressed_m26120B18155EBB68597EA52F392AD1E59F9A71E0(__this, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00d7;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, (10.0f), /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_00d7:
	{
		// boost += GetBoostFactor();
		float L_32 = __this->get_boost_6();
		float L_33;
		L_33 = SimpleCameraController_GetBoostFactor_m42B667ADEACC6F9CF0E4B6549A501609A15716AE(__this, /*hidden argument*/NULL);
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_32, (float)L_33)));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_0;
		float L_35 = __this->get_boost_6();
		float L_36;
		L_36 = powf((2.0f), L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_36, /*hidden argument*/NULL);
		V_0 = L_37;
		// m_TargetCameraState.Translate(translation);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_38 = __this->get_m_TargetCameraState_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_0;
		CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96(L_38, L_39, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_40;
		L_40 = logf((0.00999999046f));
		float L_41 = __this->get_positionLerpTime_7();
		float L_42;
		L_42 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_43;
		L_43 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_40/(float)L_41)), (float)L_42)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_43));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_44;
		L_44 = logf((0.00999999046f));
		float L_45 = __this->get_rotationLerpTime_9();
		float L_46;
		L_46 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_47;
		L_47 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_44/(float)L_45)), (float)L_46)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_47));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_48 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_49 = __this->get_m_TargetCameraState_4();
		float L_50 = V_1;
		float L_51 = V_2;
		CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326(L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_52 = __this->get_m_InterpolatingCameraState_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410(L_52, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityTemplateProjects.SimpleCameraController::GetBoostFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleCameraController_GetBoostFactor_m42B667ADEACC6F9CF0E4B6549A501609A15716AE (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.mouseScrollDelta.y * 0.2f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_1 = L_0.get_y_1();
		return ((float)il2cpp_codegen_multiply((float)L_1, (float)(0.200000003f)));
	}
}
// UnityEngine.Vector2 UnityTemplateProjects.SimpleCameraController::GetInputLookRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleCameraController_GetInputLookRotation_m4F945850C9036FAF5C3436AA42A1C3CB918E1BB9 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y")) * 10;
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, (10.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsBoostPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsBoostPressed_m26120B18155EBB68597EA52F392AD1E59F9A71E0 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.GetKey(KeyCode.LeftShift);
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsEscapePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsEscapePressed_mC694179281D2F4B20E831995751C70A26806488D (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.GetKey(KeyCode.Escape);
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsCameraRotationAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsCameraRotationAllowed_mABB9E26C1CC5C5643B305685F046B4B8493C7AFA (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButton(1);
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsRightMouseButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsRightMouseButtonDown_m0DE4F75C0A0AE963F333712F226000E0AE2DC32A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButtonDown(1);
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityTemplateProjects.SimpleCameraController::IsRightMouseButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleCameraController_IsRightMouseButtonUp_mEDE93C76DE7120043B15F390865340D1C5165CE5 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButtonUp(1);
		bool L_0;
		L_0 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_mC6AE2509DDF461856450EC7DE0058A1687AB5C87 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_0 = (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C *)il2cpp_codegen_object_new(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var);
		CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C *)il2cpp_codegen_object_new(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var);
		CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.200000003f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_2 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_2;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.00999999978f));
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
// System.Void StructureManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureManager_Start_mC2296B3EEF01CAE9FEC1C171ADFB5FA256E3EE3A (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__7_0_m3BBAB41C97CD5A1BFF0576FCC36358FDC1090A21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__7_1_m1DF52836BAB9F4939B0295641B93E1A97FC4B1BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__7_2_m110B36DF7DED72EBB0A1ADCB177480365BBFBE79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B2_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B2_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B2_2 = NULL;
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B1_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B1_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B1_2 = NULL;
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B4_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B4_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B4_2 = NULL;
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B3_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B3_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B3_2 = NULL;
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B6_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B6_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B6_2 = NULL;
	Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * G_B5_0 = NULL;
	StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* G_B5_1 = NULL;
	StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * G_B5_2 = NULL;
	{
		// houseWeights = housePrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_0 = __this->get_housePrefabs_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_1 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * L_3 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_4 = (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 *)il2cpp_codegen_object_new(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7_il2cpp_TypeInfo_var);
		Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__7_0_m3BBAB41C97CD5A1BFF0576FCC36358FDC1090A21_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_RuntimeMethod_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_5 = L_4;
		((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7;
		L_7 = Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A(L_6, /*hidden argument*/Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_RuntimeMethod_var);
		G_B2_2->set_houseWeights_8(L_7);
		// specialWeights = specialPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_8 = __this->get_specialPrefabs_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_9 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9__7_1_2();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		G_B3_2 = __this;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			G_B4_2 = __this;
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * L_11 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_12 = (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 *)il2cpp_codegen_object_new(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7_il2cpp_TypeInfo_var);
		Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__7_1_m1DF52836BAB9F4939B0295641B93E1A97FC4B1BD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_RuntimeMethod_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_13 = L_12;
		((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->set_U3CU3E9__7_1_2(L_13);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_005b:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD((RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15;
		L_15 = Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A(L_14, /*hidden argument*/Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_RuntimeMethod_var);
		G_B4_2->set_specialWeights_9(L_15);
		// bigStructuresWeights = bigStructuresPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_16 = __this->get_bigStructuresPrefabs_6();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_17 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9__7_2_3();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_18 = L_17;
		G_B5_0 = L_18;
		G_B5_1 = L_16;
		G_B5_2 = __this;
		if (L_18)
		{
			G_B6_0 = L_18;
			G_B6_1 = L_16;
			G_B6_2 = __this;
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * L_19 = ((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_20 = (Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 *)il2cpp_codegen_object_new(Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7_il2cpp_TypeInfo_var);
		Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__7_2_m110B36DF7DED72EBB0A1ADCB177480365BBFBE79_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4C0EC575BD51B23E12058843BD7061C501E33673_RuntimeMethod_var);
		Func_2_tBC120A42E37ED87BDDD7C88C0B25D4715B9474D7 * L_21 = L_20;
		((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->set_U3CU3E9__7_2_3(L_21);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0090:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD((RuntimeObject*)(RuntimeObject*)G_B6_1, G_B6_0, /*hidden argument*/Enumerable_Select_TisStructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m27DB59C8EDF99D8E03498299BFF4E837B96C3FFD_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_23;
		L_23 = Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A(L_22, /*hidden argument*/Enumerable_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m29B86C2253718662D24AC785A56B0F5AC9647C3A_RuntimeMethod_var);
		G_B6_2->set_bigStructuresWeights_10(L_23);
		// }
		return;
	}
}
// System.Void StructureManager::PlaceHouse(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureManager_PlaceHouse_m3B227003DEBF1C9060C9C288579AC22A92F4530A (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ChekPoistionBeforePlacement(position))
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		bool L_1;
		L_1 = StructureManager_ChekPoistionBeforePlacement_m14E604408EE9A7736E583FA012CEC68369C8E6D2(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// int randomIndex = GetRandomWeightedIndex(houseWeights);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_houseWeights_8();
		int32_t L_3;
		L_3 = StructureManager_GetRandomWeightedIndex_m94166FACC2BCFC494BAC7BC4C2C2FF704F90BF8C(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// placementManeger.PlaceObjectOnTheMap(position, housePrefabs[randomIndex].prefab, CellType.Structure);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_4 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5 = ___position0;
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_6 = __this->get_housePrefabs_4();
		int32_t L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->get_prefab_0();
		PlacementManager_PlaceObjectOnTheMap_mC0881375943A0BD9ADE32E7521882AC930E281FF(L_4, L_5, L_8, 2, 1, 1, /*hidden argument*/NULL);
		// AudioPlayer.instance.PlayPlacementSound();
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_9 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void StructureManager::PlaceBigStructure(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureManager_PlaceBigStructure_m7A55F80EF69C7BBBA5EE71A776B4696212AB47DF (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int width = 2;
		V_0 = 2;
		// int height = 2;
		V_1 = 2;
		// if(CheckBigStructure(position, width, height))
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		bool L_3;
		L_3 = StructureManager_CheckBigStructure_mF575781E6893637A1E8093BE070ACACB0F612729(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// int randomIndex = GetRandomWeightedIndex(bigStructuresWeights);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_bigStructuresWeights_10();
		int32_t L_5;
		L_5 = StructureManager_GetRandomWeightedIndex_m94166FACC2BCFC494BAC7BC4C2C2FF704F90BF8C(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// placementManeger.PlaceObjectOnTheMap(position, bigStructuresPrefabs[randomIndex].prefab, CellType.Structure, width, height);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_6 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___position0;
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_8 = __this->get_bigStructuresPrefabs_6();
		int32_t L_9 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->get_prefab_0();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		PlacementManager_PlaceObjectOnTheMap_mC0881375943A0BD9ADE32E7521882AC930E281FF(L_6, L_7, L_10, 2, L_11, L_12, /*hidden argument*/NULL);
		// AudioPlayer.instance.PlayPlacementSound();
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_13 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA(L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean StructureManager::CheckBigStructure(UnityEngine.Vector3Int,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_CheckBigStructure_mF575781E6893637A1E8093BE070ACACB0F612729 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool nearRoad = false;
		V_0 = (bool)0;
		// for (int x = 0; x < width; x++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0006:
	{
		// for (int z = 0; z < height; z++)
		V_2 = 0;
		goto IL_0033;
	}

IL_000a:
	{
		// var newPosition = position + new Vector3Int(x, 0, z);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), L_1, 0, L_2, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4;
		L_4 = Vector3Int_op_Addition_m8BC205CBD8491E7F5F4B13501C81714FF0959308_inline(L_0, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// if (DefaultCheck(newPosition) == false)
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5 = V_3;
		bool L_6;
		L_6 = StructureManager_DefaultCheck_m97FA5F516721AF7AED0167DD8A9E98AE44E0B9ED(__this, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (nearRoad == false)
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		// nearRoad = RoadCheck(newPosition);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8 = V_3;
		bool L_9;
		L_9 = StructureManager_RoadCheck_mD791189A3F58879E0336EE9B9D2E736410F8D003(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_002f:
	{
		// for (int z = 0; z < height; z++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		// for (int z = 0; z < height; z++)
		int32_t L_11 = V_2;
		int32_t L_12 = ___height2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003b:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_14 = V_1;
		int32_t L_15 = ___width1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0006;
		}
	}
	{
		// return nearRoad;
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void StructureManager::PlaceSpecial(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureManager_PlaceSpecial_mB6A2B0E69B3754471E0A176966653FF58DA6BCF4 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ChekPoistionBeforePlacement(position))
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		bool L_1;
		L_1 = StructureManager_ChekPoistionBeforePlacement_m14E604408EE9A7736E583FA012CEC68369C8E6D2(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// int randomIndex = GetRandomWeightedIndex(specialWeights);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_specialWeights_9();
		int32_t L_3;
		L_3 = StructureManager_GetRandomWeightedIndex_m94166FACC2BCFC494BAC7BC4C2C2FF704F90BF8C(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// placementManeger.PlaceObjectOnTheMap(position, specialPrefabs[randomIndex].prefab, CellType.Structure);
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_4 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5 = ___position0;
		StructurePrefabWeightedU5BU5D_t922288C6F141260BB1FBEAFF644D1338143543DC* L_6 = __this->get_specialPrefabs_5();
		int32_t L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->get_prefab_0();
		PlacementManager_PlaceObjectOnTheMap_mC0881375943A0BD9ADE32E7521882AC930E281FF(L_4, L_5, L_8, 2, 1, 1, /*hidden argument*/NULL);
		// AudioPlayer.instance.PlayPlacementSound();
		AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3 * L_9 = ((AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tC6C0120294E3A58DF9FAE4A3FCBB1A1EEFB595A3_il2cpp_TypeInfo_var))->get_instance_6();
		AudioPlayer_PlayPlacementSound_mF3BFEBEFF14C4D1919C4D51D30757E3C08DAC1AA(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Int32 StructureManager::GetRandomWeightedIndex(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StructureManager_GetRandomWeightedIndex_m94166FACC2BCFC494BAC7BC4C2C2FF704F90BF8C (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___weights0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float sum = 0f;
		V_0 = (0.0f);
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_0014;
	}

IL_000a:
	{
		// sum += weights[i];
		float L_0 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___weights0;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_4));
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0014:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_6 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___weights0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// float randomValue = UnityEngine.Random.Range(0,  sum);
		float L_8 = V_0;
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// float tempSum = 0;
		V_2 = (0.0f);
		// for (int i = 0; i < weights.Length; i++)
		V_4 = 0;
		goto IL_004e;
	}

IL_0031:
	{
		// if (randomValue >= tempSum && randomValue < tempSum +weights[i])
		float L_10 = V_1;
		float L_11 = V_2;
		if ((!(((float)L_10) >= ((float)L_11))))
		{
			goto IL_0041;
		}
	}
	{
		float L_12 = V_1;
		float L_13 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = ___weights0;
		int32_t L_15 = V_4;
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_add((float)L_13, (float)L_17))))))
		{
			goto IL_0041;
		}
	}
	{
		// return i;
		int32_t L_18 = V_4;
		return L_18;
	}

IL_0041:
	{
		// tempSum += weights[i];
		float L_19 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = ___weights0;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((float)il2cpp_codegen_add((float)L_19, (float)L_23));
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_004e:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_25 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = ___weights0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Boolean StructureManager::ChekPoistionBeforePlacement(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_ChekPoistionBeforePlacement_m14E604408EE9A7736E583FA012CEC68369C8E6D2 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	{
		// if(DefaultCheck(position) == false)
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___position0;
		bool L_1;
		L_1 = StructureManager_DefaultCheck_m97FA5F516721AF7AED0167DD8A9E98AE44E0B9ED(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if(RoadCheck(position) == false)
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2 = ___position0;
		bool L_3;
		L_3 = StructureManager_RoadCheck_mD791189A3F58879E0336EE9B9D2E736410F8D003(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean StructureManager::RoadCheck(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_RoadCheck_mD791189A3F58879E0336EE9B9D2E736410F8D003 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28702D4296187A26F7069914F5A25BAAA9D5C4AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placementManeger.GetNeighboursOfTypeFor(position, CellType.Road).Count <= 0)
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___position0;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_2;
		L_2 = PlacementManager_GetNeighboursOfTypeFor_m9CDDA50236A532CF729602A5A5FA4FBC822D5C7D(L_0, L_1, 1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_inline(L_2, /*hidden argument*/List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// Debug.Log("Must be place near a road!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral28702D4296187A26F7069914F5A25BAAA9D5C4AA, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean StructureManager::DefaultCheck(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StructureManager_DefaultCheck_m97FA5F516721AF7AED0167DD8A9E98AE44E0B9ED (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946F0D7C4D6705BB1BB6D6438AC41A287405DE0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC824568226F3494A7EBD25CB05446AECA1A9E16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placementManeger.CheckIfPositionInBound(position) == false)
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_0 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___position0;
		bool L_2;
		L_2 = PlacementManager_CheckIfPositionInBound_m04FE03EC70C1F41FBD581CF0EABF3B7CE9DBED9A(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("This position is out of bounds!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDC824568226F3494A7EBD25CB05446AECA1A9E16, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// if (placementManeger.CheckIfPositionIsFree(position) == false)
		PlacementManager_tB945F22CCAD684DFF5C9FE8A70E2EC6BA239BCB4 * L_3 = __this->get_placementManeger_7();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___position0;
		bool L_5;
		L_5 = PlacementManager_CheckIfPositionIsFree_m18378018FCCE58FA7C708C63394390A1366DF201(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.Log("This position is not EMPTY!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral946F0D7C4D6705BB1BB6D6438AC41A287405DE0B, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0034:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void StructureManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureManager__ctor_m403BEF957BA4EF41DB51019B7DB3AB3FAF344845 (StructureManager_tA819BA12D442BAF26F4E12706EBAD964B73C5DE5 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void StructureModel::CreateModel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureModel_CreateModel_m7F544C3ED4D8CCCA782D21D59FAE740DD239BFDD (StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var structure = Instantiate(model, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___model0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_2;
		// yHeight = structure.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		__this->set_yHeight_4(L_6);
		// }
		return;
	}
}
// System.Void StructureModel::SwapModel(UnityEngine.GameObject,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureModel_SwapModel_mFAF0A5C6355B005762FE3F9601B95B8B34820A47 (StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___model0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Transform child in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_000e:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_2 = V_0;
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// Destroy(child.gameObject);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_5 = V_0;
			bool L_6;
			L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_8 = V_1;
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_9 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// var structure = Instantiate(model, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ___model0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// structure.transform.localPosition = new Vector3(0, yHeight, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_yHeight_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_14, L_16, /*hidden argument*/NULL);
		// structure.transform.localRotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = ___rotation1;
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StructureModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StructureModel__ctor_mDB8FCC8566D64B01291B2F1F4E0F97644EAE1560 (StructureModel_t0D1CDF52A2F1E6AB3DA2BE19B955A0FE648C4F44 * __this, const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: StructurePrefabWeighted
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_pinvoke(const StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB& unmarshaled, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'StructurePrefabWeighted': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_pinvoke_back(const StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_pinvoke& marshaled, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB& unmarshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'StructurePrefabWeighted': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: StructurePrefabWeighted
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_pinvoke_cleanup(StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: StructurePrefabWeighted
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_com(const StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB& unmarshaled, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_com& marshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'StructurePrefabWeighted': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_com_back(const StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_com& marshaled, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB& unmarshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'StructurePrefabWeighted': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: StructurePrefabWeighted
IL2CPP_EXTERN_C void StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshal_com_cleanup(StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB_marshaled_com& marshaled)
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
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_m74C43E03145ECBC4566A9979DB7A1D342972A527 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_U3CStartU3Eb__10_0_m00ACD2D7BBAD9F999901C9874455E00374279A9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_U3CStartU3Eb__10_1_mA5678320D63C06FD192D34B22FD018CF5530305A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_U3CStartU3Eb__10_2_m8BEC412CF8F2AD179CDC4B73C0181985E19D565F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_U3CStartU3Eb__10_3_m3C42FE9EF6901E048E7CE56A5542EB1B3668CC64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonList = new List<Button> { placeHouseButton, placeRoadButton, placeSpecialButton, placeBigStructureButton };
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *)il2cpp_codegen_object_new(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795(L_0, /*hidden argument*/List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_1 = L_0;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_placeHouseButton_9();
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_1, L_2, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_3 = L_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_placeRoadButton_8();
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_3, L_4, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_5 = L_3;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_placeSpecialButton_10();
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_5, L_6, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_7 = L_5;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_placeBigStructureButton_11();
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_7, L_8, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		__this->set_buttonList_13(L_7);
		// placeRoadButton.onClick.AddListener(() =>
		// {
		//     ResetButtonColor();
		//     ModifyOutline(placeRoadButton);
		//     OnRoadPlacement?.Invoke();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_placeRoadButton_8();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_10;
		L_10 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_9, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)UIController_U3CStartU3Eb__10_0_m00ACD2D7BBAD9F999901C9874455E00374279A9F_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// placeHouseButton.onClick.AddListener(() =>
		// {
		//     ResetButtonColor();
		//     ModifyOutline(placeHouseButton);
		//     OnHousePlacement?.Invoke();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_placeHouseButton_9();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_13;
		L_13 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_12, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)UIController_U3CStartU3Eb__10_1_mA5678320D63C06FD192D34B22FD018CF5530305A_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_13, L_14, /*hidden argument*/NULL);
		// placeSpecialButton.onClick.AddListener(() =>
		// {
		//     ResetButtonColor();
		//     ModifyOutline(placeSpecialButton);
		//     OnSpecialPlacement?.Invoke();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_placeSpecialButton_10();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_16;
		L_16 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_15, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_17 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_17, __this, (intptr_t)((intptr_t)UIController_U3CStartU3Eb__10_2_m8BEC412CF8F2AD179CDC4B73C0181985E19D565F_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_16, L_17, /*hidden argument*/NULL);
		// placeBigStructureButton.onClick.AddListener(() =>
		// {
		//     ResetButtonColor();
		//     ModifyOutline(placeBigStructureButton);
		//     OnBigStructurePlacement?.Invoke();
		// });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = __this->get_placeBigStructureButton_11();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_19;
		L_19 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_18, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_20 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_20, __this, (intptr_t)((intptr_t)UIController_U3CStartU3Eb__10_3_m3C42FE9EF6901E048E7CE56A5542EB1B3668CC64_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ModifyOutline(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var outline = button.GetComponent<Outline>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___button0;
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_1;
		L_1 = Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92(L_0, /*hidden argument*/Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92_RuntimeMethod_var);
		// outline.effectColor = outlineColor;
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_2 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_outlineColor_12();
		Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF(L_2, L_3, /*hidden argument*/NULL);
		// outline.enabled = true;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ResetButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Button button in buttonList)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_buttonList_13();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_1;
		L_1 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_0, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			// foreach(Button button in buttonList)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
			L_2 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.GetComponent<Outline>().enabled = false;
			Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_3;
			L_3 = Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92(L_2, /*hidden argument*/Component_GetComponent_TisOutline_t37C754965BCC82FDD6C6878357A1439376C61CC2_m3ED105DB2A188EAED62F7D57ADA693D72333AC92_RuntimeMethod_var);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		}

IL_0020:
		{
			// foreach(Button button in buttonList)
			bool L_4;
			L_4 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m57DAF9FADDD58C79489BCF6474E55D3514E9BA21 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIController::<Start>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_U3CStartU3Eb__10_0_m00ACD2D7BBAD9F999901C9874455E00374279A9F (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// ResetButtonColor();
		UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A(__this, /*hidden argument*/NULL);
		// ModifyOutline(placeRoadButton);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_placeRoadButton_8();
		UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B(__this, L_0, /*hidden argument*/NULL);
		// OnRoadPlacement?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnRoadPlacement_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UIController::<Start>b__10_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_U3CStartU3Eb__10_1_mA5678320D63C06FD192D34B22FD018CF5530305A (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// ResetButtonColor();
		UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A(__this, /*hidden argument*/NULL);
		// ModifyOutline(placeHouseButton);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_placeHouseButton_9();
		UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B(__this, L_0, /*hidden argument*/NULL);
		// OnHousePlacement?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnHousePlacement_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UIController::<Start>b__10_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_U3CStartU3Eb__10_2_m8BEC412CF8F2AD179CDC4B73C0181985E19D565F (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// ResetButtonColor();
		UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A(__this, /*hidden argument*/NULL);
		// ModifyOutline(placeSpecialButton);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_placeSpecialButton_10();
		UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B(__this, L_0, /*hidden argument*/NULL);
		// OnSpecialPlacement?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnSpecialPlacement_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UIController::<Start>b__10_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_U3CStartU3Eb__10_3_m3C42FE9EF6901E048E7CE56A5542EB1B3668CC64 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// ResetButtonColor();
		UIController_ResetButtonColor_mF986860E8DEE64B87C7B61B199CDCC2E6ACEE41A(__this, /*hidden argument*/NULL);
		// ModifyOutline(placeBigStructureButton);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_placeBigStructureButton_11();
		UIController_ModifyOutline_mA6DB5719FB6508E8B9FA9BAEEC7965C16B130B9B(__this, L_0, /*hidden argument*/NULL);
		// OnBigStructurePlacement?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_OnBigStructurePlacement_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: GridSearch/SearchResult
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_pinvoke(const SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986& unmarshaled, SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CPathU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Path>k__BackingField' of type 'SearchResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPathU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_pinvoke_back(const SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_pinvoke& marshaled, SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986& unmarshaled)
{
	Exception_t* ___U3CPathU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Path>k__BackingField' of type 'SearchResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPathU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: GridSearch/SearchResult
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_pinvoke_cleanup(SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GridSearch/SearchResult
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_com(const SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986& unmarshaled, SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_com& marshaled)
{
	Exception_t* ___U3CPathU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Path>k__BackingField' of type 'SearchResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPathU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_com_back(const SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_com& marshaled, SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986& unmarshaled)
{
	Exception_t* ___U3CPathU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Path>k__BackingField' of type 'SearchResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CPathU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: GridSearch/SearchResult
IL2CPP_EXTERN_C void SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshal_com_cleanup(SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986_marshaled_com& marshaled)
{
}
// System.Collections.Generic.List`1<Point> GridSearch/SearchResult::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * SearchResult_get_Path_m3254D74077703401CFB054886E80763FAB6F6A6E (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, const RuntimeMethod* method)
{
	{
		// public List<Point> Path { get; set; }
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = __this->get_U3CPathU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * SearchResult_get_Path_m3254D74077703401CFB054886E80763FAB6F6A6E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * _thisAdjusted = reinterpret_cast<SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 *>(__this + _offset);
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * _returnValue;
	_returnValue = SearchResult_get_Path_m3254D74077703401CFB054886E80763FAB6F6A6E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void GridSearch/SearchResult::set_Path(System.Collections.Generic.List`1<Point>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SearchResult_set_Path_m7954076DC1ED6A0B36F1B8EF019B530BFAB8E7C0 (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<Point> Path { get; set; }
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void SearchResult_set_Path_m7954076DC1ED6A0B36F1B8EF019B530BFAB8E7C0_AdjustorThunk (RuntimeObject * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * _thisAdjusted = reinterpret_cast<SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 *>(__this + _offset);
	SearchResult_set_Path_m7954076DC1ED6A0B36F1B8EF019B530BFAB8E7C0_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
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
// System.Void RoadFixer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFEB982F92A4C39F6D2926A44E9CC66D9A33EA71E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * L_0 = (U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C *)il2cpp_codegen_object_new(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0AC4627111AE13CE7C4F488D1160C0ED80D39C61(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RoadFixer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0AC4627111AE13CE7C4F488D1160C0ED80D39C61 (U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RoadFixer/<>c::<FixRoadAtPosition>b__5_0(CellType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFixRoadAtPositionU3Eb__5_0_mC8922F367DAB6A90D7AE9C018F9FDA40C2B17922 (U3CU3Ec_t3ACA8B9D08AD8BE5CE08C8E91D82DB54A61E1A6C * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// roadCount = result.Where(x => x == CellType.Road).Count();
		int32_t L_0 = ___x0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___translation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = ___target0;
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		float L_4;
		L_4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_6 = ___target0;
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_11 = ___target0;
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_16 = ___target0;
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19;
		L_19 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_21 = ___target0;
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24;
		L_24 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_26 = ___target0;
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29;
		L_29 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method)
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
// System.Void StructureManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF9C641B6AC14F72F776A795FDD24ADCA89F73850 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * L_0 = (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D *)il2cpp_codegen_object_new(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1F7C6E2E253FCA5594102BA7CF11572FDAF9A1D3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void StructureManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F7C6E2E253FCA5594102BA7CF11572FDAF9A1D3 (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single StructureManager/<>c::<Start>b__7_0(StructurePrefabWeighted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CStartU3Eb__7_0_m3BBAB41C97CD5A1BFF0576FCC36358FDC1090A21 (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * __this, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  ___prefabStats0, const RuntimeMethod* method)
{
	{
		// houseWeights = housePrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  L_0 = ___prefabStats0;
		float L_1 = L_0.get_weight_1();
		return L_1;
	}
}
// System.Single StructureManager/<>c::<Start>b__7_1(StructurePrefabWeighted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CStartU3Eb__7_1_m1DF52836BAB9F4939B0295641B93E1A97FC4B1BD (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * __this, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  ___prefabStats0, const RuntimeMethod* method)
{
	{
		// specialWeights = specialPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  L_0 = ___prefabStats0;
		float L_1 = L_0.get_weight_1();
		return L_1;
	}
}
// System.Single StructureManager/<>c::<Start>b__7_2(StructurePrefabWeighted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CStartU3Eb__7_2_m110B36DF7DED72EBB0A1ADCB177480365BBFBE79 (U3CU3Ec_t127DDA67F5C024B338BDCC28F360614774C17F4D * __this, StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  ___prefabStats0, const RuntimeMethod* method)
{
	{
		// bigStructuresWeights = bigStructuresPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
		StructurePrefabWeighted_t9A9E00CC160313FE984D6CB8E2835CA61CA826AB  L_0 = ___prefabStats0;
		float L_1 = L_0.get_weight_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputManager_get_CameraMovementVector_m904FDD0C7BC27FF44F6BA2979A802598D6C673E5_inline (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// get { return cameraMovementVector; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_cameraMovementVector_7();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m7A1BC7300A1CEA4A3DF468D4C5E5D4C34CFCA819_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// public int X { get; set; }
		int32_t L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_m283909258D60B41AFD61006F59175BCA93484993_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// public int Y { get; set; }
		int32_t L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_7, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_op_Addition_m8BC205CBD8491E7F5F4B13501C81714FF0959308_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___a0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___b1, const RuntimeMethod* method)
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___a0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___b1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___a0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___b1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___a0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___b1), /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_6), ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), ((float)((float)L_0)), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_m24CE6466C5F811ED459C56E8E40E7CBE184E6FF9_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int X { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m9FDBF519C61AC5E20F1E10F2054BDBC61B5E3EED_inline (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Y { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * SearchResult_get_Path_m3254D74077703401CFB054886E80763FAB6F6A6E_inline (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, const RuntimeMethod* method)
{
	{
		// public List<Point> Path { get; set; }
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = __this->get_U3CPathU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SearchResult_set_Path_m7954076DC1ED6A0B36F1B8EF019B530BFAB8E7C0_inline (SearchResult_t0E14BCE4ED0521C5CF30B29E2959B1192FA2A986 * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<Point> Path { get; set; }
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD15FD07294DA5DAAC4793E0B3D4D81D589694624_gshared_inline (Nullable_1_t81578CC9FE8839924D7C6CD6401E6DF952DB97BF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m8D5866462B373A731D788E432470B67998AD2D73_gshared_inline (Enumerator_t4857AFECAEE2A2569902D30CD926E4333C5F3C0B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  L_0 = (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE )__this->get_current_3();
		return (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method)
{
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )__this->get_key_0();
		return (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )__this->get_current_3();
		return (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0043A089072A4F9111B0B217D86922767A8209D0_gshared_inline (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}

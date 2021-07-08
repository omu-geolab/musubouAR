extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_AR();
	RegisterModule_AR();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; 
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; template <> void RegisterUnityClass<LightProbeGroup>(const char*);
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class WindZone; template <> void RegisterUnityClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; 
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. Animator
	RegisterUnityClass<Animator>("Animation");
	//1. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//2. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//3. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//4. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//5. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//6. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//7. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//8. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//9. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//10. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//11. Camera
	RegisterUnityClass<Camera>("Core");
	//12. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//13. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//14. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//15. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//16. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//17. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//18. GameManager
	RegisterUnityClass<GameManager>("Core");
	//19. GameObject
	RegisterUnityClass<GameObject>("Core");
	//20. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//21. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//22. InputManager
	RegisterUnityClass<InputManager>("Core");
	//23. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//24. Light
	RegisterUnityClass<Light>("Core");
	//25. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//26. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//27. LightProbeGroup
	RegisterUnityClass<LightProbeGroup>("Core");
	//28. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//29. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//30. Material
	RegisterUnityClass<Material>("Core");
	//31. Mesh
	RegisterUnityClass<Mesh>("Core");
	//32. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//33. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//34. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//35. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//36. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//37. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//38. Object
	//Skipping Object
	//39. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//40. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//41. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//42. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//43. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//44. Renderer
	RegisterUnityClass<Renderer>("Core");
	//45. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//46. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//47. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//48. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//49. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//50. Shader
	RegisterUnityClass<Shader>("Core");
	//51. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//52. Skybox
	RegisterUnityClass<Skybox>("Core");
	//53. Sprite
	RegisterUnityClass<Sprite>("Core");
	//54. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//55. TagManager
	RegisterUnityClass<TagManager>("Core");
	//56. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//57. Texture
	RegisterUnityClass<Texture>("Core");
	//58. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//59. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//60. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//61. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//62. Transform
	RegisterUnityClass<Transform>("Core");
	//63. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//64. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//65. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//66. Collider
	RegisterUnityClass<Collider>("Physics");
	//67. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//68. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//69. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//70. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//71. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//72. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//73. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//74. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//75. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//76. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//77. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//78. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//79. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//80. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//81. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//82. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//83. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//84. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");
	//85. WindZone
	RegisterUnityClass<WindZone>("Wind");

}

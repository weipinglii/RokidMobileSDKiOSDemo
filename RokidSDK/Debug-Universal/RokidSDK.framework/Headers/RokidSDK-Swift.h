// Generated by Apple Swift version 4.0.3 effective-3.2.3 (swiftlang-900.0.74.1 clang-900.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import CoreBluetooth;
@import ObjectiveC;
@import CocoaAsyncSocket;
@import WebKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("RokidSDK")

@interface NSBundle (SWIFT_EXTENSION(RokidSDK))
@property (nonatomic, readonly, copy) NSString * _Nullable rb_versionString;
@property (nonatomic, readonly, copy) NSString * _Nullable rb_buildCode;
@property (nonatomic, readonly, copy) NSString * _Nullable rb_appIdentifierPrefix;
@property (nonatomic, readonly, copy) NSString * _Nullable rb_appId;
@end


@interface CBCentralManager (SWIFT_EXTENSION(RokidSDK))
@property (nonatomic, readonly) CBCentralManagerState centralManagerState;
@end






@interface NSNotificationCenter (SWIFT_EXTENSION(RokidSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSNotificationCenter * _Nonnull rokidsdk;)
+ (NSNotificationCenter * _Nonnull)rokidsdk SWIFT_WARN_UNUSED_RESULT;
+ (void)setRokidsdk:(NSNotificationCenter * _Nonnull)value;
@end


SWIFT_CLASS("_TtC8RokidSDK5RBBLE")
@interface RBBLE : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RBBLE * _Nonnull shared;)
+ (RBBLE * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL fetchingState;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)fetchState:(void (^ _Nonnull)(CBCentralManagerState))completion;
- (void)startScan;
- (void)stopScan;
- (void)cancelSending;
@end

@class CBPeripheral;

@interface RBBLE (SWIFT_EXTENSION(RokidSDK)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
- (void)centralManager:(CBCentralManager * _Nonnull)central didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)centralManager:(CBCentralManager * _Nonnull)central didFailToConnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
@end

@class CBService;
@class CBCharacteristic;

@interface RBBLE (SWIFT_EXTENSION(RokidSDK)) <CBPeripheralDelegate>
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverServices:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverCharacteristicsForService:(CBService * _Nonnull)service error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didWriteValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
@end


SWIFT_CLASS("_TtC8RokidSDK11RBUDPSocket")
@interface RBUDPSocket : NSObject
@property (nonatomic) NSTimeInterval timeout;
- (nonnull instancetype)initWithBroadcast:(BOOL)broadcast OBJC_DESIGNATED_INITIALIZER;
- (void)sendTo:(NSString * _Nonnull)host port:(NSInteger)port data:(NSData * _Nonnull)data completion:(void (^ _Nullable)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class GCDAsyncUdpSocket;

@interface RBUDPSocket (SWIFT_EXTENSION(RokidSDK)) <GCDAsyncUdpSocketDelegate>
- (void)udpSocket:(GCDAsyncUdpSocket * _Nonnull)sock didSendDataWithTag:(NSInteger)tag;
- (void)udpSocket:(GCDAsyncUdpSocket * _Nonnull)sock didNotSendDataWithTag:(NSInteger)tag dueToError:(NSError * _Nullable)error;
@end


/// RBVolume用来发送用户对手机音量+-按键的Notification事件
SWIFT_CLASS("_TtC8RokidSDK8RBVolume")
@interface RBVolume : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RBVolume * _Nonnull shared;)
+ (RBVolume * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) float volume;
+ (void)setup;
/// 开始监听用户按音量键点击
- (void)startListening;
- (void)stopListening;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8RokidSDK16RKAccountManager")
@interface RKAccountManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RKAccountManager * _Nonnull shared;)
+ (RKAccountManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@property (nonatomic, readonly) BOOL isRefreshingToken;
@end

@class RKError;

@interface RKAccountManager (SWIFT_EXTENSION(RokidSDK))
@property (nonatomic, readonly, copy) NSString * _Nullable accessToken;
- (void)tempLoginWithName:(NSString * _Nonnull)name password:(NSString * _Nonnull)password complete:(void (^ _Nonnull)(NSString * _Nullable, NSString * _Nullable, RKError * _Nullable))complete;
- (void)tokenLoginWithUserId:(NSString * _Nonnull)userId token:(NSString * _Nonnull)token completion:(void (^ _Nonnull)(RKError * _Nullable))completion;
- (void)logout;
@end






SWIFT_CLASS("_TtC8RokidSDK11RKBLEDevice")
@interface RKBLEDevice : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8RokidSDK17RKBLEDeviceBinder")
@interface RKBLEDeviceBinder : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RKBLEDeviceBinder * _Nonnull shared;)
+ (RKBLEDeviceBinder * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (CBCentralManagerState)getBLEStatus SWIFT_WARN_UNUSED_RESULT;
- (void)onBLEStatusChangeWithStatusChange:(void (^ _Nonnull)(CBCentralManagerState))statusChange;
- (void)startBLEScanWithType:(NSString * _Nonnull)type onDeviceChange:(void (^ _Nonnull)(NSArray<RKBLEDevice *> * _Nonnull))onDeviceChange;
- (void)stopBLEScan;
- (void)connectBLEDevice:(RKBLEDevice * _Nonnull)device complete:(void (^ _Nonnull)(BOOL, NSError * _Nullable))complete;
@end


SWIFT_CLASS("_TtC8RokidSDK21RKBLEDeviceBinderData")
@interface RKBLEDeviceBinderData : NSObject
@property (nonatomic, readonly, copy) NSData * _Nonnull data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8RokidSDK17RKWebBridgeModule")
@interface RKWebBridgeModule : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol RKBridgeModuleAppDelegate;

SWIFT_CLASS("_TtC8RokidSDK17RKBridgeModuleApp")
@interface RKBridgeModuleApp : RKWebBridgeModule
@property (nonatomic, weak) id <RKBridgeModuleAppDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP8RokidSDK25RKBridgeModuleAppDelegate_")
@protocol RKBridgeModuleAppDelegate
- (void)close;
- (void)openWithTitle:(NSString * _Nonnull)title urlStr:(NSString * _Nonnull)urlStr;
- (void)openNewWebViewWithTitle:(NSString * _Nonnull)title urlStr:(NSString * _Nonnull)urlStr;
- (void)openExternalWithUrlStr:(NSString * _Nonnull)urlStr;
@end

@protocol RKBridgeModulePhoneDelegate;

SWIFT_CLASS("_TtC8RokidSDK19RKBridgeModulePhone")
@interface RKBridgeModulePhone : RKWebBridgeModule
@property (nonatomic, weak) id <RKBridgeModulePhoneDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP8RokidSDK27RKBridgeModulePhoneDelegate_")
@protocol RKBridgeModulePhoneDelegate
- (void)touchDown;
- (void)touchMove;
- (void)touchUp;
@end

@protocol RKBridgeModuleViewDelegate;

SWIFT_CLASS("_TtC8RokidSDK18RKBridgeModuleView")
@interface RKBridgeModuleView : RKWebBridgeModule
@property (nonatomic, weak) id <RKBridgeModuleViewDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP8RokidSDK26RKBridgeModuleViewDelegate_")
@protocol RKBridgeModuleViewDelegate
- (void)showToastWithMessage:(NSString * _Nonnull)message;
- (void)showLoadingWithMessage:(NSString * _Nonnull)message;
- (void)hideLoading;
- (void)setNavigationBarTitleWithTitle:(NSString * _Nonnull)title;
- (void)setNavigationBarStyleWithStyle:(NSString * _Nonnull)style;
- (void)setNavigationBarRightWithButton:(NSDictionary<NSString *, id> * _Nonnull)button;
- (void)setNavigationBarRightDotStateWithState:(BOOL)state;
- (void)errorViewWithState:(BOOL)state retryUrl:(NSString * _Nonnull)retryUrl;
@end


SWIFT_CLASS("_TtC8RokidSDK6RKCard")
@interface RKCard : NSObject
@property (nonatomic, copy) NSString * _Nullable msgStamp;
@property (nonatomic, copy) NSString * _Nullable from;
@property (nonatomic, copy) NSString * _Nullable to;
@property (nonatomic, copy) NSString * _Nullable msgId;
@property (nonatomic, copy) NSString * _Nullable appId;
@property (nonatomic, copy) NSString * _Null_unspecified msgText;
@property (nonatomic) NSInteger dbId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8RokidSDK10RKChatCard")
@interface RKChatCard : RKCard
@end


/// 设备类型。其主要状态由此manager维护，修改时会发出通知，通知的userInfo中会包含device id和修改的信息
SWIFT_CLASS("_TtC8RokidSDK8RKDevice")
@interface RKDevice : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nullable ota;
@property (nonatomic, copy) NSString * _Nullable deviceTypeId;
@property (nonatomic, readonly, copy) NSString * _Nonnull nick;
@property (nonatomic, copy) NSString * _Nonnull rcVersion;
@property (nonatomic) BOOL alive;
@property (nonatomic) double alarmVolume;
@property (nonatomic) double maxAlarmVolume;
/// 缓存的getRokiInfos接口返回的结果，和RXAccountManager.Account中的缓存类似，获取和修改都会更新缓存；
/// 不同的是，刷新设备列表时会返回basic_info namespace中的信息，所以这个缓存里几乎总是有值
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSDictionary<NSString *, id> *> * _Nonnull cachedInfos;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end










@interface RKDevice (SWIFT_EXTENSION(RokidSDK))
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable basicInfo;
@property (nonatomic, readonly, copy) NSString * _Nullable systemVersion;
/// 类似swift的 <code>#available()</code> ，检查设备系统版本是否大于等于指定的版本
/// \param ver 指定的系统版本
///
- (BOOL)isAvailableSince:(NSString * _Nonnull)ver SWIFT_WARN_UNUSED_RESULT;
@end





enum RKErrorCode : NSInteger;

SWIFT_CLASS("_TtC8RokidSDK7RKError")
@interface RKError : NSObject
@property (nonatomic, readonly) enum RKErrorCode code;
@property (nonatomic, readonly, copy) NSString * _Nonnull raw_code;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, RKErrorCode) {
  RKErrorCodeUNDEFINED = 0,
  RKErrorCodeINVALID_APP = 1,
  RKErrorCodeINVALID_ROKID_ACCOUNT = 2,
  RKErrorCodeINVALID_ROKID_SESSION = 3,
  RKErrorCodeNETWORK = 4,
  RKErrorCodeHTTP = 5,
  RKErrorCodeDATA = 6,
  RKErrorCodeREQUEST_NO_NETWORK = 7,
  RKErrorCodeREQUEST_TIME_OUT = 8,
  RKErrorCodeAPI_INVALID_PARAM = 9,
  RKErrorCodeBLE_SERVICE_FAULT = 10,
};


SWIFT_CLASS("_TtC8RokidSDK11RKGuideCard")
@interface RKGuideCard : RKCard
@end


SWIFT_CLASS("_TtC8RokidSDK11RKImageCard")
@interface RKImageCard : RKCard
@end


SWIFT_CLASS("_TtC8RokidSDK18RKNotificationName")
@interface RKNotificationName : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull CurrentDeviceUpdated;)
+ (NSString * _Nonnull)CurrentDeviceUpdated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull DeviceStatusUpdated;)
+ (NSString * _Nonnull)DeviceStatusUpdated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull DeviceListUpdated;)
+ (NSString * _Nonnull)DeviceListUpdated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull CardReceived;)
+ (NSString * _Nonnull)CardReceived SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AlarmVolumeChanged;)
+ (NSString * _Nonnull)AlarmVolumeChanged SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ShouldLogout;)
+ (NSString * _Nonnull)ShouldLogout SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8RokidSDK13RKSummaryCard")
@interface RKSummaryCard : RKCard
@end

@class WKUserContentController;
@class WKScriptMessage;

SWIFT_CLASS("_TtC8RokidSDK11RKWebBridge")
@interface RKWebBridge : NSObject <WKScriptMessageHandler>
- (RKWebBridgeModule * _Nullable)getModuleBy:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class WKWebView;

@interface RKWebBridge (SWIFT_EXTENSION(RokidSDK))
+ (RKWebBridge * _Nonnull)injectWebBridgeTo:(WKWebView * _Nonnull)webView SWIFT_WARN_UNUSED_RESULT;
- (void)setPhoneDelegateWithDelegate:(id <RKBridgeModulePhoneDelegate> _Nonnull)delegate;
- (void)setAppDelegateWithDelegate:(id <RKBridgeModuleAppDelegate> _Nonnull)delegate;
- (void)setViewDelegateWithDelegate:(id <RKBridgeModuleViewDelegate> _Nonnull)delegate;
@end



SWIFT_CLASS("_TtC8RokidSDK10RokidAlarm")
@interface RokidAlarm : NSObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger year;
@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger day;
@property (nonatomic) NSInteger hour;
@property (nonatomic) NSInteger minute;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable ext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SDKBinderManager;
@class SDKDeviceManager;
@class SDKVuiManager;
@class SDKSKillManager;

SWIFT_CLASS("_TtC8RokidSDK14RokidMobileSDK")
@interface RokidMobileSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RokidMobileSDK * _Nonnull shared;)
+ (RokidMobileSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RKAccountManager * _Nullable account;)
+ (RKAccountManager * _Nullable)account SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKBinderManager * _Nullable binder;)
+ (SDKBinderManager * _Nullable)binder SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKDeviceManager * _Nullable device;)
+ (SDKDeviceManager * _Nullable)device SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKVuiManager * _Nullable vui;)
+ (SDKVuiManager * _Nullable)vui SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKSKillManager * _Nullable skill;)
+ (SDKSKillManager * _Nullable)skill SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)initSDKWithAppKey:(NSString * _Nonnull)appKey appSecret:(NSString * _Nonnull)appSecret accessKey:(NSString * _Nonnull)accessKey completion:(SWIFT_NOESCAPE void (^ _Nonnull)(RKError * _Nullable))completion SWIFT_METHOD_FAMILY(none);
@property (nonatomic) BOOL debug;
@end


SWIFT_CLASS("_TtC8RokidSDK11RokidRemind")
@interface RokidRemind : NSObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger year;
@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger day;
@property (nonatomic) NSInteger hour;
@property (nonatomic) NSInteger minute;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull content;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum SDKAlarmRepeatMode : NSInteger;

SWIFT_CLASS("_TtC8RokidSDK8SDKAlarm")
@interface SDKAlarm : NSObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger year;
@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger day;
@property (nonatomic) NSInteger hour;
@property (nonatomic) NSInteger minute;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic) enum SDKAlarmRepeatMode repeatType;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable ext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, SDKAlarmRepeatMode) {
  SDKAlarmRepeatModeOnce = -1,
  SDKAlarmRepeatModeEveryMondy = 0,
  SDKAlarmRepeatModeEveryTuesday = 1,
  SDKAlarmRepeatModeEveryWednesday = 2,
  SDKAlarmRepeatModeEveryThursday = 3,
  SDKAlarmRepeatModeEveryFriday = 4,
  SDKAlarmRepeatModeEverySaturday = 5,
  SDKAlarmRepeatModeEverySunday = 6,
  SDKAlarmRepeatModeWeekday = 7,
  SDKAlarmRepeatModeEveryday = 8,
  SDKAlarmRepeatModeWeekend = 9,
};


SWIFT_CLASS("_TtC8RokidSDK16SDKBinderManager")
@interface SDKBinderManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKBinderManager * _Nonnull shared;)
+ (SDKBinderManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (CBCentralManagerState)getBLEStatus SWIFT_WARN_UNUSED_RESULT;
- (void)onBLEStatusChangeWithStatusChange:(void (^ _Nonnull)(CBCentralManagerState))statusChange;
- (void)startBLEScanWithType:(NSString * _Nonnull)type onDeviceChange:(void (^ _Nonnull)(NSArray<RKBLEDevice *> * _Nonnull))onDeviceChange;
- (void)stopBLEScan;
- (void)connectBLEDevice:(RKBLEDevice * _Nonnull)device complete:(void (^ _Nonnull)(BOOL, NSError * _Nullable))complete;
- (void)sendBLEBindWifiWithDevice:(RKBLEDevice * _Nonnull)device ssid:(NSString * _Nonnull)ssid password:(NSString * _Nonnull)password bssid:(NSString * _Nonnull)bssid completion:(void (^ _Nonnull)(RKError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SDKDeviceVersionInfo;

SWIFT_CLASS("_TtC8RokidSDK16SDKDeviceManager")
@interface SDKDeviceManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKDeviceManager * _Nonnull shared;)
+ (SDKDeviceManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)queryDeviceListWithCompletion:(void (^ _Nonnull)(RKError * _Nullable, NSArray<RKDevice *> * _Nullable))completion;
- (NSDictionary<NSString *, id> * _Nullable)getBasicInfoWithDeviceId:(NSString * _Nonnull)deviceId SWIFT_WARN_UNUSED_RESULT;
- (void)updateNickWithDeviceId:(NSString * _Nonnull)deviceId newNick:(NSString * _Nonnull)newNick completion:(void (^ _Nonnull)(RKError * _Nullable))completion;
- (BOOL)getVersionWithDeviceId:(NSString * _Nonnull)deviceId completion:(void (^ _Nonnull)(NSError * _Nullable, SDKDeviceVersionInfo * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
- (BOOL)startSystemUpdateWithDeviceId:(NSString * _Nonnull)deviceId SWIFT_WARN_UNUSED_RESULT;
- (BOOL)resetDeviceWithDeviceId:(NSString * _Nonnull)deviceId SWIFT_WARN_UNUSED_RESULT;
- (void)unbindDeviceWithDeviceId:(NSString * _Nonnull)deviceId completion:(void (^ _Nonnull)(RKError * _Nullable))completion;
- (void)setCurrentDeviceWithDevice:(RKDevice * _Nonnull)device;
- (RKDevice * _Nullable)getCurrentDevice SWIFT_WARN_UNUSED_RESULT;
- (RKDevice * _Nullable)getDeviceWithDeviceId:(NSString * _Nonnull)deviceId SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8RokidSDK20SDKDeviceVersionInfo")
@interface SDKDeviceVersionInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull changelog;
@property (nonatomic) NSInteger checkCode;
@property (nonatomic) double downloadProgress;
@property (nonatomic) NSInteger downloadedSize;
@property (nonatomic) NSInteger totalSize;
@property (nonatomic) BOOL updateAvailable;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull currentVersion;
@property (nonatomic, copy) NSString * _Nonnull version;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8RokidSDK9SDKRemind")
@interface SDKRemind : NSObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger year;
@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger day;
@property (nonatomic) NSInteger hour;
@property (nonatomic) NSInteger minute;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull content;
@property (nonatomic) enum SDKAlarmRepeatMode repeatType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SDKSkillAlarmHelper;
@class SDKSkillRemindHelper;

SWIFT_CLASS("_TtC8RokidSDK15SDKSKillManager")
@interface SDKSKillManager : NSObject
@property (nonatomic, readonly, strong) SDKSkillAlarmHelper * _Nonnull alarm;
@property (nonatomic, readonly, strong) SDKSkillRemindHelper * _Nonnull remind;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKSKillManager * _Nonnull shared;)
+ (SDKSKillManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC8RokidSDK19SDKSkillAlarmHelper")
@interface SDKSkillAlarmHelper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKSkillAlarmHelper * _Nonnull shared;)
+ (SDKSkillAlarmHelper * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)getListWithDeviceId:(NSString * _Nonnull)deviceId completion:(void (^ _Nonnull)(RKError * _Nullable, NSArray<SDKAlarm *> * _Nullable))completion;
- (BOOL)createWithDeviceId:(NSString * _Nonnull)deviceId alarm:(SDKAlarm * _Nonnull)alarm SWIFT_WARN_UNUSED_RESULT;
- (BOOL)deleteWithDeviceId:(NSString * _Nonnull)deviceId alarm:(SDKAlarm * _Nonnull)alarm SWIFT_WARN_UNUSED_RESULT;
- (BOOL)updateWithDeviceId:(NSString * _Nonnull)deviceId alarm:(SDKAlarm * _Nonnull)alarm to:(SDKAlarm * _Nonnull)to SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8RokidSDK20SDKSkillRemindHelper")
@interface SDKSkillRemindHelper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SDKSkillRemindHelper * _Nonnull shared;)
+ (SDKSkillRemindHelper * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)getListWithDeviceId:(NSString * _Nonnull)deviceId completion:(void (^ _Nonnull)(RKError * _Nullable, NSArray<SDKRemind *> * _Nullable))completion;
- (BOOL)deleteWithDeviceId:(NSString * _Nonnull)deviceId remind:(SDKRemind * _Nonnull)remind SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC8RokidSDK13SDKVuiManager")
@interface SDKVuiManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)getCardListWithMaxDbId:(NSInteger)maxDbId completion:(void (^ _Nonnull)(RKError * _Nullable, NSArray<RKCard *> * _Nullable))completion;
- (void)getCardListWithMaxDbId:(NSInteger)maxDbId pageSize:(NSInteger)pageSize completion:(void (^ _Nonnull)(RKError * _Nullable, NSArray<RKCard *> * _Nullable))completion;
- (void)sendAsrWithAsr:(NSString * _Nonnull)asr to:(RKDevice * _Nonnull)device;
- (void)sendTtsWithTts:(NSString * _Nonnull)tts to:(RKDevice * _Nonnull)device;
@end


@interface NSTimer (SWIFT_EXTENSION(RokidSDK))
+ (NSTimer * _Nonnull)rb_timer:(NSTimeInterval)interval repeats:(BOOL)repeats block:(SWIFT_NOESCAPE void (^ _Nonnull)(void))block SWIFT_WARN_UNUSED_RESULT;
- (NSTimer * _Nonnull)rb_postpone:(NSTimeInterval)interval repeats:(BOOL)repeats SWIFT_WARN_UNUSED_RESULT;
@end

@class UIImage;

@interface UIBarButtonItem (SWIFT_EXTENSION(RokidSDK))
- (nonnull instancetype)initWithSystemItem:(UIBarButtonSystemItem)systemItem handler:(void (^ _Nonnull)(UIBarButtonItem * _Nonnull))handler;
- (nonnull instancetype)initWithTitle:(NSString * _Nullable)title style:(UIBarButtonItemStyle)style handler:(void (^ _Nonnull)(UIBarButtonItem * _Nonnull))handler;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image style:(UIBarButtonItemStyle)style handler:(void (^ _Nonnull)(UIBarButtonItem * _Nonnull))handler;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image landscapeImagePhone:(UIImage * _Nullable)landscapeImagePhone style:(UIBarButtonItemStyle)style handler:(void (^ _Nonnull)(UIBarButtonItem * _Nonnull))handler;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop

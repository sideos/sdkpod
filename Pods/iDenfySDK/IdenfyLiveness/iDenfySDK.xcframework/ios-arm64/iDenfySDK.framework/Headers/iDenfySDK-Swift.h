// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef IDENFYSDK_SWIFT_H
#define IDENFYSDK_SWIFT_H
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

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import UIKit;
@import idenfycore;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="iDenfySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC9iDenfySDK28AuthenticationResultResponse")
@interface AuthenticationResultResponse : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Returns an automatic identification status.
typedef SWIFT_ENUM(NSInteger, AutoIdentificationStatus, open) {
/// The user completed an identification flow and the identification status, provided by an automated platform, is APPROVED.
  AutoIdentificationStatusAPPROVED = 0,
/// The user completed an identification flow and the identification status, provided by an automated platform, is FAILED.
  AutoIdentificationStatusFAILED = 1,
/// The user did not complete an identification flow and the identification status, provided by an automated platform, is UNVERIFIED.
  AutoIdentificationStatusUNVERIFIED = 2,
};



@class NSCoder;

SWIFT_CLASS("_TtC9iDenfySDK25CustomCameraSessionDrawer")
@interface CustomCameraSessionDrawer : UIView
- (void)layoutSubviews;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC9iDenfySDK32FaceAuthenticationInitialization")
@interface FaceAuthenticationInitialization : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum FaceAuthenticationStatus : NSInteger;

/// Stores FaceAuthenticationStatus
SWIFT_CLASS("_TtC9iDenfySDK24FaceAuthenticationResult")
@interface FaceAuthenticationResult : NSObject
@property (nonatomic, readonly) enum FaceAuthenticationStatus faceAuthenticationStatus;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Returns face authentication status.
typedef SWIFT_ENUM(NSInteger, FaceAuthenticationStatus, open) {
/// The user completed a face authentication flow and the authentication status, provided by the platform, is SUCCESS.
  FaceAuthenticationStatusSUCCESS = 0,
/// The user completed a face authentication flow and the authentication status, provided by the platform, is FAILED.
  FaceAuthenticationStatusFAILED = 1,
/// The user did not complete a face authentication flow and the authentication status, provided by the platform, is EXIT.
  FaceAuthenticationStatusEXIT = 2,
};

typedef SWIFT_ENUM(NSInteger, FaceAuthenticationType, open) {
/// The user must perform an enrollment, since the identification was performed with an older face tec version
  FaceAuthenticationTypeEnrollment = 0,
/// The user can authenticate by face
  FaceAuthenticationTypeAuthentication = 1,
/// The user must perform an identification
  FaceAuthenticationTypeIdentification = 2,
};

@class IdenfyUISettingsV2;
@class NSString;
@class IdenfySettingsV2;

SWIFT_CLASS("_TtC9iDenfySDK15IdenfyBuilderV2")
@interface IdenfyBuilderV2 : NSObject
/// An option to provide custom UI Settings
/// \param idenfyUISettingsV2 overrides default UI Settings
///
- (IdenfyBuilderV2 * _Nonnull)withUISettingsV2:(IdenfyUISettingsV2 * _Nonnull)idenfyUISettingsV2 SWIFT_WARN_UNUSED_RESULT;
/// Used for providing an authentication token
/// \param authToken authentication token string
///
- (IdenfyBuilderV2 * _Nonnull)withAuthToken:(NSString * _Nonnull)authToken SWIFT_WARN_UNUSED_RESULT;
/// Used for providing a specific locale for iDenfy SDK
/// \param selectedLocale a specific locale enum
///
- (IdenfyBuilderV2 * _Nonnull)withSelectedLocale:(enum IdenfyLocaleEnum)selectedLocale SWIFT_WARN_UNUSED_RESULT;
/// Enables ssl pinning
/// \param sslPinning enables/disables ssl pinning
///
- (IdenfyBuilderV2 * _Nonnull)withSSLPinning:(BOOL)sslPinning SWIFT_WARN_UNUSED_RESULT;
- (IdenfySettingsV2 * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class IdenfyIdentificationResult;
@class IdenfySDKNavigationController;
@class IdenfyViewsV2;
@protocol IdenfyLoggingHandlerUseCase;

SWIFT_CLASS("_TtC9iDenfySDK16IdenfyController")
@interface IdenfyController : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) IdenfyController * _Nonnull shared;)
+ (IdenfyController * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) void (^ _Nullable idenfyFaceAuthenticationResultCallback)(FaceAuthenticationResult * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable idenfyIdentificationResultCallback)(IdenfyIdentificationResult * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable idenfyOnSDKCloseCallback)(IdenfyIdentificationResult * _Nonnull);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithIdenfySettings:(IdenfySettingsV2 * _Nonnull)idenfySettings OBJC_DESIGNATED_INITIALIZER;
/// Lets iDenfy SDK to proceed its flow (function is used with initializeWithCustomWaitingViewController flow)
+ (void)continueFlow;
/// Returns user’s identification result, but the UIViewController dismisses later.
/// \param idenfyIdentificationResult A callback for receiving result.
///
- (void)handleIdenfyCallbacksWithManualResultsWithIdenfyIdentificationResult:(void (^ _Nonnull)(IdenfyIdentificationResult * _Nonnull))idenfyIdentificationResult;
/// Dismisses SDK’s  UIViewController. Returns user’s identification result in the UIViewController dismiss completion callback.
/// \param idenfyIdentificationResult A callback for receiving result.
///
- (void)getIdenfyResultWithDismissWithIdenfyIdentificationResult:(void (^ _Nonnull)(IdenfyIdentificationResult * _Nonnull))idenfyIdentificationResult;
/// Returns user’s face authentication result
/// \param idenfyIdentificationResult A callback for receiving result.
///
- (void)handleIdenfyCallbacksForFaceAuthenticationWithFaceAuthenticationResult:(void (^ _Nonnull)(FaceAuthenticationResult * _Nonnull))faceAuthenticationResult;
/// Instantiates UINavigationViewController and returns it for presenting iDenfySDK views.
- (IdenfySDKNavigationController * _Nonnull)instantiateNavigationController SWIFT_WARN_UNUSED_RESULT;
/// Initializes iDenfySDK with provided settings, instantiateNavigationController() should be called next.
/// \param idenfySettingsV2 Used for providing identification token and custom settings.
///
/// \param idenfyViewsV2 Used for setting custom identification UI.
///
- (void)initializeIdenfySDKV2WithManualWithIdenfySettingsV2:(IdenfySettingsV2 * _Nonnull)idenfySettingsV2 idenfyViewsV2:(IdenfyViewsV2 * _Nonnull)idenfyViewsV2;
/// Initializes iDenfySDK with provided settings, instantiateNavigationController() should be called next.
/// \param idenfySettingsV2 Used for providing identification token and custom settings.
///
- (void)initializeIdenfySDKV2WithManualWithIdenfySettingsV2:(IdenfySettingsV2 * _Nonnull)idenfySettingsV2;
/// Initializes iDenfySDK Face Authentication, instantiateNavigationController() should be called next.
/// \param faceAuthenticationInitialization Used for providing face authentication information.
///
/// \param idenfyViewsV2 Used for setting custom identification UI.
///
- (void)initializeFaceAuthenticationWithFaceAuthenticationInitialization:(FaceAuthenticationInitialization * _Nonnull)faceAuthenticationInitialization;
/// Initializes  iDenfySDK Face Authentication, instantiateNavigationController() should be called next.
/// \param faceAuthenticationInitialization Used for providing face authentication information.
///
/// \param idenfyViewsV2 Used for setting custom identification UI.
///
- (void)initializeFaceAuthenticationWithFaceAuthenticationInitialization:(FaceAuthenticationInitialization * _Nonnull)faceAuthenticationInitialization idenfyViewsV2:(IdenfyViewsV2 * _Nonnull)idenfyViewsV2;
/// Enables to receive user action logs during identification verification process
/// \param idenfyLoggingHandler An implementation of Logging Handler
///
- (void)setIdenfyLoggingHandlerWithIdenfyLoggingHandler:(id <IdenfyLoggingHandlerUseCase> _Nonnull)idenfyLoggingHandler;
/// Returns current Idenfy SDK version
///
/// returns:
/// A String value of Idenfy SDK version
- (NSString * _Nonnull)getIdenfySDKVersion SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP9iDenfySDK39IdenfyCustomCameraSessionDrawerDelegate_")
@protocol IdenfyCustomCameraSessionDrawerDelegate
- (void)drawerBackButtonPressed;
- (void)drawerToggleFlashButtonPressed;
- (void)drawerInstructionDialogButtonPressed;
- (void)expandCollapseDrawerPressed;
- (void)nextInstructionButtonPressed;
- (void)previousInstructionButtonPressed;
@end

typedef SWIFT_ENUM(NSInteger, IdenfyDocumentSelectionTypeEnum, open) {
/// Navigation from document selection will begin when a document type is selected and an additional continue button is pressed
  IdenfyDocumentSelectionTypeEnumNavigateOnContinueButton = 0,
/// Navigation from document selection will begin immediatly when a document type is selected
  IdenfyDocumentSelectionTypeEnumNavigateOnTableViewSelection = 1,
};


SWIFT_CLASS("_TtC9iDenfySDK19IdenfyErrorResponse")
@interface IdenfyErrorResponse : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;
@class NSBundle;

SWIFT_CLASS("_TtC9iDenfySDK29IdenfySDKNavigationController")
@interface IdenfySDKNavigationController : UINavigationController
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9iDenfySDK44IdenfyFaceAuthenticationNavigationController")
@interface IdenfyFaceAuthenticationNavigationController : IdenfySDKNavigationController
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

enum ManualIdentificationStatus : NSInteger;
@class SuspectedIdentificationStatus;

/// Stores autoIdentificationStatus and manualIdentificationStatus identification statuses.
SWIFT_CLASS("_TtC9iDenfySDK26IdenfyIdentificationResult")
@interface IdenfyIdentificationResult : NSObject
@property (nonatomic, readonly) enum AutoIdentificationStatus autoIdentificationStatus;
@property (nonatomic, readonly) enum ManualIdentificationStatus manualIdentificationStatus;
@property (nonatomic, readonly, strong) SuspectedIdentificationStatus * _Nonnull suspectedIdentificationStatus;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9iDenfySDK39IdenfyIdentificationResultsUISettingsV2")
@interface IdenfyIdentificationResultsUISettingsV2 : NSObject
@property (nonatomic) BOOL isShowSuccessSpinnerImmediateRedirect;
@property (nonatomic) BOOL isShowErrorSpinnerImmediateRedirect;
@property (nonatomic) BOOL isAdditionalUploadingInformationVisible;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9iDenfySDK23IdenfyLivenessUIBuilder")
@interface IdenfyLivenessUIBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP9iDenfySDK27IdenfyLoggingHandlerUseCase_")
@protocol IdenfyLoggingHandlerUseCase
- (void)logEventWithEvent:(NSString * _Nonnull)event message:(NSString * _Nonnull)message token:(NSString * _Nonnull)token;
@end

typedef SWIFT_ENUM(NSInteger, IdenfyOnBoardingViewTypeEnum, open) {
/// Shows a single onBoarding view before verification process with all upcoming steps (This was a default setting prior to 7.x version)
  IdenfyOnBoardingViewTypeEnumSingle = 0,
/// Shows an onBoarding view before EVERY step of the verification process, with instructions dynamically changing (This is a default setting starting 7.x version)
  IdenfyOnBoardingViewTypeEnumMultipleDynamic = 1,
/// Shows an onBoarding view before EVERY step of the verification process with a static insturction list (This is a default setting starting 7.x version)
  IdenfyOnBoardingViewTypeEnumMultipleStatic = 2,
/// Does not show any onBoarding view
  IdenfyOnBoardingViewTypeEnumNone = 3,
};



SWIFT_CLASS("_TtC9iDenfySDK33IdenfySDKNavigationControllerImpl")
@interface IdenfySDKNavigationControllerImpl : IdenfySDKNavigationController
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end








SWIFT_CLASS("_TtC9iDenfySDK16IdenfySettingsV2")
@interface IdenfySettingsV2 : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ImmediateRedirectEnum : NSInteger;

SWIFT_CLASS("_TtC9iDenfySDK17IdenfyUIBuilderV2")
@interface IdenfyUIBuilderV2 : NSObject
/// Enables immediate redirect after receiving identification results
/// \param immediateRedirectEnum defines severity of immediate redirect
///
- (IdenfyUIBuilderV2 * _Nonnull)withImmediateRedirect:(enum ImmediateRedirectEnum)immediateRedirectEnum SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9iDenfySDK18IdenfyUISettingsV2")
@interface IdenfyUISettingsV2 : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The builder, which is used for creating an instance of IdenfyViewsV2.
SWIFT_CLASS("_TtC9iDenfySDK20IdenfyViewsBuilderV2")
@interface IdenfyViewsBuilderV2 : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Used for providing custom identification UI.
SWIFT_CLASS("_TtC9iDenfySDK13IdenfyViewsV2")
@interface IdenfyViewsV2 : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Enum class to determine severity of immediate redirect.
typedef SWIFT_ENUM(NSInteger, ImmediateRedirectEnum, open) {
/// Immediate redirect won’t happen in any case.
  ImmediateRedirectEnumNone = 0,
/// Immediate redirect will happen for error with identifiers:
/// <ul>
///   <li>
///     TOO_MANY_REATTEMPTS_IDENTIFIER
///   </li>
///   <li>
///     ASSERTION_ERROR_IDENTIFIER
///   </li>
///   <li>
///     TOKEN_NOT_VALID_IDENTIFIER
///   </li>
/// </ul>
  ImmediateRedirectEnumPartial = 1,
/// Immediate redirect will always happen.
  ImmediateRedirectEnumFull = 2,
};

/// Returns an manual identification status.
typedef SWIFT_ENUM(NSInteger, ManualIdentificationStatus, open) {
/// The user completed an identification flow and was verified manually while waiting for the manual verification results in the iDenfy SDK. The identification status, provided by a manual review, is APPROVED.
  ManualIdentificationStatusAPPROVED = 0,
/// The user completed an identification flow and was verified manually while waiting for the manual verification results in the iDenfy SDK. The identification status, provided by a manual review, is FAILED.
  ManualIdentificationStatusFAILED = 1,
/// The user completed an identification flow and started waiting for the manual verification results in the iDenfy SDK. Then he/she decided to stop waiting and pressed a “BACK TO ACCOUNT” button. The manual identification review is <em>still ongoing</em>.
  ManualIdentificationStatusWAITING = 2,
/// The user was only verified by an automated platform, not by a manual reviewer. The identification performed by the user can still be verified by the manual review if your system uses the manual verification service.
  ManualIdentificationStatusINACTIVE = 3,
};




/// Stores additional info, whether identification was automatically or manually set as SUSPECTED
SWIFT_CLASS("_TtC9iDenfySDK29SuspectedIdentificationStatus")
@interface SuspectedIdentificationStatus : NSObject
@property (nonatomic) BOOL autoSuspected;
@property (nonatomic) BOOL manualSuspected;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end
























@interface UINavigationController (SWIFT_EXTENSION(iDenfySDK))
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@end

















#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

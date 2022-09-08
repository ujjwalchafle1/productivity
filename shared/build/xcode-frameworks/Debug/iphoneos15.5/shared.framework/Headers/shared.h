#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedBaseViewModel<ViewData>, SharedDashboardViewData, SharedViewDataResource<T>, SharedBaseViewData, SharedViewDataResourceData<T>, SharedViewDataResourceError<T>, SharedConstants, SharedResource<T>, SharedKotlinThrowable, SharedResourceError<T>, SharedResourceLoading<T>, SharedResourceSuccess<T>, SharedEvent<__covariant T>, SharedKotlinCancellationException, SharedJobSupport, SharedCoroutineStart, SharedCoroutineDispatcher, SharedKotlinAbstractCoroutineContextElement, SharedCoroutineDispatcherKey, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedCoroutineExceptionHandlerKey, SharedCoroutineNameKey, SharedCoroutineName, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedDispatchers, SharedMainCoroutineDispatcher, SharedGlobalScope, SharedJobKey, SharedNonCancellable, SharedNonDisposableHandle, SharedKotlinIllegalStateException, SharedTimeoutCancellationException, SharedBufferOverflow, SharedChannelFactory, SharedKotlinNoSuchElementException, SharedSharingCommand, SharedSharingStartedCompanion, SharedChannelFlow<T>, SharedAtomicDesc, SharedLockFreeLinkedListNodePrepareOp, SharedAtomicOp<__contravariant T>, SharedOpDescriptor, SharedLockFreeLinkedListNode, SharedLockFreeLinkedListNodeAddLastDesc<T>, SharedLockFreeLinkedListNodeRemoveFirstDesc<T>, SharedLockFreeLinkedListNodeAbstractAtomicDesc, SharedAtomicfuSynchronizedObjectLockState, SharedKotlinAtomicReference<T>, SharedAtomicfuSynchronizedObject, SharedThreadSafeHeap<T>, SharedKotlinPair<__covariant A, __covariant B>, SharedKotlinIntIterator, SharedKotlinIntArray, SharedKotlinLongIterator, SharedKotlinLongArray, SharedKotlinIntProgressionCompanion, SharedKotlinIntProgression, SharedKotlinIntRangeCompanion, SharedKotlinIntRange, SharedKotlinLongProgressionCompanion, SharedKotlinLongProgression, SharedKotlinLongRangeCompanion, SharedKotlinLongRange, SharedKotlinNothing, SharedCloseableCoroutineDispatcher, SharedAtomicfuSynchronizedObjectStatus;

@protocol SharedCoroutineScope, SharedStateFlow, SharedChildHandle, SharedChildJob, SharedDisposableHandle, SharedJob, SharedKotlinSequence, SharedSelectClause0, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContext, SharedParentJob, SharedSelectInstance, SharedKotlinSuspendFunction0, SharedKotlinContinuation, SharedKotlinSuspendFunction1, SharedKotlinContinuationInterceptor, SharedRunnable, SharedSelectClause1, SharedDeferred, SharedKotlinComparable, SharedCancellableContinuation, SharedCopyableThrowable, SharedReceiveChannel, SharedSelectClause2, SharedSendChannel, SharedChannelIterator, SharedBroadcastChannel, SharedFlowCollector, SharedFlow, SharedSharedFlow, SharedMutableSharedFlow, SharedSharingStarted, SharedFusibleFlow, SharedProducerScope, SharedMainDispatcherFactory, SharedKotlinIterator, SharedKotlinIterable, SharedKotlinClosedRange, SharedPersistedRepositoryMapper, SharedRepositoryMapper, SharedCompletableJob, SharedCompletableDeferred, SharedCoroutineExceptionHandler, SharedChannel, SharedKotlinSuspendFunction2, SharedKotlinSuspendFunction3, SharedMutableStateFlow, SharedKotlinSuspendFunction5, SharedKotlinSuspendFunction4, SharedKotlinSuspendFunction6, SharedSelectBuilder, SharedMutex, SharedSemaphore, SharedKotlinFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("BaseViewModel")))
@interface SharedBaseViewModel<ViewData> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)observeViewDataOnViewData:(void (^)(ViewData))onViewData __attribute__((swift_name("observeViewData(onViewData:)")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
@property (readonly) id<SharedCoroutineScope> backgroundScope __attribute__((swift_name("backgroundScope")));
@property (readonly) id<SharedCoroutineScope> scope __attribute__((swift_name("scope")));
@property id<SharedCoroutineScope> _Nullable testScope __attribute__((swift_name("testScope")));
@property (readonly) id<SharedStateFlow> _Nullable viewData __attribute__((swift_name("viewData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DashboardViewModel")))
@interface SharedDashboardViewModel : SharedBaseViewModel<SharedViewDataResource<SharedDashboardViewData *> *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)daysUntilNewYear __attribute__((swift_name("daysUntilNewYear()")));
- (void)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedStateFlow> viewData __attribute__((swift_name("viewData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("BaseViewData")))
@interface SharedBaseViewData : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DashboardViewData")))
@interface SharedDashboardViewData : SharedBaseViewData
- (instancetype)initWithDaysRemainingInYear:(NSString *)daysRemainingInYear __attribute__((swift_name("init(daysRemainingInYear:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedDashboardViewData *)doCopyDaysRemainingInYear:(NSString *)daysRemainingInYear __attribute__((swift_name("doCopy(daysRemainingInYear:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *daysRemainingInYear __attribute__((swift_name("daysRemainingInYear")));
@end;

__attribute__((swift_name("ViewDataResource")))
@interface SharedViewDataResource<T> : SharedBaseViewData
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewDataResourceData")))
@interface SharedViewDataResourceData<T> : SharedViewDataResource<T>
- (instancetype)initWithViewData:(T _Nullable)viewData __attribute__((swift_name("init(viewData:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedViewDataResourceData<T> *)doCopyViewData:(T _Nullable)viewData __attribute__((swift_name("doCopy(viewData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable viewData __attribute__((swift_name("viewData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewDataResourceEmpty")))
@interface SharedViewDataResourceEmpty<T> : SharedViewDataResource<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewDataResourceError")))
@interface SharedViewDataResourceError<T> : SharedViewDataResource<T>
- (instancetype)initWithErrorViewData:(T _Nullable)errorViewData __attribute__((swift_name("init(errorViewData:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedViewDataResourceError<T> *)doCopyErrorViewData:(T _Nullable)errorViewData __attribute__((swift_name("doCopy(errorViewData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable errorViewData __attribute__((swift_name("errorViewData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewDataResourceLoading")))
@interface SharedViewDataResourceLoading<T> : SharedViewDataResource<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("ViewDataResourceObserver")))
@protocol SharedViewDataResourceObserver
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onDataViewData:(id _Nullable)viewData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onData(viewData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onEmptyWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onEmpty(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onErrorErrorViewData:(id _Nullable)errorViewData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onError(errorViewData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onLoadingWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onLoading(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface SharedConstants : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *HELP_CENTRE_URL __attribute__((swift_name("HELP_CENTRE_URL")));
@property (readonly) NSString *LOG_DEFAULT_TAG __attribute__((swift_name("LOG_DEFAULT_TAG")));
@end;

__attribute__((swift_name("PersistedRepositoryMapper")))
@protocol SharedPersistedRepositoryMapper
@required
- (id _Nullable)dtoToEntityDto:(id _Nullable)dto __attribute__((swift_name("dtoToEntity(dto:)")));
- (id _Nullable)entityToDataEntity:(id _Nullable)entity __attribute__((swift_name("entityToData(entity:)")));
@end;

__attribute__((swift_name("RepositoryMapper")))
@protocol SharedRepositoryMapper
@required
- (id _Nullable)dtoToDataDto:(id _Nullable)dto __attribute__((swift_name("dtoToData(dto:)")));
@end;

__attribute__((swift_name("Resource")))
@interface SharedResource<T> : SharedBase
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceError")))
@interface SharedResourceError<T> : SharedResource<T>
- (instancetype)initWithError:(SharedKotlinThrowable *)error data:(T _Nullable)data __attribute__((swift_name("init(error:data:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedResourceError<T> *)doCopyError:(SharedKotlinThrowable *)error data:(T _Nullable)data __attribute__((swift_name("doCopy(error:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) SharedKotlinThrowable *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceLoading")))
@interface SharedResourceLoading<T> : SharedResource<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedResourceLoading<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceSuccess")))
@interface SharedResourceSuccess<T> : SharedResource<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedResourceSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface SharedEvent<__covariant T> : SharedBase
- (instancetype)initWithContent:(T _Nullable)content __attribute__((swift_name("init(content:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)consume __attribute__((swift_name("consume()")));
- (SharedEvent<T> *)doCopyContent:(T _Nullable)content __attribute__((swift_name("doCopy(content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasBeenHandled __attribute__((swift_name("hasBeenHandled")));
@end;

__attribute__((swift_name("WithIdentifier")))
@protocol SharedWithIdentifier
@required
@property (readonly) int64_t identifier __attribute__((swift_name("identifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting_")))
@interface SharedGreeting_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_")))
@interface SharedPlatform_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Job")))
@protocol SharedJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedChildHandle>)attachChildChild:(id<SharedChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedJob>)plusOther:(id<SharedJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("ChildJob")))
@protocol SharedChildJob <SharedJob>
@required
- (void)parentCancelledParentJob:(id<SharedParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("ParentJob")))
@protocol SharedParentJob <SharedJob>
@required
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("SelectClause0")))
@protocol SharedSelectClause0
@required
- (void)registerSelectClause0Select:(id<SharedSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("JobSupport")))
@interface SharedJobSupport : SharedBase <SharedJob, SharedChildJob, SharedParentJob, SharedSelectClause0>
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("This is internal API and may be removed in the future releases")));
- (void)afterCompletionState:(id _Nullable)state __attribute__((swift_name("afterCompletion(state:)")));
- (id<SharedChildHandle>)attachChildChild:(id<SharedChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancelCoroutineCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancelCoroutine(cause:)")));
- (void)cancelInternalCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("cancelInternal(cause:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
- (SharedKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
- (BOOL)handleJobExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("handleJobException(exception:)")));
- (void)doInitParentJobParent:(id<SharedJob> _Nullable)parent __attribute__((swift_name("doInitParentJob(parent:)")));
- (id<SharedDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (void)onCancellingCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("onCancelling(cause:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)parentCancelledParentJob:(id<SharedParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
- (void)registerSelectClause0Select:(id<SharedSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
- (BOOL)start __attribute__((swift_name("start()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedKotlinCancellationException *)toCancellationException:(SharedKotlinThrowable *)receiver message:(NSString * _Nullable)message __attribute__((swift_name("toCancellationException(_:message:)")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) SharedKotlinThrowable * _Nullable completionCause __attribute__((swift_name("completionCause")));
@property (readonly) BOOL completionCauseHandled __attribute__((swift_name("completionCauseHandled")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isCompletedExceptionally __attribute__((swift_name("isCompletedExceptionally")));
@property (readonly) BOOL isScopedCoroutine __attribute__((swift_name("isScopedCoroutine")));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@property (readonly) id<SharedSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("CoroutineScope")))
@protocol SharedCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("AbstractCoroutine")))
@interface SharedAbstractCoroutine<__contravariant T> : SharedJobSupport <SharedJob, SharedKotlinContinuation, SharedCoroutineScope>
- (instancetype)initWithParentContext:(id<SharedKotlinCoroutineContext>)parentContext initParentJob:(BOOL)initParentJob active:(BOOL)active __attribute__((swift_name("init(parentContext:initParentJob:active:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterResumeState:(id _Nullable)state __attribute__((swift_name("afterResume(state:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (void)onCancelledCause:(SharedKotlinThrowable *)cause handled:(BOOL)handled __attribute__((swift_name("onCancelled(cause:handled:)")));
- (void)onCompletedValue:(T _Nullable)value __attribute__((swift_name("onCompleted(value:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
- (void)startStart:(SharedCoroutineStart *)start receiver:(id _Nullable)receiver block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("start(start:receiver:block:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@end;

__attribute__((swift_name("CancellableContinuation")))
@protocol SharedCancellableContinuation <SharedKotlinContinuation>
@required
- (BOOL)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)doInitCancellability __attribute__((swift_name("doInitCancellability()")));
- (void)invokeOnCancellationHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^ _Nullable)(SharedKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent onCancellation:(void (^ _Nullable)(SharedKotlinThrowable *))onCancellation __attribute__((swift_name("tryResume(value:idempotent:onCancellation:)")));
- (id _Nullable)tryResumeWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(SharedCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(SharedCoroutineDispatcher *)receiver exception:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((swift_name("DisposableHandle")))
@protocol SharedDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("ChildHandle")))
@protocol SharedChildHandle <SharedDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SharedJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("CoroutineDispatcher")))
@interface SharedCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SharedCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedCoroutineDispatcher *)plusOther_:(SharedCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("CloseableCoroutineDispatcher")))
@interface SharedCloseableCoroutineDispatcher : SharedCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Deferred")))
@protocol SharedDeferred <SharedJob>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));
- (SharedKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<SharedSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end;

__attribute__((swift_name("CompletableDeferred")))
@protocol SharedCompletableDeferred <SharedDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(SharedKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("CompletableJob")))
@protocol SharedCompletableJob <SharedJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(SharedKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletionHandlerException")))
@interface SharedCompletionHandlerException : SharedKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message cause:(SharedKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("CopyableThrowable")))
@protocol SharedCopyableThrowable
@required
- (SharedKotlinThrowable * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineDispatcher.Key")))
@interface SharedCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CoroutineExceptionHandler")))
@protocol SharedCoroutineExceptionHandler <SharedKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<SharedKotlinCoroutineContext>)context exception:(SharedKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKey")))
@interface SharedCoroutineExceptionHandlerKey : SharedBase <SharedKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCoroutineExceptionHandlerKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName")))
@interface SharedCoroutineName : SharedKotlinAbstractCoroutineContextElement
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedCoroutineNameKey *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedCoroutineName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName.Key")))
@interface SharedCoroutineNameKey : SharedBase <SharedKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCoroutineNameKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineStart")))
@interface SharedCoroutineStart : SharedKotlinEnum<SharedCoroutineStart *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCoroutineStart *default_ __attribute__((swift_name("default_")));
@property (class, readonly) SharedCoroutineStart *lazy __attribute__((swift_name("lazy")));
@property (class, readonly) SharedCoroutineStart *atomic __attribute__((swift_name("atomic")));
@property (class, readonly) SharedCoroutineStart *undispatched __attribute__((swift_name("undispatched")));
+ (SharedKotlinArray<SharedCoroutineStart *> *)values __attribute__((swift_name("values()")));
- (void)invokeBlock:(id<SharedKotlinSuspendFunction0>)block completion:(id<SharedKotlinContinuation>)completion __attribute__((swift_name("invoke(block:completion:)")));
- (void)invokeBlock:(id<SharedKotlinSuspendFunction1>)block receiver:(id _Nullable)receiver completion:(id<SharedKotlinContinuation>)completion __attribute__((swift_name("invoke(block:receiver:completion:)")));
@property (readonly) BOOL isLazy __attribute__((swift_name("isLazy")));
@end;

__attribute__((swift_name("Delay")))
@protocol SharedDelay
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)delayTime:(int64_t)time completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(time:completionHandler:)"))) __attribute__((unavailable("Deprecated without replacement as an internal method never intended for public use")));
- (id<SharedDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<SharedRunnable>)block context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("invokeOnTimeout(timeMillis:block:context:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<SharedCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatchers")))
@interface SharedDispatchers : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly) SharedCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) SharedMainCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@property (readonly) SharedCoroutineDispatcher *Unconfined __attribute__((swift_name("Unconfined")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface SharedGlobalScope : SharedBase <SharedCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGlobalScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKey")))
@interface SharedJobKey : SharedBase <SharedKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedJobKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("MainCoroutineDispatcher")))
@interface SharedMainCoroutineDispatcher : SharedCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)toStringInternalImpl __attribute__((swift_name("toStringInternalImpl()")));
@property (readonly) SharedMainCoroutineDispatcher *immediate __attribute__((swift_name("immediate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonCancellable")))
@interface SharedNonCancellable : SharedKotlinAbstractCoroutineContextElement <SharedJob>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)nonCancellable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNonCancellable *shared __attribute__((swift_name("shared")));
- (id<SharedChildHandle>)attachChildChild:(id<SharedChildJob>)child __attribute__((swift_name("attachChild(child:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<SharedDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<SharedDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (BOOL)start __attribute__((swift_name("start()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<SharedSelectClause0> onJoin __attribute__((swift_name("onJoin"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonDisposableHandle")))
@interface SharedNonDisposableHandle : SharedBase <SharedDisposableHandle, SharedChildHandle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nonDisposableHandle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNonDisposableHandle *shared __attribute__((swift_name("shared")));
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Runnable")))
@protocol SharedRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutCancellationException")))
@interface SharedTimeoutCancellationException : SharedKotlinCancellationException <SharedCopyableThrowable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedTimeoutCancellationException *)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("SendChannel")))
@protocol SharedSendChannel
@required
- (BOOL)closeCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<SharedSelectClause2> onSend __attribute__((swift_name("onSend")));
@end;

__attribute__((swift_name("BroadcastChannel")))
@protocol SharedBroadcastChannel <SharedSendChannel>
@required
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<SharedReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BufferOverflow")))
@interface SharedBufferOverflow : SharedKotlinEnum<SharedBufferOverflow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedBufferOverflow *suspend __attribute__((swift_name("suspend")));
@property (class, readonly) SharedBufferOverflow *dropOldest __attribute__((swift_name("dropOldest")));
@property (class, readonly) SharedBufferOverflow *dropLatest __attribute__((swift_name("dropLatest")));
+ (SharedKotlinArray<SharedBufferOverflow *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ReceiveChannel")))
@protocol SharedReceiveChannel
@required
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<SharedChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<SharedSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<SharedSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<SharedSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end;

__attribute__((swift_name("Channel")))
@protocol SharedChannel <SharedSendChannel, SharedReceiveChannel>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelFactory")))
@interface SharedChannelFactory : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedChannelFactory *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BUFFERED __attribute__((swift_name("BUFFERED")));
@property (readonly) int32_t CONFLATED __attribute__((swift_name("CONFLATED")));
@property (readonly) NSString *DEFAULT_BUFFER_PROPERTY_NAME __attribute__((swift_name("DEFAULT_BUFFER_PROPERTY_NAME")));
@property (readonly) int32_t RENDEZVOUS __attribute__((swift_name("RENDEZVOUS")));
@property (readonly) int32_t UNLIMITED __attribute__((swift_name("UNLIMITED")));
@end;

__attribute__((swift_name("ChannelIterator")))
@protocol SharedChannelIterator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface SharedKotlinNoSuchElementException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedReceiveChannelException")))
@interface SharedClosedReceiveChannelException : SharedKotlinNoSuchElementException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedSendChannelException")))
@interface SharedClosedSendChannelException : SharedKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConflatedBroadcastChannel")))
@interface SharedConflatedBroadcastChannel<E> : SharedBase <SharedBroadcastChannel>
- (instancetype)initWithValue:(E _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)closeCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (id<SharedReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(E _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(E _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<SharedSelectClause2> onSend __attribute__((swift_name("onSend")));
@property (readonly) E _Nullable value __attribute__((swift_name("value")));
@property (readonly) E _Nullable valueOrNull __attribute__((swift_name("valueOrNull")));
@end;

__attribute__((swift_name("ProducerScope")))
@protocol SharedProducerScope <SharedCoroutineScope, SharedSendChannel>
@required
@property (readonly) id<SharedSendChannel> channel __attribute__((swift_name("channel")));
@end;

__attribute__((swift_name("Flow")))
@protocol SharedFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("AbstractFlow")))
@interface SharedAbstractFlow<T> : SharedBase <SharedFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectSafelyCollector:(id<SharedFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectSafely(collector:completionHandler:)")));
@end;

__attribute__((swift_name("FlowCollector")))
@protocol SharedFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SharedFlow")))
@protocol SharedSharedFlow <SharedFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("MutableSharedFlow")))
@protocol SharedMutableSharedFlow <SharedSharedFlow, SharedFlowCollector>
@required
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end;

__attribute__((swift_name("StateFlow")))
@protocol SharedStateFlow <SharedSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("MutableStateFlow")))
@protocol SharedMutableStateFlow <SharedStateFlow, SharedMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingCommand")))
@interface SharedSharingCommand : SharedKotlinEnum<SharedSharingCommand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharingCommand *start __attribute__((swift_name("start")));
@property (class, readonly) SharedSharingCommand *stop __attribute__((swift_name("stop")));
@property (class, readonly) SharedSharingCommand *stopAndResetReplayCache __attribute__((swift_name("stopAndResetReplayCache")));
+ (SharedKotlinArray<SharedSharingCommand *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("SharingStarted")))
@protocol SharedSharingStarted
@required
- (id<SharedFlow>)commandSubscriptionCount:(id<SharedStateFlow>)subscriptionCount __attribute__((swift_name("command(subscriptionCount:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingStartedCompanion")))
@interface SharedSharingStartedCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSharingStartedCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedSharingStarted>)WhileSubscribedStopTimeoutMillis:(int64_t)stopTimeoutMillis replayExpirationMillis:(int64_t)replayExpirationMillis __attribute__((swift_name("WhileSubscribed(stopTimeoutMillis:replayExpirationMillis:)")));
@property (readonly) id<SharedSharingStarted> Eagerly __attribute__((swift_name("Eagerly")));
@property (readonly) id<SharedSharingStarted> Lazily __attribute__((swift_name("Lazily")));
@end;

__attribute__((swift_name("FusibleFlow")))
@protocol SharedFusibleFlow <SharedFlow>
@required
- (id<SharedFlow>)fuseContext:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
@end;

__attribute__((swift_name("ChannelFlow")))
@interface SharedChannelFlow<T> : SharedBase <SharedFusibleFlow>
- (instancetype)initWithContext:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("init(context:capacity:onBufferOverflow:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)additionalToStringProps __attribute__((swift_name("additionalToStringProps()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectToScope:(id<SharedProducerScope>)scope completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectTo(scope:completionHandler:)")));
- (SharedChannelFlow<T> *)createContext:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("create(context:capacity:onBufferOverflow:)")));
- (id<SharedFlow> _Nullable)dropChannelOperators __attribute__((swift_name("dropChannelOperators()")));
- (id<SharedFlow>)fuseContext:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
- (id<SharedReceiveChannel>)produceImplScope:(id<SharedCoroutineScope>)scope __attribute__((swift_name("produceImpl(scope:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) SharedBufferOverflow *onBufferOverflow __attribute__((swift_name("onBufferOverflow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendingCollector")))
@interface SharedSendingCollector<T> : SharedBase <SharedFlowCollector>
- (instancetype)initWithChannel:(id<SharedSendChannel>)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SelectBuilder")))
@protocol SharedSelectBuilder
@required
- (void)onTimeoutTimeMillis:(int64_t)timeMillis block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(timeMillis:block:)")));
- (void)invoke:(id<SharedSelectClause0>)receiver block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("invoke(_:block:)")));
- (void)invoke:(id<SharedSelectClause1>)receiver block_:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block_:)")));
- (void)invoke:(id<SharedSelectClause2>)receiver param:(id _Nullable)param block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:param:block:)")));
- (void)invoke:(id<SharedSelectClause2>)receiver block__:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block__:)")));
@end;

__attribute__((swift_name("SelectClause1")))
@protocol SharedSelectClause1
@required
- (void)registerSelectClause1Select:(id<SharedSelectInstance>)select block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("SelectClause2")))
@protocol SharedSelectClause2
@required
- (void)registerSelectClause2Select:(id<SharedSelectInstance>)select param:(id _Nullable)param block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end;

__attribute__((swift_name("SelectInstance")))
@protocol SharedSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SharedDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SharedAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SharedLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("AtomicDesc")))
@interface SharedAtomicDesc : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SharedAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SharedAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("OpDescriptor")))
@interface SharedOpDescriptor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SharedOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("AtomicOp")))
@interface SharedAtomicOp<__contravariant T> : SharedOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SharedAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode")))
@interface SharedLockFreeLinkedListNode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SharedLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SharedLockFreeLinkedListNode *)node condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SharedLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SharedLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedLockFreeLinkedListNode *))predicate condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SharedLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SharedLockFreeLinkedListNodeAddLastDesc<SharedLockFreeLinkedListNode *> *)describeAddLastNode:(SharedLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SharedLockFreeLinkedListNodeRemoveFirstDesc<SharedLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (SharedLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SharedLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) SharedLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SharedLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("LockFreeLinkedListHead")))
@interface SharedLockFreeLinkedListHead : SharedLockFreeLinkedListNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)forEachBlock:(void (^)(SharedLockFreeLinkedListNode *))block __attribute__((swift_name("forEach(block:)")));
- (SharedLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SharedLockFreeLinkedListNodeAbstractAtomicDesc : SharedAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(SharedLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SharedLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SharedLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SharedAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(SharedLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeAddLastDesc")))
@interface SharedLockFreeLinkedListNodeAddLastDesc<T> : SharedLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) SharedLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockFreeLinkedListNode.PrepareOp")))
@interface SharedLockFreeLinkedListNodePrepareOp : SharedOpDescriptor
- (instancetype)initWithAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next desc:(SharedLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SharedAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SharedLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SharedLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeRemoveFirstDesc")))
@interface SharedLockFreeLinkedListNodeRemoveFirstDesc<T> : SharedLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(SharedLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(SharedLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (SharedLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedLockFreeLinkedListNode *)affected next:(SharedLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) SharedLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) SharedLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((swift_name("MainDispatcherFactory")))
@protocol SharedMainDispatcherFactory
@required
- (SharedMainCoroutineDispatcher *)createDispatcherAllFactories:(NSArray<id<SharedMainDispatcherFactory>> *)allFactories __attribute__((swift_name("createDispatcher(allFactories:)")));
- (NSString * _Nullable)hintOnError __attribute__((swift_name("hintOnError()")));
@property (readonly) int32_t loadPriority __attribute__((swift_name("loadPriority")));
@end;

__attribute__((swift_name("AtomicfuSynchronizedObject")))
@interface SharedAtomicfuSynchronizedObject : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (BOOL)tryLock __attribute__((swift_name("tryLock()")));
- (void)unlock __attribute__((swift_name("unlock()")));
@property (readonly, getter=lock_) SharedKotlinAtomicReference<SharedAtomicfuSynchronizedObjectLockState *> *lock __attribute__((swift_name("lock")));
@end;

__attribute__((swift_name("ThreadSafeHeap")))
@interface SharedThreadSafeHeap<T> : SharedAtomicfuSynchronizedObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(T)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(T)node cond:(SharedBoolean *(^)(T _Nullable))cond __attribute__((swift_name("addLastIf(node:cond:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)findPredicate:(SharedBoolean *(^)(T))predicate __attribute__((swift_name("find(predicate:)")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (BOOL)removeNode:(T)node __attribute__((swift_name("remove(node:)")));
- (T _Nullable)removeFirstIfPredicate:(SharedBoolean *(^)(T))predicate __attribute__((swift_name("removeFirstIf(predicate:)")));
- (T _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("ThreadSafeHeapNode")))
@protocol SharedThreadSafeHeapNode
@required
@property SharedThreadSafeHeap<id> * _Nullable heap __attribute__((swift_name("heap")));
@property int32_t index __attribute__((swift_name("index")));
@end;

__attribute__((swift_name("Mutex")))
@protocol SharedMutex
@required
- (BOOL)holdsLockOwner:(id)owner __attribute__((swift_name("holdsLock(owner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockOwner:(id _Nullable)owner completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("lock(owner:completionHandler:)")));
- (BOOL)tryLockOwner:(id _Nullable)owner __attribute__((swift_name("tryLock(owner:)")));
- (void)unlockOwner:(id _Nullable)owner __attribute__((swift_name("unlock(owner:)")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@property (readonly) id<SharedSelectClause2> onLock __attribute__((swift_name("onLock"))) __attribute__((deprecated("Mutex.onLock deprecated without replacement. For additional details please refer to #2794")));
@end;

__attribute__((swift_name("Semaphore")))
@protocol SharedSemaphore
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting__")))
@interface SharedGreeting__ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform__")))
@interface SharedPlatform__ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

@interface SharedResource (Extensions)

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)toViewDataResourceMapper:(id<SharedKotlinSuspendFunction1>)mapper onError:(id _Nullable (^ _Nullable)(SharedResourceError<id> * _Nullable))onError completionHandler:(void (^)(SharedViewDataResource<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toViewDataResource(mapper:onError:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

@interface SharedKotlinPair (Extensions)
- (void)safeLetAction:(void (^)(id _Nullable, id _Nullable))action __attribute__((swift_name("safeLet(action:)")));
@end;

@interface SharedCoroutineDispatcher (Extensions)

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(block:completionHandler:)")));
@end;

@interface SharedSharingStartedCompanion (Extensions)
- (id<SharedSharingStarted>)WhileSubscribedStopTimeout:(int64_t)stopTimeout replayExpiration:(int64_t)replayExpiration __attribute__((swift_name("WhileSubscribed(stopTimeout:replayExpiration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface SharedKotlinArray (Extensions)
- (id<SharedFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface SharedKotlinIntArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedInt *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface SharedKotlinIntArray (Extensions)
- (id<SharedFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface SharedKotlinLongArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedLong *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface SharedKotlinLongArray (Extensions)
- (id<SharedFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol SharedKotlinIterable
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface SharedKotlinIntProgression : SharedBase <SharedKotlinIterable>
@property (class, readonly, getter=companion) SharedKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol SharedKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface SharedKotlinIntRange : SharedKotlinIntProgression <SharedKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(SharedInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) SharedInt *start __attribute__((swift_name("start")));
@end;

@interface SharedKotlinIntRange (Extensions)
- (id<SharedFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinLongProgression")))
@interface SharedKotlinLongProgression : SharedBase <SharedKotlinIterable>
@property (class, readonly, getter=companion) SharedKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (SharedKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface SharedKotlinLongRange : SharedKotlinLongProgression <SharedKotlinClosedRange>
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(SharedLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) SharedLong *start __attribute__((swift_name("start")));
@end;

@interface SharedKotlinLongRange (Extensions)
- (id<SharedFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExhaustiveKt")))
@interface SharedExhaustiveKt : SharedBase
+ (id _Nullable)exhaustive:(id _Nullable)receiver __attribute__((swift_name("exhaustive(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowUtilsKt")))
@interface SharedFlowUtilsKt : SharedBase
+ (id<SharedMutableSharedFlow>)MutableSingleSharedFlow __attribute__((swift_name("MutableSingleSharedFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberUtilsKt")))
@interface SharedNumberUtilsKt : SharedBase
+ (double)roundTo:(double)receiver decimalPlaces:(int32_t)decimalPlaces __attribute__((swift_name("roundTo(_:decimalPlaces:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceFlowBuildersKt")))
@interface SharedResourceFlowBuildersKt : SharedBase
+ (id<SharedFlow>)networkBoundResourceFetchFromLocal:(id<SharedKotlinSuspendFunction0>)fetchFromLocal shouldFetchFromRemote:(SharedBoolean *(^)(id _Nullable))shouldFetchFromRemote fetchFromRemote:(id<SharedKotlinSuspendFunction0>)fetchFromRemote saveRemoteData:(id<SharedKotlinSuspendFunction1>)saveRemoteData onFetchFailed:(void (^)(SharedKotlinThrowable *))onFetchFailed persistedRepositoryMapper:(id<SharedPersistedRepositoryMapper>)persistedRepositoryMapper __attribute__((swift_name("networkBoundResource(fetchFromLocal:shouldFetchFromRemote:fetchFromRemote:saveRemoteData:onFetchFailed:persistedRepositoryMapper:)")));
+ (id<SharedFlow>)remoteResourceFetchFromRemote:(id<SharedKotlinSuspendFunction0>)fetchFromRemote repositoryMapper:(id<SharedRepositoryMapper>)repositoryMapper __attribute__((swift_name("remoteResource(fetchFromRemote:repositoryMapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKt")))
@interface SharedJobKt : SharedBase
+ (BOOL)isActive:(id<SharedKotlinCoroutineContext>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<SharedJob>)job:(id<SharedKotlinCoroutineContext>)receiver __attribute__((swift_name("job(_:)")));
+ (id<SharedCompletableJob>)JobParent:(id<SharedJob> _Nullable)parent __attribute__((swift_name("Job(parent:)")));
+ (void)cancel:(id<SharedKotlinCoroutineContext>)receiver cause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<SharedJob>)receiver message:(NSString *)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)cancelAndJoin:(id<SharedJob>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelAndJoin(_:completionHandler:)")));
+ (void)cancelChildren:(id<SharedKotlinCoroutineContext>)receiver cause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause:)")));
+ (void)cancelChildren:(id<SharedJob>)receiver cause_:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause_:)")));
+ (void)ensureActive:(id<SharedKotlinCoroutineContext>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (void)ensureActive_:(id<SharedJob>)receiver __attribute__((swift_name("ensureActive(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopeKt")))
@interface SharedCoroutineScopeKt : SharedBase
+ (BOOL)isActive:(id<SharedCoroutineScope>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<SharedCoroutineScope>)CoroutineScopeContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("CoroutineScope(context:)")));
+ (id<SharedCoroutineScope>)MainScope __attribute__((swift_name("MainScope()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)coroutineScopeBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("coroutineScope(block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)currentCoroutineContextWithCompletionHandler:(void (^)(id<SharedKotlinCoroutineContext> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentCoroutineContext(completionHandler:)")));
+ (void)cancel:(id<SharedCoroutineScope>)receiver message:(NSString *)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));
+ (void)cancel:(id<SharedCoroutineScope>)receiver cause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)ensureActive:(id<SharedCoroutineScope>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (id<SharedCoroutineScope>)plus:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableDeferredKt")))
@interface SharedCompletableDeferredKt : SharedBase
+ (id<SharedCompletableDeferred>)CompletableDeferredValue:(id _Nullable)value __attribute__((swift_name("CompletableDeferred(value:)")));
+ (id<SharedCompletableDeferred>)CompletableDeferredParent:(id<SharedJob> _Nullable)parent __attribute__((swift_name("CompletableDeferred(parent:)")));
+ (BOOL)completeWith:(id<SharedCompletableDeferred>)receiver result:(id _Nullable)result __attribute__((swift_name("completeWith(_:result:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKt")))
@interface SharedCoroutineExceptionHandlerKt : SharedBase
+ (id<SharedCoroutineExceptionHandler>)CoroutineExceptionHandlerHandler:(void (^)(id<SharedKotlinCoroutineContext>, SharedKotlinThrowable *))handler __attribute__((swift_name("CoroutineExceptionHandler(handler:)")));
+ (void)handleCoroutineExceptionContext:(id<SharedKotlinCoroutineContext>)context exception:(SharedKotlinThrowable *)exception __attribute__((swift_name("handleCoroutineException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunnableKt")))
@interface SharedRunnableKt : SharedBase
+ (id<SharedRunnable>)RunnableBlock:(void (^)(void))block __attribute__((swift_name("Runnable(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupervisorKt")))
@interface SharedSupervisorKt : SharedBase
+ (id<SharedCompletableJob>)SupervisorJobParent:(id<SharedJob> _Nullable)parent __attribute__((swift_name("SupervisorJob(parent:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)supervisorScopeBlock:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("supervisorScope(block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaitKt")))
@interface SharedAwaitKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAllDeferreds:(SharedKotlinArray<id<SharedDeferred>> *)deferreds completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(deferreds:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAllJobs:(SharedKotlinArray<id<SharedJob>> *)jobs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(jobs:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAll:(id)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAll:(id)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayKt")))
@interface SharedDelayKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitCancellationWithCompletionHandler:(void (^)(SharedKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitCancellation(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayTimeMillis:(int64_t)timeMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(timeMillis:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayDuration:(int64_t)duration completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(duration:completionHandler:)")));
+ (id<SharedFlow>)debounce:(id<SharedFlow>)receiver timeoutMillis:(SharedLong *(^)(id _Nullable))timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis:)")));
+ (id<SharedFlow>)debounce:(id<SharedFlow>)receiver timeout:(id (^)(id _Nullable))timeout __attribute__((swift_name("debounce(_:timeout:)")));
+ (id<SharedFlow>)debounce:(id<SharedFlow>)receiver timeoutMillis_:(int64_t)timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis_:)")));
+ (id<SharedFlow>)debounce:(id<SharedFlow>)receiver timeout_:(int64_t)timeout __attribute__((swift_name("debounce(_:timeout_:)")));
+ (id<SharedFlow>)sample:(id<SharedFlow>)receiver periodMillis:(int64_t)periodMillis __attribute__((swift_name("sample(_:periodMillis:)")));
+ (id<SharedFlow>)sample:(id<SharedFlow>)receiver period:(int64_t)period __attribute__((swift_name("sample(_:period:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultithreadedDispatchersKt")))
@interface SharedMultithreadedDispatchersKt : SharedBase
+ (SharedCloseableCoroutineDispatcher *)doNewFixedThreadPoolContextNThreads:(int32_t)nThreads name:(NSString *)name __attribute__((swift_name("doNewFixedThreadPoolContext(nThreads:name:)")));
+ (SharedCloseableCoroutineDispatcher *)doNewSingleThreadContextName:(NSString *)name __attribute__((swift_name("doNewSingleThreadContext(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildersKt")))
@interface SharedBuildersKt : SharedBase
+ (id _Nullable)runBlockingContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("runBlocking(context:block:)")));
+ (id<SharedFlow>)callbackFlowBlock:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("callbackFlow(block:)")));
+ (id<SharedFlow>)channelFlowBlock:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("channelFlow(block:)")));
+ (id<SharedFlow>)emptyFlow __attribute__((swift_name("emptyFlow()")));
+ (id<SharedFlow>)flowBlock:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("flow(block:)")));
+ (id<SharedFlow>)flowOfValue:(id _Nullable)value __attribute__((swift_name("flowOf(value:)")));
+ (id<SharedFlow>)flowOfElements:(SharedKotlinArray<id> *)elements __attribute__((swift_name("flowOf(elements:)")));
+ (id<SharedFlow>)asFlow:(id _Nullable (^)(void))receiver __attribute__((swift_name("asFlow(_:)")));
+ (id<SharedFlow>)asFlow_:(id)receiver __attribute__((swift_name("asFlow(__:)")));
+ (id<SharedFlow>)asFlow__:(id<SharedKotlinIterator>)receiver __attribute__((swift_name("asFlow(___:)")));
+ (id<SharedFlow>)asFlow___:(id<SharedKotlinSequence>)receiver __attribute__((swift_name("asFlow(____:)")));
+ (id<SharedFlow>)asFlow____:(id<SharedKotlinSuspendFunction0>)receiver __attribute__((swift_name("asFlow(_____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableContinuationKt")))
@interface SharedCancellableContinuationKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)suspendCancellableCoroutineBlock:(void (^)(id<SharedCancellableContinuation>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("suspendCancellableCoroutine(block:completionHandler:)")));
+ (void)disposeOnCancellation:(id<SharedCancellableContinuation>)receiver handle:(id<SharedDisposableHandle>)handle __attribute__((swift_name("disposeOnCancellation(_:handle:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Builders_commonKt")))
@interface SharedBuilders_commonKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withContextContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withContext(context:block:completionHandler:)")));
+ (id<SharedDeferred>)async:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context start:(SharedCoroutineStart *)start block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("async(_:context:start:block:)")));
+ (id<SharedJob>)launch:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context start:(SharedCoroutineStart *)start block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("launch(_:context:start:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutKt")))
@interface SharedTimeoutKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeMillis:(int64_t)timeMillis block:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeout:(int64_t)timeout block:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeout:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeMillis:(int64_t)timeMillis block:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeout:(int64_t)timeout block:(id<SharedKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeout:block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YieldKt")))
@interface SharedYieldKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)yieldWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("yield(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextKt")))
@interface SharedCoroutineContextKt : SharedBase
+ (id<SharedKotlinCoroutineContext>)doNewCoroutineContext:(id<SharedKotlinCoroutineContext>)receiver addedContext:(id<SharedKotlinCoroutineContext>)addedContext __attribute__((swift_name("doNewCoroutineContext(_:addedContext:)")));
+ (id<SharedKotlinCoroutineContext>)doNewCoroutineContext:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("doNewCoroutineContext(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface SharedCancellableKt : SharedBase
+ (void)startCoroutineCancellable:(id<SharedKotlinSuspendFunction0>)receiver completion:(id<SharedKotlinContinuation>)completion __attribute__((swift_name("startCoroutineCancellable(_:completion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastChannelKt")))
@interface SharedBroadcastChannelKt : SharedBase
+ (id<SharedBroadcastChannel>)BroadcastChannelCapacity:(int32_t)capacity __attribute__((swift_name("BroadcastChannel(capacity:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelKt")))
@interface SharedChannelKt : SharedBase
+ (id<SharedChannel>)ChannelCapacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow onUndeliveredElement:(void (^ _Nullable)(id _Nullable))onUndeliveredElement __attribute__((swift_name("Channel(capacity:onBufferOverflow:onUndeliveredElement:)")));
+ (id _Nullable)getOrElse:(id _Nullable)receiver onFailure:(id _Nullable (^)(SharedKotlinThrowable * _Nullable))onFailure __attribute__((swift_name("getOrElse(_:onFailure:)")));
+ (id _Nullable)onClosed:(id _Nullable)receiver action:(void (^)(SharedKotlinThrowable * _Nullable))action __attribute__((swift_name("onClosed(_:action:)")));
+ (id _Nullable)onFailure:(id _Nullable)receiver action:(void (^)(SharedKotlinThrowable * _Nullable))action __attribute__((swift_name("onFailure(_:action:)")));
+ (id _Nullable)onSuccess:(id _Nullable)receiver action:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(_:action:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceKt")))
@interface SharedProduceKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitClose:(id<SharedProducerScope>)receiver block:(void (^)(void))block completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitClose(_:block:completionHandler:)")));
+ (id<SharedReceiveChannel>)produce:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(SharedCoroutineStart *)start onCompletion:(void (^ _Nullable)(SharedKotlinThrowable * _Nullable))onCompletion block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:start:onCompletion:block:)")));
+ (id<SharedReceiveChannel>)produce:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastKt")))
@interface SharedBroadcastKt : SharedBase
+ (id<SharedBroadcastChannel>)broadcast:(id<SharedCoroutineScope>)receiver context:(id<SharedKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(SharedCoroutineStart *)start onCompletion:(void (^ _Nullable)(SharedKotlinThrowable * _Nullable))onCompletion block:(id<SharedKotlinSuspendFunction1>)block __attribute__((swift_name("broadcast(_:context:capacity:start:onCompletion:block:)")));
+ (id<SharedBroadcastChannel>)broadcast:(id<SharedReceiveChannel>)receiver capacity:(int32_t)capacity start:(SharedCoroutineStart *)start __attribute__((swift_name("broadcast(_:capacity:start:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Channels_commonKt")))
@interface SharedChannels_commonKt : SharedBase
+ (id _Nullable)consume:(id<SharedBroadcastChannel>)receiver block:(id _Nullable (^)(id<SharedReceiveChannel>))block __attribute__((swift_name("consume(_:block:)")));
+ (id _Nullable)consume:(id<SharedReceiveChannel>)receiver block_:(id _Nullable (^)(id<SharedReceiveChannel>))block __attribute__((swift_name("consume(_:block_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<SharedBroadcastChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<SharedReceiveChannel>)receiver action:(void (^)(id _Nullable))action completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler_:)")));
+ (id<SharedSelectClause1>)onReceiveOrNull:(id<SharedReceiveChannel>)receiver __attribute__((swift_name("onReceiveOrNull(_:)"))) __attribute__((unavailable("Deprecated in the favour of 'onReceiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)receiveOrNull:(id<SharedReceiveChannel>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(_:completionHandler:)"))) __attribute__((unavailable("Deprecated in the favour of 'receiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<SharedReceiveChannel>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface SharedChannelsKt : SharedBase
+ (void)sendBlocking:(id<SharedSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("sendBlocking(_:element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySendBlocking'. Consider handling the result of 'trySendBlocking' explicitly and rethrow exception if necessary")));
+ (id _Nullable)trySendBlocking:(id<SharedSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("trySendBlocking(_:element:)")));
+ (id<SharedFlow>)asFlow:(id<SharedBroadcastChannel>)receiver __attribute__((swift_name("asFlow(_:)"))) __attribute__((deprecated("'BroadcastChannel' is obsolete and all corresponding operators are deprecated in the favour of StateFlow and SharedFlow")));
+ (id<SharedFlow>)consumeAsFlow:(id<SharedReceiveChannel>)receiver __attribute__((swift_name("consumeAsFlow(_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<SharedFlowCollector>)receiver channel:(id<SharedReceiveChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:channel:completionHandler:)")));
+ (id<SharedReceiveChannel>)produceIn:(id<SharedFlow>)receiver scope:(id<SharedCoroutineScope>)scope __attribute__((swift_name("produceIn(_:scope:)")));
+ (id<SharedFlow>)receiveAsFlow:(id<SharedReceiveChannel>)receiver __attribute__((swift_name("receiveAsFlow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergeKt")))
@interface SharedMergeKt : SharedBase
+ (id<SharedFlow>)mergeFlows:(SharedKotlinArray<id<SharedFlow>> *)flows __attribute__((swift_name("merge(flows:)")));
+ (id<SharedFlow>)flatMapConcat:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapConcat(_:transform:)")));
+ (id<SharedFlow>)flatMapLatest:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapLatest(_:transform:)")));
+ (id<SharedFlow>)flatMapMerge:(id<SharedFlow>)receiver concurrency:(int32_t)concurrency transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapMerge(_:concurrency:transform:)")));
+ (id<SharedFlow>)flattenConcat:(id<SharedFlow>)receiver __attribute__((swift_name("flattenConcat(_:)")));
+ (id<SharedFlow>)flattenMerge:(id<SharedFlow>)receiver concurrency:(int32_t)concurrency __attribute__((swift_name("flattenMerge(_:concurrency:)")));
+ (id<SharedFlow>)mapLatest:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("mapLatest(_:transform:)")));
+ (id<SharedFlow>)merge:(id)receiver __attribute__((swift_name("merge(_:)")));
+ (id<SharedFlow>)transformLatest:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("transformLatest(_:transform:)")));
@property (class, readonly) int32_t DEFAULT_CONCURRENCY __attribute__((swift_name("DEFAULT_CONCURRENCY")));
@property (class, readonly) NSString *DEFAULT_CONCURRENCY_PROPERTY_NAME __attribute__((swift_name("DEFAULT_CONCURRENCY_PROPERTY_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LintKt")))
@interface SharedLintKt : SharedBase
+ (id<SharedKotlinCoroutineContext>)coroutineContext:(id<SharedFlowCollector>)receiver __attribute__((swift_name("coroutineContext(_:)"))) __attribute__((unavailable("coroutineContext is resolved into the property of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext() instead or specify the receiver of coroutineContext explicitly")));
+ (BOOL)isActive:(id<SharedFlowCollector>)receiver __attribute__((swift_name("isActive(_:)"))) __attribute__((unavailable("isActive is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().isActive or cancellable() operator instead or specify the receiver of isActive explicitly. Additionally, flow {} builder emissions are cancellable by default.")));
+ (void)cancel:(id<SharedFlowCollector>)receiver cause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)"))) __attribute__((unavailable("cancel() is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().cancel() instead or specify the receiver of cancel() explicitly")));
+ (id<SharedFlow>)cancellable:(id<SharedSharedFlow>)receiver __attribute__((swift_name("cancellable(_:)"))) __attribute__((unavailable("Applying 'cancellable' to a SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<SharedFlow>)catch:(id<SharedSharedFlow>)receiver action:(id<SharedKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator typically has not effect, it can only catch exceptions from 'onSubscribe' operator")));
+ (id<SharedFlow>)conflate:(id<SharedStateFlow>)receiver __attribute__((swift_name("conflate(_:)"))) __attribute__((unavailable("Applying 'conflate' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<SharedSharedFlow>)receiver completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
+ (id<SharedFlow>)distinctUntilChanged:(id<SharedStateFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)"))) __attribute__((unavailable("Applying 'distinctUntilChanged' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));
+ (id<SharedFlow>)flowOn:(id<SharedSharedFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)"))) __attribute__((unavailable("Applying 'flowOn' to SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<SharedFlow>)retry:(id<SharedSharedFlow>)receiver retries:(int64_t)retries predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));
+ (id<SharedFlow>)retryWhen:(id<SharedSharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<SharedSharedFlow>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<SharedSharedFlow>)receiver completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedFlowKt")))
@interface SharedSharedFlowKt : SharedBase
+ (id<SharedMutableSharedFlow>)MutableSharedFlowReplay:(int32_t)replay extraBufferCapacity:(int32_t)extraBufferCapacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("MutableSharedFlow(replay:extraBufferCapacity:onBufferOverflow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowKt")))
@interface SharedStateFlowKt : SharedBase
+ (id<SharedMutableStateFlow>)MutableStateFlowValue:(id _Nullable)value __attribute__((swift_name("MutableStateFlow(value:)")));
+ (id _Nullable)getAndUpdate:(id<SharedMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("getAndUpdate(_:function:)")));
+ (void)update:(id<SharedMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("update(_:function:)")));
+ (id _Nullable)updateAndGet:(id<SharedMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("updateAndGet(_:function:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZipKt")))
@interface SharedZipKt : SharedBase
+ (id<SharedFlow>)combineFlows:(SharedKotlinArray<id<SharedFlow>> *)flows transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform:)")));
+ (id<SharedFlow>)combineFlows:(id)flows transform_:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform_:)")));
+ (id<SharedFlow>)combineFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 flow4:(id<SharedFlow>)flow4 flow5:(id<SharedFlow>)flow5 transform:(id<SharedKotlinSuspendFunction5>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<SharedFlow>)combineFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 flow4:(id<SharedFlow>)flow4 transform:(id<SharedKotlinSuspendFunction4>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:transform:)")));
+ (id<SharedFlow>)combineFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 transform:(id<SharedKotlinSuspendFunction3>)transform __attribute__((swift_name("combine(flow:flow2:flow3:transform:)")));
+ (id<SharedFlow>)combineFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(flow:flow2:transform:)")));
+ (id<SharedFlow>)combineTransformFlows:(SharedKotlinArray<id<SharedFlow>> *)flows transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform:)")));
+ (id<SharedFlow>)combineTransformFlows:(id)flows transform_:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform_:)")));
+ (id<SharedFlow>)combineTransformFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 flow4:(id<SharedFlow>)flow4 flow5:(id<SharedFlow>)flow5 transform:(id<SharedKotlinSuspendFunction6>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<SharedFlow>)combineTransformFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 flow4:(id<SharedFlow>)flow4 transform:(id<SharedKotlinSuspendFunction5>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:transform:)")));
+ (id<SharedFlow>)combineTransformFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 flow3:(id<SharedFlow>)flow3 transform:(id<SharedKotlinSuspendFunction4>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:transform:)")));
+ (id<SharedFlow>)combineTransformFlow:(id<SharedFlow>)flow flow2:(id<SharedFlow>)flow2 transform:(id<SharedKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(flow:flow2:transform:)")));
+ (id<SharedFlow>)combine:(id<SharedFlow>)receiver flow:(id<SharedFlow>)flow transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(_:flow:transform:)")));
+ (id<SharedFlow>)combineTransform:(id<SharedFlow>)receiver flow:(id<SharedFlow>)flow transform:(id<SharedKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(_:flow:transform:)")));
+ (id<SharedFlow>)zip:(id<SharedFlow>)receiver other:(id<SharedFlow>)other transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("zip(_:other:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareKt")))
@interface SharedShareKt : SharedBase
+ (id<SharedSharedFlow>)asSharedFlow:(id<SharedMutableSharedFlow>)receiver __attribute__((swift_name("asSharedFlow(_:)")));
+ (id<SharedStateFlow>)asStateFlow:(id<SharedMutableStateFlow>)receiver __attribute__((swift_name("asStateFlow(_:)")));
+ (id<SharedSharedFlow>)onSubscription:(id<SharedSharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action __attribute__((swift_name("onSubscription(_:action:)")));
+ (id<SharedSharedFlow>)shareIn:(id<SharedFlow>)receiver scope:(id<SharedCoroutineScope>)scope started:(id<SharedSharingStarted>)started replay:(int32_t)replay __attribute__((swift_name("shareIn(_:scope:started:replay:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)stateIn:(id<SharedFlow>)receiver scope:(id<SharedCoroutineScope>)scope completionHandler:(void (^)(id<SharedStateFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stateIn(_:scope:completionHandler:)")));
+ (id<SharedStateFlow>)stateIn:(id<SharedFlow>)receiver scope:(id<SharedCoroutineScope>)scope started:(id<SharedSharingStarted>)started initialValue:(id _Nullable)initialValue __attribute__((swift_name("stateIn(_:scope:started:initialValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextKt")))
@interface SharedContextKt : SharedBase
+ (id<SharedFlow>)buffer:(id<SharedFlow>)receiver capacity:(int32_t)capacity onBufferOverflow:(SharedBufferOverflow *)onBufferOverflow __attribute__((swift_name("buffer(_:capacity:onBufferOverflow:)")));
+ (id<SharedFlow>)cancellable:(id<SharedFlow>)receiver __attribute__((swift_name("cancellable(_:)")));
+ (id<SharedFlow>)conflate:(id<SharedFlow>)receiver __attribute__((swift_name("conflate(_:)")));
+ (id<SharedFlow>)flowOn:(id<SharedFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationKt")))
@interface SharedMigrationKt : SharedBase
+ (id<SharedFlow>)cache:(id<SharedFlow>)receiver __attribute__((swift_name("cache(_:)"))) __attribute__((unavailable("Flow analogue of 'cache()' is 'shareIn' with unlimited replay and 'started = SharingStared.Lazily' argument'")));
+ (id<SharedFlow>)combineLatest:(id<SharedFlow>)receiver other:(id<SharedFlow>)other other2:(id<SharedFlow>)other2 other3:(id<SharedFlow>)other3 other4:(id<SharedFlow>)other4 transform:(id<SharedKotlinSuspendFunction5>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:other4:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<SharedFlow>)combineLatest:(id<SharedFlow>)receiver other:(id<SharedFlow>)other other2:(id<SharedFlow>)other2 other3:(id<SharedFlow>)other3 transform:(id<SharedKotlinSuspendFunction4>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<SharedFlow>)combineLatest:(id<SharedFlow>)receiver other:(id<SharedFlow>)other other2:(id<SharedFlow>)other2 transform:(id<SharedKotlinSuspendFunction3>)transform __attribute__((swift_name("combineLatest(_:other:other2:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<SharedFlow>)combineLatest:(id<SharedFlow>)receiver other:(id<SharedFlow>)other transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("combineLatest(_:other:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<SharedFlow>)compose:(id<SharedFlow>)receiver transformer:(id<SharedFlow> (^)(id<SharedFlow>))transformer __attribute__((swift_name("compose(_:transformer:)"))) __attribute__((unavailable("Flow analogue of 'compose' is 'let'")));
+ (id<SharedFlow>)concatMap:(id<SharedFlow>)receiver mapper:(id<SharedFlow> (^)(id _Nullable))mapper __attribute__((swift_name("concatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue of 'concatMap' is 'flatMapConcat'")));
+ (id<SharedFlow>)concatWith:(id<SharedFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("concatWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { emit(value) }'")));
+ (id<SharedFlow>)concatWith:(id<SharedFlow>)receiver other:(id<SharedFlow>)other __attribute__((swift_name("concatWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { if (it == null) emitAll(other) }'")));
+ (id<SharedFlow>)delayEach:(id<SharedFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayEach(_:timeMillis:)"))) __attribute__((unavailable("Use 'onEach { delay(timeMillis) }'")));
+ (id<SharedFlow>)delayFlow:(id<SharedFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayFlow(_:timeMillis:)"))) __attribute__((unavailable("Use 'onStart { delay(timeMillis) }'")));
+ (id<SharedFlow>)flatMap:(id<SharedFlow>)receiver mapper:(id<SharedKotlinSuspendFunction1>)mapper __attribute__((swift_name("flatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue is 'flatMapConcat'")));
+ (id<SharedFlow>)flatten:(id<SharedFlow>)receiver __attribute__((swift_name("flatten(_:)"))) __attribute__((unavailable("Flow analogue of 'flatten' is 'flattenConcat'")));
+ (void)forEach:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action __attribute__((swift_name("forEach(_:action:)"))) __attribute__((unavailable("Flow analogue of 'forEach' is 'collect'")));
+ (id<SharedFlow>)merge:(id<SharedFlow>)receiver __attribute__((swift_name("merge(_:)"))) __attribute__((unavailable("Flow analogue of 'merge' is 'flattenConcat'")));
+ (id<SharedFlow>)observeOn:(id<SharedFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("observeOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<SharedFlow>)onErrorResume:(id<SharedFlow>)receiver fallback:(id<SharedFlow>)fallback __attribute__((swift_name("onErrorResume(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<SharedFlow>)onErrorResumeNext:(id<SharedFlow>)receiver fallback:(id<SharedFlow>)fallback __attribute__((swift_name("onErrorResumeNext(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<SharedFlow>)onErrorReturn:(id<SharedFlow>)receiver fallback:(id _Nullable)fallback __attribute__((swift_name("onErrorReturn(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emit(fallback) }'")));
+ (id<SharedFlow>)onErrorReturn:(id<SharedFlow>)receiver fallback:(id _Nullable)fallback predicate:(SharedBoolean *(^)(SharedKotlinThrowable *))predicate __attribute__((swift_name("onErrorReturn(_:fallback:predicate:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { e -> if (predicate(e)) emit(fallback) else throw e }'")));
+ (id<SharedFlow>)publish:(id<SharedFlow>)receiver __attribute__((swift_name("publish(_:)"))) __attribute__((unavailable("Flow analogue of 'publish()' is 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<SharedFlow>)publish:(id<SharedFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("publish(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'publish(bufferSize)' is 'buffer' followed by 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<SharedFlow>)publishOn:(id<SharedFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("publishOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<SharedFlow>)replay:(id<SharedFlow>)receiver __attribute__((swift_name("replay(_:)"))) __attribute__((unavailable("Flow analogue of 'replay()' is 'shareIn' with unlimited replay. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<SharedFlow>)replay:(id<SharedFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("replay(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'replay(bufferSize)' is 'shareIn' with the specified replay parameter. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<SharedFlow>)scanFold:(id<SharedFlow>)receiver initial:(id _Nullable)initial operation:(id<SharedKotlinSuspendFunction2>)operation __attribute__((swift_name("scanFold(_:initial:operation:)"))) __attribute__((unavailable("Flow has less verbose 'scan' shortcut")));
+ (id<SharedFlow>)scanReduce:(id<SharedFlow>)receiver operation:(id<SharedKotlinSuspendFunction2>)operation __attribute__((swift_name("scanReduce(_:operation:)"))) __attribute__((unavailable("'scanReduce' was renamed to 'runningReduce' to be consistent with Kotlin standard library")));
+ (id<SharedFlow>)skip:(id<SharedFlow>)receiver count:(int32_t)count __attribute__((swift_name("skip(_:count:)"))) __attribute__((unavailable("Flow analogue of 'skip' is 'drop'")));
+ (id<SharedFlow>)startWith:(id<SharedFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("startWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emit(value) }'")));
+ (id<SharedFlow>)startWith:(id<SharedFlow>)receiver other:(id<SharedFlow>)other __attribute__((swift_name("startWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emitAll(other) }'")));
+ (void)subscribe:(id<SharedFlow>)receiver __attribute__((swift_name("subscribe(_:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<SharedFlow>)receiver onEach:(id<SharedKotlinSuspendFunction1>)onEach __attribute__((swift_name("subscribe(_:onEach:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<SharedFlow>)receiver onEach:(id<SharedKotlinSuspendFunction1>)onEach onError:(id<SharedKotlinSuspendFunction1>)onError __attribute__((swift_name("subscribe(_:onEach:onError:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (id<SharedFlow>)subscribeOn:(id<SharedFlow>)receiver context:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("subscribeOn(_:context:)"))) __attribute__((unavailable("Use 'flowOn' instead")));
+ (id<SharedFlow>)switchMap:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("switchMap(_:transform:)"))) __attribute__((unavailable("Flow analogues of 'switchMap' are 'transformLatest', 'flatMapLatest' and 'mapLatest'")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsKt")))
@interface SharedErrorsKt : SharedBase
+ (id<SharedFlow>)catch:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)")));
+ (id<SharedFlow>)retry:(id<SharedFlow>)receiver retries:(int64_t)retries predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)")));
+ (id<SharedFlow>)retryWhen:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectKt")))
@interface SharedCollectKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collect:(id<SharedFlow>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectIndexed:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction2>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectIndexed(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectLatest:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectLatest(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<SharedFlowCollector>)receiver flow:(id<SharedFlow>)flow completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:flow:completionHandler:)")));
+ (id<SharedJob>)launchIn:(id<SharedFlow>)receiver scope:(id<SharedCoroutineScope>)scope __attribute__((swift_name("launchIn(_:scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountKt")))
@interface SharedCountKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<SharedFlow>)receiver completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:predicate:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistinctKt")))
@interface SharedDistinctKt : SharedBase
+ (id<SharedFlow>)distinctUntilChanged:(id<SharedFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)")));
+ (id<SharedFlow>)distinctUntilChanged:(id<SharedFlow>)receiver areEquivalent:(SharedBoolean *(^)(id _Nullable, id _Nullable))areEquivalent __attribute__((swift_name("distinctUntilChanged(_:areEquivalent:)")));
+ (id<SharedFlow>)distinctUntilChangedBy:(id<SharedFlow>)receiver keySelector:(id _Nullable (^)(id _Nullable))keySelector __attribute__((swift_name("distinctUntilChangedBy(_:keySelector:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitKt")))
@interface SharedLimitKt : SharedBase
+ (id<SharedFlow>)drop:(id<SharedFlow>)receiver count:(int32_t)count __attribute__((swift_name("drop(_:count:)")));
+ (id<SharedFlow>)dropWhile:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("dropWhile(_:predicate:)")));
+ (id<SharedFlow>)take:(id<SharedFlow>)receiver count:(int32_t)count __attribute__((swift_name("take(_:count:)")));
+ (id<SharedFlow>)takeWhile:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("takeWhile(_:predicate:)")));
+ (id<SharedFlow>)transformWhile:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("transformWhile(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformKt")))
@interface SharedTransformKt : SharedBase
+ (id<SharedFlow>)filter:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("filter(_:predicate:)")));
+ (id<SharedFlow>)filterIsInstance:(id<SharedFlow>)receiver __attribute__((swift_name("filterIsInstance(_:)")));
+ (id<SharedFlow>)filterNot:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate __attribute__((swift_name("filterNot(_:predicate:)")));
+ (id<SharedFlow>)filterNotNull:(id<SharedFlow>)receiver __attribute__((swift_name("filterNotNull(_:)")));
+ (id<SharedFlow>)map:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("map(_:transform:)")));
+ (id<SharedFlow>)mapNotNull:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction1>)transform __attribute__((swift_name("mapNotNull(_:transform:)")));
+ (id<SharedFlow>)onEach:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action __attribute__((swift_name("onEach(_:action:)")));
+ (id<SharedFlow>)runningFold:(id<SharedFlow>)receiver initial:(id _Nullable)initial operation:(id<SharedKotlinSuspendFunction2>)operation __attribute__((swift_name("runningFold(_:initial:operation:)")));
+ (id<SharedFlow>)runningReduce:(id<SharedFlow>)receiver operation:(id<SharedKotlinSuspendFunction2>)operation __attribute__((swift_name("runningReduce(_:operation:)")));
+ (id<SharedFlow>)scan:(id<SharedFlow>)receiver initial:(id _Nullable)initial operation:(id<SharedKotlinSuspendFunction2>)operation __attribute__((swift_name("scan(_:initial:operation:)")));
+ (id<SharedFlow>)withIndex:(id<SharedFlow>)receiver __attribute__((swift_name("withIndex(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReduceKt")))
@interface SharedReduceKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<SharedFlow>)receiver predicate:(id<SharedKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fold:(id<SharedFlow>)receiver initial:(id _Nullable)initial operation:(id<SharedKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fold(_:initial:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)last:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("last(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastOrNull:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("lastOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)reduce:(id<SharedFlow>)receiver operation:(id<SharedKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reduce(_:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)single:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("single(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)singleOrNull:(id<SharedFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("singleOrNull(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmittersKt")))
@interface SharedEmittersKt : SharedBase
+ (id<SharedFlow>)onCompletion:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction2>)action __attribute__((swift_name("onCompletion(_:action:)")));
+ (id<SharedFlow>)onEmpty:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action __attribute__((swift_name("onEmpty(_:action:)")));
+ (id<SharedFlow>)onStart:(id<SharedFlow>)receiver action:(id<SharedKotlinSuspendFunction1>)action __attribute__((swift_name("onStart(_:action:)")));
+ (id<SharedFlow>)transform:(id<SharedFlow>)receiver transform:(id<SharedKotlinSuspendFunction2>)transform __attribute__((swift_name("transform(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionKt")))
@interface SharedCollectionKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toCollection:(id<SharedFlow>)receiver destination:(id)destination completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toCollection(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<SharedFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<SharedFlow>)receiver destination:(SharedMutableSet<id> *)destination completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKt")))
@interface SharedSelectKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectBuilder:(void (^)(id<SharedSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("select(builder:completionHandler:)")));
+ (void)onTimeout:(id<SharedSelectBuilder>)receiver timeout:(int64_t)timeout block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeout:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectUnbiasedKt")))
@interface SharedSelectUnbiasedKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectUnbiasedBuilder:(void (^)(id<SharedSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("selectUnbiased(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhileSelectKt")))
@interface SharedWhileSelectKt : SharedBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)whileSelectBuilder:(void (^)(id<SharedSelectBuilder>))builder completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("whileSelect(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SynchronizedKt")))
@interface SharedSynchronizedKt : SharedBase
+ (id _Nullable)synchronizedLock:(SharedAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchedContinuationKt")))
@interface SharedDispatchedContinuationKt : SharedBase
+ (void)resumeCancellableWith:(id<SharedKotlinContinuation>)receiver result:(id _Nullable)result onCancellation:(void (^ _Nullable)(SharedKotlinThrowable *))onCancellation __attribute__((swift_name("resumeCancellableWith(_:result:onCancellation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutexKt")))
@interface SharedMutexKt : SharedBase
+ (id<SharedMutex>)MutexLocked:(BOOL)locked __attribute__((swift_name("Mutex(locked:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withLock:(id<SharedMutex>)receiver owner:(id _Nullable)owner action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withLock(_:owner:action:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemaphoreKt")))
@interface SharedSemaphoreKt : SharedBase
+ (id<SharedSemaphore>)SemaphorePermits:(int32_t)permits acquiredPermits:(int32_t)acquiredPermits __attribute__((swift_name("Semaphore(permits:acquiredPermits:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withPermit:(id<SharedSemaphore>)receiver action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withPermit(_:action:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.LockState")))
@interface SharedAtomicfuSynchronizedObjectLockState : SharedBase
- (instancetype)initWithStatus:(SharedAtomicfuSynchronizedObjectStatus *)status nestedLocks:(int32_t)nestedLocks waiters:(int32_t)waiters ownerThreadId:(void * _Nullable)ownerThreadId mutex:(void * _Nullable)mutex __attribute__((swift_name("init(status:nestedLocks:waiters:ownerThreadId:mutex:)"))) __attribute__((objc_designated_initializer));
@property (readonly) void * _Nullable mutex __attribute__((swift_name("mutex")));
@property (readonly) int32_t nestedLocks __attribute__((swift_name("nestedLocks")));
@property (readonly) void * _Nullable ownerThreadId __attribute__((swift_name("ownerThreadId")));
@property (readonly) SharedAtomicfuSynchronizedObjectStatus *status __attribute__((swift_name("status")));
@property (readonly) int32_t waiters __attribute__((swift_name("waiters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinAtomicReference")))
@interface SharedKotlinAtomicReference<T> : SharedBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSet(expected:new:)")));
- (T _Nullable)compareAndSwapExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSwap(expected:new:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKotlinIntIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface SharedKotlinLongIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface SharedKotlinIntProgressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface SharedKotlinIntRangeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface SharedKotlinLongProgressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface SharedKotlinLongRangeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol SharedKotlinSuspendFunction3 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction5")))
@protocol SharedKotlinSuspendFunction5 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction4")))
@protocol SharedKotlinSuspendFunction4 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol SharedKotlinSuspendFunction6 <SharedKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.Status")))
@interface SharedAtomicfuSynchronizedObjectStatus : SharedKotlinEnum<SharedAtomicfuSynchronizedObjectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAtomicfuSynchronizedObjectStatus *unlocked __attribute__((swift_name("unlocked")));
@property (class, readonly) SharedAtomicfuSynchronizedObjectStatus *thin __attribute__((swift_name("thin")));
@property (class, readonly) SharedAtomicfuSynchronizedObjectStatus *fat __attribute__((swift_name("fat")));
+ (SharedKotlinArray<SharedAtomicfuSynchronizedObjectStatus *> *)values __attribute__((swift_name("values()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

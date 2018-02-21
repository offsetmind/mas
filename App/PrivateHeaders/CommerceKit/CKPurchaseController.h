//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>
#import <StoreFoundation/SSPurchase.h>

@class SSPurchaseResponse;
@class NSArray, NSMutableArray, NSNumber;

NS_ASSUME_NONNULL_BEGIN

typedef void (^SSPurchaseCompletion)(SSPurchase * _Nullable purchase, BOOL completed, NSError * _Nullable error, SSPurchaseResponse * _Nullable response);

@interface CKPurchaseController : CKServiceInterface
{
    NSMutableArray *_purchases;
    NSMutableArray *_rejectedPurchases;
    NSArray *_adoptionEligibleItems;
    NSNumber *_adoptionServerStatus;
    NSNumber *_adoptionErrorNumber;
//    CDUnknownBlockType _dialogHandler;
}

+ (void)setNeedsSilentMachineAuthorization:(BOOL)arg1;
+ (CKPurchaseController * _Nonnull)sharedPurchaseController;
//@property(copy) CDUnknownBlockType dialogHandler; // @synthesize dialogHandler=_dialogHandler;
//- (void).cxx_destruct;
//- (BOOL)adoptionCompletedForBundleID:(id)arg1;
//- (void)_performVPPReceiptRenewal;
//- (void)checkServerDownloadQueue;
//- (id)purchaseInProgressForProductID:(id)arg1;
//- (id)purchasesInProgress;
//- (void)cancelPurchaseWithProductID:(id)arg1;
//- (void)resumeDownloadForPurchasedProductID:(id)arg1;
//- (void)startPurchases:(NSArray<SSPurchase *> *)purchases shouldStartDownloads:(BOOL)downloads eventHandler:(CDUnknownBlockType)arg3;
//- (void)startPurchases:(NSArray<SSPurchase *> *)purchases withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performPurchase:(SSPurchase * _Nonnull)purchase withOptions:(unsigned long long)arg2 completionHandler:(SSPurchaseCompletion _Nullable)completionHandler;

@end

NS_ASSUME_NONNULL_END

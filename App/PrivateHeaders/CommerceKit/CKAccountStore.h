//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class CKDemoAccount, CKStoreAccount, CKStoreClient, ISStoreAccount, NSArray, NSString;

@interface CKAccountStore : CKServiceInterface <ISStoreURLOperationDelegate>
{
//    CKStoreClient *_storeClient;
}

+ (CKAccountStore *)sharedAccountStore;
+ (id)accountStoreForStoreClient:(id)arg1;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
//- (void).cxx_destruct;
//- (void)getTouchIDStateForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
//- (void)setTouchIDStateForAccount:(id)arg1 state:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
//- (void)updatePasswordSettings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
//- (void)getPasswordSettingsWithCompletionBlock:(CDUnknownBlockType)arg1;
//- (void)getEligibilityForService:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)eligibilityForService:(long long)arg1;
- (void)viewAccount;
//- (void)signInWithSuggestedAppleID:(id)arg1 allowChangeOfAppleID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)signIn;
- (void)addAccount:(id)arg1;
@property(readonly) NSArray *accounts;
- (id)accountWithAppleID:(id)arg1;
- (id)accountForDSID:(id)arg1;
@property(readonly) ISStoreAccount *primaryAccount;
- (void)removePrimaryAccountObserver:(id)arg1;
//- (id)addPrimaryAccountObserverWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithStoreClient:(id)arg1;
- (void)removeAccountObserver:(id)arg1;
- (id)addAccountObserver:(id)arg1;
//- (void)signOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)signOut;
- (id)storeAccountForAppleID:(id)arg1;
- (id)storeAccountForDSID:(id)arg1;
@property(readonly) BOOL primaryAccountIsPresentAndSignedIn;
@property(readonly) CKStoreAccount *primaryStoreAccount;
@property(readonly) CKDemoAccount *demoAccount;
@property(readonly) BOOL isDemoModeEnabled;
@property(readonly) NSArray *knownAccounts;
- (id)_initWithStoreClient:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSNumber, NSString, NSTimer;

@interface ISStoreAccount : NSObject <NSSecureCoding>
{
    NSTimer *_tokenInvalidTimer;
    BOOL _isSignedIn;
    BOOL _isManagedStudent;
    BOOL _primary;
    long long _touchIDState;
    NSNumber *_dsID;
    NSString *_identifier;
    long long _kind;
    NSString *_creditString;
    NSString *_storeFront;
    NSString *_password;
    NSString *_token;
    long long _URLBagType;
    NSDate *_tokenIssuedDate;
    NSTimer *_tokenExpirationTimer;
}

+ (id)migratePersistedStoreDictionary:(id)arg1;
+ (id)dsidFromPlistValue:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(retain) NSTimer *tokenExpirationTimer; // @synthesize tokenExpirationTimer=_tokenExpirationTimer;
@property(retain) NSDate *tokenIssuedDate; // @synthesize tokenIssuedDate=_tokenIssuedDate;
@property long long URLBagType; // @synthesize URLBagType=_URLBagType;
@property(copy) NSString *token; // @synthesize token=_token;
@property(copy) NSString *password; // @synthesize password=_password;
@property BOOL isManagedStudent; // @synthesize isManagedStudent=_isManagedStudent;
@property BOOL isSignedIn; // @synthesize isSignedIn=_isSignedIn;
@property(retain) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(copy) NSString *creditString; // @synthesize creditString=_creditString;
@property long long kind; // @synthesize kind=_kind;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSNumber *dsID; // @synthesize dsID=_dsID;
//- (void).cxx_destruct;
- (long long)getTouchIDState;
@property long long touchIDState; // @synthesize touchIDState=_touchIDState;
- (void)resetTouchIDState;
- (void)mergeValuesFromAuthenticationResponse:(id)arg1;
- (BOOL)hasValidStrongToken;
- (double)strongTokenValidForSecond;
- (id)description;
@property(readonly, getter=isAuthenticated) BOOL authenticated;
- (id)persistedStoreDictionary;
- (id)initWithPersistedStoreDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


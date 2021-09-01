#import "QNUtils.h"
#import <Foundation/Foundation.h>

@protocol QNLocalStorage <NSObject>
@required
- (void)storeObject:(id)object;

- (void)storeObject:(id)object
             forKey:(NSString *)key;

- (id)loadObjectOfClass:(Class)class;
- (void)loadObjectWithCompletion:(void (^)(id))completion ofClass:(Class)class;

- (id)loadObjectForKey:(NSString *)key ofClass:(Class)class;
- (void)loadObjectForKey:(NSString *)key
          withCompletion:(void(^)(id))completion ofClass:(Class)class;

- (void)removeObject;
- (void)removeObjectForKey:(NSString *)key;

@optional
- (void)setVersion:(NSString *)version;
- (NSString *)version;
- (void)storeDouble:(double)value forKey:(NSString *)key;
- (double)loadDoubleForKey:(NSString *)key;

- (void)setString:(NSString *)value forKey:(NSString *)key;
- (NSString *)loadStringForKey:(NSString *)key;

- (void)clear;

@end

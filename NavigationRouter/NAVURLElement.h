//
//  NAVURLElement.h
//  Created by Ty Cobb on 7/20/14.
//

@import Foundation;

@interface NAVURLElement : NSObject
@property (copy, nonatomic, readonly) NSString *key;
- (instancetype)initWithKey:(NSString *)key;
@end

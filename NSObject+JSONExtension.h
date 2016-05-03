//
//
//

#import <Foundation/Foundation.h>

@interface NSObject (JSONExtension)

- (void)setDict:(NSDictionary *)dict;
+ (instancetype )objectWithDict:(NSDictionary *)dict;

// 告诉数组中都是什么类型的模型对象 子类中需要重写  return @"数组中元素的类型字符串";
- (NSDictionary *)arrayObjectClass ;

@end

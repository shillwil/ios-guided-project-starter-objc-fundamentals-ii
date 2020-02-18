//
//  LSITipController.h
//  Tips
//
//  Created by Alex Shillingford on 2/18/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

// Forward declare a class (prefer to importing in .h
@class LSITip;

NS_ASSUME_NONNULL_BEGIN

@interface LSITipController : NSObject

// tips
@property (nonatomic, readonly) NSArray<LSITip *> *tips;

// createTip

- (void)createTipWithName:(NSString *)name
                    total:(double)total
               splitCount:(int)splitCount
            tipPercentage:(double)tipPercentage;

@end

NS_ASSUME_NONNULL_END

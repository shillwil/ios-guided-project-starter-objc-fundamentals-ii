//
//  LSITip.m
//  Tips
//
//  Created by Alex Shillingford on 2/18/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "LSITip.h"

@implementation LSITip

- (instancetype)initWithName:(NSString *)name
                       total:(double)total
                  splitCount:(int)splitCount
               tipPercentage:(double)tipPercentage {
    self = [super init];
    if (self) {
        _name = [name copy]; // prevents issues with NSMutableString
        _total = total;
        _splitCount = splitCount;
        _tipPercentage = tipPercentage;
    }
    return self;
}


@end

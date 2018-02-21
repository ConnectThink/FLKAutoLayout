#import <UIKit/UIKit.h>

/// A NSLayoutGuide for iOS >= 7

@interface FLKAutoLayoutGuide : NSObject

/// The actual layout guide
@property (nonatomic, readonly, strong) NSObject *layoutGuide;

/// The view that guide represents
@property (nonatomic, readonly, strong) UIView *containerView;

/// Init
- (instancetype)initWithLayoutGuide:(NSObject *)layoutGuide inContainerView:(UIView *)containerView;

@end


@interface UIViewController (FLKAutoLayout)

/// Creates and strongly retains a topLayoutGuide for the view controller
- (FLKAutoLayoutGuide *)flk_topLayoutGuide API_DEPRECATED("No longer supported. Use flk_safeAreaLayoutGuide", ios(2.0, 10.0));

/// Creates and strongly retains a bottomLayoutGuide for the view controller
- (FLKAutoLayoutGuide *)flk_bottomLayoutGuide API_DEPRECATED("No longer supported. Use flk_safeAreaLayoutGuide", ios(2.0, 10.0));

/// Creates and strongly retains the safeAreaLayoutGuide.topAnchor for the view controller
- (FLKAutoLayoutGuide *)flk_safeAreaTopLayoutGuide API_AVAILABLE(ios(11.0));

/// Creates and strongly retains the safeAreaLayoutGuide.bottomAnchor for the view controller
- (FLKAutoLayoutGuide *)flk_safeAreaBottomLayoutGuide API_AVAILABLE(ios(11.0));

/// Creates and strongly retains the safeAreaLayoutGuide.leadingAnchor for the view controller
- (FLKAutoLayoutGuide *)flk_safeAreaLeadingLayoutGuide API_AVAILABLE(ios(11.0));

/// Creates and strongly retains the safeAreaLayoutGuide.trailingAnchor for the view controller
- (FLKAutoLayoutGuide *)flk_safeAreaTrailingLayoutGuide  API_AVAILABLE(ios(11.0));

@end

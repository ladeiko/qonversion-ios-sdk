//
//  QNAutomationsViewController.h
//  Qonversion
//
//  Created by Surik Sarkisyan on 23.09.2020.
//  Copyright © 2020 Qonversion Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QNAutomationsService, QNActionsHandler, QNAutomationsFlowAssembly, QNAutomation, QNAutomationsViewController;

@protocol QNAutomationsViewControllerDelegate <NSObject>

- (void)automationsViewController:(QNAutomationsViewController *)viewController didFinishAutomation:(QNAutomation *)automation;

@end

NS_ASSUME_NONNULL_BEGIN

@interface QNAutomationsViewController : UIViewController

@property (nonatomic, weak) id<QNAutomationsViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *automationID;
@property (nonatomic, strong) QNActionsHandler *actionsHandler;
@property (nonatomic, strong) QNAutomationsService *automationsService;
@property (nonatomic, strong) QNAutomationsFlowAssembly *flowAssembly;

@end

NS_ASSUME_NONNULL_END


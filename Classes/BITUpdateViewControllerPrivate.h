/*
 * Author: Andreas Linde <mail@andreaslinde.de>
 *         Peter Steinberger
 *
 * Copyright (c) 2012-2013 HockeyApp, Bit Stadium GmbH.
 * Copyright (c) 2011 Andreas Linde, Peter Steinberger.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import "HockeySDK.h"

#if HOCKEYSDK_FEATURE_UPDATES

#import "BITStoreButton.h"

/**
 *  Button states
 */
typedef NS_ENUM(NSUInteger, AppStoreButtonState) {
	/**
	 *  Offline
	 */
	AppStoreButtonStateOffline,
	/**
	 *  Check
	 */
	AppStoreButtonStateCheck,
	/**
	 *  Searching
	 */
	AppStoreButtonStateSearching,
	/**
	 *  Update
	 */
	AppStoreButtonStateUpdate,
	/**
	 *  Installing
	 */
	AppStoreButtonStateInstalling
};


@class BITUpdateManager;

@protocol PSStoreButtonDelegate;

@interface BITUpdateViewController() <BITStoreButtonDelegate> {
}

@property (nonatomic, weak) BITUpdateManager *updateManager;

@property (nonatomic, readwrite) BOOL mandatoryUpdate;

@property (nonatomic, assign) AppStoreButtonState appStoreButtonState;

@end

#endif /* HOCKEYSDK_FEATURE_UPDATES */

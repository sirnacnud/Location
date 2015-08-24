//
//  LocationTrackingLogger.h
//
//
//  Created by Duncan Cunningham on 8/24/15.
//  Copyright (c) 2015 Duncan Cunningham. All rights reserved.
//

#import <CocoaLumberjack/CocoaLumberjack.h>

#define LOCATION_TRACKING_LOG_CONTEXT 90

#define LTLogError(frmt, ...)   LOG_MAYBE(NO,                LOG_LEVEL_DEF, DDLogFlagError,   LOCATION_TRACKING_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
#define LTLogWarn(frmt, ...)    LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagWarning, LOCATION_TRACKING_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
#define LTLogInfo(frmt, ...)    LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagInfo,    LOCATION_TRACKING_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
#define LTLogDebug(frmt, ...)   LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagDebug,   LOCATION_TRACKING_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
#define LTLogVerbose(frmt, ...) LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagVerbose, LOCATION_TRACKING_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)

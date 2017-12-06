//
//  MFSConstant+ANCS.h
//  Misfit-BLE-iOS-SDK
//
//  Created by Hien Nguyen on 9/20/16.
//  Copyright © 2016 Misfit Wearables. All rights reserved.
//

#ifndef MFSConstant_ANCS_h
#define MFSConstant_ANCS_h

typedef NS_ENUM(uint8_t, MFSFilterRuleApplication)
{
    MFSFilterApplicationAny                 = 1,
    /*!
     *  From
     */
    MFSFilterApplicationPhone               = 2,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationMessages            = 3,
    /*!
     *  From
     */
    MFSFilterApplicationFaceTime            = 4,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationSkype               = 5,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationFacebookMessenger   = 6,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationWeChat              = 7,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationWhatsApp            = 8,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationViber               = 9,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationLine                = 10,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationGmail               = 11,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationFossilQ             = 12,
    /*!
     *  From
     */
    MFSFilterApplicationAppleMail           = 13,
    /*!
     *  From
     */
    MFSFilterApplicationHangout             = 14,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationAppleCalendar       = 15,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationInstagram           = 16,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationTwitter             = 17,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationOutlook             = 18,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationTomSkype            = 19,
    /*!
     *  From & Keyword
     */
    MFSFilterApplicationInbox               = 20,
    
    /*!
     *  No condition.
     */
    MFSFilterApplicationFacebook            = 21,
    MFSFilterApplicationSlack               = 22,
    MFSFilterApplicationEspn                = 23,
    MFSFilterApplicationUber                = 24,
    MFSFilterApplicationTumblr              = 25,
    MFSFilterApplicationPinterest           = 26,
    MFSFilterApplicationAirbnb              = 27,
    MFSFilterApplicationSwarm               = 28,
    MFSFilterApplicationFoursquare          = 29,
    MFSFilterApplicationHipChat             = 30,
    MFSFilterApplicationLync                = 31,
    MFSFilterApplicationSpotify             = 32,
    MFSFilterApplicationLinkedIn            = 33,
    MFSFilterApplicationSnapchat            = 34,
    MFSFilterApplicationPandora             = 35,
    MFSFilterApplicationShazam              = 36,
    MFSFilterApplicationFlickr              = 37,
    MFSFilterApplicationGooglePlus          = 38,
    MFSFilterApplicationSinaWeibo           = 39,
    MFSFilterApplicationKakaoTalk           = 40,
    MFSFilterApplicationBadoo               = 41,
    MFSFilterApplicationViadeo              = 42,
    MFSFilterApplicationKik                 = 43,
    MFSFilterApplicationTinder              = 44,
    MFSFilterApplicationLyft                = 45,
    MFSFilterApplicationGrubhub             = 46,
    MFSFilterApplicationPostmates           = 47,
    MFSFilterApplicationSeamless            = 48,
    MFSFilterApplicationMint                = 49,
    MFSFilterApplicationPaypal              = 50,
    MFSFilterApplicationVenmo               = 51,
    MFSFilterApplicationSquare              = 52,
    MFSFilterApplicationAmericanAirlines    = 53,
    MFSFilterApplicationDelta               = 54,
    MFSFilterApplicationBankOfAmerica       = 55,
    MFSFilterApplicationCitibank            = 56,
    MFSFilterApplicationCapitalOne          = 57,
    MFSFilterApplicationUnitedAirlines      = 58
};

typedef NS_ENUM(uint8_t, MFSLedColorId)
{
    MFSLedColorIdBlue = 0x00,
    MFSLedColorIdYellow = 0x01,
    MFSLedColorIdOrange = 0x02,
    MFSLedColorIdPurple = 0x03,
    MFSLedColorIdGreen = 0x04,
    MFSLedColorIdPink = 0x05
};

typedef NS_ENUM(uint8_t, MFSLedControlSequenceId)
{
    MFSLedControlSequenceIdShort = 0x00,
    MFSLedControlSequenceIdLong = 0x01
};

typedef NS_ENUM(uint8_t, MFSVibeControlSequenceId)
{
    MFSVibeControlSequenceIdShort = 0x00,
    MFSVibeControlSequenceIdLong = 0x01
};

static const uint8_t kLongBlinkPattern      = 0x0F;
static const uint8_t kLongVibePattern       = 0x0F;
static const uint8_t kMaxSupportedRule      = 42;
static const uint8_t kMaxSupportedLedBink   = 10;
static const uint8_t kMaxSupportedVibeNumb  = 10;


#endif /* MFSConstant_ANCS_h */

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TUCall.h"

@class IMAVChat;

@interface TUFaceTimeAudioCall : TUCall
{
    IMAVChat *_chat;
}

- (id)description;
- (_Bool)isTTY;
- (_Bool)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (_Bool)needsManualInCallSounds;
- (_Bool)managesAudioInterruptions;
- (id)audioMode;
- (id)audioCategory;
- (int)status;
- (id)isoCountryCode;
- (double)callDuration;
- (_Bool)isEqual:(id)arg1;
- (int)callIdentifier;
- (id)chat;
- (_Bool)isAlerting;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (id)remoteParticipant;
- (void)leaveConference;
- (void)joinConference;
- (_Bool)isConferenced;
- (id)bundleIDForHostingApplication;
- (double)startTime;
- (_Bool)isBlocked;
- (_Bool)isOutgoing;
- (int)service;
- (void)disconnect;
- (_Bool)unhold;
- (_Bool)hold;
- (void)resume;
- (void)answer;
- (void)dealloc;
- (id)initWithChat:(id)arg1;

@end

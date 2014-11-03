//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPCardSectionSliceViewController.h"

#import "NSTextViewDelegate.h"

@class NSString, PRSDescriptionCardSection;

@interface SPDescriptionSliceViewController : SPCardSectionSliceViewController <NSTextViewDelegate>
{
    BOOL _descriptionExpanded;
}

@property BOOL descriptionExpanded; // @synthesize descriptionExpanded=_descriptionExpanded;
- (id)descriptionTextViewMinHeightConstraint;
- (id)descriptionTextView;
- (id)titleTextField;
- (id)descriptionSliceView;
- (void)syncAttributes;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSDescriptionCardSection *descriptionCardSection;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithDescriptionCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

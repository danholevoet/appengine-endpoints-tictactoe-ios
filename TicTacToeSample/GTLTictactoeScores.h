/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2012 Google Inc.
 */

//
//  GTLTictactoeScores.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   tictactoe/v1
// Classes:
//   GTLTictactoeScores (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLTictactoeScore;

// ----------------------------------------------------------------------------
//
//   GTLTictactoeScores
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLTictactoeScores : GTLCollectionObject
@property (retain) NSArray *items;  // of GTLTictactoeScore
@end
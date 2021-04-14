//
//  Lottie.h
//  Pods
//
//  Created by brandon_withrow on 1/27/17.
//
//  Dream Big.

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

#ifndef Lottie_h
#define Lottie_h

//! Project version number for Lottie.
FOUNDATION_EXPORT double LottieVersionNumber;

//! Project version string for Lottie.
FOUNDATION_EXPORT const unsigned char LottieVersionString[];

#include <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#import "LOTAnimationTransitionController.h"
#import "LOTAnimatedSwitch.h"
#import "LOTAnimatedControl.h"
#endif

#if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#import "LOTCacheProvider.h"
#endif

#import "LOTAnimationView.h"
#import "LOTAnimationCache.h"
#import "LOTComposition.h"
#import "LOTBlockCallback.h"
#import "LOTInterpolatorCallback.h"
#import "LOTValueCallback.h"
#import "LOTValueDelegate.h"

#import "LOTShapeRectangle.h"
#import "LOTShapeRepeater.h"
#import "UIColor.h"
#import "LOTAsset.h"
#import "LOTHelpers.h"
#import "LOTRadialGradientLayer.h"
#import "LOTShapeCircle.h"
#import "LOTFillRenderer.h"
#import "LOTStrokeRenderer.h"
#import "LOTSizeInterpolator.h"
#import "LOTValueInterpolator.h"
#import "LOTShapeGroup.h"
#import "LOTCompositionContainer.h"
#import "LOTShapePath.h"
#import "LOTPointInterpolator.h"
#import "LOTShapeStroke.h"
#import "LOTNumberInterpolator.h"
#import "LOTAnimatorNode.h"
#import "LOTMaskContainer.h"
#import "LOTRepeaterRenderer.h"
#import "LOTTransformInterpolator.h"
#import "LOTArrayInterpolator.h"
#import "CALayer+Compat.h"
#import "LOTShapeTransform.h"
#import "LOTRoundedRectAnimator.h"
#import "NSValue+Compat.h"
#import "LOTTrimPathNode.h"
#import "LOTAnimationView_Internal.h"
#import "LOTColorInterpolator.h"
#import "LOTModels.h"
#import "LOTRenderGroup.h"
#import "LOTShapeStar.h"
#import "LOTPathInterpolator.h"
#import "LOTGradientFillRender.h"
#import "UIBezierPath.h"
#import "LOTPolystarAnimator.h"
#import "LOTShapeTrimPath.h"
#import "LOTPathAnimator.h"
#import "LOTCircleAnimator.h"
#import "LOTPolygonAnimator.h"

#endif /* Lottie_h */

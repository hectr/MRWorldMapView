// MRWorldMapView.h
//
// Copyright 2015 Héctor Marqués
//
// This software contains code derived from YBMapView (Yuba)
// Copyright 2011 Sergey Lenkov
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#import <UIKit/UIKit.h>

@class MRWorldMapView;


/**
 Protocol for `MRWorldMapView`'s delegate.
 */
@protocol MRWorldMapViewDelegate <NSObject>
@optional

/**
 Asks the delegate if the specified country should be highlighted.
 
 @param map The world map object that is making this request.
 @param code The code of the country being highlighted.
 @return `YES` if the country should be highlighted or `NO` if it should not.
 */
- (BOOL)worldMap:(MRWorldMapView *)map shouldHighlightCountry:(NSString *)code;

/**
 Notifies that the country with the given `code` has been highlighted.
 
 @param map The world map object informing the delegate about the new highlighted country.
 @param code The country ISO code.
 */
- (void)worldMap:(MRWorldMapView *)map didHighlightCountry:(NSString *)code;

/**
 Asks the delegate if the specified country should be selected.
 
 @param map The world map object that is making this request.
 @param code The code of the country being selected.
 @return `YES` if the country should be selected or `NO` if it should not.
 */
- (BOOL)worldMap:(MRWorldMapView *)map shouldSelectCountry:(NSString *)code;

/**
 Notifies that the country with the given `code` has been selected.

 @param map The world map object informing the delegate about the new selected country.
 @param code The country ISO code.
 */
- (void)worldMap:(MRWorldMapView *)map didSelectCountry:(NSString *)code;

/**
 Should return the color to be used as fill color for the country with the given `code`.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as fill color for the country.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map colorForCountry:(NSString *)code;

/**
 Should return the color to be used as border color for the country with the given `code`.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as border color for the country.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map borderColorForCountry:(NSString *)code;

/**
 Should return the width of the border for the country with the given `code`.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The width of the border for the country.
 */
- (CGFloat)worldMap:(MRWorldMapView *)map borderWidthForCountry:(NSString *)code;

/**
 Should return the color to be used as fill color for the country with the given `code` when selected.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as fill color for the country when selected.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map selectedColorForCountry:(NSString *)code;

/**
 Should return the color to be used as border color for the country with the given `code` when selected.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as border color for the country when selected.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map selectedBorderColorForCountry:(NSString *)code;

/**
 Should return the width of the border for the country with the given `code` when selected.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The width of the border for the country when selected.
 */
- (CGFloat)worldMap:(MRWorldMapView *)map selectedBorderWidthForCountry:(NSString *)code;

/**
 Should return the color to be used as fill color for the country with the given `code` when highlighted.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as fill color for the country when highlighted.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map highlightedColorForCountry:(NSString *)code;

/**
 Should return the color to be used as border color for the country with the given `code` when highlighted.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as border color for the country when highlighted.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map highlightedBorderColorForCountry:(NSString *)code;

/**
 Should return the width of the border for the country with the given `code` when highlighted.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The width of the border for the country when highlighted.
 */
- (CGFloat)worldMap:(MRWorldMapView *)map highlightedBorderWidthForCountry:(NSString *)code;

/**
 Should return the color to be used as fill color for the country with the given `code` when disabled.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as fill color for the country when disabled.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map disabledColorForCountry:(NSString *)code;

/**
 Should return the color to be used as border color for the country with the given `code` when disabled.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The `UIColor` to be used as border color for the country when disabled.
 */
- (UIColor *)worldMap:(MRWorldMapView *)map disabledBorderColorForCountry:(NSString *)code;

/**
 Should return the width of the border for the country with the given `code` when disabled.
 
 @param map The world map object that is making this request.
 @param code The country ISO code.
 @return The width of the border for the country when disabled.
 */
- (CGFloat)worldMap:(MRWorldMapView *)map disabledBorderWidthForCountry:(NSString *)code;

@end


IB_DESIGNABLE

/**
 `UIView` subclass that displays a world map with selectable countries.
 */
@interface MRWorldMapView : UIView {
    CGPoint _highlightPoint;
    CGPoint _selectPoint;
}

/**
 The dictionary with the world map data.
 */
@property (nonatomic, copy) NSDictionary *map;

/**
 The distance that the map is inset from the edges of the view.
 
 You can use this value to adjust map's aspect ratio.
 */
@property (nonatomic, assign) UIEdgeInsets mapInset;

/**
 Color used for creating the background gradient.
 */
@property (nonatomic, strong) IBInspectable UIColor *backgroundGradientColor;

/**
 Inset for the background gradient.
 */
@property (nonatomic, assign) IBInspectable UIEdgeInsets backgroundGradientInset;

/**
 Default country fill color.
 */
@property (nonatomic, strong) IBInspectable UIColor *countryColor;

/**
 Country border color.
 */
@property (nonatomic, strong) IBInspectable UIColor *countryBorderColor;

/**
 Country border width.
 */
@property (nonatomic, assign) IBInspectable CGFloat countryBorderWidth;

/**
 Whether country border line join style is rounded or not.
 */
@property (nonatomic, assign) IBInspectable BOOL countryBorderRounded;

/**
 Default highlighted country fill color.
 */
@property (nonatomic, strong) IBInspectable UIColor *highlightedColor;

/**
 Highlighted country border color.
 */
@property (nonatomic, strong) IBInspectable UIColor *highlightedBorderColor;

/**
 Highlighted country border width.
 */
@property (nonatomic, assign) IBInspectable CGFloat highlightedBorderWidth;

/**
 Whether highlighted country border line join style is rounded or not.
 */
@property (nonatomic, assign) IBInspectable BOOL highlightedBorderRounded;

/**
 Default selected country fill color.
 */
@property (nonatomic, strong) IBInspectable UIColor *selectedColor;

/**
 Selected country border color.
 */
@property (nonatomic, strong) IBInspectable UIColor *selectedBorderColor;

/**
 Selected country border width.
 */
@property (nonatomic, assign) IBInspectable CGFloat selectedBorderWidth;

/**
 Whether selected country border line join style is rounded or not.
 */
@property (nonatomic, assign) IBInspectable BOOL selectedBorderRounded;

/**
 Selected country border shadow color.
 */
@property (nonatomic, strong) IBInspectable UIColor *selectedShadowColor;

/**
 Selected country border shadow offset.
*/
@property (nonatomic, assign) IBInspectable CGSize selectedShadowOffset;

/**
 Selected country border shadow blur.
 */
@property (nonatomic, assign) IBInspectable CGFloat selectedShadowBlur;

/**
 Default disabled country fill color.
 */
@property (nonatomic, strong) IBInspectable UIColor *disabledColor;

/**
 Disabled country border color.
 */
@property (nonatomic, strong) IBInspectable UIColor *disabledBorderColor;

/**
 Disabled country border width.
 */
@property (nonatomic, assign) IBInspectable CGFloat disabledBorderWidth;

/**
 Whether disabled country border line join style is rounded or not.
 */
@property (nonatomic, assign) IBInspectable BOOL disabledBorderRounded;

/**
 Currently highlighted country code.
 */
@property (nonatomic, strong) IBInspectable NSString *highlightedCountry;

/**
 Currently selected country code.
 */
@property (nonatomic, strong) IBInspectable NSString *selectedCountry;

/**
 All countries.
 
 @return A set with the codes of all the countries contained in the map (including disabled and hidden ones).
 */
- (NSSet *)allCountries;

/**
 Disabled countries.
 
 Countries in this set will not be selected or highlighted.
 */
@property (nonatomic, copy) NSSet *disabledCountries;

/**
 Set of countries that will not be displayed on the map.
 */
@property (nonatomic, copy) NSSet *hiddenCountries;

/**
 Delegate that will be notified when the selected or highlighted countries change.
 */
@property (nonatomic, weak) IBOutlet id <MRWorldMapViewDelegate> delegate;

/**
 Loads the map from the given **GeoJSON** `NSDictionary` or `NSArray` object.
 
 `Polygon` and `MultiPolygon` objects will be treated as countries, any other *geometry object* will be ignored.
 
 @param geoJSON A **GeoJSON** feature collection.
 @param errorPtr The error object containing the reason the map could not be loaded.
 @return `YES` if the map has been loaded; otherwise `NO`.
 */
- (BOOL)loadGeoJSONMap:(id)geoJSON withError:(NSError **)errorPtr;

/**
 Returns the country that contains the given point.
 
 @param point The point that you want to check.
 @return The code of the country that contains the point.
 */
- (NSString *)countryAtPoint:(CGPoint)point;

/**
 Returns the rect of the bounding box of the given counrty.
 
 @param country The code of the country whose bounding box you want to retrieve.
 @return The rect of the bounding box of the country.
 */
- (CGRect)boundingBoxForCountry:(NSString *)country;

@end

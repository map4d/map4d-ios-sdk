//
//  MFMapViewDelegate.h
//  mapes
//
//  Created by tantv on 9/19/18.
//

#ifndef MFMapViewDelegate_h
#define MFMapViewDelegate_h
#import <CoreLocation/CoreLocation.h>

@class MFMapView;
@class MFMarker;
@class MFCameraPosition;
@class MFObject;
@class MFPolyline;
@class MFPolygon;

@protocol MFMapViewDelegate<NSObject>
@optional
- (void)mapview: (MFMapView*)  mapView didTapMarker: (MFMarker*) marker;
- (void)mapview: (MFMapView*)  mapView didTapPolyline: (MFPolyline*) polyline;
- (void)mapview: (MFMapView*)  mapView didTapPolygon: (MFPolygon*) polygon;
- (void)mapView: (MFMapView*)  mapView willMove: (BOOL) gesture;
- (void)mapView: (MFMapView*)  mapView movingCameraPosition: (MFCameraPosition*) position;
- (void)mapView: (MFMapView*)  mapView didChangeCameraPosition:(MFCameraPosition*) position;
- (void)mapView: (MFMapView*)  mapView idleAtCameraPosition: (MFCameraPosition *) position;
- (void)mapView: (MFMapView*)  mapView didTapAtCoordinate: (CLLocationCoordinate2D) coordinate;
- (void)mapView: (MFMapView*)  mapView onModeChange: (bool) is3dMode;
- (void)mapView: (MFMapView*)  mapView didTapObject: (MFObject*) object;
- (void)mapView: (MFMapView*)  mapView didTapMyLocation: (CLLocationCoordinate2D) location;

@end

#endif /* MFMapViewDelegate_h */

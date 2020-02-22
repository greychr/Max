/*
 *  Copyright (C) 2005 - 2007 Stephen F. Booth <me@sbooth.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#import <Cocoa/Cocoa.h>

#import "RipperMethods.h"
#import "RipperTaskMethods.h"

@interface Ripper : NSObject <RipperMethods>
{
	id <RipperTaskMethods>	_delegate;
	
	NSArray					*_sectors;
	NSString				*_deviceName;
	BOOL					_logActivity;
}

- (id)						initWithSectors:(NSArray *)sectors deviceName:(NSString *)deviceName;

- (NSString *)				deviceName;

- (BOOL)					logActivity;
- (void)					setLogActivity:(BOOL)logActivity;

@end

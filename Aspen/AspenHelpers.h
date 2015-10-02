//    The MIT License (MIT)
//
//    Copyright (c) 2015 Justin Williams
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy
//    of this software and associated documentation files (the "Software"), to deal
//    in the Software without restriction, including without limitation the rights
//    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the Software is
//    furnished to do so, subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in
//    all copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//    THE SOFTWARE.

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

#define AspenVerbose(format, ...) AspenMaybe(DefaultLogLevelVerbose, format, ##__VA_ARGS__)
#define AspenInfo(format, ...) AspenMaybe(DefaultLogLevelInfo, format, ##__VA_ARGS__)
#define AspenWarn(format, ...) AspenMaybe(DefaultLogLevelWarning, format, ##__VA_ARGS__)
#define AspenError(format, ...) AspenMaybe(DefaultLogLevelError, format, ##__VA_ARGS__)

// Do not use AspenMaybe directly; use one of the other macros below
#define AspenMaybe(level, format, ...) do { if ([Aspen willLog:level]) { [Aspen logWithLevel:level message:[NSString stringWithFormat:format, ##__VA_ARGS__]]; } } while (0)

NS_ASSUME_NONNULL_END

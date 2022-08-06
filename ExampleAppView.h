//
//  main.h
//  example_osx_opengl3
//
//  Created by Alepacho (https://github.com/Alepacho) on 06.08.2022.
//  Copyright © 2022 ImGui. All rights reserved.
//

#ifndef main_h
#define main_h

#import <Cocoa/Cocoa.h>
#import <OpenGL/OpenGL.h>
#import <OpenGL/gl3.h>

#include "imgui.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "imgui/backends/imgui_impl_osx.h"

@interface ExampleAppView : NSOpenGLView
{
    NSTimer*    animationTimer;
    
    GLuint shaderProgram;
    GLuint vertexArrayObject;
    GLuint vertexBuffer;

    GLint positionUniform;
    GLint colourAttribute;
    GLint positionAttribute;
}

- (void)prepareOpenGL;
- (void)initialize;
- (void)updateAndDrawDemoView;
- (void)clearGLContext;

- (void)reshape;
- (void)drawRect:(NSRect)bounds;
- (void)animationTimerFired:(NSTimer*)timer;
- (void)dealloc;

@end

#endif /* main_h */

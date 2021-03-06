#pragma once

// vertex buffer object
extern PFNGLGENBUFFERSARBPROC glGenBuffersARB;
extern PFNGLBINDBUFFERARBPROC glBindBufferARB;
extern PFNGLBUFFERDATAARBPROC glBufferDataARB;
extern PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB;

// multi-texturing
extern PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;

// GLSL
extern PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
extern PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
extern PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
extern PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
extern PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
extern PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
extern PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
extern PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
extern PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
extern PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
extern PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocation;
extern PFNGLUNIFORM4FARBPROC glUniform4fARB;
extern PFNGLUNIFORM3FARBPROC glUniform3fARB;
extern PFNGLUNIFORM1IARBPROC glUniform1iARB;
extern PFNGLUNIFORM1IVARBPROC glUniform1ivARB;
extern PFNGLUNIFORM1FVARBPROC glUniform1fvARB;
extern PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;
extern PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;

// instancing
extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;

// shadow mapping
extern PFNGLGENFRAMEBUFFERSEXTPROC glGenFramebuffersEXT;
extern PFNGLBINDFRAMEBUFFEREXTPROC glBindFramebufferEXT;
extern PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glFramebufferTexture2DEXT;
extern PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
extern PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glCheckFramebufferStatusEXT;
extern PFNGLDELETEFRAMEBUFFERSEXTPROC glDeleteFramebuffersEXT;
extern PFNGLTEXIMAGE3DPROC glTexImage3D;

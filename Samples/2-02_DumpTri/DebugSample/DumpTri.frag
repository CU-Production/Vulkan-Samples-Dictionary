#version 400
#extension GL_ARB_separate_shader_objects : enable
#extension GL_ARB_shading_language_420pack : enable

layout (location = 0) in vec3 inColor;
layout (location = 0) out vec4 outColor;

void main() {
    outColor = vec4(inColor, 1.0);
}
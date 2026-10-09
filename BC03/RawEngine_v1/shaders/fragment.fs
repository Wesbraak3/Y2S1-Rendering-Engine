#version 330 core
out vec4 FragColor;
in vec3 fPos;

uniform vec4 paintColor;

void main()
{
   FragColor = vec4(paintColor.x, paintColor.y, paintColor.z, 1);
}
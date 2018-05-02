#version 330 core

in vec4 vertexOCS;
in vec3 normalOCS;
in vec4 vertexColor;
in vec2 vertexTexCoords;

out vec4 FragColor;

uniform int tex1Loaded;
uniform int tex2Loaded;
uniform sampler2D tex1Texture;
uniform sampler2D tex2Texture;
uniform vec4 lightPos;
uniform vec3 lightCol;

void main()
{
    if (tex1Loaded == 1)
      FragColor = texture2D(tex1Texture, vertexTexCoords);
    else if (tex2Loaded == 1)
      FragColor = texture2D(tex2Texture, vertexTexCoords);
    else
      FragColor = vertexColor;
}

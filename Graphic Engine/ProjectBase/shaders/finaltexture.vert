in vec3 vertex;
in vec2 uv;

out varying vec2 f_uv;

void main()
{
	f_uv = uv;
    gl_Position = vec4(vertex, 1);
}
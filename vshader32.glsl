attribute  vec4 vPosition;
attribute  vec4 vColor;
varying vec4 color;
uniform vec4 myColor;
uniform float control = 0.0;

void main() 
{
  gl_Position = vPosition;
  if(control == 0.0){
  color = vColor;
  } else {
  color = myColor;
  }
 
} 
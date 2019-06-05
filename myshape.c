

/* Change this line to point to your mtexture file.  One only. */
#define MYTEXTUREFILE "box.png"


GLuint object;


void GenerateShape()
  {
  object = glGenLists(1);

  glNewList( object, GL_COMPILE );



  /* Assuming you are using QUADS, if not change me */
  /* Yep I did change it*/
   glBegin(GL_TRIANGLES);

   /* Top Half */
   /* TODO: All the glTexCoord2f's need to be fixed! */

   glTexCoord2f(0,0);        glVertex3f(0,2,0);
   glTexCoord2f(0, .5);      glVertex3f(.75,0,.75);
   glTexCoord2f(0.125,.5);   glVertex3f(1,0,0);

   glTexCoord2f(.125,0);     glVertex3f(0,2,0);
   glTexCoord2f(.125, .5);   glVertex3f(.75,0,.75);
   glTexCoord2f(.250, .5);   glVertex3f(0,0,1);

   glTexCoord2f(.250,0);     glVertex3f(0,2,0);
   glTexCoord2f(.250, .5);   glVertex3f(-.75,0,.75);
   glTexCoord2f(.375, .5);   glVertex3f(0,0,1);

   glTexCoord2f(.375,0);     glVertex3f(0,2,0);
   glTexCoord2f(.375, .5);   glVertex3f(-.75,0,.75);
   glTexCoord2f(.5, .5);     glVertex3f(-1,0,0);

   glTexCoord2f(.5,.5);      glVertex3f(0,2,0);
   glTexCoord2f(.5, 0);      glVertex3f(-1,0,0);
   glTexCoord2f(.625, 0);    glVertex3f(-.75,0,-.75);
   
   glTexCoord2f(.625,.5);    glVertex3f(0,2,0);
   glTexCoord2f(.625, 0);    glVertex3f(-.75,0,-.75);
   glTexCoord2f(.75, 0);     glVertex3f(0,0,-1);
   
   glTexCoord2f(.75,.5);     glVertex3f(0,2,0);
   glTexCoord2f(.75, 0);     glVertex3f(0,0,-1);
   glTexCoord2f(.875, 0);    glVertex3f(.75,0,-.75);
   
   glTexCoord2f(.875,.5);    glVertex3f(0,2,0);
   glTexCoord2f(.875, 0);    glVertex3f(.75,0,-.75);
   glTexCoord2f(1, 0);       glVertex3f(1,0,0);
   

   /* Bottom Half */
   glTexCoord2f(0,.5);       glVertex3f(0,-2,0);
   glTexCoord2f(0, 1);       glVertex3f(1,0,0);
   glTexCoord2f(.125,1);     glVertex3f(.75,0,.75);
   
   glTexCoord2f(.125,.5);    glVertex3f(0,-2,0);
   glTexCoord2f(.125, 1);    glVertex3f(.75,0,.75);
   glTexCoord2f(.250, 1);    glVertex3f(0,0,1);
   
   glTexCoord2f(.250,.5);    glVertex3f(0,-2,0);
   glTexCoord2f(.250, 1);    glVertex3f(0,0,1);
   glTexCoord2f(.375, 1);    glVertex3f(-.75,0,.75);
   
   glTexCoord2f(.375,.5);    glVertex3f(0,-2,0);
   glTexCoord2f(.375, 1);    glVertex3f(-.75,0,.75);
   glTexCoord2f(.5, 1);      glVertex3f(-1,0,0);
   
   glTexCoord2f(.5,.5);      glVertex3f(0,-2,0);
   glTexCoord2f(.5, 1);      glVertex3f(-1,0,0);
   glTexCoord2f(.625, 1);    glVertex3f(-.75,0,-.75);
   
   glTexCoord2f(.625,.5);    glVertex3f(0,-2,0);
   glTexCoord2f(.625, 1);    glVertex3f(-.75,0,-.75);
   glTexCoord2f(.75, 1);     glVertex3f(0,0,-1);
   
   glTexCoord2f(.75,.5);     glVertex3f(0,-2,0);
   glTexCoord2f(.75, 1);     glVertex3f(0,0,-1);
   glTexCoord2f(.875, 1);    glVertex3f(.75,0,-.75);
   
   glTexCoord2f(.875,.5);    glVertex3f(0,-2,0);
   glTexCoord2f(.875, 1);    glVertex3f(.75,0,-.75);
   glTexCoord2f(1, 1);       glVertex3f(1,0,0);
   
 
  /* Leave these here! */
  glEnd( );
  glEndList( );
  }

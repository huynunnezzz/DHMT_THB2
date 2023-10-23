//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//#include <stdlib.h>
//
//GLubyte rasters [60] = {
//	
//	0x6b,0x18,0xe2,0x4c,0x60,
//	0x97,0xbd,0x02,0x5e,0x60,
//	0xb4,0xa5,0x02,0x52,0x60,
//	0xd4,0xa5,0x02,0x52,0x60,
//	0x94,0xa5,0x02,0x52,0x60,
//	0x94,0xa5,0x03,0xd2,0xf0,
//	0x94,0xa5,0x03,0xd2,0xf0,
//	0x94,0xa5,0x02,0x52,0x90,
//	0x94,0xa5,0x02,0x52,0x90,
//	0x94,0xa5,0x02,0x52,0x90,
//	0x94,0xbd,0x02,0x52,0x90,
//	0x64,0x98,0xe2,0x52,0x90
//	
//	
//	
//};
//	
//void init(void)
//{
//	glPixelStorei (GL_UNPACK_ALIGNMENT,1);
//	glClearColor (0.0, 0.0, 0.0, 0.0);
//}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
//	glRasterPos2i(35,35);
//	glBitmap(40, 12, 0.0, 0.0, 11.0, 0.0, rasters);
//	glFlush();
//}
//
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(0,w,0,h,-1.0,1.0);
//	glMatrixMode(GL_MODELVIEW);
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//	switch(key){
//		case 27:
//		exit(0);
//	}
//}
//
//int main(int argc,char** argv)
//{
//	glutInit(&argc,argv);
//	glutInitDisplayMode(GLUT_SINGLE || GLUT_RGB);
//	glutInitWindowSize(100,100);
//	glutInitWindowPosition(100,100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutReshapeFunc(reshape);
//	glutKeyboardFunc(keyboard);
//	glutDisplayFunc(display);
//	glutMainLoop();
//	return 0;
//}
//
//
//
//


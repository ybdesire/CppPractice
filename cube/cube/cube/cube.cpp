// cube.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Square
{
private:
	char color;
public:
	void set_color(char ch_color)
	{
		color = ch_color;
	}
	char get_color()
	{
		return color;
	}
};

class Row
{
public:
	void set_row_color(char ch_color_left, char ch_color_center, char ch_color_right)
	{
		left_square.set_color(ch_color_left);
		center_square.set_color(ch_color_center);
		right_square.set_color(ch_color_right);
	}
public:
	Square left_square;
	Square center_square;
	Square right_square;
};

class Face
{
public:
	void set_face_color(char ch_color)
	{
		top_row.set_row_color(ch_color, ch_color, ch_color);
		center_row.set_row_color(ch_color, ch_color, ch_color);
		bottom_row.set_row_color(ch_color, ch_color, ch_color);
	}
	void print_face_color()
	{
		cout<<	center_row.center_square.get_color()<<	
			bottom_row.left_square.get_color()<<
			center_row.left_square.get_color()<<
			top_row.left_square.get_color()<<
			top_row.center_square.get_color()<<
			top_row.right_square.get_color()<<
			center_row.right_square.get_color()<<
			bottom_row.right_square.get_color()<<
			bottom_row.center_square.get_color()
			<<endl;
	}
	void set_left_colomn_color(char top_color, char center_color, char bottom_color)
	{
		top_row.left_square.set_color(top_color);
		center_row.left_square.set_color(center_color);
		bottom_row.left_square.set_color(bottom_color);
	}
	void set_center_colomn_color(char top_color, char center_color, char bottom_color)
	{
		top_row.center_square.set_color(top_color);
		center_row.center_square.set_color(center_color);
		bottom_row.center_square.set_color(bottom_color);
	}
	void set_right_colomn_color(char top_color, char center_color, char bottom_color)
	{
		top_row.right_square.set_color(top_color);
		center_row.right_square.set_color(center_color);
		bottom_row.right_square.set_color(bottom_color);
	}
public:
	Row top_row;
	Row center_row;
	Row bottom_row;
};

class Cube
{
public:
	Cube()
	{
		top_face.set_face_color('W');//白色向上
		front_face.set_face_color('R');//红色向自己
		left_face.set_face_color('G');//绿色在左边
		bottom_face.set_face_color('Y');
		right_face.set_face_color('B');
		back_face.set_face_color('O');
	}
	void print_cube()
	{
		top_face.print_face_color();
		bottom_face.print_face_color();
		front_face.print_face_color();
		back_face.print_face_color();
		left_face.print_face_color();
		right_face.print_face_color();
	}
	void rotate_face(char cmd)
	{
		switch(cmd)
		{
		case 'U':
			top_face_rotate_90();
			break;
		case 'D':
			bottom_face_rotate_90();
			break;
		case 'F':
			front_face_rotate_90();
			break;
		case 'B':
			back_face_rotate_90();
			break;
		case 'L':
			left_face_rotate_90();
			break;
		case 'R':
			right_face_rotate_90();
			break;
		default:
			break;
		}
	}
public:
	void top_face_rotate_90()
	{
		Row temp_front_row = front_face.top_row;
		front_face.top_row = right_face.top_row;
		right_face.top_row = back_face.top_row;
		back_face.top_row = left_face.top_row;
		left_face.top_row = temp_front_row;
	}
	void bottom_face_rotate_90()
	{
		Row temp_front_row = front_face.bottom_row;
		front_face.bottom_row = left_face.bottom_row;
		left_face.bottom_row = back_face.bottom_row;
		back_face.bottom_row = right_face.bottom_row;
		right_face.bottom_row = temp_front_row;
	}
	void front_face_rotate_90()
	{
		Row temp_bottom_row = top_face.bottom_row;

		top_face.bottom_row.left_square = left_face.bottom_row.right_square;
		top_face.bottom_row.center_square = left_face.center_row.right_square;
		top_face.bottom_row.right_square = left_face.top_row.right_square;

		left_face.set_right_colomn_color(bottom_face.top_row.left_square.get_color(), bottom_face.top_row.center_square.get_color(), bottom_face.top_row.right_square.get_color());

		bottom_face.top_row.left_square.set_color(right_face.bottom_row.left_square.get_color());
		bottom_face.top_row.center_square.set_color(right_face.center_row.left_square.get_color());
		bottom_face.top_row.right_square.set_color(right_face.top_row.left_square.get_color());

		right_face.set_left_colomn_color(temp_bottom_row.left_square.get_color(), temp_bottom_row.center_square.get_color(), temp_bottom_row.right_square.get_color());
	}
	void back_face_rotate_90()
	{
		Row temp_top_row = top_face.top_row;
		top_face.top_row.left_square.set_color(right_face.top_row.right_square.get_color());
		top_face.top_row.center_square.set_color(right_face.center_row.right_square.get_color());
		top_face.top_row.right_square.set_color(right_face.bottom_row.right_square.get_color());
		
		right_face.set_right_colomn_color(bottom_face.bottom_row.right_square.get_color(), bottom_face.bottom_row.center_square.get_color(), bottom_face.bottom_row.left_square.get_color());
		bottom_face.bottom_row.left_square.set_color(left_face.top_row.left_square.get_color());
		bottom_face.bottom_row.center_square.set_color(left_face.center_row.left_square.get_color());
		bottom_face.bottom_row.right_square.set_color(left_face.bottom_row.left_square.get_color());
		left_face.set_left_colomn_color(temp_top_row.right_square.get_color(), temp_top_row.center_square.get_color(), temp_top_row.left_square.get_color());
	}
	void left_face_rotate_90()
	{
		char temp_top_face_left_column_top_color = top_face.top_row.left_square.get_color();
		char temp_top_face_left_column_center_color = top_face.center_row.left_square.get_color();
		char temp_top_face_left_column_bottom_color = top_face.bottom_row.left_square.get_color();	
		
		top_face.set_left_colomn_color(back_face.bottom_row.right_square.get_color(), back_face.center_row.right_square.get_color(), back_face.top_row.right_square.get_color());
		back_face.set_right_colomn_color(bottom_face.bottom_row.left_square.get_color(), bottom_face.center_row.left_square.get_color(), bottom_face.top_row.left_square.get_color());
		bottom_face.set_left_colomn_color(front_face.top_row.left_square.get_color(), front_face.center_row.left_square.get_color(), front_face.bottom_row.left_square.get_color());

		front_face.set_left_colomn_color(temp_top_face_left_column_top_color, temp_top_face_left_column_center_color, temp_top_face_left_column_bottom_color);
	}
	void right_face_rotate_90()
	{
		char temp_top_face_right_column_top_color = top_face.top_row.right_square.get_color();
		char temp_top_face_right_column_center_color = top_face.center_row.right_square.get_color();
		char temp_top_face_right_column_bottom_color = top_face.bottom_row.right_square.get_color();	

		top_face.set_right_colomn_color(front_face.top_row.right_square.get_color(), front_face.center_row.right_square.get_color(), front_face.bottom_row.right_square.get_color());
		front_face.set_right_colomn_color(bottom_face.top_row.right_square.get_color(), bottom_face.center_row.right_square.get_color(), bottom_face.bottom_row.right_square.get_color());
		bottom_face.set_right_colomn_color(back_face.bottom_row.left_square.get_color(), back_face.center_row.left_square.get_color(), back_face.top_row.left_square.get_color());

		back_face.set_right_colomn_color(temp_top_face_right_column_bottom_color, temp_top_face_right_column_center_color, temp_top_face_right_column_top_color);
	}
public:
	Face back_face;
	Face left_face;
	Face top_face;
	Face right_face;
	Face front_face;
	Face bottom_face;
};
int _tmain(int argc, _TCHAR* argv[])
{
	Cube b;
	b.rotate_face('L');
	b.rotate_face('R');
	b.print_cube();
	return 0;
}


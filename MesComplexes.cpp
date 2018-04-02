#include "MesComplexes.h"
#include <math.h>

// Getters
float MesComplexes:: re()
{
	return re_;
}

float MesComplexes:: im()
{
	return im_;
}

float MesComplexes:: module() 
{
	return module_;
}

float MesComplexes:: argument() 
{
	return argument_;
}

// Default constructor
MesComplexes::MesComplexes() {
	re_ = 0;
	im_ = 0;	
	module_ =0;
	argument_ = -2;
}

//Parameterized constructor
MesComplexes::MesComplexes(float re, float im)
{
	re_ = re; 
	im_ = im; 
	module_ = Module (re_ , im_);
	argument_ = Argument (re_ , im_);
}


// Copy constructor
MesComplexes::MesComplexes(const MesComplexes& model) 
{
	re_ = model.re_; 
	im_ = model.im_; 
	module_ = model.module_;	
	argument_ = model.argument_;
}


// Methods
/* The function Module calcultes the module of a complex number according its real part and its imaginary part.
The float returned by this function is used to define the attribute Module_ of a complex number.*/
float MesComplexes::Module (float re , float im)
{
		float module = sqrt (re*re + im* im);
	return module;
}	


/* The function Argument calcultes the argument of a complex number according its real part and its imaginary part.
The float returned by this function is used to define the attribute Arguement_ of a complex number.
If the complex number is setted to zero, that is to say real=0 and imaginary=0, this complex havent't got argument. 
In this case the function return -2 as default value.
This value is calculated in radian.
*/

float MesComplexes::Argument (float re , float im){
	
	float argument;
	// 1) If the real part is null and the imaginary part is positive, the argument is setted equal to 90° or π/2.
	if (re ==0 && im > 0) 
	{
	float argument = M_PI / 2;
	}
	// 2) If the real part is null and the imaginary part is negetive, the argument is setted equal to -90° or -π/2.
	else if (re ==0  && im < 0) 
	{
	float argument = - M_PI / 2;
	}
	// 3) If the real part is positive and the imaginary part is null, the argument is setted equal to zero.
	else if (re > 0 && im==0) 
	{
	float argument = 0;
	}
	// 4) If the real part is negative and the imaginary part is null, the argument is setted equal to 180° or π.
	else if (re < 0 && im==0) 
	{
	float argument = M_PI;
	}
	// 5) If the real part is negative, the argument is setted equal to 180 + tan^-1(Im/re) or π+tan^-1(Im/re).
	else if (re < 0 )
	{
	float argument = M_PI + atan(im/re);
	}
	// 6) If the real part is positive, the argument is setted equal to tan^-1(Im/re) or tan^-1(Im/re).
	else if (re > 0 ) 
	{
	float argument = atan(im/re);
	}
	// 7) If the complex number is null, the argument is setted to the default value -2.
	else 
	{
	float argument = -2;
	}
	return argument;
}


/*The function Sum allows to add two complexs numbers. The first argument corresponds to the real part to add and the second
one to the imaginary part */
MesComplexes MesComplexes::Sum (float Re_x , float Im_x)
{
	float Sre = re_ + Re_x;
	float Sim = im_ + Im_x;
	//Module and argument of the complex numbern are recalculated after the addition.
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

//This function Sum allows to add two complex numbers, by passing as argument a complex number. Sum returns a complex number.
MesComplexes MesComplexes::Sum(MesComplexes C){
	float Sre = re_ + C.re();
	float Sim = im_ + C.im();
	//Module and argument of the complex number are recalculated after the addition.
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

/*The function Subtract allows to subtract two complex numbers. The first argument corresponds to the real part to subtract and the second
one to the imaginary part. Subtract returns the result as a complex number.*/
MesComplexes MesComplexes::Subtract (float Re_x , float Im_x)
{
	float Sre = re_ - Re_x;
	float Sim = im_ - Im_x;
	//Module and argument of the complex number are recalculated after the subtraction.
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}

/*This function Subtract allows to subtract two complex numbers, by passing as argument a complex number. Subtrract returns a complex number.*/
MesComplexes MesComplexes::Subtract(MesComplexes C){
	float Sre = re_ - C.re();
	float Sim = im_ - C.im();
	//Module and argument of the complex number are recalculated after the subtraction.
	module_ = Module (Sre , Sim);
	argument_ = Argument (Sre , Sim);
	return MesComplexes(Sre, Sim);
}







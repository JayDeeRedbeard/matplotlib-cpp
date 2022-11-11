#define _USE_MATH_DEFINES
#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int main() 
{
	// plot(y) - the x-coordinates are implicitly set to [0,1,...,n)
	//plt::plot({1,2,3,4});


	// Prepare data for parametric plot.
	int n = 2; // number of data points
//	vector<double> x(n),y(n);
//	for(int i=0; i<n; ++i) {
//		double t = 2*M_PI*i/n;
//		x.at(i) = 16*sin(t)*sin(t)*sin(t);
//		y.at(i) = 13*cos(t) - 5*cos(2*t) - 2*cos(3*t) - cos(4*t);
//	}

	// plot() takes an arbitrary number of (x,y,format)-triples. 
	// x must be iterable (that is, anything providing begin(x) and end(x)),
	// y must either be callable (providing operator() const) or iterable.
	double alpha = 0.1f;
	vector<double> x(n),y(n);
	x[0] = 0;
	x[1] = 20;
	y[0] = 0;
	y[1] = 20;
//	plt::plot(x, y, "r-", x, [](double d) { return 12.5+abs(sin(d)); }, "k-");
//	plt::plot(x, y, "r", alpha);
//	plt::xlim(0, 20);
//	plt::ylim(0, 20);
//	//plt::set_aspect(0.5);
////	plt::set_aspect_equal();
//
//
//
//	// show plots
//	plt::show();

	plt::figure_size(1200, 500);
	plt::title("Bias Distribution compared to HSPICE.");
	//					+ "\nOP(" + std::to_string(op_[0]) + "V/" + std::to_string(op_[1]) + "°C)");
	plt::rcparams({{"lines.markersize", "10"}});
	plt::plot(x,y, "ko-");
	plt::scatter(x, y,1.0, {{"color","r"}, {"label", "FinFET-SLS"}});
	y[1] = 40;
	plt::scatter(x, y,1.0, {{"color","g"}, {"label", "Fin-SLS"}});
	//	plt::xlim(-400.0f, 400.0f);
	//	plt::xlim(-400.0f, 400.0f);
	//	plt::ylim(-0.3, static_cast<double>(op_[0]) + 0.3);
	plt::legend();
		plt::show();
}

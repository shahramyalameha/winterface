// 2014-2019, ETH Zurich, Integrated Systems Laboratory
// Authors: Christian Stieger

#include "ll_types.h"

namespace ll__ {
	// atomic properties
	const std::map<std::string,double>
	atom::mass({
		{"H",1.00794},{"He",4.002602},
		{"Li",6.941},{"Be",9.012182},
		{"B",10.811},{"C",12.0107},{"N",14.00674},{"O",15.9994},{"F",18.9984032},{"Ne",20.1797},
		{"Na",22.989770},{"Mg",24.3050},
		{"Al",26.981538},{"Si",28.0855},{"P",30.973761},{"S",32.066},{"Cl",35.4527},{"Ar",39.948},
		{"K",39.0983},{"Ca",40.078},
		{"Sc",44.955910},{"Ti",47.867},{"V",50.9415},{"Cr",51.9961},{"Mn",54.938049},
		{"Fe",55.845},{"Co",58.933200},{"Ni",58.6934},{"Cu",63.546},{"Zn",65.39},
		{"Ga",69.723},{"Ge",72.61},{"As",74.92160},{"Se",78.96},{"Br",79.904},{"Kr",83.80},
		{"Rb",85.4678},{"Sr",87.62},
		{"Y",88.90585},{"Zr",91.224},{"Nb",92.90638},{"Mo",95.94},{"Tc",98.0},
		{"Ru",101.07},{"Rh",102.90550},{"Pd",106.42},{"Ag",107.8682},{"Cd",112.411},
		{"In",114.818},{"Sn",118.710},{"Sb",121.760},{"Te",127.60},{"I",126.90447},{"Xe",131.29},
		{"Cs",132.90545},{"Ba",137.327},
		{"Hf",178.49},{"Ta",180.9479},{"W",183.84},{"Re",186.207},{"Os",190.23},
		{"Ir",192.217},{"Pt",195.078},{"Au",196.96655},{"Hg",200.59},
		{"Tl",204.3833},{"Pb",207.2},{"Bi",208.98038},{"Po",209.0},{"At",210.0},{"Rn",222.0},
		{"Fr",223.0},{"Ra",226.0},
		{"Rf",261.0},{"Db",262.0},{"Sg",263.0},{"Bh",262.0},
		{"Hs",265.0},{"Mt",266.0},{"Ds",269.0},{"Rg",272.0},{"Cn",277.0},
		{"Uut",284.0},{"Fl",289.0},{"Uup",288.0},{"Lv",293.0},{"Uus",294.0},{"Uuo",294.0},
		
		{"La",138.9055},{"Ce",140.116},{"Pr",140.90765},{"Nd",144.24},{"Pm",145},{"Sm",150.36},
		{"Eu",151.964},{"Gd",157.25},{"Tb",158.92534},{"Dy",162.50},{"Ho",164.93032},
		{"Er",167.26},{"Tm",168.93421},{"Yb",173.04},{"Lu",174.967},
		
		{"Ac",227.0},{"Th",232.0381},{"Pa",231.03588},{"U",238.0289},{"Np",237.0},{"Pu",244.0},
		{"Am",243.0},{"Cm",247.0},{"Bk",247.0},{"Cf",251.0},{"Es",252.0},{"Fm",257.0},
		{"Md",258.0},{"No",259.0},{"Lr",262.0}
	});
}
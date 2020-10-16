# kappaTNG

[![MIT license](https://img.shields.io/badge/License-MIT-blue.svg)](https://lbesson.mit-license.org/)
[![arXiv](https://img.shields.io/badge/arXiv-2010.xxxxx-b31b1b.svg)](https://arxiv.org/abs/2010.xxxxx)


## Overview

The **kappaTNG** suite is composed of mock weak lensing maps created
from [IllustrisTNG](https://www.tng-project.org/) simulations
with ray-tracing technique.
Additional information is available at [Columbia Lensing](http://columbialensing.org/).


## Codes
We provide sample codes for loading the binary file in C (`load_map.c`)
and Python (`load_map.ipynb`) and a fitting formula to the angular power spectrum (`fitting_formula.ipynb`).


## Data sets
In this repository, only a single map (`sample_kappa.dat`) is provided.
The sample data set (100 realizations with 3 redshifts: 0.5, 1.0, 1.5, for both **kappaTNG** and **kappTNG-Dark**)
is available at [Columbia Lensing](http://columbialensing.org/).
If you need the full data set (10,000 realizations with 40 redshifts) or
other quantities (deflection angles, shear, rotation),
please send your request to Ken Osato (ken.osato@iap.fr).


## Data format
The convergence maps are defined in regular grids.
The specifications of the maps are as follows:

* number of grids: 1024x1024
* angular size on a side: 5 deg
* resolution: 0.29 arcmin/pixel
* The source redshift of the sample map is z = 1.023.


## Attribution
We kindly ask those who use the kappaTNG suite to cite the paper:
[Osato, Liu, and Haiman (2020)](https://arxiv.org/abs/2010.xxxxx).
The bibtex entry of the paper is: [TBA].


## Copyright
Copyright 2020 Ken Osato, Jia Liu, and Zoltán Haiman.

This software is made available under MIT License. Please see `LICENSE` file for details.

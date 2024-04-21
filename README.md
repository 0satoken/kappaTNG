# kappaTNG

[![MIT license](https://img.shields.io/badge/License-MIT-blue.svg)](https://lbesson.mit-license.org/)
[![arXiv](https://img.shields.io/badge/arXiv-2010.09731-b31b1b.svg)](https://arxiv.org/abs/2010.09731)

## Overview

The **kappaTNG** suite is composed of mock weak lensing maps created
from [IllustrisTNG](https://www.tng-project.org/) simulations
with ray-tracing technique.
Additional information is available at [Columbia Lensing](http://columbialensing.org/).

## Updates in 2024 April

We released the full kappaTNG datasets hosted by the file server at Kavli IPMU.
The file format is updated to HDF5 instead of binary format.
The old codes are kept in the directory [`binary`](binary).
We recommend you use the new format.

## Codes

We provide jupyter notebook to load lensing maps ([`load_map.ipynb`](load_map.ipynb)) and to use the fitting formula of the angular power spectrum ratio ([`fitting_formula.ipynb`](fitting_formula.ipynb)).

## Data sets

The full datasets (deflection angles, convergence, shear, rotation at 40 source redshifts)
can be downloaded from [this site](http://idark.ipmu.jp/~jia.liu/data/kappaTNG/).
We provide the download script here.

## Format of maps

The convergence maps are defined in regular grids.

* number of grids: $1024 \times 1024$
* angular size on a side: 5 deg
* resolution: 0.29 arcmin/pixel
* The source redshift of the sample map is $z_s = 1.023$ (S23 in Table 2 of the paper).

There are 40 source redshifts and exact values are found in [`zs.dat`](zs.dat).

## Attribution

We kindly ask those who use the kappaTNG suite to cite the paper:
[Osato, Liu, and Haiman (2021)](https://ui.adsabs.harvard.edu/abs/2021MNRAS.502.5593O).
The bibtex entry of the paper is:
```
@ARTICLE{kappaTNG,
       author = {{Osato}, Ken and {Liu}, Jia and {Haiman}, Zolt{\'a}n},
        title = "{{\ensuremath{\kappa}}TNG: effect of baryonic processes on weak lensing with IllustrisTNG simulations}",
      journal = {\mnras},
     keywords = {gravitational lensing: weak, methods: numerical, large-scale structure of Universe, Astrophysics - Cosmology and Nongalactic Astrophysics},
         year = 2021,
        month = apr,
       volume = {502},
       number = {4},
        pages = {5593-5602},
          doi = {10.1093/mnras/stab395},
archivePrefix = {arXiv},
       eprint = {2010.09731},
 primaryClass = {astro-ph.CO},
       adsurl = {https://ui.adsabs.harvard.edu/abs/2021MNRAS.502.5593O},
      adsnote = {Provided by the SAO/NASA Astrophysics Data System}
}
```

## Copyright

Copyright 2021 Ken Osato, Jia Liu, and Zoltán Haiman

This software is made available under MIT License. Please see `LICENSE` file for details.

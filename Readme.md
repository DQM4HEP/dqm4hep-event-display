<img src="https://travis-ci.org/DQM4HEP/dqm4hep-event-display.svg?branch=master" align="left" />
<img src="https://scan.coverity.com/projects/15199/badge.svg" align="left" />
<img src="https://readthedocs.org/projects/dqm4hep/badge/?version=latest" align="left" />
<a href="https://dqm4hep.github.io/dqm4hep-doxygen/doxygen/dqm4hep-core/master/index.html">
<img src="https://codedocs.xyz/doxygen/doxygen.svg" align="left"/>
</a>

# DQM4HEP Event display library, a Data Quality Monitoring framework for High Energy Physics

## Installation

The building process is managed by [CMake](http://cmake.org).

Dependencies :
- c++11 compiler
- [ROOT](https://github.com/root-project/root), version 6 required
- [DQMCore](https://github.com/DQM4HEP/dqm4hep-core)
- [DQMNet](https://github.com/DQM4HEP/dqm4hep-net)
- [DQMOnline](https://github.com/DQM4HEP/dqm4hep-online)
- [DD4hep](https://github.com/AIDASoft/DD4hep) (optional)

In the top level directory :

```bash
mkdir build
cd build
cmake [-DOPTIONS=...] ..
make install
ctest # to check your installation
```

where OPTIONS can be :
- INSTALL_DOC [ON/OFF] to install [doxygen](www.doxygen.org) code documentation (default is OFF)
- BUILD_DD4HEP_PLUGINS [ON/OFF] to install [dd4hep](https://github.com/AIDASoft/DD4hep) components (default is OFF)

<img src="https://www.gnu.org/graphics/gplv3-127x51.png" align="right" />

## License and Copyright
Copyright (C), dqm4hep-event-display Authors

dqm4hep-event-display is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License long with this program.  If not, see <http://www.gnu.org/licenses/>.

## Bug report

You can send emails to <dqm4hep@gmail.com>
or use the [github issues interface](https://github.com/DQM4HEP/dqm4hep-event-display/issues)

/*
This file is part of Repetier-Firmware.

Repetier-Firmware is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Repetier-Firmware is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _EXTERNALDAC_H
#define _EXTERNALDAC_H

class ExternalDac
{
public:
    ExternalDac();
    static void begin(void);
    static void setValueAll(uint8_t value);
    static void setValue(uint8_t channel, uint8_t value);
};


#endif //_EXTERNALDAC_H


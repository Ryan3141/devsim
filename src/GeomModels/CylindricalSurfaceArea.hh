/***
DEVSIM
Copyright 2013 DEVSIM LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
***/

#ifndef CYLINDRICAL_SURFACE_AREA_HH
#define CYLINDRICAL_SURFACE_AREA_HH
#include "NodeModel.hh"

class Contact;
class Interface;

NodeModelPtr CreateCylindricalSurfaceArea(RegionPtr /*rp*/);

template <typename DoubleType>
class CylindricalSurfaceArea : public NodeModel {
    public:
        void Serialize(std::ostream &) const;

        CylindricalSurfaceArea(RegionPtr /*rp*/);

    private:
        CylindricalSurfaceArea();
        CylindricalSurfaceArea(const CylindricalSurfaceArea &);
        CylindricalSurfaceArea &operator=(const CylindricalSurfaceArea &);
        void calcCylindricalSurfaceArea2d() const;
        void calcNodeScalarValues() const;
        void setInitialValues();
};
#endif

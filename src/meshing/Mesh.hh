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

#ifndef MESH_HH
#define MESH_HH
#include <string>
namespace dsMesh {
class Mesh {
    public:
        virtual ~Mesh() = 0;
        const std::string &GetName();

        bool Instantiate(const std::string &, std::string &);
        bool Finalize(std::string &);
        bool IsFinalized();

    protected:
        virtual bool Instantiate_(const std::string &, std::string &) = 0;
        virtual bool Finalize_(std::string &) = 0;

        explicit Mesh(const std::string &);
        void     SetFinalized();
    private:
        Mesh();
        Mesh(const Mesh &);
        Mesh &operator=(const Mesh&);

        std::string name;
        bool finalized;
};

}
#endif

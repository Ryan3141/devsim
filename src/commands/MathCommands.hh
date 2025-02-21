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

#ifndef MATHCOMMANDS_HH
#define MATHCOMMANDS_HH
class CommandHandler;
namespace dsCommand {
struct Commands;
extern Commands MathCommands[];
void getContactCurrentCmd(CommandHandler &);
void getContactCurrentCmd(CommandHandler &);
void solveCmd(CommandHandler &);
void getMatrixAndRHSCmd(CommandHandler &);
void setInitialConditionCmd(CommandHandler &);
}

#endif

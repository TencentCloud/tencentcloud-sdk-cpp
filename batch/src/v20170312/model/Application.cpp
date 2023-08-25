/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/batch/v20170312/model/Application.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Application::Application() :
    m_deliveryFormHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_packagePathHasBeenSet(false),
    m_dockerHasBeenSet(false),
    m_commandsHasBeenSet(false)
{
}

CoreInternalOutcome Application::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliveryForm") && !value["DeliveryForm"].IsNull())
    {
        if (!value["DeliveryForm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.DeliveryForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryForm = string(value["DeliveryForm"].GetString());
        m_deliveryFormHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("PackagePath") && !value["PackagePath"].IsNull())
    {
        if (!value["PackagePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.PackagePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packagePath = string(value["PackagePath"].GetString());
        m_packagePathHasBeenSet = true;
    }

    if (value.HasMember("Docker") && !value["Docker"].IsNull())
    {
        if (!value["Docker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Docker` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docker.Deserialize(value["Docker"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dockerHasBeenSet = true;
    }

    if (value.HasMember("Commands") && !value["Commands"].IsNull())
    {
        if (!value["Commands"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Application.Commands` is not array type"));

        const rapidjson::Value &tmpValue = value["Commands"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommandLine item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commands.push_back(item);
        }
        m_commandsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Application::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliveryFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryForm.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_packagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackagePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packagePath.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Docker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docker.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commands";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commands.begin(); itr != m_commands.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Application::GetDeliveryForm() const
{
    return m_deliveryForm;
}

void Application::SetDeliveryForm(const string& _deliveryForm)
{
    m_deliveryForm = _deliveryForm;
    m_deliveryFormHasBeenSet = true;
}

bool Application::DeliveryFormHasBeenSet() const
{
    return m_deliveryFormHasBeenSet;
}

string Application::GetCommand() const
{
    return m_command;
}

void Application::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool Application::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string Application::GetPackagePath() const
{
    return m_packagePath;
}

void Application::SetPackagePath(const string& _packagePath)
{
    m_packagePath = _packagePath;
    m_packagePathHasBeenSet = true;
}

bool Application::PackagePathHasBeenSet() const
{
    return m_packagePathHasBeenSet;
}

Docker Application::GetDocker() const
{
    return m_docker;
}

void Application::SetDocker(const Docker& _docker)
{
    m_docker = _docker;
    m_dockerHasBeenSet = true;
}

bool Application::DockerHasBeenSet() const
{
    return m_dockerHasBeenSet;
}

vector<CommandLine> Application::GetCommands() const
{
    return m_commands;
}

void Application::SetCommands(const vector<CommandLine>& _commands)
{
    m_commands = _commands;
    m_commandsHasBeenSet = true;
}

bool Application::CommandsHasBeenSet() const
{
    return m_commandsHasBeenSet;
}


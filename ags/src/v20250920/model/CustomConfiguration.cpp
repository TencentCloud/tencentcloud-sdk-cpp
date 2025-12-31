/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ags/v20250920/model/CustomConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CustomConfiguration::CustomConfiguration() :
    m_imageHasBeenSet(false),
    m_imageRegistryTypeHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_probeHasBeenSet(false)
{
}

CoreInternalOutcome CustomConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryType") && !value["ImageRegistryType"].IsNull())
    {
        if (!value["ImageRegistryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.ImageRegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryType = string(value["ImageRegistryType"].GetString());
        m_imageRegistryTypeHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Command` is not array type"));

        const rapidjson::Value &tmpValue = value["Command"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_command.push_back((*itr).GetString());
        }
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Env` is not array type"));

        const rapidjson::Value &tmpValue = value["Env"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_env.push_back(item);
        }
        m_envHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortConfiguration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Resources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resources.Deserialize(value["Resources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("Probe") && !value["Probe"].IsNull())
    {
        if (!value["Probe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomConfiguration.Probe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_probe.Deserialize(value["Probe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_probeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRegistryType.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_command.begin(); itr != m_command.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_probeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_probe.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CustomConfiguration::GetImage() const
{
    return m_image;
}

void CustomConfiguration::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CustomConfiguration::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CustomConfiguration::GetImageRegistryType() const
{
    return m_imageRegistryType;
}

void CustomConfiguration::SetImageRegistryType(const string& _imageRegistryType)
{
    m_imageRegistryType = _imageRegistryType;
    m_imageRegistryTypeHasBeenSet = true;
}

bool CustomConfiguration::ImageRegistryTypeHasBeenSet() const
{
    return m_imageRegistryTypeHasBeenSet;
}

vector<string> CustomConfiguration::GetCommand() const
{
    return m_command;
}

void CustomConfiguration::SetCommand(const vector<string>& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CustomConfiguration::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

vector<string> CustomConfiguration::GetArgs() const
{
    return m_args;
}

void CustomConfiguration::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool CustomConfiguration::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

vector<EnvVar> CustomConfiguration::GetEnv() const
{
    return m_env;
}

void CustomConfiguration::SetEnv(const vector<EnvVar>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool CustomConfiguration::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

vector<PortConfiguration> CustomConfiguration::GetPorts() const
{
    return m_ports;
}

void CustomConfiguration::SetPorts(const vector<PortConfiguration>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CustomConfiguration::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

ResourceConfiguration CustomConfiguration::GetResources() const
{
    return m_resources;
}

void CustomConfiguration::SetResources(const ResourceConfiguration& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CustomConfiguration::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

ProbeConfiguration CustomConfiguration::GetProbe() const
{
    return m_probe;
}

void CustomConfiguration::SetProbe(const ProbeConfiguration& _probe)
{
    m_probe = _probe;
    m_probeHasBeenSet = true;
}

bool CustomConfiguration::ProbeHasBeenSet() const
{
    return m_probeHasBeenSet;
}


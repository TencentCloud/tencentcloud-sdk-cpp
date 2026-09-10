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

#include <tencentcloud/tcb/v20180608/model/AgentRuntimeCodeImageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AgentRuntimeCodeImageConfig::AgentRuntimeCodeImageConfig() :
    m_imageTypeHasBeenSet(false),
    m_imageUriHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_containerImageAccelerateHasBeenSet(false)
{
}

CoreInternalOutcome AgentRuntimeCodeImageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUri") && !value["ImageUri"].IsNull())
    {
        if (!value["ImageUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.ImageUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUri = string(value["ImageUri"].GetString());
        m_imageUriHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("ContainerImageAccelerate") && !value["ContainerImageAccelerate"].IsNull())
    {
        if (!value["ContainerImageAccelerate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCodeImageConfig.ContainerImageAccelerate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containerImageAccelerate = value["ContainerImageAccelerate"].GetBool();
        m_containerImageAccelerateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRuntimeCodeImageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUri.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_args.c_str(), allocator).Move(), allocator);
    }

    if (m_containerImageAccelerateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerImageAccelerate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerImageAccelerate, allocator);
    }

}


string AgentRuntimeCodeImageConfig::GetImageType() const
{
    return m_imageType;
}

void AgentRuntimeCodeImageConfig::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string AgentRuntimeCodeImageConfig::GetImageUri() const
{
    return m_imageUri;
}

void AgentRuntimeCodeImageConfig::SetImageUri(const string& _imageUri)
{
    m_imageUri = _imageUri;
    m_imageUriHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::ImageUriHasBeenSet() const
{
    return m_imageUriHasBeenSet;
}

string AgentRuntimeCodeImageConfig::GetRegistryId() const
{
    return m_registryId;
}

void AgentRuntimeCodeImageConfig::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string AgentRuntimeCodeImageConfig::GetCommand() const
{
    return m_command;
}

void AgentRuntimeCodeImageConfig::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string AgentRuntimeCodeImageConfig::GetArgs() const
{
    return m_args;
}

void AgentRuntimeCodeImageConfig::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

bool AgentRuntimeCodeImageConfig::GetContainerImageAccelerate() const
{
    return m_containerImageAccelerate;
}

void AgentRuntimeCodeImageConfig::SetContainerImageAccelerate(const bool& _containerImageAccelerate)
{
    m_containerImageAccelerate = _containerImageAccelerate;
    m_containerImageAccelerateHasBeenSet = true;
}

bool AgentRuntimeCodeImageConfig::ContainerImageAccelerateHasBeenSet() const
{
    return m_containerImageAccelerateHasBeenSet;
}


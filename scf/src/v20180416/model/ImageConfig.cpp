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

#include <tencentcloud/scf/v20180416/model/ImageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ImageConfig::ImageConfig() :
    m_imageTypeHasBeenSet(false),
    m_imageUriHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_containerImageAccelerateHasBeenSet(false),
    m_imagePortHasBeenSet(false)
{
}

CoreInternalOutcome ImageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageUri") && !value["ImageUri"].IsNull())
    {
        if (!value["ImageUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.ImageUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUri = string(value["ImageUri"].GetString());
        m_imageUriHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("EntryPoint") && !value["EntryPoint"].IsNull())
    {
        if (!value["EntryPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.EntryPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryPoint = string(value["EntryPoint"].GetString());
        m_entryPointHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("ContainerImageAccelerate") && !value["ContainerImageAccelerate"].IsNull())
    {
        if (!value["ContainerImageAccelerate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.ContainerImageAccelerate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containerImageAccelerate = value["ContainerImageAccelerate"].GetBool();
        m_containerImageAccelerateHasBeenSet = true;
    }

    if (value.HasMember("ImagePort") && !value["ImagePort"].IsNull())
    {
        if (!value["ImagePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig.ImagePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imagePort = value["ImagePort"].GetInt64();
        m_imagePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
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

    if (m_imagePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imagePort, allocator);
    }

}


string ImageConfig::GetImageType() const
{
    return m_imageType;
}

void ImageConfig::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool ImageConfig::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

string ImageConfig::GetImageUri() const
{
    return m_imageUri;
}

void ImageConfig::SetImageUri(const string& _imageUri)
{
    m_imageUri = _imageUri;
    m_imageUriHasBeenSet = true;
}

bool ImageConfig::ImageUriHasBeenSet() const
{
    return m_imageUriHasBeenSet;
}

string ImageConfig::GetRegistryId() const
{
    return m_registryId;
}

void ImageConfig::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ImageConfig::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ImageConfig::GetEntryPoint() const
{
    return m_entryPoint;
}

void ImageConfig::SetEntryPoint(const string& _entryPoint)
{
    m_entryPoint = _entryPoint;
    m_entryPointHasBeenSet = true;
}

bool ImageConfig::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string ImageConfig::GetCommand() const
{
    return m_command;
}

void ImageConfig::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ImageConfig::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string ImageConfig::GetArgs() const
{
    return m_args;
}

void ImageConfig::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool ImageConfig::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

bool ImageConfig::GetContainerImageAccelerate() const
{
    return m_containerImageAccelerate;
}

void ImageConfig::SetContainerImageAccelerate(const bool& _containerImageAccelerate)
{
    m_containerImageAccelerate = _containerImageAccelerate;
    m_containerImageAccelerateHasBeenSet = true;
}

bool ImageConfig::ContainerImageAccelerateHasBeenSet() const
{
    return m_containerImageAccelerateHasBeenSet;
}

int64_t ImageConfig::GetImagePort() const
{
    return m_imagePort;
}

void ImageConfig::SetImagePort(const int64_t& _imagePort)
{
    m_imagePort = _imagePort;
    m_imagePortHasBeenSet = true;
}

bool ImageConfig::ImagePortHasBeenSet() const
{
    return m_imagePortHasBeenSet;
}


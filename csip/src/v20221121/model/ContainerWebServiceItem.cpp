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

#include <tencentcloud/csip/v20221121/model/ContainerWebServiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerWebServiceItem::ContainerWebServiceItem() :
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_exePathHasBeenSet(false),
    m_configPathHasBeenSet(false)
{
}

CoreInternalOutcome ContainerWebServiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWebServiceItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWebServiceItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWebServiceItem.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("ExePath") && !value["ExePath"].IsNull())
    {
        if (!value["ExePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWebServiceItem.ExePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exePath = string(value["ExePath"].GetString());
        m_exePathHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerWebServiceItem.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerWebServiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_exePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exePath.c_str(), allocator).Move(), allocator);
    }

    if (m_configPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPath.c_str(), allocator).Move(), allocator);
    }

}


string ContainerWebServiceItem::GetType() const
{
    return m_type;
}

void ContainerWebServiceItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContainerWebServiceItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ContainerWebServiceItem::GetVersion() const
{
    return m_version;
}

void ContainerWebServiceItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ContainerWebServiceItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ContainerWebServiceItem::GetRunAs() const
{
    return m_runAs;
}

void ContainerWebServiceItem::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ContainerWebServiceItem::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string ContainerWebServiceItem::GetExePath() const
{
    return m_exePath;
}

void ContainerWebServiceItem::SetExePath(const string& _exePath)
{
    m_exePath = _exePath;
    m_exePathHasBeenSet = true;
}

bool ContainerWebServiceItem::ExePathHasBeenSet() const
{
    return m_exePathHasBeenSet;
}

string ContainerWebServiceItem::GetConfigPath() const
{
    return m_configPath;
}

void ContainerWebServiceItem::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool ContainerWebServiceItem::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/ContainerAppItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerAppItem::ContainerAppItem() :
    m_mainTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_exePathHasBeenSet(false),
    m_configPathHasBeenSet(false),
    m_processCntHasBeenSet(false)
{
}

CoreInternalOutcome ContainerAppItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainType") && !value["MainType"].IsNull())
    {
        if (!value["MainType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.MainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainType = string(value["MainType"].GetString());
        m_mainTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("ExePath") && !value["ExePath"].IsNull())
    {
        if (!value["ExePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.ExePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exePath = string(value["ExePath"].GetString());
        m_exePathHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessCnt") && !value["ProcessCnt"].IsNull())
    {
        if (!value["ProcessCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerAppItem.ProcessCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processCnt = value["ProcessCnt"].GetInt64();
        m_processCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerAppItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_processCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCnt, allocator);
    }

}


string ContainerAppItem::GetMainType() const
{
    return m_mainType;
}

void ContainerAppItem::SetMainType(const string& _mainType)
{
    m_mainType = _mainType;
    m_mainTypeHasBeenSet = true;
}

bool ContainerAppItem::MainTypeHasBeenSet() const
{
    return m_mainTypeHasBeenSet;
}

string ContainerAppItem::GetType() const
{
    return m_type;
}

void ContainerAppItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContainerAppItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ContainerAppItem::GetVersion() const
{
    return m_version;
}

void ContainerAppItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ContainerAppItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ContainerAppItem::GetRunAs() const
{
    return m_runAs;
}

void ContainerAppItem::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ContainerAppItem::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string ContainerAppItem::GetExePath() const
{
    return m_exePath;
}

void ContainerAppItem::SetExePath(const string& _exePath)
{
    m_exePath = _exePath;
    m_exePathHasBeenSet = true;
}

bool ContainerAppItem::ExePathHasBeenSet() const
{
    return m_exePathHasBeenSet;
}

string ContainerAppItem::GetConfigPath() const
{
    return m_configPath;
}

void ContainerAppItem::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool ContainerAppItem::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

int64_t ContainerAppItem::GetProcessCnt() const
{
    return m_processCnt;
}

void ContainerAppItem::SetProcessCnt(const int64_t& _processCnt)
{
    m_processCnt = _processCnt;
    m_processCntHasBeenSet = true;
}

bool ContainerAppItem::ProcessCntHasBeenSet() const
{
    return m_processCntHasBeenSet;
}


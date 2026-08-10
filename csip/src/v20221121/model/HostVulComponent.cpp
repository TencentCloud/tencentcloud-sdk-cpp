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

#include <tencentcloud/csip/v20221121/model/HostVulComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostVulComponent::HostVulComponent() :
    m_hostInfoHasBeenSet(false),
    m_effectVersionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_processIDHasBeenSet(false),
    m_fixCommandHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome HostVulComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostInfo") && !value["HostInfo"].IsNull())
    {
        if (!value["HostInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.HostInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostInfo.Deserialize(value["HostInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostInfoHasBeenSet = true;
    }

    if (value.HasMember("EffectVersion") && !value["EffectVersion"].IsNull())
    {
        if (!value["EffectVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.EffectVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectVersion = string(value["EffectVersion"].GetString());
        m_effectVersionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("ProcessID") && !value["ProcessID"].IsNull())
    {
        if (!value["ProcessID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.ProcessID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processID = string(value["ProcessID"].GetString());
        m_processIDHasBeenSet = true;
    }

    if (value.HasMember("FixCommand") && !value["FixCommand"].IsNull())
    {
        if (!value["FixCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.FixCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixCommand = string(value["FixCommand"].GetString());
        m_fixCommandHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostVulComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostVulComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_effectVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_processIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processID.c_str(), allocator).Move(), allocator);
    }

    if (m_fixCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


HostBriefInfo HostVulComponent::GetHostInfo() const
{
    return m_hostInfo;
}

void HostVulComponent::SetHostInfo(const HostBriefInfo& _hostInfo)
{
    m_hostInfo = _hostInfo;
    m_hostInfoHasBeenSet = true;
}

bool HostVulComponent::HostInfoHasBeenSet() const
{
    return m_hostInfoHasBeenSet;
}

string HostVulComponent::GetEffectVersion() const
{
    return m_effectVersion;
}

void HostVulComponent::SetEffectVersion(const string& _effectVersion)
{
    m_effectVersion = _effectVersion;
    m_effectVersionHasBeenSet = true;
}

bool HostVulComponent::EffectVersionHasBeenSet() const
{
    return m_effectVersionHasBeenSet;
}

string HostVulComponent::GetPath() const
{
    return m_path;
}

void HostVulComponent::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HostVulComponent::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HostVulComponent::GetProcessID() const
{
    return m_processID;
}

void HostVulComponent::SetProcessID(const string& _processID)
{
    m_processID = _processID;
    m_processIDHasBeenSet = true;
}

bool HostVulComponent::ProcessIDHasBeenSet() const
{
    return m_processIDHasBeenSet;
}

string HostVulComponent::GetFixCommand() const
{
    return m_fixCommand;
}

void HostVulComponent::SetFixCommand(const string& _fixCommand)
{
    m_fixCommand = _fixCommand;
    m_fixCommandHasBeenSet = true;
}

bool HostVulComponent::FixCommandHasBeenSet() const
{
    return m_fixCommandHasBeenSet;
}

string HostVulComponent::GetName() const
{
    return m_name;
}

void HostVulComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HostVulComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


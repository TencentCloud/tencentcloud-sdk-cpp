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

#include <tencentcloud/yunjing/v20180228/model/AgentVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

AgentVul::AgentVul() :
    m_idHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_vulStatusHasBeenSet(false)
{
}

CoreInternalOutcome AgentVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulLevel") && !value["VulLevel"].IsNull())
    {
        if (!value["VulLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.VulLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = string(value["VulLevel"].GetString());
        m_vulLevelHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulStatus") && !value["VulStatus"].IsNull())
    {
        if (!value["VulStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentVul.VulStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulStatus = string(value["VulStatus"].GetString());
        m_vulStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulStatus.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AgentVul::GetId() const
{
    return m_id;
}

void AgentVul::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AgentVul::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AgentVul::GetMachineIp() const
{
    return m_machineIp;
}

void AgentVul::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AgentVul::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AgentVul::GetVulName() const
{
    return m_vulName;
}

void AgentVul::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool AgentVul::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string AgentVul::GetVulLevel() const
{
    return m_vulLevel;
}

void AgentVul::SetVulLevel(const string& _vulLevel)
{
    m_vulLevel = _vulLevel;
    m_vulLevelHasBeenSet = true;
}

bool AgentVul::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

string AgentVul::GetLastScanTime() const
{
    return m_lastScanTime;
}

void AgentVul::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool AgentVul::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string AgentVul::GetDescription() const
{
    return m_description;
}

void AgentVul::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentVul::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t AgentVul::GetVulId() const
{
    return m_vulId;
}

void AgentVul::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool AgentVul::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string AgentVul::GetVulStatus() const
{
    return m_vulStatus;
}

void AgentVul::SetVulStatus(const string& _vulStatus)
{
    m_vulStatus = _vulStatus;
    m_vulStatusHasBeenSet = true;
}

bool AgentVul::VulStatusHasBeenSet() const
{
    return m_vulStatusHasBeenSet;
}


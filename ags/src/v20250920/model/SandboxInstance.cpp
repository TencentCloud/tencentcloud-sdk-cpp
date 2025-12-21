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

#include <tencentcloud/ags/v20250920/model/SandboxInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SandboxInstance::SandboxInstance() :
    m_instanceIdHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_stopReasonHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_mountOptionsHasBeenSet(false)
{
}

CoreInternalOutcome SandboxInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.TimeoutSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetUint64();
        m_timeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("ExpiresAt") && !value["ExpiresAt"].IsNull())
    {
        if (!value["ExpiresAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.ExpiresAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiresAt = string(value["ExpiresAt"].GetString());
        m_expiresAtHasBeenSet = true;
    }

    if (value.HasMember("StopReason") && !value["StopReason"].IsNull())
    {
        if (!value["StopReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.StopReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopReason = string(value["StopReason"].GetString());
        m_stopReasonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MountOptions") && !value["MountOptions"].IsNull())
    {
        if (!value["MountOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SandboxInstance.MountOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["MountOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountOptions.push_back(item);
        }
        m_mountOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SandboxInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

    if (m_expiresAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiresAt.c_str(), allocator).Move(), allocator);
    }

    if (m_stopReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopReason.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mountOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountOptions.begin(); itr != m_mountOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SandboxInstance::GetInstanceId() const
{
    return m_instanceId;
}

void SandboxInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SandboxInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SandboxInstance::GetToolId() const
{
    return m_toolId;
}

void SandboxInstance::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool SandboxInstance::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string SandboxInstance::GetToolName() const
{
    return m_toolName;
}

void SandboxInstance::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool SandboxInstance::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string SandboxInstance::GetStatus() const
{
    return m_status;
}

void SandboxInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SandboxInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SandboxInstance::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void SandboxInstance::SetTimeoutSeconds(const uint64_t& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool SandboxInstance::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

string SandboxInstance::GetExpiresAt() const
{
    return m_expiresAt;
}

void SandboxInstance::SetExpiresAt(const string& _expiresAt)
{
    m_expiresAt = _expiresAt;
    m_expiresAtHasBeenSet = true;
}

bool SandboxInstance::ExpiresAtHasBeenSet() const
{
    return m_expiresAtHasBeenSet;
}

string SandboxInstance::GetStopReason() const
{
    return m_stopReason;
}

void SandboxInstance::SetStopReason(const string& _stopReason)
{
    m_stopReason = _stopReason;
    m_stopReasonHasBeenSet = true;
}

bool SandboxInstance::StopReasonHasBeenSet() const
{
    return m_stopReasonHasBeenSet;
}

string SandboxInstance::GetCreateTime() const
{
    return m_createTime;
}

void SandboxInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SandboxInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SandboxInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void SandboxInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SandboxInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<MountOption> SandboxInstance::GetMountOptions() const
{
    return m_mountOptions;
}

void SandboxInstance::SetMountOptions(const vector<MountOption>& _mountOptions)
{
    m_mountOptions = _mountOptions;
    m_mountOptionsHasBeenSet = true;
}

bool SandboxInstance::MountOptionsHasBeenSet() const
{
    return m_mountOptionsHasBeenSet;
}


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

#include <tencentcloud/tdai/v20250717/model/AgentMemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

AgentMemInfo::AgentMemInfo() :
    m_memInstanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_installStatusHasBeenSet(false),
    m_memStatusHasBeenSet(false)
{
}

CoreInternalOutcome AgentMemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemInstanceId") && !value["MemInstanceId"].IsNull())
    {
        if (!value["MemInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMemInfo.MemInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memInstanceId = string(value["MemInstanceId"].GetString());
        m_memInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMemInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstallStatus") && !value["InstallStatus"].IsNull())
    {
        if (!value["InstallStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMemInfo.InstallStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installStatus = value["InstallStatus"].GetInt64();
        m_installStatusHasBeenSet = true;
    }

    if (value.HasMember("MemStatus") && !value["MemStatus"].IsNull())
    {
        if (!value["MemStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentMemInfo.MemStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memStatus = string(value["MemStatus"].GetString());
        m_memStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentMemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_installStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installStatus, allocator);
    }

    if (m_memStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memStatus.c_str(), allocator).Move(), allocator);
    }

}


string AgentMemInfo::GetMemInstanceId() const
{
    return m_memInstanceId;
}

void AgentMemInfo::SetMemInstanceId(const string& _memInstanceId)
{
    m_memInstanceId = _memInstanceId;
    m_memInstanceIdHasBeenSet = true;
}

bool AgentMemInfo::MemInstanceIdHasBeenSet() const
{
    return m_memInstanceIdHasBeenSet;
}

int64_t AgentMemInfo::GetStatus() const
{
    return m_status;
}

void AgentMemInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentMemInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AgentMemInfo::GetInstallStatus() const
{
    return m_installStatus;
}

void AgentMemInfo::SetInstallStatus(const int64_t& _installStatus)
{
    m_installStatus = _installStatus;
    m_installStatusHasBeenSet = true;
}

bool AgentMemInfo::InstallStatusHasBeenSet() const
{
    return m_installStatusHasBeenSet;
}

string AgentMemInfo::GetMemStatus() const
{
    return m_memStatus;
}

void AgentMemInfo::SetMemStatus(const string& _memStatus)
{
    m_memStatus = _memStatus;
    m_memStatusHasBeenSet = true;
}

bool AgentMemInfo::MemStatusHasBeenSet() const
{
    return m_memStatusHasBeenSet;
}


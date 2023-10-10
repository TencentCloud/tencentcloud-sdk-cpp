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

#include <tencentcloud/cwp/v20180228/model/EditPrivilegeRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EditPrivilegeRulesRequest::EditPrivilegeRulesRequest() :
    m_idHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_sModeHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string EditPrivilegeRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_sModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sMode, allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t EditPrivilegeRulesRequest::GetId() const
{
    return m_id;
}

void EditPrivilegeRulesRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> EditPrivilegeRulesRequest::GetUuids() const
{
    return m_uuids;
}

void EditPrivilegeRulesRequest::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

string EditPrivilegeRulesRequest::GetHostIp() const
{
    return m_hostIp;
}

void EditPrivilegeRulesRequest::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string EditPrivilegeRulesRequest::GetProcessName() const
{
    return m_processName;
}

void EditPrivilegeRulesRequest::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t EditPrivilegeRulesRequest::GetSMode() const
{
    return m_sMode;
}

void EditPrivilegeRulesRequest::SetSMode(const uint64_t& _sMode)
{
    m_sMode = _sMode;
    m_sModeHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::SModeHasBeenSet() const
{
    return m_sModeHasBeenSet;
}

uint64_t EditPrivilegeRulesRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void EditPrivilegeRulesRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t EditPrivilegeRulesRequest::GetEventId() const
{
    return m_eventId;
}

void EditPrivilegeRulesRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EditPrivilegeRulesRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}



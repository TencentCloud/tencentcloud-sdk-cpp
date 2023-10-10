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

#include <tencentcloud/cwp/v20180228/model/EditReverseShellRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EditReverseShellRulesRequest::EditReverseShellRulesRequest() :
    m_idHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_destIpHasBeenSet(false),
    m_destPortHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string EditReverseShellRulesRequest::ToJsonString() const
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

    if (m_destIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destIp.c_str(), allocator).Move(), allocator);
    }

    if (m_destPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destPort.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
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


uint64_t EditReverseShellRulesRequest::GetId() const
{
    return m_id;
}

void EditReverseShellRulesRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditReverseShellRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> EditReverseShellRulesRequest::GetUuids() const
{
    return m_uuids;
}

void EditReverseShellRulesRequest::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool EditReverseShellRulesRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

string EditReverseShellRulesRequest::GetHostIp() const
{
    return m_hostIp;
}

void EditReverseShellRulesRequest::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool EditReverseShellRulesRequest::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string EditReverseShellRulesRequest::GetDestIp() const
{
    return m_destIp;
}

void EditReverseShellRulesRequest::SetDestIp(const string& _destIp)
{
    m_destIp = _destIp;
    m_destIpHasBeenSet = true;
}

bool EditReverseShellRulesRequest::DestIpHasBeenSet() const
{
    return m_destIpHasBeenSet;
}

string EditReverseShellRulesRequest::GetDestPort() const
{
    return m_destPort;
}

void EditReverseShellRulesRequest::SetDestPort(const string& _destPort)
{
    m_destPort = _destPort;
    m_destPortHasBeenSet = true;
}

bool EditReverseShellRulesRequest::DestPortHasBeenSet() const
{
    return m_destPortHasBeenSet;
}

string EditReverseShellRulesRequest::GetProcessName() const
{
    return m_processName;
}

void EditReverseShellRulesRequest::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool EditReverseShellRulesRequest::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t EditReverseShellRulesRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void EditReverseShellRulesRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool EditReverseShellRulesRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t EditReverseShellRulesRequest::GetEventId() const
{
    return m_eventId;
}

void EditReverseShellRulesRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EditReverseShellRulesRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}



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

#include <tencentcloud/yunjing/v20180228/model/EditPrivilegeRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

EditPrivilegeRuleRequest::EditPrivilegeRuleRequest() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_hostipHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_sModeHasBeenSet(false),
    m_isGlobalHasBeenSet(false)
{
}

string EditPrivilegeRuleRequest::ToJsonString() const
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

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t EditPrivilegeRuleRequest::GetId() const
{
    return m_id;
}

void EditPrivilegeRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EditPrivilegeRuleRequest::GetUuid() const
{
    return m_uuid;
}

void EditPrivilegeRuleRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string EditPrivilegeRuleRequest::GetHostip() const
{
    return m_hostip;
}

void EditPrivilegeRuleRequest::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}

string EditPrivilegeRuleRequest::GetProcessName() const
{
    return m_processName;
}

void EditPrivilegeRuleRequest::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t EditPrivilegeRuleRequest::GetSMode() const
{
    return m_sMode;
}

void EditPrivilegeRuleRequest::SetSMode(const uint64_t& _sMode)
{
    m_sMode = _sMode;
    m_sModeHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::SModeHasBeenSet() const
{
    return m_sModeHasBeenSet;
}

uint64_t EditPrivilegeRuleRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void EditPrivilegeRuleRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool EditPrivilegeRuleRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}



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

#include <tencentcloud/cwp/v20180228/model/EditBashRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EditBashRulesRequest::EditBashRulesRequest() :
    m_idHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_whiteHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false)
{
}

string EditBashRulesRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_whiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "White";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_white, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealOldEvents, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t EditBashRulesRequest::GetId() const
{
    return m_id;
}

void EditBashRulesRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EditBashRulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> EditBashRulesRequest::GetUuids() const
{
    return m_uuids;
}

void EditBashRulesRequest::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool EditBashRulesRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

string EditBashRulesRequest::GetHostIp() const
{
    return m_hostIp;
}

void EditBashRulesRequest::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool EditBashRulesRequest::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string EditBashRulesRequest::GetName() const
{
    return m_name;
}

void EditBashRulesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EditBashRulesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t EditBashRulesRequest::GetLevel() const
{
    return m_level;
}

void EditBashRulesRequest::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool EditBashRulesRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string EditBashRulesRequest::GetRule() const
{
    return m_rule;
}

void EditBashRulesRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool EditBashRulesRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t EditBashRulesRequest::GetIsGlobal() const
{
    return m_isGlobal;
}

void EditBashRulesRequest::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool EditBashRulesRequest::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t EditBashRulesRequest::GetWhite() const
{
    return m_white;
}

void EditBashRulesRequest::SetWhite(const uint64_t& _white)
{
    m_white = _white;
    m_whiteHasBeenSet = true;
}

bool EditBashRulesRequest::WhiteHasBeenSet() const
{
    return m_whiteHasBeenSet;
}

uint64_t EditBashRulesRequest::GetEventId() const
{
    return m_eventId;
}

void EditBashRulesRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EditBashRulesRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

uint64_t EditBashRulesRequest::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void EditBashRulesRequest::SetDealOldEvents(const uint64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool EditBashRulesRequest::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}



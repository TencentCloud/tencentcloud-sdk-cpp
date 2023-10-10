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

#include <tencentcloud/cwp/v20180228/model/CreateNetAttackWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateNetAttackWhiteListRequest::CreateNetAttackWhiteListRequest() :
    m_scopeHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateNetAttackWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcIp.begin(); itr != m_srcIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateNetAttackWhiteListRequest::GetScope() const
{
    return m_scope;
}

void CreateNetAttackWhiteListRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> CreateNetAttackWhiteListRequest::GetSrcIp() const
{
    return m_srcIp;
}

void CreateNetAttackWhiteListRequest::SetSrcIp(const vector<string>& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

vector<string> CreateNetAttackWhiteListRequest::GetQuuidList() const
{
    return m_quuidList;
}

void CreateNetAttackWhiteListRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

uint64_t CreateNetAttackWhiteListRequest::GetEventId() const
{
    return m_eventId;
}

void CreateNetAttackWhiteListRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

uint64_t CreateNetAttackWhiteListRequest::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void CreateNetAttackWhiteListRequest::SetDealOldEvents(const uint64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}

string CreateNetAttackWhiteListRequest::GetDescription() const
{
    return m_description;
}

void CreateNetAttackWhiteListRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateNetAttackWhiteListRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}



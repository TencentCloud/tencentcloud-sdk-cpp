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

#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyNetAttackWhiteListRequest::ModifyNetAttackWhiteListRequest() :
    m_scopeHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dealOldEventsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyNetAttackWhiteListRequest::ToJsonString() const
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

    if (m_dealOldEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOldEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealOldEvents, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


uint64_t ModifyNetAttackWhiteListRequest::GetScope() const
{
    return m_scope;
}

void ModifyNetAttackWhiteListRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> ModifyNetAttackWhiteListRequest::GetSrcIp() const
{
    return m_srcIp;
}

void ModifyNetAttackWhiteListRequest::SetSrcIp(const vector<string>& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t ModifyNetAttackWhiteListRequest::GetDealOldEvents() const
{
    return m_dealOldEvents;
}

void ModifyNetAttackWhiteListRequest::SetDealOldEvents(const uint64_t& _dealOldEvents)
{
    m_dealOldEvents = _dealOldEvents;
    m_dealOldEventsHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::DealOldEventsHasBeenSet() const
{
    return m_dealOldEventsHasBeenSet;
}

uint64_t ModifyNetAttackWhiteListRequest::GetId() const
{
    return m_id;
}

void ModifyNetAttackWhiteListRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> ModifyNetAttackWhiteListRequest::GetQuuidList() const
{
    return m_quuidList;
}

void ModifyNetAttackWhiteListRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

string ModifyNetAttackWhiteListRequest::GetDescription() const
{
    return m_description;
}

void ModifyNetAttackWhiteListRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyNetAttackWhiteListRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}



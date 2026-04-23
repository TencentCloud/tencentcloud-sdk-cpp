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

#include <tencentcloud/tcss/v20201101/model/AddOrModifyVirusWhiteListRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddOrModifyVirusWhiteListRuleRequest::AddOrModifyVirusWhiteListRuleRequest() :
    m_md5ListHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string AddOrModifyVirusWhiteListRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_md5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_md5List.begin(); itr != m_md5List.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


vector<string> AddOrModifyVirusWhiteListRuleRequest::GetMd5List() const
{
    return m_md5List;
}

void AddOrModifyVirusWhiteListRuleRequest::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

uint64_t AddOrModifyVirusWhiteListRuleRequest::GetScope() const
{
    return m_scope;
}

void AddOrModifyVirusWhiteListRuleRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t AddOrModifyVirusWhiteListRuleRequest::GetId() const
{
    return m_id;
}

void AddOrModifyVirusWhiteListRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> AddOrModifyVirusWhiteListRuleRequest::GetImageIds() const
{
    return m_imageIds;
}

void AddOrModifyVirusWhiteListRuleRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string AddOrModifyVirusWhiteListRuleRequest::GetRemark() const
{
    return m_remark;
}

void AddOrModifyVirusWhiteListRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AddOrModifyVirusWhiteListRuleRequest::GetEventId() const
{
    return m_eventId;
}

void AddOrModifyVirusWhiteListRuleRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AddOrModifyVirusWhiteListRuleRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}



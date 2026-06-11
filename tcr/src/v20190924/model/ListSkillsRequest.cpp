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

#include <tencentcloud/tcr/v20190924/model/ListSkillsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ListSkillsRequest::ListSkillsRequest() :
    m_registryIdHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_skillTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string ListSkillsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListSkillsRequest::GetRegistryId() const
{
    return m_registryId;
}

void ListSkillsRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ListSkillsRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ListSkillsRequest::GetSearchKey() const
{
    return m_searchKey;
}

void ListSkillsRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool ListSkillsRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string ListSkillsRequest::GetSkillName() const
{
    return m_skillName;
}

void ListSkillsRequest::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool ListSkillsRequest::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string ListSkillsRequest::GetSkillType() const
{
    return m_skillType;
}

void ListSkillsRequest::SetSkillType(const string& _skillType)
{
    m_skillType = _skillType;
    m_skillTypeHasBeenSet = true;
}

bool ListSkillsRequest::SkillTypeHasBeenSet() const
{
    return m_skillTypeHasBeenSet;
}

string ListSkillsRequest::GetStatus() const
{
    return m_status;
}

void ListSkillsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListSkillsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ListSkillsRequest::GetOffset() const
{
    return m_offset;
}

void ListSkillsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListSkillsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ListSkillsRequest::GetLimit() const
{
    return m_limit;
}

void ListSkillsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListSkillsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



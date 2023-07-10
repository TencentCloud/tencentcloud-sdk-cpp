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

#include <tencentcloud/dnspod/v20210323/model/DescribeDomainFilterListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeDomainFilterListRequest::DescribeDomainFilterListRequest() :
    m_typeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_updatedAtBeginHasBeenSet(false),
    m_updatedAtEndHasBeenSet(false),
    m_recordCountBeginHasBeenSet(false),
    m_recordCountEndHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string DescribeDomainFilterListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupId.begin(); itr != m_groupId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_package.begin(); itr != m_package.end(); ++itr)
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

    if (m_updatedAtBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAtBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updatedAtBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAtEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updatedAtEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCountBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordCountBegin, allocator);
    }

    if (m_recordCountEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCountEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordCountEnd, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDomainFilterListRequest::GetType() const
{
    return m_type;
}

void DescribeDomainFilterListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeDomainFilterListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDomainFilterListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDomainFilterListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDomainFilterListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeDomainFilterListRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeDomainFilterListRequest::SetGroupId(const vector<int64_t>& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeDomainFilterListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDomainFilterListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeDomainFilterListRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeDomainFilterListRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeDomainFilterListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeDomainFilterListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

vector<string> DescribeDomainFilterListRequest::GetStatus() const
{
    return m_status;
}

void DescribeDomainFilterListRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeDomainFilterListRequest::GetPackage() const
{
    return m_package;
}

void DescribeDomainFilterListRequest::SetPackage(const vector<string>& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

string DescribeDomainFilterListRequest::GetRemark() const
{
    return m_remark;
}

void DescribeDomainFilterListRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeDomainFilterListRequest::GetUpdatedAtBegin() const
{
    return m_updatedAtBegin;
}

void DescribeDomainFilterListRequest::SetUpdatedAtBegin(const string& _updatedAtBegin)
{
    m_updatedAtBegin = _updatedAtBegin;
    m_updatedAtBeginHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::UpdatedAtBeginHasBeenSet() const
{
    return m_updatedAtBeginHasBeenSet;
}

string DescribeDomainFilterListRequest::GetUpdatedAtEnd() const
{
    return m_updatedAtEnd;
}

void DescribeDomainFilterListRequest::SetUpdatedAtEnd(const string& _updatedAtEnd)
{
    m_updatedAtEnd = _updatedAtEnd;
    m_updatedAtEndHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::UpdatedAtEndHasBeenSet() const
{
    return m_updatedAtEndHasBeenSet;
}

uint64_t DescribeDomainFilterListRequest::GetRecordCountBegin() const
{
    return m_recordCountBegin;
}

void DescribeDomainFilterListRequest::SetRecordCountBegin(const uint64_t& _recordCountBegin)
{
    m_recordCountBegin = _recordCountBegin;
    m_recordCountBeginHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::RecordCountBeginHasBeenSet() const
{
    return m_recordCountBeginHasBeenSet;
}

uint64_t DescribeDomainFilterListRequest::GetRecordCountEnd() const
{
    return m_recordCountEnd;
}

void DescribeDomainFilterListRequest::SetRecordCountEnd(const uint64_t& _recordCountEnd)
{
    m_recordCountEnd = _recordCountEnd;
    m_recordCountEndHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::RecordCountEndHasBeenSet() const
{
    return m_recordCountEndHasBeenSet;
}

int64_t DescribeDomainFilterListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDomainFilterListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagItemFilter> DescribeDomainFilterListRequest::GetTags() const
{
    return m_tags;
}

void DescribeDomainFilterListRequest::SetTags(const vector<TagItemFilter>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeDomainFilterListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



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

#include <tencentcloud/dnspod/v20210323/model/DescribeRecordFilterListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeRecordFilterListRequest::DescribeRecordFilterListRequest() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_recordValueHasBeenSet(false),
    m_recordStatusHasBeenSet(false),
    m_weightBeginHasBeenSet(false),
    m_weightEndHasBeenSet(false),
    m_mXBeginHasBeenSet(false),
    m_mXEndHasBeenSet(false),
    m_tTLBeginHasBeenSet(false),
    m_tTLEndHasBeenSet(false),
    m_updatedAtBeginHasBeenSet(false),
    m_updatedAtEndHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isExactSubDomainHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeRecordFilterListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordType.begin(); itr != m_recordType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recordLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordLine.begin(); itr != m_recordLine.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupId.begin(); itr != m_groupId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordStatus.begin(); itr != m_recordStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weightBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weightBegin, allocator);
    }

    if (m_weightEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weightEnd, allocator);
    }

    if (m_mXBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MXBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mXBegin, allocator);
    }

    if (m_mXEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MXEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mXEnd, allocator);
    }

    if (m_tTLBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTLBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTLBegin, allocator);
    }

    if (m_tTLEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTLEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTLEnd, allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_isExactSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExactSubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isExactSubDomain, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRecordFilterListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeRecordFilterListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeRecordFilterListRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DescribeRecordFilterListRequest::GetSubDomain() const
{
    return m_subDomain;
}

void DescribeRecordFilterListRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

vector<string> DescribeRecordFilterListRequest::GetRecordType() const
{
    return m_recordType;
}

void DescribeRecordFilterListRequest::SetRecordType(const vector<string>& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

vector<string> DescribeRecordFilterListRequest::GetRecordLine() const
{
    return m_recordLine;
}

void DescribeRecordFilterListRequest::SetRecordLine(const vector<string>& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

vector<uint64_t> DescribeRecordFilterListRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeRecordFilterListRequest::SetGroupId(const vector<uint64_t>& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeRecordFilterListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeRecordFilterListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeRecordFilterListRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeRecordFilterListRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeRecordFilterListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeRecordFilterListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRecordFilterListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRecordFilterListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRecordFilterListRequest::GetRecordValue() const
{
    return m_recordValue;
}

void DescribeRecordFilterListRequest::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

vector<string> DescribeRecordFilterListRequest::GetRecordStatus() const
{
    return m_recordStatus;
}

void DescribeRecordFilterListRequest::SetRecordStatus(const vector<string>& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetWeightBegin() const
{
    return m_weightBegin;
}

void DescribeRecordFilterListRequest::SetWeightBegin(const uint64_t& _weightBegin)
{
    m_weightBegin = _weightBegin;
    m_weightBeginHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::WeightBeginHasBeenSet() const
{
    return m_weightBeginHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetWeightEnd() const
{
    return m_weightEnd;
}

void DescribeRecordFilterListRequest::SetWeightEnd(const uint64_t& _weightEnd)
{
    m_weightEnd = _weightEnd;
    m_weightEndHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::WeightEndHasBeenSet() const
{
    return m_weightEndHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetMXBegin() const
{
    return m_mXBegin;
}

void DescribeRecordFilterListRequest::SetMXBegin(const uint64_t& _mXBegin)
{
    m_mXBegin = _mXBegin;
    m_mXBeginHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::MXBeginHasBeenSet() const
{
    return m_mXBeginHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetMXEnd() const
{
    return m_mXEnd;
}

void DescribeRecordFilterListRequest::SetMXEnd(const uint64_t& _mXEnd)
{
    m_mXEnd = _mXEnd;
    m_mXEndHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::MXEndHasBeenSet() const
{
    return m_mXEndHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetTTLBegin() const
{
    return m_tTLBegin;
}

void DescribeRecordFilterListRequest::SetTTLBegin(const uint64_t& _tTLBegin)
{
    m_tTLBegin = _tTLBegin;
    m_tTLBeginHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::TTLBeginHasBeenSet() const
{
    return m_tTLBeginHasBeenSet;
}

uint64_t DescribeRecordFilterListRequest::GetTTLEnd() const
{
    return m_tTLEnd;
}

void DescribeRecordFilterListRequest::SetTTLEnd(const uint64_t& _tTLEnd)
{
    m_tTLEnd = _tTLEnd;
    m_tTLEndHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::TTLEndHasBeenSet() const
{
    return m_tTLEndHasBeenSet;
}

string DescribeRecordFilterListRequest::GetUpdatedAtBegin() const
{
    return m_updatedAtBegin;
}

void DescribeRecordFilterListRequest::SetUpdatedAtBegin(const string& _updatedAtBegin)
{
    m_updatedAtBegin = _updatedAtBegin;
    m_updatedAtBeginHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::UpdatedAtBeginHasBeenSet() const
{
    return m_updatedAtBeginHasBeenSet;
}

string DescribeRecordFilterListRequest::GetUpdatedAtEnd() const
{
    return m_updatedAtEnd;
}

void DescribeRecordFilterListRequest::SetUpdatedAtEnd(const string& _updatedAtEnd)
{
    m_updatedAtEnd = _updatedAtEnd;
    m_updatedAtEndHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::UpdatedAtEndHasBeenSet() const
{
    return m_updatedAtEndHasBeenSet;
}

string DescribeRecordFilterListRequest::GetRemark() const
{
    return m_remark;
}

void DescribeRecordFilterListRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool DescribeRecordFilterListRequest::GetIsExactSubDomain() const
{
    return m_isExactSubDomain;
}

void DescribeRecordFilterListRequest::SetIsExactSubDomain(const bool& _isExactSubDomain)
{
    m_isExactSubDomain = _isExactSubDomain;
    m_isExactSubDomainHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::IsExactSubDomainHasBeenSet() const
{
    return m_isExactSubDomainHasBeenSet;
}

int64_t DescribeRecordFilterListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRecordFilterListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRecordFilterListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}



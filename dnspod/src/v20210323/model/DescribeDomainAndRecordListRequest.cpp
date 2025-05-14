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

#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAndRecordListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeDomainAndRecordListRequest::DescribeDomainAndRecordListRequest() :
    m_allDomainHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_domainIdListHasBeenSet(false),
    m_groupIdListHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_subKeywordHasBeenSet(false),
    m_valueKeywordHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string DescribeDomainAndRecordListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_allDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainIdList.begin(); itr != m_domainIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_groupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdList.begin(); itr != m_groupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_subKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_valueKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_valueKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDomainAndRecordListRequest::GetAllDomain() const
{
    return m_allDomain;
}

void DescribeDomainAndRecordListRequest::SetAllDomain(const string& _allDomain)
{
    m_allDomain = _allDomain;
    m_allDomainHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::AllDomainHasBeenSet() const
{
    return m_allDomainHasBeenSet;
}

vector<string> DescribeDomainAndRecordListRequest::GetDomainList() const
{
    return m_domainList;
}

void DescribeDomainAndRecordListRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

vector<uint64_t> DescribeDomainAndRecordListRequest::GetDomainIdList() const
{
    return m_domainIdList;
}

void DescribeDomainAndRecordListRequest::SetDomainIdList(const vector<uint64_t>& _domainIdList)
{
    m_domainIdList = _domainIdList;
    m_domainIdListHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::DomainIdListHasBeenSet() const
{
    return m_domainIdListHasBeenSet;
}

vector<uint64_t> DescribeDomainAndRecordListRequest::GetGroupIdList() const
{
    return m_groupIdList;
}

void DescribeDomainAndRecordListRequest::SetGroupIdList(const vector<uint64_t>& _groupIdList)
{
    m_groupIdList = _groupIdList;
    m_groupIdListHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::GroupIdListHasBeenSet() const
{
    return m_groupIdListHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetRecordType() const
{
    return m_recordType;
}

void DescribeDomainAndRecordListRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetSubKeyword() const
{
    return m_subKeyword;
}

void DescribeDomainAndRecordListRequest::SetSubKeyword(const string& _subKeyword)
{
    m_subKeyword = _subKeyword;
    m_subKeywordHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::SubKeywordHasBeenSet() const
{
    return m_subKeywordHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetValueKeyword() const
{
    return m_valueKeyword;
}

void DescribeDomainAndRecordListRequest::SetValueKeyword(const string& _valueKeyword)
{
    m_valueKeyword = _valueKeyword;
    m_valueKeywordHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::ValueKeywordHasBeenSet() const
{
    return m_valueKeywordHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetArea() const
{
    return m_area;
}

void DescribeDomainAndRecordListRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetRemark() const
{
    return m_remark;
}

void DescribeDomainAndRecordListRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeDomainAndRecordListRequest::GetEnabled() const
{
    return m_enabled;
}

void DescribeDomainAndRecordListRequest::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DescribeDomainAndRecordListRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}



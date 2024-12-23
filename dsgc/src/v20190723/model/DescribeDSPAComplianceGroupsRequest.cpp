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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAComplianceGroupsRequest::DescribeDSPAComplianceGroupsRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_complianceGroupTypeListHasBeenSet(false),
    m_isFilterCloseComplianceGroupHasBeenSet(false)
{
}

string DescribeDSPAComplianceGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_complianceGroupTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_complianceGroupTypeList.begin(); itr != m_complianceGroupTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isFilterCloseComplianceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilterCloseComplianceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterCloseComplianceGroup, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAComplianceGroupsRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAComplianceGroupsRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAComplianceGroupsRequest::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void DescribeDSPAComplianceGroupsRequest::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string DescribeDSPAComplianceGroupsRequest::GetName() const
{
    return m_name;
}

void DescribeDSPAComplianceGroupsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDSPAComplianceGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPAComplianceGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDSPAComplianceGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPAComplianceGroupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<int64_t> DescribeDSPAComplianceGroupsRequest::GetComplianceGroupTypeList() const
{
    return m_complianceGroupTypeList;
}

void DescribeDSPAComplianceGroupsRequest::SetComplianceGroupTypeList(const vector<int64_t>& _complianceGroupTypeList)
{
    m_complianceGroupTypeList = _complianceGroupTypeList;
    m_complianceGroupTypeListHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::ComplianceGroupTypeListHasBeenSet() const
{
    return m_complianceGroupTypeListHasBeenSet;
}

bool DescribeDSPAComplianceGroupsRequest::GetIsFilterCloseComplianceGroup() const
{
    return m_isFilterCloseComplianceGroup;
}

void DescribeDSPAComplianceGroupsRequest::SetIsFilterCloseComplianceGroup(const bool& _isFilterCloseComplianceGroup)
{
    m_isFilterCloseComplianceGroup = _isFilterCloseComplianceGroup;
    m_isFilterCloseComplianceGroupHasBeenSet = true;
}

bool DescribeDSPAComplianceGroupsRequest::IsFilterCloseComplianceGroupHasBeenSet() const
{
    return m_isFilterCloseComplianceGroupHasBeenSet;
}



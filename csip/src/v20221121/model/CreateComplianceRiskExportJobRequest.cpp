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

#include <tencentcloud/csip/v20221121/model/CreateComplianceRiskExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateComplianceRiskExportJobRequest::CreateComplianceRiskExportJobRequest() :
    m_standardIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_termIDHasBeenSet(false)
{
}

string CreateComplianceRiskExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_standardIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_standardID, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_termIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_termID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateComplianceRiskExportJobRequest::GetStandardID() const
{
    return m_standardID;
}

void CreateComplianceRiskExportJobRequest::SetStandardID(const uint64_t& _standardID)
{
    m_standardID = _standardID;
    m_standardIDHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::StandardIDHasBeenSet() const
{
    return m_standardIDHasBeenSet;
}

vector<string> CreateComplianceRiskExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateComplianceRiskExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> CreateComplianceRiskExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateComplianceRiskExportJobRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t CreateComplianceRiskExportJobRequest::GetLimit() const
{
    return m_limit;
}

void CreateComplianceRiskExportJobRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CreateComplianceRiskExportJobRequest::GetOffset() const
{
    return m_offset;
}

void CreateComplianceRiskExportJobRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string CreateComplianceRiskExportJobRequest::GetOrder() const
{
    return m_order;
}

void CreateComplianceRiskExportJobRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string CreateComplianceRiskExportJobRequest::GetBy() const
{
    return m_by;
}

void CreateComplianceRiskExportJobRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

uint64_t CreateComplianceRiskExportJobRequest::GetTermID() const
{
    return m_termID;
}

void CreateComplianceRiskExportJobRequest::SetTermID(const uint64_t& _termID)
{
    m_termID = _termID;
    m_termIDHasBeenSet = true;
}

bool CreateComplianceRiskExportJobRequest::TermIDHasBeenSet() const
{
    return m_termIDHasBeenSet;
}



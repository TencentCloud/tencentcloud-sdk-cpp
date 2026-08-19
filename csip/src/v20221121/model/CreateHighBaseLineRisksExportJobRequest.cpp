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

#include <tencentcloud/csip/v20221121/model/CreateHighBaseLineRisksExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateHighBaseLineRisksExportJobRequest::CreateHighBaseLineRisksExportJobRequest() :
    m_cloudAccountIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_providerHasBeenSet(false)
{
}

string CreateHighBaseLineRisksExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudAccountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudAccountID.c_str(), allocator).Move(), allocator);
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

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHighBaseLineRisksExportJobRequest::GetCloudAccountID() const
{
    return m_cloudAccountID;
}

void CreateHighBaseLineRisksExportJobRequest::SetCloudAccountID(const string& _cloudAccountID)
{
    m_cloudAccountID = _cloudAccountID;
    m_cloudAccountIDHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::CloudAccountIDHasBeenSet() const
{
    return m_cloudAccountIDHasBeenSet;
}

vector<string> CreateHighBaseLineRisksExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateHighBaseLineRisksExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> CreateHighBaseLineRisksExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateHighBaseLineRisksExportJobRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t CreateHighBaseLineRisksExportJobRequest::GetLimit() const
{
    return m_limit;
}

void CreateHighBaseLineRisksExportJobRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CreateHighBaseLineRisksExportJobRequest::GetOffset() const
{
    return m_offset;
}

void CreateHighBaseLineRisksExportJobRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string CreateHighBaseLineRisksExportJobRequest::GetOrder() const
{
    return m_order;
}

void CreateHighBaseLineRisksExportJobRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string CreateHighBaseLineRisksExportJobRequest::GetBy() const
{
    return m_by;
}

void CreateHighBaseLineRisksExportJobRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string CreateHighBaseLineRisksExportJobRequest::GetProvider() const
{
    return m_provider;
}

void CreateHighBaseLineRisksExportJobRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateHighBaseLineRisksExportJobRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}



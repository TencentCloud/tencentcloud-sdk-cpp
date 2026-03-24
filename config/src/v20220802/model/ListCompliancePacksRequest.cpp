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

#include <tencentcloud/config/v20220802/model/ListCompliancePacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ListCompliancePacksRequest::ListCompliancePacksRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_orderTypeHasBeenSet(false)
{
}

string ListCompliancePacksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLevel.begin(); itr != m_riskLevel.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_complianceResult.begin(); itr != m_complianceResult.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListCompliancePacksRequest::GetLimit() const
{
    return m_limit;
}

void ListCompliancePacksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListCompliancePacksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListCompliancePacksRequest::GetOffset() const
{
    return m_offset;
}

void ListCompliancePacksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListCompliancePacksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ListCompliancePacksRequest::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void ListCompliancePacksRequest::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool ListCompliancePacksRequest::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

vector<uint64_t> ListCompliancePacksRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void ListCompliancePacksRequest::SetRiskLevel(const vector<uint64_t>& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ListCompliancePacksRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ListCompliancePacksRequest::GetStatus() const
{
    return m_status;
}

void ListCompliancePacksRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListCompliancePacksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ListCompliancePacksRequest::GetComplianceResult() const
{
    return m_complianceResult;
}

void ListCompliancePacksRequest::SetComplianceResult(const vector<string>& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ListCompliancePacksRequest::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

string ListCompliancePacksRequest::GetOrderType() const
{
    return m_orderType;
}

void ListCompliancePacksRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListCompliancePacksRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}



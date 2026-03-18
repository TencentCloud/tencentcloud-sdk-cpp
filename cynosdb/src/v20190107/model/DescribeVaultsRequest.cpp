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

#include <tencentcloud/cynosdb/v20190107/model/DescribeVaultsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeVaultsRequest::DescribeVaultsRequest() :
    m_vaultIdsHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeVaultsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vaultIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vaultIds.begin(); itr != m_vaultIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vaultNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vaultName.c_str(), allocator).Move(), allocator);
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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeVaultsRequest::GetVaultIds() const
{
    return m_vaultIds;
}

void DescribeVaultsRequest::SetVaultIds(const vector<string>& _vaultIds)
{
    m_vaultIds = _vaultIds;
    m_vaultIdsHasBeenSet = true;
}

bool DescribeVaultsRequest::VaultIdsHasBeenSet() const
{
    return m_vaultIdsHasBeenSet;
}

string DescribeVaultsRequest::GetVaultName() const
{
    return m_vaultName;
}

void DescribeVaultsRequest::SetVaultName(const string& _vaultName)
{
    m_vaultName = _vaultName;
    m_vaultNameHasBeenSet = true;
}

bool DescribeVaultsRequest::VaultNameHasBeenSet() const
{
    return m_vaultNameHasBeenSet;
}

vector<string> DescribeVaultsRequest::GetStatus() const
{
    return m_status;
}

void DescribeVaultsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeVaultsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeVaultsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVaultsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVaultsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeVaultsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVaultsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVaultsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeVaultsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeVaultsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeVaultsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeVaultsRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeVaultsRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeVaultsRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}



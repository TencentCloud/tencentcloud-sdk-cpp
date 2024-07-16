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

#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOrdersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DescribeDedicatedClusterOrdersRequest::DescribeDedicatedClusterOrdersRequest() :
    m_dedicatedClusterIdsHasBeenSet(false),
    m_dedicatedClusterOrderIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_orderTypesHasBeenSet(false)
{
}

string DescribeDedicatedClusterOrdersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dedicatedClusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dedicatedClusterIds.begin(); itr != m_dedicatedClusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dedicatedClusterOrderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterOrderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterOrderIds.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderTypes.begin(); itr != m_orderTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDedicatedClusterOrdersRequest::GetDedicatedClusterIds() const
{
    return m_dedicatedClusterIds;
}

void DescribeDedicatedClusterOrdersRequest::SetDedicatedClusterIds(const vector<string>& _dedicatedClusterIds)
{
    m_dedicatedClusterIds = _dedicatedClusterIds;
    m_dedicatedClusterIdsHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::DedicatedClusterIdsHasBeenSet() const
{
    return m_dedicatedClusterIdsHasBeenSet;
}

string DescribeDedicatedClusterOrdersRequest::GetDedicatedClusterOrderIds() const
{
    return m_dedicatedClusterOrderIds;
}

void DescribeDedicatedClusterOrdersRequest::SetDedicatedClusterOrderIds(const string& _dedicatedClusterOrderIds)
{
    m_dedicatedClusterOrderIds = _dedicatedClusterOrderIds;
    m_dedicatedClusterOrderIdsHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::DedicatedClusterOrderIdsHasBeenSet() const
{
    return m_dedicatedClusterOrderIdsHasBeenSet;
}

int64_t DescribeDedicatedClusterOrdersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDedicatedClusterOrdersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDedicatedClusterOrdersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDedicatedClusterOrdersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDedicatedClusterOrdersRequest::GetStatus() const
{
    return m_status;
}

void DescribeDedicatedClusterOrdersRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDedicatedClusterOrdersRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeDedicatedClusterOrdersRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

vector<string> DescribeDedicatedClusterOrdersRequest::GetOrderTypes() const
{
    return m_orderTypes;
}

void DescribeDedicatedClusterOrdersRequest::SetOrderTypes(const vector<string>& _orderTypes)
{
    m_orderTypes = _orderTypes;
    m_orderTypesHasBeenSet = true;
}

bool DescribeDedicatedClusterOrdersRequest::OrderTypesHasBeenSet() const
{
    return m_orderTypesHasBeenSet;
}



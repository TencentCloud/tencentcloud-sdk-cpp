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

#include <tencentcloud/dts/v20211206/model/DescribeSubscribeJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeSubscribeJobsRequest::DescribeSubscribeJobsRequest() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeIdsHasBeenSet(false),
    m_subscribeNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subsStatusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeSubscribeJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeIds.begin(); itr != m_subscribeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subscribeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payType, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
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

    if (m_subsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubsStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subsStatus.begin(); itr != m_subsStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
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


string DescribeSubscribeJobsRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void DescribeSubscribeJobsRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

vector<string> DescribeSubscribeJobsRequest::GetSubscribeIds() const
{
    return m_subscribeIds;
}

void DescribeSubscribeJobsRequest::SetSubscribeIds(const vector<string>& _subscribeIds)
{
    m_subscribeIds = _subscribeIds;
    m_subscribeIdsHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::SubscribeIdsHasBeenSet() const
{
    return m_subscribeIdsHasBeenSet;
}

string DescribeSubscribeJobsRequest::GetSubscribeName() const
{
    return m_subscribeName;
}

void DescribeSubscribeJobsRequest::SetSubscribeName(const string& _subscribeName)
{
    m_subscribeName = _subscribeName;
    m_subscribeNameHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::SubscribeNameHasBeenSet() const
{
    return m_subscribeNameHasBeenSet;
}

string DescribeSubscribeJobsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSubscribeJobsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSubscribeJobsRequest::GetTopic() const
{
    return m_topic;
}

void DescribeSubscribeJobsRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t DescribeSubscribeJobsRequest::GetPayType() const
{
    return m_payType;
}

void DescribeSubscribeJobsRequest::SetPayType(const int64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string DescribeSubscribeJobsRequest::GetProduct() const
{
    return m_product;
}

void DescribeSubscribeJobsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> DescribeSubscribeJobsRequest::GetStatus() const
{
    return m_status;
}

void DescribeSubscribeJobsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeSubscribeJobsRequest::GetSubsStatus() const
{
    return m_subsStatus;
}

void DescribeSubscribeJobsRequest::SetSubsStatus(const vector<string>& _subsStatus)
{
    m_subsStatus = _subsStatus;
    m_subsStatusHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::SubsStatusHasBeenSet() const
{
    return m_subsStatusHasBeenSet;
}

int64_t DescribeSubscribeJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSubscribeJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSubscribeJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSubscribeJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSubscribeJobsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeSubscribeJobsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

vector<TagFilter> DescribeSubscribeJobsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeSubscribeJobsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeSubscribeJobsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}



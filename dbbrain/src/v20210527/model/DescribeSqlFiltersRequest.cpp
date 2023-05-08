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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlFiltersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSqlFiltersRequest::DescribeSqlFiltersRequest() :
    m_instanceIdHasBeenSet(false),
    m_filterIdsHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeSqlFiltersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterIds.begin(); itr != m_filterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSqlFiltersRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSqlFiltersRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<int64_t> DescribeSqlFiltersRequest::GetFilterIds() const
{
    return m_filterIds;
}

void DescribeSqlFiltersRequest::SetFilterIds(const vector<int64_t>& _filterIds)
{
    m_filterIds = _filterIds;
    m_filterIdsHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::FilterIdsHasBeenSet() const
{
    return m_filterIdsHasBeenSet;
}

vector<string> DescribeSqlFiltersRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeSqlFiltersRequest::SetStatuses(const vector<string>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

int64_t DescribeSqlFiltersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSqlFiltersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSqlFiltersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSqlFiltersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSqlFiltersRequest::GetProduct() const
{
    return m_product;
}

void DescribeSqlFiltersRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSqlFiltersRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}



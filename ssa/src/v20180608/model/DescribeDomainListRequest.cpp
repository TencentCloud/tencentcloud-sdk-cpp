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

#include <tencentcloud/ssa/v20180608/model/DescribeDomainListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeDomainListRequest::DescribeDomainListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_assetBasicTypeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_timeRangeHasBeenSet(false),
    m_logicHasBeenSet(false),
    m_groupByFieldHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_requestFromHasBeenSet(false)
{
}

string DescribeDomainListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_assetBasicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetBasicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetBasicType, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_field.begin(); itr != m_field.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeRange, allocator);
    }

    if (m_logicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logic, allocator);
    }

    if (m_groupByFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupByField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupByField.c_str(), allocator).Move(), allocator);
    }

    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_task.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestFrom, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDomainListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDomainListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDomainListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDomainListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDomainListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDomainListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeDomainListRequest::GetAssetBasicType() const
{
    return m_assetBasicType;
}

void DescribeDomainListRequest::SetAssetBasicType(const uint64_t& _assetBasicType)
{
    m_assetBasicType = _assetBasicType;
    m_assetBasicTypeHasBeenSet = true;
}

bool DescribeDomainListRequest::AssetBasicTypeHasBeenSet() const
{
    return m_assetBasicTypeHasBeenSet;
}

vector<QueryFilterV3> DescribeDomainListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeDomainListRequest::SetFilter(const vector<QueryFilterV3>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeDomainListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeDomainListRequest::GetOrder() const
{
    return m_order;
}

void DescribeDomainListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDomainListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDomainListRequest::GetBy() const
{
    return m_by;
}

void DescribeDomainListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeDomainListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

vector<string> DescribeDomainListRequest::GetField() const
{
    return m_field;
}

void DescribeDomainListRequest::SetField(const vector<string>& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeDomainListRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

uint64_t DescribeDomainListRequest::GetTimeRange() const
{
    return m_timeRange;
}

void DescribeDomainListRequest::SetTimeRange(const uint64_t& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool DescribeDomainListRequest::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

uint64_t DescribeDomainListRequest::GetLogic() const
{
    return m_logic;
}

void DescribeDomainListRequest::SetLogic(const uint64_t& _logic)
{
    m_logic = _logic;
    m_logicHasBeenSet = true;
}

bool DescribeDomainListRequest::LogicHasBeenSet() const
{
    return m_logicHasBeenSet;
}

string DescribeDomainListRequest::GetGroupByField() const
{
    return m_groupByField;
}

void DescribeDomainListRequest::SetGroupByField(const string& _groupByField)
{
    m_groupByField = _groupByField;
    m_groupByFieldHasBeenSet = true;
}

bool DescribeDomainListRequest::GroupByFieldHasBeenSet() const
{
    return m_groupByFieldHasBeenSet;
}

string DescribeDomainListRequest::GetTask() const
{
    return m_task;
}

void DescribeDomainListRequest::SetTask(const string& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool DescribeDomainListRequest::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

uint64_t DescribeDomainListRequest::GetRequestFrom() const
{
    return m_requestFrom;
}

void DescribeDomainListRequest::SetRequestFrom(const uint64_t& _requestFrom)
{
    m_requestFrom = _requestFrom;
    m_requestFromHasBeenSet = true;
}

bool DescribeDomainListRequest::RequestFromHasBeenSet() const
{
    return m_requestFromHasBeenSet;
}



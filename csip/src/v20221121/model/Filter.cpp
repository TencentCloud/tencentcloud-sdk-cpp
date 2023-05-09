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

#include <tencentcloud/csip/v20221121/model/Filter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

Filter::Filter() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome Filter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.Order` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_order = string(value["Order"].GetString());
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("By") && !value["By"].IsNull())
    {
        if (!value["By"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.By` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_by = string(value["By"].GetString());
        m_byHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Filter.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WhereFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Filter.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Filter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t Filter::GetLimit() const
{
    return m_limit;
}

void Filter::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool Filter::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t Filter::GetOffset() const
{
    return m_offset;
}

void Filter::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool Filter::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string Filter::GetOrder() const
{
    return m_order;
}

void Filter::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool Filter::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string Filter::GetBy() const
{
    return m_by;
}

void Filter::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool Filter::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

vector<WhereFilter> Filter::GetFilters() const
{
    return m_filters;
}

void Filter::SetFilters(const vector<WhereFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool Filter::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string Filter::GetStartTime() const
{
    return m_startTime;
}

void Filter::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Filter::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Filter::GetEndTime() const
{
    return m_endTime;
}

void Filter::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Filter::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


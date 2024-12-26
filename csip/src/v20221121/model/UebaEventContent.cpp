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

#include <tencentcloud/csip/v20221121/model/UebaEventContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UebaEventContent::UebaEventContent() :
    m_eventTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_statisticalFilterHasBeenSet(false)
{
}

CoreInternalOutcome UebaEventContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaEventContent.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaEventContent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UebaEventContent.Filters` is not array type"));

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

    if (value.HasMember("StatisticalFilter") && !value["StatisticalFilter"].IsNull())
    {
        if (!value["StatisticalFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UebaEventContent.StatisticalFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statisticalFilter.Deserialize(value["StatisticalFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticalFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UebaEventContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
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

    if (m_statisticalFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticalFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statisticalFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t UebaEventContent::GetEventType() const
{
    return m_eventType;
}

void UebaEventContent::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool UebaEventContent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string UebaEventContent::GetContent() const
{
    return m_content;
}

void UebaEventContent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UebaEventContent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<WhereFilter> UebaEventContent::GetFilters() const
{
    return m_filters;
}

void UebaEventContent::SetFilters(const vector<WhereFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool UebaEventContent::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

StatisticalFilter UebaEventContent::GetStatisticalFilter() const
{
    return m_statisticalFilter;
}

void UebaEventContent::SetStatisticalFilter(const StatisticalFilter& _statisticalFilter)
{
    m_statisticalFilter = _statisticalFilter;
    m_statisticalFilterHasBeenSet = true;
}

bool UebaEventContent::StatisticalFilterHasBeenSet() const
{
    return m_statisticalFilterHasBeenSet;
}


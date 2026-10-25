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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventRankRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMEventRankRequest::DescribeTDEMEventRankRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_eventTypesHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_costTypeHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_categoryKeysHasBeenSet(false)
{
}

string DescribeTDEMEventRankRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventTypes.begin(); itr != m_eventTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_costTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_costType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupBy.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryKeys.begin(); itr != m_categoryKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMEventRankRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMEventRankRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMEventRankRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMEventRankRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMEventRankRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMEventRankRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetKind() const
{
    return m_kind;
}

void DescribeTDEMEventRankRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

vector<string> DescribeTDEMEventRankRequest::GetEventTypes() const
{
    return m_eventTypes;
}

void DescribeTDEMEventRankRequest::SetEventTypes(const vector<string>& _eventTypes)
{
    m_eventTypes = _eventTypes;
    m_eventTypesHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::EventTypesHasBeenSet() const
{
    return m_eventTypesHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeTDEMEventRankRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

int64_t DescribeTDEMEventRankRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMEventRankRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeTDEMEventRankRequest::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMEventRankRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetCostType() const
{
    return m_costType;
}

void DescribeTDEMEventRankRequest::SetCostType(const string& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeTDEMEventRankRequest::SetGroupBy(const string& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

string DescribeTDEMEventRankRequest::GetProjectType() const
{
    return m_projectType;
}

void DescribeTDEMEventRankRequest::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

vector<string> DescribeTDEMEventRankRequest::GetCategoryKeys() const
{
    return m_categoryKeys;
}

void DescribeTDEMEventRankRequest::SetCategoryKeys(const vector<string>& _categoryKeys)
{
    m_categoryKeys = _categoryKeys;
    m_categoryKeysHasBeenSet = true;
}

bool DescribeTDEMEventRankRequest::CategoryKeysHasBeenSet() const
{
    return m_categoryKeysHasBeenSet;
}



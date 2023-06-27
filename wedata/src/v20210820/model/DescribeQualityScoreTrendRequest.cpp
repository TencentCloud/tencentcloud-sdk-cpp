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

#include <tencentcloud/wedata/v20210820/model/DescribeQualityScoreTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeQualityScoreTrendRequest::DescribeQualityScoreTrendRequest() :
    m_statisticsStartDateHasBeenSet(false),
    m_statisticsEndDateHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_scoreTypeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeQualityScoreTrendRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statisticsStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statisticsStartDate, allocator);
    }

    if (m_statisticsEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statisticsEndDate, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scoreType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeQualityScoreTrendRequest::GetStatisticsStartDate() const
{
    return m_statisticsStartDate;
}

void DescribeQualityScoreTrendRequest::SetStatisticsStartDate(const int64_t& _statisticsStartDate)
{
    m_statisticsStartDate = _statisticsStartDate;
    m_statisticsStartDateHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::StatisticsStartDateHasBeenSet() const
{
    return m_statisticsStartDateHasBeenSet;
}

int64_t DescribeQualityScoreTrendRequest::GetStatisticsEndDate() const
{
    return m_statisticsEndDate;
}

void DescribeQualityScoreTrendRequest::SetStatisticsEndDate(const int64_t& _statisticsEndDate)
{
    m_statisticsEndDate = _statisticsEndDate;
    m_statisticsEndDateHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::StatisticsEndDateHasBeenSet() const
{
    return m_statisticsEndDateHasBeenSet;
}

string DescribeQualityScoreTrendRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeQualityScoreTrendRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeQualityScoreTrendRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void DescribeQualityScoreTrendRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string DescribeQualityScoreTrendRequest::GetScoreType() const
{
    return m_scoreType;
}

void DescribeQualityScoreTrendRequest::SetScoreType(const string& _scoreType)
{
    m_scoreType = _scoreType;
    m_scoreTypeHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::ScoreTypeHasBeenSet() const
{
    return m_scoreTypeHasBeenSet;
}

vector<Filter> DescribeQualityScoreTrendRequest::GetFilters() const
{
    return m_filters;
}

void DescribeQualityScoreTrendRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeQualityScoreTrendRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}



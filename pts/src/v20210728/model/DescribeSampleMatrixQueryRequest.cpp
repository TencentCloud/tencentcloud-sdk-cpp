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

#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixQueryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeSampleMatrixQueryRequest::DescribeSampleMatrixQueryRequest() :
    m_jobIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_aggregationHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_maxPointHasBeenSet(false)
{
}

string DescribeSampleMatrixQueryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aggregation.c_str(), allocator).Move(), allocator);
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

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupBy.begin(); itr != m_groupBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPoint, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSampleMatrixQueryRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeSampleMatrixQueryRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeSampleMatrixQueryRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSampleMatrixQueryRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSampleMatrixQueryRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void DescribeSampleMatrixQueryRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string DescribeSampleMatrixQueryRequest::GetMetric() const
{
    return m_metric;
}

void DescribeSampleMatrixQueryRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeSampleMatrixQueryRequest::GetAggregation() const
{
    return m_aggregation;
}

void DescribeSampleMatrixQueryRequest::SetAggregation(const string& _aggregation)
{
    m_aggregation = _aggregation;
    m_aggregationHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::AggregationHasBeenSet() const
{
    return m_aggregationHasBeenSet;
}

vector<Filter> DescribeSampleMatrixQueryRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSampleMatrixQueryRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeSampleMatrixQueryRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeSampleMatrixQueryRequest::SetGroupBy(const vector<string>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

int64_t DescribeSampleMatrixQueryRequest::GetMaxPoint() const
{
    return m_maxPoint;
}

void DescribeSampleMatrixQueryRequest::SetMaxPoint(const int64_t& _maxPoint)
{
    m_maxPoint = _maxPoint;
    m_maxPointHasBeenSet = true;
}

bool DescribeSampleMatrixQueryRequest::MaxPointHasBeenSet() const
{
    return m_maxPointHasBeenSet;
}



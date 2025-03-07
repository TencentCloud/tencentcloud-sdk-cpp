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

#include <tencentcloud/pts/v20210728/model/DescribeSampleMatrixBatchQueryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeSampleMatrixBatchQueryRequest::DescribeSampleMatrixBatchQueryRequest() :
    m_jobIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_queriesHasBeenSet(false),
    m_maxPointHasBeenSet(false)
{
}

string DescribeSampleMatrixBatchQueryRequest::ToJsonString() const
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

    if (m_queriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queries.begin(); itr != m_queries.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


string DescribeSampleMatrixBatchQueryRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeSampleMatrixBatchQueryRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeSampleMatrixBatchQueryRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeSampleMatrixBatchQueryRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSampleMatrixBatchQueryRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSampleMatrixBatchQueryRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSampleMatrixBatchQueryRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void DescribeSampleMatrixBatchQueryRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool DescribeSampleMatrixBatchQueryRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

vector<InternalMetricQuery> DescribeSampleMatrixBatchQueryRequest::GetQueries() const
{
    return m_queries;
}

void DescribeSampleMatrixBatchQueryRequest::SetQueries(const vector<InternalMetricQuery>& _queries)
{
    m_queries = _queries;
    m_queriesHasBeenSet = true;
}

bool DescribeSampleMatrixBatchQueryRequest::QueriesHasBeenSet() const
{
    return m_queriesHasBeenSet;
}

int64_t DescribeSampleMatrixBatchQueryRequest::GetMaxPoint() const
{
    return m_maxPoint;
}

void DescribeSampleMatrixBatchQueryRequest::SetMaxPoint(const int64_t& _maxPoint)
{
    m_maxPoint = _maxPoint;
    m_maxPointHasBeenSet = true;
}

bool DescribeSampleMatrixBatchQueryRequest::MaxPointHasBeenSet() const
{
    return m_maxPointHasBeenSet;
}



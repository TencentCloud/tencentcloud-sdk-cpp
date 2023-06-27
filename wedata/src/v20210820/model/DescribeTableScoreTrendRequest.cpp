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

#include <tencentcloud/wedata/v20210820/model/DescribeTableScoreTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableScoreTrendRequest::DescribeTableScoreTrendRequest() :
    m_projectIdHasBeenSet(false),
    m_statisticsStartDateHasBeenSet(false),
    m_statisticsEndDateHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_scoreTypeHasBeenSet(false)
{
}

string DescribeTableScoreTrendRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scoreType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableScoreTrendRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTableScoreTrendRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTableScoreTrendRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeTableScoreTrendRequest::GetStatisticsStartDate() const
{
    return m_statisticsStartDate;
}

void DescribeTableScoreTrendRequest::SetStatisticsStartDate(const int64_t& _statisticsStartDate)
{
    m_statisticsStartDate = _statisticsStartDate;
    m_statisticsStartDateHasBeenSet = true;
}

bool DescribeTableScoreTrendRequest::StatisticsStartDateHasBeenSet() const
{
    return m_statisticsStartDateHasBeenSet;
}

int64_t DescribeTableScoreTrendRequest::GetStatisticsEndDate() const
{
    return m_statisticsEndDate;
}

void DescribeTableScoreTrendRequest::SetStatisticsEndDate(const int64_t& _statisticsEndDate)
{
    m_statisticsEndDate = _statisticsEndDate;
    m_statisticsEndDateHasBeenSet = true;
}

bool DescribeTableScoreTrendRequest::StatisticsEndDateHasBeenSet() const
{
    return m_statisticsEndDateHasBeenSet;
}

string DescribeTableScoreTrendRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeTableScoreTrendRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeTableScoreTrendRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string DescribeTableScoreTrendRequest::GetScoreType() const
{
    return m_scoreType;
}

void DescribeTableScoreTrendRequest::SetScoreType(const string& _scoreType)
{
    m_scoreType = _scoreType;
    m_scoreTypeHasBeenSet = true;
}

bool DescribeTableScoreTrendRequest::ScoreTypeHasBeenSet() const
{
    return m_scoreTypeHasBeenSet;
}



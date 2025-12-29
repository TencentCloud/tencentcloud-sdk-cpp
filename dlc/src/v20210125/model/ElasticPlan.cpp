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

#include <tencentcloud/dlc/v20210125/model/ElasticPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ElasticPlan::ElasticPlan() :
    m_minElasticClustersHasBeenSet(false),
    m_maxElasticClustersHasBeenSet(false),
    m_tolerableQueueTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_elasticLimitHasBeenSet(false)
{
}

CoreInternalOutcome ElasticPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinElasticClusters") && !value["MinElasticClusters"].IsNull())
    {
        if (!value["MinElasticClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.MinElasticClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minElasticClusters = value["MinElasticClusters"].GetInt64();
        m_minElasticClustersHasBeenSet = true;
    }

    if (value.HasMember("MaxElasticClusters") && !value["MaxElasticClusters"].IsNull())
    {
        if (!value["MaxElasticClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.MaxElasticClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxElasticClusters = value["MaxElasticClusters"].GetInt64();
        m_maxElasticClustersHasBeenSet = true;
    }

    if (value.HasMember("TolerableQueueTime") && !value["TolerableQueueTime"].IsNull())
    {
        if (!value["TolerableQueueTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.TolerableQueueTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tolerableQueueTime = value["TolerableQueueTime"].GetInt64();
        m_tolerableQueueTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ElasticLimit") && !value["ElasticLimit"].IsNull())
    {
        if (!value["ElasticLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticPlan.ElasticLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticLimit = value["ElasticLimit"].GetInt64();
        m_elasticLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElasticPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minElasticClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinElasticClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minElasticClusters, allocator);
    }

    if (m_maxElasticClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxElasticClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxElasticClusters, allocator);
    }

    if (m_tolerableQueueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TolerableQueueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tolerableQueueTime, allocator);
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

    if (m_elasticLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticLimit, allocator);
    }

}


int64_t ElasticPlan::GetMinElasticClusters() const
{
    return m_minElasticClusters;
}

void ElasticPlan::SetMinElasticClusters(const int64_t& _minElasticClusters)
{
    m_minElasticClusters = _minElasticClusters;
    m_minElasticClustersHasBeenSet = true;
}

bool ElasticPlan::MinElasticClustersHasBeenSet() const
{
    return m_minElasticClustersHasBeenSet;
}

int64_t ElasticPlan::GetMaxElasticClusters() const
{
    return m_maxElasticClusters;
}

void ElasticPlan::SetMaxElasticClusters(const int64_t& _maxElasticClusters)
{
    m_maxElasticClusters = _maxElasticClusters;
    m_maxElasticClustersHasBeenSet = true;
}

bool ElasticPlan::MaxElasticClustersHasBeenSet() const
{
    return m_maxElasticClustersHasBeenSet;
}

int64_t ElasticPlan::GetTolerableQueueTime() const
{
    return m_tolerableQueueTime;
}

void ElasticPlan::SetTolerableQueueTime(const int64_t& _tolerableQueueTime)
{
    m_tolerableQueueTime = _tolerableQueueTime;
    m_tolerableQueueTimeHasBeenSet = true;
}

bool ElasticPlan::TolerableQueueTimeHasBeenSet() const
{
    return m_tolerableQueueTimeHasBeenSet;
}

string ElasticPlan::GetStartTime() const
{
    return m_startTime;
}

void ElasticPlan::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ElasticPlan::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ElasticPlan::GetEndTime() const
{
    return m_endTime;
}

void ElasticPlan::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ElasticPlan::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ElasticPlan::GetElasticLimit() const
{
    return m_elasticLimit;
}

void ElasticPlan::SetElasticLimit(const int64_t& _elasticLimit)
{
    m_elasticLimit = _elasticLimit;
    m_elasticLimitHasBeenSet = true;
}

bool ElasticPlan::ElasticLimitHasBeenSet() const
{
    return m_elasticLimitHasBeenSet;
}


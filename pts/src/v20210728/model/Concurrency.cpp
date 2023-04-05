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

#include <tencentcloud/pts/v20210728/model/Concurrency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

Concurrency::Concurrency() :
    m_stagesHasBeenSet(false),
    m_iterationCountHasBeenSet(false),
    m_maxRequestsPerSecondHasBeenSet(false),
    m_gracefulStopSecondsHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

CoreInternalOutcome Concurrency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stages") && !value["Stages"].IsNull())
    {
        if (!value["Stages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Concurrency.Stages` is not array type"));

        const rapidjson::Value &tmpValue = value["Stages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Stage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stages.push_back(item);
        }
        m_stagesHasBeenSet = true;
    }

    if (value.HasMember("IterationCount") && !value["IterationCount"].IsNull())
    {
        if (!value["IterationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Concurrency.IterationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iterationCount = value["IterationCount"].GetInt64();
        m_iterationCountHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestsPerSecond") && !value["MaxRequestsPerSecond"].IsNull())
    {
        if (!value["MaxRequestsPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Concurrency.MaxRequestsPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestsPerSecond = value["MaxRequestsPerSecond"].GetInt64();
        m_maxRequestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("GracefulStopSeconds") && !value["GracefulStopSeconds"].IsNull())
    {
        if (!value["GracefulStopSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Concurrency.GracefulStopSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gracefulStopSeconds = value["GracefulStopSeconds"].GetInt64();
        m_gracefulStopSecondsHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Concurrency.Resources` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resources = value["Resources"].GetInt64();
        m_resourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Concurrency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stages.begin(); itr != m_stages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iterationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IterationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iterationCount, allocator);
    }

    if (m_maxRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestsPerSecond, allocator);
    }

    if (m_gracefulStopSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GracefulStopSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gracefulStopSeconds, allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resources, allocator);
    }

}


vector<Stage> Concurrency::GetStages() const
{
    return m_stages;
}

void Concurrency::SetStages(const vector<Stage>& _stages)
{
    m_stages = _stages;
    m_stagesHasBeenSet = true;
}

bool Concurrency::StagesHasBeenSet() const
{
    return m_stagesHasBeenSet;
}

int64_t Concurrency::GetIterationCount() const
{
    return m_iterationCount;
}

void Concurrency::SetIterationCount(const int64_t& _iterationCount)
{
    m_iterationCount = _iterationCount;
    m_iterationCountHasBeenSet = true;
}

bool Concurrency::IterationCountHasBeenSet() const
{
    return m_iterationCountHasBeenSet;
}

int64_t Concurrency::GetMaxRequestsPerSecond() const
{
    return m_maxRequestsPerSecond;
}

void Concurrency::SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond)
{
    m_maxRequestsPerSecond = _maxRequestsPerSecond;
    m_maxRequestsPerSecondHasBeenSet = true;
}

bool Concurrency::MaxRequestsPerSecondHasBeenSet() const
{
    return m_maxRequestsPerSecondHasBeenSet;
}

int64_t Concurrency::GetGracefulStopSeconds() const
{
    return m_gracefulStopSeconds;
}

void Concurrency::SetGracefulStopSeconds(const int64_t& _gracefulStopSeconds)
{
    m_gracefulStopSeconds = _gracefulStopSeconds;
    m_gracefulStopSecondsHasBeenSet = true;
}

bool Concurrency::GracefulStopSecondsHasBeenSet() const
{
    return m_gracefulStopSecondsHasBeenSet;
}

int64_t Concurrency::GetResources() const
{
    return m_resources;
}

void Concurrency::SetResources(const int64_t& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool Concurrency::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}


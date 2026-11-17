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

#include <tencentcloud/databuddy/v20260715/model/AutoMlConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AutoMlConf::AutoMlConf() :
    m_evaluationMetricHasBeenSet(false),
    m_searchSpaceHasBeenSet(false),
    m_maxRuntimeMinutesHasBeenSet(false),
    m_maxRunCountHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false)
{
}

CoreInternalOutcome AutoMlConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvaluationMetric") && !value["EvaluationMetric"].IsNull())
    {
        if (!value["EvaluationMetric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMlConf.EvaluationMetric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evaluationMetric = string(value["EvaluationMetric"].GetString());
        m_evaluationMetricHasBeenSet = true;
    }

    if (value.HasMember("SearchSpace") && !value["SearchSpace"].IsNull())
    {
        if (!value["SearchSpace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoMlConf.SearchSpace` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchSpace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_searchSpace.push_back((*itr).GetString());
        }
        m_searchSpaceHasBeenSet = true;
    }

    if (value.HasMember("MaxRuntimeMinutes") && !value["MaxRuntimeMinutes"].IsNull())
    {
        if (!value["MaxRuntimeMinutes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMlConf.MaxRuntimeMinutes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRuntimeMinutes = value["MaxRuntimeMinutes"].GetInt64();
        m_maxRuntimeMinutesHasBeenSet = true;
    }

    if (value.HasMember("MaxRunCount") && !value["MaxRunCount"].IsNull())
    {
        if (!value["MaxRunCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMlConf.MaxRunCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRunCount = value["MaxRunCount"].GetInt64();
        m_maxRunCountHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMlConf.MaxConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetInt64();
        m_maxConcurrencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoMlConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evaluationMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evaluationMetric.c_str(), allocator).Move(), allocator);
    }

    if (m_searchSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchSpace.begin(); itr != m_searchSpace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxRuntimeMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRuntimeMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRuntimeMinutes, allocator);
    }

    if (m_maxRunCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRunCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRunCount, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

}


string AutoMlConf::GetEvaluationMetric() const
{
    return m_evaluationMetric;
}

void AutoMlConf::SetEvaluationMetric(const string& _evaluationMetric)
{
    m_evaluationMetric = _evaluationMetric;
    m_evaluationMetricHasBeenSet = true;
}

bool AutoMlConf::EvaluationMetricHasBeenSet() const
{
    return m_evaluationMetricHasBeenSet;
}

vector<string> AutoMlConf::GetSearchSpace() const
{
    return m_searchSpace;
}

void AutoMlConf::SetSearchSpace(const vector<string>& _searchSpace)
{
    m_searchSpace = _searchSpace;
    m_searchSpaceHasBeenSet = true;
}

bool AutoMlConf::SearchSpaceHasBeenSet() const
{
    return m_searchSpaceHasBeenSet;
}

int64_t AutoMlConf::GetMaxRuntimeMinutes() const
{
    return m_maxRuntimeMinutes;
}

void AutoMlConf::SetMaxRuntimeMinutes(const int64_t& _maxRuntimeMinutes)
{
    m_maxRuntimeMinutes = _maxRuntimeMinutes;
    m_maxRuntimeMinutesHasBeenSet = true;
}

bool AutoMlConf::MaxRuntimeMinutesHasBeenSet() const
{
    return m_maxRuntimeMinutesHasBeenSet;
}

int64_t AutoMlConf::GetMaxRunCount() const
{
    return m_maxRunCount;
}

void AutoMlConf::SetMaxRunCount(const int64_t& _maxRunCount)
{
    m_maxRunCount = _maxRunCount;
    m_maxRunCountHasBeenSet = true;
}

bool AutoMlConf::MaxRunCountHasBeenSet() const
{
    return m_maxRunCountHasBeenSet;
}

int64_t AutoMlConf::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void AutoMlConf::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool AutoMlConf::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}


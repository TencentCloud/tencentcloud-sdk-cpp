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

#include <tencentcloud/teo/v20220901/model/AlgDetectJS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AlgDetectJS::AlgDetectJS() :
    m_nameHasBeenSet(false),
    m_workLevelHasBeenSet(false),
    m_executeModeHasBeenSet(false),
    m_invalidStatTimeHasBeenSet(false),
    m_invalidThresholdHasBeenSet(false),
    m_algDetectResultsHasBeenSet(false)
{
}

CoreInternalOutcome AlgDetectJS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("WorkLevel") && !value["WorkLevel"].IsNull())
    {
        if (!value["WorkLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.WorkLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workLevel = string(value["WorkLevel"].GetString());
        m_workLevelHasBeenSet = true;
    }

    if (value.HasMember("ExecuteMode") && !value["ExecuteMode"].IsNull())
    {
        if (!value["ExecuteMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.ExecuteMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executeMode = value["ExecuteMode"].GetInt64();
        m_executeModeHasBeenSet = true;
    }

    if (value.HasMember("InvalidStatTime") && !value["InvalidStatTime"].IsNull())
    {
        if (!value["InvalidStatTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.InvalidStatTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidStatTime = value["InvalidStatTime"].GetInt64();
        m_invalidStatTimeHasBeenSet = true;
    }

    if (value.HasMember("InvalidThreshold") && !value["InvalidThreshold"].IsNull())
    {
        if (!value["InvalidThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.InvalidThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidThreshold = value["InvalidThreshold"].GetInt64();
        m_invalidThresholdHasBeenSet = true;
    }

    if (value.HasMember("AlgDetectResults") && !value["AlgDetectResults"].IsNull())
    {
        if (!value["AlgDetectResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlgDetectJS.AlgDetectResults` is not array type"));

        const rapidjson::Value &tmpValue = value["AlgDetectResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlgDetectResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_algDetectResults.push_back(item);
        }
        m_algDetectResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgDetectJS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_workLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_executeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeMode, allocator);
    }

    if (m_invalidStatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidStatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidStatTime, allocator);
    }

    if (m_invalidThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidThreshold, allocator);
    }

    if (m_algDetectResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgDetectResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_algDetectResults.begin(); itr != m_algDetectResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AlgDetectJS::GetName() const
{
    return m_name;
}

void AlgDetectJS::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlgDetectJS::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlgDetectJS::GetWorkLevel() const
{
    return m_workLevel;
}

void AlgDetectJS::SetWorkLevel(const string& _workLevel)
{
    m_workLevel = _workLevel;
    m_workLevelHasBeenSet = true;
}

bool AlgDetectJS::WorkLevelHasBeenSet() const
{
    return m_workLevelHasBeenSet;
}

int64_t AlgDetectJS::GetExecuteMode() const
{
    return m_executeMode;
}

void AlgDetectJS::SetExecuteMode(const int64_t& _executeMode)
{
    m_executeMode = _executeMode;
    m_executeModeHasBeenSet = true;
}

bool AlgDetectJS::ExecuteModeHasBeenSet() const
{
    return m_executeModeHasBeenSet;
}

int64_t AlgDetectJS::GetInvalidStatTime() const
{
    return m_invalidStatTime;
}

void AlgDetectJS::SetInvalidStatTime(const int64_t& _invalidStatTime)
{
    m_invalidStatTime = _invalidStatTime;
    m_invalidStatTimeHasBeenSet = true;
}

bool AlgDetectJS::InvalidStatTimeHasBeenSet() const
{
    return m_invalidStatTimeHasBeenSet;
}

int64_t AlgDetectJS::GetInvalidThreshold() const
{
    return m_invalidThreshold;
}

void AlgDetectJS::SetInvalidThreshold(const int64_t& _invalidThreshold)
{
    m_invalidThreshold = _invalidThreshold;
    m_invalidThresholdHasBeenSet = true;
}

bool AlgDetectJS::InvalidThresholdHasBeenSet() const
{
    return m_invalidThresholdHasBeenSet;
}

vector<AlgDetectResult> AlgDetectJS::GetAlgDetectResults() const
{
    return m_algDetectResults;
}

void AlgDetectJS::SetAlgDetectResults(const vector<AlgDetectResult>& _algDetectResults)
{
    m_algDetectResults = _algDetectResults;
    m_algDetectResultsHasBeenSet = true;
}

bool AlgDetectJS::AlgDetectResultsHasBeenSet() const
{
    return m_algDetectResultsHasBeenSet;
}


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

#include <tencentcloud/teo/v20220901/model/AlgDetectSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AlgDetectSession::AlgDetectSession() :
    m_nameHasBeenSet(false),
    m_detectModeHasBeenSet(false),
    m_sessionAnalyzeSwitchHasBeenSet(false),
    m_invalidStatTimeHasBeenSet(false),
    m_invalidThresholdHasBeenSet(false),
    m_algDetectResultsHasBeenSet(false),
    m_sessionBehaviorsHasBeenSet(false)
{
}

CoreInternalOutcome AlgDetectSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DetectMode") && !value["DetectMode"].IsNull())
    {
        if (!value["DetectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.DetectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectMode = string(value["DetectMode"].GetString());
        m_detectModeHasBeenSet = true;
    }

    if (value.HasMember("SessionAnalyzeSwitch") && !value["SessionAnalyzeSwitch"].IsNull())
    {
        if (!value["SessionAnalyzeSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.SessionAnalyzeSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAnalyzeSwitch = string(value["SessionAnalyzeSwitch"].GetString());
        m_sessionAnalyzeSwitchHasBeenSet = true;
    }

    if (value.HasMember("InvalidStatTime") && !value["InvalidStatTime"].IsNull())
    {
        if (!value["InvalidStatTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.InvalidStatTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidStatTime = value["InvalidStatTime"].GetInt64();
        m_invalidStatTimeHasBeenSet = true;
    }

    if (value.HasMember("InvalidThreshold") && !value["InvalidThreshold"].IsNull())
    {
        if (!value["InvalidThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.InvalidThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidThreshold = value["InvalidThreshold"].GetInt64();
        m_invalidThresholdHasBeenSet = true;
    }

    if (value.HasMember("AlgDetectResults") && !value["AlgDetectResults"].IsNull())
    {
        if (!value["AlgDetectResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.AlgDetectResults` is not array type"));

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

    if (value.HasMember("SessionBehaviors") && !value["SessionBehaviors"].IsNull())
    {
        if (!value["SessionBehaviors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlgDetectSession.SessionBehaviors` is not array type"));

        const rapidjson::Value &tmpValue = value["SessionBehaviors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlgDetectResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sessionBehaviors.push_back(item);
        }
        m_sessionBehaviorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgDetectSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_detectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAnalyzeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionAnalyzeSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionAnalyzeSwitch.c_str(), allocator).Move(), allocator);
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

    if (m_sessionBehaviorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionBehaviors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sessionBehaviors.begin(); itr != m_sessionBehaviors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AlgDetectSession::GetName() const
{
    return m_name;
}

void AlgDetectSession::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlgDetectSession::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlgDetectSession::GetDetectMode() const
{
    return m_detectMode;
}

void AlgDetectSession::SetDetectMode(const string& _detectMode)
{
    m_detectMode = _detectMode;
    m_detectModeHasBeenSet = true;
}

bool AlgDetectSession::DetectModeHasBeenSet() const
{
    return m_detectModeHasBeenSet;
}

string AlgDetectSession::GetSessionAnalyzeSwitch() const
{
    return m_sessionAnalyzeSwitch;
}

void AlgDetectSession::SetSessionAnalyzeSwitch(const string& _sessionAnalyzeSwitch)
{
    m_sessionAnalyzeSwitch = _sessionAnalyzeSwitch;
    m_sessionAnalyzeSwitchHasBeenSet = true;
}

bool AlgDetectSession::SessionAnalyzeSwitchHasBeenSet() const
{
    return m_sessionAnalyzeSwitchHasBeenSet;
}

int64_t AlgDetectSession::GetInvalidStatTime() const
{
    return m_invalidStatTime;
}

void AlgDetectSession::SetInvalidStatTime(const int64_t& _invalidStatTime)
{
    m_invalidStatTime = _invalidStatTime;
    m_invalidStatTimeHasBeenSet = true;
}

bool AlgDetectSession::InvalidStatTimeHasBeenSet() const
{
    return m_invalidStatTimeHasBeenSet;
}

int64_t AlgDetectSession::GetInvalidThreshold() const
{
    return m_invalidThreshold;
}

void AlgDetectSession::SetInvalidThreshold(const int64_t& _invalidThreshold)
{
    m_invalidThreshold = _invalidThreshold;
    m_invalidThresholdHasBeenSet = true;
}

bool AlgDetectSession::InvalidThresholdHasBeenSet() const
{
    return m_invalidThresholdHasBeenSet;
}

vector<AlgDetectResult> AlgDetectSession::GetAlgDetectResults() const
{
    return m_algDetectResults;
}

void AlgDetectSession::SetAlgDetectResults(const vector<AlgDetectResult>& _algDetectResults)
{
    m_algDetectResults = _algDetectResults;
    m_algDetectResultsHasBeenSet = true;
}

bool AlgDetectSession::AlgDetectResultsHasBeenSet() const
{
    return m_algDetectResultsHasBeenSet;
}

vector<AlgDetectResult> AlgDetectSession::GetSessionBehaviors() const
{
    return m_sessionBehaviors;
}

void AlgDetectSession::SetSessionBehaviors(const vector<AlgDetectResult>& _sessionBehaviors)
{
    m_sessionBehaviors = _sessionBehaviors;
    m_sessionBehaviorsHasBeenSet = true;
}

bool AlgDetectSession::SessionBehaviorsHasBeenSet() const
{
    return m_sessionBehaviorsHasBeenSet;
}


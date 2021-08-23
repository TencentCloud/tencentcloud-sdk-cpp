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

#include <tencentcloud/gse/v20191112/model/TimerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

TimerConfiguration::TimerConfiguration() :
    m_timerTypeHasBeenSet(false),
    m_timerValueHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TimerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimerType") && !value["TimerType"].IsNull())
    {
        if (!value["TimerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfiguration.TimerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timerType = value["TimerType"].GetInt64();
        m_timerTypeHasBeenSet = true;
    }

    if (value.HasMember("TimerValue") && !value["TimerValue"].IsNull())
    {
        if (!value["TimerValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfiguration.TimerValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timerValue.Deserialize(value["TimerValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timerValueHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfiguration.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerConfiguration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timerType, allocator);
    }

    if (m_timerValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timerValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TimerConfiguration::GetTimerType() const
{
    return m_timerType;
}

void TimerConfiguration::SetTimerType(const int64_t& _timerType)
{
    m_timerType = _timerType;
    m_timerTypeHasBeenSet = true;
}

bool TimerConfiguration::TimerTypeHasBeenSet() const
{
    return m_timerTypeHasBeenSet;
}

TimerValue TimerConfiguration::GetTimerValue() const
{
    return m_timerValue;
}

void TimerConfiguration::SetTimerValue(const TimerValue& _timerValue)
{
    m_timerValue = _timerValue;
    m_timerValueHasBeenSet = true;
}

bool TimerConfiguration::TimerValueHasBeenSet() const
{
    return m_timerValueHasBeenSet;
}

string TimerConfiguration::GetBeginTime() const
{
    return m_beginTime;
}

void TimerConfiguration::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool TimerConfiguration::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string TimerConfiguration::GetEndTime() const
{
    return m_endTime;
}

void TimerConfiguration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimerConfiguration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


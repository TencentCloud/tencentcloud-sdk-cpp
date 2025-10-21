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

#include <tencentcloud/mps/v20190612/model/TimeSpotCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TimeSpotCheck::TimeSpotCheck() :
    m_checkDurationHasBeenSet(false),
    m_checkIntervalHasBeenSet(false),
    m_skipDurationHasBeenSet(false),
    m_circlesNumberHasBeenSet(false)
{
}

CoreInternalOutcome TimeSpotCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckDuration") && !value["CheckDuration"].IsNull())
    {
        if (!value["CheckDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpotCheck.CheckDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkDuration = value["CheckDuration"].GetUint64();
        m_checkDurationHasBeenSet = true;
    }

    if (value.HasMember("CheckInterval") && !value["CheckInterval"].IsNull())
    {
        if (!value["CheckInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpotCheck.CheckInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkInterval = value["CheckInterval"].GetUint64();
        m_checkIntervalHasBeenSet = true;
    }

    if (value.HasMember("SkipDuration") && !value["SkipDuration"].IsNull())
    {
        if (!value["SkipDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpotCheck.SkipDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_skipDuration = value["SkipDuration"].GetUint64();
        m_skipDurationHasBeenSet = true;
    }

    if (value.HasMember("CirclesNumber") && !value["CirclesNumber"].IsNull())
    {
        if (!value["CirclesNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpotCheck.CirclesNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_circlesNumber = value["CirclesNumber"].GetUint64();
        m_circlesNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeSpotCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkDuration, allocator);
    }

    if (m_checkIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkInterval, allocator);
    }

    if (m_skipDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipDuration, allocator);
    }

    if (m_circlesNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CirclesNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_circlesNumber, allocator);
    }

}


uint64_t TimeSpotCheck::GetCheckDuration() const
{
    return m_checkDuration;
}

void TimeSpotCheck::SetCheckDuration(const uint64_t& _checkDuration)
{
    m_checkDuration = _checkDuration;
    m_checkDurationHasBeenSet = true;
}

bool TimeSpotCheck::CheckDurationHasBeenSet() const
{
    return m_checkDurationHasBeenSet;
}

uint64_t TimeSpotCheck::GetCheckInterval() const
{
    return m_checkInterval;
}

void TimeSpotCheck::SetCheckInterval(const uint64_t& _checkInterval)
{
    m_checkInterval = _checkInterval;
    m_checkIntervalHasBeenSet = true;
}

bool TimeSpotCheck::CheckIntervalHasBeenSet() const
{
    return m_checkIntervalHasBeenSet;
}

uint64_t TimeSpotCheck::GetSkipDuration() const
{
    return m_skipDuration;
}

void TimeSpotCheck::SetSkipDuration(const uint64_t& _skipDuration)
{
    m_skipDuration = _skipDuration;
    m_skipDurationHasBeenSet = true;
}

bool TimeSpotCheck::SkipDurationHasBeenSet() const
{
    return m_skipDurationHasBeenSet;
}

uint64_t TimeSpotCheck::GetCirclesNumber() const
{
    return m_circlesNumber;
}

void TimeSpotCheck::SetCirclesNumber(const uint64_t& _circlesNumber)
{
    m_circlesNumber = _circlesNumber;
    m_circlesNumberHasBeenSet = true;
}

bool TimeSpotCheck::CirclesNumberHasBeenSet() const
{
    return m_circlesNumberHasBeenSet;
}


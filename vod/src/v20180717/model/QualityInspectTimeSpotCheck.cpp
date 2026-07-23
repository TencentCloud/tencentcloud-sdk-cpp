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

#include <tencentcloud/vod/v20180717/model/QualityInspectTimeSpotCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectTimeSpotCheck::QualityInspectTimeSpotCheck() :
    m_checkDurationHasBeenSet(false),
    m_checkIntervalHasBeenSet(false),
    m_skipDurationHasBeenSet(false),
    m_circlesNumberHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectTimeSpotCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckDuration") && !value["CheckDuration"].IsNull())
    {
        if (!value["CheckDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTimeSpotCheck.CheckDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkDuration = value["CheckDuration"].GetInt64();
        m_checkDurationHasBeenSet = true;
    }

    if (value.HasMember("CheckInterval") && !value["CheckInterval"].IsNull())
    {
        if (!value["CheckInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTimeSpotCheck.CheckInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkInterval = value["CheckInterval"].GetInt64();
        m_checkIntervalHasBeenSet = true;
    }

    if (value.HasMember("SkipDuration") && !value["SkipDuration"].IsNull())
    {
        if (!value["SkipDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTimeSpotCheck.SkipDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skipDuration = value["SkipDuration"].GetInt64();
        m_skipDurationHasBeenSet = true;
    }

    if (value.HasMember("CirclesNumber") && !value["CirclesNumber"].IsNull())
    {
        if (!value["CirclesNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTimeSpotCheck.CirclesNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_circlesNumber = value["CirclesNumber"].GetInt64();
        m_circlesNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectTimeSpotCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t QualityInspectTimeSpotCheck::GetCheckDuration() const
{
    return m_checkDuration;
}

void QualityInspectTimeSpotCheck::SetCheckDuration(const int64_t& _checkDuration)
{
    m_checkDuration = _checkDuration;
    m_checkDurationHasBeenSet = true;
}

bool QualityInspectTimeSpotCheck::CheckDurationHasBeenSet() const
{
    return m_checkDurationHasBeenSet;
}

int64_t QualityInspectTimeSpotCheck::GetCheckInterval() const
{
    return m_checkInterval;
}

void QualityInspectTimeSpotCheck::SetCheckInterval(const int64_t& _checkInterval)
{
    m_checkInterval = _checkInterval;
    m_checkIntervalHasBeenSet = true;
}

bool QualityInspectTimeSpotCheck::CheckIntervalHasBeenSet() const
{
    return m_checkIntervalHasBeenSet;
}

int64_t QualityInspectTimeSpotCheck::GetSkipDuration() const
{
    return m_skipDuration;
}

void QualityInspectTimeSpotCheck::SetSkipDuration(const int64_t& _skipDuration)
{
    m_skipDuration = _skipDuration;
    m_skipDurationHasBeenSet = true;
}

bool QualityInspectTimeSpotCheck::SkipDurationHasBeenSet() const
{
    return m_skipDurationHasBeenSet;
}

int64_t QualityInspectTimeSpotCheck::GetCirclesNumber() const
{
    return m_circlesNumber;
}

void QualityInspectTimeSpotCheck::SetCirclesNumber(const int64_t& _circlesNumber)
{
    m_circlesNumber = _circlesNumber;
    m_circlesNumberHasBeenSet = true;
}

bool QualityInspectTimeSpotCheck::CirclesNumberHasBeenSet() const
{
    return m_circlesNumberHasBeenSet;
}


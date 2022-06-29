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

#include <tencentcloud/cpdp/v20190820/model/CloudGlobalPayTimeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudGlobalPayTimeInfo::CloudGlobalPayTimeInfo() :
    m_startTimestampHasBeenSet(false),
    m_expireTimestampHasBeenSet(false),
    m_timeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome CloudGlobalPayTimeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudGlobalPayTimeInfo.StartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = value["StartTimestamp"].GetInt64();
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("ExpireTimestamp") && !value["ExpireTimestamp"].IsNull())
    {
        if (!value["ExpireTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudGlobalPayTimeInfo.ExpireTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTimestamp = value["ExpireTimestamp"].GetInt64();
        m_expireTimestampHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudGlobalPayTimeInfo.TimeOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetInt64();
        m_timeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudGlobalPayTimeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_expireTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTimestamp, allocator);
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

}


int64_t CloudGlobalPayTimeInfo::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void CloudGlobalPayTimeInfo::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool CloudGlobalPayTimeInfo::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t CloudGlobalPayTimeInfo::GetExpireTimestamp() const
{
    return m_expireTimestamp;
}

void CloudGlobalPayTimeInfo::SetExpireTimestamp(const int64_t& _expireTimestamp)
{
    m_expireTimestamp = _expireTimestamp;
    m_expireTimestampHasBeenSet = true;
}

bool CloudGlobalPayTimeInfo::ExpireTimestampHasBeenSet() const
{
    return m_expireTimestampHasBeenSet;
}

int64_t CloudGlobalPayTimeInfo::GetTimeOffset() const
{
    return m_timeOffset;
}

void CloudGlobalPayTimeInfo::SetTimeOffset(const int64_t& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool CloudGlobalPayTimeInfo::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}


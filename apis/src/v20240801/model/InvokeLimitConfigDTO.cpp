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

#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

InvokeLimitConfigDTO::InvokeLimitConfigDTO() :
    m_typeHasBeenSet(false),
    m_tokenBucketMaxNumHasBeenSet(false),
    m_tokenBucketRateHasBeenSet(false),
    m_funnelMaxNumHasBeenSet(false),
    m_funnelRateHasBeenSet(false),
    m_slidingWindowMaxNumHasBeenSet(false),
    m_slidingWindowSizeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_timeWindowIntervalHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome InvokeLimitConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TokenBucketMaxNum") && !value["TokenBucketMaxNum"].IsNull())
    {
        if (!value["TokenBucketMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.TokenBucketMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenBucketMaxNum = value["TokenBucketMaxNum"].GetInt64();
        m_tokenBucketMaxNumHasBeenSet = true;
    }

    if (value.HasMember("TokenBucketRate") && !value["TokenBucketRate"].IsNull())
    {
        if (!value["TokenBucketRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.TokenBucketRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenBucketRate = value["TokenBucketRate"].GetInt64();
        m_tokenBucketRateHasBeenSet = true;
    }

    if (value.HasMember("FunnelMaxNum") && !value["FunnelMaxNum"].IsNull())
    {
        if (!value["FunnelMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.FunnelMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_funnelMaxNum = value["FunnelMaxNum"].GetInt64();
        m_funnelMaxNumHasBeenSet = true;
    }

    if (value.HasMember("FunnelRate") && !value["FunnelRate"].IsNull())
    {
        if (!value["FunnelRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.FunnelRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_funnelRate = value["FunnelRate"].GetInt64();
        m_funnelRateHasBeenSet = true;
    }

    if (value.HasMember("SlidingWindowMaxNum") && !value["SlidingWindowMaxNum"].IsNull())
    {
        if (!value["SlidingWindowMaxNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.SlidingWindowMaxNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slidingWindowMaxNum = value["SlidingWindowMaxNum"].GetInt64();
        m_slidingWindowMaxNumHasBeenSet = true;
    }

    if (value.HasMember("SlidingWindowSize") && !value["SlidingWindowSize"].IsNull())
    {
        if (!value["SlidingWindowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.SlidingWindowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slidingWindowSize = value["SlidingWindowSize"].GetInt64();
        m_slidingWindowSizeHasBeenSet = true;
    }

    if (value.HasMember("TimeWindow") && !value["TimeWindow"].IsNull())
    {
        if (!value["TimeWindow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.TimeWindow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeWindow = value["TimeWindow"].GetInt64();
        m_timeWindowHasBeenSet = true;
    }

    if (value.HasMember("TimeWindowInterval") && !value["TimeWindowInterval"].IsNull())
    {
        if (!value["TimeWindowInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.TimeWindowInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeWindowInterval = value["TimeWindowInterval"].GetInt64();
        m_timeWindowIntervalHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvokeLimitConfigDTO.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvokeLimitConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenBucketMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenBucketMaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenBucketMaxNum, allocator);
    }

    if (m_tokenBucketRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenBucketRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenBucketRate, allocator);
    }

    if (m_funnelMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunnelMaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_funnelMaxNum, allocator);
    }

    if (m_funnelRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunnelRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_funnelRate, allocator);
    }

    if (m_slidingWindowMaxNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlidingWindowMaxNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slidingWindowMaxNum, allocator);
    }

    if (m_slidingWindowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlidingWindowSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slidingWindowSize, allocator);
    }

    if (m_timeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeWindow, allocator);
    }

    if (m_timeWindowIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWindowInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeWindowInterval, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


string InvokeLimitConfigDTO::GetType() const
{
    return m_type;
}

void InvokeLimitConfigDTO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetTokenBucketMaxNum() const
{
    return m_tokenBucketMaxNum;
}

void InvokeLimitConfigDTO::SetTokenBucketMaxNum(const int64_t& _tokenBucketMaxNum)
{
    m_tokenBucketMaxNum = _tokenBucketMaxNum;
    m_tokenBucketMaxNumHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TokenBucketMaxNumHasBeenSet() const
{
    return m_tokenBucketMaxNumHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetTokenBucketRate() const
{
    return m_tokenBucketRate;
}

void InvokeLimitConfigDTO::SetTokenBucketRate(const int64_t& _tokenBucketRate)
{
    m_tokenBucketRate = _tokenBucketRate;
    m_tokenBucketRateHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TokenBucketRateHasBeenSet() const
{
    return m_tokenBucketRateHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetFunnelMaxNum() const
{
    return m_funnelMaxNum;
}

void InvokeLimitConfigDTO::SetFunnelMaxNum(const int64_t& _funnelMaxNum)
{
    m_funnelMaxNum = _funnelMaxNum;
    m_funnelMaxNumHasBeenSet = true;
}

bool InvokeLimitConfigDTO::FunnelMaxNumHasBeenSet() const
{
    return m_funnelMaxNumHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetFunnelRate() const
{
    return m_funnelRate;
}

void InvokeLimitConfigDTO::SetFunnelRate(const int64_t& _funnelRate)
{
    m_funnelRate = _funnelRate;
    m_funnelRateHasBeenSet = true;
}

bool InvokeLimitConfigDTO::FunnelRateHasBeenSet() const
{
    return m_funnelRateHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetSlidingWindowMaxNum() const
{
    return m_slidingWindowMaxNum;
}

void InvokeLimitConfigDTO::SetSlidingWindowMaxNum(const int64_t& _slidingWindowMaxNum)
{
    m_slidingWindowMaxNum = _slidingWindowMaxNum;
    m_slidingWindowMaxNumHasBeenSet = true;
}

bool InvokeLimitConfigDTO::SlidingWindowMaxNumHasBeenSet() const
{
    return m_slidingWindowMaxNumHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetSlidingWindowSize() const
{
    return m_slidingWindowSize;
}

void InvokeLimitConfigDTO::SetSlidingWindowSize(const int64_t& _slidingWindowSize)
{
    m_slidingWindowSize = _slidingWindowSize;
    m_slidingWindowSizeHasBeenSet = true;
}

bool InvokeLimitConfigDTO::SlidingWindowSizeHasBeenSet() const
{
    return m_slidingWindowSizeHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetTimeWindow() const
{
    return m_timeWindow;
}

void InvokeLimitConfigDTO::SetTimeWindow(const int64_t& _timeWindow)
{
    m_timeWindow = _timeWindow;
    m_timeWindowHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TimeWindowHasBeenSet() const
{
    return m_timeWindowHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetTimeWindowInterval() const
{
    return m_timeWindowInterval;
}

void InvokeLimitConfigDTO::SetTimeWindowInterval(const int64_t& _timeWindowInterval)
{
    m_timeWindowInterval = _timeWindowInterval;
    m_timeWindowIntervalHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TimeWindowIntervalHasBeenSet() const
{
    return m_timeWindowIntervalHasBeenSet;
}

int64_t InvokeLimitConfigDTO::GetTimeout() const
{
    return m_timeout;
}

void InvokeLimitConfigDTO::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool InvokeLimitConfigDTO::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


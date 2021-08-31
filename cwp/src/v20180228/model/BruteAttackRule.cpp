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

#include <tencentcloud/cwp/v20180228/model/BruteAttackRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BruteAttackRule::BruteAttackRule() :
    m_timeRangeHasBeenSet(false),
    m_loginFailTimesHasBeenSet(false)
{
}

CoreInternalOutcome BruteAttackRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRule.TimeRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = value["TimeRange"].GetUint64();
        m_timeRangeHasBeenSet = true;
    }

    if (value.HasMember("LoginFailTimes") && !value["LoginFailTimes"].IsNull())
    {
        if (!value["LoginFailTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRule.LoginFailTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFailTimes = value["LoginFailTimes"].GetUint64();
        m_loginFailTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BruteAttackRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeRange, allocator);
    }

    if (m_loginFailTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFailTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginFailTimes, allocator);
    }

}


uint64_t BruteAttackRule::GetTimeRange() const
{
    return m_timeRange;
}

void BruteAttackRule::SetTimeRange(const uint64_t& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool BruteAttackRule::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

uint64_t BruteAttackRule::GetLoginFailTimes() const
{
    return m_loginFailTimes;
}

void BruteAttackRule::SetLoginFailTimes(const uint64_t& _loginFailTimes)
{
    m_loginFailTimes = _loginFailTimes;
    m_loginFailTimesHasBeenSet = true;
}

bool BruteAttackRule::LoginFailTimesHasBeenSet() const
{
    return m_loginFailTimesHasBeenSet;
}


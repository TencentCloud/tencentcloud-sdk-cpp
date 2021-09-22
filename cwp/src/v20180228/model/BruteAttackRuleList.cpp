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

#include <tencentcloud/cwp/v20180228/model/BruteAttackRuleList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BruteAttackRuleList::BruteAttackRuleList() :
    m_timeRangeHasBeenSet(false),
    m_loginFailTimesHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_timeRangeDefaultHasBeenSet(false),
    m_loginFailTimesDefaultHasBeenSet(false)
{
}

CoreInternalOutcome BruteAttackRuleList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRuleList.TimeRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = value["TimeRange"].GetUint64();
        m_timeRangeHasBeenSet = true;
    }

    if (value.HasMember("LoginFailTimes") && !value["LoginFailTimes"].IsNull())
    {
        if (!value["LoginFailTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRuleList.LoginFailTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFailTimes = value["LoginFailTimes"].GetUint64();
        m_loginFailTimesHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRuleList.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("TimeRangeDefault") && !value["TimeRangeDefault"].IsNull())
    {
        if (!value["TimeRangeDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRuleList.TimeRangeDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeDefault = value["TimeRangeDefault"].GetUint64();
        m_timeRangeDefaultHasBeenSet = true;
    }

    if (value.HasMember("LoginFailTimesDefault") && !value["LoginFailTimesDefault"].IsNull())
    {
        if (!value["LoginFailTimesDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackRuleList.LoginFailTimesDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFailTimesDefault = value["LoginFailTimesDefault"].GetUint64();
        m_loginFailTimesDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BruteAttackRuleList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_timeRangeDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeRangeDefault, allocator);
    }

    if (m_loginFailTimesDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFailTimesDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginFailTimesDefault, allocator);
    }

}


uint64_t BruteAttackRuleList::GetTimeRange() const
{
    return m_timeRange;
}

void BruteAttackRuleList::SetTimeRange(const uint64_t& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool BruteAttackRuleList::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

uint64_t BruteAttackRuleList::GetLoginFailTimes() const
{
    return m_loginFailTimes;
}

void BruteAttackRuleList::SetLoginFailTimes(const uint64_t& _loginFailTimes)
{
    m_loginFailTimes = _loginFailTimes;
    m_loginFailTimesHasBeenSet = true;
}

bool BruteAttackRuleList::LoginFailTimesHasBeenSet() const
{
    return m_loginFailTimesHasBeenSet;
}

bool BruteAttackRuleList::GetEnable() const
{
    return m_enable;
}

void BruteAttackRuleList::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool BruteAttackRuleList::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t BruteAttackRuleList::GetTimeRangeDefault() const
{
    return m_timeRangeDefault;
}

void BruteAttackRuleList::SetTimeRangeDefault(const uint64_t& _timeRangeDefault)
{
    m_timeRangeDefault = _timeRangeDefault;
    m_timeRangeDefaultHasBeenSet = true;
}

bool BruteAttackRuleList::TimeRangeDefaultHasBeenSet() const
{
    return m_timeRangeDefaultHasBeenSet;
}

uint64_t BruteAttackRuleList::GetLoginFailTimesDefault() const
{
    return m_loginFailTimesDefault;
}

void BruteAttackRuleList::SetLoginFailTimesDefault(const uint64_t& _loginFailTimesDefault)
{
    m_loginFailTimesDefault = _loginFailTimesDefault;
    m_loginFailTimesDefaultHasBeenSet = true;
}

bool BruteAttackRuleList::LoginFailTimesDefaultHasBeenSet() const
{
    return m_loginFailTimesDefaultHasBeenSet;
}

